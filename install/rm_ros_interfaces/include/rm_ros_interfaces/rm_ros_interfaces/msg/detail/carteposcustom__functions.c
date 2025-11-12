// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Carteposcustom.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/carteposcustom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
rm_ros_interfaces__msg__Carteposcustom__init(rm_ros_interfaces__msg__Carteposcustom * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    rm_ros_interfaces__msg__Carteposcustom__fini(msg);
    return false;
  }
  // follow
  // trajectory_mode
  // radio
  return true;
}

void
rm_ros_interfaces__msg__Carteposcustom__fini(rm_ros_interfaces__msg__Carteposcustom * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // follow
  // trajectory_mode
  // radio
}

bool
rm_ros_interfaces__msg__Carteposcustom__are_equal(const rm_ros_interfaces__msg__Carteposcustom * lhs, const rm_ros_interfaces__msg__Carteposcustom * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // follow
  if (lhs->follow != rhs->follow) {
    return false;
  }
  // trajectory_mode
  if (lhs->trajectory_mode != rhs->trajectory_mode) {
    return false;
  }
  // radio
  if (lhs->radio != rhs->radio) {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Carteposcustom__copy(
  const rm_ros_interfaces__msg__Carteposcustom * input,
  rm_ros_interfaces__msg__Carteposcustom * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // follow
  output->follow = input->follow;
  // trajectory_mode
  output->trajectory_mode = input->trajectory_mode;
  // radio
  output->radio = input->radio;
  return true;
}

rm_ros_interfaces__msg__Carteposcustom *
rm_ros_interfaces__msg__Carteposcustom__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Carteposcustom * msg = (rm_ros_interfaces__msg__Carteposcustom *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Carteposcustom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Carteposcustom));
  bool success = rm_ros_interfaces__msg__Carteposcustom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Carteposcustom__destroy(rm_ros_interfaces__msg__Carteposcustom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Carteposcustom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Carteposcustom__Sequence__init(rm_ros_interfaces__msg__Carteposcustom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Carteposcustom * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Carteposcustom *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Carteposcustom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Carteposcustom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Carteposcustom__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_ros_interfaces__msg__Carteposcustom__Sequence__fini(rm_ros_interfaces__msg__Carteposcustom__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_ros_interfaces__msg__Carteposcustom__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_ros_interfaces__msg__Carteposcustom__Sequence *
rm_ros_interfaces__msg__Carteposcustom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Carteposcustom__Sequence * array = (rm_ros_interfaces__msg__Carteposcustom__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Carteposcustom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Carteposcustom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Carteposcustom__Sequence__destroy(rm_ros_interfaces__msg__Carteposcustom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Carteposcustom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Carteposcustom__Sequence__are_equal(const rm_ros_interfaces__msg__Carteposcustom__Sequence * lhs, const rm_ros_interfaces__msg__Carteposcustom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Carteposcustom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Carteposcustom__Sequence__copy(
  const rm_ros_interfaces__msg__Carteposcustom__Sequence * input,
  rm_ros_interfaces__msg__Carteposcustom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Carteposcustom);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Carteposcustom * data =
      (rm_ros_interfaces__msg__Carteposcustom *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Carteposcustom__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Carteposcustom__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Carteposcustom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
