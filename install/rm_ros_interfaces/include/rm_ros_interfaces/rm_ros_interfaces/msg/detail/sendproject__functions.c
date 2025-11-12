// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Sendproject.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/sendproject__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `project_path`
#include "rosidl_runtime_c/string_functions.h"

bool
rm_ros_interfaces__msg__Sendproject__init(rm_ros_interfaces__msg__Sendproject * msg)
{
  if (!msg) {
    return false;
  }
  // project_path
  if (!rosidl_runtime_c__String__init(&msg->project_path)) {
    rm_ros_interfaces__msg__Sendproject__fini(msg);
    return false;
  }
  // project_path_len
  // plan_speed
  // only_save
  // save_id
  // step_flag
  // auto_start
  // project_type
  return true;
}

void
rm_ros_interfaces__msg__Sendproject__fini(rm_ros_interfaces__msg__Sendproject * msg)
{
  if (!msg) {
    return;
  }
  // project_path
  rosidl_runtime_c__String__fini(&msg->project_path);
  // project_path_len
  // plan_speed
  // only_save
  // save_id
  // step_flag
  // auto_start
  // project_type
}

bool
rm_ros_interfaces__msg__Sendproject__are_equal(const rm_ros_interfaces__msg__Sendproject * lhs, const rm_ros_interfaces__msg__Sendproject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // project_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->project_path), &(rhs->project_path)))
  {
    return false;
  }
  // project_path_len
  if (lhs->project_path_len != rhs->project_path_len) {
    return false;
  }
  // plan_speed
  if (lhs->plan_speed != rhs->plan_speed) {
    return false;
  }
  // only_save
  if (lhs->only_save != rhs->only_save) {
    return false;
  }
  // save_id
  if (lhs->save_id != rhs->save_id) {
    return false;
  }
  // step_flag
  if (lhs->step_flag != rhs->step_flag) {
    return false;
  }
  // auto_start
  if (lhs->auto_start != rhs->auto_start) {
    return false;
  }
  // project_type
  if (lhs->project_type != rhs->project_type) {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Sendproject__copy(
  const rm_ros_interfaces__msg__Sendproject * input,
  rm_ros_interfaces__msg__Sendproject * output)
{
  if (!input || !output) {
    return false;
  }
  // project_path
  if (!rosidl_runtime_c__String__copy(
      &(input->project_path), &(output->project_path)))
  {
    return false;
  }
  // project_path_len
  output->project_path_len = input->project_path_len;
  // plan_speed
  output->plan_speed = input->plan_speed;
  // only_save
  output->only_save = input->only_save;
  // save_id
  output->save_id = input->save_id;
  // step_flag
  output->step_flag = input->step_flag;
  // auto_start
  output->auto_start = input->auto_start;
  // project_type
  output->project_type = input->project_type;
  return true;
}

rm_ros_interfaces__msg__Sendproject *
rm_ros_interfaces__msg__Sendproject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Sendproject * msg = (rm_ros_interfaces__msg__Sendproject *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Sendproject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Sendproject));
  bool success = rm_ros_interfaces__msg__Sendproject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Sendproject__destroy(rm_ros_interfaces__msg__Sendproject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Sendproject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Sendproject__Sequence__init(rm_ros_interfaces__msg__Sendproject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Sendproject * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Sendproject *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Sendproject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Sendproject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Sendproject__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Sendproject__Sequence__fini(rm_ros_interfaces__msg__Sendproject__Sequence * array)
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
      rm_ros_interfaces__msg__Sendproject__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Sendproject__Sequence *
rm_ros_interfaces__msg__Sendproject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Sendproject__Sequence * array = (rm_ros_interfaces__msg__Sendproject__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Sendproject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Sendproject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Sendproject__Sequence__destroy(rm_ros_interfaces__msg__Sendproject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Sendproject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Sendproject__Sequence__are_equal(const rm_ros_interfaces__msg__Sendproject__Sequence * lhs, const rm_ros_interfaces__msg__Sendproject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Sendproject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Sendproject__Sequence__copy(
  const rm_ros_interfaces__msg__Sendproject__Sequence * input,
  rm_ros_interfaces__msg__Sendproject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Sendproject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Sendproject * data =
      (rm_ros_interfaces__msg__Sendproject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Sendproject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Sendproject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Sendproject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
