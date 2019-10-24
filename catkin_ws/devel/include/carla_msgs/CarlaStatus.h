// Generated by gencpp from file carla_msgs/CarlaStatus.msg
// DO NOT EDIT!


#ifndef CARLA_MSGS_MESSAGE_CARLASTATUS_H
#define CARLA_MSGS_MESSAGE_CARLASTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace carla_msgs
{
template <class ContainerAllocator>
struct CarlaStatus_
{
  typedef CarlaStatus_<ContainerAllocator> Type;

  CarlaStatus_()
    : frame(0)
    , fixed_delta_seconds(0.0)
    , synchronous_mode(false)
    , synchronous_mode_running(false)  {
    }
  CarlaStatus_(const ContainerAllocator& _alloc)
    : frame(0)
    , fixed_delta_seconds(0.0)
    , synchronous_mode(false)
    , synchronous_mode_running(false)  {
  (void)_alloc;
    }



   typedef uint64_t _frame_type;
  _frame_type frame;

   typedef float _fixed_delta_seconds_type;
  _fixed_delta_seconds_type fixed_delta_seconds;

   typedef uint8_t _synchronous_mode_type;
  _synchronous_mode_type synchronous_mode;

   typedef uint8_t _synchronous_mode_running_type;
  _synchronous_mode_running_type synchronous_mode_running;





  typedef boost::shared_ptr< ::carla_msgs::CarlaStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::carla_msgs::CarlaStatus_<ContainerAllocator> const> ConstPtr;

}; // struct CarlaStatus_

typedef ::carla_msgs::CarlaStatus_<std::allocator<void> > CarlaStatus;

typedef boost::shared_ptr< ::carla_msgs::CarlaStatus > CarlaStatusPtr;
typedef boost::shared_ptr< ::carla_msgs::CarlaStatus const> CarlaStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::carla_msgs::CarlaStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::carla_msgs::CarlaStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace carla_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'carla_msgs': ['/home/lukas/carla/carla-autoware/catkin_ws/src/ros-bridge/carla_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::carla_msgs::CarlaStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::carla_msgs::CarlaStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_msgs::CarlaStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_msgs::CarlaStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_msgs::CarlaStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_msgs::CarlaStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::carla_msgs::CarlaStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0a6e668a0d517dead8f5c68762fc1dab";
  }

  static const char* value(const ::carla_msgs::CarlaStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0a6e668a0d517deaULL;
  static const uint64_t static_value2 = 0xd8f5c68762fc1dabULL;
};

template<class ContainerAllocator>
struct DataType< ::carla_msgs::CarlaStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "carla_msgs/CarlaStatus";
  }

  static const char* value(const ::carla_msgs::CarlaStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::carla_msgs::CarlaStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n\
# Copyright (c) 2019 Intel Corporation.\n\
#\n\
# This work is licensed under the terms of the MIT license.\n\
# For a copy, see <https://opensource.org/licenses/MIT>.\n\
#\n\
\n\
uint64 frame                  # frame number\n\
\n\
float32 fixed_delta_seconds   # duration of one frame\n\
bool synchronous_mode         # carla is in synchronous mode\n\
bool synchronous_mode_running # true: running, false: paused\n\
";
  }

  static const char* value(const ::carla_msgs::CarlaStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::carla_msgs::CarlaStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame);
      stream.next(m.fixed_delta_seconds);
      stream.next(m.synchronous_mode);
      stream.next(m.synchronous_mode_running);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarlaStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::carla_msgs::CarlaStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::carla_msgs::CarlaStatus_<ContainerAllocator>& v)
  {
    s << indent << "frame: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.frame);
    s << indent << "fixed_delta_seconds: ";
    Printer<float>::stream(s, indent + "  ", v.fixed_delta_seconds);
    s << indent << "synchronous_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.synchronous_mode);
    s << indent << "synchronous_mode_running: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.synchronous_mode_running);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARLA_MSGS_MESSAGE_CARLASTATUS_H
