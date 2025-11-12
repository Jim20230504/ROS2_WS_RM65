// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Programrunstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/programrunstate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Programrunstate_state
{
public:
  explicit Init_Programrunstate_state(::rm_ros_interfaces::msg::Programrunstate & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Programrunstate state(::rm_ros_interfaces::msg::Programrunstate::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Programrunstate msg_;
};

class Init_Programrunstate_loop_cont
{
public:
  explicit Init_Programrunstate_loop_cont(::rm_ros_interfaces::msg::Programrunstate & msg)
  : msg_(msg)
  {}
  Init_Programrunstate_state loop_cont(::rm_ros_interfaces::msg::Programrunstate::_loop_cont_type arg)
  {
    msg_.loop_cont = std::move(arg);
    return Init_Programrunstate_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Programrunstate msg_;
};

class Init_Programrunstate_loop_num
{
public:
  explicit Init_Programrunstate_loop_num(::rm_ros_interfaces::msg::Programrunstate & msg)
  : msg_(msg)
  {}
  Init_Programrunstate_loop_cont loop_num(::rm_ros_interfaces::msg::Programrunstate::_loop_num_type arg)
  {
    msg_.loop_num = std::move(arg);
    return Init_Programrunstate_loop_cont(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Programrunstate msg_;
};

class Init_Programrunstate_plan_speed
{
public:
  explicit Init_Programrunstate_plan_speed(::rm_ros_interfaces::msg::Programrunstate & msg)
  : msg_(msg)
  {}
  Init_Programrunstate_loop_num plan_speed(::rm_ros_interfaces::msg::Programrunstate::_plan_speed_type arg)
  {
    msg_.plan_speed = std::move(arg);
    return Init_Programrunstate_loop_num(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Programrunstate msg_;
};

class Init_Programrunstate_step_mode
{
public:
  explicit Init_Programrunstate_step_mode(::rm_ros_interfaces::msg::Programrunstate & msg)
  : msg_(msg)
  {}
  Init_Programrunstate_plan_speed step_mode(::rm_ros_interfaces::msg::Programrunstate::_step_mode_type arg)
  {
    msg_.step_mode = std::move(arg);
    return Init_Programrunstate_plan_speed(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Programrunstate msg_;
};

class Init_Programrunstate_total_loop
{
public:
  explicit Init_Programrunstate_total_loop(::rm_ros_interfaces::msg::Programrunstate & msg)
  : msg_(msg)
  {}
  Init_Programrunstate_step_mode total_loop(::rm_ros_interfaces::msg::Programrunstate::_total_loop_type arg)
  {
    msg_.total_loop = std::move(arg);
    return Init_Programrunstate_step_mode(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Programrunstate msg_;
};

class Init_Programrunstate_plan_num
{
public:
  explicit Init_Programrunstate_plan_num(::rm_ros_interfaces::msg::Programrunstate & msg)
  : msg_(msg)
  {}
  Init_Programrunstate_total_loop plan_num(::rm_ros_interfaces::msg::Programrunstate::_plan_num_type arg)
  {
    msg_.plan_num = std::move(arg);
    return Init_Programrunstate_total_loop(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Programrunstate msg_;
};

class Init_Programrunstate_edit_id
{
public:
  explicit Init_Programrunstate_edit_id(::rm_ros_interfaces::msg::Programrunstate & msg)
  : msg_(msg)
  {}
  Init_Programrunstate_plan_num edit_id(::rm_ros_interfaces::msg::Programrunstate::_edit_id_type arg)
  {
    msg_.edit_id = std::move(arg);
    return Init_Programrunstate_plan_num(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Programrunstate msg_;
};

class Init_Programrunstate_id
{
public:
  explicit Init_Programrunstate_id(::rm_ros_interfaces::msg::Programrunstate & msg)
  : msg_(msg)
  {}
  Init_Programrunstate_edit_id id(::rm_ros_interfaces::msg::Programrunstate::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Programrunstate_edit_id(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Programrunstate msg_;
};

class Init_Programrunstate_run_state
{
public:
  Init_Programrunstate_run_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Programrunstate_id run_state(::rm_ros_interfaces::msg::Programrunstate::_run_state_type arg)
  {
    msg_.run_state = std::move(arg);
    return Init_Programrunstate_id(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Programrunstate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Programrunstate>()
{
  return rm_ros_interfaces::msg::builder::Init_Programrunstate_run_state();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__BUILDER_HPP_
