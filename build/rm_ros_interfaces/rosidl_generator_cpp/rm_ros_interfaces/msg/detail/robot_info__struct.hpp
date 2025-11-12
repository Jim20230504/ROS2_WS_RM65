// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__RobotInfo __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__RobotInfo __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotInfo_
{
  using Type = RobotInfo_<ContainerAllocator>;

  explicit RobotInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_dof = 0;
      this->arm_model = 0;
      this->force_type = 0;
      this->robot_controller_version = 0;
      this->state = false;
    }
  }

  explicit RobotInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_dof = 0;
      this->arm_model = 0;
      this->force_type = 0;
      this->robot_controller_version = 0;
      this->state = false;
    }
  }

  // field types and members
  using _arm_dof_type =
    uint8_t;
  _arm_dof_type arm_dof;
  using _arm_model_type =
    uint8_t;
  _arm_model_type arm_model;
  using _force_type_type =
    uint8_t;
  _force_type_type force_type;
  using _robot_controller_version_type =
    uint8_t;
  _robot_controller_version_type robot_controller_version;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__arm_dof(
    const uint8_t & _arg)
  {
    this->arm_dof = _arg;
    return *this;
  }
  Type & set__arm_model(
    const uint8_t & _arg)
  {
    this->arm_model = _arg;
    return *this;
  }
  Type & set__force_type(
    const uint8_t & _arg)
  {
    this->force_type = _arg;
    return *this;
  }
  Type & set__robot_controller_version(
    const uint8_t & _arg)
  {
    this->robot_controller_version = _arg;
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
    rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__RobotInfo
    std::shared_ptr<rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__RobotInfo
    std::shared_ptr<rm_ros_interfaces::msg::RobotInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotInfo_ & other) const
  {
    if (this->arm_dof != other.arm_dof) {
      return false;
    }
    if (this->arm_model != other.arm_model) {
      return false;
    }
    if (this->force_type != other.force_type) {
      return false;
    }
    if (this->robot_controller_version != other.robot_controller_version) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotInfo_

// alias to use template instance with default allocator
using RobotInfo =
  rm_ros_interfaces::msg::RobotInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__STRUCT_HPP_
