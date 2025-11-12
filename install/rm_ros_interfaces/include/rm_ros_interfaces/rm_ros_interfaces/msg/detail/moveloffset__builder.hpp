// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Moveloffset.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MOVELOFFSET__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MOVELOFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/moveloffset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Moveloffset_block
{
public:
  explicit Init_Moveloffset_block(::rm_ros_interfaces::msg::Moveloffset & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Moveloffset block(::rm_ros_interfaces::msg::Moveloffset::_block_type arg)
  {
    msg_.block = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Moveloffset msg_;
};

class Init_Moveloffset_frame_type
{
public:
  explicit Init_Moveloffset_frame_type(::rm_ros_interfaces::msg::Moveloffset & msg)
  : msg_(msg)
  {}
  Init_Moveloffset_block frame_type(::rm_ros_interfaces::msg::Moveloffset::_frame_type_type arg)
  {
    msg_.frame_type = std::move(arg);
    return Init_Moveloffset_block(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Moveloffset msg_;
};

class Init_Moveloffset_trajectory_connect
{
public:
  explicit Init_Moveloffset_trajectory_connect(::rm_ros_interfaces::msg::Moveloffset & msg)
  : msg_(msg)
  {}
  Init_Moveloffset_frame_type trajectory_connect(::rm_ros_interfaces::msg::Moveloffset::_trajectory_connect_type arg)
  {
    msg_.trajectory_connect = std::move(arg);
    return Init_Moveloffset_frame_type(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Moveloffset msg_;
};

class Init_Moveloffset_r
{
public:
  explicit Init_Moveloffset_r(::rm_ros_interfaces::msg::Moveloffset & msg)
  : msg_(msg)
  {}
  Init_Moveloffset_trajectory_connect r(::rm_ros_interfaces::msg::Moveloffset::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Moveloffset_trajectory_connect(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Moveloffset msg_;
};

class Init_Moveloffset_speed
{
public:
  explicit Init_Moveloffset_speed(::rm_ros_interfaces::msg::Moveloffset & msg)
  : msg_(msg)
  {}
  Init_Moveloffset_r speed(::rm_ros_interfaces::msg::Moveloffset::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Moveloffset_r(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Moveloffset msg_;
};

class Init_Moveloffset_pose
{
public:
  Init_Moveloffset_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Moveloffset_speed pose(::rm_ros_interfaces::msg::Moveloffset::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Moveloffset_speed(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Moveloffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Moveloffset>()
{
  return rm_ros_interfaces::msg::builder::Init_Moveloffset_pose();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MOVELOFFSET__BUILDER_HPP_
