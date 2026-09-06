#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ipa_ros2_control::ipa_ros2_control" for configuration "Release"
set_property(TARGET ipa_ros2_control::ipa_ros2_control APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ipa_ros2_control::ipa_ros2_control PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libipa_ros2_control.so"
  IMPORTED_SONAME_RELEASE "libipa_ros2_control.so"
  )

list(APPEND _cmake_import_check_targets ipa_ros2_control::ipa_ros2_control )
list(APPEND _cmake_import_check_files_for_ipa_ros2_control::ipa_ros2_control "${_IMPORT_PREFIX}/lib/libipa_ros2_control.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
