// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Rmplusstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Rmplusstate __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Rmplusstate __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Rmplusstate_
{
  using Type = Rmplusstate_<ContainerAllocator>;

  explicit Rmplusstate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sys_state = 0l;
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->dof_state.begin(), this->dof_state.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->dof_err.begin(), this->dof_err.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->pos.begin(), this->pos.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->speed.begin(), this->speed.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->angle.begin(), this->angle.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->current.begin(), this->current.end(), 0l);
      std::fill<typename std::array<int32_t, 18>::iterator, int32_t>(this->normal_force.begin(), this->normal_force.end(), 0l);
      std::fill<typename std::array<int32_t, 18>::iterator, int32_t>(this->tangential_force.begin(), this->tangential_force.end(), 0l);
      std::fill<typename std::array<int32_t, 18>::iterator, int32_t>(this->tangential_force_dir.begin(), this->tangential_force_dir.end(), 0l);
      std::fill<typename std::array<uint32_t, 12>::iterator, uint32_t>(this->tsa.begin(), this->tsa.end(), 0ul);
      std::fill<typename std::array<uint32_t, 12>::iterator, uint32_t>(this->tma.begin(), this->tma.end(), 0ul);
      std::fill<typename std::array<int32_t, 18>::iterator, int32_t>(this->touch_data.begin(), this->touch_data.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->force.begin(), this->force.end(), 0l);
    }
  }

  explicit Rmplusstate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dof_state(_alloc),
    dof_err(_alloc),
    pos(_alloc),
    speed(_alloc),
    angle(_alloc),
    current(_alloc),
    normal_force(_alloc),
    tangential_force(_alloc),
    tangential_force_dir(_alloc),
    tsa(_alloc),
    tma(_alloc),
    touch_data(_alloc),
    force(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sys_state = 0l;
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->dof_state.begin(), this->dof_state.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->dof_err.begin(), this->dof_err.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->pos.begin(), this->pos.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->speed.begin(), this->speed.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->angle.begin(), this->angle.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->current.begin(), this->current.end(), 0l);
      std::fill<typename std::array<int32_t, 18>::iterator, int32_t>(this->normal_force.begin(), this->normal_force.end(), 0l);
      std::fill<typename std::array<int32_t, 18>::iterator, int32_t>(this->tangential_force.begin(), this->tangential_force.end(), 0l);
      std::fill<typename std::array<int32_t, 18>::iterator, int32_t>(this->tangential_force_dir.begin(), this->tangential_force_dir.end(), 0l);
      std::fill<typename std::array<uint32_t, 12>::iterator, uint32_t>(this->tsa.begin(), this->tsa.end(), 0ul);
      std::fill<typename std::array<uint32_t, 12>::iterator, uint32_t>(this->tma.begin(), this->tma.end(), 0ul);
      std::fill<typename std::array<int32_t, 18>::iterator, int32_t>(this->touch_data.begin(), this->touch_data.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->force.begin(), this->force.end(), 0l);
    }
  }

  // field types and members
  using _sys_state_type =
    int32_t;
  _sys_state_type sys_state;
  using _dof_state_type =
    std::array<int32_t, 12>;
  _dof_state_type dof_state;
  using _dof_err_type =
    std::array<int32_t, 12>;
  _dof_err_type dof_err;
  using _pos_type =
    std::array<int32_t, 12>;
  _pos_type pos;
  using _speed_type =
    std::array<int32_t, 12>;
  _speed_type speed;
  using _angle_type =
    std::array<int32_t, 12>;
  _angle_type angle;
  using _current_type =
    std::array<int32_t, 12>;
  _current_type current;
  using _normal_force_type =
    std::array<int32_t, 18>;
  _normal_force_type normal_force;
  using _tangential_force_type =
    std::array<int32_t, 18>;
  _tangential_force_type tangential_force;
  using _tangential_force_dir_type =
    std::array<int32_t, 18>;
  _tangential_force_dir_type tangential_force_dir;
  using _tsa_type =
    std::array<uint32_t, 12>;
  _tsa_type tsa;
  using _tma_type =
    std::array<uint32_t, 12>;
  _tma_type tma;
  using _touch_data_type =
    std::array<int32_t, 18>;
  _touch_data_type touch_data;
  using _force_type =
    std::array<int32_t, 12>;
  _force_type force;

  // setters for named parameter idiom
  Type & set__sys_state(
    const int32_t & _arg)
  {
    this->sys_state = _arg;
    return *this;
  }
  Type & set__dof_state(
    const std::array<int32_t, 12> & _arg)
  {
    this->dof_state = _arg;
    return *this;
  }
  Type & set__dof_err(
    const std::array<int32_t, 12> & _arg)
  {
    this->dof_err = _arg;
    return *this;
  }
  Type & set__pos(
    const std::array<int32_t, 12> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__speed(
    const std::array<int32_t, 12> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__angle(
    const std::array<int32_t, 12> & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__current(
    const std::array<int32_t, 12> & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__normal_force(
    const std::array<int32_t, 18> & _arg)
  {
    this->normal_force = _arg;
    return *this;
  }
  Type & set__tangential_force(
    const std::array<int32_t, 18> & _arg)
  {
    this->tangential_force = _arg;
    return *this;
  }
  Type & set__tangential_force_dir(
    const std::array<int32_t, 18> & _arg)
  {
    this->tangential_force_dir = _arg;
    return *this;
  }
  Type & set__tsa(
    const std::array<uint32_t, 12> & _arg)
  {
    this->tsa = _arg;
    return *this;
  }
  Type & set__tma(
    const std::array<uint32_t, 12> & _arg)
  {
    this->tma = _arg;
    return *this;
  }
  Type & set__touch_data(
    const std::array<int32_t, 18> & _arg)
  {
    this->touch_data = _arg;
    return *this;
  }
  Type & set__force(
    const std::array<int32_t, 12> & _arg)
  {
    this->force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Rmplusstate
    std::shared_ptr<rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Rmplusstate
    std::shared_ptr<rm_ros_interfaces::msg::Rmplusstate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rmplusstate_ & other) const
  {
    if (this->sys_state != other.sys_state) {
      return false;
    }
    if (this->dof_state != other.dof_state) {
      return false;
    }
    if (this->dof_err != other.dof_err) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->normal_force != other.normal_force) {
      return false;
    }
    if (this->tangential_force != other.tangential_force) {
      return false;
    }
    if (this->tangential_force_dir != other.tangential_force_dir) {
      return false;
    }
    if (this->tsa != other.tsa) {
      return false;
    }
    if (this->tma != other.tma) {
      return false;
    }
    if (this->touch_data != other.touch_data) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rmplusstate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rmplusstate_

// alias to use template instance with default allocator
using Rmplusstate =
  rm_ros_interfaces::msg::Rmplusstate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__STRUCT_HPP_
