// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Jointposcustom.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTPOSCUSTOM__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTPOSCUSTOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/jointposcustom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Jointposcustom_radio
{
public:
  explicit Init_Jointposcustom_radio(::rm_ros_interfaces::msg::Jointposcustom & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Jointposcustom radio(::rm_ros_interfaces::msg::Jointposcustom::_radio_type arg)
  {
    msg_.radio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointposcustom msg_;
};

class Init_Jointposcustom_trajectory_mode
{
public:
  explicit Init_Jointposcustom_trajectory_mode(::rm_ros_interfaces::msg::Jointposcustom & msg)
  : msg_(msg)
  {}
  Init_Jointposcustom_radio trajectory_mode(::rm_ros_interfaces::msg::Jointposcustom::_trajectory_mode_type arg)
  {
    msg_.trajectory_mode = std::move(arg);
    return Init_Jointposcustom_radio(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointposcustom msg_;
};

class Init_Jointposcustom_dof
{
public:
  explicit Init_Jointposcustom_dof(::rm_ros_interfaces::msg::Jointposcustom & msg)
  : msg_(msg)
  {}
  Init_Jointposcustom_trajectory_mode dof(::rm_ros_interfaces::msg::Jointposcustom::_dof_type arg)
  {
    msg_.dof = std::move(arg);
    return Init_Jointposcustom_trajectory_mode(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointposcustom msg_;
};

class Init_Jointposcustom_expand
{
public:
  explicit Init_Jointposcustom_expand(::rm_ros_interfaces::msg::Jointposcustom & msg)
  : msg_(msg)
  {}
  Init_Jointposcustom_dof expand(::rm_ros_interfaces::msg::Jointposcustom::_expand_type arg)
  {
    msg_.expand = std::move(arg);
    return Init_Jointposcustom_dof(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointposcustom msg_;
};

class Init_Jointposcustom_follow
{
public:
  explicit Init_Jointposcustom_follow(::rm_ros_interfaces::msg::Jointposcustom & msg)
  : msg_(msg)
  {}
  Init_Jointposcustom_expand follow(::rm_ros_interfaces::msg::Jointposcustom::_follow_type arg)
  {
    msg_.follow = std::move(arg);
    return Init_Jointposcustom_expand(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointposcustom msg_;
};

class Init_Jointposcustom_joint
{
public:
  Init_Jointposcustom_joint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Jointposcustom_follow joint(::rm_ros_interfaces::msg::Jointposcustom::_joint_type arg)
  {
    msg_.joint = std::move(arg);
    return Init_Jointposcustom_follow(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointposcustom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Jointposcustom>()
{
  return rm_ros_interfaces::msg::builder::Init_Jointposcustom_joint();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTPOSCUSTOM__BUILDER_HPP_
