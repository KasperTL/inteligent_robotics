#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "intelligent_robotics_msgs::intelligent_robotics_msgs__rosidl_generator_py" for configuration ""
set_property(TARGET intelligent_robotics_msgs::intelligent_robotics_msgs__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(intelligent_robotics_msgs::intelligent_robotics_msgs__rosidl_generator_py PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "intelligent_robotics_msgs::intelligent_robotics_msgs__rosidl_generator_c;Python3::Python;intelligent_robotics_msgs::intelligent_robotics_msgs__rosidl_typesupport_c"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libintelligent_robotics_msgs__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libintelligent_robotics_msgs__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets intelligent_robotics_msgs::intelligent_robotics_msgs__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_intelligent_robotics_msgs::intelligent_robotics_msgs__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libintelligent_robotics_msgs__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
