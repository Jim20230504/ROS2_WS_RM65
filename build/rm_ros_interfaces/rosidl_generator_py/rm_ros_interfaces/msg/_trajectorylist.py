# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/Trajectorylist.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Trajectorylist(type):
    """Metaclass of message 'Trajectorylist'."""

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
                'rm_ros_interfaces.msg.Trajectorylist')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectorylist
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectorylist
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectorylist
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectorylist
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectorylist

            from rm_ros_interfaces.msg import Trajectoryinfo
            if Trajectoryinfo.__class__._TYPE_SUPPORT is None:
                Trajectoryinfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Trajectorylist(metaclass=Metaclass_Trajectorylist):
    """Message class 'Trajectorylist'."""

    __slots__ = [
        '_page_num',
        '_page_size',
        '_total_size',
        '_vague_search',
        '_tra_list',
        '_state',
    ]

    _fields_and_field_types = {
        'page_num': 'int32',
        'page_size': 'int32',
        'total_size': 'int32',
        'vague_search': 'string',
        'tra_list': 'sequence<rm_ros_interfaces/Trajectoryinfo>',
        'state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rm_ros_interfaces', 'msg'], 'Trajectoryinfo')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.page_num = kwargs.get('page_num', int())
        self.page_size = kwargs.get('page_size', int())
        self.total_size = kwargs.get('total_size', int())
        self.vague_search = kwargs.get('vague_search', str())
        self.tra_list = kwargs.get('tra_list', [])
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
        if self.page_num != other.page_num:
            return False
        if self.page_size != other.page_size:
            return False
        if self.total_size != other.total_size:
            return False
        if self.vague_search != other.vague_search:
            return False
        if self.tra_list != other.tra_list:
            return False
        if self.state != other.state:
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
    def total_size(self):
        """Message field 'total_size'."""
        return self._total_size

    @total_size.setter
    def total_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_size' field must be an integer in [-2147483648, 2147483647]"
        self._total_size = value

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

    @builtins.property
    def tra_list(self):
        """Message field 'tra_list'."""
        return self._tra_list

    @tra_list.setter
    def tra_list(self, value):
        if __debug__:
            from rm_ros_interfaces.msg import Trajectoryinfo
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
                 all(isinstance(v, Trajectoryinfo) for v in value) and
                 True), \
                "The 'tra_list' field must be a set or sequence and each value of type 'Trajectoryinfo'"
        self._tra_list = value

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
