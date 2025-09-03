# CMakeList.txt : CMake project for oving1, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (oving1 "src/core/Main.cpp"  "include/Temp.h" "src/modules/Temp.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET oving1 PROPERTY CXX_STANDARD 20)
endif()


# resource folder for oving1
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/resources 
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})


# TODO: Add tests and install targets if needed.
