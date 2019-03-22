// Generated by gencpp from file semantical_slam/CreateSemMsgRequest.msg
// DO NOT EDIT!


#ifndef SEMANTICAL_SLAM_MESSAGE_CREATESEMMSGREQUEST_H
#define SEMANTICAL_SLAM_MESSAGE_CREATESEMMSGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace semantical_slam
{
template <class ContainerAllocator>
struct CreateSemMsgRequest_
{
  typedef CreateSemMsgRequest_<ContainerAllocator> Type;

  CreateSemMsgRequest_()
    : actual_place()
    , actual_pose()  {
    }
  CreateSemMsgRequest_(const ContainerAllocator& _alloc)
    : actual_place(_alloc)
    , actual_pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _actual_place_type;
  _actual_place_type actual_place;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _actual_pose_type;
  _actual_pose_type actual_pose;





  typedef boost::shared_ptr< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CreateSemMsgRequest_

typedef ::semantical_slam::CreateSemMsgRequest_<std::allocator<void> > CreateSemMsgRequest;

typedef boost::shared_ptr< ::semantical_slam::CreateSemMsgRequest > CreateSemMsgRequestPtr;
typedef boost::shared_ptr< ::semantical_slam::CreateSemMsgRequest const> CreateSemMsgRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "55feb702256ffa772e72dc3fe8b20fa1";
  }

  static const char* value(const ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x55feb702256ffa77ULL;
  static const uint64_t static_value2 = 0x2e72dc3fe8b20fa1ULL;
};

template<class ContainerAllocator>
struct DataType< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "semantical_slam/CreateSemMsgRequest";
  }

  static const char* value(const ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string actual_place\n\
geometry_msgs/Pose actual_pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.actual_place);
      stream.next(m.actual_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CreateSemMsgRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::semantical_slam::CreateSemMsgRequest_<ContainerAllocator>& v)
  {
    s << indent << "actual_place: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.actual_place);
    s << indent << "actual_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.actual_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEMANTICAL_SLAM_MESSAGE_CREATESEMMSGREQUEST_H
