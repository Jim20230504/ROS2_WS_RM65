// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Carteposcustom.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__CARTEPOSCUSTOM__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__CARTEPOSCUSTOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/carteposcustom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Carteposcustom_radio
{
public:
  explicit Init_Carteposcustom_radio(::rm_ros_interfaces::msg::Carteposcustom & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Carteposcustom radio(::rm_ros_interfaces::msg::Carteposcustom::_radio_type arg)
  {
    msg_.radio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Carteposcustom msg_;
};

class Init_Carteposcustom_trajectory_mode
{
public:
  explicit Init_Carteposcustom_trajectory_mode(::rm_ros_interfaces::msg::Carteposcustom & msg)
  : msg_(msg)
  {}
  Init_Carteposcustom_radio trajectory_mode(::rm_ros_interfaces::msg::Carteposcustom::_trajectory_mode_type arg)
  {
    msg_.trajectory_mode = std::move(arg);
    return Init_Carteposcustom_radio(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Carteposcustom msg_;
};

class Init_Carteposcustom_follow
{
public:
  explicit Init_Carteposcustom_follow(::rm_ros_interfaces::msg::Carteposcustom & msg)
  : msg_(msg)
  {}
  Init_Carteposcustom_trajectory_mode follow(::rm_ros_interfaces::msg::Carteposcustom::_follow_type arg)
  {
    msg_.follow = std::move(arg);
    return Init_Carteposcustom_trajectory_mode(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Carteposcustom msg_;
};

class Init_Carteposcustom_pose
{
public:
  Init_Carteposcustom_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carteposcustom_follow pose(::rm_ros_interfaces::msg::Carteposcustom::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Carteposcustom_follow(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Carteposcustom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Carteposcustom>()
{
  return rm_ros_interfaces::msg::builder::Init_Carteposcustom_pose();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__CARTEPOSCUSTOM__BUILDER_HPP_
