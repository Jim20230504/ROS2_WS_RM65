# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/Rmplusstate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'dof_state'
# Member 'dof_err'
# Member 'pos'
# Member 'speed'
# Member 'angle'
# Member 'current'
# Member 'normal_force'
# Member 'tangential_force'
# Member 'tangential_force_dir'
# Member 'tsa'
# Member 'tma'
# Member 'touch_data'
# Member 'force'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rmplusstate(type):
    """Metaclass of message 'Rmplusstate'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rm_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rm_ros_interfaces.msg.Rmplusstate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rmplusstate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rmplusstate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rmplusstate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rmplusstate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rmplusstate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rmplusstate(metaclass=Metaclass_Rmplusstate):
    """Message class 'Rmplusstate'."""

    __slots__ = [
        '_sys_state',
        '_dof_state',
        '_dof_err',
        '_pos',
        '_speed',
        '_angle',
        '_current',
        '_normal_force',
        '_tangential_force',
        '_tangential_force_dir',
        '_tsa',
        '_tma',
        '_touch_data',
        '_force',
    ]

    _fields_and_field_types = {
        'sys_state': 'int32',
        'dof_state': 'int32[12]',
        'dof_err': 'int32[12]',
        'pos': 'int32[12]',
        'speed': 'int32[12]',
        'angle': 'int32[12]',
        'current': 'int32[12]',
        'normal_force': 'int32[18]',
        'tangential_force': 'int32[18]',
        'tangential_force_dir': 'int32[18]',
        'tsa': 'uint32[12]',
        'tma': 'uint32[12]',
        'touch_data': 'int32[18]',
        'force': 'int32[12]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 18),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 18),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 18),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 18),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sys_state = kwargs.get('sys_state', int())
        if 'dof_state' not in kwargs:
            self.dof_state = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.dof_state = kwargs.get('dof_state')
        if 'dof_err' not in kwargs:
            self.dof_err = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.dof_err = kwargs.get('dof_err')
        if 'pos' not in kwargs:
            self.pos = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.pos = kwargs.get('pos')
        if 'speed' not in kwargs:
            self.speed = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.speed = kwargs.get('speed')
        if 'angle' not in kwargs:
            self.angle = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.angle = kwargs.get('angle')
        if 'current' not in kwargs:
            self.current = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.current = kwargs.get('current')
        if 'normal_force' not in kwargs:
            self.normal_force = numpy.zeros(18, dtype=numpy.int32)
        else:
            self.normal_force = kwargs.get('normal_force')
        if 'tangential_force' not in kwargs:
            self.tangential_force = numpy.zeros(18, dtype=numpy.int32)
        else:
            self.tangential_force = kwargs.get('tangential_force')
        if 'tangential_force_dir' not in kwargs:
            self.tangential_force_dir = numpy.zeros(18, dtype=numpy.int32)
        else:
            self.tangential_force_dir = kwargs.get('tangential_force_dir')
        if 'tsa' not in kwargs:
            self.tsa = numpy.zeros(12, dtype=numpy.uint32)
        else:
            self.tsa = kwargs.get('tsa')
        if 'tma' not in kwargs:
            self.tma = numpy.zeros(12, dtype=numpy.uint32)
        else:
            self.tma = kwargs.get('tma')
        if 'touch_data' not in kwargs:
            self.touch_data = numpy.zeros(18, dtype=numpy.int32)
        else:
            self.touch_data = kwargs.get('touch_data')
        if 'force' not in kwargs:
            self.force = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.force = kwargs.get('force')

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.sys_state != other.sys_state:
            return False
        if any(self.dof_state != other.dof_state):
            return False
        if any(self.dof_err != other.dof_err):
            return False
        if any(self.pos != other.pos):
            return False
        if any(self.speed != other.speed):
            return False
        if any(self.angle != other.angle):
            return False
        if any(self.current != other.current):
            return False
        if any(self.normal_force != other.normal_force):
            return False
        if any(self.tangential_force != other.tangential_force):
            return False
        if any(self.tangential_force_dir != other.tangential_force_dir):
            return False
        if any(self.tsa != other.tsa):
            return False
        if any(self.tma != other.tma):
            return False
        if any(self.touch_data != other.touch_data):
            return False
        if any(self.force != other.force):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sys_state(self):
        """Message field 'sys_state'."""
        return self._sys_state

    @sys_state.setter
    def sys_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sys_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sys_state' field must be an integer in [-2147483648, 2147483647]"
        self._sys_state = value

    @builtins.property
    def dof_state(self):
        """Message field 'dof_state'."""
        return self._dof_state

    @dof_state.setter
    def dof_state(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'dof_state' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'dof_state' numpy.ndarray() must have a size of 12"
            self._dof_state = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'dof_state' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._dof_state = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def dof_err(self):
        """Message field 'dof_err'."""
        return self._dof_err

    @dof_err.setter
    def dof_err(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'dof_err' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'dof_err' numpy.ndarray() must have a size of 12"
            self._dof_err = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'dof_err' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._dof_err = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'pos' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'pos' numpy.ndarray() must have a size of 12"
            self._pos = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'pos' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._pos = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'speed' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'speed' numpy.ndarray() must have a size of 12"
            self._speed = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'speed' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._speed = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'angle' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'angle' numpy.ndarray() must have a size of 12"
            self._angle = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'angle' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._angle = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'current' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'current' numpy.ndarray() must have a size of 12"
            self._current = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'current' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._current = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def normal_force(self):
        """Message field 'normal_force'."""
        return self._normal_force

    @normal_force.setter
    def normal_force(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'normal_force' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 18, \
                "The 'normal_force' numpy.ndarray() must have a size of 18"
            self._normal_force = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 18 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'normal_force' field must be a set or sequence with length 18 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._normal_force = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def tangential_force(self):
        """Message field 'tangential_force'."""
        return self._tangential_force

    @tangential_force.setter
    def tangential_force(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'tangential_force' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 18, \
                "The 'tangential_force' numpy.ndarray() must have a size of 18"
            self._tangential_force = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 18 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'tangential_force' field must be a set or sequence with length 18 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._tangential_force = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def tangential_force_dir(self):
        """Message field 'tangential_force_dir'."""
        return self._tangential_force_dir

    @tangential_force_dir.setter
    def tangential_force_dir(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'tangential_force_dir' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 18, \
                "The 'tangential_force_dir' numpy.ndarray() must have a size of 18"
            self._tangential_force_dir = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 18 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'tangential_force_dir' field must be a set or sequence with length 18 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._tangential_force_dir = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def tsa(self):
        """Message field 'tsa'."""
        return self._tsa

    @tsa.setter
    def tsa(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'tsa' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 12, \
                "The 'tsa' numpy.ndarray() must have a size of 12"
            self._tsa = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'tsa' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._tsa = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def tma(self):
        """Message field 'tma'."""
        return self._tma

    @tma.setter
    def tma(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'tma' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 12, \
                "The 'tma' numpy.ndarray() must have a size of 12"
            self._tma = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'tma' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._tma = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def touch_data(self):
        """Message field 'touch_data'."""
        return self._touch_data

    @touch_data.setter
    def touch_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'touch_data' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 18, \
                "The 'touch_data' numpy.ndarray() must have a size of 18"
            self._touch_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 18 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'touch_data' field must be a set or sequence with length 18 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._touch_data = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def force(self):
        """Message field 'force'."""
        return self._force

    @force.setter
    def force(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'force' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'force' numpy.ndarray() must have a size of 12"
            self._force = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'force' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._force = numpy.array(value, dtype=numpy.int32)
