#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "OpenZen::OpenZen" for configuration "Release"
set_property(TARGET OpenZen::OpenZen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(OpenZen::OpenZen PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libOpenZen.so"
  IMPORTED_SONAME_RELEASE "libOpenZen.so"
  )

list(APPEND _cmake_import_check_targets OpenZen::OpenZen )
list(APPEND _cmake_import_check_files_for_OpenZen::OpenZen "${_IMPORT_PREFIX}/lib/libOpenZen.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
