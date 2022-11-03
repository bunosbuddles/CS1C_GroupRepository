# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/NFLProject_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/NFLProject_autogen.dir/ParseCache.txt"
  "NFLProject_autogen"
  )
endif()
