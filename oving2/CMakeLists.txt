# CMakeList.txt : CMake project for oving1, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (oving2 "src/core/Main.cpp" "include/Quest1.h" "src/modules/Quest1.cpp" "src/modules/Quest5.cpp" "include/Quest5.h" "include/Quest4.h" "src/modules/Quest4.cpp" "include/Quest3.h" "src/modules/Quest3.cpp" "include/Quest2.h" "src/modules/Quest2.cpp" "src/modules/Quest6.cpp" "include/Quest6.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET oving2 PROPERTY CXX_STANDARD 20)
endif()

