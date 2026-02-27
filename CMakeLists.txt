cmake_minimum_required(VERSION 4.1)
project(leet_code)

set(CMAKE_CXX_STANDARD 23)

add_executable(leet_code main.cpp)


include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG main
)

set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(gtest_force_shared_crt OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

add_subdirectory(utils)
add_subdirectory(easy)
add_subdirectory(medium)
add_subdirectory(fractals)
