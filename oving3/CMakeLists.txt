# CMakeList.txt : CMake project for oving1, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (oving3 "src/core/Main.cpp" "src/modules/Circle.cpp" "include/Circle.h" "include/Commodity.h" "src/modules/Commodity.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET oving3 PROPERTY CXX_STANDARD 20)
endif()
