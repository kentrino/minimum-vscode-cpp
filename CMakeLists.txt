cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# PROJECT_NAMEを設定する
project(hello)
set(SOURCE hello.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})
