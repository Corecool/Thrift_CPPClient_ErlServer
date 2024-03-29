/**
 * Autogenerated by Thrift Compiler (0.7.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#include "CourseService.h"

namespace thrift { namespace client {

uint32_t CourseService_getCourseInventory_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_getCourseInventory_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("CourseService_getCourseInventory_args");
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_getCourseInventory_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("CourseService_getCourseInventory_pargs");
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_getCourseInventory_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->success.clear();
            uint32_t _size13;
            ::apache::thrift::protocol::TType _etype16;
            iprot->readListBegin(_etype16, _size13);
            this->success.resize(_size13);
            uint32_t _i17;
            for (_i17 = 0; _i17 < _size13; ++_i17)
            {
              xfer += iprot->readString(this->success[_i17]);
            }
            iprot->readListEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_getCourseInventory_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("CourseService_getCourseInventory_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_LIST, 0);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->success.size()));
      std::vector<std::string> ::const_iterator _iter18;
      for (_iter18 = this->success.begin(); _iter18 != this->success.end(); ++_iter18)
      {
        xfer += oprot->writeString((*_iter18));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_getCourseInventory_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            (*(this->success)).clear();
            uint32_t _size19;
            ::apache::thrift::protocol::TType _etype22;
            iprot->readListBegin(_etype22, _size19);
            (*(this->success)).resize(_size19);
            uint32_t _i23;
            for (_i23 = 0; _i23 < _size19; ++_i23)
            {
              xfer += iprot->readString((*(this->success))[_i23]);
            }
            iprot->readListEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_getCourse_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->courseNumber);
          this->__isset.courseNumber = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_getCourse_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("CourseService_getCourse_args");
  xfer += oprot->writeFieldBegin("courseNumber", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->courseNumber);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_getCourse_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("CourseService_getCourse_pargs");
  xfer += oprot->writeFieldBegin("courseNumber", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->courseNumber)));
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_getCourse_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->success.read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->cnf.read(iprot);
          this->__isset.cnf = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_getCourse_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("CourseService_getCourse_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
    xfer += this->success.write(oprot);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.cnf) {
    xfer += oprot->writeFieldBegin("cnf", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->cnf.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_getCourse_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += (*(this->success)).read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->cnf.read(iprot);
          this->__isset.cnf = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_addCourse_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->course.read(iprot);
          this->__isset.course = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_addCourse_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("CourseService_addCourse_args");
  xfer += oprot->writeFieldBegin("course", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->course.write(oprot);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_addCourse_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("CourseService_addCourse_pargs");
  xfer += oprot->writeFieldBegin("course", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += (*(this->course)).write(oprot);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_addCourse_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->uc.read(iprot);
          this->__isset.uc = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_addCourse_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("CourseService_addCourse_result");

  if (this->__isset.uc) {
    xfer += oprot->writeFieldBegin("uc", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->uc.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_addCourse_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->uc.read(iprot);
          this->__isset.uc = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_deleteCourse_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->courseNumber);
          this->__isset.courseNumber = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_deleteCourse_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("CourseService_deleteCourse_args");
  xfer += oprot->writeFieldBegin("courseNumber", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->courseNumber);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_deleteCourse_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("CourseService_deleteCourse_pargs");
  xfer += oprot->writeFieldBegin("courseNumber", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->courseNumber)));
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_deleteCourse_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->cnf.read(iprot);
          this->__isset.cnf = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CourseService_deleteCourse_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("CourseService_deleteCourse_result");

  if (this->__isset.cnf) {
    xfer += oprot->writeFieldBegin("cnf", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->cnf.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t CourseService_deleteCourse_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->cnf.read(iprot);
          this->__isset.cnf = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void CourseServiceClient::getCourseInventory(std::vector<std::string> & _return)
{
  send_getCourseInventory();
  recv_getCourseInventory(_return);
}

void CourseServiceClient::send_getCourseInventory()
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("getCourseInventory", ::apache::thrift::protocol::T_CALL, cseqid);

  CourseService_getCourseInventory_pargs args;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void CourseServiceClient::recv_getCourseInventory(std::vector<std::string> & _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("getCourseInventory") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  CourseService_getCourseInventory_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "getCourseInventory failed: unknown result");
}

void CourseServiceClient::getCourse(Course& _return, const std::string& courseNumber)
{
  send_getCourse(courseNumber);
  recv_getCourse(_return);
}

void CourseServiceClient::send_getCourse(const std::string& courseNumber)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("getCourse", ::apache::thrift::protocol::T_CALL, cseqid);

  CourseService_getCourse_pargs args;
  args.courseNumber = &courseNumber;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void CourseServiceClient::recv_getCourse(Course& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("getCourse") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  CourseService_getCourse_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  if (result.__isset.cnf) {
    throw result.cnf;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "getCourse failed: unknown result");
}

void CourseServiceClient::addCourse(const Course& course)
{
  send_addCourse(course);
  recv_addCourse();
}

void CourseServiceClient::send_addCourse(const Course& course)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("addCourse", ::apache::thrift::protocol::T_CALL, cseqid);

  CourseService_addCourse_pargs args;
  args.course = &course;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void CourseServiceClient::recv_addCourse()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("addCourse") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  CourseService_addCourse_presult result;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.uc) {
    throw result.uc;
  }
  return;
}

void CourseServiceClient::deleteCourse(const std::string& courseNumber)
{
  send_deleteCourse(courseNumber);
  recv_deleteCourse();
}

void CourseServiceClient::send_deleteCourse(const std::string& courseNumber)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("deleteCourse", ::apache::thrift::protocol::T_CALL, cseqid);

  CourseService_deleteCourse_pargs args;
  args.courseNumber = &courseNumber;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void CourseServiceClient::recv_deleteCourse()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("deleteCourse") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  CourseService_deleteCourse_presult result;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.cnf) {
    throw result.cnf;
  }
  return;
}

bool CourseServiceProcessor::process(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot, void* callContext) {

  ::apache::thrift::protocol::TProtocol* iprot = piprot.get();
  ::apache::thrift::protocol::TProtocol* oprot = poprot.get();
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;
  int32_t seqid;

  iprot->readMessageBegin(fname, mtype, seqid);

  if (mtype != ::apache::thrift::protocol::T_CALL && mtype != ::apache::thrift::protocol::T_ONEWAY) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::INVALID_MESSAGE_TYPE);
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return false;
  }

  return process_fn(iprot, oprot, fname, seqid, callContext);
}

bool CourseServiceProcessor::process_fn(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, std::string& fname, int32_t seqid, void* callContext) {
  std::map<std::string, void (CourseServiceProcessor::*)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*)>::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return false;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void CourseServiceProcessor::process_getCourseInventory(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (eventHandler_.get() != NULL) {
    ctx = eventHandler_->getContext("CourseService.getCourseInventory", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(eventHandler_.get(), ctx, "CourseService.getCourseInventory");

  if (eventHandler_.get() != NULL) {
    eventHandler_->preRead(ctx, "CourseService.getCourseInventory");
  }

  CourseService_getCourseInventory_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (eventHandler_.get() != NULL) {
    eventHandler_->postRead(ctx, "CourseService.getCourseInventory", bytes);
  }

  CourseService_getCourseInventory_result result;
  try {
    iface_->getCourseInventory(result.success);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (eventHandler_.get() != NULL) {
      eventHandler_->handlerError(ctx, "CourseService.getCourseInventory");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("getCourseInventory", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (eventHandler_.get() != NULL) {
    eventHandler_->preWrite(ctx, "CourseService.getCourseInventory");
  }

  oprot->writeMessageBegin("getCourseInventory", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (eventHandler_.get() != NULL) {
    eventHandler_->postWrite(ctx, "CourseService.getCourseInventory", bytes);
  }
}

void CourseServiceProcessor::process_getCourse(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (eventHandler_.get() != NULL) {
    ctx = eventHandler_->getContext("CourseService.getCourse", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(eventHandler_.get(), ctx, "CourseService.getCourse");

  if (eventHandler_.get() != NULL) {
    eventHandler_->preRead(ctx, "CourseService.getCourse");
  }

  CourseService_getCourse_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (eventHandler_.get() != NULL) {
    eventHandler_->postRead(ctx, "CourseService.getCourse", bytes);
  }

  CourseService_getCourse_result result;
  try {
    iface_->getCourse(result.success, args.courseNumber);
    result.__isset.success = true;
  } catch (CourseNotFound &cnf) {
    result.cnf = cnf;
    result.__isset.cnf = true;
  } catch (const std::exception& e) {
    if (eventHandler_.get() != NULL) {
      eventHandler_->handlerError(ctx, "CourseService.getCourse");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("getCourse", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (eventHandler_.get() != NULL) {
    eventHandler_->preWrite(ctx, "CourseService.getCourse");
  }

  oprot->writeMessageBegin("getCourse", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (eventHandler_.get() != NULL) {
    eventHandler_->postWrite(ctx, "CourseService.getCourse", bytes);
  }
}

void CourseServiceProcessor::process_addCourse(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (eventHandler_.get() != NULL) {
    ctx = eventHandler_->getContext("CourseService.addCourse", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(eventHandler_.get(), ctx, "CourseService.addCourse");

  if (eventHandler_.get() != NULL) {
    eventHandler_->preRead(ctx, "CourseService.addCourse");
  }

  CourseService_addCourse_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (eventHandler_.get() != NULL) {
    eventHandler_->postRead(ctx, "CourseService.addCourse", bytes);
  }

  CourseService_addCourse_result result;
  try {
    iface_->addCourse(args.course);
  } catch (UnacceptableCourse &uc) {
    result.uc = uc;
    result.__isset.uc = true;
  } catch (const std::exception& e) {
    if (eventHandler_.get() != NULL) {
      eventHandler_->handlerError(ctx, "CourseService.addCourse");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("addCourse", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (eventHandler_.get() != NULL) {
    eventHandler_->preWrite(ctx, "CourseService.addCourse");
  }

  oprot->writeMessageBegin("addCourse", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (eventHandler_.get() != NULL) {
    eventHandler_->postWrite(ctx, "CourseService.addCourse", bytes);
  }
}

void CourseServiceProcessor::process_deleteCourse(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (eventHandler_.get() != NULL) {
    ctx = eventHandler_->getContext("CourseService.deleteCourse", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(eventHandler_.get(), ctx, "CourseService.deleteCourse");

  if (eventHandler_.get() != NULL) {
    eventHandler_->preRead(ctx, "CourseService.deleteCourse");
  }

  CourseService_deleteCourse_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (eventHandler_.get() != NULL) {
    eventHandler_->postRead(ctx, "CourseService.deleteCourse", bytes);
  }

  CourseService_deleteCourse_result result;
  try {
    iface_->deleteCourse(args.courseNumber);
  } catch (CourseNotFound &cnf) {
    result.cnf = cnf;
    result.__isset.cnf = true;
  } catch (const std::exception& e) {
    if (eventHandler_.get() != NULL) {
      eventHandler_->handlerError(ctx, "CourseService.deleteCourse");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("deleteCourse", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (eventHandler_.get() != NULL) {
    eventHandler_->preWrite(ctx, "CourseService.deleteCourse");
  }

  oprot->writeMessageBegin("deleteCourse", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (eventHandler_.get() != NULL) {
    eventHandler_->postWrite(ctx, "CourseService.deleteCourse", bytes);
  }
}

}} // namespace

