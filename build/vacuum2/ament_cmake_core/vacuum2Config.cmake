# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_vacuum2_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED vacuum2_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(vacuum2_FOUND FALSE)
  elseif(NOT vacuum2_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(vacuum2_FOUND FALSE)
  endif()
  return()
endif()
set(_vacuum2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT vacuum2_FIND_QUIETLY)
  message(STATUS "Found vacuum2: 0.0.0 (${vacuum2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'vacuum2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT vacuum2_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(vacuum2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${vacuum2_DIR}/${_extra}")
endforeach()
