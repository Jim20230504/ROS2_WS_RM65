// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Trajectoryinfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYINFO__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYINFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/trajectoryinfo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Trajectoryinfo_state
{
public:
  explicit Init_Trajectoryinfo_state(::rm_ros_interfaces::msg::Trajectoryinfo & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Trajectoryinfo state(::rm_ros_interfaces::msg::Trajectoryinfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Trajectoryinfo msg_;
};

class Init_Trajectoryinfo_point_num
{
public:
  explicit Init_Trajectoryinfo_point_num(::rm_ros_interfaces::msg::Trajectoryinfo & msg)
  : msg_(msg)
  {}
  Init_Trajectoryinfo_state point_num(::rm_ros_interfaces::msg::Trajectoryinfo::_point_num_type arg)
  {
    msg_.point_num = std::move(arg);
    return Init_Trajectoryinfo_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Trajectoryinfo msg_;
};

class Init_Trajectoryinfo_create_time
{
public:
  explicit Init_Trajectoryinfo_create_time(::rm_ros_interfaces::msg::Trajectoryinfo & msg)
  : msg_(msg)
  {}
  Init_Trajectoryinfo_point_num create_time(::rm_ros_interfaces::msg::Trajectoryinfo::_create_time_type arg)
  {
    msg_.create_time = std::move(arg);
    return Init_Trajectoryinfo_point_num(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Trajectoryinfo msg_;
};

class Init_Trajectoryinfo_name
{
public:
  Init_Trajectoryinfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectoryinfo_create_time name(::rm_ros_interfaces::msg::Trajectoryinfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Trajectoryinfo_create_time(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Trajectoryinfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Trajectoryinfo>()
{
  return rm_ros_interfaces::msg::builder::Init_Trajectoryinfo_name();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYINFO__BUILDER_HPP_
