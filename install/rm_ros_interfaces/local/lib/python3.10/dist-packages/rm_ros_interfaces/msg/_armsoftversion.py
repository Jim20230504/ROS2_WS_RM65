# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/Armsoftversion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Armsoftversion(type):
    """Metaclass of message 'Armsoftversion'."""

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
                'rm_ros_interfaces.msg.Armsoftversion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__armsoftversion
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__armsoftversion
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__armsoftversion
            cls._TYPE_SUPPORT = module.type_support_msg__msg__armsoftversion
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__armsoftversion

            from rm_ros_interfaces.msg import Softwarebuildinfo
            if Softwarebuildinfo.__class__._TYPE_SUPPORT is None:
                Softwarebuildinfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Armsoftversion(metaclass=Metaclass_Armsoftversion):
    """Message class 'Armsoftversion'."""

    __slots__ = [
        '_product_version',
        '_controller_version',
        '_algorithm_info',
        '_ctrl_info',
        '_dynamic_info',
        '_plan_info',
        '_com_info',
        '_program_info',
        '_state',
        '_planversion',
        '_ctrlversion',
        '_kernal1',
        '_kernal2',
        '_productversion',
    ]

    _fields_and_field_types = {
        'product_version': 'string',
        'controller_version': 'string',
        'algorithm_info': 'string',
        'ctrl_info': 'rm_ros_interfaces/Softwarebuildinfo',
        'dynamic_info': 'string',
        'plan_info': 'rm_ros_interfaces/Softwarebuildinfo',
        'com_info': 'rm_ros_interfaces/Softwarebuildinfo',
        'program_info': 'rm_ros_interfaces/Softwarebuildinfo',
        'state': 'boolean',
        'planversion': 'string',
        'ctrlversion': 'string',
        'kernal1': 'string',
        'kernal2': 'string',
        'productversion': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rm_ros_interfaces', 'msg'], 'Softwarebuildinfo'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rm_ros_interfaces', 'msg'], 'Softwarebuildinfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rm_ros_interfaces', 'msg'], 'Softwarebuildinfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rm_ros_interfaces', 'msg'], 'Softwarebuildinfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.product_version = kwargs.get('product_version', str())
        self.controller_version = kwargs.get('controller_version', str())
        self.algorithm_info = kwargs.get('algorithm_info', str())
        from rm_ros_interfaces.msg import Softwarebuildinfo
        self.ctrl_info = kwargs.get('ctrl_info', Softwarebuildinfo())
        self.dynamic_info = kwargs.get('dynamic_info', str())
        from rm_ros_interfaces.msg import Softwarebuildinfo
        self.plan_info = kwargs.get('plan_info', Softwarebuildinfo())
        from rm_ros_interfaces.msg import Softwarebuildinfo
        self.com_info = kwargs.get('com_info', Softwarebuildinfo())
        from rm_ros_interfaces.msg import Softwarebuildinfo
        self.program_info = kwargs.get('program_info', Softwarebuildinfo())
        self.state = kwargs.get('state', bool())
        self.planversion = kwargs.get('planversion', str())
        self.ctrlversion = kwargs.get('ctrlversion', str())
        self.kernal1 = kwargs.get('kernal1', str())
        self.kernal2 = kwargs.get('kernal2', str())
        self.productversion = kwargs.get('productversion', str())

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
        if self.product_version != other.product_version:
            return False
        if self.controller_version != other.controller_version:
            return False
        if self.algorithm_info != other.algorithm_info:
            return False
        if self.ctrl_info != other.ctrl_info:
            return False
        if self.dynamic_info != other.dynamic_info:
            return False
        if self.plan_info != other.plan_info:
            return False
        if self.com_info != other.com_info:
            return False
        if self.program_info != other.program_info:
            return False
        if self.state != other.state:
            return False
        if self.planversion != other.planversion:
            return False
        if self.ctrlversion != other.ctrlversion:
            return False
        if self.kernal1 != other.kernal1:
            return False
        if self.kernal2 != other.kernal2:
            return False
        if self.productversion != other.productversion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def product_version(self):
        """Message field 'product_version'."""
        return self._product_version

    @product_version.setter
    def product_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'product_version' field must be of type 'str'"
        self._product_version = value

    @builtins.property
    def controller_version(self):
        """Message field 'controller_version'."""
        return self._controller_version

    @controller_version.setter
    def controller_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'controller_version' field must be of type 'str'"
        self._controller_version = value

    @builtins.property
    def algorithm_info(self):
        """Message field 'algorithm_info'."""
        return self._algorithm_info

    @algorithm_info.setter
    def algorithm_info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'algorithm_info' field must be of type 'str'"
        self._algorithm_info = value

    @builtins.property
    def ctrl_info(self):
        """Message field 'ctrl_info'."""
        return self._ctrl_info

    @ctrl_info.setter
    def ctrl_info(self, value):
        if __debug__:
            from rm_ros_interfaces.msg import Softwarebuildinfo
            assert \
                isinstance(value, Softwarebuildinfo), \
                "The 'ctrl_info' field must be a sub message of type 'Softwarebuildinfo'"
        self._ctrl_info = value

    @builtins.property
    def dynamic_info(self):
        """Message field 'dynamic_info'."""
        return self._dynamic_info

    @dynamic_info.setter
    def dynamic_info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dynamic_info' field must be of type 'str'"
        self._dynamic_info = value

    @builtins.property
    def plan_info(self):
        """Message field 'plan_info'."""
        return self._plan_info

    @plan_info.setter
    def plan_info(self, value):
        if __debug__:
            from rm_ros_interfaces.msg import Softwarebuildinfo
            assert \
                isinstance(value, Softwarebuildinfo), \
                "The 'plan_info' field must be a sub message of type 'Softwarebuildinfo'"
        self._plan_info = value

    @builtins.property
    def com_info(self):
        """Message field 'com_info'."""
        return self._com_info

    @com_info.setter
    def com_info(self, value):
        if __debug__:
            from rm_ros_interfaces.msg import Softwarebuildinfo
            assert \
                isinstance(value, Softwarebuildinfo), \
                "The 'com_info' field must be a sub message of type 'Softwarebuildinfo'"
        self._com_info = value

    @builtins.property
    def program_info(self):
        """Message field 'program_info'."""
        return self._program_info

    @program_info.setter
    def program_info(self, value):
        if __debug__:
            from rm_ros_interfaces.msg import Softwarebuildinfo
            assert \
                isinstance(value, Softwarebuildinfo), \
                "The 'program_info' field must be a sub message of type 'Softwarebuildinfo'"
        self._program_info = value

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

    @builtins.property
    def planversion(self):
        """Message field 'planversion'."""
        return self._planversion

    @planversion.setter
    def planversion(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planversion' field must be of type 'str'"
        self._planversion = value

    @builtins.property
    def ctrlversion(self):
        """Message field 'ctrlversion'."""
        return self._ctrlversion

    @ctrlversion.setter
    def ctrlversion(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ctrlversion' field must be of type 'str'"
        self._ctrlversion = value

    @builtins.property
    def kernal1(self):
        """Message field 'kernal1'."""
        return self._kernal1

    @kernal1.setter
    def kernal1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'kernal1' field must be of type 'str'"
        self._kernal1 = value

    @builtins.property
    def kernal2(self):
        """Message field 'kernal2'."""
        return self._kernal2

    @kernal2.setter
    def kernal2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'kernal2' field must be of type 'str'"
        self._kernal2 = value

    @builtins.property
    def productversion(self):
        """Message field 'productversion'."""
        return self._productversion

    @productversion.setter
    def productversion(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'productversion' field must be of type 'str'"
        self._productversion = value
