// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Modbustcpmasterupdata.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERUPDATA__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERUPDATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/modbustcpmasterupdata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Modbustcpmasterupdata_port
{
public:
  explicit Init_Modbustcpmasterupdata_port(::rm_ros_interfaces::msg::Modbustcpmasterupdata & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Modbustcpmasterupdata port(::rm_ros_interfaces::msg::Modbustcpmasterupdata::_port_type arg)
  {
    msg_.port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterupdata msg_;
};

class Init_Modbustcpmasterupdata_ip
{
public:
  explicit Init_Modbustcpmasterupdata_ip(::rm_ros_interfaces::msg::Modbustcpmasterupdata & msg)
  : msg_(msg)
  {}
  Init_Modbustcpmasterupdata_port ip(::rm_ros_interfaces::msg::Modbustcpmasterupdata::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_Modbustcpmasterupdata_port(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterupdata msg_;
};

class Init_Modbustcpmasterupdata_new_master_name
{
public:
  explicit Init_Modbustcpmasterupdata_new_master_name(::rm_ros_interfaces::msg::Modbustcpmasterupdata & msg)
  : msg_(msg)
  {}
  Init_Modbustcpmasterupdata_ip new_master_name(::rm_ros_interfaces::msg::Modbustcpmasterupdata::_new_master_name_type arg)
  {
    msg_.new_master_name = std::move(arg);
    return Init_Modbustcpmasterupdata_ip(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterupdata msg_;
};

class Init_Modbustcpmasterupdata_master_name
{
public:
  Init_Modbustcpmasterupdata_master_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modbustcpmasterupdata_new_master_name master_name(::rm_ros_interfaces::msg::Modbustcpmasterupdata::_master_name_type arg)
  {
    msg_.master_name = std::move(arg);
    return Init_Modbustcpmasterupdata_new_master_name(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterupdata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Modbustcpmasterupdata>()
{
  return rm_ros_interfaces::msg::builder::Init_Modbustcpmasterupdata_master_name();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERUPDATA__BUILDER_HPP_
