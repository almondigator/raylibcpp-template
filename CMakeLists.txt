cmake_minimum_required(VERSION 3.11) # FetchContent requires at least 3.11
project(program)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
  raylib
  URL https://github.com/raysan5/raylib/archive/refs/tags/6.0.tar.gz
)

FetchContent_MakeAvailable(raylib)

add_executable(program main.cpp)
target_link_libraries(program raylib)