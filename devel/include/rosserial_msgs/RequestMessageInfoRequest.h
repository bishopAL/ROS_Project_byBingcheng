// Generated by gencpp from file rosserial_msgs/RequestMessageInfoRequest.msg
// DO NOT EDIT!


#ifndef ROSSERIAL_MSGS_MESSAGE_REQUESTMESSAGEINFOREQUEST_H
#define ROSSERIAL_MSGS_MESSAGE_REQUESTMESSAGEINFOREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosserial_msgs
{
template <class ContainerAllocator>
struct RequestMessageInfoRequest_
{
  typedef RequestMessageInfoRequest_<ContainerAllocator> Type;

  RequestMessageInfoRequest_()
    : type()  {
    }
  RequestMessageInfoRequest_(const ContainerAllocator& _alloc)
    : type(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;





  typedef boost::shared_ptr< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RequestMessageInfoRequest_

typedef ::rosserial_msgs::RequestMessageInfoRequest_<std::allocator<void> > RequestMessageInfoRequest;

typedef boost::shared_ptr< ::rosserial_msgs::RequestMessageInfoRequest > RequestMessageInfoRequestPtr;
typedef boost::shared_ptr< ::rosserial_msgs::RequestMessageInfoRequest const> RequestMessageInfoRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosserial_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosserial_msgs': ['/home/bingbing/catkin_ws/src/rosserial/rosserial_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc67331de85cf97091b7d45e5c64ab75";
  }

  static const char* value(const ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc67331de85cf970ULL;
  static const uint64_t static_value2 = 0x91b7d45e5c64ab75ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosserial_msgs/RequestMessageInfoRequest";
  }

  static const char* value(const ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string type\n\
";
  }

  static const char* value(const ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestMessageInfoRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosserial_msgs::RequestMessageInfoRequest_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSSERIAL_MSGS_MESSAGE_REQUESTMESSAGEINFOREQUEST_H
