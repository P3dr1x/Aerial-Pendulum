# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aerobalance_interfaces:action/TrajectoryFilePosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryFilePosition_Goal(type):
    """Metaclass of message 'TrajectoryFilePosition_Goal'."""

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
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_file_position__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_file_position__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_file_position__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_file_position__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_file_position__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TIMESTEP__DEFAULT': 0.1,
            'JOINT__DEFAULT': 'joint1',
        }

    @property
    def TIMESTEP__DEFAULT(cls):
        """Return default value for message field 'timestep'."""
        return 0.1

    @property
    def JOINT__DEFAULT(cls):
        """Return default value for message field 'joint'."""
        return 'joint1'


class TrajectoryFilePosition_Goal(metaclass=Metaclass_TrajectoryFilePosition_Goal):
    """Message class 'TrajectoryFilePosition_Goal'."""

    __slots__ = [
        '_filepath',
        '_timestep',
        '_joint',
    ]

    _fields_and_field_types = {
        'filepath': 'string',
        'timestep': 'float',
        'joint': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.filepath = kwargs.get('filepath', str())
        self.timestep = kwargs.get(
            'timestep', TrajectoryFilePosition_Goal.TIMESTEP__DEFAULT)
        self.joint = kwargs.get(
            'joint', TrajectoryFilePosition_Goal.JOINT__DEFAULT)

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
        if self.filepath != other.filepath:
            return False
        if self.timestep != other.timestep:
            return False
        if self.joint != other.joint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def filepath(self):
        """Message field 'filepath'."""
        return self._filepath

    @filepath.setter
    def filepath(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'filepath' field must be of type 'str'"
        self._filepath = value

    @builtins.property
    def timestep(self):
        """Message field 'timestep'."""
        return self._timestep

    @timestep.setter
    def timestep(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestep' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'timestep' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._timestep = value

    @builtins.property
    def joint(self):
        """Message field 'joint'."""
        return self._joint

    @joint.setter
    def joint(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joint' field must be of type 'str'"
        self._joint = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryFilePosition_Result(type):
    """Metaclass of message 'TrajectoryFilePosition_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESSFUL': 0,
        'INVALID_FILE': 1,
        'INVALID_GOAL': -1,
        'INVALID_JOINTS': -2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_file_position__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_file_position__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_file_position__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_file_position__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_file_position__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESSFUL': cls.__constants['SUCCESSFUL'],
            'INVALID_FILE': cls.__constants['INVALID_FILE'],
            'INVALID_GOAL': cls.__constants['INVALID_GOAL'],
            'INVALID_JOINTS': cls.__constants['INVALID_JOINTS'],
        }

    @property
    def SUCCESSFUL(self):
        """Message constant 'SUCCESSFUL'."""
        return Metaclass_TrajectoryFilePosition_Result.__constants['SUCCESSFUL']

    @property
    def INVALID_FILE(self):
        """Message constant 'INVALID_FILE'."""
        return Metaclass_TrajectoryFilePosition_Result.__constants['INVALID_FILE']

    @property
    def INVALID_GOAL(self):
        """Message constant 'INVALID_GOAL'."""
        return Metaclass_TrajectoryFilePosition_Result.__constants['INVALID_GOAL']

    @property
    def INVALID_JOINTS(self):
        """Message constant 'INVALID_JOINTS'."""
        return Metaclass_TrajectoryFilePosition_Result.__constants['INVALID_JOINTS']


class TrajectoryFilePosition_Result(metaclass=Metaclass_TrajectoryFilePosition_Result):
    """
    Message class 'TrajectoryFilePosition_Result'.

    Constants:
      SUCCESSFUL
      INVALID_FILE
      INVALID_GOAL
      INVALID_JOINTS
    """

    __slots__ = [
        '_error_code',
    ]

    _fields_and_field_types = {
        'error_code': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error_code = kwargs.get('error_code', int())

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
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'error_code' field must be an integer in [-128, 127]"
        self._error_code = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryFilePosition_Feedback(type):
    """Metaclass of message 'TrajectoryFilePosition_Feedback'."""

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
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_file_position__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_file_position__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_file_position__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_file_position__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_file_position__feedback

            from trajectory_msgs.msg import JointTrajectoryPoint
            if JointTrajectoryPoint.__class__._TYPE_SUPPORT is None:
                JointTrajectoryPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryFilePosition_Feedback(metaclass=Metaclass_TrajectoryFilePosition_Feedback):
    """Message class 'TrajectoryFilePosition_Feedback'."""

    __slots__ = [
        '_actual',
        '_desired',
    ]

    _fields_and_field_types = {
        'actual': 'trajectory_msgs/JointTrajectoryPoint',
        'desired': 'trajectory_msgs/JointTrajectoryPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.actual = kwargs.get('actual', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.desired = kwargs.get('desired', JointTrajectoryPoint())

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
        if self.actual != other.actual:
            return False
        if self.desired != other.desired:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def actual(self):
        """Message field 'actual'."""
        return self._actual

    @actual.setter
    def actual(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'actual' field must be a sub message of type 'JointTrajectoryPoint'"
        self._actual = value

    @builtins.property
    def desired(self):
        """Message field 'desired'."""
        return self._desired

    @desired.setter
    def desired(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'desired' field must be a sub message of type 'JointTrajectoryPoint'"
        self._desired = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryFilePosition_SendGoal_Request(type):
    """Metaclass of message 'TrajectoryFilePosition_SendGoal_Request'."""

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
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_file_position__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_file_position__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_file_position__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_file_position__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_file_position__send_goal__request

            from aerobalance_interfaces.action import TrajectoryFilePosition
            if TrajectoryFilePosition.Goal.__class__._TYPE_SUPPORT is None:
                TrajectoryFilePosition.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryFilePosition_SendGoal_Request(metaclass=Metaclass_TrajectoryFilePosition_SendGoal_Request):
    """Message class 'TrajectoryFilePosition_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'aerobalance_interfaces/TrajectoryFilePosition_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aerobalance_interfaces', 'action'], 'TrajectoryFilePosition_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_Goal
        self.goal = kwargs.get('goal', TrajectoryFilePosition_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_Goal
            assert \
                isinstance(value, TrajectoryFilePosition_Goal), \
                "The 'goal' field must be a sub message of type 'TrajectoryFilePosition_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryFilePosition_SendGoal_Response(type):
    """Metaclass of message 'TrajectoryFilePosition_SendGoal_Response'."""

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
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_file_position__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_file_position__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_file_position__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_file_position__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_file_position__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryFilePosition_SendGoal_Response(metaclass=Metaclass_TrajectoryFilePosition_SendGoal_Response):
    """Message class 'TrajectoryFilePosition_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_TrajectoryFilePosition_SendGoal(type):
    """Metaclass of service 'TrajectoryFilePosition_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__trajectory_file_position__send_goal

            from aerobalance_interfaces.action import _trajectory_file_position
            if _trajectory_file_position.Metaclass_TrajectoryFilePosition_SendGoal_Request._TYPE_SUPPORT is None:
                _trajectory_file_position.Metaclass_TrajectoryFilePosition_SendGoal_Request.__import_type_support__()
            if _trajectory_file_position.Metaclass_TrajectoryFilePosition_SendGoal_Response._TYPE_SUPPORT is None:
                _trajectory_file_position.Metaclass_TrajectoryFilePosition_SendGoal_Response.__import_type_support__()


class TrajectoryFilePosition_SendGoal(metaclass=Metaclass_TrajectoryFilePosition_SendGoal):
    from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_SendGoal_Request as Request
    from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryFilePosition_GetResult_Request(type):
    """Metaclass of message 'TrajectoryFilePosition_GetResult_Request'."""

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
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_file_position__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_file_position__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_file_position__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_file_position__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_file_position__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryFilePosition_GetResult_Request(metaclass=Metaclass_TrajectoryFilePosition_GetResult_Request):
    """Message class 'TrajectoryFilePosition_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryFilePosition_GetResult_Response(type):
    """Metaclass of message 'TrajectoryFilePosition_GetResult_Response'."""

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
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_file_position__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_file_position__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_file_position__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_file_position__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_file_position__get_result__response

            from aerobalance_interfaces.action import TrajectoryFilePosition
            if TrajectoryFilePosition.Result.__class__._TYPE_SUPPORT is None:
                TrajectoryFilePosition.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryFilePosition_GetResult_Response(metaclass=Metaclass_TrajectoryFilePosition_GetResult_Response):
    """Message class 'TrajectoryFilePosition_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'aerobalance_interfaces/TrajectoryFilePosition_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aerobalance_interfaces', 'action'], 'TrajectoryFilePosition_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_Result
        self.result = kwargs.get('result', TrajectoryFilePosition_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_Result
            assert \
                isinstance(value, TrajectoryFilePosition_Result), \
                "The 'result' field must be a sub message of type 'TrajectoryFilePosition_Result'"
        self._result = value


class Metaclass_TrajectoryFilePosition_GetResult(type):
    """Metaclass of service 'TrajectoryFilePosition_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__trajectory_file_position__get_result

            from aerobalance_interfaces.action import _trajectory_file_position
            if _trajectory_file_position.Metaclass_TrajectoryFilePosition_GetResult_Request._TYPE_SUPPORT is None:
                _trajectory_file_position.Metaclass_TrajectoryFilePosition_GetResult_Request.__import_type_support__()
            if _trajectory_file_position.Metaclass_TrajectoryFilePosition_GetResult_Response._TYPE_SUPPORT is None:
                _trajectory_file_position.Metaclass_TrajectoryFilePosition_GetResult_Response.__import_type_support__()


class TrajectoryFilePosition_GetResult(metaclass=Metaclass_TrajectoryFilePosition_GetResult):
    from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_GetResult_Request as Request
    from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryFilePosition_FeedbackMessage(type):
    """Metaclass of message 'TrajectoryFilePosition_FeedbackMessage'."""

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
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_file_position__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_file_position__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_file_position__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_file_position__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_file_position__feedback_message

            from aerobalance_interfaces.action import TrajectoryFilePosition
            if TrajectoryFilePosition.Feedback.__class__._TYPE_SUPPORT is None:
                TrajectoryFilePosition.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryFilePosition_FeedbackMessage(metaclass=Metaclass_TrajectoryFilePosition_FeedbackMessage):
    """Message class 'TrajectoryFilePosition_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'aerobalance_interfaces/TrajectoryFilePosition_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aerobalance_interfaces', 'action'], 'TrajectoryFilePosition_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_Feedback
        self.feedback = kwargs.get('feedback', TrajectoryFilePosition_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_Feedback
            assert \
                isinstance(value, TrajectoryFilePosition_Feedback), \
                "The 'feedback' field must be a sub message of type 'TrajectoryFilePosition_Feedback'"
        self._feedback = value


class Metaclass_TrajectoryFilePosition(type):
    """Metaclass of action 'TrajectoryFilePosition'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aerobalance_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aerobalance_interfaces.action.TrajectoryFilePosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__trajectory_file_position

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from aerobalance_interfaces.action import _trajectory_file_position
            if _trajectory_file_position.Metaclass_TrajectoryFilePosition_SendGoal._TYPE_SUPPORT is None:
                _trajectory_file_position.Metaclass_TrajectoryFilePosition_SendGoal.__import_type_support__()
            if _trajectory_file_position.Metaclass_TrajectoryFilePosition_GetResult._TYPE_SUPPORT is None:
                _trajectory_file_position.Metaclass_TrajectoryFilePosition_GetResult.__import_type_support__()
            if _trajectory_file_position.Metaclass_TrajectoryFilePosition_FeedbackMessage._TYPE_SUPPORT is None:
                _trajectory_file_position.Metaclass_TrajectoryFilePosition_FeedbackMessage.__import_type_support__()


class TrajectoryFilePosition(metaclass=Metaclass_TrajectoryFilePosition):

    # The goal message defined in the action definition.
    from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_Goal as Goal
    # The result message defined in the action definition.
    from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_Result as Result
    # The feedback message defined in the action definition.
    from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from aerobalance_interfaces.action._trajectory_file_position import TrajectoryFilePosition_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
