// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Armstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ARMSTATE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ARMSTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/armstate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Armstate_dof
{
public:
  explicit Init_Armstate_dof(::rm_ros_interfaces::msg::Armstate & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Armstate dof(::rm_ros_interfaces::msg::Armstate::_dof_type arg)
  {
    msg_.dof = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armstate msg_;
};

class Init_Armstate_err_len
{
public:
  explicit Init_Armstate_err_len(::rm_ros_interfaces::msg::Armstate & msg)
  : msg_(msg)
  {}
  Init_Armstate_dof err_len(::rm_ros_interfaces::msg::Armstate::_err_len_type arg)
  {
    msg_.err_len = std::move(arg);
    return Init_Armstate_dof(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armstate msg_;
};

class Init_Armstate_err
{
public:
  explicit Init_Armstate_err(::rm_ros_interfaces::msg::Armstate & msg)
  : msg_(msg)
  {}
  Init_Armstate_err_len err(::rm_ros_interfaces::msg::Armstate::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_Armstate_err_len(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armstate msg_;
};

class Init_Armstate_pose
{
public:
  explicit Init_Armstate_pose(::rm_ros_interfaces::msg::Armstate & msg)
  : msg_(msg)
  {}
  Init_Armstate_err pose(::rm_ros_interfaces::msg::Armstate::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Armstate_err(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armstate msg_;
};

class Init_Armstate_joint
{
public:
  Init_Armstate_joint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Armstate_pose joint(::rm_ros_interfaces::msg::Armstate::_joint_type arg)
  {
    msg_.joint = std::move(arg);
    return Init_Armstate_pose(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armstate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Armstate>()
{
  return rm_ros_interfaces::msg::builder::Init_Armstate_joint();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ARMSTATE__BUILDER_HPP_
