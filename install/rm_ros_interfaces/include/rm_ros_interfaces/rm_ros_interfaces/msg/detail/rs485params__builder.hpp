// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/RS485params.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RS485PARAMS__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__RS485PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/rs485params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_RS485params_state
{
public:
  explicit Init_RS485params_state(::rm_ros_interfaces::msg::RS485params & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::RS485params state(::rm_ros_interfaces::msg::RS485params::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::RS485params msg_;
};

class Init_RS485params_baudrate
{
public:
  explicit Init_RS485params_baudrate(::rm_ros_interfaces::msg::RS485params & msg)
  : msg_(msg)
  {}
  Init_RS485params_state baudrate(::rm_ros_interfaces::msg::RS485params::_baudrate_type arg)
  {
    msg_.baudrate = std::move(arg);
    return Init_RS485params_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::RS485params msg_;
};

class Init_RS485params_mode
{
public:
  Init_RS485params_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RS485params_baudrate mode(::rm_ros_interfaces::msg::RS485params::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RS485params_baudrate(msg_);
  }

private:
  ::rm_ros_interfaces::msg::RS485params msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::RS485params>()
{
  return rm_ros_interfaces::msg::builder::Init_RS485params_mode();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RS485PARAMS__BUILDER_HPP_
