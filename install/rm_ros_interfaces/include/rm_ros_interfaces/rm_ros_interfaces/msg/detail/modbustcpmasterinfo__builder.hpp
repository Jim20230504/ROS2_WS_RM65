// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Modbustcpmasterinfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERINFO__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERINFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/modbustcpmasterinfo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Modbustcpmasterinfo_state
{
public:
  explicit Init_Modbustcpmasterinfo_state(::rm_ros_interfaces::msg::Modbustcpmasterinfo & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Modbustcpmasterinfo state(::rm_ros_interfaces::msg::Modbustcpmasterinfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterinfo msg_;
};

class Init_Modbustcpmasterinfo_port
{
public:
  explicit Init_Modbustcpmasterinfo_port(::rm_ros_interfaces::msg::Modbustcpmasterinfo & msg)
  : msg_(msg)
  {}
  Init_Modbustcpmasterinfo_state port(::rm_ros_interfaces::msg::Modbustcpmasterinfo::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_Modbustcpmasterinfo_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterinfo msg_;
};

class Init_Modbustcpmasterinfo_ip
{
public:
  explicit Init_Modbustcpmasterinfo_ip(::rm_ros_interfaces::msg::Modbustcpmasterinfo & msg)
  : msg_(msg)
  {}
  Init_Modbustcpmasterinfo_port ip(::rm_ros_interfaces::msg::Modbustcpmasterinfo::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_Modbustcpmasterinfo_port(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterinfo msg_;
};

class Init_Modbustcpmasterinfo_master_name
{
public:
  Init_Modbustcpmasterinfo_master_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modbustcpmasterinfo_ip master_name(::rm_ros_interfaces::msg::Modbustcpmasterinfo::_master_name_type arg)
  {
    msg_.master_name = std::move(arg);
    return Init_Modbustcpmasterinfo_ip(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterinfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Modbustcpmasterinfo>()
{
  return rm_ros_interfaces::msg::builder::Init_Modbustcpmasterinfo_master_name();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERINFO__BUILDER_HPP_
