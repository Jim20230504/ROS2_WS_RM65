# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/Gettrajectorylist.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gettrajectorylist(type):
    """Metaclass of message 'Gettrajectorylist'."""

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
                'rm_ros_interfaces.msg.Gettrajectorylist')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gettrajectorylist
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gettrajectorylist
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gettrajectorylist
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gettrajectorylist
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gettrajectorylist

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Gettrajectorylist(metaclass=Metaclass_Gettrajectorylist):
    """Message class 'Gettrajectorylist'."""

    __slots__ = [
        '_page_num',
        '_page_size',
        '_vague_search',
    ]

    _fields_and_field_types = {
        'page_num': 'int32',
        'page_size': 'int32',
        'vague_search': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.page_num = kwargs.get('page_num', int())
        self.page_size = kwargs.get('page_size', int())
        self.vague_search = kwargs.get('vague_search', str())

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
        if self.page_num != other.page_num:
            return False
        if self.page_size != other.page_size:
            return False
        if self.vague_search != other.vague_search:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def page_num(self):
        """Message field 'page_num'."""
        return self._page_num

    @page_num.setter
    def page_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'page_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'page_num' field must be an integer in [-2147483648, 2147483647]"
        self._page_num = value

    @builtins.property
    def page_size(self):
        """Message field 'page_size'."""
        return self._page_size

    @page_size.setter
    def page_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'page_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'page_size' field must be an integer in [-2147483648, 2147483647]"
        self._page_size = value

    @builtins.property
    def vague_search(self):
        """Message field 'vague_search'."""
        return self._vague_search

    @vague_search.setter
    def vague_search(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vague_search' field must be of type 'str'"
        self._vague_search = value
