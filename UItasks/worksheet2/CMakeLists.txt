cmake_minimum_required(VERSION 3.16)
project(rectangle VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(testrect testrect.cpp rect.cpp)
add_executable(shapedemo shapedemo.cpp circle2.cpp rect.cpp)