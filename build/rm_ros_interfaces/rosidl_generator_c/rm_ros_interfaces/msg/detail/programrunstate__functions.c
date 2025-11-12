// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Programrunstate.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/programrunstate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `loop_num`
// Member `loop_cont`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rm_ros_interfaces__msg__Programrunstate__init(rm_ros_interfaces__msg__Programrunstate * msg)
{
  if (!msg) {
    return false;
  }
  // run_state
  // id
  // edit_id
  // plan_num
  // total_loop
  // step_mode
  // plan_speed
  // loop_num
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->loop_num, 0)) {
    rm_ros_interfaces__msg__Programrunstate__fini(msg);
    return false;
  }
  // loop_cont
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->loop_cont, 0)) {
    rm_ros_interfaces__msg__Programrunstate__fini(msg);
    return false;
  }
  // state
  return true;
}

void
rm_ros_interfaces__msg__Programrunstate__fini(rm_ros_interfaces__msg__Programrunstate * msg)
{
  if (!msg) {
    return;
  }
  // run_state
  // id
  // edit_id
  // plan_num
  // total_loop
  // step_mode
  // plan_speed
  // loop_num
  rosidl_runtime_c__int32__Sequence__fini(&msg->loop_num);
  // loop_cont
  rosidl_runtime_c__int32__Sequence__fini(&msg->loop_cont);
  // state
}

bool
rm_ros_interfaces__msg__Programrunstate__are_equal(const rm_ros_interfaces__msg__Programrunstate * lhs, const rm_ros_interfaces__msg__Programrunstate * rhs)
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
  // edit_id
  if (lhs->edit_id != rhs->edit_id) {
    return false;
  }
  // plan_num
  if (lhs->plan_num != rhs->plan_num) {
    return false;
  }
  // total_loop
  if (lhs->total_loop != rhs->total_loop) {
    return false;
  }
  // step_mode
  if (lhs->step_mode != rhs->step_mode) {
    return false;
  }
  // plan_speed
  if (lhs->plan_speed != rhs->plan_speed) {
    return false;
  }
  // loop_num
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->loop_num), &(rhs->loop_num)))
  {
    return false;
  }
  // loop_cont
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->loop_cont), &(rhs->loop_cont)))
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
rm_ros_interfaces__msg__Programrunstate__copy(
  const rm_ros_interfaces__msg__Programrunstate * input,
  rm_ros_interfaces__msg__Programrunstate * output)
{
  if (!input || !output) {
    return false;
  }
  // run_state
  output->run_state = input->run_state;
  // id
  output->id = input->id;
  // edit_id
  output->edit_id = input->edit_id;
  // plan_num
  output->plan_num = input->plan_num;
  // total_loop
  output->total_loop = input->total_loop;
  // step_mode
  output->step_mode = input->step_mode;
  // plan_speed
  output->plan_speed = input->plan_speed;
  // loop_num
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->loop_num), &(output->loop_num)))
  {
    return false;
  }
  // loop_cont
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->loop_cont), &(output->loop_cont)))
  {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

rm_ros_interfaces__msg__Programrunstate *
rm_ros_interfaces__msg__Programrunstate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Programrunstate * msg = (rm_ros_interfaces__msg__Programrunstate *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Programrunstate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Programrunstate));
  bool success = rm_ros_interfaces__msg__Programrunstate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Programrunstate__destroy(rm_ros_interfaces__msg__Programrunstate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Programrunstate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Programrunstate__Sequence__init(rm_ros_interfaces__msg__Programrunstate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Programrunstate * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Programrunstate *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Programrunstate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Programrunstate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Programrunstate__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Programrunstate__Sequence__fini(rm_ros_interfaces__msg__Programrunstate__Sequence * array)
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
      rm_ros_interfaces__msg__Programrunstate__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Programrunstate__Sequence *
rm_ros_interfaces__msg__Programrunstate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Programrunstate__Sequence * array = (rm_ros_interfaces__msg__Programrunstate__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Programrunstate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Programrunstate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Programrunstate__Sequence__destroy(rm_ros_interfaces__msg__Programrunstate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Programrunstate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Programrunstate__Sequence__are_equal(const rm_ros_interfaces__msg__Programrunstate__Sequence * lhs, const rm_ros_interfaces__msg__Programrunstate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Programrunstate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Programrunstate__Sequence__copy(
  const rm_ros_interfaces__msg__Programrunstate__Sequence * input,
  rm_ros_interfaces__msg__Programrunstate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Programrunstate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Programrunstate * data =
      (rm_ros_interfaces__msg__Programrunstate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Programrunstate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Programrunstate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Programrunstate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
