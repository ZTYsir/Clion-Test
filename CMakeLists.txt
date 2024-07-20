cmake_minimum_required(VERSION 3.10)  # 你可以根据需要选择合适的最低 CMake 版本
project(CppTests CXX)
# 头文件目录
include_directories(include)
# 包含子目录--src下的目录
add_subdirectory(src bin)
