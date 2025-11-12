# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/Sendproject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Sendproject(type):
    """Metaclass of message 'Sendproject'."""

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
                'rm_ros_interfaces.msg.Sendproject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sendproject
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sendproject
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sendproject
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sendproject
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sendproject

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Sendproject(metaclass=Metaclass_Sendproject):
    """Message class 'Sendproject'."""

    __slots__ = [
        '_project_path',
        '_project_path_len',
        '_plan_speed',
        '_only_save',
        '_save_id',
        '_step_flag',
        '_auto_start',
        '_project_type',
    ]

    _fields_and_field_types = {
        'project_path': 'string',
        'project_path_len': 'int32',
        'plan_speed': 'int32',
        'only_save': 'int32',
        'save_id': 'int32',
        'step_flag': 'int32',
        'auto_start': 'int32',
        'project_type': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.project_path = kwargs.get('project_path', str())
        self.project_path_len = kwargs.get('project_path_len', int())
        self.plan_speed = kwargs.get('plan_speed', int())
        self.only_save = kwargs.get('only_save', int())
        self.save_id = kwargs.get('save_id', int())
        self.step_flag = kwargs.get('step_flag', int())
        self.auto_start = kwargs.get('auto_start', int())
        self.project_type = kwargs.get('project_type', int())

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
        if self.project_path != other.project_path:
            return False
        if self.project_path_len != other.project_path_len:
            return False
        if self.plan_speed != other.plan_speed:
            return False
        if self.only_save != other.only_save:
            return False
        if self.save_id != other.save_id:
            return False
        if self.step_flag != other.step_flag:
            return False
        if self.auto_start != other.auto_start:
            return False
        if self.project_type != other.project_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def project_path(self):
        """Message field 'project_path'."""
        return self._project_path

    @project_path.setter
    def project_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'project_path' field must be of type 'str'"
        self._project_path = value

    @builtins.property
    def project_path_len(self):
        """Message field 'project_path_len'."""
        return self._project_path_len

    @project_path_len.setter
    def project_path_len(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'project_path_len' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'project_path_len' field must be an integer in [-2147483648, 2147483647]"
        self._project_path_len = value

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
    def only_save(self):
        """Message field 'only_save'."""
        return self._only_save

    @only_save.setter
    def only_save(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'only_save' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'only_save' field must be an integer in [-2147483648, 2147483647]"
        self._only_save = value

    @builtins.property
    def save_id(self):
        """Message field 'save_id'."""
        return self._save_id

    @save_id.setter
    def save_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'save_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'save_id' field must be an integer in [-2147483648, 2147483647]"
        self._save_id = value

    @builtins.property
    def step_flag(self):
        """Message field 'step_flag'."""
        return self._step_flag

    @step_flag.setter
    def step_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'step_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'step_flag' field must be an integer in [-2147483648, 2147483647]"
        self._step_flag = value

    @builtins.property
    def auto_start(self):
        """Message field 'auto_start'."""
        return self._auto_start

    @auto_start.setter
    def auto_start(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_start' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'auto_start' field must be an integer in [-2147483648, 2147483647]"
        self._auto_start = value

    @builtins.property
    def project_type(self):
        """Message field 'project_type'."""
        return self._project_type

    @project_type.setter
    def project_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'project_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'project_type' field must be an integer in [-2147483648, 2147483647]"
        self._project_type = value
