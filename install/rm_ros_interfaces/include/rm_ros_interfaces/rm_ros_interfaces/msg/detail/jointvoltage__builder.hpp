// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Jointvoltage.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTVOLTAGE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTVOLTAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/jointvoltage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Jointvoltage_joint_voltage
{
public:
  Init_Jointvoltage_joint_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_ros_interfaces::msg::Jointvoltage joint_voltage(::rm_ros_interfaces::msg::Jointvoltage::_joint_voltage_type arg)
  {
    msg_.joint_voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Jointvoltage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Jointvoltage>()
{
  return rm_ros_interfaces::msg::builder::Init_Jointvoltage_joint_voltage();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTVOLTAGE__BUILDER_HPP_
