// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/annotations.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/api/annotations.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace api {

namespace {


}  // namespace


void protobuf_AssignDesc_google_2fapi_2fannotations_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fapi_2fannotations_2eproto() {
  protobuf_AddDesc_google_2fapi_2fannotations_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/api/annotations.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fapi_2fannotations_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_google_2fapi_2fannotations_2eproto() {
}

void protobuf_AddDesc_google_2fapi_2fannotations_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fapi_2fannotations_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::api::protobuf_AddDesc_google_2fapi_2fhttp_2eproto();
  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034google/api/annotations.proto\022\ngoogle.a"
    "pi\032\025google/api/http.proto\032 google/protob"
    "uf/descriptor.proto:E\n\004http\022\036.google.pro"
    "tobuf.MethodOptions\030\260\312\274\" \001(\0132\024.google.ap"
    "i.HttpRuleB+\n\016com.google.apiB\020Annotation"
    "sProtoP\001\242\002\004GAPIb\006proto3", 223);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/annotations.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::google::protobuf::MethodOptions::default_instance(),
    72295728, 11, false, false,
    &::google::api::HttpRule::default_instance());
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fapi_2fannotations_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fapi_2fannotations_2eproto {
  StaticDescriptorInitializer_google_2fapi_2fannotations_2eproto() {
    protobuf_AddDesc_google_2fapi_2fannotations_2eproto();
  }
} static_descriptor_initializer_google_2fapi_2fannotations_2eproto_;
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::google::api::HttpRule >, 11, false >
  http(kHttpFieldNumber, ::google::api::HttpRule::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
