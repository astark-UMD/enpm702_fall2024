cmake_minimum_required(VERSION 3.20.0)
project(lecture2 VERSION 0.1.0)
#project(lecture1 VERSION 0.1.0)

# compilation flags
# add_compile_options(-Wall)

include_directories(lecture2/include)
#include_directories(lecture1/include)

add_executable(lecture2 lecture2/src/lecture2.cpp)
#add_executable(lecture1 lecture1/src/lecture1.cpp)

set_property(TARGET lecture2 PROPERTY CXX_STANDARD 17)
#set_property(TARGET lecture1 PROPERTY CXX_STANDARD 17)