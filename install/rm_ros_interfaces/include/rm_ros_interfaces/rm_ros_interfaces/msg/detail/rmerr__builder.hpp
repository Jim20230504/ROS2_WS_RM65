// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Rmerr.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMERR__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMERR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/rmerr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Rmerr_err
{
public:
  explicit Init_Rmerr_err(::rm_ros_interfaces::msg::Rmerr & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Rmerr err(::rm_ros_interfaces::msg::Rmerr::_err_type arg)
  {
    msg_.err = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmerr msg_;
};

class Init_Rmerr_err_len
{
public:
  Init_Rmerr_err_len()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rmerr_err err_len(::rm_ros_interfaces::msg::Rmerr::_err_len_type arg)
  {
    msg_.err_len = std::move(arg);
    return Init_Rmerr_err(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmerr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Rmerr>()
{
  return rm_ros_interfaces::msg::builder::Init_Rmerr_err_len();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMERR__BUILDER_HPP_
