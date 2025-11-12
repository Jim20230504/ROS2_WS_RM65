// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Modbustcpreadparams.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPREADPARAMS__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPREADPARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/modbustcpreadparams__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Modbustcpreadparams_num
{
public:
  explicit Init_Modbustcpreadparams_num(::rm_ros_interfaces::msg::Modbustcpreadparams & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Modbustcpreadparams num(::rm_ros_interfaces::msg::Modbustcpreadparams::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpreadparams msg_;
};

class Init_Modbustcpreadparams_port
{
public:
  explicit Init_Modbustcpreadparams_port(::rm_ros_interfaces::msg::Modbustcpreadparams & msg)
  : msg_(msg)
  {}
  Init_Modbustcpreadparams_num port(::rm_ros_interfaces::msg::Modbustcpreadparams::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_Modbustcpreadparams_num(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpreadparams msg_;
};

class Init_Modbustcpreadparams_ip
{
public:
  explicit Init_Modbustcpreadparams_ip(::rm_ros_interfaces::msg::Modbustcpreadparams & msg)
  : msg_(msg)
  {}
  Init_Modbustcpreadparams_port ip(::rm_ros_interfaces::msg::Modbustcpreadparams::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_Modbustcpreadparams_port(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpreadparams msg_;
};

class Init_Modbustcpreadparams_master_name
{
public:
  explicit Init_Modbustcpreadparams_master_name(::rm_ros_interfaces::msg::Modbustcpreadparams & msg)
  : msg_(msg)
  {}
  Init_Modbustcpreadparams_ip master_name(::rm_ros_interfaces::msg::Modbustcpreadparams::_master_name_type arg)
  {
    msg_.master_name = std::move(arg);
    return Init_Modbustcpreadparams_ip(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpreadparams msg_;
};

class Init_Modbustcpreadparams_address
{
public:
  Init_Modbustcpreadparams_address()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modbustcpreadparams_master_name address(::rm_ros_interfaces::msg::Modbustcpreadparams::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_Modbustcpreadparams_master_name(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpreadparams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Modbustcpreadparams>()
{
  return rm_ros_interfaces::msg::builder::Init_Modbustcpreadparams_address();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPREADPARAMS__BUILDER_HPP_
