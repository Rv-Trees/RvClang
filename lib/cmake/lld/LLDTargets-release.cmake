#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lld" for configuration "Release"
set_property(TARGET lld APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(lld PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/lld"
  )

list(APPEND _cmake_import_check_targets lld )
list(APPEND _cmake_import_check_files_for_lld "${_IMPORT_PREFIX}/bin/lld" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
