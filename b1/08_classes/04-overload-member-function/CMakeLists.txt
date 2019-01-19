cmake_minimum_required(VERSION 3.0)

# flags
SET(COMPILE-FLAGS "-Wall -Wextra -g")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_COMPILE-FLAGS}")

project(04-overload-member-function)

include_directories()

add_executable(output main.cpp Class.cpp)
