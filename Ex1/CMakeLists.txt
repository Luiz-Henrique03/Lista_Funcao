cmake_minimum_required(VERSION 3.14)
project(GTest)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
  Ex1
  /home/luiz/Lista_Funcao/Lista_Funções/Ex1/main/Ex1.cpp
  Ex1Test.cpp
)


target_link_libraries(
  Ex1
  GTest::gtest_main
)
