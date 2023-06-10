cmake_minimum_required(VERSION 3.8)

project(StudentProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(StudentProject Student.cpp StudentTests.cpp)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

target_link_libraries(StudentProject ${GTEST_LIBRARIES} pthread)
