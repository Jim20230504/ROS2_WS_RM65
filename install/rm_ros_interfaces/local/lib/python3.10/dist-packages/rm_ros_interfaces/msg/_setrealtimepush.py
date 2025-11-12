# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/Setrealtimepush.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Setrealtimepush(type):
    """Metaclass of message 'Setrealtimepush'."""

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
                'rm_ros_interfaces.msg.Setrealtimepush')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__setrealtimepush
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__setrealtimepush
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__setrealtimepush
            cls._TYPE_SUPPORT = module.type_support_msg__msg__setrealtimepush
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__setrealtimepush

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Setrealtimepush(metaclass=Metaclass_Setrealtimepush):
    """Message class 'Setrealtimepush'."""

    __slots__ = [
        '_cycle',
        '_port',
        '_force_coordinate',
        '_ip',
        '_aloha_state_enable',
        '_arm_current_status_enable',
        '_expand_state_enable',
        '_hand_enable',
        '_joint_speed_enable',
        '_lift_state_enable',
        '_plus_base_enable',
        '_plus_state_enable',
    ]

    _fields_and_field_types = {
        'cycle': 'uint16',
        'port': 'uint16',
        'force_coordinate': 'uint16',
        'ip': 'string',
        'aloha_state_enable': 'boolean',
        'arm_current_status_enable': 'boolean',
        'expand_state_enable': 'boolean',
        'hand_enable': 'boolean',
        'joint_speed_enable': 'boolean',
        'lift_state_enable': 'boolean',
        'plus_base_enable': 'boolean',
        'plus_state_enable': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cycle = kwargs.get('cycle', int())
        self.port = kwargs.get('port', int())
        self.force_coordinate = kwargs.get('force_coordinate', int())
        self.ip = kwargs.get('ip', str())
        self.aloha_state_enable = kwargs.get('aloha_state_enable', bool())
        self.arm_current_status_enable = kwargs.get('arm_current_status_enable', bool())
        self.expand_state_enable = kwargs.get('expand_state_enable', bool())
        self.hand_enable = kwargs.get('hand_enable', bool())
        self.joint_speed_enable = kwargs.get('joint_speed_enable', bool())
        self.lift_state_enable = kwargs.get('lift_state_enable', bool())
        self.plus_base_enable = kwargs.get('plus_base_enable', bool())
        self.plus_state_enable = kwargs.get('plus_state_enable', bool())

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
        if self.cycle != other.cycle:
            return False
        if self.port != other.port:
            return False
        if self.force_coordinate != other.force_coordinate:
            return False
        if self.ip != other.ip:
            return False
        if self.aloha_state_enable != other.aloha_state_enable:
            return False
        if self.arm_current_status_enable != other.arm_current_status_enable:
            return False
        if self.expand_state_enable != other.expand_state_enable:
            return False
        if self.hand_enable != other.hand_enable:
            return False
        if self.joint_speed_enable != other.joint_speed_enable:
            return False
        if self.lift_state_enable != other.lift_state_enable:
            return False
        if self.plus_base_enable != other.plus_base_enable:
            return False
        if self.plus_state_enable != other.plus_state_enable:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cycle(self):
        """Message field 'cycle'."""
        return self._cycle

    @cycle.setter
    def cycle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cycle' field must be an unsigned integer in [0, 65535]"
        self._cycle = value

    @builtins.property
    def port(self):
        """Message field 'port'."""
        return self._port

    @port.setter
    def port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'port' field must be an unsigned integer in [0, 65535]"
        self._port = value

    @builtins.property
    def force_coordinate(self):
        """Message field 'force_coordinate'."""
        return self._force_coordinate

    @force_coordinate.setter
    def force_coordinate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'force_coordinate' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'force_coordinate' field must be an unsigned integer in [0, 65535]"
        self._force_coordinate = value

    @builtins.property
    def ip(self):
        """Message field 'ip'."""
        return self._ip

    @ip.setter
    def ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ip' field must be of type 'str'"
        self._ip = value

    @builtins.property
    def aloha_state_enable(self):
        """Message field 'aloha_state_enable'."""
        return self._aloha_state_enable

    @aloha_state_enable.setter
    def aloha_state_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'aloha_state_enable' field must be of type 'bool'"
        self._aloha_state_enable = value

    @builtins.property
    def arm_current_status_enable(self):
        """Message field 'arm_current_status_enable'."""
        return self._arm_current_status_enable

    @arm_current_status_enable.setter
    def arm_current_status_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arm_current_status_enable' field must be of type 'bool'"
        self._arm_current_status_enable = value

    @builtins.property
    def expand_state_enable(self):
        """Message field 'expand_state_enable'."""
        return self._expand_state_enable

    @expand_state_enable.setter
    def expand_state_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'expand_state_enable' field must be of type 'bool'"
        self._expand_state_enable = value

    @builtins.property
    def hand_enable(self):
        """Message field 'hand_enable'."""
        return self._hand_enable

    @hand_enable.setter
    def hand_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hand_enable' field must be of type 'bool'"
        self._hand_enable = value

    @builtins.property
    def joint_speed_enable(self):
        """Message field 'joint_speed_enable'."""
        return self._joint_speed_enable

    @joint_speed_enable.setter
    def joint_speed_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joint_speed_enable' field must be of type 'bool'"
        self._joint_speed_enable = value

    @builtins.property
    def lift_state_enable(self):
        """Message field 'lift_state_enable'."""
        return self._lift_state_enable

    @lift_state_enable.setter
    def lift_state_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lift_state_enable' field must be of type 'bool'"
        self._lift_state_enable = value

    @builtins.property
    def plus_base_enable(self):
        """Message field 'plus_base_enable'."""
        return self._plus_base_enable

    @plus_base_enable.setter
    def plus_base_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plus_base_enable' field must be of type 'bool'"
        self._plus_base_enable = value

    @builtins.property
    def plus_state_enable(self):
        """Message field 'plus_state_enable'."""
        return self._plus_state_enable

    @plus_state_enable.setter
    def plus_state_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plus_state_enable' field must be of type 'bool'"
        self._plus_state_enable = value
