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
  Ex56
  src/Ex56.cpp
  Ex56Test.cpp
)

add_executable(
  Ex56Main
  src/Ex56.cpp
  Ex56Main.cpp
)

target_link_libraries(
  Ex56
  GTest::gtest_main
)
