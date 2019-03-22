// Generated by gencpp from file semantical_slam/CreateSemMsgResponse.msg
// DO NOT EDIT!


#ifndef SEMANTICAL_SLAM_MESSAGE_CREATESEMMSGRESPONSE_H
#define SEMANTICAL_SLAM_MESSAGE_CREATESEMMSGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <semantical_slam/SemanticalPoint.h>

namespace semantical_slam
{
template <class ContainerAllocator>
struct CreateSemMsgResponse_
{
  typedef CreateSemMsgResponse_<ContainerAllocator> Type;

  CreateSemMsgResponse_()
    : final_message()  {
    }
  CreateSemMsgResponse_(const ContainerAllocator& _alloc)
    : final_message(_alloc)  {
  (void)_alloc;
    }



   typedef  ::semantical_slam::SemanticalPoint_<ContainerAllocator>  _final_message_type;
  _final_message_type final_message;





  typedef boost::shared_ptr< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CreateSemMsgResponse_

typedef ::semantical_slam::CreateSemMsgResponse_<std::allocator<void> > CreateSemMsgResponse;

typedef boost::shared_ptr< ::semantical_slam::CreateSemMsgResponse > CreateSemMsgResponsePtr;
typedef boost::shared_ptr< ::semantical_slam::CreateSemMsgResponse const> CreateSemMsgResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace semantical_slam

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'semantical_slam': ['/home/sofar/catkin_workspace_SOFAR_semantic_slam/src/semantical_slam/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc88fcb706a77bf09f4deef4601303c4";
  }

  static const char* value(const ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc88fcb706a77bf0ULL;
  static const uint64_t static_value2 = 0x9f4deef4601303c4ULL;
};

template<class ContainerAllocator>
struct DataType< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "semantical_slam/CreateSemMsgResponse";
  }

  static const char* value(const ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SemanticalPoint final_message\n\
\n\
\n\
\n\
================================================================================\n\
MSG: semantical_slam/SemanticalPoint\n\
float32 x\n\
float32 y\n\
string  place_name\n\
";
  }

  static const char* value(const ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.final_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CreateSemMsgResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::semantical_slam::CreateSemMsgResponse_<ContainerAllocator>& v)
  {
    s << indent << "final_message: ";
    s << std::endl;
    Printer< ::semantical_slam::SemanticalPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.final_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEMANTICAL_SLAM_MESSAGE_CREATESEMMSGRESPONSE_H
