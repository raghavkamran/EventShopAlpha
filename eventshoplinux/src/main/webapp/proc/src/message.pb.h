// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef PROTOBUF_message_2eproto__INCLUDED
#define PROTOBUF_message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_message_2eproto();
void protobuf_AssignDesc_message_2eproto();
void protobuf_ShutdownFile_message_2eproto();

class EmageMsg;

// ===================================================================

class EmageMsg : public ::google::protobuf::Message {
 public:
  EmageMsg();
  virtual ~EmageMsg();
  
  EmageMsg(const EmageMsg& from);
  
  inline EmageMsg& operator=(const EmageMsg& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const EmageMsg& default_instance();
  
  void Swap(EmageMsg* other);
  
  // implements Message ----------------------------------------------
  
  EmageMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EmageMsg& from);
  void MergeFrom(const EmageMsg& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional string theme = 1;
  inline bool has_theme() const;
  inline void clear_theme();
  static const int kThemeFieldNumber = 1;
  inline const ::std::string& theme() const;
  inline void set_theme(const ::std::string& value);
  inline void set_theme(const char* value);
  inline void set_theme(const char* value, size_t size);
  inline ::std::string* mutable_theme();
  inline ::std::string* release_theme();
  
  // optional int64 start_time = 2;
  inline bool has_start_time() const;
  inline void clear_start_time();
  static const int kStartTimeFieldNumber = 2;
  inline ::google::protobuf::int64 start_time() const;
  inline void set_start_time(::google::protobuf::int64 value);
  
  // optional int64 end_time = 3;
  inline bool has_end_time() const;
  inline void clear_end_time();
  static const int kEndTimeFieldNumber = 3;
  inline ::google::protobuf::int64 end_time() const;
  inline void set_end_time(::google::protobuf::int64 value);
  
  // optional double lat_unit = 4;
  inline bool has_lat_unit() const;
  inline void clear_lat_unit();
  static const int kLatUnitFieldNumber = 4;
  inline double lat_unit() const;
  inline void set_lat_unit(double value);
  
  // optional double long_unit = 5;
  inline bool has_long_unit() const;
  inline void clear_long_unit();
  static const int kLongUnitFieldNumber = 5;
  inline double long_unit() const;
  inline void set_long_unit(double value);
  
  // optional double sw_lat = 6;
  inline bool has_sw_lat() const;
  inline void clear_sw_lat();
  static const int kSwLatFieldNumber = 6;
  inline double sw_lat() const;
  inline void set_sw_lat(double value);
  
  // optional double sw_long = 7;
  inline bool has_sw_long() const;
  inline void clear_sw_long();
  static const int kSwLongFieldNumber = 7;
  inline double sw_long() const;
  inline void set_sw_long(double value);
  
  // optional double ne_lat = 8;
  inline bool has_ne_lat() const;
  inline void clear_ne_lat();
  static const int kNeLatFieldNumber = 8;
  inline double ne_lat() const;
  inline void set_ne_lat(double value);
  
  // optional double ne_long = 9;
  inline bool has_ne_long() const;
  inline void clear_ne_long();
  static const int kNeLongFieldNumber = 9;
  inline double ne_long() const;
  inline void set_ne_long(double value);
  
  // optional int32 num_rows = 10;
  inline bool has_num_rows() const;
  inline void clear_num_rows();
  static const int kNumRowsFieldNumber = 10;
  inline ::google::protobuf::int32 num_rows() const;
  inline void set_num_rows(::google::protobuf::int32 value);
  
  // optional int32 num_cols = 11;
  inline bool has_num_cols() const;
  inline void clear_num_cols();
  static const int kNumColsFieldNumber = 11;
  inline ::google::protobuf::int32 num_cols() const;
  inline void set_num_cols(::google::protobuf::int32 value);
  
  // repeated double cell = 12;
  inline int cell_size() const;
  inline void clear_cell();
  static const int kCellFieldNumber = 12;
  inline double cell(int index) const;
  inline void set_cell(int index, double value);
  inline void add_cell(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      cell() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_cell();
  
  // @@protoc_insertion_point(class_scope:EmageMsg)
 private:
  inline void set_has_theme();
  inline void clear_has_theme();
  inline void set_has_start_time();
  inline void clear_has_start_time();
  inline void set_has_end_time();
  inline void clear_has_end_time();
  inline void set_has_lat_unit();
  inline void clear_has_lat_unit();
  inline void set_has_long_unit();
  inline void clear_has_long_unit();
  inline void set_has_sw_lat();
  inline void clear_has_sw_lat();
  inline void set_has_sw_long();
  inline void clear_has_sw_long();
  inline void set_has_ne_lat();
  inline void clear_has_ne_lat();
  inline void set_has_ne_long();
  inline void clear_has_ne_long();
  inline void set_has_num_rows();
  inline void clear_has_num_rows();
  inline void set_has_num_cols();
  inline void clear_has_num_cols();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* theme_;
  ::google::protobuf::int64 start_time_;
  ::google::protobuf::int64 end_time_;
  double lat_unit_;
  double long_unit_;
  double sw_lat_;
  double sw_long_;
  double ne_lat_;
  double ne_long_;
  ::google::protobuf::int32 num_rows_;
  ::google::protobuf::int32 num_cols_;
  ::google::protobuf::RepeatedField< double > cell_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];
  
  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();
  
  void InitAsDefaultInstance();
  static EmageMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// EmageMsg

// optional string theme = 1;
inline bool EmageMsg::has_theme() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EmageMsg::set_has_theme() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EmageMsg::clear_has_theme() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EmageMsg::clear_theme() {
  if (theme_ != &::google::protobuf::internal::kEmptyString) {
    theme_->clear();
  }
  clear_has_theme();
}
inline const ::std::string& EmageMsg::theme() const {
  return *theme_;
}
inline void EmageMsg::set_theme(const ::std::string& value) {
  set_has_theme();
  if (theme_ == &::google::protobuf::internal::kEmptyString) {
    theme_ = new ::std::string;
  }
  theme_->assign(value);
}
inline void EmageMsg::set_theme(const char* value) {
  set_has_theme();
  if (theme_ == &::google::protobuf::internal::kEmptyString) {
    theme_ = new ::std::string;
  }
  theme_->assign(value);
}
inline void EmageMsg::set_theme(const char* value, size_t size) {
  set_has_theme();
  if (theme_ == &::google::protobuf::internal::kEmptyString) {
    theme_ = new ::std::string;
  }
  theme_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* EmageMsg::mutable_theme() {
  set_has_theme();
  if (theme_ == &::google::protobuf::internal::kEmptyString) {
    theme_ = new ::std::string;
  }
  return theme_;
}
inline ::std::string* EmageMsg::release_theme() {
  clear_has_theme();
  if (theme_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = theme_;
    theme_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int64 start_time = 2;
inline bool EmageMsg::has_start_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EmageMsg::set_has_start_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EmageMsg::clear_has_start_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EmageMsg::clear_start_time() {
  start_time_ = GOOGLE_LONGLONG(0);
  clear_has_start_time();
}
inline ::google::protobuf::int64 EmageMsg::start_time() const {
  return start_time_;
}
inline void EmageMsg::set_start_time(::google::protobuf::int64 value) {
  set_has_start_time();
  start_time_ = value;
}

// optional int64 end_time = 3;
inline bool EmageMsg::has_end_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void EmageMsg::set_has_end_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void EmageMsg::clear_has_end_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void EmageMsg::clear_end_time() {
  end_time_ = GOOGLE_LONGLONG(0);
  clear_has_end_time();
}
inline ::google::protobuf::int64 EmageMsg::end_time() const {
  return end_time_;
}
inline void EmageMsg::set_end_time(::google::protobuf::int64 value) {
  set_has_end_time();
  end_time_ = value;
}

// optional double lat_unit = 4;
inline bool EmageMsg::has_lat_unit() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void EmageMsg::set_has_lat_unit() {
  _has_bits_[0] |= 0x00000008u;
}
inline void EmageMsg::clear_has_lat_unit() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void EmageMsg::clear_lat_unit() {
  lat_unit_ = 0;
  clear_has_lat_unit();
}
inline double EmageMsg::lat_unit() const {
  return lat_unit_;
}
inline void EmageMsg::set_lat_unit(double value) {
  set_has_lat_unit();
  lat_unit_ = value;
}

// optional double long_unit = 5;
inline bool EmageMsg::has_long_unit() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void EmageMsg::set_has_long_unit() {
  _has_bits_[0] |= 0x00000010u;
}
inline void EmageMsg::clear_has_long_unit() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void EmageMsg::clear_long_unit() {
  long_unit_ = 0;
  clear_has_long_unit();
}
inline double EmageMsg::long_unit() const {
  return long_unit_;
}
inline void EmageMsg::set_long_unit(double value) {
  set_has_long_unit();
  long_unit_ = value;
}

// optional double sw_lat = 6;
inline bool EmageMsg::has_sw_lat() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void EmageMsg::set_has_sw_lat() {
  _has_bits_[0] |= 0x00000020u;
}
inline void EmageMsg::clear_has_sw_lat() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void EmageMsg::clear_sw_lat() {
  sw_lat_ = 0;
  clear_has_sw_lat();
}
inline double EmageMsg::sw_lat() const {
  return sw_lat_;
}
inline void EmageMsg::set_sw_lat(double value) {
  set_has_sw_lat();
  sw_lat_ = value;
}

// optional double sw_long = 7;
inline bool EmageMsg::has_sw_long() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void EmageMsg::set_has_sw_long() {
  _has_bits_[0] |= 0x00000040u;
}
inline void EmageMsg::clear_has_sw_long() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void EmageMsg::clear_sw_long() {
  sw_long_ = 0;
  clear_has_sw_long();
}
inline double EmageMsg::sw_long() const {
  return sw_long_;
}
inline void EmageMsg::set_sw_long(double value) {
  set_has_sw_long();
  sw_long_ = value;
}

// optional double ne_lat = 8;
inline bool EmageMsg::has_ne_lat() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void EmageMsg::set_has_ne_lat() {
  _has_bits_[0] |= 0x00000080u;
}
inline void EmageMsg::clear_has_ne_lat() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void EmageMsg::clear_ne_lat() {
  ne_lat_ = 0;
  clear_has_ne_lat();
}
inline double EmageMsg::ne_lat() const {
  return ne_lat_;
}
inline void EmageMsg::set_ne_lat(double value) {
  set_has_ne_lat();
  ne_lat_ = value;
}

// optional double ne_long = 9;
inline bool EmageMsg::has_ne_long() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void EmageMsg::set_has_ne_long() {
  _has_bits_[0] |= 0x00000100u;
}
inline void EmageMsg::clear_has_ne_long() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void EmageMsg::clear_ne_long() {
  ne_long_ = 0;
  clear_has_ne_long();
}
inline double EmageMsg::ne_long() const {
  return ne_long_;
}
inline void EmageMsg::set_ne_long(double value) {
  set_has_ne_long();
  ne_long_ = value;
}

// optional int32 num_rows = 10;
inline bool EmageMsg::has_num_rows() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void EmageMsg::set_has_num_rows() {
  _has_bits_[0] |= 0x00000200u;
}
inline void EmageMsg::clear_has_num_rows() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void EmageMsg::clear_num_rows() {
  num_rows_ = 0;
  clear_has_num_rows();
}
inline ::google::protobuf::int32 EmageMsg::num_rows() const {
  return num_rows_;
}
inline void EmageMsg::set_num_rows(::google::protobuf::int32 value) {
  set_has_num_rows();
  num_rows_ = value;
}

// optional int32 num_cols = 11;
inline bool EmageMsg::has_num_cols() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void EmageMsg::set_has_num_cols() {
  _has_bits_[0] |= 0x00000400u;
}
inline void EmageMsg::clear_has_num_cols() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void EmageMsg::clear_num_cols() {
  num_cols_ = 0;
  clear_has_num_cols();
}
inline ::google::protobuf::int32 EmageMsg::num_cols() const {
  return num_cols_;
}
inline void EmageMsg::set_num_cols(::google::protobuf::int32 value) {
  set_has_num_cols();
  num_cols_ = value;
}

// repeated double cell = 12;
inline int EmageMsg::cell_size() const {
  return cell_.size();
}
inline void EmageMsg::clear_cell() {
  cell_.Clear();
}
inline double EmageMsg::cell(int index) const {
  return cell_.Get(index);
}
inline void EmageMsg::set_cell(int index, double value) {
  cell_.Set(index, value);
}
inline void EmageMsg::add_cell(double value) {
  cell_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
EmageMsg::cell() const {
  return cell_;
}
inline ::google::protobuf::RepeatedField< double >*
EmageMsg::mutable_cell() {
  return &cell_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_2eproto__INCLUDED
