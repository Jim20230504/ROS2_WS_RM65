// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Moveloffset.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/moveloffset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
rm_ros_interfaces__msg__Moveloffset__init(rm_ros_interfaces__msg__Moveloffset * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    rm_ros_interfaces__msg__Moveloffset__fini(msg);
    return false;
  }
  // speed
  // r
  // trajectory_connect
  // frame_type
  // block
  return true;
}

void
rm_ros_interfaces__msg__Moveloffset__fini(rm_ros_interfaces__msg__Moveloffset * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // speed
  // r
  // trajectory_connect
  // frame_type
  // block
}

bool
rm_ros_interfaces__msg__Moveloffset__are_equal(const rm_ros_interfaces__msg__Moveloffset * lhs, const rm_ros_interfaces__msg__Moveloffset * rhs)
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
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // trajectory_connect
  if (lhs->trajectory_connect != rhs->trajectory_connect) {
    return false;
  }
  // frame_type
  if (lhs->frame_type != rhs->frame_type) {
    return false;
  }
  // block
  if (lhs->block != rhs->block) {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Moveloffset__copy(
  const rm_ros_interfaces__msg__Moveloffset * input,
  rm_ros_interfaces__msg__Moveloffset * output)
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
  // speed
  output->speed = input->speed;
  // r
  output->r = input->r;
  // trajectory_connect
  output->trajectory_connect = input->trajectory_connect;
  // frame_type
  output->frame_type = input->frame_type;
  // block
  output->block = input->block;
  return true;
}

rm_ros_interfaces__msg__Moveloffset *
rm_ros_interfaces__msg__Moveloffset__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Moveloffset * msg = (rm_ros_interfaces__msg__Moveloffset *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Moveloffset), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Moveloffset));
  bool success = rm_ros_interfaces__msg__Moveloffset__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Moveloffset__destroy(rm_ros_interfaces__msg__Moveloffset * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Moveloffset__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Moveloffset__Sequence__init(rm_ros_interfaces__msg__Moveloffset__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Moveloffset * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Moveloffset *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Moveloffset), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Moveloffset__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Moveloffset__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Moveloffset__Sequence__fini(rm_ros_interfaces__msg__Moveloffset__Sequence * array)
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
      rm_ros_interfaces__msg__Moveloffset__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Moveloffset__Sequence *
rm_ros_interfaces__msg__Moveloffset__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Moveloffset__Sequence * array = (rm_ros_interfaces__msg__Moveloffset__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Moveloffset__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Moveloffset__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Moveloffset__Sequence__destroy(rm_ros_interfaces__msg__Moveloffset__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Moveloffset__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Moveloffset__Sequence__are_equal(const rm_ros_interfaces__msg__Moveloffset__Sequence * lhs, const rm_ros_interfaces__msg__Moveloffset__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Moveloffset__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Moveloffset__Sequence__copy(
  const rm_ros_interfaces__msg__Moveloffset__Sequence * input,
  rm_ros_interfaces__msg__Moveloffset__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Moveloffset);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Moveloffset * data =
      (rm_ros_interfaces__msg__Moveloffset *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Moveloffset__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Moveloffset__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Moveloffset__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
