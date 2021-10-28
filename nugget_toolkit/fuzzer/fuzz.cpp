#include "fuzz.h"

#include <nos/NuggetClient.h>
#include <nostypes.h>
#include <nosutils.h>
#include <stdlib.h>
#include <unistd.h>

#include <chrono>
#include <fstream>
#include <iostream>

#include "include/log.h"
#include "src/mutator.h"
#include "utils.h"

using std::cout;
using std::endl;

using namespace nostypes;

const std::map<int, App> map_appid = {
    {1, Keymaster}, {2, Weaver}, {3, Identity}};

const std::map<App, int> app_request_size = {
    {AVB, 2200}, {Keymaster, 3072}, {Weaver, 64}, {Identity, 1024}};

/*
This dictionary is used to hold commands that we do not want to fuzz.
A command would end up here if:
- is buggy, and we don't want to hit the same bug over and over;
- returns application-specific error codes that would require custom handling;
- for whatever reason it should not be fuzzed.
*/
// spoiler alert: these are the buggy commands we found on 2020-09-25
// const std::map<App, std::set<int>> app_blocklisted_cmds = {
//     {AVB, {}},
//     {Keymaster, {27, 33}},
//     {Weaver, {Read, Write}},
//     {Identity, {3, 4, 6, 12, 13, 17}}};
std::map<App, std::set<int>> app_blocklisted_cmds = {
    {AVB, {}}, {Keymaster, {}}, {Weaver, {}}, {Identity, {}}};

int fuzz(bool verbose) {
  protobuf_mutator::Mutator *mutator = new protobuf_mutator::Mutator();

  bool continue_at_crash = false;

  // some support variables for statistics
  int zeros = 0;
  int ones = 0;
  // if this goes above a certain threshold, we may want to directly delete
  // messages types from nostypes. Beware of possible indexing errors.
  int dropped_blocklisted = 0;
  auto t_start = std::chrono::high_resolution_clock::now();

  nos::NuggetClient client(CITADEL_DEV);
  client.Open();

  if (!client.IsOpen()) {
    std::cerr << "Error opening client" << std::endl;
    exit(1);
  }

  const int seed = 42;
  srand(seed);
  mutator->Seed(seed);

  // check commands returning 1
  // 0 should be the default, we don't really need to keep track of it
  // >1 makes the fuzzer stop
  std::map<App, std::map<int, int>> ret_codes;
  ret_codes[Keymaster] = {};
  ret_codes[Weaver] = {};
  ret_codes[Identity] = {};

  // keymaster hardcoded values
  // read blob from file
  fstream readblob("blob", ios::in | ios::binary);
  nugget::app::keymaster::KeyBlob *key_blob =
      new nugget::app::keymaster::KeyBlob();
  if (!key_blob->ParseFromIstream(&readblob)) {
    cerr << "Failed to read key blob" << endl;
    cerr << "Run the client with keyblob argument to generate one" << endl;
  } else {
    // basic corpus creation: set a valid blob to the commands that need it
    nugget::app::keymaster::KeyBlob *tmp_blob;

    tmp_blob =
        static_cast<nugget::app::keymaster::GetKeyCharacteristicsRequest *>(
            keymasterCmds.at(GetKeyCharacteristics).request)
            ->mutable_blob();
    tmp_blob->CopyFrom(*key_blob);

    tmp_blob = static_cast<nugget::app::keymaster::ExportKeyRequest *>(
                   keymasterCmds.at(ExportKey).request)
                   ->mutable_blob();
    tmp_blob->CopyFrom(*key_blob);

    tmp_blob = static_cast<nugget::app::keymaster::StartAttestKeyRequest *>(
                   keymasterCmds.at(StartAttestKey).request)
                   ->mutable_blob();
    tmp_blob->CopyFrom(*key_blob);

    tmp_blob = static_cast<nugget::app::keymaster::UpgradeKeyRequest *>(
                   keymasterCmds.at(UpgradeKey).request)
                   ->mutable_blob();
    tmp_blob->CopyFrom(*key_blob);

    tmp_blob = static_cast<nugget::app::keymaster::BeginOperationRequest *>(
                   keymasterCmds.at(BeginOperation).request)
                   ->mutable_blob();
    tmp_blob->CopyFrom(*key_blob);

    tmp_blob = static_cast<nugget::app::keymaster::ImportWrappedKeyRequest *>(
                   keymasterCmds.at(ImportWrappedKey).request)
                   ->mutable_wrapping_key_blob();
    tmp_blob->CopyFrom(*key_blob);
  }

  while (1) {
    int current = rand() % 3 + 1;
    App app_id;
    // find the right app name based on the random number
    if (map_appid.find(current) != map_appid.end())
      app_id = map_appid.at(current);

    std::string serialized_test;
    int cmd_id;
    NosCmd *current_cmd;

    switch (app_id) {
      case Keymaster: {
        cmd_id = rand() % keymasterCmds.size();
        current_cmd = &keymasterCmds.at(cmd_id);
        mutator->Mutate(current_cmd->request, app_request_size.at(Keymaster));

        current_cmd->request->SerializeToString(&serialized_test);
        break;
      }
      case Weaver: {
        cmd_id = rand() % weaverCmds.size();
        current_cmd = &weaverCmds.at(cmd_id);
        mutator->Mutate(current_cmd->request, app_request_size.at(Weaver));

        current_cmd->request->SerializeToString(&serialized_test);
        break;
      }
      case Identity: {
        cmd_id = rand() % identityCmds.size();
        current_cmd = &identityCmds.at(cmd_id);
        mutator->Mutate(current_cmd->request, app_request_size.at(Identity));

        current_cmd->request->SerializeToString(&serialized_test);
        break;
      }
      default: {
        continue;
      }
    }

    bool excluded_cmd = app_blocklisted_cmds.at(app_id).find(cmd_id) !=
                        app_blocklisted_cmds.at(app_id).end();
    if (excluded_cmd) {
      dropped_blocklisted++;
      continue;
    }

    std::vector<uint8_t> request_vector(serialized_test.begin(),
                                        serialized_test.end());

    uint32_t ret;
    if (verbose) {
      std::vector<uint8_t> resp_vec;
      resp_vec.resize(MAX_RESPONSE_SIZE);

      ret = client.CallApp(app_id, cmd_id, request_vector, &resp_vec);

      std::string resp_str(resp_vec.begin(), resp_vec.end());
      current_cmd->reply->ParseFromString(resp_str);

      // retrieve app name
      auto appit = g_nosAppsMap.find(app_id);
      if (appit == g_nosAppsMap.end()) {
        cout << "Something went wrong, app_id: " << app_id << endl;
        exit(1);
      }
      auto app = appit->second;

      // nostypes::printNosCommand(app.name, current_cmd->name,
      // *current_cmd->request, *current_cmd->reply);

      cout << app.name << " " << current_cmd->name << endl;
      cout << "Return code: " << ret << endl;
      cout << "Request:\n";
      current_cmd->request->PrintDebugString();
      cout << "Response:\n";
      current_cmd->reply->PrintDebugString();
      cout << endl;

      // If we run in verbose mode, it means we probably want to inspect what is
      // going on. For this reason, we want to fuzzer to go slowly, sleeping at
      // every iteration
      sleep(4);
    } else {
      ret = client.CallApp(app_id, cmd_id, request_vector, nullptr);
    }

    switch (ret) {
      case 0:
        zeros++;
        break;
      case 1: {
        ones++;
        if (ret_codes[app_id].find(cmd_id) == ret_codes[app_id].end())
          ret_codes[app_id][cmd_id] = 1;
        else
          ret_codes[app_id][cmd_id]++;
        break;
      }
      default: {
        cout << "Error, return code: " << ret << endl;
        cout << "App: " << app_id << ", command: " << cmd_id << endl;
        cout << "Body:" << endl;
        current_cmd->request->PrintDebugString();
        if (continue_at_crash) {
          cout << "Continuing after crash...\n";
          app_blocklisted_cmds[app_id].insert(cmd_id);
          // this is required because sometimes the chip keeps returning 4
          // also to valid commands, once it reaches this state
          if (ret == 4) {
            cout << "Resetting the chip\n";
            client.Close();
            reset();
            client.Open();
          }
        } else {
          exit(0);
        }
      }
    }

    if (!((zeros + ones) % 1000)) {
      auto t_end = std::chrono::high_resolution_clock::now();
      double elapsed_time_ms =
          std::chrono::duration<double, std::milli>(t_end - t_start).count();
      cout << "Error codes 0: " << zeros << endl;
      cout << "Error codes 1: " << ones << endl;
      cout << "Dropped (blocklisted): " << dropped_blocklisted << endl;
      cout << "Time elapsed: " << elapsed_time_ms << "ms\n";

      cout << "Commands returning 1:" << endl;
      for (const auto &el : ret_codes) {
        cout << "App " << el.first << endl;
        for (const auto &cmd : el.second)
          cout << "\t" << cmd.first << ": " << cmd.second << endl;
      }
      cout << endl;

      if (continue_at_crash) {
        cout << "Blocklisted commands:" << endl;
        for (auto const &[app, cmds] : app_blocklisted_cmds) {
          cout << app << ": ";
          for (auto const &id : cmds) {
            cout << id << " ";
          }
          cout << endl;
        }
      }

      auto t_start = std::chrono::high_resolution_clock::now();
    }
  }
  client.Close();

  delete (key_blob);
  delete (mutator);

  return 0;
}