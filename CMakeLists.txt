cmake_minimum_required(VERSION 3.13)
project(cpp-sky-down-example LANGUAGES CXX)
add_executable(${PROJECT_NAME} main.cpp drawing.cpp)
target_compile_features(
    ${PROJECT_NAME} PRIVATE cxx_std_17
)
