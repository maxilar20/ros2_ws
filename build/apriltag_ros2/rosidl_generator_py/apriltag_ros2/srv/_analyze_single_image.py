# generated from rosidl_generator_py/resource/_idl.py.em
# with input from apriltag_ros2:srv/AnalyzeSingleImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AnalyzeSingleImage_Request(type):
    """Metaclass of message 'AnalyzeSingleImage_Request'."""

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
            module = import_type_support('apriltag_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'apriltag_ros2.srv.AnalyzeSingleImage_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__analyze_single_image__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__analyze_single_image__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__analyze_single_image__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__analyze_single_image__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__analyze_single_image__request

            from sensor_msgs.msg import CameraInfo
            if CameraInfo.__class__._TYPE_SUPPORT is None:
                CameraInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AnalyzeSingleImage_Request(metaclass=Metaclass_AnalyzeSingleImage_Request):
    """Message class 'AnalyzeSingleImage_Request'."""

    __slots__ = [
        '_full_path_where_to_get_image',
        '_full_path_where_to_save_image',
        '_camera_info',
    ]

    _fields_and_field_types = {
        'full_path_where_to_get_image': 'string',
        'full_path_where_to_save_image': 'string',
        'camera_info': 'sensor_msgs/CameraInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CameraInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.full_path_where_to_get_image = kwargs.get('full_path_where_to_get_image', str())
        self.full_path_where_to_save_image = kwargs.get('full_path_where_to_save_image', str())
        from sensor_msgs.msg import CameraInfo
        self.camera_info = kwargs.get('camera_info', CameraInfo())

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
        if self.full_path_where_to_get_image != other.full_path_where_to_get_image:
            return False
        if self.full_path_where_to_save_image != other.full_path_where_to_save_image:
            return False
        if self.camera_info != other.camera_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def full_path_where_to_get_image(self):
        """Message field 'full_path_where_to_get_image'."""
        return self._full_path_where_to_get_image

    @full_path_where_to_get_image.setter
    def full_path_where_to_get_image(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'full_path_where_to_get_image' field must be of type 'str'"
        self._full_path_where_to_get_image = value

    @builtins.property
    def full_path_where_to_save_image(self):
        """Message field 'full_path_where_to_save_image'."""
        return self._full_path_where_to_save_image

    @full_path_where_to_save_image.setter
    def full_path_where_to_save_image(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'full_path_where_to_save_image' field must be of type 'str'"
        self._full_path_where_to_save_image = value

    @builtins.property
    def camera_info(self):
        """Message field 'camera_info'."""
        return self._camera_info

    @camera_info.setter
    def camera_info(self, value):
        if __debug__:
            from sensor_msgs.msg import CameraInfo
            assert \
                isinstance(value, CameraInfo), \
                "The 'camera_info' field must be a sub message of type 'CameraInfo'"
        self._camera_info = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AnalyzeSingleImage_Response(type):
    """Metaclass of message 'AnalyzeSingleImage_Response'."""

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
            module = import_type_support('apriltag_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'apriltag_ros2.srv.AnalyzeSingleImage_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__analyze_single_image__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__analyze_single_image__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__analyze_single_image__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__analyze_single_image__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__analyze_single_image__response

            from apriltag_ros2.msg import AprilTagDetectionArray
            if AprilTagDetectionArray.__class__._TYPE_SUPPORT is None:
                AprilTagDetectionArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AnalyzeSingleImage_Response(metaclass=Metaclass_AnalyzeSingleImage_Response):
    """Message class 'AnalyzeSingleImage_Response'."""

    __slots__ = [
        '_tag_detections',
    ]

    _fields_and_field_types = {
        'tag_detections': 'apriltag_ros2/AprilTagDetectionArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['apriltag_ros2', 'msg'], 'AprilTagDetectionArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from apriltag_ros2.msg import AprilTagDetectionArray
        self.tag_detections = kwargs.get('tag_detections', AprilTagDetectionArray())

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
        if self.tag_detections != other.tag_detections:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tag_detections(self):
        """Message field 'tag_detections'."""
        return self._tag_detections

    @tag_detections.setter
    def tag_detections(self, value):
        if __debug__:
            from apriltag_ros2.msg import AprilTagDetectionArray
            assert \
                isinstance(value, AprilTagDetectionArray), \
                "The 'tag_detections' field must be a sub message of type 'AprilTagDetectionArray'"
        self._tag_detections = value


class Metaclass_AnalyzeSingleImage(type):
    """Metaclass of service 'AnalyzeSingleImage'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('apriltag_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'apriltag_ros2.srv.AnalyzeSingleImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__analyze_single_image

            from apriltag_ros2.srv import _analyze_single_image
            if _analyze_single_image.Metaclass_AnalyzeSingleImage_Request._TYPE_SUPPORT is None:
                _analyze_single_image.Metaclass_AnalyzeSingleImage_Request.__import_type_support__()
            if _analyze_single_image.Metaclass_AnalyzeSingleImage_Response._TYPE_SUPPORT is None:
                _analyze_single_image.Metaclass_AnalyzeSingleImage_Response.__import_type_support__()


class AnalyzeSingleImage(metaclass=Metaclass_AnalyzeSingleImage):
    from apriltag_ros2.srv._analyze_single_image import AnalyzeSingleImage_Request as Request
    from apriltag_ros2.srv._analyze_single_image import AnalyzeSingleImage_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
