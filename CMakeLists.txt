cmake_minimum_required(VERSION 3.10)
project(CI-CD)

set(CMAKE_CXX_STANDARD 17)
file(GLOB SOURCES "src/cpp/*.cpp")
add_executable(CI-CD ${SOURCES})

# Proper include path (FIX)
target_include_directories(CI-CD PRIVATE
    ${PROJECT_SOURCE_DIR}/src/h
)