// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nugget/protobuf/options.proto

#include "nugget/protobuf/options.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace nugget {
namespace protobuf {
}  // namespace protobuf
}  // namespace nugget
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_nugget_2fprotobuf_2foptions_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_nugget_2fprotobuf_2foptions_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_nugget_2fprotobuf_2foptions_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_nugget_2fprotobuf_2foptions_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_nugget_2fprotobuf_2foptions_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035nugget/protobuf/options.proto\022\017nugget."
  "protobuf\032 google/protobuf/descriptor.pro"
  "to:0\n\006app_id\022\037.google.protobuf.ServiceOp"
  "tions\030\320\017 \001(\t:2\n\010app_name\022\037.google.protob"
  "uf.ServiceOptions\030\321\017 \001(\t:5\n\013app_version\022"
  "\037.google.protobuf.ServiceOptions\030\322\017 \001(\r:"
  "=\n\023request_buffer_size\022\037.google.protobuf"
  ".ServiceOptions\030\323\017 \001(\r:>\n\024response_buffe"
  "r_size\022\037.google.protobuf.ServiceOptions\030"
  "\324\017 \001(\r"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_nugget_2fprotobuf_2foptions_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_nugget_2fprotobuf_2foptions_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_nugget_2fprotobuf_2foptions_2eproto = {
  false, false, 366, descriptor_table_protodef_nugget_2fprotobuf_2foptions_2eproto, "nugget/protobuf/options.proto", 
  &descriptor_table_nugget_2fprotobuf_2foptions_2eproto_once, descriptor_table_nugget_2fprotobuf_2foptions_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_nugget_2fprotobuf_2foptions_2eproto::offsets,
  file_level_metadata_nugget_2fprotobuf_2foptions_2eproto, file_level_enum_descriptors_nugget_2fprotobuf_2foptions_2eproto, file_level_service_descriptors_nugget_2fprotobuf_2foptions_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_nugget_2fprotobuf_2foptions_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_nugget_2fprotobuf_2foptions_2eproto);
  return descriptor_table_nugget_2fprotobuf_2foptions_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_nugget_2fprotobuf_2foptions_2eproto(&descriptor_table_nugget_2fprotobuf_2foptions_2eproto);
namespace nugget {
namespace protobuf {
const std::string app_id_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  app_id(kAppIdFieldNumber, app_id_default);
const std::string app_name_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  app_name(kAppNameFieldNumber, app_name_default);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< ::PROTOBUF_NAMESPACE_ID::uint32 >, 13, false >
  app_version(kAppVersionFieldNumber, 0u);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< ::PROTOBUF_NAMESPACE_ID::uint32 >, 13, false >
  request_buffer_size(kRequestBufferSizeFieldNumber, 0u);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< ::PROTOBUF_NAMESPACE_ID::uint32 >, 13, false >
  response_buffer_size(kResponseBufferSizeFieldNumber, 0u);

// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace nugget
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
