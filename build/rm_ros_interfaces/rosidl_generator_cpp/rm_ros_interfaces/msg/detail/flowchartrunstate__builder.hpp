// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Flowchartrunstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/flowchartrunstate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Flowchartrunstate_state
{
public:
  explicit Init_Flowchartrunstate_state(::rm_ros_interfaces::msg::Flowchartrunstate & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Flowchartrunstate state(::rm_ros_interfaces::msg::Flowchartrunstate::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Flowchartrunstate msg_;
};

class Init_Flowchartrunstate_modal_id
{
public:
  explicit Init_Flowchartrunstate_modal_id(::rm_ros_interfaces::msg::Flowchartrunstate & msg)
  : msg_(msg)
  {}
  Init_Flowchartrunstate_state modal_id(::rm_ros_interfaces::msg::Flowchartrunstate::_modal_id_type arg)
  {
    msg_.modal_id = std::move(arg);
    return Init_Flowchartrunstate_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Flowchartrunstate msg_;
};

class Init_Flowchartrunstate_step_mode
{
public:
  explicit Init_Flowchartrunstate_step_mode(::rm_ros_interfaces::msg::Flowchartrunstate & msg)
  : msg_(msg)
  {}
  Init_Flowchartrunstate_modal_id step_mode(::rm_ros_interfaces::msg::Flowchartrunstate::_step_mode_type arg)
  {
    msg_.step_mode = std::move(arg);
    return Init_Flowchartrunstate_modal_id(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Flowchartrunstate msg_;
};

class Init_Flowchartrunstate_plan_speed
{
public:
  explicit Init_Flowchartrunstate_plan_speed(::rm_ros_interfaces::msg::Flowchartrunstate & msg)
  : msg_(msg)
  {}
  Init_Flowchartrunstate_step_mode plan_speed(::rm_ros_interfaces::msg::Flowchartrunstate::_plan_speed_type arg)
  {
    msg_.plan_speed = std::move(arg);
    return Init_Flowchartrunstate_step_mode(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Flowchartrunstate msg_;
};

class Init_Flowchartrunstate_name
{
public:
  explicit Init_Flowchartrunstate_name(::rm_ros_interfaces::msg::Flowchartrunstate & msg)
  : msg_(msg)
  {}
  Init_Flowchartrunstate_plan_speed name(::rm_ros_interfaces::msg::Flowchartrunstate::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Flowchartrunstate_plan_speed(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Flowchartrunstate msg_;
};

class Init_Flowchartrunstate_id
{
public:
  explicit Init_Flowchartrunstate_id(::rm_ros_interfaces::msg::Flowchartrunstate & msg)
  : msg_(msg)
  {}
  Init_Flowchartrunstate_name id(::rm_ros_interfaces::msg::Flowchartrunstate::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Flowchartrunstate_name(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Flowchartrunstate msg_;
};

class Init_Flowchartrunstate_run_state
{
public:
  Init_Flowchartrunstate_run_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Flowchartrunstate_id run_state(::rm_ros_interfaces::msg::Flowchartrunstate::_run_state_type arg)
  {
    msg_.run_state = std::move(arg);
    return Init_Flowchartrunstate_id(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Flowchartrunstate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Flowchartrunstate>()
{
  return rm_ros_interfaces::msg::builder::Init_Flowchartrunstate_run_state();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__BUILDER_HPP_
