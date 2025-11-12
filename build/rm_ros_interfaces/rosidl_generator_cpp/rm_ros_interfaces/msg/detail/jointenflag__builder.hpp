// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Jointenflag.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTENFLAG__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTENFLAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/jointenflag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Jointenflag_joint_en_flag
{
public:
  Init_Jointenflag_joint_en_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_ros_interfaces::msg::Jointenflag joint_en_flag(::rm_ros_interfaces::msg::Jointenflag::_joint_en_flag_type arg)
  {
    msg_.joint_en_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointenflag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Jointenflag>()
{
  return rm_ros_interfaces::msg::builder::Init_Jointenflag_joint_en_flag();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTENFLAG__BUILDER_HPP_
