// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Modbustcpmasterinfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERINFO__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERINFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Modbustcpmasterinfo __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Modbustcpmasterinfo __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Modbustcpmasterinfo_
{
  using Type = Modbustcpmasterinfo_<ContainerAllocator>;

  explicit Modbustcpmasterinfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->master_name = "";
      this->ip = "";
      this->port = 0l;
      this->state = false;
    }
  }

  explicit Modbustcpmasterinfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : master_name(_alloc),
    ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->master_name = "";
      this->ip = "";
      this->port = 0l;
      this->state = false;
    }
  }

  // field types and members
  using _master_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _master_name_type master_name;
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _port_type =
    int32_t;
  _port_type port;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__master_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->master_name = _arg;
    return *this;
  }
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__port(
    const int32_t & _arg)
  {
    this->port = _arg;
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
    rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Modbustcpmasterinfo
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Modbustcpmasterinfo
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Modbustcpmasterinfo_ & other) const
  {
    if (this->master_name != other.master_name) {
      return false;
    }
    if (this->ip != other.ip) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Modbustcpmasterinfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Modbustcpmasterinfo_

// alias to use template instance with default allocator
using Modbustcpmasterinfo =
  rm_ros_interfaces::msg::Modbustcpmasterinfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERINFO__STRUCT_HPP_
