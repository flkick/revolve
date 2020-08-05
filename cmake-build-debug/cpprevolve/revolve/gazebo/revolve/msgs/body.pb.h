// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: body.proto

#ifndef PROTOBUF_INCLUDED_body_2eproto
#define PROTOBUF_INCLUDED_body_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "parameter.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_body_2eproto 

namespace protobuf_body_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_body_2eproto
namespace revolve {
namespace msgs {
class Body;
class BodyDefaultTypeInternal;
extern BodyDefaultTypeInternal _Body_default_instance_;
class BodyConnection;
class BodyConnectionDefaultTypeInternal;
extern BodyConnectionDefaultTypeInternal _BodyConnection_default_instance_;
class BodyPart;
class BodyPartDefaultTypeInternal;
extern BodyPartDefaultTypeInternal _BodyPart_default_instance_;
}  // namespace msgs
}  // namespace revolve
namespace google {
namespace protobuf {
template<> ::revolve::msgs::Body* Arena::CreateMaybeMessage<::revolve::msgs::Body>(Arena*);
template<> ::revolve::msgs::BodyConnection* Arena::CreateMaybeMessage<::revolve::msgs::BodyConnection>(Arena*);
template<> ::revolve::msgs::BodyPart* Arena::CreateMaybeMessage<::revolve::msgs::BodyPart>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace revolve {
namespace msgs {

// ===================================================================

class BodyPart : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:revolve.msgs.BodyPart) */ {
 public:
  BodyPart();
  virtual ~BodyPart();

  BodyPart(const BodyPart& from);

  inline BodyPart& operator=(const BodyPart& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BodyPart(BodyPart&& from) noexcept
    : BodyPart() {
    *this = ::std::move(from);
  }

  inline BodyPart& operator=(BodyPart&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BodyPart& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BodyPart* internal_default_instance() {
    return reinterpret_cast<const BodyPart*>(
               &_BodyPart_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BodyPart* other);
  friend void swap(BodyPart& a, BodyPart& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BodyPart* New() const final {
    return CreateMaybeMessage<BodyPart>(NULL);
  }

  BodyPart* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BodyPart>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BodyPart& from);
  void MergeFrom(const BodyPart& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BodyPart* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .revolve.msgs.BodyConnection child = 6;
  int child_size() const;
  void clear_child();
  static const int kChildFieldNumber = 6;
  ::revolve::msgs::BodyConnection* mutable_child(int index);
  ::google::protobuf::RepeatedPtrField< ::revolve::msgs::BodyConnection >*
      mutable_child();
  const ::revolve::msgs::BodyConnection& child(int index) const;
  ::revolve::msgs::BodyConnection* add_child();
  const ::google::protobuf::RepeatedPtrField< ::revolve::msgs::BodyConnection >&
      child() const;

  // repeated .revolve.msgs.Parameter param = 7;
  int param_size() const;
  void clear_param();
  static const int kParamFieldNumber = 7;
  ::revolve::msgs::Parameter* mutable_param(int index);
  ::google::protobuf::RepeatedPtrField< ::revolve::msgs::Parameter >*
      mutable_param();
  const ::revolve::msgs::Parameter& param(int index) const;
  ::revolve::msgs::Parameter* add_param();
  const ::google::protobuf::RepeatedPtrField< ::revolve::msgs::Parameter >&
      param() const;

  // required string id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // required string type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // optional string label = 8;
  bool has_label() const;
  void clear_label();
  static const int kLabelFieldNumber = 8;
  const ::std::string& label() const;
  void set_label(const ::std::string& value);
  #if LANG_CXX11
  void set_label(::std::string&& value);
  #endif
  void set_label(const char* value);
  void set_label(const char* value, size_t size);
  ::std::string* mutable_label();
  ::std::string* release_label();
  void set_allocated_label(::std::string* label);

  // required int32 x = 3;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 3;
  ::google::protobuf::int32 x() const;
  void set_x(::google::protobuf::int32 value);

  // required int32 y = 4;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 4;
  ::google::protobuf::int32 y() const;
  void set_y(::google::protobuf::int32 value);

  // required double orientation = 5;
  bool has_orientation() const;
  void clear_orientation();
  static const int kOrientationFieldNumber = 5;
  double orientation() const;
  void set_orientation(double value);

  // @@protoc_insertion_point(class_scope:revolve.msgs.BodyPart)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_type();
  void clear_has_type();
  void set_has_x();
  void clear_has_x();
  void set_has_y();
  void clear_has_y();
  void set_has_orientation();
  void clear_has_orientation();
  void set_has_label();
  void clear_has_label();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::revolve::msgs::BodyConnection > child_;
  ::google::protobuf::RepeatedPtrField< ::revolve::msgs::Parameter > param_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::internal::ArenaStringPtr label_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  double orientation_;
  friend struct ::protobuf_body_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BodyConnection : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:revolve.msgs.BodyConnection) */ {
 public:
  BodyConnection();
  virtual ~BodyConnection();

  BodyConnection(const BodyConnection& from);

  inline BodyConnection& operator=(const BodyConnection& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BodyConnection(BodyConnection&& from) noexcept
    : BodyConnection() {
    *this = ::std::move(from);
  }

  inline BodyConnection& operator=(BodyConnection&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BodyConnection& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BodyConnection* internal_default_instance() {
    return reinterpret_cast<const BodyConnection*>(
               &_BodyConnection_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(BodyConnection* other);
  friend void swap(BodyConnection& a, BodyConnection& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BodyConnection* New() const final {
    return CreateMaybeMessage<BodyConnection>(NULL);
  }

  BodyConnection* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BodyConnection>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BodyConnection& from);
  void MergeFrom(const BodyConnection& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BodyConnection* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .revolve.msgs.BodyPart part = 3;
  bool has_part() const;
  void clear_part();
  static const int kPartFieldNumber = 3;
  private:
  const ::revolve::msgs::BodyPart& _internal_part() const;
  public:
  const ::revolve::msgs::BodyPart& part() const;
  ::revolve::msgs::BodyPart* release_part();
  ::revolve::msgs::BodyPart* mutable_part();
  void set_allocated_part(::revolve::msgs::BodyPart* part);

  // required int32 src_slot = 1;
  bool has_src_slot() const;
  void clear_src_slot();
  static const int kSrcSlotFieldNumber = 1;
  ::google::protobuf::int32 src_slot() const;
  void set_src_slot(::google::protobuf::int32 value);

  // required int32 dst_slot = 2;
  bool has_dst_slot() const;
  void clear_dst_slot();
  static const int kDstSlotFieldNumber = 2;
  ::google::protobuf::int32 dst_slot() const;
  void set_dst_slot(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:revolve.msgs.BodyConnection)
 private:
  void set_has_src_slot();
  void clear_has_src_slot();
  void set_has_dst_slot();
  void clear_has_dst_slot();
  void set_has_part();
  void clear_has_part();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::revolve::msgs::BodyPart* part_;
  ::google::protobuf::int32 src_slot_;
  ::google::protobuf::int32 dst_slot_;
  friend struct ::protobuf_body_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Body : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:revolve.msgs.Body) */ {
 public:
  Body();
  virtual ~Body();

  Body(const Body& from);

  inline Body& operator=(const Body& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Body(Body&& from) noexcept
    : Body() {
    *this = ::std::move(from);
  }

  inline Body& operator=(Body&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Body& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Body* internal_default_instance() {
    return reinterpret_cast<const Body*>(
               &_Body_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Body* other);
  friend void swap(Body& a, Body& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Body* New() const final {
    return CreateMaybeMessage<Body>(NULL);
  }

  Body* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Body>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Body& from);
  void MergeFrom(const Body& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Body* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .revolve.msgs.BodyPart root = 1;
  bool has_root() const;
  void clear_root();
  static const int kRootFieldNumber = 1;
  private:
  const ::revolve::msgs::BodyPart& _internal_root() const;
  public:
  const ::revolve::msgs::BodyPart& root() const;
  ::revolve::msgs::BodyPart* release_root();
  ::revolve::msgs::BodyPart* mutable_root();
  void set_allocated_root(::revolve::msgs::BodyPart* root);

  // @@protoc_insertion_point(class_scope:revolve.msgs.Body)
 private:
  void set_has_root();
  void clear_has_root();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::revolve::msgs::BodyPart* root_;
  friend struct ::protobuf_body_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BodyPart

// required string id = 1;
inline bool BodyPart::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BodyPart::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BodyPart::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BodyPart::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& BodyPart::id() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyPart.id)
  return id_.GetNoArena();
}
inline void BodyPart::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:revolve.msgs.BodyPart.id)
}
#if LANG_CXX11
inline void BodyPart::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:revolve.msgs.BodyPart.id)
}
#endif
inline void BodyPart::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:revolve.msgs.BodyPart.id)
}
inline void BodyPart::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:revolve.msgs.BodyPart.id)
}
inline ::std::string* BodyPart::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:revolve.msgs.BodyPart.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BodyPart::release_id() {
  // @@protoc_insertion_point(field_release:revolve.msgs.BodyPart.id)
  if (!has_id()) {
    return NULL;
  }
  clear_has_id();
  return id_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BodyPart::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:revolve.msgs.BodyPart.id)
}

// required string type = 2;
inline bool BodyPart::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BodyPart::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BodyPart::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BodyPart::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_type();
}
inline const ::std::string& BodyPart::type() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyPart.type)
  return type_.GetNoArena();
}
inline void BodyPart::set_type(const ::std::string& value) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:revolve.msgs.BodyPart.type)
}
#if LANG_CXX11
inline void BodyPart::set_type(::std::string&& value) {
  set_has_type();
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:revolve.msgs.BodyPart.type)
}
#endif
inline void BodyPart::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:revolve.msgs.BodyPart.type)
}
inline void BodyPart::set_type(const char* value, size_t size) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:revolve.msgs.BodyPart.type)
}
inline ::std::string* BodyPart::mutable_type() {
  set_has_type();
  // @@protoc_insertion_point(field_mutable:revolve.msgs.BodyPart.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BodyPart::release_type() {
  // @@protoc_insertion_point(field_release:revolve.msgs.BodyPart.type)
  if (!has_type()) {
    return NULL;
  }
  clear_has_type();
  return type_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BodyPart::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    set_has_type();
  } else {
    clear_has_type();
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:revolve.msgs.BodyPart.type)
}

// required int32 x = 3;
inline bool BodyPart::has_x() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BodyPart::set_has_x() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BodyPart::clear_has_x() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BodyPart::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 BodyPart::x() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyPart.x)
  return x_;
}
inline void BodyPart::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:revolve.msgs.BodyPart.x)
}

// required int32 y = 4;
inline bool BodyPart::has_y() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BodyPart::set_has_y() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BodyPart::clear_has_y() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BodyPart::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 BodyPart::y() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyPart.y)
  return y_;
}
inline void BodyPart::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:revolve.msgs.BodyPart.y)
}

// required double orientation = 5;
inline bool BodyPart::has_orientation() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void BodyPart::set_has_orientation() {
  _has_bits_[0] |= 0x00000020u;
}
inline void BodyPart::clear_has_orientation() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void BodyPart::clear_orientation() {
  orientation_ = 0;
  clear_has_orientation();
}
inline double BodyPart::orientation() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyPart.orientation)
  return orientation_;
}
inline void BodyPart::set_orientation(double value) {
  set_has_orientation();
  orientation_ = value;
  // @@protoc_insertion_point(field_set:revolve.msgs.BodyPart.orientation)
}

// repeated .revolve.msgs.BodyConnection child = 6;
inline int BodyPart::child_size() const {
  return child_.size();
}
inline void BodyPart::clear_child() {
  child_.Clear();
}
inline ::revolve::msgs::BodyConnection* BodyPart::mutable_child(int index) {
  // @@protoc_insertion_point(field_mutable:revolve.msgs.BodyPart.child)
  return child_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::revolve::msgs::BodyConnection >*
BodyPart::mutable_child() {
  // @@protoc_insertion_point(field_mutable_list:revolve.msgs.BodyPart.child)
  return &child_;
}
inline const ::revolve::msgs::BodyConnection& BodyPart::child(int index) const {
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyPart.child)
  return child_.Get(index);
}
inline ::revolve::msgs::BodyConnection* BodyPart::add_child() {
  // @@protoc_insertion_point(field_add:revolve.msgs.BodyPart.child)
  return child_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::revolve::msgs::BodyConnection >&
BodyPart::child() const {
  // @@protoc_insertion_point(field_list:revolve.msgs.BodyPart.child)
  return child_;
}

// repeated .revolve.msgs.Parameter param = 7;
inline int BodyPart::param_size() const {
  return param_.size();
}
inline ::revolve::msgs::Parameter* BodyPart::mutable_param(int index) {
  // @@protoc_insertion_point(field_mutable:revolve.msgs.BodyPart.param)
  return param_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::revolve::msgs::Parameter >*
BodyPart::mutable_param() {
  // @@protoc_insertion_point(field_mutable_list:revolve.msgs.BodyPart.param)
  return &param_;
}
inline const ::revolve::msgs::Parameter& BodyPart::param(int index) const {
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyPart.param)
  return param_.Get(index);
}
inline ::revolve::msgs::Parameter* BodyPart::add_param() {
  // @@protoc_insertion_point(field_add:revolve.msgs.BodyPart.param)
  return param_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::revolve::msgs::Parameter >&
BodyPart::param() const {
  // @@protoc_insertion_point(field_list:revolve.msgs.BodyPart.param)
  return param_;
}

// optional string label = 8;
inline bool BodyPart::has_label() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BodyPart::set_has_label() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BodyPart::clear_has_label() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BodyPart::clear_label() {
  label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_label();
}
inline const ::std::string& BodyPart::label() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyPart.label)
  return label_.GetNoArena();
}
inline void BodyPart::set_label(const ::std::string& value) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:revolve.msgs.BodyPart.label)
}
#if LANG_CXX11
inline void BodyPart::set_label(::std::string&& value) {
  set_has_label();
  label_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:revolve.msgs.BodyPart.label)
}
#endif
inline void BodyPart::set_label(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:revolve.msgs.BodyPart.label)
}
inline void BodyPart::set_label(const char* value, size_t size) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:revolve.msgs.BodyPart.label)
}
inline ::std::string* BodyPart::mutable_label() {
  set_has_label();
  // @@protoc_insertion_point(field_mutable:revolve.msgs.BodyPart.label)
  return label_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BodyPart::release_label() {
  // @@protoc_insertion_point(field_release:revolve.msgs.BodyPart.label)
  if (!has_label()) {
    return NULL;
  }
  clear_has_label();
  return label_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BodyPart::set_allocated_label(::std::string* label) {
  if (label != NULL) {
    set_has_label();
  } else {
    clear_has_label();
  }
  label_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), label);
  // @@protoc_insertion_point(field_set_allocated:revolve.msgs.BodyPart.label)
}

// -------------------------------------------------------------------

// BodyConnection

// required int32 src_slot = 1;
inline bool BodyConnection::has_src_slot() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BodyConnection::set_has_src_slot() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BodyConnection::clear_has_src_slot() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BodyConnection::clear_src_slot() {
  src_slot_ = 0;
  clear_has_src_slot();
}
inline ::google::protobuf::int32 BodyConnection::src_slot() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyConnection.src_slot)
  return src_slot_;
}
inline void BodyConnection::set_src_slot(::google::protobuf::int32 value) {
  set_has_src_slot();
  src_slot_ = value;
  // @@protoc_insertion_point(field_set:revolve.msgs.BodyConnection.src_slot)
}

// required int32 dst_slot = 2;
inline bool BodyConnection::has_dst_slot() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BodyConnection::set_has_dst_slot() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BodyConnection::clear_has_dst_slot() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BodyConnection::clear_dst_slot() {
  dst_slot_ = 0;
  clear_has_dst_slot();
}
inline ::google::protobuf::int32 BodyConnection::dst_slot() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyConnection.dst_slot)
  return dst_slot_;
}
inline void BodyConnection::set_dst_slot(::google::protobuf::int32 value) {
  set_has_dst_slot();
  dst_slot_ = value;
  // @@protoc_insertion_point(field_set:revolve.msgs.BodyConnection.dst_slot)
}

// required .revolve.msgs.BodyPart part = 3;
inline bool BodyConnection::has_part() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BodyConnection::set_has_part() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BodyConnection::clear_has_part() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BodyConnection::clear_part() {
  if (part_ != NULL) part_->Clear();
  clear_has_part();
}
inline const ::revolve::msgs::BodyPart& BodyConnection::_internal_part() const {
  return *part_;
}
inline const ::revolve::msgs::BodyPart& BodyConnection::part() const {
  const ::revolve::msgs::BodyPart* p = part_;
  // @@protoc_insertion_point(field_get:revolve.msgs.BodyConnection.part)
  return p != NULL ? *p : *reinterpret_cast<const ::revolve::msgs::BodyPart*>(
      &::revolve::msgs::_BodyPart_default_instance_);
}
inline ::revolve::msgs::BodyPart* BodyConnection::release_part() {
  // @@protoc_insertion_point(field_release:revolve.msgs.BodyConnection.part)
  clear_has_part();
  ::revolve::msgs::BodyPart* temp = part_;
  part_ = NULL;
  return temp;
}
inline ::revolve::msgs::BodyPart* BodyConnection::mutable_part() {
  set_has_part();
  if (part_ == NULL) {
    auto* p = CreateMaybeMessage<::revolve::msgs::BodyPart>(GetArenaNoVirtual());
    part_ = p;
  }
  // @@protoc_insertion_point(field_mutable:revolve.msgs.BodyConnection.part)
  return part_;
}
inline void BodyConnection::set_allocated_part(::revolve::msgs::BodyPart* part) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete part_;
  }
  if (part) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      part = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, part, submessage_arena);
    }
    set_has_part();
  } else {
    clear_has_part();
  }
  part_ = part;
  // @@protoc_insertion_point(field_set_allocated:revolve.msgs.BodyConnection.part)
}

// -------------------------------------------------------------------

// Body

// required .revolve.msgs.BodyPart root = 1;
inline bool Body::has_root() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Body::set_has_root() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Body::clear_has_root() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Body::clear_root() {
  if (root_ != NULL) root_->Clear();
  clear_has_root();
}
inline const ::revolve::msgs::BodyPart& Body::_internal_root() const {
  return *root_;
}
inline const ::revolve::msgs::BodyPart& Body::root() const {
  const ::revolve::msgs::BodyPart* p = root_;
  // @@protoc_insertion_point(field_get:revolve.msgs.Body.root)
  return p != NULL ? *p : *reinterpret_cast<const ::revolve::msgs::BodyPart*>(
      &::revolve::msgs::_BodyPart_default_instance_);
}
inline ::revolve::msgs::BodyPart* Body::release_root() {
  // @@protoc_insertion_point(field_release:revolve.msgs.Body.root)
  clear_has_root();
  ::revolve::msgs::BodyPart* temp = root_;
  root_ = NULL;
  return temp;
}
inline ::revolve::msgs::BodyPart* Body::mutable_root() {
  set_has_root();
  if (root_ == NULL) {
    auto* p = CreateMaybeMessage<::revolve::msgs::BodyPart>(GetArenaNoVirtual());
    root_ = p;
  }
  // @@protoc_insertion_point(field_mutable:revolve.msgs.Body.root)
  return root_;
}
inline void Body::set_allocated_root(::revolve::msgs::BodyPart* root) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete root_;
  }
  if (root) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      root = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, root, submessage_arena);
    }
    set_has_root();
  } else {
    clear_has_root();
  }
  root_ = root;
  // @@protoc_insertion_point(field_set_allocated:revolve.msgs.Body.root)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace revolve

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_body_2eproto
