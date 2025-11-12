// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_ros_interfaces:msg/Trajectorylist.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rm_ros_interfaces/msg/detail/trajectorylist__struct.h"
#include "rm_ros_interfaces/msg/detail/trajectorylist__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rm_ros_interfaces/msg/detail/trajectoryinfo__functions.h"
// end nested array functions include
bool rm_ros_interfaces__msg__trajectoryinfo__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rm_ros_interfaces__msg__trajectoryinfo__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rm_ros_interfaces__msg__trajectorylist__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rm_ros_interfaces.msg._trajectorylist.Trajectorylist", full_classname_dest, 52) == 0);
  }
  rm_ros_interfaces__msg__Trajectorylist * ros_message = _ros_message;
  {  // page_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "page_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->page_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // page_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "page_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->page_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // total_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vague_search
    PyObject * field = PyObject_GetAttrString(_pymsg, "vague_search");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vague_search, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // tra_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "tra_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tra_list'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rm_ros_interfaces__msg__Trajectoryinfo__Sequence__init(&(ros_message->tra_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rm_ros_interfaces__msg__Trajectoryinfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rm_ros_interfaces__msg__Trajectoryinfo * dest = ros_message->tra_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rm_ros_interfaces__msg__trajectoryinfo__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->state = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_ros_interfaces__msg__trajectorylist__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Trajectorylist */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_ros_interfaces.msg._trajectorylist");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Trajectorylist");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_ros_interfaces__msg__Trajectorylist * ros_message = (rm_ros_interfaces__msg__Trajectorylist *)raw_ros_message;
  {  // page_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->page_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "page_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // page_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->page_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "page_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->total_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vague_search
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vague_search.data,
      strlen(ros_message->vague_search.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vague_search", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tra_list
    PyObject * field = NULL;
    size_t size = ros_message->tra_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rm_ros_interfaces__msg__Trajectoryinfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tra_list.data[i]);
      PyObject * pyitem = rm_ros_interfaces__msg__trajectoryinfo__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "tra_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
