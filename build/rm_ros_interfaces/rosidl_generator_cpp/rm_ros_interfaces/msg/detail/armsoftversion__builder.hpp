// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Armsoftversion.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/armsoftversion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Armsoftversion_productversion
{
public:
  explicit Init_Armsoftversion_productversion(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Armsoftversion productversion(::rm_ros_interfaces::msg::Armsoftversion::_productversion_type arg)
  {
    msg_.productversion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_kernal2
{
public:
  explicit Init_Armsoftversion_kernal2(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_productversion kernal2(::rm_ros_interfaces::msg::Armsoftversion::_kernal2_type arg)
  {
    msg_.kernal2 = std::move(arg);
    return Init_Armsoftversion_productversion(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_kernal1
{
public:
  explicit Init_Armsoftversion_kernal1(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_kernal2 kernal1(::rm_ros_interfaces::msg::Armsoftversion::_kernal1_type arg)
  {
    msg_.kernal1 = std::move(arg);
    return Init_Armsoftversion_kernal2(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_ctrlversion
{
public:
  explicit Init_Armsoftversion_ctrlversion(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_kernal1 ctrlversion(::rm_ros_interfaces::msg::Armsoftversion::_ctrlversion_type arg)
  {
    msg_.ctrlversion = std::move(arg);
    return Init_Armsoftversion_kernal1(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_planversion
{
public:
  explicit Init_Armsoftversion_planversion(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_ctrlversion planversion(::rm_ros_interfaces::msg::Armsoftversion::_planversion_type arg)
  {
    msg_.planversion = std::move(arg);
    return Init_Armsoftversion_ctrlversion(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_state
{
public:
  explicit Init_Armsoftversion_state(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_planversion state(::rm_ros_interfaces::msg::Armsoftversion::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_Armsoftversion_planversion(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_program_info
{
public:
  explicit Init_Armsoftversion_program_info(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_state program_info(::rm_ros_interfaces::msg::Armsoftversion::_program_info_type arg)
  {
    msg_.program_info = std::move(arg);
    return Init_Armsoftversion_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_com_info
{
public:
  explicit Init_Armsoftversion_com_info(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_program_info com_info(::rm_ros_interfaces::msg::Armsoftversion::_com_info_type arg)
  {
    msg_.com_info = std::move(arg);
    return Init_Armsoftversion_program_info(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_plan_info
{
public:
  explicit Init_Armsoftversion_plan_info(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_com_info plan_info(::rm_ros_interfaces::msg::Armsoftversion::_plan_info_type arg)
  {
    msg_.plan_info = std::move(arg);
    return Init_Armsoftversion_com_info(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_dynamic_info
{
public:
  explicit Init_Armsoftversion_dynamic_info(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_plan_info dynamic_info(::rm_ros_interfaces::msg::Armsoftversion::_dynamic_info_type arg)
  {
    msg_.dynamic_info = std::move(arg);
    return Init_Armsoftversion_plan_info(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_ctrl_info
{
public:
  explicit Init_Armsoftversion_ctrl_info(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_dynamic_info ctrl_info(::rm_ros_interfaces::msg::Armsoftversion::_ctrl_info_type arg)
  {
    msg_.ctrl_info = std::move(arg);
    return Init_Armsoftversion_dynamic_info(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_algorithm_info
{
public:
  explicit Init_Armsoftversion_algorithm_info(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_ctrl_info algorithm_info(::rm_ros_interfaces::msg::Armsoftversion::_algorithm_info_type arg)
  {
    msg_.algorithm_info = std::move(arg);
    return Init_Armsoftversion_ctrl_info(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_controller_version
{
public:
  explicit Init_Armsoftversion_controller_version(::rm_ros_interfaces::msg::Armsoftversion & msg)
  : msg_(msg)
  {}
  Init_Armsoftversion_algorithm_info controller_version(::rm_ros_interfaces::msg::Armsoftversion::_controller_version_type arg)
  {
    msg_.controller_version = std::move(arg);
    return Init_Armsoftversion_algorithm_info(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

class Init_Armsoftversion_product_version
{
public:
  Init_Armsoftversion_product_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Armsoftversion_controller_version product_version(::rm_ros_interfaces::msg::Armsoftversion::_product_version_type arg)
  {
    msg_.product_version = std::move(arg);
    return Init_Armsoftversion_controller_version(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Armsoftversion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Armsoftversion>()
{
  return rm_ros_interfaces::msg::builder::Init_Armsoftversion_product_version();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__BUILDER_HPP_
