// Generated by gencpp from file carla_ackermann_control/EgoVehicleControlCurrent.msg
// DO NOT EDIT!


#ifndef CARLA_ACKERMANN_CONTROL_MESSAGE_EGOVEHICLECONTROLCURRENT_H
#define CARLA_ACKERMANN_CONTROL_MESSAGE_EGOVEHICLECONTROLCURRENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace carla_ackermann_control
{
template <class ContainerAllocator>
struct EgoVehicleControlCurrent_
{
  typedef EgoVehicleControlCurrent_<ContainerAllocator> Type;

  EgoVehicleControlCurrent_()
    : time_sec(0.0)
    , speed(0.0)
    , speed_abs(0.0)
    , accel(0.0)  {
    }
  EgoVehicleControlCurrent_(const ContainerAllocator& _alloc)
    : time_sec(0.0)
    , speed(0.0)
    , speed_abs(0.0)
    , accel(0.0)  {
  (void)_alloc;
    }



   typedef float _time_sec_type;
  _time_sec_type time_sec;

   typedef float _speed_type;
  _speed_type speed;

   typedef float _speed_abs_type;
  _speed_abs_type speed_abs;

   typedef float _accel_type;
  _accel_type accel;





  typedef boost::shared_ptr< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> const> ConstPtr;

}; // struct EgoVehicleControlCurrent_

typedef ::carla_ackermann_control::EgoVehicleControlCurrent_<std::allocator<void> > EgoVehicleControlCurrent;

typedef boost::shared_ptr< ::carla_ackermann_control::EgoVehicleControlCurrent > EgoVehicleControlCurrentPtr;
typedef boost::shared_ptr< ::carla_ackermann_control::EgoVehicleControlCurrent const> EgoVehicleControlCurrentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace carla_ackermann_control

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'carla_msgs': ['/home/lukas/carla/carla-autoware/catkin_ws/src/ros-bridge/carla_msgs/msg'], 'carla_ackermann_control': ['/home/lukas/carla/carla-autoware/catkin_ws/src/ros-bridge/carla_ackermann_control/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f4947f35d6b5f0274303e776e887cd4b";
  }

  static const char* value(const ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf4947f35d6b5f027ULL;
  static const uint64_t static_value2 = 0x4303e776e887cd4bULL;
};

template<class ContainerAllocator>
struct DataType< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "carla_ackermann_control/EgoVehicleControlCurrent";
  }

  static const char* value(const ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n\
# Copyright (c) 2018-2019 Intel Corporation.\n\
#\n\
# This work is licensed under the terms of the MIT license.\n\
# For a copy, see <https://opensource.org/licenses/MIT>.\n\
#\n\
# This represents the current time/speed/accel values of the vehicle used by the controller\n\
\n\
float32 time_sec\n\
float32 speed\n\
float32 speed_abs\n\
float32 accel\n\
";
  }

  static const char* value(const ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time_sec);
      stream.next(m.speed);
      stream.next(m.speed_abs);
      stream.next(m.accel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EgoVehicleControlCurrent_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::carla_ackermann_control::EgoVehicleControlCurrent_<ContainerAllocator>& v)
  {
    s << indent << "time_sec: ";
    Printer<float>::stream(s, indent + "  ", v.time_sec);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "speed_abs: ";
    Printer<float>::stream(s, indent + "  ", v.speed_abs);
    s << indent << "accel: ";
    Printer<float>::stream(s, indent + "  ", v.accel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARLA_ACKERMANN_CONTROL_MESSAGE_EGOVEHICLECONTROLCURRENT_H
