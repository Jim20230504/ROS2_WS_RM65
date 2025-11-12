// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Modbusreaddata.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSREADDATA__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSREADDATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/modbusreaddata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Modbusreaddata_state
{
public:
  explicit Init_Modbusreaddata_state(::rm_ros_interfaces::msg::Modbusreaddata & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Modbusreaddata state(::rm_ros_interfaces::msg::Modbusreaddata::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusreaddata msg_;
};

class Init_Modbusreaddata_read_data
{
public:
  Init_Modbusreaddata_read_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modbusreaddata_state read_data(::rm_ros_interfaces::msg::Modbusreaddata::_read_data_type arg)
  {
    msg_.read_data = std::move(arg);
    return Init_Modbusreaddata_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbusreaddata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Modbusreaddata>()
{
  return rm_ros_interfaces::msg::builder::Init_Modbusreaddata_read_data();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSREADDATA__BUILDER_HPP_
