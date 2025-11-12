// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Jointposeeuler.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTPOSEEULER__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTPOSEEULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/jointposeeuler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Jointposeeuler_position
{
public:
  explicit Init_Jointposeeuler_position(::rm_ros_interfaces::msg::Jointposeeuler & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Jointposeeuler position(::rm_ros_interfaces::msg::Jointposeeuler::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointposeeuler msg_;
};

class Init_Jointposeeuler_euler
{
public:
  Init_Jointposeeuler_euler()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Jointposeeuler_position euler(::rm_ros_interfaces::msg::Jointposeeuler::_euler_type arg)
  {
    msg_.euler = std::move(arg);
    return Init_Jointposeeuler_position(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointposeeuler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Jointposeeuler>()
{
  return rm_ros_interfaces::msg::builder::Init_Jointposeeuler_euler();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTPOSEEULER__BUILDER_HPP_
