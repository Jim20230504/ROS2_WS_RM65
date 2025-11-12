// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Jointspeed.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTSPEED__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTSPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/jointspeed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Jointspeed_joint_speed
{
public:
  Init_Jointspeed_joint_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_ros_interfaces::msg::Jointspeed joint_speed(::rm_ros_interfaces::msg::Jointspeed::_joint_speed_type arg)
  {
    msg_.joint_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointspeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Jointspeed>()
{
  return rm_ros_interfaces::msg::builder::Init_Jointspeed_joint_speed();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTSPEED__BUILDER_HPP_
