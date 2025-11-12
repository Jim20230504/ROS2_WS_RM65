# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/RobotInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotInfo(type):
    """Metaclass of message 'RobotInfo'."""

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
                'rm_ros_interfaces.msg.RobotInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotInfo(metaclass=Metaclass_RobotInfo):
    """Message class 'RobotInfo'."""

    __slots__ = [
        '_arm_dof',
        '_arm_model',
        '_force_type',
        '_robot_controller_version',
        '_state',
    ]

    _fields_and_field_types = {
        'arm_dof': 'uint8',
        'arm_model': 'uint8',
        'force_type': 'uint8',
        'robot_controller_version': 'uint8',
        'state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arm_dof = kwargs.get('arm_dof', int())
        self.arm_model = kwargs.get('arm_model', int())
        self.force_type = kwargs.get('force_type', int())
        self.robot_controller_version = kwargs.get('robot_controller_version', int())
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
        if self.arm_dof != other.arm_dof:
            return False
        if self.arm_model != other.arm_model:
            return False
        if self.force_type != other.force_type:
            return False
        if self.robot_controller_version != other.robot_controller_version:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def arm_dof(self):
        """Message field 'arm_dof'."""
        return self._arm_dof

    @arm_dof.setter
    def arm_dof(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arm_dof' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'arm_dof' field must be an unsigned integer in [0, 255]"
        self._arm_dof = value

    @builtins.property
    def arm_model(self):
        """Message field 'arm_model'."""
        return self._arm_model

    @arm_model.setter
    def arm_model(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arm_model' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'arm_model' field must be an unsigned integer in [0, 255]"
        self._arm_model = value

    @builtins.property
    def force_type(self):
        """Message field 'force_type'."""
        return self._force_type

    @force_type.setter
    def force_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'force_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'force_type' field must be an unsigned integer in [0, 255]"
        self._force_type = value

    @builtins.property
    def robot_controller_version(self):
        """Message field 'robot_controller_version'."""
        return self._robot_controller_version

    @robot_controller_version.setter
    def robot_controller_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_controller_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_controller_version' field must be an unsigned integer in [0, 255]"
        self._robot_controller_version = value

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
