# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/Rmplusbase.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'pos_up'
# Member 'pos_low'
# Member 'angle_up'
# Member 'angle_low'
# Member 'speed_up'
# Member 'speed_low'
# Member 'force_up'
# Member 'force_low'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rmplusbase(type):
    """Metaclass of message 'Rmplusbase'."""

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
                'rm_ros_interfaces.msg.Rmplusbase')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rmplusbase
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rmplusbase
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rmplusbase
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rmplusbase
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rmplusbase

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rmplusbase(metaclass=Metaclass_Rmplusbase):
    """Message class 'Rmplusbase'."""

    __slots__ = [
        '_manu',
        '_type',
        '_hv',
        '_sv',
        '_bv',
        '_id',
        '_dof',
        '_check',
        '_bee',
        '_force',
        '_touch',
        '_touch_num',
        '_touch_sw',
        '_hand',
        '_pos_up',
        '_pos_low',
        '_angle_up',
        '_angle_low',
        '_speed_up',
        '_speed_low',
        '_force_up',
        '_force_low',
    ]

    _fields_and_field_types = {
        'manu': 'string',
        'type': 'int8',
        'hv': 'string',
        'sv': 'string',
        'bv': 'string',
        'id': 'int32',
        'dof': 'int8',
        'check': 'int8',
        'bee': 'int8',
        'force': 'boolean',
        'touch': 'boolean',
        'touch_num': 'int8',
        'touch_sw': 'int8',
        'hand': 'int8',
        'pos_up': 'int32[12]',
        'pos_low': 'int32[12]',
        'angle_up': 'int32[12]',
        'angle_low': 'int32[12]',
        'speed_up': 'int32[12]',
        'speed_low': 'int32[12]',
        'force_up': 'int32[12]',
        'force_low': 'int32[12]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.manu = kwargs.get('manu', str())
        self.type = kwargs.get('type', int())
        self.hv = kwargs.get('hv', str())
        self.sv = kwargs.get('sv', str())
        self.bv = kwargs.get('bv', str())
        self.id = kwargs.get('id', int())
        self.dof = kwargs.get('dof', int())
        self.check = kwargs.get('check', int())
        self.bee = kwargs.get('bee', int())
        self.force = kwargs.get('force', bool())
        self.touch = kwargs.get('touch', bool())
        self.touch_num = kwargs.get('touch_num', int())
        self.touch_sw = kwargs.get('touch_sw', int())
        self.hand = kwargs.get('hand', int())
        if 'pos_up' not in kwargs:
            self.pos_up = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.pos_up = kwargs.get('pos_up')
        if 'pos_low' not in kwargs:
            self.pos_low = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.pos_low = kwargs.get('pos_low')
        if 'angle_up' not in kwargs:
            self.angle_up = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.angle_up = kwargs.get('angle_up')
        if 'angle_low' not in kwargs:
            self.angle_low = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.angle_low = kwargs.get('angle_low')
        if 'speed_up' not in kwargs:
            self.speed_up = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.speed_up = kwargs.get('speed_up')
        if 'speed_low' not in kwargs:
            self.speed_low = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.speed_low = kwargs.get('speed_low')
        if 'force_up' not in kwargs:
            self.force_up = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.force_up = kwargs.get('force_up')
        if 'force_low' not in kwargs:
            self.force_low = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.force_low = kwargs.get('force_low')

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
        if self.manu != other.manu:
            return False
        if self.type != other.type:
            return False
        if self.hv != other.hv:
            return False
        if self.sv != other.sv:
            return False
        if self.bv != other.bv:
            return False
        if self.id != other.id:
            return False
        if self.dof != other.dof:
            return False
        if self.check != other.check:
            return False
        if self.bee != other.bee:
            return False
        if self.force != other.force:
            return False
        if self.touch != other.touch:
            return False
        if self.touch_num != other.touch_num:
            return False
        if self.touch_sw != other.touch_sw:
            return False
        if self.hand != other.hand:
            return False
        if any(self.pos_up != other.pos_up):
            return False
        if any(self.pos_low != other.pos_low):
            return False
        if any(self.angle_up != other.angle_up):
            return False
        if any(self.angle_low != other.angle_low):
            return False
        if any(self.speed_up != other.speed_up):
            return False
        if any(self.speed_low != other.speed_low):
            return False
        if any(self.force_up != other.force_up):
            return False
        if any(self.force_low != other.force_low):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def manu(self):
        """Message field 'manu'."""
        return self._manu

    @manu.setter
    def manu(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'manu' field must be of type 'str'"
        self._manu = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'type' field must be an integer in [-128, 127]"
        self._type = value

    @builtins.property
    def hv(self):
        """Message field 'hv'."""
        return self._hv

    @hv.setter
    def hv(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hv' field must be of type 'str'"
        self._hv = value

    @builtins.property
    def sv(self):
        """Message field 'sv'."""
        return self._sv

    @sv.setter
    def sv(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sv' field must be of type 'str'"
        self._sv = value

    @builtins.property
    def bv(self):
        """Message field 'bv'."""
        return self._bv

    @bv.setter
    def bv(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bv' field must be of type 'str'"
        self._bv = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def dof(self):
        """Message field 'dof'."""
        return self._dof

    @dof.setter
    def dof(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dof' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'dof' field must be an integer in [-128, 127]"
        self._dof = value

    @builtins.property
    def check(self):
        """Message field 'check'."""
        return self._check

    @check.setter
    def check(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'check' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'check' field must be an integer in [-128, 127]"
        self._check = value

    @builtins.property
    def bee(self):
        """Message field 'bee'."""
        return self._bee

    @bee.setter
    def bee(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bee' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'bee' field must be an integer in [-128, 127]"
        self._bee = value

    @builtins.property
    def force(self):
        """Message field 'force'."""
        return self._force

    @force.setter
    def force(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force' field must be of type 'bool'"
        self._force = value

    @builtins.property
    def touch(self):
        """Message field 'touch'."""
        return self._touch

    @touch.setter
    def touch(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'touch' field must be of type 'bool'"
        self._touch = value

    @builtins.property
    def touch_num(self):
        """Message field 'touch_num'."""
        return self._touch_num

    @touch_num.setter
    def touch_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'touch_num' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'touch_num' field must be an integer in [-128, 127]"
        self._touch_num = value

    @builtins.property
    def touch_sw(self):
        """Message field 'touch_sw'."""
        return self._touch_sw

    @touch_sw.setter
    def touch_sw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'touch_sw' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'touch_sw' field must be an integer in [-128, 127]"
        self._touch_sw = value

    @builtins.property
    def hand(self):
        """Message field 'hand'."""
        return self._hand

    @hand.setter
    def hand(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hand' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'hand' field must be an integer in [-128, 127]"
        self._hand = value

    @builtins.property
    def pos_up(self):
        """Message field 'pos_up'."""
        return self._pos_up

    @pos_up.setter
    def pos_up(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'pos_up' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'pos_up' numpy.ndarray() must have a size of 12"
            self._pos_up = value
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
                "The 'pos_up' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._pos_up = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def pos_low(self):
        """Message field 'pos_low'."""
        return self._pos_low

    @pos_low.setter
    def pos_low(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'pos_low' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'pos_low' numpy.ndarray() must have a size of 12"
            self._pos_low = value
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
                "The 'pos_low' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._pos_low = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def angle_up(self):
        """Message field 'angle_up'."""
        return self._angle_up

    @angle_up.setter
    def angle_up(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'angle_up' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'angle_up' numpy.ndarray() must have a size of 12"
            self._angle_up = value
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
                "The 'angle_up' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._angle_up = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def angle_low(self):
        """Message field 'angle_low'."""
        return self._angle_low

    @angle_low.setter
    def angle_low(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'angle_low' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'angle_low' numpy.ndarray() must have a size of 12"
            self._angle_low = value
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
                "The 'angle_low' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._angle_low = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def speed_up(self):
        """Message field 'speed_up'."""
        return self._speed_up

    @speed_up.setter
    def speed_up(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'speed_up' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'speed_up' numpy.ndarray() must have a size of 12"
            self._speed_up = value
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
                "The 'speed_up' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._speed_up = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def speed_low(self):
        """Message field 'speed_low'."""
        return self._speed_low

    @speed_low.setter
    def speed_low(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'speed_low' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'speed_low' numpy.ndarray() must have a size of 12"
            self._speed_low = value
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
                "The 'speed_low' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._speed_low = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def force_up(self):
        """Message field 'force_up'."""
        return self._force_up

    @force_up.setter
    def force_up(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'force_up' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'force_up' numpy.ndarray() must have a size of 12"
            self._force_up = value
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
                "The 'force_up' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._force_up = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def force_low(self):
        """Message field 'force_low'."""
        return self._force_low

    @force_low.setter
    def force_low(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'force_low' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'force_low' numpy.ndarray() must have a size of 12"
            self._force_low = value
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
                "The 'force_low' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._force_low = numpy.array(value, dtype=numpy.int32)
