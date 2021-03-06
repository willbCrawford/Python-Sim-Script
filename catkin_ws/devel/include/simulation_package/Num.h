// Generated by gencpp from file simulation_package/Num.msg
// DO NOT EDIT!


#ifndef SIMULATION_PACKAGE_MESSAGE_NUM_H
#define SIMULATION_PACKAGE_MESSAGE_NUM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace simulation_package
{
template <class ContainerAllocator>
struct Num_
{
  typedef Num_<ContainerAllocator> Type;

  Num_()
    : header()
    , id(0)
    , x(0.0)
    , y(0.0)  {
    }
  Num_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int64_t _id_type;
  _id_type id;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;




  typedef boost::shared_ptr< ::simulation_package::Num_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simulation_package::Num_<ContainerAllocator> const> ConstPtr;

}; // struct Num_

typedef ::simulation_package::Num_<std::allocator<void> > Num;

typedef boost::shared_ptr< ::simulation_package::Num > NumPtr;
typedef boost::shared_ptr< ::simulation_package::Num const> NumConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simulation_package::Num_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simulation_package::Num_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simulation_package

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'simulation_package': ['/home/redbird/catkin_ws/src/simulation_package/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simulation_package::Num_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simulation_package::Num_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation_package::Num_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation_package::Num_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation_package::Num_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation_package::Num_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simulation_package::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dafb2ae0057a2cf09695fbc81a03fe55";
  }

  static const char* value(const ::simulation_package::Num_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdafb2ae0057a2cf0ULL;
  static const uint64_t static_value2 = 0x9695fbc81a03fe55ULL;
};

template<class ContainerAllocator>
struct DataType< ::simulation_package::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simulation_package/Num";
  }

  static const char* value(const ::simulation_package::Num_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simulation_package::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int64 id 	#ROOmba's id\n\
float64 x	#Roomba's x\n\
float64 y   #Roomba's y\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::simulation_package::Num_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simulation_package::Num_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Num_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simulation_package::Num_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simulation_package::Num_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<int64_t>::stream(s, indent + "  ", v.id);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMULATION_PACKAGE_MESSAGE_NUM_H
