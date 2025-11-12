// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Jointversion.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTVERSION__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTVERSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/jointversion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Jointversion_state
{
public:
  explicit Init_Jointversion_state(::rm_ros_interfaces::msg::Jointversion & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Jointversion state(::rm_ros_interfaces::msg::Jointversion::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointversion msg_;
};

class Init_Jointversion_joint_version
{
public:
  Init_Jointversion_joint_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Jointversion_state joint_version(::rm_ros_interfaces::msg::Jointversion::_joint_version_type arg)
  {
    msg_.joint_version = std::move(arg);
    return Init_Jointversion_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointversion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Jointversion>()
{
  return rm_ros_interfaces::msg::builder::Init_Jointversion_joint_version();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTVERSION__BUILDER_HPP_
