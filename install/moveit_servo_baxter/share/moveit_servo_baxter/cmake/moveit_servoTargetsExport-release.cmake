#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_servo_baxter::moveit_servo_lib" for configuration "Release"
set_property(TARGET moveit_servo_baxter::moveit_servo_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_servo_baxter::moveit_servo_lib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_servo_lib.so."
  IMPORTED_SONAME_RELEASE "libmoveit_servo_lib.so."
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_servo_baxter::moveit_servo_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_servo_baxter::moveit_servo_lib "${_IMPORT_PREFIX}/lib/libmoveit_servo_lib.so." )

# Import target "moveit_servo_baxter::pose_tracking" for configuration "Release"
set_property(TARGET moveit_servo_baxter::pose_tracking APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_servo_baxter::pose_tracking PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libpose_tracking.so"
  IMPORTED_SONAME_RELEASE "libpose_tracking.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_servo_baxter::pose_tracking )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_servo_baxter::pose_tracking "${_IMPORT_PREFIX}/lib/libpose_tracking.so" )

# Import target "moveit_servo_baxter::servo_node" for configuration "Release"
set_property(TARGET moveit_servo_baxter::servo_node APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_servo_baxter::servo_node PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libservo_node.so"
  IMPORTED_SONAME_RELEASE "libservo_node.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_servo_baxter::servo_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_servo_baxter::servo_node "${_IMPORT_PREFIX}/lib/libservo_node.so" )

# Import target "moveit_servo_baxter::servo_controller_input" for configuration "Release"
set_property(TARGET moveit_servo_baxter::servo_controller_input APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_servo_baxter::servo_controller_input PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libservo_controller_input.so"
  IMPORTED_SONAME_RELEASE "libservo_controller_input.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_servo_baxter::servo_controller_input )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_servo_baxter::servo_controller_input "${_IMPORT_PREFIX}/lib/libservo_controller_input.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
