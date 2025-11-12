// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Flowchartrunstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Flowchartrunstate __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Flowchartrunstate __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Flowchartrunstate_
{
  using Type = Flowchartrunstate_<ContainerAllocator>;

  explicit Flowchartrunstate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->run_state = 0;
      this->id = 0;
      this->name = "";
      this->plan_speed = 0;
      this->step_mode = 0;
      this->modal_id = "";
      this->state = false;
    }
  }

  explicit Flowchartrunstate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    modal_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->run_state = 0;
      this->id = 0;
      this->name = "";
      this->plan_speed = 0;
      this->step_mode = 0;
      this->modal_id = "";
      this->state = false;
    }
  }

  // field types and members
  using _run_state_type =
    uint8_t;
  _run_state_type run_state;
  using _id_type =
    uint8_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _plan_speed_type =
    uint8_t;
  _plan_speed_type plan_speed;
  using _step_mode_type =
    uint8_t;
  _step_mode_type step_mode;
  using _modal_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _modal_id_type modal_id;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__run_state(
    const uint8_t & _arg)
  {
    this->run_state = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__plan_speed(
    const uint8_t & _arg)
  {
    this->plan_speed = _arg;
    return *this;
  }
  Type & set__step_mode(
    const uint8_t & _arg)
  {
    this->step_mode = _arg;
    return *this;
  }
  Type & set__modal_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->modal_id = _arg;
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
    rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Flowchartrunstate
    std::shared_ptr<rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Flowchartrunstate
    std::shared_ptr<rm_ros_interfaces::msg::Flowchartrunstate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flowchartrunstate_ & other) const
  {
    if (this->run_state != other.run_state) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->plan_speed != other.plan_speed) {
      return false;
    }
    if (this->step_mode != other.step_mode) {
      return false;
    }
    if (this->modal_id != other.modal_id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flowchartrunstate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flowchartrunstate_

// alias to use template instance with default allocator
using Flowchartrunstate =
  rm_ros_interfaces::msg::Flowchartrunstate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__STRUCT_HPP_
