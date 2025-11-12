// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Sendproject.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/sendproject__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Sendproject_project_type
{
public:
  explicit Init_Sendproject_project_type(::rm_ros_interfaces::msg::Sendproject & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Sendproject project_type(::rm_ros_interfaces::msg::Sendproject::_project_type_type arg)
  {
    msg_.project_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Sendproject msg_;
};

class Init_Sendproject_auto_start
{
public:
  explicit Init_Sendproject_auto_start(::rm_ros_interfaces::msg::Sendproject & msg)
  : msg_(msg)
  {}
  Init_Sendproject_project_type auto_start(::rm_ros_interfaces::msg::Sendproject::_auto_start_type arg)
  {
    msg_.auto_start = std::move(arg);
    return Init_Sendproject_project_type(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Sendproject msg_;
};

class Init_Sendproject_step_flag
{
public:
  explicit Init_Sendproject_step_flag(::rm_ros_interfaces::msg::Sendproject & msg)
  : msg_(msg)
  {}
  Init_Sendproject_auto_start step_flag(::rm_ros_interfaces::msg::Sendproject::_step_flag_type arg)
  {
    msg_.step_flag = std::move(arg);
    return Init_Sendproject_auto_start(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Sendproject msg_;
};

class Init_Sendproject_save_id
{
public:
  explicit Init_Sendproject_save_id(::rm_ros_interfaces::msg::Sendproject & msg)
  : msg_(msg)
  {}
  Init_Sendproject_step_flag save_id(::rm_ros_interfaces::msg::Sendproject::_save_id_type arg)
  {
    msg_.save_id = std::move(arg);
    return Init_Sendproject_step_flag(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Sendproject msg_;
};

class Init_Sendproject_only_save
{
public:
  explicit Init_Sendproject_only_save(::rm_ros_interfaces::msg::Sendproject & msg)
  : msg_(msg)
  {}
  Init_Sendproject_save_id only_save(::rm_ros_interfaces::msg::Sendproject::_only_save_type arg)
  {
    msg_.only_save = std::move(arg);
    return Init_Sendproject_save_id(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Sendproject msg_;
};

class Init_Sendproject_plan_speed
{
public:
  explicit Init_Sendproject_plan_speed(::rm_ros_interfaces::msg::Sendproject & msg)
  : msg_(msg)
  {}
  Init_Sendproject_only_save plan_speed(::rm_ros_interfaces::msg::Sendproject::_plan_speed_type arg)
  {
    msg_.plan_speed = std::move(arg);
    return Init_Sendproject_only_save(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Sendproject msg_;
};

class Init_Sendproject_project_path_len
{
public:
  explicit Init_Sendproject_project_path_len(::rm_ros_interfaces::msg::Sendproject & msg)
  : msg_(msg)
  {}
  Init_Sendproject_plan_speed project_path_len(::rm_ros_interfaces::msg::Sendproject::_project_path_len_type arg)
  {
    msg_.project_path_len = std::move(arg);
    return Init_Sendproject_plan_speed(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Sendproject msg_;
};

class Init_Sendproject_project_path
{
public:
  Init_Sendproject_project_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sendproject_project_path_len project_path(::rm_ros_interfaces::msg::Sendproject::_project_path_type arg)
  {
    msg_.project_path = std::move(arg);
    return Init_Sendproject_project_path_len(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Sendproject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Sendproject>()
{
  return rm_ros_interfaces::msg::builder::Init_Sendproject_project_path();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__BUILDER_HPP_
