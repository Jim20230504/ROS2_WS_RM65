// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/robot_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotInfo_state
{
public:
  explicit Init_RobotInfo_state(::rm_ros_interfaces::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::RobotInfo state(::rm_ros_interfaces::msg::RobotInfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::RobotInfo msg_;
};

class Init_RobotInfo_robot_controller_version
{
public:
  explicit Init_RobotInfo_robot_controller_version(::rm_ros_interfaces::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_state robot_controller_version(::rm_ros_interfaces::msg::RobotInfo::_robot_controller_version_type arg)
  {
    msg_.robot_controller_version = std::move(arg);
    return Init_RobotInfo_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::RobotInfo msg_;
};

class Init_RobotInfo_force_type
{
public:
  explicit Init_RobotInfo_force_type(::rm_ros_interfaces::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_robot_controller_version force_type(::rm_ros_interfaces::msg::RobotInfo::_force_type_type arg)
  {
    msg_.force_type = std::move(arg);
    return Init_RobotInfo_robot_controller_version(msg_);
  }

private:
  ::rm_ros_interfaces::msg::RobotInfo msg_;
};

class Init_RobotInfo_arm_model
{
public:
  explicit Init_RobotInfo_arm_model(::rm_ros_interfaces::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_force_type arm_model(::rm_ros_interfaces::msg::RobotInfo::_arm_model_type arg)
  {
    msg_.arm_model = std::move(arg);
    return Init_RobotInfo_force_type(msg_);
  }

private:
  ::rm_ros_interfaces::msg::RobotInfo msg_;
};

class Init_RobotInfo_arm_dof
{
public:
  Init_RobotInfo_arm_dof()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotInfo_arm_model arm_dof(::rm_ros_interfaces::msg::RobotInfo::_arm_dof_type arg)
  {
    msg_.arm_dof = std::move(arg);
    return Init_RobotInfo_arm_model(msg_);
  }

private:
  ::rm_ros_interfaces::msg::RobotInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::RobotInfo>()
{
  return rm_ros_interfaces::msg::builder::Init_RobotInfo_arm_dof();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_
