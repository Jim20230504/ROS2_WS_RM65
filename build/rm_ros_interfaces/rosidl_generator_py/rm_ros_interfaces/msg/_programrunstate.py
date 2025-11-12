# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/Programrunstate.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'loop_num'
# Member 'loop_cont'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Programrunstate(type):
    """Metaclass of message 'Programrunstate'."""

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
                'rm_ros_interfaces.msg.Programrunstate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__programrunstate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__programrunstate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__programrunstate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__programrunstate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__programrunstate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Programrunstate(metaclass=Metaclass_Programrunstate):
    """Message class 'Programrunstate'."""

    __slots__ = [
        '_run_state',
        '_id',
        '_edit_id',
        '_plan_num',
        '_total_loop',
        '_step_mode',
        '_plan_speed',
        '_loop_num',
        '_loop_cont',
        '_state',
    ]

    _fields_and_field_types = {
        'run_state': 'int32',
        'id': 'int32',
        'edit_id': 'int32',
        'plan_num': 'int32',
        'total_loop': 'int32',
        'step_mode': 'int32',
        'plan_speed': 'int32',
        'loop_num': 'sequence<int32>',
        'loop_cont': 'sequence<int32>',
        'state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.run_state = kwargs.get('run_state', int())
        self.id = kwargs.get('id', int())
        self.edit_id = kwargs.get('edit_id', int())
        self.plan_num = kwargs.get('plan_num', int())
        self.total_loop = kwargs.get('total_loop', int())
        self.step_mode = kwargs.get('step_mode', int())
        self.plan_speed = kwargs.get('plan_speed', int())
        self.loop_num = array.array('i', kwargs.get('loop_num', []))
        self.loop_cont = array.array('i', kwargs.get('loop_cont', []))
        self.state = kwargs.get('state', bool())

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
        if self.run_state != other.run_state:
            return False
        if self.id != other.id:
            return False
        if self.edit_id != other.edit_id:
            return False
        if self.plan_num != other.plan_num:
            return False
        if self.total_loop != other.total_loop:
            return False
        if self.step_mode != other.step_mode:
            return False
        if self.plan_speed != other.plan_speed:
            return False
        if self.loop_num != other.loop_num:
            return False
        if self.loop_cont != other.loop_cont:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def run_state(self):
        """Message field 'run_state'."""
        return self._run_state

    @run_state.setter
    def run_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'run_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'run_state' field must be an integer in [-2147483648, 2147483647]"
        self._run_state = value

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
    def edit_id(self):
        """Message field 'edit_id'."""
        return self._edit_id

    @edit_id.setter
    def edit_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'edit_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'edit_id' field must be an integer in [-2147483648, 2147483647]"
        self._edit_id = value

    @builtins.property
    def plan_num(self):
        """Message field 'plan_num'."""
        return self._plan_num

    @plan_num.setter
    def plan_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plan_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plan_num' field must be an integer in [-2147483648, 2147483647]"
        self._plan_num = value

    @builtins.property
    def total_loop(self):
        """Message field 'total_loop'."""
        return self._total_loop

    @total_loop.setter
    def total_loop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_loop' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_loop' field must be an integer in [-2147483648, 2147483647]"
        self._total_loop = value

    @builtins.property
    def step_mode(self):
        """Message field 'step_mode'."""
        return self._step_mode

    @step_mode.setter
    def step_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'step_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'step_mode' field must be an integer in [-2147483648, 2147483647]"
        self._step_mode = value

    @builtins.property
    def plan_speed(self):
        """Message field 'plan_speed'."""
        return self._plan_speed

    @plan_speed.setter
    def plan_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plan_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plan_speed' field must be an integer in [-2147483648, 2147483647]"
        self._plan_speed = value

    @builtins.property
    def loop_num(self):
        """Message field 'loop_num'."""
        return self._loop_num

    @loop_num.setter
    def loop_num(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'loop_num' array.array() must have the type code of 'i'"
            self._loop_num = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'loop_num' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._loop_num = array.array('i', value)

    @builtins.property
    def loop_cont(self):
        """Message field 'loop_cont'."""
        return self._loop_cont

    @loop_cont.setter
    def loop_cont(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'loop_cont' array.array() must have the type code of 'i'"
            self._loop_cont = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'loop_cont' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._loop_cont = array.array('i', value)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'state' field must be of type 'bool'"
        self._state = value
