// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Armcurrentstatus.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/armcurrentstatus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Armcurrentstatus_arm_current_status
{
public:
  Init_Armcurrentstatus_arm_current_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_ros_interfaces::msg::Armcurrentstatus arm_current_status(::rm_ros_interfaces::msg::Armcurrentstatus::_arm_current_status_type arg)
  {
    msg_.arm_current_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armcurrentstatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Armcurrentstatus>()
{
  return rm_ros_interfaces::msg::builder::Init_Armcurrentstatus_arm_current_status();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__BUILDER_HPP_
