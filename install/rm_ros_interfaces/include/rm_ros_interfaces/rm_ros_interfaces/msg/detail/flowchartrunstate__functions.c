// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Flowchartrunstate.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/flowchartrunstate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `modal_id`
#include "rosidl_runtime_c/string_functions.h"

bool
rm_ros_interfaces__msg__Flowchartrunstate__init(rm_ros_interfaces__msg__Flowchartrunstate * msg)
{
  if (!msg) {
    return false;
  }
  // run_state
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rm_ros_interfaces__msg__Flowchartrunstate__fini(msg);
    return false;
  }
  // plan_speed
  // step_mode
  // modal_id
  if (!rosidl_runtime_c__String__init(&msg->modal_id)) {
    rm_ros_interfaces__msg__Flowchartrunstate__fini(msg);
    return false;
  }
  // state
  return true;
}

void
rm_ros_interfaces__msg__Flowchartrunstate__fini(rm_ros_interfaces__msg__Flowchartrunstate * msg)
{
  if (!msg) {
    return;
  }
  // run_state
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // plan_speed
  // step_mode
  // modal_id
  rosidl_runtime_c__String__fini(&msg->modal_id);
  // state
}

bool
rm_ros_interfaces__msg__Flowchartrunstate__are_equal(const rm_ros_interfaces__msg__Flowchartrunstate * lhs, const rm_ros_interfaces__msg__Flowchartrunstate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // run_state
  if (lhs->run_state != rhs->run_state) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // plan_speed
  if (lhs->plan_speed != rhs->plan_speed) {
    return false;
  }
  // step_mode
  if (lhs->step_mode != rhs->step_mode) {
    return false;
  }
  // modal_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->modal_id), &(rhs->modal_id)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Flowchartrunstate__copy(
  const rm_ros_interfaces__msg__Flowchartrunstate * input,
  rm_ros_interfaces__msg__Flowchartrunstate * output)
{
  if (!input || !output) {
    return false;
  }
  // run_state
  output->run_state = input->run_state;
  // id
  output->id = input->id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // plan_speed
  output->plan_speed = input->plan_speed;
  // step_mode
  output->step_mode = input->step_mode;
  // modal_id
  if (!rosidl_runtime_c__String__copy(
      &(input->modal_id), &(output->modal_id)))
  {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

rm_ros_interfaces__msg__Flowchartrunstate *
rm_ros_interfaces__msg__Flowchartrunstate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Flowchartrunstate * msg = (rm_ros_interfaces__msg__Flowchartrunstate *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Flowchartrunstate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Flowchartrunstate));
  bool success = rm_ros_interfaces__msg__Flowchartrunstate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Flowchartrunstate__destroy(rm_ros_interfaces__msg__Flowchartrunstate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Flowchartrunstate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Flowchartrunstate__Sequence__init(rm_ros_interfaces__msg__Flowchartrunstate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Flowchartrunstate * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Flowchartrunstate *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Flowchartrunstate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Flowchartrunstate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Flowchartrunstate__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Flowchartrunstate__Sequence__fini(rm_ros_interfaces__msg__Flowchartrunstate__Sequence * array)
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
      rm_ros_interfaces__msg__Flowchartrunstate__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Flowchartrunstate__Sequence *
rm_ros_interfaces__msg__Flowchartrunstate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Flowchartrunstate__Sequence * array = (rm_ros_interfaces__msg__Flowchartrunstate__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Flowchartrunstate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Flowchartrunstate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Flowchartrunstate__Sequence__destroy(rm_ros_interfaces__msg__Flowchartrunstate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Flowchartrunstate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Flowchartrunstate__Sequence__are_equal(const rm_ros_interfaces__msg__Flowchartrunstate__Sequence * lhs, const rm_ros_interfaces__msg__Flowchartrunstate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Flowchartrunstate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Flowchartrunstate__Sequence__copy(
  const rm_ros_interfaces__msg__Flowchartrunstate__Sequence * input,
  rm_ros_interfaces__msg__Flowchartrunstate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Flowchartrunstate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Flowchartrunstate * data =
      (rm_ros_interfaces__msg__Flowchartrunstate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Flowchartrunstate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Flowchartrunstate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Flowchartrunstate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
