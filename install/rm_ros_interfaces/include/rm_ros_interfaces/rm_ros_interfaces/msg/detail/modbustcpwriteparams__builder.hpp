// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Modbustcpwriteparams.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPWRITEPARAMS__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPWRITEPARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/modbustcpwriteparams__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Modbustcpwriteparams_data
{
public:
  explicit Init_Modbustcpwriteparams_data(::rm_ros_interfaces::msg::Modbustcpwriteparams & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Modbustcpwriteparams data(::rm_ros_interfaces::msg::Modbustcpwriteparams::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpwriteparams msg_;
};

class Init_Modbustcpwriteparams_num
{
public:
  explicit Init_Modbustcpwriteparams_num(::rm_ros_interfaces::msg::Modbustcpwriteparams & msg)
  : msg_(msg)
  {}
  Init_Modbustcpwriteparams_data num(::rm_ros_interfaces::msg::Modbustcpwriteparams::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_Modbustcpwriteparams_data(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpwriteparams msg_;
};

class Init_Modbustcpwriteparams_port
{
public:
  explicit Init_Modbustcpwriteparams_port(::rm_ros_interfaces::msg::Modbustcpwriteparams & msg)
  : msg_(msg)
  {}
  Init_Modbustcpwriteparams_num port(::rm_ros_interfaces::msg::Modbustcpwriteparams::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_Modbustcpwriteparams_num(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpwriteparams msg_;
};

class Init_Modbustcpwriteparams_ip
{
public:
  explicit Init_Modbustcpwriteparams_ip(::rm_ros_interfaces::msg::Modbustcpwriteparams & msg)
  : msg_(msg)
  {}
  Init_Modbustcpwriteparams_port ip(::rm_ros_interfaces::msg::Modbustcpwriteparams::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_Modbustcpwriteparams_port(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpwriteparams msg_;
};

class Init_Modbustcpwriteparams_master_name
{
public:
  explicit Init_Modbustcpwriteparams_master_name(::rm_ros_interfaces::msg::Modbustcpwriteparams & msg)
  : msg_(msg)
  {}
  Init_Modbustcpwriteparams_ip master_name(::rm_ros_interfaces::msg::Modbustcpwriteparams::_master_name_type arg)
  {
    msg_.master_name = std::move(arg);
    return Init_Modbustcpwriteparams_ip(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpwriteparams msg_;
};

class Init_Modbustcpwriteparams_address
{
public:
  Init_Modbustcpwriteparams_address()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modbustcpwriteparams_master_name address(::rm_ros_interfaces::msg::Modbustcpwriteparams::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_Modbustcpwriteparams_master_name(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpwriteparams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Modbustcpwriteparams>()
{
  return rm_ros_interfaces::msg::builder::Init_Modbustcpwriteparams_address();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPWRITEPARAMS__BUILDER_HPP_
