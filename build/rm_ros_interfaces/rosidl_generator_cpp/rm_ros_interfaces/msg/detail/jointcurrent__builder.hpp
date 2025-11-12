// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Jointcurrent.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTCURRENT__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTCURRENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/jointcurrent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Jointcurrent_joint_current
{
public:
  Init_Jointcurrent_joint_current()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_ros_interfaces::msg::Jointcurrent joint_current(::rm_ros_interfaces::msg::Jointcurrent::_joint_current_type arg)
  {
    msg_.joint_current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointcurrent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Jointcurrent>()
{
  return rm_ros_interfaces::msg::builder::Init_Jointcurrent_joint_current();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTCURRENT__BUILDER_HPP_
