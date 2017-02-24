cmake_minimum_required(VERSION 3.0)

# PROJECT_NAMEを設定する
project(hello)
set(SOURCE hello.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})
