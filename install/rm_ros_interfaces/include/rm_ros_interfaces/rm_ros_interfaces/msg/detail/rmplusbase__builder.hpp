// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Rmplusbase.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/rmplusbase__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Rmplusbase_force_low
{
public:
  explicit Init_Rmplusbase_force_low(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Rmplusbase force_low(::rm_ros_interfaces::msg::Rmplusbase::_force_low_type arg)
  {
    msg_.force_low = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_force_up
{
public:
  explicit Init_Rmplusbase_force_up(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_force_low force_up(::rm_ros_interfaces::msg::Rmplusbase::_force_up_type arg)
  {
    msg_.force_up = std::move(arg);
    return Init_Rmplusbase_force_low(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_speed_low
{
public:
  explicit Init_Rmplusbase_speed_low(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_force_up speed_low(::rm_ros_interfaces::msg::Rmplusbase::_speed_low_type arg)
  {
    msg_.speed_low = std::move(arg);
    return Init_Rmplusbase_force_up(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_speed_up
{
public:
  explicit Init_Rmplusbase_speed_up(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_speed_low speed_up(::rm_ros_interfaces::msg::Rmplusbase::_speed_up_type arg)
  {
    msg_.speed_up = std::move(arg);
    return Init_Rmplusbase_speed_low(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_angle_low
{
public:
  explicit Init_Rmplusbase_angle_low(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_speed_up angle_low(::rm_ros_interfaces::msg::Rmplusbase::_angle_low_type arg)
  {
    msg_.angle_low = std::move(arg);
    return Init_Rmplusbase_speed_up(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_angle_up
{
public:
  explicit Init_Rmplusbase_angle_up(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_angle_low angle_up(::rm_ros_interfaces::msg::Rmplusbase::_angle_up_type arg)
  {
    msg_.angle_up = std::move(arg);
    return Init_Rmplusbase_angle_low(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_pos_low
{
public:
  explicit Init_Rmplusbase_pos_low(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_angle_up pos_low(::rm_ros_interfaces::msg::Rmplusbase::_pos_low_type arg)
  {
    msg_.pos_low = std::move(arg);
    return Init_Rmplusbase_angle_up(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_pos_up
{
public:
  explicit Init_Rmplusbase_pos_up(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_pos_low pos_up(::rm_ros_interfaces::msg::Rmplusbase::_pos_up_type arg)
  {
    msg_.pos_up = std::move(arg);
    return Init_Rmplusbase_pos_low(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_hand
{
public:
  explicit Init_Rmplusbase_hand(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_pos_up hand(::rm_ros_interfaces::msg::Rmplusbase::_hand_type arg)
  {
    msg_.hand = std::move(arg);
    return Init_Rmplusbase_pos_up(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_touch_sw
{
public:
  explicit Init_Rmplusbase_touch_sw(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_hand touch_sw(::rm_ros_interfaces::msg::Rmplusbase::_touch_sw_type arg)
  {
    msg_.touch_sw = std::move(arg);
    return Init_Rmplusbase_hand(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_touch_num
{
public:
  explicit Init_Rmplusbase_touch_num(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_touch_sw touch_num(::rm_ros_interfaces::msg::Rmplusbase::_touch_num_type arg)
  {
    msg_.touch_num = std::move(arg);
    return Init_Rmplusbase_touch_sw(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_touch
{
public:
  explicit Init_Rmplusbase_touch(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_touch_num touch(::rm_ros_interfaces::msg::Rmplusbase::_touch_type arg)
  {
    msg_.touch = std::move(arg);
    return Init_Rmplusbase_touch_num(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_force
{
public:
  explicit Init_Rmplusbase_force(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_touch force(::rm_ros_interfaces::msg::Rmplusbase::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_Rmplusbase_touch(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_bee
{
public:
  explicit Init_Rmplusbase_bee(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_force bee(::rm_ros_interfaces::msg::Rmplusbase::_bee_type arg)
  {
    msg_.bee = std::move(arg);
    return Init_Rmplusbase_force(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_check
{
public:
  explicit Init_Rmplusbase_check(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_bee check(::rm_ros_interfaces::msg::Rmplusbase::_check_type arg)
  {
    msg_.check = std::move(arg);
    return Init_Rmplusbase_bee(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_dof
{
public:
  explicit Init_Rmplusbase_dof(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_check dof(::rm_ros_interfaces::msg::Rmplusbase::_dof_type arg)
  {
    msg_.dof = std::move(arg);
    return Init_Rmplusbase_check(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_id
{
public:
  explicit Init_Rmplusbase_id(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_dof id(::rm_ros_interfaces::msg::Rmplusbase::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Rmplusbase_dof(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_bv
{
public:
  explicit Init_Rmplusbase_bv(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_id bv(::rm_ros_interfaces::msg::Rmplusbase::_bv_type arg)
  {
    msg_.bv = std::move(arg);
    return Init_Rmplusbase_id(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_sv
{
public:
  explicit Init_Rmplusbase_sv(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_bv sv(::rm_ros_interfaces::msg::Rmplusbase::_sv_type arg)
  {
    msg_.sv = std::move(arg);
    return Init_Rmplusbase_bv(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_hv
{
public:
  explicit Init_Rmplusbase_hv(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_sv hv(::rm_ros_interfaces::msg::Rmplusbase::_hv_type arg)
  {
    msg_.hv = std::move(arg);
    return Init_Rmplusbase_sv(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_type
{
public:
  explicit Init_Rmplusbase_type(::rm_ros_interfaces::msg::Rmplusbase & msg)
  : msg_(msg)
  {}
  Init_Rmplusbase_hv type(::rm_ros_interfaces::msg::Rmplusbase::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Rmplusbase_hv(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

class Init_Rmplusbase_manu
{
public:
  Init_Rmplusbase_manu()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rmplusbase_type manu(::rm_ros_interfaces::msg::Rmplusbase::_manu_type arg)
  {
    msg_.manu = std::move(arg);
    return Init_Rmplusbase_type(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Rmplusbase msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Rmplusbase>()
{
  return rm_ros_interfaces::msg::builder::Init_Rmplusbase_manu();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__BUILDER_HPP_
