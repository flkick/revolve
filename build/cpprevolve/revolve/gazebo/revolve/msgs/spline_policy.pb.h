// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: spline_policy.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_spline_5fpolicy_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_spline_5fpolicy_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "parameter.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_spline_5fpolicy_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_spline_5fpolicy_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_spline_5fpolicy_2eproto;
namespace revolve {
namespace msgs {
class ModifyPolicy;
class ModifyPolicyDefaultTypeInternal;
extern ModifyPolicyDefaultTypeInternal _ModifyPolicy_default_instance_;
class Policy;
class PolicyDefaultTypeInternal;
extern PolicyDefaultTypeInternal _Policy_default_instance_;
class Spline;
class SplineDefaultTypeInternal;
extern SplineDefaultTypeInternal _Spline_default_instance_;
}  // namespace msgs
}  // namespace revolve
PROTOBUF_NAMESPACE_OPEN
template<> ::revolve::msgs::ModifyPolicy* Arena::CreateMaybeMessage<::revolve::msgs::ModifyPolicy>(Arena*);
template<> ::revolve::msgs::Policy* Arena::CreateMaybeMessage<::revolve::msgs::Policy>(Arena*);
template<> ::revolve::msgs::Spline* Arena::CreateMaybeMessage<::revolve::msgs::Spline>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace revolve {
namespace msgs {

// ===================================================================

class Spline :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:revolve.msgs.Spline) */ {
 public:
  Spline();
  virtual ~Spline();

  Spline(const Spline& from);
  Spline(Spline&& from) noexcept
    : Spline() {
    *this = ::std::move(from);
  }

  inline Spline& operator=(const Spline& from) {
    CopyFrom(from);
    return *this;
  }
  inline Spline& operator=(Spline&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Spline& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Spline* internal_default_instance() {
    return reinterpret_cast<const Spline*>(
               &_Spline_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Spline& a, Spline& b) {
    a.Swap(&b);
  }
  inline void Swap(Spline* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Spline* New() const final {
    return CreateMaybeMessage<Spline>(nullptr);
  }

  Spline* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Spline>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Spline& from);
  void MergeFrom(const Spline& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Spline* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "revolve.msgs.Spline";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_spline_5fpolicy_2eproto);
    return ::descriptor_table_spline_5fpolicy_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kParamFieldNumber = 5,
    kIndexFieldNumber = 1,
    kSizeFieldNumber = 2,
  };
  // repeated .revolve.msgs.Parameter param = 5;
  int param_size() const;
  private:
  int _internal_param_size() const;
  public:
  void clear_param();
  ::revolve::msgs::Parameter* mutable_param(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::revolve::msgs::Parameter >*
      mutable_param();
  private:
  const ::revolve::msgs::Parameter& _internal_param(int index) const;
  ::revolve::msgs::Parameter* _internal_add_param();
  public:
  const ::revolve::msgs::Parameter& param(int index) const;
  ::revolve::msgs::Parameter* add_param();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::revolve::msgs::Parameter >&
      param() const;

  // required int32 index = 1;
  bool has_index() const;
  private:
  bool _internal_has_index() const;
  public:
  void clear_index();
  ::PROTOBUF_NAMESPACE_ID::int32 index() const;
  void set_index(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_index() const;
  void _internal_set_index(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 size = 2;
  bool has_size() const;
  private:
  bool _internal_has_size() const;
  public:
  void clear_size();
  ::PROTOBUF_NAMESPACE_ID::int32 size() const;
  void set_size(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_size() const;
  void _internal_set_size(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:revolve.msgs.Spline)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::revolve::msgs::Parameter > param_;
  ::PROTOBUF_NAMESPACE_ID::int32 index_;
  ::PROTOBUF_NAMESPACE_ID::int32 size_;
  friend struct ::TableStruct_spline_5fpolicy_2eproto;
};
// -------------------------------------------------------------------

class Policy :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:revolve.msgs.Policy) */ {
 public:
  Policy();
  virtual ~Policy();

  Policy(const Policy& from);
  Policy(Policy&& from) noexcept
    : Policy() {
    *this = ::std::move(from);
  }

  inline Policy& operator=(const Policy& from) {
    CopyFrom(from);
    return *this;
  }
  inline Policy& operator=(Policy&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Policy& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Policy* internal_default_instance() {
    return reinterpret_cast<const Policy*>(
               &_Policy_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Policy& a, Policy& b) {
    a.Swap(&b);
  }
  inline void Swap(Policy* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Policy* New() const final {
    return CreateMaybeMessage<Policy>(nullptr);
  }

  Policy* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Policy>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Policy& from);
  void MergeFrom(const Policy& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Policy* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "revolve.msgs.Policy";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_spline_5fpolicy_2eproto);
    return ::descriptor_table_spline_5fpolicy_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIndexFieldNumber = 1,
  };
  // repeated int32 index = 1;
  int index_size() const;
  private:
  int _internal_index_size() const;
  public:
  void clear_index();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_index(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_index() const;
  void _internal_add_index(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_index();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 index(int index) const;
  void set_index(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_index(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      index() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_index();

  // @@protoc_insertion_point(class_scope:revolve.msgs.Policy)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > index_;
  friend struct ::TableStruct_spline_5fpolicy_2eproto;
};
// -------------------------------------------------------------------

class ModifyPolicy :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:revolve.msgs.ModifyPolicy) */ {
 public:
  ModifyPolicy();
  virtual ~ModifyPolicy();

  ModifyPolicy(const ModifyPolicy& from);
  ModifyPolicy(ModifyPolicy&& from) noexcept
    : ModifyPolicy() {
    *this = ::std::move(from);
  }

  inline ModifyPolicy& operator=(const ModifyPolicy& from) {
    CopyFrom(from);
    return *this;
  }
  inline ModifyPolicy& operator=(ModifyPolicy&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ModifyPolicy& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ModifyPolicy* internal_default_instance() {
    return reinterpret_cast<const ModifyPolicy*>(
               &_ModifyPolicy_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ModifyPolicy& a, ModifyPolicy& b) {
    a.Swap(&b);
  }
  inline void Swap(ModifyPolicy* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ModifyPolicy* New() const final {
    return CreateMaybeMessage<ModifyPolicy>(nullptr);
  }

  ModifyPolicy* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ModifyPolicy>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ModifyPolicy& from);
  void MergeFrom(const ModifyPolicy& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ModifyPolicy* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "revolve.msgs.ModifyPolicy";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_spline_5fpolicy_2eproto);
    return ::descriptor_table_spline_5fpolicy_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAddPointFieldNumber = 1,
    kInterpolateFieldNumber = 2,
  };
  // repeated double add_point = 1;
  int add_point_size() const;
  private:
  int _internal_add_point_size() const;
  public:
  void clear_add_point();
  private:
  double _internal_add_point(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_add_point() const;
  void _internal_add_add_point(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_add_point();
  public:
  double add_point(int index) const;
  void set_add_point(int index, double value);
  void add_add_point(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      add_point() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_add_point();

  // repeated string interpolate = 2;
  int interpolate_size() const;
  private:
  int _internal_interpolate_size() const;
  public:
  void clear_interpolate();
  const std::string& interpolate(int index) const;
  std::string* mutable_interpolate(int index);
  void set_interpolate(int index, const std::string& value);
  void set_interpolate(int index, std::string&& value);
  void set_interpolate(int index, const char* value);
  void set_interpolate(int index, const char* value, size_t size);
  std::string* add_interpolate();
  void add_interpolate(const std::string& value);
  void add_interpolate(std::string&& value);
  void add_interpolate(const char* value);
  void add_interpolate(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& interpolate() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_interpolate();
  private:
  const std::string& _internal_interpolate(int index) const;
  std::string* _internal_add_interpolate();
  public:

  // @@protoc_insertion_point(class_scope:revolve.msgs.ModifyPolicy)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > add_point_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> interpolate_;
  friend struct ::TableStruct_spline_5fpolicy_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Spline

// required int32 index = 1;
inline bool Spline::_internal_has_index() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Spline::has_index() const {
  return _internal_has_index();
}
inline void Spline::clear_index() {
  index_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Spline::_internal_index() const {
  return index_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Spline::index() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.Spline.index)
  return _internal_index();
}
inline void Spline::_internal_set_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  index_ = value;
}
inline void Spline::set_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:revolve.msgs.Spline.index)
}

// required int32 size = 2;
inline bool Spline::_internal_has_size() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Spline::has_size() const {
  return _internal_has_size();
}
inline void Spline::clear_size() {
  size_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Spline::_internal_size() const {
  return size_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Spline::size() const {
  // @@protoc_insertion_point(field_get:revolve.msgs.Spline.size)
  return _internal_size();
}
inline void Spline::_internal_set_size(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  size_ = value;
}
inline void Spline::set_size(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_size(value);
  // @@protoc_insertion_point(field_set:revolve.msgs.Spline.size)
}

// repeated .revolve.msgs.Parameter param = 5;
inline int Spline::_internal_param_size() const {
  return param_.size();
}
inline int Spline::param_size() const {
  return _internal_param_size();
}
inline ::revolve::msgs::Parameter* Spline::mutable_param(int index) {
  // @@protoc_insertion_point(field_mutable:revolve.msgs.Spline.param)
  return param_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::revolve::msgs::Parameter >*
Spline::mutable_param() {
  // @@protoc_insertion_point(field_mutable_list:revolve.msgs.Spline.param)
  return &param_;
}
inline const ::revolve::msgs::Parameter& Spline::_internal_param(int index) const {
  return param_.Get(index);
}
inline const ::revolve::msgs::Parameter& Spline::param(int index) const {
  // @@protoc_insertion_point(field_get:revolve.msgs.Spline.param)
  return _internal_param(index);
}
inline ::revolve::msgs::Parameter* Spline::_internal_add_param() {
  return param_.Add();
}
inline ::revolve::msgs::Parameter* Spline::add_param() {
  // @@protoc_insertion_point(field_add:revolve.msgs.Spline.param)
  return _internal_add_param();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::revolve::msgs::Parameter >&
Spline::param() const {
  // @@protoc_insertion_point(field_list:revolve.msgs.Spline.param)
  return param_;
}

// -------------------------------------------------------------------

// Policy

// repeated int32 index = 1;
inline int Policy::_internal_index_size() const {
  return index_.size();
}
inline int Policy::index_size() const {
  return _internal_index_size();
}
inline void Policy::clear_index() {
  index_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Policy::_internal_index(int index) const {
  return index_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Policy::index(int index) const {
  // @@protoc_insertion_point(field_get:revolve.msgs.Policy.index)
  return _internal_index(index);
}
inline void Policy::set_index(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  index_.Set(index, value);
  // @@protoc_insertion_point(field_set:revolve.msgs.Policy.index)
}
inline void Policy::_internal_add_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  index_.Add(value);
}
inline void Policy::add_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_index(value);
  // @@protoc_insertion_point(field_add:revolve.msgs.Policy.index)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Policy::_internal_index() const {
  return index_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Policy::index() const {
  // @@protoc_insertion_point(field_list:revolve.msgs.Policy.index)
  return _internal_index();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Policy::_internal_mutable_index() {
  return &index_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Policy::mutable_index() {
  // @@protoc_insertion_point(field_mutable_list:revolve.msgs.Policy.index)
  return _internal_mutable_index();
}

// -------------------------------------------------------------------

// ModifyPolicy

// repeated double add_point = 1;
inline int ModifyPolicy::_internal_add_point_size() const {
  return add_point_.size();
}
inline int ModifyPolicy::add_point_size() const {
  return _internal_add_point_size();
}
inline void ModifyPolicy::clear_add_point() {
  add_point_.Clear();
}
inline double ModifyPolicy::_internal_add_point(int index) const {
  return add_point_.Get(index);
}
inline double ModifyPolicy::add_point(int index) const {
  // @@protoc_insertion_point(field_get:revolve.msgs.ModifyPolicy.add_point)
  return _internal_add_point(index);
}
inline void ModifyPolicy::set_add_point(int index, double value) {
  add_point_.Set(index, value);
  // @@protoc_insertion_point(field_set:revolve.msgs.ModifyPolicy.add_point)
}
inline void ModifyPolicy::_internal_add_add_point(double value) {
  add_point_.Add(value);
}
inline void ModifyPolicy::add_add_point(double value) {
  _internal_add_add_point(value);
  // @@protoc_insertion_point(field_add:revolve.msgs.ModifyPolicy.add_point)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
ModifyPolicy::_internal_add_point() const {
  return add_point_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
ModifyPolicy::add_point() const {
  // @@protoc_insertion_point(field_list:revolve.msgs.ModifyPolicy.add_point)
  return _internal_add_point();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
ModifyPolicy::_internal_mutable_add_point() {
  return &add_point_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
ModifyPolicy::mutable_add_point() {
  // @@protoc_insertion_point(field_mutable_list:revolve.msgs.ModifyPolicy.add_point)
  return _internal_mutable_add_point();
}

// repeated string interpolate = 2;
inline int ModifyPolicy::_internal_interpolate_size() const {
  return interpolate_.size();
}
inline int ModifyPolicy::interpolate_size() const {
  return _internal_interpolate_size();
}
inline void ModifyPolicy::clear_interpolate() {
  interpolate_.Clear();
}
inline std::string* ModifyPolicy::add_interpolate() {
  // @@protoc_insertion_point(field_add_mutable:revolve.msgs.ModifyPolicy.interpolate)
  return _internal_add_interpolate();
}
inline const std::string& ModifyPolicy::_internal_interpolate(int index) const {
  return interpolate_.Get(index);
}
inline const std::string& ModifyPolicy::interpolate(int index) const {
  // @@protoc_insertion_point(field_get:revolve.msgs.ModifyPolicy.interpolate)
  return _internal_interpolate(index);
}
inline std::string* ModifyPolicy::mutable_interpolate(int index) {
  // @@protoc_insertion_point(field_mutable:revolve.msgs.ModifyPolicy.interpolate)
  return interpolate_.Mutable(index);
}
inline void ModifyPolicy::set_interpolate(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:revolve.msgs.ModifyPolicy.interpolate)
  interpolate_.Mutable(index)->assign(value);
}
inline void ModifyPolicy::set_interpolate(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:revolve.msgs.ModifyPolicy.interpolate)
  interpolate_.Mutable(index)->assign(std::move(value));
}
inline void ModifyPolicy::set_interpolate(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  interpolate_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:revolve.msgs.ModifyPolicy.interpolate)
}
inline void ModifyPolicy::set_interpolate(int index, const char* value, size_t size) {
  interpolate_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:revolve.msgs.ModifyPolicy.interpolate)
}
inline std::string* ModifyPolicy::_internal_add_interpolate() {
  return interpolate_.Add();
}
inline void ModifyPolicy::add_interpolate(const std::string& value) {
  interpolate_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:revolve.msgs.ModifyPolicy.interpolate)
}
inline void ModifyPolicy::add_interpolate(std::string&& value) {
  interpolate_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:revolve.msgs.ModifyPolicy.interpolate)
}
inline void ModifyPolicy::add_interpolate(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  interpolate_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:revolve.msgs.ModifyPolicy.interpolate)
}
inline void ModifyPolicy::add_interpolate(const char* value, size_t size) {
  interpolate_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:revolve.msgs.ModifyPolicy.interpolate)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ModifyPolicy::interpolate() const {
  // @@protoc_insertion_point(field_list:revolve.msgs.ModifyPolicy.interpolate)
  return interpolate_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ModifyPolicy::mutable_interpolate() {
  // @@protoc_insertion_point(field_mutable_list:revolve.msgs.ModifyPolicy.interpolate)
  return &interpolate_;
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

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_spline_5fpolicy_2eproto
