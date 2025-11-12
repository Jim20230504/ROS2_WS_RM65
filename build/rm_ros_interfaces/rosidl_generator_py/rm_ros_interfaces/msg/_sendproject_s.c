// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_ros_interfaces:msg/Sendproject.idl
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
#include "rm_ros_interfaces/msg/detail/sendproject__struct.h"
#include "rm_ros_interfaces/msg/detail/sendproject__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rm_ros_interfaces__msg__sendproject__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("rm_ros_interfaces.msg._sendproject.Sendproject", full_classname_dest, 46) == 0);
  }
  rm_ros_interfaces__msg__Sendproject * ros_message = _ros_message;
  {  // project_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "project_path");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->project_path, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // project_path_len
    PyObject * field = PyObject_GetAttrString(_pymsg, "project_path_len");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->project_path_len = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plan_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plan_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // only_save
    PyObject * field = PyObject_GetAttrString(_pymsg, "only_save");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->only_save = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // save_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "save_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->save_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // step_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->step_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // auto_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_start");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_start = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // project_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "project_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->project_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_ros_interfaces__msg__sendproject__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Sendproject */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_ros_interfaces.msg._sendproject");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Sendproject");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_ros_interfaces__msg__Sendproject * ros_message = (rm_ros_interfaces__msg__Sendproject *)raw_ros_message;
  {  // project_path
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->project_path.data,
      strlen(ros_message->project_path.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "project_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // project_path_len
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->project_path_len);
    {
      int rc = PyObject_SetAttrString(_pymessage, "project_path_len", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plan_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // only_save
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->only_save);
    {
      int rc = PyObject_SetAttrString(_pymessage, "only_save", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // save_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->save_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "save_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->step_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_start
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->auto_start);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // project_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->project_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "project_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
