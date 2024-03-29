/**
 * Autogenerated by Thrift Compiler (0.7.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef course_TYPES_H
#define course_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>



namespace thrift { namespace client {

struct PhoneType {
  enum type {
    HOME = 0,
    WORK = 1,
    MOBILE = 2,
    OTHER = 3
  };
};

extern const std::map<int, const char*> _PhoneType_VALUES_TO_NAMES;

typedef struct _Phone__isset {
  _Phone__isset() : id(false), number(false), type(false) {}
  bool id;
  bool number;
  bool type;
} _Phone__isset;

class Phone {
 public:

  static const char* ascii_fingerprint; // = "1A63C45DA609C3DBB55D47C16D567AE7";
  static const uint8_t binary_fingerprint[16]; // = {0x1A,0x63,0xC4,0x5D,0xA6,0x09,0xC3,0xDB,0xB5,0x5D,0x47,0xC1,0x6D,0x56,0x7A,0xE7};

  Phone() : id(0), number("") {
  }

  virtual ~Phone() throw() {}

  int32_t id;
  std::string number;
  PhoneType::type type;

  _Phone__isset __isset;

  void __set_id(const int32_t val) {
    id = val;
  }

  void __set_number(const std::string& val) {
    number = val;
  }

  void __set_type(const PhoneType::type val) {
    type = val;
  }

  bool operator == (const Phone & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(number == rhs.number))
      return false;
    if (!(type == rhs.type))
      return false;
    return true;
  }
  bool operator != (const Phone &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Phone & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Person__isset {
  _Person__isset() : id(false), firstName(false), lastName(false), email(false), phones(false) {}
  bool id;
  bool firstName;
  bool lastName;
  bool email;
  bool phones;
} _Person__isset;

class Person {
 public:

  static const char* ascii_fingerprint; // = "B9E228EC3156911E391C159A1F36B931";
  static const uint8_t binary_fingerprint[16]; // = {0xB9,0xE2,0x28,0xEC,0x31,0x56,0x91,0x1E,0x39,0x1C,0x15,0x9A,0x1F,0x36,0xB9,0x31};

  Person() : id(0), firstName(""), lastName(""), email("") {
  }

  virtual ~Person() throw() {}

  int32_t id;
  std::string firstName;
  std::string lastName;
  std::string email;
  std::vector<Phone>  phones;

  _Person__isset __isset;

  void __set_id(const int32_t val) {
    id = val;
  }

  void __set_firstName(const std::string& val) {
    firstName = val;
  }

  void __set_lastName(const std::string& val) {
    lastName = val;
  }

  void __set_email(const std::string& val) {
    email = val;
  }

  void __set_phones(const std::vector<Phone> & val) {
    phones = val;
  }

  bool operator == (const Person & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(firstName == rhs.firstName))
      return false;
    if (!(lastName == rhs.lastName))
      return false;
    if (!(email == rhs.email))
      return false;
    if (!(phones == rhs.phones))
      return false;
    return true;
  }
  bool operator != (const Person &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Person & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Course__isset {
  _Course__isset() : id(false), number(false), name(false), instructor(false), roomNumber(false), students(false) {}
  bool id;
  bool number;
  bool name;
  bool instructor;
  bool roomNumber;
  bool students;
} _Course__isset;

class Course {
 public:

  static const char* ascii_fingerprint; // = "4769BD651DCDE7BAD878B1DFE81C2D14";
  static const uint8_t binary_fingerprint[16]; // = {0x47,0x69,0xBD,0x65,0x1D,0xCD,0xE7,0xBA,0xD8,0x78,0xB1,0xDF,0xE8,0x1C,0x2D,0x14};

  Course() : id(0), number(""), name(""), roomNumber("") {
  }

  virtual ~Course() throw() {}

  int32_t id;
  std::string number;
  std::string name;
  Person instructor;
  std::string roomNumber;
  std::vector<Person>  students;

  _Course__isset __isset;

  void __set_id(const int32_t val) {
    id = val;
  }

  void __set_number(const std::string& val) {
    number = val;
  }

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_instructor(const Person& val) {
    instructor = val;
  }

  void __set_roomNumber(const std::string& val) {
    roomNumber = val;
  }

  void __set_students(const std::vector<Person> & val) {
    students = val;
  }

  bool operator == (const Course & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(number == rhs.number))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(instructor == rhs.instructor))
      return false;
    if (!(roomNumber == rhs.roomNumber))
      return false;
    if (!(students == rhs.students))
      return false;
    return true;
  }
  bool operator != (const Course &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Course & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CourseNotFound__isset {
  _CourseNotFound__isset() : message(false) {}
  bool message;
} _CourseNotFound__isset;

class CourseNotFound : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  CourseNotFound() : message("") {
  }

  virtual ~CourseNotFound() throw() {}

  std::string message;

  _CourseNotFound__isset __isset;

  void __set_message(const std::string& val) {
    message = val;
  }

  bool operator == (const CourseNotFound & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const CourseNotFound &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CourseNotFound & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UnacceptableCourse__isset {
  _UnacceptableCourse__isset() : message(false) {}
  bool message;
} _UnacceptableCourse__isset;

class UnacceptableCourse : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  UnacceptableCourse() : message("") {
  }

  virtual ~UnacceptableCourse() throw() {}

  std::string message;

  _UnacceptableCourse__isset __isset;

  void __set_message(const std::string& val) {
    message = val;
  }

  bool operator == (const UnacceptableCourse & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const UnacceptableCourse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UnacceptableCourse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

}} // namespace

#endif
