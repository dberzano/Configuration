// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kv.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "kv.pb.h"

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

namespace mvccpb {

namespace {

const ::google::protobuf::Descriptor* KeyValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  KeyValue_reflection_ = NULL;
const ::google::protobuf::Descriptor* Event_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Event_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Event_EventType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_kv_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_kv_2eproto() {
  protobuf_AddDesc_kv_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "kv.proto");
  GOOGLE_CHECK(file != NULL);
  KeyValue_descriptor_ = file->message_type(0);
  static const int KeyValue_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyValue, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyValue, create_revision_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyValue, mod_revision_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyValue, version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyValue, value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyValue, lease_),
  };
  KeyValue_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      KeyValue_descriptor_,
      KeyValue::default_instance_,
      KeyValue_offsets_,
      -1,
      -1,
      -1,
      sizeof(KeyValue),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyValue, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KeyValue, _is_default_instance_));
  Event_descriptor_ = file->message_type(1);
  static const int Event_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event, kv_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event, prev_kv_),
  };
  Event_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Event_descriptor_,
      Event::default_instance_,
      Event_offsets_,
      -1,
      -1,
      -1,
      sizeof(Event),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event, _is_default_instance_));
  Event_EventType_descriptor_ = Event_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_kv_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      KeyValue_descriptor_, &KeyValue::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Event_descriptor_, &Event::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_kv_2eproto() {
  delete KeyValue::default_instance_;
  delete KeyValue_reflection_;
  delete Event::default_instance_;
  delete Event_reflection_;
}

void protobuf_AddDesc_kv_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_kv_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\010kv.proto\022\006mvccpb\"u\n\010KeyValue\022\013\n\003key\030\001 "
    "\001(\014\022\027\n\017create_revision\030\002 \001(\003\022\024\n\014mod_revi"
    "sion\030\003 \001(\003\022\017\n\007version\030\004 \001(\003\022\r\n\005value\030\005 \001"
    "(\014\022\r\n\005lease\030\006 \001(\003\"\221\001\n\005Event\022%\n\004type\030\001 \001("
    "\0162\027.mvccpb.Event.EventType\022\034\n\002kv\030\002 \001(\0132\020"
    ".mvccpb.KeyValue\022!\n\007prev_kv\030\003 \001(\0132\020.mvcc"
    "pb.KeyValue\" \n\tEventType\022\007\n\003PUT\020\000\022\n\n\006DEL"
    "ETE\020\001b\006proto3", 293);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "kv.proto", &protobuf_RegisterTypes);
  KeyValue::default_instance_ = new KeyValue();
  Event::default_instance_ = new Event();
  KeyValue::default_instance_->InitAsDefaultInstance();
  Event::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_kv_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_kv_2eproto {
  StaticDescriptorInitializer_kv_2eproto() {
    protobuf_AddDesc_kv_2eproto();
  }
} static_descriptor_initializer_kv_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int KeyValue::kKeyFieldNumber;
const int KeyValue::kCreateRevisionFieldNumber;
const int KeyValue::kModRevisionFieldNumber;
const int KeyValue::kVersionFieldNumber;
const int KeyValue::kValueFieldNumber;
const int KeyValue::kLeaseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

KeyValue::KeyValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvccpb.KeyValue)
}

void KeyValue::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

KeyValue::KeyValue(const KeyValue& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:mvccpb.KeyValue)
}

void KeyValue::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  create_revision_ = GOOGLE_LONGLONG(0);
  mod_revision_ = GOOGLE_LONGLONG(0);
  version_ = GOOGLE_LONGLONG(0);
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  lease_ = GOOGLE_LONGLONG(0);
}

KeyValue::~KeyValue() {
  // @@protoc_insertion_point(destructor:mvccpb.KeyValue)
  SharedDtor();
}

void KeyValue::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void KeyValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KeyValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return KeyValue_descriptor_;
}

const KeyValue& KeyValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_kv_2eproto();
  return *default_instance_;
}

KeyValue* KeyValue::default_instance_ = NULL;

KeyValue* KeyValue::New(::google::protobuf::Arena* arena) const {
  KeyValue* n = new KeyValue;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void KeyValue::Clear() {
// @@protoc_insertion_point(message_clear_start:mvccpb.KeyValue)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(KeyValue, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<KeyValue*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(create_revision_, version_);
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  lease_ = GOOGLE_LONGLONG(0);

#undef ZR_HELPER_
#undef ZR_

}

bool KeyValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvccpb.KeyValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes key = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_key()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_create_revision;
        break;
      }

      // optional int64 create_revision = 2;
      case 2: {
        if (tag == 16) {
         parse_create_revision:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &create_revision_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_mod_revision;
        break;
      }

      // optional int64 mod_revision = 3;
      case 3: {
        if (tag == 24) {
         parse_mod_revision:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &mod_revision_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_version;
        break;
      }

      // optional int64 version = 4;
      case 4: {
        if (tag == 32) {
         parse_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &version_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_value;
        break;
      }

      // optional bytes value = 5;
      case 5: {
        if (tag == 42) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_lease;
        break;
      }

      // optional int64 lease = 6;
      case 6: {
        if (tag == 48) {
         parse_lease:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &lease_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mvccpb.KeyValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvccpb.KeyValue)
  return false;
#undef DO_
}

void KeyValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvccpb.KeyValue)
  // optional bytes key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->key(), output);
  }

  // optional int64 create_revision = 2;
  if (this->create_revision() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->create_revision(), output);
  }

  // optional int64 mod_revision = 3;
  if (this->mod_revision() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->mod_revision(), output);
  }

  // optional int64 version = 4;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->version(), output);
  }

  // optional bytes value = 5;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->value(), output);
  }

  // optional int64 lease = 6;
  if (this->lease() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->lease(), output);
  }

  // @@protoc_insertion_point(serialize_end:mvccpb.KeyValue)
}

::google::protobuf::uint8* KeyValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:mvccpb.KeyValue)
  // optional bytes key = 1;
  if (this->key().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->key(), target);
  }

  // optional int64 create_revision = 2;
  if (this->create_revision() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->create_revision(), target);
  }

  // optional int64 mod_revision = 3;
  if (this->mod_revision() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->mod_revision(), target);
  }

  // optional int64 version = 4;
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->version(), target);
  }

  // optional bytes value = 5;
  if (this->value().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->value(), target);
  }

  // optional int64 lease = 6;
  if (this->lease() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->lease(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:mvccpb.KeyValue)
  return target;
}

int KeyValue::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:mvccpb.KeyValue)
  int total_size = 0;

  // optional bytes key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->key());
  }

  // optional int64 create_revision = 2;
  if (this->create_revision() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->create_revision());
  }

  // optional int64 mod_revision = 3;
  if (this->mod_revision() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->mod_revision());
  }

  // optional int64 version = 4;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->version());
  }

  // optional bytes value = 5;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value());
  }

  // optional int64 lease = 6;
  if (this->lease() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->lease());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KeyValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvccpb.KeyValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const KeyValue* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const KeyValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvccpb.KeyValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvccpb.KeyValue)
    MergeFrom(*source);
  }
}

void KeyValue::MergeFrom(const KeyValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvccpb.KeyValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  if (from.create_revision() != 0) {
    set_create_revision(from.create_revision());
  }
  if (from.mod_revision() != 0) {
    set_mod_revision(from.mod_revision());
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  if (from.lease() != 0) {
    set_lease(from.lease());
  }
}

void KeyValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvccpb.KeyValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KeyValue::CopyFrom(const KeyValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvccpb.KeyValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KeyValue::IsInitialized() const {

  return true;
}

void KeyValue::Swap(KeyValue* other) {
  if (other == this) return;
  InternalSwap(other);
}
void KeyValue::InternalSwap(KeyValue* other) {
  key_.Swap(&other->key_);
  std::swap(create_revision_, other->create_revision_);
  std::swap(mod_revision_, other->mod_revision_);
  std::swap(version_, other->version_);
  value_.Swap(&other->value_);
  std::swap(lease_, other->lease_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata KeyValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = KeyValue_descriptor_;
  metadata.reflection = KeyValue_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// KeyValue

// optional bytes key = 1;
void KeyValue::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& KeyValue::key() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void KeyValue::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.key)
}
 void KeyValue::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mvccpb.KeyValue.key)
}
 void KeyValue::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mvccpb.KeyValue.key)
}
 ::std::string* KeyValue::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:mvccpb.KeyValue.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* KeyValue::release_key() {
  // @@protoc_insertion_point(field_release:mvccpb.KeyValue.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void KeyValue::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:mvccpb.KeyValue.key)
}

// optional int64 create_revision = 2;
void KeyValue::clear_create_revision() {
  create_revision_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 KeyValue::create_revision() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.create_revision)
  return create_revision_;
}
 void KeyValue::set_create_revision(::google::protobuf::int64 value) {
  
  create_revision_ = value;
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.create_revision)
}

// optional int64 mod_revision = 3;
void KeyValue::clear_mod_revision() {
  mod_revision_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 KeyValue::mod_revision() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.mod_revision)
  return mod_revision_;
}
 void KeyValue::set_mod_revision(::google::protobuf::int64 value) {
  
  mod_revision_ = value;
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.mod_revision)
}

// optional int64 version = 4;
void KeyValue::clear_version() {
  version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 KeyValue::version() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.version)
  return version_;
}
 void KeyValue::set_version(::google::protobuf::int64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.version)
}

// optional bytes value = 5;
void KeyValue::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& KeyValue::value() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void KeyValue::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.value)
}
 void KeyValue::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mvccpb.KeyValue.value)
}
 void KeyValue::set_value(const void* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mvccpb.KeyValue.value)
}
 ::std::string* KeyValue::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:mvccpb.KeyValue.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* KeyValue::release_value() {
  // @@protoc_insertion_point(field_release:mvccpb.KeyValue.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void KeyValue::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:mvccpb.KeyValue.value)
}

// optional int64 lease = 6;
void KeyValue::clear_lease() {
  lease_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 KeyValue::lease() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.lease)
  return lease_;
}
 void KeyValue::set_lease(::google::protobuf::int64 value) {
  
  lease_ = value;
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.lease)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* Event_EventType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Event_EventType_descriptor_;
}
bool Event_EventType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Event_EventType Event::PUT;
const Event_EventType Event::DELETE;
const Event_EventType Event::EventType_MIN;
const Event_EventType Event::EventType_MAX;
const int Event::EventType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Event::kTypeFieldNumber;
const int Event::kKvFieldNumber;
const int Event::kPrevKvFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Event::Event()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvccpb.Event)
}

void Event::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  kv_ = const_cast< ::mvccpb::KeyValue*>(&::mvccpb::KeyValue::default_instance());
  prev_kv_ = const_cast< ::mvccpb::KeyValue*>(&::mvccpb::KeyValue::default_instance());
}

Event::Event(const Event& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:mvccpb.Event)
}

void Event::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  type_ = 0;
  kv_ = NULL;
  prev_kv_ = NULL;
}

Event::~Event() {
  // @@protoc_insertion_point(destructor:mvccpb.Event)
  SharedDtor();
}

void Event::SharedDtor() {
  if (this != default_instance_) {
    delete kv_;
    delete prev_kv_;
  }
}

void Event::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Event::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Event_descriptor_;
}

const Event& Event::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_kv_2eproto();
  return *default_instance_;
}

Event* Event::default_instance_ = NULL;

Event* Event::New(::google::protobuf::Arena* arena) const {
  Event* n = new Event;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Event::Clear() {
// @@protoc_insertion_point(message_clear_start:mvccpb.Event)
  type_ = 0;
  if (GetArenaNoVirtual() == NULL && kv_ != NULL) delete kv_;
  kv_ = NULL;
  if (GetArenaNoVirtual() == NULL && prev_kv_ != NULL) delete prev_kv_;
  prev_kv_ = NULL;
}

bool Event::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvccpb.Event)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .mvccpb.Event.EventType type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::mvccpb::Event_EventType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_kv;
        break;
      }

      // optional .mvccpb.KeyValue kv = 2;
      case 2: {
        if (tag == 18) {
         parse_kv:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_kv()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_prev_kv;
        break;
      }

      // optional .mvccpb.KeyValue prev_kv = 3;
      case 3: {
        if (tag == 26) {
         parse_prev_kv:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_prev_kv()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mvccpb.Event)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvccpb.Event)
  return false;
#undef DO_
}

void Event::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvccpb.Event)
  // optional .mvccpb.Event.EventType type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional .mvccpb.KeyValue kv = 2;
  if (this->has_kv()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->kv_, output);
  }

  // optional .mvccpb.KeyValue prev_kv = 3;
  if (this->has_prev_kv()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->prev_kv_, output);
  }

  // @@protoc_insertion_point(serialize_end:mvccpb.Event)
}

::google::protobuf::uint8* Event::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:mvccpb.Event)
  // optional .mvccpb.Event.EventType type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional .mvccpb.KeyValue kv = 2;
  if (this->has_kv()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->kv_, false, target);
  }

  // optional .mvccpb.KeyValue prev_kv = 3;
  if (this->has_prev_kv()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->prev_kv_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:mvccpb.Event)
  return target;
}

int Event::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:mvccpb.Event)
  int total_size = 0;

  // optional .mvccpb.Event.EventType type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // optional .mvccpb.KeyValue kv = 2;
  if (this->has_kv()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->kv_);
  }

  // optional .mvccpb.KeyValue prev_kv = 3;
  if (this->has_prev_kv()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->prev_kv_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Event::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvccpb.Event)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Event* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Event>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvccpb.Event)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvccpb.Event)
    MergeFrom(*source);
  }
}

void Event::MergeFrom(const Event& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvccpb.Event)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.has_kv()) {
    mutable_kv()->::mvccpb::KeyValue::MergeFrom(from.kv());
  }
  if (from.has_prev_kv()) {
    mutable_prev_kv()->::mvccpb::KeyValue::MergeFrom(from.prev_kv());
  }
}

void Event::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvccpb.Event)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Event::CopyFrom(const Event& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvccpb.Event)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Event::IsInitialized() const {

  return true;
}

void Event::Swap(Event* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Event::InternalSwap(Event* other) {
  std::swap(type_, other->type_);
  std::swap(kv_, other->kv_);
  std::swap(prev_kv_, other->prev_kv_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Event::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Event_descriptor_;
  metadata.reflection = Event_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Event

// optional .mvccpb.Event.EventType type = 1;
void Event::clear_type() {
  type_ = 0;
}
 ::mvccpb::Event_EventType Event::type() const {
  // @@protoc_insertion_point(field_get:mvccpb.Event.type)
  return static_cast< ::mvccpb::Event_EventType >(type_);
}
 void Event::set_type(::mvccpb::Event_EventType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:mvccpb.Event.type)
}

// optional .mvccpb.KeyValue kv = 2;
bool Event::has_kv() const {
  return !_is_default_instance_ && kv_ != NULL;
}
void Event::clear_kv() {
  if (GetArenaNoVirtual() == NULL && kv_ != NULL) delete kv_;
  kv_ = NULL;
}
const ::mvccpb::KeyValue& Event::kv() const {
  // @@protoc_insertion_point(field_get:mvccpb.Event.kv)
  return kv_ != NULL ? *kv_ : *default_instance_->kv_;
}
::mvccpb::KeyValue* Event::mutable_kv() {
  
  if (kv_ == NULL) {
    kv_ = new ::mvccpb::KeyValue;
  }
  // @@protoc_insertion_point(field_mutable:mvccpb.Event.kv)
  return kv_;
}
::mvccpb::KeyValue* Event::release_kv() {
  // @@protoc_insertion_point(field_release:mvccpb.Event.kv)
  
  ::mvccpb::KeyValue* temp = kv_;
  kv_ = NULL;
  return temp;
}
void Event::set_allocated_kv(::mvccpb::KeyValue* kv) {
  delete kv_;
  kv_ = kv;
  if (kv) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mvccpb.Event.kv)
}

// optional .mvccpb.KeyValue prev_kv = 3;
bool Event::has_prev_kv() const {
  return !_is_default_instance_ && prev_kv_ != NULL;
}
void Event::clear_prev_kv() {
  if (GetArenaNoVirtual() == NULL && prev_kv_ != NULL) delete prev_kv_;
  prev_kv_ = NULL;
}
const ::mvccpb::KeyValue& Event::prev_kv() const {
  // @@protoc_insertion_point(field_get:mvccpb.Event.prev_kv)
  return prev_kv_ != NULL ? *prev_kv_ : *default_instance_->prev_kv_;
}
::mvccpb::KeyValue* Event::mutable_prev_kv() {
  
  if (prev_kv_ == NULL) {
    prev_kv_ = new ::mvccpb::KeyValue;
  }
  // @@protoc_insertion_point(field_mutable:mvccpb.Event.prev_kv)
  return prev_kv_;
}
::mvccpb::KeyValue* Event::release_prev_kv() {
  // @@protoc_insertion_point(field_release:mvccpb.Event.prev_kv)
  
  ::mvccpb::KeyValue* temp = prev_kv_;
  prev_kv_ = NULL;
  return temp;
}
void Event::set_allocated_prev_kv(::mvccpb::KeyValue* prev_kv) {
  delete prev_kv_;
  prev_kv_ = prev_kv;
  if (prev_kv) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mvccpb.Event.prev_kv)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace mvccpb

// @@protoc_insertion_point(global_scope)
