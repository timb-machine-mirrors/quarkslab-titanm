// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nugget/app/identity/identity_defs.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_nugget_2fapp_2fidentity_2fidentity_5fdefs_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_nugget_2fapp_2fidentity_2fidentity_5fdefs_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_nugget_2fapp_2fidentity_2fidentity_5fdefs_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_nugget_2fapp_2fidentity_2fidentity_5fdefs_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_nugget_2fapp_2fidentity_2fidentity_5fdefs_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_nugget_2fapp_2fidentity_2fidentity_5fdefs_2eproto_metadata_getter(int index);
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace nugget {
namespace app {
namespace identity {

enum ResultCode : int {
  STATUS_OK = 0,
  STATUS_FAILED = 1,
  STATUS_CIPHER_SUITE_NOT_SUPPORTED = 2,
  STATUS_INVALID_DATA = 3,
  STATUS_INVALID_AUTH_TOKEN = 4,
  STATUS_INVALID_ITEMS_REQUEST_MESSAGE = 5,
  STATUS_READER_SIGNATURE_CHECK_FAILED = 6,
  STATUS_EPHEMERAL_PUBLIC_KEY_NOT_FOUND = 7,
  STATUS_USER_AUTHENTICATION_FAILED = 8,
  STATUS_READER_AUTHENTICATION_FAILED = 9,
  STATUS_NO_ACCESS_CONTROL_PROFILES = 10,
  STATUS_NOT_IN_REQUEST_MESSAGE = 11,
  STATUS_SESSION_TRANSCRIPT_MISMATCH = 12,
  ResultCode_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ResultCode_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ResultCode_IsValid(int value);
constexpr ResultCode ResultCode_MIN = STATUS_OK;
constexpr ResultCode ResultCode_MAX = STATUS_SESSION_TRANSCRIPT_MISMATCH;
constexpr int ResultCode_ARRAYSIZE = ResultCode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ResultCode_descriptor();
template<typename T>
inline const std::string& ResultCode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ResultCode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ResultCode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ResultCode_descriptor(), enum_t_value);
}
inline bool ResultCode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ResultCode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ResultCode>(
    ResultCode_descriptor(), name, value);
}
enum EicAccessCheckResult : int {
  EIC_ACCESS_CHECK_RESULT_OK = 0,
  EIC_ACCESS_CHECK_RESULT_FAILED = 1,
  EIC_ACCESS_CHECK_RESULT_NO_ACCESS_CONTROL_PROFILES = 2,
  EIC_ACCESS_CHECK_RESULT_USER_AUTHENTICATION_FAILED = 3,
  EIC_ACCESS_CHECK_RESULT_READER_AUTHENTICATION_FAILED = 4,
  EicAccessCheckResult_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EicAccessCheckResult_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EicAccessCheckResult_IsValid(int value);
constexpr EicAccessCheckResult EicAccessCheckResult_MIN = EIC_ACCESS_CHECK_RESULT_OK;
constexpr EicAccessCheckResult EicAccessCheckResult_MAX = EIC_ACCESS_CHECK_RESULT_READER_AUTHENTICATION_FAILED;
constexpr int EicAccessCheckResult_ARRAYSIZE = EicAccessCheckResult_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EicAccessCheckResult_descriptor();
template<typename T>
inline const std::string& EicAccessCheckResult_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EicAccessCheckResult>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EicAccessCheckResult_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EicAccessCheckResult_descriptor(), enum_t_value);
}
inline bool EicAccessCheckResult_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EicAccessCheckResult* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EicAccessCheckResult>(
    EicAccessCheckResult_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace identity
}  // namespace app
}  // namespace nugget

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::nugget::app::identity::ResultCode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::nugget::app::identity::ResultCode>() {
  return ::nugget::app::identity::ResultCode_descriptor();
}
template <> struct is_proto_enum< ::nugget::app::identity::EicAccessCheckResult> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::nugget::app::identity::EicAccessCheckResult>() {
  return ::nugget::app::identity::EicAccessCheckResult_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_nugget_2fapp_2fidentity_2fidentity_5fdefs_2eproto
