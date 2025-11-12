// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Modbustcpwriteparams.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPWRITEPARAMS__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPWRITEPARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Modbustcpwriteparams __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Modbustcpwriteparams __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Modbustcpwriteparams_
{
  using Type = Modbustcpwriteparams_<ContainerAllocator>;

  explicit Modbustcpwriteparams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0l;
      this->master_name = "";
      this->ip = "";
      this->port = 0l;
      this->num = 0l;
    }
  }

  explicit Modbustcpwriteparams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : master_name(_alloc),
    ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0l;
      this->master_name = "";
      this->ip = "";
      this->port = 0l;
      this->num = 0l;
    }
  }

  // field types and members
  using _address_type =
    int32_t;
  _address_type address;
  using _master_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _master_name_type master_name;
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _port_type =
    int32_t;
  _port_type port;
  using _num_type =
    int32_t;
  _num_type num;
  using _data_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__address(
    const int32_t & _arg)
  {
    this->address = _arg;
    return *this;
  }
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
  Type & set__num(
    const int32_t & _arg)
  {
    this->num = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Modbustcpwriteparams
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Modbustcpwriteparams
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpwriteparams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Modbustcpwriteparams_ & other) const
  {
    if (this->address != other.address) {
      return false;
    }
    if (this->master_name != other.master_name) {
      return false;
    }
    if (this->ip != other.ip) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    if (this->num != other.num) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Modbustcpwriteparams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Modbustcpwriteparams_

// alias to use template instance with default allocator
using Modbustcpwriteparams =
  rm_ros_interfaces::msg::Modbustcpwriteparams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPWRITEPARAMS__STRUCT_HPP_
