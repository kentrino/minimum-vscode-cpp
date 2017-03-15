cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# PROJECT_NAMEを設定する
project(hello)

# インクルードディレクトリを設定
include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCE src/hello.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})

# Enable testing for the project
# これいる？何をしてくれる？
enable_testing()

# TEST_DIRECTORY的なのはどこで定義するの?
# test/のルートは？
add_executable(test_math test/test_math.cpp)

# NAMEの意味は？
add_test(NAME test_math COMMAND test_math --force-colour)
