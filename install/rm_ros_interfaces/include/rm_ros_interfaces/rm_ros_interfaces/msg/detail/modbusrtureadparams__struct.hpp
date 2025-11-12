// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Modbusrtureadparams.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUREADPARAMS__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUREADPARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Modbusrtureadparams __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Modbusrtureadparams __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Modbusrtureadparams_
{
  using Type = Modbusrtureadparams_<ContainerAllocator>;

  explicit Modbusrtureadparams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0l;
      this->device = 0l;
      this->type = 0l;
      this->num = 0l;
    }
  }

  explicit Modbusrtureadparams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0l;
      this->device = 0l;
      this->type = 0l;
      this->num = 0l;
    }
  }

  // field types and members
  using _address_type =
    int32_t;
  _address_type address;
  using _device_type =
    int32_t;
  _device_type device;
  using _type_type =
    int32_t;
  _type_type type;
  using _num_type =
    int32_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__address(
    const int32_t & _arg)
  {
    this->address = _arg;
    return *this;
  }
  Type & set__device(
    const int32_t & _arg)
  {
    this->device = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__num(
    const int32_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Modbusrtureadparams
    std::shared_ptr<rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Modbusrtureadparams
    std::shared_ptr<rm_ros_interfaces::msg::Modbusrtureadparams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Modbusrtureadparams_ & other) const
  {
    if (this->address != other.address) {
      return false;
    }
    if (this->device != other.device) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Modbusrtureadparams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Modbusrtureadparams_

// alias to use template instance with default allocator
using Modbusrtureadparams =
  rm_ros_interfaces::msg::Modbusrtureadparams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUREADPARAMS__STRUCT_HPP_
