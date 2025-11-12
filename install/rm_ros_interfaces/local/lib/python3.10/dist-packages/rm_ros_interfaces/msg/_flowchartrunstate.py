# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/Flowchartrunstate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Flowchartrunstate(type):
    """Metaclass of message 'Flowchartrunstate'."""

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
                'rm_ros_interfaces.msg.Flowchartrunstate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__flowchartrunstate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__flowchartrunstate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__flowchartrunstate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__flowchartrunstate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__flowchartrunstate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Flowchartrunstate(metaclass=Metaclass_Flowchartrunstate):
    """Message class 'Flowchartrunstate'."""

    __slots__ = [
        '_run_state',
        '_id',
        '_name',
        '_plan_speed',
        '_step_mode',
        '_modal_id',
        '_state',
    ]

    _fields_and_field_types = {
        'run_state': 'uint8',
        'id': 'uint8',
        'name': 'string',
        'plan_speed': 'uint8',
        'step_mode': 'uint8',
        'modal_id': 'string',
        'state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.run_state = kwargs.get('run_state', int())
        self.id = kwargs.get('id', int())
        self.name = kwargs.get('name', str())
        self.plan_speed = kwargs.get('plan_speed', int())
        self.step_mode = kwargs.get('step_mode', int())
        self.modal_id = kwargs.get('modal_id', str())
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
        if self.name != other.name:
            return False
        if self.plan_speed != other.plan_speed:
            return False
        if self.step_mode != other.step_mode:
            return False
        if self.modal_id != other.modal_id:
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
            assert value >= 0 and value < 256, \
                "The 'run_state' field must be an unsigned integer in [0, 255]"
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
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

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
            assert value >= 0 and value < 256, \
                "The 'plan_speed' field must be an unsigned integer in [0, 255]"
        self._plan_speed = value

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
            assert value >= 0 and value < 256, \
                "The 'step_mode' field must be an unsigned integer in [0, 255]"
        self._step_mode = value

    @builtins.property
    def modal_id(self):
        """Message field 'modal_id'."""
        return self._modal_id

    @modal_id.setter
    def modal_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'modal_id' field must be of type 'str'"
        self._modal_id = value

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
