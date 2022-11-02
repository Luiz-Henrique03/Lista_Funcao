cmake_minimum_required(VERSION 3.14)
project(GTest)

set(CMAKE_CXX_STANDARD 14)

include_directories(inc)


include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
  Ex28
  src/Ex28.cpp
  Ex28Test.cpp
)

add_executable(
  Ex28Main
  src/Ex28.cpp
  Ex28Main.cpp
)

target_link_libraries(
  Ex28
  GTest::gtest_main
)
