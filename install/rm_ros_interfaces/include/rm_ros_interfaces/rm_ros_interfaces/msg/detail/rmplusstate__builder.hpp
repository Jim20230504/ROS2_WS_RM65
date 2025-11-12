// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Rmplusstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/rmplusstate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Rmplusstate_force
{
public:
  explicit Init_Rmplusstate_force(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Rmplusstate force(::rm_ros_interfaces::msg::Rmplusstate::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_touch_data
{
public:
  explicit Init_Rmplusstate_touch_data(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_force touch_data(::rm_ros_interfaces::msg::Rmplusstate::_touch_data_type arg)
  {
    msg_.touch_data = std::move(arg);
    return Init_Rmplusstate_force(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_tma
{
public:
  explicit Init_Rmplusstate_tma(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_touch_data tma(::rm_ros_interfaces::msg::Rmplusstate::_tma_type arg)
  {
    msg_.tma = std::move(arg);
    return Init_Rmplusstate_touch_data(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_tsa
{
public:
  explicit Init_Rmplusstate_tsa(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_tma tsa(::rm_ros_interfaces::msg::Rmplusstate::_tsa_type arg)
  {
    msg_.tsa = std::move(arg);
    return Init_Rmplusstate_tma(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_tangential_force_dir
{
public:
  explicit Init_Rmplusstate_tangential_force_dir(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_tsa tangential_force_dir(::rm_ros_interfaces::msg::Rmplusstate::_tangential_force_dir_type arg)
  {
    msg_.tangential_force_dir = std::move(arg);
    return Init_Rmplusstate_tsa(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_tangential_force
{
public:
  explicit Init_Rmplusstate_tangential_force(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_tangential_force_dir tangential_force(::rm_ros_interfaces::msg::Rmplusstate::_tangential_force_type arg)
  {
    msg_.tangential_force = std::move(arg);
    return Init_Rmplusstate_tangential_force_dir(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_normal_force
{
public:
  explicit Init_Rmplusstate_normal_force(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_tangential_force normal_force(::rm_ros_interfaces::msg::Rmplusstate::_normal_force_type arg)
  {
    msg_.normal_force = std::move(arg);
    return Init_Rmplusstate_tangential_force(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_current
{
public:
  explicit Init_Rmplusstate_current(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_normal_force current(::rm_ros_interfaces::msg::Rmplusstate::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_Rmplusstate_normal_force(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_angle
{
public:
  explicit Init_Rmplusstate_angle(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_current angle(::rm_ros_interfaces::msg::Rmplusstate::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Rmplusstate_current(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_speed
{
public:
  explicit Init_Rmplusstate_speed(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_angle speed(::rm_ros_interfaces::msg::Rmplusstate::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Rmplusstate_angle(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_pos
{
public:
  explicit Init_Rmplusstate_pos(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_speed pos(::rm_ros_interfaces::msg::Rmplusstate::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_Rmplusstate_speed(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_dof_err
{
public:
  explicit Init_Rmplusstate_dof_err(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_pos dof_err(::rm_ros_interfaces::msg::Rmplusstate::_dof_err_type arg)
  {
    msg_.dof_err = std::move(arg);
    return Init_Rmplusstate_pos(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_dof_state
{
public:
  explicit Init_Rmplusstate_dof_state(::rm_ros_interfaces::msg::Rmplusstate & msg)
  : msg_(msg)
  {}
  Init_Rmplusstate_dof_err dof_state(::rm_ros_interfaces::msg::Rmplusstate::_dof_state_type arg)
  {
    msg_.dof_state = std::move(arg);
    return Init_Rmplusstate_dof_err(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

class Init_Rmplusstate_sys_state
{
public:
  Init_Rmplusstate_sys_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rmplusstate_dof_state sys_state(::rm_ros_interfaces::msg::Rmplusstate::_sys_state_type arg)
  {
    msg_.sys_state = std::move(arg);
    return Init_Rmplusstate_dof_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusstate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Rmplusstate>()
{
  return rm_ros_interfaces::msg::builder::Init_Rmplusstate_sys_state();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__BUILDER_HPP_
