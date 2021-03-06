/* Auto-generated by genmsg_cpp for file /home/ece/ros_ws/src/foo_msgs/msg/Cortex.msg */
#ifndef FOO_MSGS_MESSAGE_CORTEX_H
#define FOO_MSGS_MESSAGE_CORTEX_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "foo_msgs/States.h"

namespace foo_msgs
{
template <class ContainerAllocator>
struct Cortex_ {
  typedef Cortex_<ContainerAllocator> Type;

  Cortex_()
  : header()
  , Obj()
  {
  }

  Cortex_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , Obj(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector< ::foo_msgs::States_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::foo_msgs::States_<ContainerAllocator> >::other >  _Obj_type;
  std::vector< ::foo_msgs::States_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::foo_msgs::States_<ContainerAllocator> >::other >  Obj;


  typedef boost::shared_ptr< ::foo_msgs::Cortex_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::foo_msgs::Cortex_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Cortex
typedef  ::foo_msgs::Cortex_<std::allocator<void> > Cortex;

typedef boost::shared_ptr< ::foo_msgs::Cortex> CortexPtr;
typedef boost::shared_ptr< ::foo_msgs::Cortex const> CortexConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::foo_msgs::Cortex_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::foo_msgs::Cortex_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace foo_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::foo_msgs::Cortex_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::foo_msgs::Cortex_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::foo_msgs::Cortex_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ace87fb5cb38f4ed182a1466180c255e";
  }

  static const char* value(const  ::foo_msgs::Cortex_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xace87fb5cb38f4edULL;
  static const uint64_t static_value2 = 0x182a1466180c255eULL;
};

template<class ContainerAllocator>
struct DataType< ::foo_msgs::Cortex_<ContainerAllocator> > {
  static const char* value() 
  {
    return "foo_msgs/Cortex";
  }

  static const char* value(const  ::foo_msgs::Cortex_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::foo_msgs::Cortex_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
States[] Obj\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: foo_msgs/States\n\
string name\n\
\n\
bool visible\n\
\n\
float64 x\n\
\n\
float64 y\n\
\n\
float64 z\n\
\n\
float64 u\n\
\n\
float64 v\n\
\n\
float64 w\n\
\n\
float64 phi\n\
\n\
float64 theta\n\
\n\
float64 psi\n\
\n\
float64 p\n\
\n\
float64 q\n\
\n\
float64 r\n\
\n\
";
  }

  static const char* value(const  ::foo_msgs::Cortex_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::foo_msgs::Cortex_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::foo_msgs::Cortex_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::foo_msgs::Cortex_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.Obj);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Cortex_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::foo_msgs::Cortex_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::foo_msgs::Cortex_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "Obj[]" << std::endl;
    for (size_t i = 0; i < v.Obj.size(); ++i)
    {
      s << indent << "  Obj[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::foo_msgs::States_<ContainerAllocator> >::stream(s, indent + "    ", v.Obj[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // FOO_MSGS_MESSAGE_CORTEX_H

