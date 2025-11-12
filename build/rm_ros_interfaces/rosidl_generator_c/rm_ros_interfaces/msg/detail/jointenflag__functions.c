// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Jointenflag.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/jointenflag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_en_flag`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rm_ros_interfaces__msg__Jointenflag__init(rm_ros_interfaces__msg__Jointenflag * msg)
{
  if (!msg) {
    return false;
  }
  // joint_en_flag
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->joint_en_flag, 0)) {
    rm_ros_interfaces__msg__Jointenflag__fini(msg);
    return false;
  }
  return true;
}

void
rm_ros_interfaces__msg__Jointenflag__fini(rm_ros_interfaces__msg__Jointenflag * msg)
{
  if (!msg) {
    return;
  }
  // joint_en_flag
  rosidl_runtime_c__boolean__Sequence__fini(&msg->joint_en_flag);
}

bool
rm_ros_interfaces__msg__Jointenflag__are_equal(const rm_ros_interfaces__msg__Jointenflag * lhs, const rm_ros_interfaces__msg__Jointenflag * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_en_flag
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->joint_en_flag), &(rhs->joint_en_flag)))
  {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Jointenflag__copy(
  const rm_ros_interfaces__msg__Jointenflag * input,
  rm_ros_interfaces__msg__Jointenflag * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_en_flag
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->joint_en_flag), &(output->joint_en_flag)))
  {
    return false;
  }
  return true;
}

rm_ros_interfaces__msg__Jointenflag *
rm_ros_interfaces__msg__Jointenflag__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Jointenflag * msg = (rm_ros_interfaces__msg__Jointenflag *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Jointenflag), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Jointenflag));
  bool success = rm_ros_interfaces__msg__Jointenflag__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Jointenflag__destroy(rm_ros_interfaces__msg__Jointenflag * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Jointenflag__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Jointenflag__Sequence__init(rm_ros_interfaces__msg__Jointenflag__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Jointenflag * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Jointenflag *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Jointenflag), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Jointenflag__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Jointenflag__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Jointenflag__Sequence__fini(rm_ros_interfaces__msg__Jointenflag__Sequence * array)
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
      rm_ros_interfaces__msg__Jointenflag__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Jointenflag__Sequence *
rm_ros_interfaces__msg__Jointenflag__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Jointenflag__Sequence * array = (rm_ros_interfaces__msg__Jointenflag__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Jointenflag__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Jointenflag__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Jointenflag__Sequence__destroy(rm_ros_interfaces__msg__Jointenflag__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Jointenflag__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Jointenflag__Sequence__are_equal(const rm_ros_interfaces__msg__Jointenflag__Sequence * lhs, const rm_ros_interfaces__msg__Jointenflag__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Jointenflag__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Jointenflag__Sequence__copy(
  const rm_ros_interfaces__msg__Jointenflag__Sequence * input,
  rm_ros_interfaces__msg__Jointenflag__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Jointenflag);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Jointenflag * data =
      (rm_ros_interfaces__msg__Jointenflag *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Jointenflag__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Jointenflag__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Jointenflag__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
