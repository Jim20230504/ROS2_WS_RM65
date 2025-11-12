// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Softwarebuildinfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__SOFTWAREBUILDINFO__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__SOFTWAREBUILDINFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/softwarebuildinfo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Softwarebuildinfo_version
{
public:
  explicit Init_Softwarebuildinfo_version(::rm_ros_interfaces::msg::Softwarebuildinfo & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Softwarebuildinfo version(::rm_ros_interfaces::msg::Softwarebuildinfo::_version_type arg)
  {
    msg_.version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Softwarebuildinfo msg_;
};

class Init_Softwarebuildinfo_build_time
{
public:
  Init_Softwarebuildinfo_build_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Softwarebuildinfo_version build_time(::rm_ros_interfaces::msg::Softwarebuildinfo::_build_time_type arg)
  {
    msg_.build_time = std::move(arg);
    return Init_Softwarebuildinfo_version(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Softwarebuildinfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Softwarebuildinfo>()
{
  return rm_ros_interfaces::msg::builder::Init_Softwarebuildinfo_build_time();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__SOFTWAREBUILDINFO__BUILDER_HPP_
