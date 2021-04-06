cmake_minimum_required(VERSION 3.5)
project(gtest-demo)

message(STATUS "CMake version    : " ${CMAKE_SYSTEM_VERSION})
message(STATUS "Compiler         : " ${CMAKE_CXX_COMPILER})
message(STATUS "Operating System : " ${CMAKE_SYSTEM})
set(CMAKE_CXX_STANDARD 11)

# ------------------------------
# because we have those files:
# /usr/share/cmake-3.19/Modules/FindGTest.cmake
# or, /usr/local/share/cmake-3.19/Modules/FindGTest.cmake
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
enable_testing()

# ------------------------------
add_executable(test-simple
    test/test-simple.cpp
)
target_link_libraries(test-simple
    gtest
    gtest_main
    pthread
)
add_test(
    NAME     test-simple
    COMMAND ./test-simple
)

# ------------------------------
add_executable(test-class1
    test/test-class1.cpp
)
target_link_libraries(test-class1
    gtest
    gtest_main
    pthread
)
add_test(
    NAME     test-class1
    COMMAND ./test-class1
)

# ------------------------------
add_executable(test-class2
    test/test-class2.cpp
)
target_link_libraries(test-class2
    gtest
    gtest_main
    pthread
)
add_test(
    NAME     test-class2
    COMMAND ./test-class2
)
