// Generated by gencpp from file jackal_msgs/Drive.msg
// DO NOT EDIT!


#ifndef JACKAL_MSGS_MESSAGE_DRIVE_H
#define JACKAL_MSGS_MESSAGE_DRIVE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jackal_msgs
{
template <class ContainerAllocator>
struct Drive_
{
  typedef Drive_<ContainerAllocator> Type;

  Drive_()
    : mode(0)
    , drivers()  {
      drivers.assign(0.0);
  }
  Drive_(const ContainerAllocator& _alloc)
    : mode(0)
    , drivers()  {
  (void)_alloc;
      drivers.assign(0.0);
  }



   typedef int8_t _mode_type;
  _mode_type mode;

   typedef boost::array<float, 2>  _drivers_type;
  _drivers_type drivers;


    enum { MODE_VELOCITY = 0 };
     enum { MODE_PWM = 1 };
     enum { MODE_EFFORT = 2 };
     enum { MODE_NONE = -1 };
     enum { LEFT = 0 };
     enum { RIGHT = 1 };
 

  typedef boost::shared_ptr< ::jackal_msgs::Drive_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jackal_msgs::Drive_<ContainerAllocator> const> ConstPtr;

}; // struct Drive_

typedef ::jackal_msgs::Drive_<std::allocator<void> > Drive;

typedef boost::shared_ptr< ::jackal_msgs::Drive > DrivePtr;
typedef boost::shared_ptr< ::jackal_msgs::Drive const> DriveConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jackal_msgs::Drive_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jackal_msgs::Drive_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jackal_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'jackal_msgs': ['/home/skysar/Documents/spring18/EE5531/lab3/royalpotato/jackal_navigation/src/jackal/jackal_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jackal_msgs::Drive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jackal_msgs::Drive_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jackal_msgs::Drive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jackal_msgs::Drive_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jackal_msgs::Drive_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jackal_msgs::Drive_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jackal_msgs::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "601cf097cd47c174590c366c6ddd5fb3";
  }

  static const char* value(const ::jackal_msgs::Drive_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x601cf097cd47c174ULL;
  static const uint64_t static_value2 = 0x590c366c6ddd5fb3ULL;
};

template<class ContainerAllocator>
struct DataType< ::jackal_msgs::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jackal_msgs/Drive";
  }

  static const char* value(const ::jackal_msgs::Drive_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jackal_msgs::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message represents a low-level motor command to Jackal.\n\
\n\
# Command units dependent on the value of this field\n\
int8 MODE_VELOCITY=0   # velocity command (rad/s of wheels)\n\
int8 MODE_PWM=1        # proportion of full voltage command [-1.0..1.0]\n\
int8 MODE_EFFORT=2     # torque command (Nm)\n\
int8 MODE_NONE=-1      # no control, commanded values ignored.\n\
int8 mode\n\
\n\
# Units as above, +ve direction propels chassis forward.\n\
int8 LEFT=0\n\
int8 RIGHT=1\n\
float32[2] drivers\n\
";
  }

  static const char* value(const ::jackal_msgs::Drive_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jackal_msgs::Drive_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
      stream.next(m.drivers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Drive_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jackal_msgs::Drive_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jackal_msgs::Drive_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "drivers[]" << std::endl;
    for (size_t i = 0; i < v.drivers.size(); ++i)
    {
      s << indent << "  drivers[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.drivers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // JACKAL_MSGS_MESSAGE_DRIVE_H
