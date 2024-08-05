# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "CMakeFiles\\Phone_number_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Phone_number_autogen.dir\\ParseCache.txt"
  "Phone_number_autogen"
  )
endif()
