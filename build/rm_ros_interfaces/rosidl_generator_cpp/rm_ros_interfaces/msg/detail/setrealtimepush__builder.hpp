// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Setrealtimepush.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__SETREALTIMEPUSH__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__SETREALTIMEPUSH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/setrealtimepush__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Setrealtimepush_plus_state_enable
{
public:
  explicit Init_Setrealtimepush_plus_state_enable(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Setrealtimepush plus_state_enable(::rm_ros_interfaces::msg::Setrealtimepush::_plus_state_enable_type arg)
  {
    msg_.plus_state_enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_plus_base_enable
{
public:
  explicit Init_Setrealtimepush_plus_base_enable(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  Init_Setrealtimepush_plus_state_enable plus_base_enable(::rm_ros_interfaces::msg::Setrealtimepush::_plus_base_enable_type arg)
  {
    msg_.plus_base_enable = std::move(arg);
    return Init_Setrealtimepush_plus_state_enable(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_lift_state_enable
{
public:
  explicit Init_Setrealtimepush_lift_state_enable(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  Init_Setrealtimepush_plus_base_enable lift_state_enable(::rm_ros_interfaces::msg::Setrealtimepush::_lift_state_enable_type arg)
  {
    msg_.lift_state_enable = std::move(arg);
    return Init_Setrealtimepush_plus_base_enable(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_joint_speed_enable
{
public:
  explicit Init_Setrealtimepush_joint_speed_enable(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  Init_Setrealtimepush_lift_state_enable joint_speed_enable(::rm_ros_interfaces::msg::Setrealtimepush::_joint_speed_enable_type arg)
  {
    msg_.joint_speed_enable = std::move(arg);
    return Init_Setrealtimepush_lift_state_enable(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_hand_enable
{
public:
  explicit Init_Setrealtimepush_hand_enable(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  Init_Setrealtimepush_joint_speed_enable hand_enable(::rm_ros_interfaces::msg::Setrealtimepush::_hand_enable_type arg)
  {
    msg_.hand_enable = std::move(arg);
    return Init_Setrealtimepush_joint_speed_enable(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_expand_state_enable
{
public:
  explicit Init_Setrealtimepush_expand_state_enable(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  Init_Setrealtimepush_hand_enable expand_state_enable(::rm_ros_interfaces::msg::Setrealtimepush::_expand_state_enable_type arg)
  {
    msg_.expand_state_enable = std::move(arg);
    return Init_Setrealtimepush_hand_enable(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_arm_current_status_enable
{
public:
  explicit Init_Setrealtimepush_arm_current_status_enable(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  Init_Setrealtimepush_expand_state_enable arm_current_status_enable(::rm_ros_interfaces::msg::Setrealtimepush::_arm_current_status_enable_type arg)
  {
    msg_.arm_current_status_enable = std::move(arg);
    return Init_Setrealtimepush_expand_state_enable(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_aloha_state_enable
{
public:
  explicit Init_Setrealtimepush_aloha_state_enable(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  Init_Setrealtimepush_arm_current_status_enable aloha_state_enable(::rm_ros_interfaces::msg::Setrealtimepush::_aloha_state_enable_type arg)
  {
    msg_.aloha_state_enable = std::move(arg);
    return Init_Setrealtimepush_arm_current_status_enable(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_ip
{
public:
  explicit Init_Setrealtimepush_ip(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  Init_Setrealtimepush_aloha_state_enable ip(::rm_ros_interfaces::msg::Setrealtimepush::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_Setrealtimepush_aloha_state_enable(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_force_coordinate
{
public:
  explicit Init_Setrealtimepush_force_coordinate(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  Init_Setrealtimepush_ip force_coordinate(::rm_ros_interfaces::msg::Setrealtimepush::_force_coordinate_type arg)
  {
    msg_.force_coordinate = std::move(arg);
    return Init_Setrealtimepush_ip(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_port
{
public:
  explicit Init_Setrealtimepush_port(::rm_ros_interfaces::msg::Setrealtimepush & msg)
  : msg_(msg)
  {}
  Init_Setrealtimepush_force_coordinate port(::rm_ros_interfaces::msg::Setrealtimepush::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_Setrealtimepush_force_coordinate(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

class Init_Setrealtimepush_cycle
{
public:
  Init_Setrealtimepush_cycle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Setrealtimepush_port cycle(::rm_ros_interfaces::msg::Setrealtimepush::_cycle_type arg)
  {
    msg_.cycle = std::move(arg);
    return Init_Setrealtimepush_port(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Setrealtimepush msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Setrealtimepush>()
{
  return rm_ros_interfaces::msg::builder::Init_Setrealtimepush_cycle();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__SETREALTIMEPUSH__BUILDER_HPP_
