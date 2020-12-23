// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: characteristics.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_characteristics_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_characteristics_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_characteristics_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_characteristics_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_characteristics_2eproto;
class CharacteristicsProto;
class CharacteristicsProtoDefaultTypeInternal;
extern CharacteristicsProtoDefaultTypeInternal _CharacteristicsProto_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::CharacteristicsProto* Arena::CreateMaybeMessage<::CharacteristicsProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class CharacteristicsProto PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CharacteristicsProto) */ {
 public:
  inline CharacteristicsProto() : CharacteristicsProto(nullptr) {}
  virtual ~CharacteristicsProto();

  CharacteristicsProto(const CharacteristicsProto& from);
  CharacteristicsProto(CharacteristicsProto&& from) noexcept
    : CharacteristicsProto() {
    *this = ::std::move(from);
  }

  inline CharacteristicsProto& operator=(const CharacteristicsProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline CharacteristicsProto& operator=(CharacteristicsProto&& from) noexcept {
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
  static const CharacteristicsProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CharacteristicsProto* internal_default_instance() {
    return reinterpret_cast<const CharacteristicsProto*>(
               &_CharacteristicsProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CharacteristicsProto& a, CharacteristicsProto& b) {
    a.Swap(&b);
  }
  inline void Swap(CharacteristicsProto* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CharacteristicsProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CharacteristicsProto* New() const final {
    return CreateMaybeMessage<CharacteristicsProto>(nullptr);
  }

  CharacteristicsProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CharacteristicsProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CharacteristicsProto& from);
  void MergeFrom(const CharacteristicsProto& from);
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
  void InternalSwap(CharacteristicsProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CharacteristicsProto";
  }
  protected:
  explicit CharacteristicsProto(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_characteristics_2eproto);
    return ::descriptor_table_characteristics_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSocketFieldNumber = 8,
    kMemoryCapacityFieldNumber = 1,
    kFrequencyFieldNumber = 2,
    kMinimalFrequencyFieldNumber = 3,
    kMaximalFrequencyFieldNumber = 4,
    kCoresNumberFieldNumber = 5,
    kMaxRamFieldNumber = 7,
    kCoolerFlagFieldNumber = 6,
    kSsdFlagFieldNumber = 11,
    kCapacityFieldNumber = 9,
    kTurnsPerMinuteFieldNumber = 10,
    kCoreFrequencyFieldNumber = 12,
    kMemoryFrequencyFieldNumber = 13,
    kDisplayPortsNumFieldNumber = 14,
  };
  // string socket = 8;
  void clear_socket();
  const std::string& socket() const;
  void set_socket(const std::string& value);
  void set_socket(std::string&& value);
  void set_socket(const char* value);
  void set_socket(const char* value, size_t size);
  std::string* mutable_socket();
  std::string* release_socket();
  void set_allocated_socket(std::string* socket);
  private:
  const std::string& _internal_socket() const;
  void _internal_set_socket(const std::string& value);
  std::string* _internal_mutable_socket();
  public:

  // uint32 memory_capacity = 1;
  void clear_memory_capacity();
  ::PROTOBUF_NAMESPACE_ID::uint32 memory_capacity() const;
  void set_memory_capacity(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_memory_capacity() const;
  void _internal_set_memory_capacity(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 frequency = 2;
  void clear_frequency();
  ::PROTOBUF_NAMESPACE_ID::uint32 frequency() const;
  void set_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_frequency() const;
  void _internal_set_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // double minimal_frequency = 3;
  void clear_minimal_frequency();
  double minimal_frequency() const;
  void set_minimal_frequency(double value);
  private:
  double _internal_minimal_frequency() const;
  void _internal_set_minimal_frequency(double value);
  public:

  // double maximal_frequency = 4;
  void clear_maximal_frequency();
  double maximal_frequency() const;
  void set_maximal_frequency(double value);
  private:
  double _internal_maximal_frequency() const;
  void _internal_set_maximal_frequency(double value);
  public:

  // uint32 cores_number = 5;
  void clear_cores_number();
  ::PROTOBUF_NAMESPACE_ID::uint32 cores_number() const;
  void set_cores_number(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_cores_number() const;
  void _internal_set_cores_number(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 max_ram = 7;
  void clear_max_ram();
  ::PROTOBUF_NAMESPACE_ID::uint32 max_ram() const;
  void set_max_ram(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_max_ram() const;
  void _internal_set_max_ram(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // bool cooler_flag = 6;
  void clear_cooler_flag();
  bool cooler_flag() const;
  void set_cooler_flag(bool value);
  private:
  bool _internal_cooler_flag() const;
  void _internal_set_cooler_flag(bool value);
  public:

  // bool ssd_flag = 11;
  void clear_ssd_flag();
  bool ssd_flag() const;
  void set_ssd_flag(bool value);
  private:
  bool _internal_ssd_flag() const;
  void _internal_set_ssd_flag(bool value);
  public:

  // uint32 capacity = 9;
  void clear_capacity();
  ::PROTOBUF_NAMESPACE_ID::uint32 capacity() const;
  void set_capacity(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_capacity() const;
  void _internal_set_capacity(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 turns_per_minute = 10;
  void clear_turns_per_minute();
  ::PROTOBUF_NAMESPACE_ID::uint32 turns_per_minute() const;
  void set_turns_per_minute(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_turns_per_minute() const;
  void _internal_set_turns_per_minute(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 core_frequency = 12;
  void clear_core_frequency();
  ::PROTOBUF_NAMESPACE_ID::uint32 core_frequency() const;
  void set_core_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_core_frequency() const;
  void _internal_set_core_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 memory_frequency = 13;
  void clear_memory_frequency();
  ::PROTOBUF_NAMESPACE_ID::uint32 memory_frequency() const;
  void set_memory_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_memory_frequency() const;
  void _internal_set_memory_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 display_ports_num = 14;
  void clear_display_ports_num();
  ::PROTOBUF_NAMESPACE_ID::uint32 display_ports_num() const;
  void set_display_ports_num(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_display_ports_num() const;
  void _internal_set_display_ports_num(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:CharacteristicsProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr socket_;
  ::PROTOBUF_NAMESPACE_ID::uint32 memory_capacity_;
  ::PROTOBUF_NAMESPACE_ID::uint32 frequency_;
  double minimal_frequency_;
  double maximal_frequency_;
  ::PROTOBUF_NAMESPACE_ID::uint32 cores_number_;
  ::PROTOBUF_NAMESPACE_ID::uint32 max_ram_;
  bool cooler_flag_;
  bool ssd_flag_;
  ::PROTOBUF_NAMESPACE_ID::uint32 capacity_;
  ::PROTOBUF_NAMESPACE_ID::uint32 turns_per_minute_;
  ::PROTOBUF_NAMESPACE_ID::uint32 core_frequency_;
  ::PROTOBUF_NAMESPACE_ID::uint32 memory_frequency_;
  ::PROTOBUF_NAMESPACE_ID::uint32 display_ports_num_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_characteristics_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CharacteristicsProto

// uint32 memory_capacity = 1;
inline void CharacteristicsProto::clear_memory_capacity() {
  memory_capacity_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::_internal_memory_capacity() const {
  return memory_capacity_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::memory_capacity() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.memory_capacity)
  return _internal_memory_capacity();
}
inline void CharacteristicsProto::_internal_set_memory_capacity(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  memory_capacity_ = value;
}
inline void CharacteristicsProto::set_memory_capacity(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_memory_capacity(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.memory_capacity)
}

// uint32 frequency = 2;
inline void CharacteristicsProto::clear_frequency() {
  frequency_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::_internal_frequency() const {
  return frequency_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::frequency() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.frequency)
  return _internal_frequency();
}
inline void CharacteristicsProto::_internal_set_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  frequency_ = value;
}
inline void CharacteristicsProto::set_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_frequency(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.frequency)
}

// double minimal_frequency = 3;
inline void CharacteristicsProto::clear_minimal_frequency() {
  minimal_frequency_ = 0;
}
inline double CharacteristicsProto::_internal_minimal_frequency() const {
  return minimal_frequency_;
}
inline double CharacteristicsProto::minimal_frequency() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.minimal_frequency)
  return _internal_minimal_frequency();
}
inline void CharacteristicsProto::_internal_set_minimal_frequency(double value) {
  
  minimal_frequency_ = value;
}
inline void CharacteristicsProto::set_minimal_frequency(double value) {
  _internal_set_minimal_frequency(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.minimal_frequency)
}

// double maximal_frequency = 4;
inline void CharacteristicsProto::clear_maximal_frequency() {
  maximal_frequency_ = 0;
}
inline double CharacteristicsProto::_internal_maximal_frequency() const {
  return maximal_frequency_;
}
inline double CharacteristicsProto::maximal_frequency() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.maximal_frequency)
  return _internal_maximal_frequency();
}
inline void CharacteristicsProto::_internal_set_maximal_frequency(double value) {
  
  maximal_frequency_ = value;
}
inline void CharacteristicsProto::set_maximal_frequency(double value) {
  _internal_set_maximal_frequency(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.maximal_frequency)
}

// uint32 cores_number = 5;
inline void CharacteristicsProto::clear_cores_number() {
  cores_number_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::_internal_cores_number() const {
  return cores_number_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::cores_number() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.cores_number)
  return _internal_cores_number();
}
inline void CharacteristicsProto::_internal_set_cores_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  cores_number_ = value;
}
inline void CharacteristicsProto::set_cores_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_cores_number(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.cores_number)
}

// bool cooler_flag = 6;
inline void CharacteristicsProto::clear_cooler_flag() {
  cooler_flag_ = false;
}
inline bool CharacteristicsProto::_internal_cooler_flag() const {
  return cooler_flag_;
}
inline bool CharacteristicsProto::cooler_flag() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.cooler_flag)
  return _internal_cooler_flag();
}
inline void CharacteristicsProto::_internal_set_cooler_flag(bool value) {
  
  cooler_flag_ = value;
}
inline void CharacteristicsProto::set_cooler_flag(bool value) {
  _internal_set_cooler_flag(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.cooler_flag)
}

// uint32 max_ram = 7;
inline void CharacteristicsProto::clear_max_ram() {
  max_ram_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::_internal_max_ram() const {
  return max_ram_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::max_ram() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.max_ram)
  return _internal_max_ram();
}
inline void CharacteristicsProto::_internal_set_max_ram(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  max_ram_ = value;
}
inline void CharacteristicsProto::set_max_ram(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_max_ram(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.max_ram)
}

// string socket = 8;
inline void CharacteristicsProto::clear_socket() {
  socket_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CharacteristicsProto::socket() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.socket)
  return _internal_socket();
}
inline void CharacteristicsProto::set_socket(const std::string& value) {
  _internal_set_socket(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.socket)
}
inline std::string* CharacteristicsProto::mutable_socket() {
  // @@protoc_insertion_point(field_mutable:CharacteristicsProto.socket)
  return _internal_mutable_socket();
}
inline const std::string& CharacteristicsProto::_internal_socket() const {
  return socket_.Get();
}
inline void CharacteristicsProto::_internal_set_socket(const std::string& value) {
  
  socket_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CharacteristicsProto::set_socket(std::string&& value) {
  
  socket_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:CharacteristicsProto.socket)
}
inline void CharacteristicsProto::set_socket(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  socket_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:CharacteristicsProto.socket)
}
inline void CharacteristicsProto::set_socket(const char* value,
    size_t size) {
  
  socket_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:CharacteristicsProto.socket)
}
inline std::string* CharacteristicsProto::_internal_mutable_socket() {
  
  return socket_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CharacteristicsProto::release_socket() {
  // @@protoc_insertion_point(field_release:CharacteristicsProto.socket)
  return socket_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CharacteristicsProto::set_allocated_socket(std::string* socket) {
  if (socket != nullptr) {
    
  } else {
    
  }
  socket_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), socket,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:CharacteristicsProto.socket)
}

// uint32 capacity = 9;
inline void CharacteristicsProto::clear_capacity() {
  capacity_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::_internal_capacity() const {
  return capacity_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::capacity() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.capacity)
  return _internal_capacity();
}
inline void CharacteristicsProto::_internal_set_capacity(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  capacity_ = value;
}
inline void CharacteristicsProto::set_capacity(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_capacity(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.capacity)
}

// uint32 turns_per_minute = 10;
inline void CharacteristicsProto::clear_turns_per_minute() {
  turns_per_minute_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::_internal_turns_per_minute() const {
  return turns_per_minute_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::turns_per_minute() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.turns_per_minute)
  return _internal_turns_per_minute();
}
inline void CharacteristicsProto::_internal_set_turns_per_minute(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  turns_per_minute_ = value;
}
inline void CharacteristicsProto::set_turns_per_minute(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_turns_per_minute(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.turns_per_minute)
}

// bool ssd_flag = 11;
inline void CharacteristicsProto::clear_ssd_flag() {
  ssd_flag_ = false;
}
inline bool CharacteristicsProto::_internal_ssd_flag() const {
  return ssd_flag_;
}
inline bool CharacteristicsProto::ssd_flag() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.ssd_flag)
  return _internal_ssd_flag();
}
inline void CharacteristicsProto::_internal_set_ssd_flag(bool value) {
  
  ssd_flag_ = value;
}
inline void CharacteristicsProto::set_ssd_flag(bool value) {
  _internal_set_ssd_flag(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.ssd_flag)
}

// uint32 core_frequency = 12;
inline void CharacteristicsProto::clear_core_frequency() {
  core_frequency_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::_internal_core_frequency() const {
  return core_frequency_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::core_frequency() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.core_frequency)
  return _internal_core_frequency();
}
inline void CharacteristicsProto::_internal_set_core_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  core_frequency_ = value;
}
inline void CharacteristicsProto::set_core_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_core_frequency(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.core_frequency)
}

// uint32 memory_frequency = 13;
inline void CharacteristicsProto::clear_memory_frequency() {
  memory_frequency_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::_internal_memory_frequency() const {
  return memory_frequency_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::memory_frequency() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.memory_frequency)
  return _internal_memory_frequency();
}
inline void CharacteristicsProto::_internal_set_memory_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  memory_frequency_ = value;
}
inline void CharacteristicsProto::set_memory_frequency(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_memory_frequency(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.memory_frequency)
}

// uint32 display_ports_num = 14;
inline void CharacteristicsProto::clear_display_ports_num() {
  display_ports_num_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::_internal_display_ports_num() const {
  return display_ports_num_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacteristicsProto::display_ports_num() const {
  // @@protoc_insertion_point(field_get:CharacteristicsProto.display_ports_num)
  return _internal_display_ports_num();
}
inline void CharacteristicsProto::_internal_set_display_ports_num(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  display_ports_num_ = value;
}
inline void CharacteristicsProto::set_display_ports_num(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_display_ports_num(value);
  // @@protoc_insertion_point(field_set:CharacteristicsProto.display_ports_num)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_characteristics_2eproto