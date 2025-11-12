// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Modbusrtuwriteparams.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/modbusrtuwriteparams__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rm_ros_interfaces__msg__Modbusrtuwriteparams__init(rm_ros_interfaces__msg__Modbusrtuwriteparams * msg)
{
  if (!msg) {
    return false;
  }
  // address
  // device
  // type
  // num
  // data
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->data, 0)) {
    rm_ros_interfaces__msg__Modbusrtuwriteparams__fini(msg);
    return false;
  }
  return true;
}

void
rm_ros_interfaces__msg__Modbusrtuwriteparams__fini(rm_ros_interfaces__msg__Modbusrtuwriteparams * msg)
{
  if (!msg) {
    return;
  }
  // address
  // device
  // type
  // num
  // data
  rosidl_runtime_c__int32__Sequence__fini(&msg->data);
}

bool
rm_ros_interfaces__msg__Modbusrtuwriteparams__are_equal(const rm_ros_interfaces__msg__Modbusrtuwriteparams * lhs, const rm_ros_interfaces__msg__Modbusrtuwriteparams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // address
  if (lhs->address != rhs->address) {
    return false;
  }
  // device
  if (lhs->device != rhs->device) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Modbusrtuwriteparams__copy(
  const rm_ros_interfaces__msg__Modbusrtuwriteparams * input,
  rm_ros_interfaces__msg__Modbusrtuwriteparams * output)
{
  if (!input || !output) {
    return false;
  }
  // address
  output->address = input->address;
  // device
  output->device = input->device;
  // type
  output->type = input->type;
  // num
  output->num = input->num;
  // data
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

rm_ros_interfaces__msg__Modbusrtuwriteparams *
rm_ros_interfaces__msg__Modbusrtuwriteparams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Modbusrtuwriteparams * msg = (rm_ros_interfaces__msg__Modbusrtuwriteparams *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Modbusrtuwriteparams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Modbusrtuwriteparams));
  bool success = rm_ros_interfaces__msg__Modbusrtuwriteparams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Modbusrtuwriteparams__destroy(rm_ros_interfaces__msg__Modbusrtuwriteparams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Modbusrtuwriteparams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence__init(rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Modbusrtuwriteparams * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Modbusrtuwriteparams *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Modbusrtuwriteparams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Modbusrtuwriteparams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Modbusrtuwriteparams__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence__fini(rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence * array)
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
      rm_ros_interfaces__msg__Modbusrtuwriteparams__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence *
rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence * array = (rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence__destroy(rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence__are_equal(const rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence * lhs, const rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Modbusrtuwriteparams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence__copy(
  const rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence * input,
  rm_ros_interfaces__msg__Modbusrtuwriteparams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Modbusrtuwriteparams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Modbusrtuwriteparams * data =
      (rm_ros_interfaces__msg__Modbusrtuwriteparams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Modbusrtuwriteparams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Modbusrtuwriteparams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Modbusrtuwriteparams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
