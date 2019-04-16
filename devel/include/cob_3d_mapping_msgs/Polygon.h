// Generated by gencpp from file cob_3d_mapping_msgs/Polygon.msg
// DO NOT EDIT!


#ifndef COB_3D_MAPPING_MSGS_MESSAGE_POLYGON_H
#define COB_3D_MAPPING_MSGS_MESSAGE_POLYGON_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cob_3d_mapping_msgs/Point2D.h>

namespace cob_3d_mapping_msgs
{
template <class ContainerAllocator>
struct Polygon_
{
  typedef Polygon_<ContainerAllocator> Type;

  Polygon_()
    : points()  {
    }
  Polygon_(const ContainerAllocator& _alloc)
    : points(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::cob_3d_mapping_msgs::Point2D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cob_3d_mapping_msgs::Point2D_<ContainerAllocator> >::other >  _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> const> ConstPtr;

}; // struct Polygon_

typedef ::cob_3d_mapping_msgs::Polygon_<std::allocator<void> > Polygon;

typedef boost::shared_ptr< ::cob_3d_mapping_msgs::Polygon > PolygonPtr;
typedef boost::shared_ptr< ::cob_3d_mapping_msgs::Polygon const> PolygonConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb7dcdfd4dd77d10f2403c82af407d79";
  }

  static const char* value(const ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb7dcdfd4dd77d10ULL;
  static const uint64_t static_value2 = 0xf2403c82af407d79ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_3d_mapping_msgs/Polygon";
  }

  static const char* value(const ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#points describing polygon\n\
Point2D[] points\n\
\n\
================================================================================\n\
MSG: cob_3d_mapping_msgs/Point2D\n\
#coordinate on surface\n\
float32 x\n\
float32 y\n\
\n\
#texture cooridante\n\
float32 tex_x\n\
float32 tex_y\n\
\n\
float32 var\n\
";
  }

  static const char* value(const ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Polygon_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_3d_mapping_msgs::Polygon_<ContainerAllocator>& v)
  {
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cob_3d_mapping_msgs::Point2D_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_3D_MAPPING_MSGS_MESSAGE_POLYGON_H
