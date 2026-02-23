cmake_minimum_required(VERSION 3.10)
project(BuildCICD)

set(CMAKE_CXX_STANDARD 17)
add_executable(BuildCICD CheckCICD.cpp)