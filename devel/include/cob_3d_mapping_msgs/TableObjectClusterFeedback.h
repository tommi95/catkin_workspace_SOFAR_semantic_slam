// Generated by gencpp from file cob_3d_mapping_msgs/TableObjectClusterFeedback.msg
// DO NOT EDIT!


#ifndef COB_3D_MAPPING_MSGS_MESSAGE_TABLEOBJECTCLUSTERFEEDBACK_H
#define COB_3D_MAPPING_MSGS_MESSAGE_TABLEOBJECTCLUSTERFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace cob_3d_mapping_msgs
{
template <class ContainerAllocator>
struct TableObjectClusterFeedback_
{
  typedef TableObjectClusterFeedback_<ContainerAllocator> Type;

  TableObjectClusterFeedback_()
    : currentStep()  {
    }
  TableObjectClusterFeedback_(const ContainerAllocator& _alloc)
    : currentStep(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _currentStep_type;
  _currentStep_type currentStep;





  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct TableObjectClusterFeedback_

typedef ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<std::allocator<void> > TableObjectClusterFeedback;

typedef boost::shared_ptr< ::cob_3d_mapping_msgs::TableObjectClusterFeedback > TableObjectClusterFeedbackPtr;
typedef boost::shared_ptr< ::cob_3d_mapping_msgs::TableObjectClusterFeedback const> TableObjectClusterFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_3d_mapping_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'cob_object_detection_msgs': ['/home/filippo/catkin_workspace_SOFAR_semantic_slam/devel/share/cob_object_detection_msgs/msg', '/home/filippo/catkin_workspace_SOFAR_semantic_slam/src/module3/cob_perception_common/cob_object_detection_msgs/msg'], 'cob_3d_mapping_msgs': ['/home/filippo/catkin_workspace_SOFAR_semantic_slam/devel/share/cob_3d_mapping_msgs/msg', '/home/filippo/catkin_workspace_SOFAR_semantic_slam/src/module3/cob_perception_common/cob_3d_mapping_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7c51960fbfdc31dbfce9bf929242f080";
  }

  static const char* value(const ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7c51960fbfdc31dbULL;
  static const uint64_t static_value2 = 0xfce9bf929242f080ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_3d_mapping_msgs/TableObjectClusterFeedback";
  }

  static const char* value(const ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
std_msgs/String currentStep\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.currentStep);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TableObjectClusterFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_3d_mapping_msgs::TableObjectClusterFeedback_<ContainerAllocator>& v)
  {
    s << indent << "currentStep: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.currentStep);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_3D_MAPPING_MSGS_MESSAGE_TABLEOBJECTCLUSTERFEEDBACK_H
