/**
 * Autogenerated by Thrift Compiler (0.7.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef CourseService_H
#define CourseService_H

#include <TProcessor.h>
#include "course_types.h"

namespace thrift { namespace client {

class CourseServiceIf {
 public:
  virtual ~CourseServiceIf() {}
  virtual void getCourseInventory(std::vector<std::string> & _return) = 0;
  virtual void getCourse(Course& _return, const std::string& courseNumber) = 0;
  virtual void addCourse(const Course& course) = 0;
  virtual void deleteCourse(const std::string& courseNumber) = 0;
};

class CourseServiceNull : virtual public CourseServiceIf {
 public:
  virtual ~CourseServiceNull() {}
  void getCourseInventory(std::vector<std::string> & /* _return */) {
    return;
  }
  void getCourse(Course& /* _return */, const std::string& /* courseNumber */) {
    return;
  }
  void addCourse(const Course& /* course */) {
    return;
  }
  void deleteCourse(const std::string& /* courseNumber */) {
    return;
  }
};


class CourseService_getCourseInventory_args {
 public:

  CourseService_getCourseInventory_args() {
  }

  virtual ~CourseService_getCourseInventory_args() throw() {}


  bool operator == (const CourseService_getCourseInventory_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const CourseService_getCourseInventory_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CourseService_getCourseInventory_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CourseService_getCourseInventory_pargs {
 public:


  virtual ~CourseService_getCourseInventory_pargs() throw() {}


  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CourseService_getCourseInventory_result__isset {
  _CourseService_getCourseInventory_result__isset() : success(false) {}
  bool success;
} _CourseService_getCourseInventory_result__isset;

class CourseService_getCourseInventory_result {
 public:

  CourseService_getCourseInventory_result() {
  }

  virtual ~CourseService_getCourseInventory_result() throw() {}

  std::vector<std::string>  success;

  _CourseService_getCourseInventory_result__isset __isset;

  void __set_success(const std::vector<std::string> & val) {
    success = val;
  }

  bool operator == (const CourseService_getCourseInventory_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CourseService_getCourseInventory_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CourseService_getCourseInventory_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CourseService_getCourseInventory_presult__isset {
  _CourseService_getCourseInventory_presult__isset() : success(false) {}
  bool success;
} _CourseService_getCourseInventory_presult__isset;

class CourseService_getCourseInventory_presult {
 public:


  virtual ~CourseService_getCourseInventory_presult() throw() {}

  std::vector<std::string> * success;

  _CourseService_getCourseInventory_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CourseService_getCourse_args__isset {
  _CourseService_getCourse_args__isset() : courseNumber(false) {}
  bool courseNumber;
} _CourseService_getCourse_args__isset;

class CourseService_getCourse_args {
 public:

  CourseService_getCourse_args() : courseNumber("") {
  }

  virtual ~CourseService_getCourse_args() throw() {}

  std::string courseNumber;

  _CourseService_getCourse_args__isset __isset;

  void __set_courseNumber(const std::string& val) {
    courseNumber = val;
  }

  bool operator == (const CourseService_getCourse_args & rhs) const
  {
    if (!(courseNumber == rhs.courseNumber))
      return false;
    return true;
  }
  bool operator != (const CourseService_getCourse_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CourseService_getCourse_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CourseService_getCourse_pargs {
 public:


  virtual ~CourseService_getCourse_pargs() throw() {}

  const std::string* courseNumber;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CourseService_getCourse_result__isset {
  _CourseService_getCourse_result__isset() : success(false), cnf(false) {}
  bool success;
  bool cnf;
} _CourseService_getCourse_result__isset;

class CourseService_getCourse_result {
 public:

  CourseService_getCourse_result() {
  }

  virtual ~CourseService_getCourse_result() throw() {}

  Course success;
  CourseNotFound cnf;

  _CourseService_getCourse_result__isset __isset;

  void __set_success(const Course& val) {
    success = val;
  }

  void __set_cnf(const CourseNotFound& val) {
    cnf = val;
  }

  bool operator == (const CourseService_getCourse_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(cnf == rhs.cnf))
      return false;
    return true;
  }
  bool operator != (const CourseService_getCourse_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CourseService_getCourse_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CourseService_getCourse_presult__isset {
  _CourseService_getCourse_presult__isset() : success(false), cnf(false) {}
  bool success;
  bool cnf;
} _CourseService_getCourse_presult__isset;

class CourseService_getCourse_presult {
 public:


  virtual ~CourseService_getCourse_presult() throw() {}

  Course* success;
  CourseNotFound cnf;

  _CourseService_getCourse_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CourseService_addCourse_args__isset {
  _CourseService_addCourse_args__isset() : course(false) {}
  bool course;
} _CourseService_addCourse_args__isset;

class CourseService_addCourse_args {
 public:

  CourseService_addCourse_args() {
  }

  virtual ~CourseService_addCourse_args() throw() {}

  Course course;

  _CourseService_addCourse_args__isset __isset;

  void __set_course(const Course& val) {
    course = val;
  }

  bool operator == (const CourseService_addCourse_args & rhs) const
  {
    if (!(course == rhs.course))
      return false;
    return true;
  }
  bool operator != (const CourseService_addCourse_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CourseService_addCourse_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CourseService_addCourse_pargs {
 public:


  virtual ~CourseService_addCourse_pargs() throw() {}

  const Course* course;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CourseService_addCourse_result__isset {
  _CourseService_addCourse_result__isset() : uc(false) {}
  bool uc;
} _CourseService_addCourse_result__isset;

class CourseService_addCourse_result {
 public:

  CourseService_addCourse_result() {
  }

  virtual ~CourseService_addCourse_result() throw() {}

  UnacceptableCourse uc;

  _CourseService_addCourse_result__isset __isset;

  void __set_uc(const UnacceptableCourse& val) {
    uc = val;
  }

  bool operator == (const CourseService_addCourse_result & rhs) const
  {
    if (!(uc == rhs.uc))
      return false;
    return true;
  }
  bool operator != (const CourseService_addCourse_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CourseService_addCourse_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CourseService_addCourse_presult__isset {
  _CourseService_addCourse_presult__isset() : uc(false) {}
  bool uc;
} _CourseService_addCourse_presult__isset;

class CourseService_addCourse_presult {
 public:


  virtual ~CourseService_addCourse_presult() throw() {}

  UnacceptableCourse uc;

  _CourseService_addCourse_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CourseService_deleteCourse_args__isset {
  _CourseService_deleteCourse_args__isset() : courseNumber(false) {}
  bool courseNumber;
} _CourseService_deleteCourse_args__isset;

class CourseService_deleteCourse_args {
 public:

  CourseService_deleteCourse_args() : courseNumber("") {
  }

  virtual ~CourseService_deleteCourse_args() throw() {}

  std::string courseNumber;

  _CourseService_deleteCourse_args__isset __isset;

  void __set_courseNumber(const std::string& val) {
    courseNumber = val;
  }

  bool operator == (const CourseService_deleteCourse_args & rhs) const
  {
    if (!(courseNumber == rhs.courseNumber))
      return false;
    return true;
  }
  bool operator != (const CourseService_deleteCourse_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CourseService_deleteCourse_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CourseService_deleteCourse_pargs {
 public:


  virtual ~CourseService_deleteCourse_pargs() throw() {}

  const std::string* courseNumber;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CourseService_deleteCourse_result__isset {
  _CourseService_deleteCourse_result__isset() : cnf(false) {}
  bool cnf;
} _CourseService_deleteCourse_result__isset;

class CourseService_deleteCourse_result {
 public:

  CourseService_deleteCourse_result() {
  }

  virtual ~CourseService_deleteCourse_result() throw() {}

  CourseNotFound cnf;

  _CourseService_deleteCourse_result__isset __isset;

  void __set_cnf(const CourseNotFound& val) {
    cnf = val;
  }

  bool operator == (const CourseService_deleteCourse_result & rhs) const
  {
    if (!(cnf == rhs.cnf))
      return false;
    return true;
  }
  bool operator != (const CourseService_deleteCourse_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CourseService_deleteCourse_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CourseService_deleteCourse_presult__isset {
  _CourseService_deleteCourse_presult__isset() : cnf(false) {}
  bool cnf;
} _CourseService_deleteCourse_presult__isset;

class CourseService_deleteCourse_presult {
 public:


  virtual ~CourseService_deleteCourse_presult() throw() {}

  CourseNotFound cnf;

  _CourseService_deleteCourse_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class CourseServiceClient : virtual public CourseServiceIf {
 public:
  CourseServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  CourseServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getCourseInventory(std::vector<std::string> & _return);
  void send_getCourseInventory();
  void recv_getCourseInventory(std::vector<std::string> & _return);
  void getCourse(Course& _return, const std::string& courseNumber);
  void send_getCourse(const std::string& courseNumber);
  void recv_getCourse(Course& _return);
  void addCourse(const Course& course);
  void send_addCourse(const Course& course);
  void recv_addCourse();
  void deleteCourse(const std::string& courseNumber);
  void send_deleteCourse(const std::string& courseNumber);
  void recv_deleteCourse();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class CourseServiceProcessor : virtual public ::apache::thrift::TProcessor {
 protected:
  boost::shared_ptr<CourseServiceIf> iface_;
  virtual bool process_fn(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, std::string& fname, int32_t seqid, void* callContext);
 private:
  std::map<std::string, void (CourseServiceProcessor::*)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*)> processMap_;
  void process_getCourseInventory(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getCourse(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_addCourse(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_deleteCourse(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  CourseServiceProcessor(boost::shared_ptr<CourseServiceIf> iface) :
    iface_(iface) {
    processMap_["getCourseInventory"] = &CourseServiceProcessor::process_getCourseInventory;
    processMap_["getCourse"] = &CourseServiceProcessor::process_getCourse;
    processMap_["addCourse"] = &CourseServiceProcessor::process_addCourse;
    processMap_["deleteCourse"] = &CourseServiceProcessor::process_deleteCourse;
  }

  virtual bool process(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot, void* callContext);
  virtual ~CourseServiceProcessor() {}
};

class CourseServiceMultiface : virtual public CourseServiceIf {
 public:
  CourseServiceMultiface(std::vector<boost::shared_ptr<CourseServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~CourseServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<CourseServiceIf> > ifaces_;
  CourseServiceMultiface() {}
  void add(boost::shared_ptr<CourseServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void getCourseInventory(std::vector<std::string> & _return) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getCourseInventory(_return);
        return;
      } else {
        ifaces_[i]->getCourseInventory(_return);
      }
    }
  }

  void getCourse(Course& _return, const std::string& courseNumber) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getCourse(_return, courseNumber);
        return;
      } else {
        ifaces_[i]->getCourse(_return, courseNumber);
      }
    }
  }

  void addCourse(const Course& course) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      ifaces_[i]->addCourse(course);
    }
  }

  void deleteCourse(const std::string& courseNumber) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      ifaces_[i]->deleteCourse(courseNumber);
    }
  }

};

}} // namespace

#endif
