// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Modbusrtureadparams.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUREADPARAMS__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUREADPARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/modbusrtureadparams__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Modbusrtureadparams_num
{
public:
  explicit Init_Modbusrtureadparams_num(::rm_ros_interfaces::msg::Modbusrtureadparams & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Modbusrtureadparams num(::rm_ros_interfaces::msg::Modbusrtureadparams::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusrtureadparams msg_;
};

class Init_Modbusrtureadparams_type
{
public:
  explicit Init_Modbusrtureadparams_type(::rm_ros_interfaces::msg::Modbusrtureadparams & msg)
  : msg_(msg)
  {}
  Init_Modbusrtureadparams_num type(::rm_ros_interfaces::msg::Modbusrtureadparams::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Modbusrtureadparams_num(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusrtureadparams msg_;
};

class Init_Modbusrtureadparams_device
{
public:
  explicit Init_Modbusrtureadparams_device(::rm_ros_interfaces::msg::Modbusrtureadparams & msg)
  : msg_(msg)
  {}
  Init_Modbusrtureadparams_type device(::rm_ros_interfaces::msg::Modbusrtureadparams::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_Modbusrtureadparams_type(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusrtureadparams msg_;
};

class Init_Modbusrtureadparams_address
{
public:
  Init_Modbusrtureadparams_address()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modbusrtureadparams_device address(::rm_ros_interfaces::msg::Modbusrtureadparams::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_Modbusrtureadparams_device(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusrtureadparams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Modbusrtureadparams>()
{
  return rm_ros_interfaces::msg::builder::Init_Modbusrtureadparams_address();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUREADPARAMS__BUILDER_HPP_
