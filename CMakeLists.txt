cmake_minimum_required(VERSION 3.10)
project(CI-CD)

set(CMAKE_CXX_STANDARD 17)
file(GLOB SOURCES "src/cpp/*.cpp")
include_directories(../src/h)
add_executable(CI-CD ${SOURCES})