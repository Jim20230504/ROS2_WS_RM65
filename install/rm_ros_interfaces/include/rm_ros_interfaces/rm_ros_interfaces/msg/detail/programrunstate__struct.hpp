// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Programrunstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Programrunstate __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Programrunstate __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Programrunstate_
{
  using Type = Programrunstate_<ContainerAllocator>;

  explicit Programrunstate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->run_state = 0l;
      this->id = 0l;
      this->edit_id = 0l;
      this->plan_num = 0l;
      this->total_loop = 0l;
      this->step_mode = 0l;
      this->plan_speed = 0l;
      this->state = false;
    }
  }

  explicit Programrunstate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->run_state = 0l;
      this->id = 0l;
      this->edit_id = 0l;
      this->plan_num = 0l;
      this->total_loop = 0l;
      this->step_mode = 0l;
      this->plan_speed = 0l;
      this->state = false;
    }
  }

  // field types and members
  using _run_state_type =
    int32_t;
  _run_state_type run_state;
  using _id_type =
    int32_t;
  _id_type id;
  using _edit_id_type =
    int32_t;
  _edit_id_type edit_id;
  using _plan_num_type =
    int32_t;
  _plan_num_type plan_num;
  using _total_loop_type =
    int32_t;
  _total_loop_type total_loop;
  using _step_mode_type =
    int32_t;
  _step_mode_type step_mode;
  using _plan_speed_type =
    int32_t;
  _plan_speed_type plan_speed;
  using _loop_num_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _loop_num_type loop_num;
  using _loop_cont_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _loop_cont_type loop_cont;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__run_state(
    const int32_t & _arg)
  {
    this->run_state = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__edit_id(
    const int32_t & _arg)
  {
    this->edit_id = _arg;
    return *this;
  }
  Type & set__plan_num(
    const int32_t & _arg)
  {
    this->plan_num = _arg;
    return *this;
  }
  Type & set__total_loop(
    const int32_t & _arg)
  {
    this->total_loop = _arg;
    return *this;
  }
  Type & set__step_mode(
    const int32_t & _arg)
  {
    this->step_mode = _arg;
    return *this;
  }
  Type & set__plan_speed(
    const int32_t & _arg)
  {
    this->plan_speed = _arg;
    return *this;
  }
  Type & set__loop_num(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->loop_num = _arg;
    return *this;
  }
  Type & set__loop_cont(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->loop_cont = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Programrunstate
    std::shared_ptr<rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Programrunstate
    std::shared_ptr<rm_ros_interfaces::msg::Programrunstate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Programrunstate_ & other) const
  {
    if (this->run_state != other.run_state) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->edit_id != other.edit_id) {
      return false;
    }
    if (this->plan_num != other.plan_num) {
      return false;
    }
    if (this->total_loop != other.total_loop) {
      return false;
    }
    if (this->step_mode != other.step_mode) {
      return false;
    }
    if (this->plan_speed != other.plan_speed) {
      return false;
    }
    if (this->loop_num != other.loop_num) {
      return false;
    }
    if (this->loop_cont != other.loop_cont) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Programrunstate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Programrunstate_

// alias to use template instance with default allocator
using Programrunstate =
  rm_ros_interfaces::msg::Programrunstate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__STRUCT_HPP_
