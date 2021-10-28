/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: nugget/app/weaver/weaver.proto */

#ifndef PROTOBUF_C_nugget_2fapp_2fweaver_2fweaver_2eproto__INCLUDED
#define PROTOBUF_C_nugget_2fapp_2fweaver_2fweaver_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "nugget/protobuf/options.pb-c.h"

typedef struct _Nugget__App__Weaver__GetConfigRequest Nugget__App__Weaver__GetConfigRequest;
typedef struct _Nugget__App__Weaver__GetConfigResponse Nugget__App__Weaver__GetConfigResponse;
typedef struct _Nugget__App__Weaver__WriteRequest Nugget__App__Weaver__WriteRequest;
typedef struct _Nugget__App__Weaver__WriteResponse Nugget__App__Weaver__WriteResponse;
typedef struct _Nugget__App__Weaver__ReadRequest Nugget__App__Weaver__ReadRequest;
typedef struct _Nugget__App__Weaver__ReadResponse Nugget__App__Weaver__ReadResponse;
typedef struct _Nugget__App__Weaver__EraseValueRequest Nugget__App__Weaver__EraseValueRequest;
typedef struct _Nugget__App__Weaver__EraseValueResponse Nugget__App__Weaver__EraseValueResponse;


/* --- enums --- */

typedef enum _Nugget__App__Weaver__ReadResponse__Error {
  NUGGET__APP__WEAVER__READ_RESPONSE__ERROR__NONE = 0,
  NUGGET__APP__WEAVER__READ_RESPONSE__ERROR__WRONG_KEY = 1,
  NUGGET__APP__WEAVER__READ_RESPONSE__ERROR__THROTTLE = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(NUGGET__APP__WEAVER__READ_RESPONSE__ERROR)
} Nugget__App__Weaver__ReadResponse__Error;

/* --- messages --- */

/*
 * GetConfig
 */
struct  _Nugget__App__Weaver__GetConfigRequest
{
  ProtobufCMessage base;
};
#define NUGGET__APP__WEAVER__GET_CONFIG_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nugget__app__weaver__get_config_request__descriptor) \
     }


struct  _Nugget__App__Weaver__GetConfigResponse
{
  ProtobufCMessage base;
  uint32_t number_of_slots;
  uint32_t key_size;
  uint32_t value_size;
};
#define NUGGET__APP__WEAVER__GET_CONFIG_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nugget__app__weaver__get_config_response__descriptor) \
    , 0, 0, 0 }


/*
 * Write
 */
struct  _Nugget__App__Weaver__WriteRequest
{
  ProtobufCMessage base;
  uint32_t slot;
  ProtobufCBinaryData key;
  ProtobufCBinaryData value;
};
#define NUGGET__APP__WEAVER__WRITE_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nugget__app__weaver__write_request__descriptor) \
    , 0, {0,NULL}, {0,NULL} }


struct  _Nugget__App__Weaver__WriteResponse
{
  ProtobufCMessage base;
};
#define NUGGET__APP__WEAVER__WRITE_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nugget__app__weaver__write_response__descriptor) \
     }


/*
 * Read
 */
struct  _Nugget__App__Weaver__ReadRequest
{
  ProtobufCMessage base;
  uint32_t slot;
  ProtobufCBinaryData key;
};
#define NUGGET__APP__WEAVER__READ_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nugget__app__weaver__read_request__descriptor) \
    , 0, {0,NULL} }


struct  _Nugget__App__Weaver__ReadResponse
{
  ProtobufCMessage base;
  Nugget__App__Weaver__ReadResponse__Error error;
  uint32_t throttle_msec;
  ProtobufCBinaryData value;
};
#define NUGGET__APP__WEAVER__READ_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nugget__app__weaver__read_response__descriptor) \
    , NUGGET__APP__WEAVER__READ_RESPONSE__ERROR__NONE, 0, {0,NULL} }


/*
 * EraseValue
 */
struct  _Nugget__App__Weaver__EraseValueRequest
{
  ProtobufCMessage base;
  uint32_t slot;
};
#define NUGGET__APP__WEAVER__ERASE_VALUE_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nugget__app__weaver__erase_value_request__descriptor) \
    , 0 }


struct  _Nugget__App__Weaver__EraseValueResponse
{
  ProtobufCMessage base;
};
#define NUGGET__APP__WEAVER__ERASE_VALUE_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nugget__app__weaver__erase_value_response__descriptor) \
     }


/* Nugget__App__Weaver__GetConfigRequest methods */
void   nugget__app__weaver__get_config_request__init
                     (Nugget__App__Weaver__GetConfigRequest         *message);
size_t nugget__app__weaver__get_config_request__get_packed_size
                     (const Nugget__App__Weaver__GetConfigRequest   *message);
size_t nugget__app__weaver__get_config_request__pack
                     (const Nugget__App__Weaver__GetConfigRequest   *message,
                      uint8_t             *out);
size_t nugget__app__weaver__get_config_request__pack_to_buffer
                     (const Nugget__App__Weaver__GetConfigRequest   *message,
                      ProtobufCBuffer     *buffer);
Nugget__App__Weaver__GetConfigRequest *
       nugget__app__weaver__get_config_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nugget__app__weaver__get_config_request__free_unpacked
                     (Nugget__App__Weaver__GetConfigRequest *message,
                      ProtobufCAllocator *allocator);
/* Nugget__App__Weaver__GetConfigResponse methods */
void   nugget__app__weaver__get_config_response__init
                     (Nugget__App__Weaver__GetConfigResponse         *message);
size_t nugget__app__weaver__get_config_response__get_packed_size
                     (const Nugget__App__Weaver__GetConfigResponse   *message);
size_t nugget__app__weaver__get_config_response__pack
                     (const Nugget__App__Weaver__GetConfigResponse   *message,
                      uint8_t             *out);
size_t nugget__app__weaver__get_config_response__pack_to_buffer
                     (const Nugget__App__Weaver__GetConfigResponse   *message,
                      ProtobufCBuffer     *buffer);
Nugget__App__Weaver__GetConfigResponse *
       nugget__app__weaver__get_config_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nugget__app__weaver__get_config_response__free_unpacked
                     (Nugget__App__Weaver__GetConfigResponse *message,
                      ProtobufCAllocator *allocator);
/* Nugget__App__Weaver__WriteRequest methods */
void   nugget__app__weaver__write_request__init
                     (Nugget__App__Weaver__WriteRequest         *message);
size_t nugget__app__weaver__write_request__get_packed_size
                     (const Nugget__App__Weaver__WriteRequest   *message);
size_t nugget__app__weaver__write_request__pack
                     (const Nugget__App__Weaver__WriteRequest   *message,
                      uint8_t             *out);
size_t nugget__app__weaver__write_request__pack_to_buffer
                     (const Nugget__App__Weaver__WriteRequest   *message,
                      ProtobufCBuffer     *buffer);
Nugget__App__Weaver__WriteRequest *
       nugget__app__weaver__write_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nugget__app__weaver__write_request__free_unpacked
                     (Nugget__App__Weaver__WriteRequest *message,
                      ProtobufCAllocator *allocator);
/* Nugget__App__Weaver__WriteResponse methods */
void   nugget__app__weaver__write_response__init
                     (Nugget__App__Weaver__WriteResponse         *message);
size_t nugget__app__weaver__write_response__get_packed_size
                     (const Nugget__App__Weaver__WriteResponse   *message);
size_t nugget__app__weaver__write_response__pack
                     (const Nugget__App__Weaver__WriteResponse   *message,
                      uint8_t             *out);
size_t nugget__app__weaver__write_response__pack_to_buffer
                     (const Nugget__App__Weaver__WriteResponse   *message,
                      ProtobufCBuffer     *buffer);
Nugget__App__Weaver__WriteResponse *
       nugget__app__weaver__write_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nugget__app__weaver__write_response__free_unpacked
                     (Nugget__App__Weaver__WriteResponse *message,
                      ProtobufCAllocator *allocator);
/* Nugget__App__Weaver__ReadRequest methods */
void   nugget__app__weaver__read_request__init
                     (Nugget__App__Weaver__ReadRequest         *message);
size_t nugget__app__weaver__read_request__get_packed_size
                     (const Nugget__App__Weaver__ReadRequest   *message);
size_t nugget__app__weaver__read_request__pack
                     (const Nugget__App__Weaver__ReadRequest   *message,
                      uint8_t             *out);
size_t nugget__app__weaver__read_request__pack_to_buffer
                     (const Nugget__App__Weaver__ReadRequest   *message,
                      ProtobufCBuffer     *buffer);
Nugget__App__Weaver__ReadRequest *
       nugget__app__weaver__read_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nugget__app__weaver__read_request__free_unpacked
                     (Nugget__App__Weaver__ReadRequest *message,
                      ProtobufCAllocator *allocator);
/* Nugget__App__Weaver__ReadResponse methods */
void   nugget__app__weaver__read_response__init
                     (Nugget__App__Weaver__ReadResponse         *message);
size_t nugget__app__weaver__read_response__get_packed_size
                     (const Nugget__App__Weaver__ReadResponse   *message);
size_t nugget__app__weaver__read_response__pack
                     (const Nugget__App__Weaver__ReadResponse   *message,
                      uint8_t             *out);
size_t nugget__app__weaver__read_response__pack_to_buffer
                     (const Nugget__App__Weaver__ReadResponse   *message,
                      ProtobufCBuffer     *buffer);
Nugget__App__Weaver__ReadResponse *
       nugget__app__weaver__read_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nugget__app__weaver__read_response__free_unpacked
                     (Nugget__App__Weaver__ReadResponse *message,
                      ProtobufCAllocator *allocator);
/* Nugget__App__Weaver__EraseValueRequest methods */
void   nugget__app__weaver__erase_value_request__init
                     (Nugget__App__Weaver__EraseValueRequest         *message);
size_t nugget__app__weaver__erase_value_request__get_packed_size
                     (const Nugget__App__Weaver__EraseValueRequest   *message);
size_t nugget__app__weaver__erase_value_request__pack
                     (const Nugget__App__Weaver__EraseValueRequest   *message,
                      uint8_t             *out);
size_t nugget__app__weaver__erase_value_request__pack_to_buffer
                     (const Nugget__App__Weaver__EraseValueRequest   *message,
                      ProtobufCBuffer     *buffer);
Nugget__App__Weaver__EraseValueRequest *
       nugget__app__weaver__erase_value_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nugget__app__weaver__erase_value_request__free_unpacked
                     (Nugget__App__Weaver__EraseValueRequest *message,
                      ProtobufCAllocator *allocator);
/* Nugget__App__Weaver__EraseValueResponse methods */
void   nugget__app__weaver__erase_value_response__init
                     (Nugget__App__Weaver__EraseValueResponse         *message);
size_t nugget__app__weaver__erase_value_response__get_packed_size
                     (const Nugget__App__Weaver__EraseValueResponse   *message);
size_t nugget__app__weaver__erase_value_response__pack
                     (const Nugget__App__Weaver__EraseValueResponse   *message,
                      uint8_t             *out);
size_t nugget__app__weaver__erase_value_response__pack_to_buffer
                     (const Nugget__App__Weaver__EraseValueResponse   *message,
                      ProtobufCBuffer     *buffer);
Nugget__App__Weaver__EraseValueResponse *
       nugget__app__weaver__erase_value_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nugget__app__weaver__erase_value_response__free_unpacked
                     (Nugget__App__Weaver__EraseValueResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Nugget__App__Weaver__GetConfigRequest_Closure)
                 (const Nugget__App__Weaver__GetConfigRequest *message,
                  void *closure_data);
typedef void (*Nugget__App__Weaver__GetConfigResponse_Closure)
                 (const Nugget__App__Weaver__GetConfigResponse *message,
                  void *closure_data);
typedef void (*Nugget__App__Weaver__WriteRequest_Closure)
                 (const Nugget__App__Weaver__WriteRequest *message,
                  void *closure_data);
typedef void (*Nugget__App__Weaver__WriteResponse_Closure)
                 (const Nugget__App__Weaver__WriteResponse *message,
                  void *closure_data);
typedef void (*Nugget__App__Weaver__ReadRequest_Closure)
                 (const Nugget__App__Weaver__ReadRequest *message,
                  void *closure_data);
typedef void (*Nugget__App__Weaver__ReadResponse_Closure)
                 (const Nugget__App__Weaver__ReadResponse *message,
                  void *closure_data);
typedef void (*Nugget__App__Weaver__EraseValueRequest_Closure)
                 (const Nugget__App__Weaver__EraseValueRequest *message,
                  void *closure_data);
typedef void (*Nugget__App__Weaver__EraseValueResponse_Closure)
                 (const Nugget__App__Weaver__EraseValueResponse *message,
                  void *closure_data);

/* --- services --- */

typedef struct _Nugget__App__Weaver__Weaver_Service Nugget__App__Weaver__Weaver_Service;
struct _Nugget__App__Weaver__Weaver_Service
{
  ProtobufCService base;
  void (*get_config)(Nugget__App__Weaver__Weaver_Service *service,
                     const Nugget__App__Weaver__GetConfigRequest *input,
                     Nugget__App__Weaver__GetConfigResponse_Closure closure,
                     void *closure_data);
  void (*write)(Nugget__App__Weaver__Weaver_Service *service,
                const Nugget__App__Weaver__WriteRequest *input,
                Nugget__App__Weaver__WriteResponse_Closure closure,
                void *closure_data);
  void (*read)(Nugget__App__Weaver__Weaver_Service *service,
               const Nugget__App__Weaver__ReadRequest *input,
               Nugget__App__Weaver__ReadResponse_Closure closure,
               void *closure_data);
  void (*erase_value)(Nugget__App__Weaver__Weaver_Service *service,
                      const Nugget__App__Weaver__EraseValueRequest *input,
                      Nugget__App__Weaver__EraseValueResponse_Closure closure,
                      void *closure_data);
};
typedef void (*Nugget__App__Weaver__Weaver_ServiceDestroy)(Nugget__App__Weaver__Weaver_Service *);
void nugget__app__weaver__weaver__init (Nugget__App__Weaver__Weaver_Service *service,
                                        Nugget__App__Weaver__Weaver_ServiceDestroy destroy);
#define NUGGET__APP__WEAVER__WEAVER__BASE_INIT \
    { &nugget__app__weaver__weaver__descriptor, protobuf_c_service_invoke_internal, NULL }
#define NUGGET__APP__WEAVER__WEAVER__INIT(function_prefix__) \
    { NUGGET__APP__WEAVER__WEAVER__BASE_INIT,\
      function_prefix__ ## get_config,\
      function_prefix__ ## write,\
      function_prefix__ ## read,\
      function_prefix__ ## erase_value  }
void nugget__app__weaver__weaver__get_config(ProtobufCService *service,
                                             const Nugget__App__Weaver__GetConfigRequest *input,
                                             Nugget__App__Weaver__GetConfigResponse_Closure closure,
                                             void *closure_data);
void nugget__app__weaver__weaver__write(ProtobufCService *service,
                                        const Nugget__App__Weaver__WriteRequest *input,
                                        Nugget__App__Weaver__WriteResponse_Closure closure,
                                        void *closure_data);
void nugget__app__weaver__weaver__read(ProtobufCService *service,
                                       const Nugget__App__Weaver__ReadRequest *input,
                                       Nugget__App__Weaver__ReadResponse_Closure closure,
                                       void *closure_data);
void nugget__app__weaver__weaver__erase_value(ProtobufCService *service,
                                              const Nugget__App__Weaver__EraseValueRequest *input,
                                              Nugget__App__Weaver__EraseValueResponse_Closure closure,
                                              void *closure_data);

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor nugget__app__weaver__get_config_request__descriptor;
extern const ProtobufCMessageDescriptor nugget__app__weaver__get_config_response__descriptor;
extern const ProtobufCMessageDescriptor nugget__app__weaver__write_request__descriptor;
extern const ProtobufCMessageDescriptor nugget__app__weaver__write_response__descriptor;
extern const ProtobufCMessageDescriptor nugget__app__weaver__read_request__descriptor;
extern const ProtobufCMessageDescriptor nugget__app__weaver__read_response__descriptor;
extern const ProtobufCEnumDescriptor    nugget__app__weaver__read_response__error__descriptor;
extern const ProtobufCMessageDescriptor nugget__app__weaver__erase_value_request__descriptor;
extern const ProtobufCMessageDescriptor nugget__app__weaver__erase_value_response__descriptor;
extern const ProtobufCServiceDescriptor nugget__app__weaver__weaver__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_nugget_2fapp_2fweaver_2fweaver_2eproto__INCLUDED */
