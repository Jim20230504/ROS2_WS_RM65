// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Modbusrtuwriteparams.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUWRITEPARAMS__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUWRITEPARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/modbusrtuwriteparams__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Modbusrtuwriteparams_data
{
public:
  explicit Init_Modbusrtuwriteparams_data(::rm_ros_interfaces::msg::Modbusrtuwriteparams & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Modbusrtuwriteparams data(::rm_ros_interfaces::msg::Modbusrtuwriteparams::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusrtuwriteparams msg_;
};

class Init_Modbusrtuwriteparams_num
{
public:
  explicit Init_Modbusrtuwriteparams_num(::rm_ros_interfaces::msg::Modbusrtuwriteparams & msg)
  : msg_(msg)
  {}
  Init_Modbusrtuwriteparams_data num(::rm_ros_interfaces::msg::Modbusrtuwriteparams::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_Modbusrtuwriteparams_data(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusrtuwriteparams msg_;
};

class Init_Modbusrtuwriteparams_type
{
public:
  explicit Init_Modbusrtuwriteparams_type(::rm_ros_interfaces::msg::Modbusrtuwriteparams & msg)
  : msg_(msg)
  {}
  Init_Modbusrtuwriteparams_num type(::rm_ros_interfaces::msg::Modbusrtuwriteparams::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Modbusrtuwriteparams_num(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusrtuwriteparams msg_;
};

class Init_Modbusrtuwriteparams_device
{
public:
  explicit Init_Modbusrtuwriteparams_device(::rm_ros_interfaces::msg::Modbusrtuwriteparams & msg)
  : msg_(msg)
  {}
  Init_Modbusrtuwriteparams_type device(::rm_ros_interfaces::msg::Modbusrtuwriteparams::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_Modbusrtuwriteparams_type(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusrtuwriteparams msg_;
};

class Init_Modbusrtuwriteparams_address
{
public:
  Init_Modbusrtuwriteparams_address()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modbusrtuwriteparams_device address(::rm_ros_interfaces::msg::Modbusrtuwriteparams::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_Modbusrtuwriteparams_device(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusrtuwriteparams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Modbusrtuwriteparams>()
{
  return rm_ros_interfaces::msg::builder::Init_Modbusrtuwriteparams_address();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUWRITEPARAMS__BUILDER_HPP_
