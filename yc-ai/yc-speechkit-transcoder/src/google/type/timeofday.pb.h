// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/timeofday.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2ftimeofday_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2ftimeofday_2eproto

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2ftype_2ftimeofday_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2ftype_2ftimeofday_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2ftimeofday_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_google_2ftype_2ftimeofday_2eproto_metadata_getter(int index);
namespace google {
namespace type {
class TimeOfDay;
struct TimeOfDayDefaultTypeInternal;
extern TimeOfDayDefaultTypeInternal _TimeOfDay_default_instance_;
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::type::TimeOfDay* Arena::CreateMaybeMessage<::google::type::TimeOfDay>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace type {

// ===================================================================

class TimeOfDay PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.TimeOfDay) */ {
 public:
  inline TimeOfDay() : TimeOfDay(nullptr) {}
  virtual ~TimeOfDay();
  explicit constexpr TimeOfDay(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TimeOfDay(const TimeOfDay& from);
  TimeOfDay(TimeOfDay&& from) noexcept
    : TimeOfDay() {
    *this = ::std::move(from);
  }

  inline TimeOfDay& operator=(const TimeOfDay& from) {
    CopyFrom(from);
    return *this;
  }
  inline TimeOfDay& operator=(TimeOfDay&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const TimeOfDay& default_instance() {
    return *internal_default_instance();
  }
  static inline const TimeOfDay* internal_default_instance() {
    return reinterpret_cast<const TimeOfDay*>(
               &_TimeOfDay_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TimeOfDay& a, TimeOfDay& b) {
    a.Swap(&b);
  }
  inline void Swap(TimeOfDay* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TimeOfDay* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TimeOfDay* New() const final {
    return CreateMaybeMessage<TimeOfDay>(nullptr);
  }

  TimeOfDay* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TimeOfDay>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TimeOfDay& from);
  void MergeFrom(const TimeOfDay& from);
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
  void InternalSwap(TimeOfDay* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.TimeOfDay";
  }
  protected:
  explicit TimeOfDay(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_google_2ftype_2ftimeofday_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHoursFieldNumber = 1,
    kMinutesFieldNumber = 2,
    kSecondsFieldNumber = 3,
    kNanosFieldNumber = 4,
  };
  // int32 hours = 1;
  void clear_hours();
  ::PROTOBUF_NAMESPACE_ID::int32 hours() const;
  void set_hours(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_hours() const;
  void _internal_set_hours(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 minutes = 2;
  void clear_minutes();
  ::PROTOBUF_NAMESPACE_ID::int32 minutes() const;
  void set_minutes(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_minutes() const;
  void _internal_set_minutes(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 seconds = 3;
  void clear_seconds();
  ::PROTOBUF_NAMESPACE_ID::int32 seconds() const;
  void set_seconds(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_seconds() const;
  void _internal_set_seconds(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 nanos = 4;
  void clear_nanos();
  ::PROTOBUF_NAMESPACE_ID::int32 nanos() const;
  void set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_nanos() const;
  void _internal_set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:google.type.TimeOfDay)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 hours_;
  ::PROTOBUF_NAMESPACE_ID::int32 minutes_;
  ::PROTOBUF_NAMESPACE_ID::int32 seconds_;
  ::PROTOBUF_NAMESPACE_ID::int32 nanos_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2ftype_2ftimeofday_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TimeOfDay

// int32 hours = 1;
inline void TimeOfDay::clear_hours() {
  hours_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TimeOfDay::_internal_hours() const {
  return hours_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TimeOfDay::hours() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.hours)
  return _internal_hours();
}
inline void TimeOfDay::_internal_set_hours(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  hours_ = value;
}
inline void TimeOfDay::set_hours(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_hours(value);
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.hours)
}

// int32 minutes = 2;
inline void TimeOfDay::clear_minutes() {
  minutes_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TimeOfDay::_internal_minutes() const {
  return minutes_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TimeOfDay::minutes() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.minutes)
  return _internal_minutes();
}
inline void TimeOfDay::_internal_set_minutes(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  minutes_ = value;
}
inline void TimeOfDay::set_minutes(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_minutes(value);
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.minutes)
}

// int32 seconds = 3;
inline void TimeOfDay::clear_seconds() {
  seconds_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TimeOfDay::_internal_seconds() const {
  return seconds_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TimeOfDay::seconds() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.seconds)
  return _internal_seconds();
}
inline void TimeOfDay::_internal_set_seconds(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  seconds_ = value;
}
inline void TimeOfDay::set_seconds(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_seconds(value);
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.seconds)
}

// int32 nanos = 4;
inline void TimeOfDay::clear_nanos() {
  nanos_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TimeOfDay::_internal_nanos() const {
  return nanos_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TimeOfDay::nanos() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.nanos)
  return _internal_nanos();
}
inline void TimeOfDay::_internal_set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  nanos_ = value;
}
inline void TimeOfDay::set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_nanos(value);
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.nanos)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2ftimeofday_2eproto
