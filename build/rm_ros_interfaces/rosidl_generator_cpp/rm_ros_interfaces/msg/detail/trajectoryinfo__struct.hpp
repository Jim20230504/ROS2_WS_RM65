// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Trajectoryinfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYINFO__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYINFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Trajectoryinfo __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Trajectoryinfo __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trajectoryinfo_
{
  using Type = Trajectoryinfo_<ContainerAllocator>;

  explicit Trajectoryinfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->create_time = "";
      this->point_num = 0l;
      this->state = false;
    }
  }

  explicit Trajectoryinfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    create_time(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->create_time = "";
      this->point_num = 0l;
      this->state = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _create_time_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _create_time_type create_time;
  using _point_num_type =
    int32_t;
  _point_num_type point_num;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__create_time(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->create_time = _arg;
    return *this;
  }
  Type & set__point_num(
    const int32_t & _arg)
  {
    this->point_num = _arg;
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
    rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Trajectoryinfo
    std::shared_ptr<rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Trajectoryinfo
    std::shared_ptr<rm_ros_interfaces::msg::Trajectoryinfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectoryinfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->create_time != other.create_time) {
      return false;
    }
    if (this->point_num != other.point_num) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectoryinfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectoryinfo_

// alias to use template instance with default allocator
using Trajectoryinfo =
  rm_ros_interfaces::msg::Trajectoryinfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYINFO__STRUCT_HPP_
