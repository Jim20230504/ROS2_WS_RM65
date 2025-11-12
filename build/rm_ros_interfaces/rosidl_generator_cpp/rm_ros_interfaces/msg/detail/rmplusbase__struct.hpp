// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Rmplusbase.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Rmplusbase __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Rmplusbase __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Rmplusbase_
{
  using Type = Rmplusbase_<ContainerAllocator>;

  explicit Rmplusbase_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manu = "";
      this->type = 0;
      this->hv = "";
      this->sv = "";
      this->bv = "";
      this->id = 0l;
      this->dof = 0;
      this->check = 0;
      this->bee = 0;
      this->force = false;
      this->touch = false;
      this->touch_num = 0;
      this->touch_sw = 0;
      this->hand = 0;
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->pos_up.begin(), this->pos_up.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->pos_low.begin(), this->pos_low.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->angle_up.begin(), this->angle_up.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->angle_low.begin(), this->angle_low.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->speed_up.begin(), this->speed_up.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->speed_low.begin(), this->speed_low.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->force_up.begin(), this->force_up.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->force_low.begin(), this->force_low.end(), 0l);
    }
  }

  explicit Rmplusbase_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : manu(_alloc),
    hv(_alloc),
    sv(_alloc),
    bv(_alloc),
    pos_up(_alloc),
    pos_low(_alloc),
    angle_up(_alloc),
    angle_low(_alloc),
    speed_up(_alloc),
    speed_low(_alloc),
    force_up(_alloc),
    force_low(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manu = "";
      this->type = 0;
      this->hv = "";
      this->sv = "";
      this->bv = "";
      this->id = 0l;
      this->dof = 0;
      this->check = 0;
      this->bee = 0;
      this->force = false;
      this->touch = false;
      this->touch_num = 0;
      this->touch_sw = 0;
      this->hand = 0;
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->pos_up.begin(), this->pos_up.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->pos_low.begin(), this->pos_low.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->angle_up.begin(), this->angle_up.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->angle_low.begin(), this->angle_low.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->speed_up.begin(), this->speed_up.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->speed_low.begin(), this->speed_low.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->force_up.begin(), this->force_up.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->force_low.begin(), this->force_low.end(), 0l);
    }
  }

  // field types and members
  using _manu_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _manu_type manu;
  using _type_type =
    int8_t;
  _type_type type;
  using _hv_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hv_type hv;
  using _sv_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sv_type sv;
  using _bv_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bv_type bv;
  using _id_type =
    int32_t;
  _id_type id;
  using _dof_type =
    int8_t;
  _dof_type dof;
  using _check_type =
    int8_t;
  _check_type check;
  using _bee_type =
    int8_t;
  _bee_type bee;
  using _force_type =
    bool;
  _force_type force;
  using _touch_type =
    bool;
  _touch_type touch;
  using _touch_num_type =
    int8_t;
  _touch_num_type touch_num;
  using _touch_sw_type =
    int8_t;
  _touch_sw_type touch_sw;
  using _hand_type =
    int8_t;
  _hand_type hand;
  using _pos_up_type =
    std::array<int32_t, 12>;
  _pos_up_type pos_up;
  using _pos_low_type =
    std::array<int32_t, 12>;
  _pos_low_type pos_low;
  using _angle_up_type =
    std::array<int32_t, 12>;
  _angle_up_type angle_up;
  using _angle_low_type =
    std::array<int32_t, 12>;
  _angle_low_type angle_low;
  using _speed_up_type =
    std::array<int32_t, 12>;
  _speed_up_type speed_up;
  using _speed_low_type =
    std::array<int32_t, 12>;
  _speed_low_type speed_low;
  using _force_up_type =
    std::array<int32_t, 12>;
  _force_up_type force_up;
  using _force_low_type =
    std::array<int32_t, 12>;
  _force_low_type force_low;

  // setters for named parameter idiom
  Type & set__manu(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->manu = _arg;
    return *this;
  }
  Type & set__type(
    const int8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__hv(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hv = _arg;
    return *this;
  }
  Type & set__sv(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sv = _arg;
    return *this;
  }
  Type & set__bv(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bv = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__dof(
    const int8_t & _arg)
  {
    this->dof = _arg;
    return *this;
  }
  Type & set__check(
    const int8_t & _arg)
  {
    this->check = _arg;
    return *this;
  }
  Type & set__bee(
    const int8_t & _arg)
  {
    this->bee = _arg;
    return *this;
  }
  Type & set__force(
    const bool & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__touch(
    const bool & _arg)
  {
    this->touch = _arg;
    return *this;
  }
  Type & set__touch_num(
    const int8_t & _arg)
  {
    this->touch_num = _arg;
    return *this;
  }
  Type & set__touch_sw(
    const int8_t & _arg)
  {
    this->touch_sw = _arg;
    return *this;
  }
  Type & set__hand(
    const int8_t & _arg)
  {
    this->hand = _arg;
    return *this;
  }
  Type & set__pos_up(
    const std::array<int32_t, 12> & _arg)
  {
    this->pos_up = _arg;
    return *this;
  }
  Type & set__pos_low(
    const std::array<int32_t, 12> & _arg)
  {
    this->pos_low = _arg;
    return *this;
  }
  Type & set__angle_up(
    const std::array<int32_t, 12> & _arg)
  {
    this->angle_up = _arg;
    return *this;
  }
  Type & set__angle_low(
    const std::array<int32_t, 12> & _arg)
  {
    this->angle_low = _arg;
    return *this;
  }
  Type & set__speed_up(
    const std::array<int32_t, 12> & _arg)
  {
    this->speed_up = _arg;
    return *this;
  }
  Type & set__speed_low(
    const std::array<int32_t, 12> & _arg)
  {
    this->speed_low = _arg;
    return *this;
  }
  Type & set__force_up(
    const std::array<int32_t, 12> & _arg)
  {
    this->force_up = _arg;
    return *this;
  }
  Type & set__force_low(
    const std::array<int32_t, 12> & _arg)
  {
    this->force_low = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Rmplusbase
    std::shared_ptr<rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Rmplusbase
    std::shared_ptr<rm_ros_interfaces::msg::Rmplusbase_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rmplusbase_ & other) const
  {
    if (this->manu != other.manu) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->hv != other.hv) {
      return false;
    }
    if (this->sv != other.sv) {
      return false;
    }
    if (this->bv != other.bv) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->dof != other.dof) {
      return false;
    }
    if (this->check != other.check) {
      return false;
    }
    if (this->bee != other.bee) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    if (this->touch != other.touch) {
      return false;
    }
    if (this->touch_num != other.touch_num) {
      return false;
    }
    if (this->touch_sw != other.touch_sw) {
      return false;
    }
    if (this->hand != other.hand) {
      return false;
    }
    if (this->pos_up != other.pos_up) {
      return false;
    }
    if (this->pos_low != other.pos_low) {
      return false;
    }
    if (this->angle_up != other.angle_up) {
      return false;
    }
    if (this->angle_low != other.angle_low) {
      return false;
    }
    if (this->speed_up != other.speed_up) {
      return false;
    }
    if (this->speed_low != other.speed_low) {
      return false;
    }
    if (this->force_up != other.force_up) {
      return false;
    }
    if (this->force_low != other.force_low) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rmplusbase_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rmplusbase_

// alias to use template instance with default allocator
using Rmplusbase =
  rm_ros_interfaces::msg::Rmplusbase_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__STRUCT_HPP_
