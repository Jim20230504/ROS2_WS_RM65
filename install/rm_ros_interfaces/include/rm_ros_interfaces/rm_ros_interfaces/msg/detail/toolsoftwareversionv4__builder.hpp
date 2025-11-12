// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Toolsoftwareversionv4.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/toolsoftwareversionv4__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Toolsoftwareversionv4_state
{
public:
  explicit Init_Toolsoftwareversionv4_state(::rm_ros_interfaces::msg::Toolsoftwareversionv4 & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Toolsoftwareversionv4 state(::rm_ros_interfaces::msg::Toolsoftwareversionv4::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Toolsoftwareversionv4 msg_;
};

class Init_Toolsoftwareversionv4_tool_version
{
public:
  Init_Toolsoftwareversionv4_tool_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Toolsoftwareversionv4_state tool_version(::rm_ros_interfaces::msg::Toolsoftwareversionv4::_tool_version_type arg)
  {
    msg_.tool_version = std::move(arg);
    return Init_Toolsoftwareversionv4_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Toolsoftwareversionv4 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Toolsoftwareversionv4>()
{
  return rm_ros_interfaces::msg::builder::Init_Toolsoftwareversionv4_tool_version();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__BUILDER_HPP_
