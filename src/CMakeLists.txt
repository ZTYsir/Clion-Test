cmake_minimum_required(VERSION 3.10)  # 你可以根据需要选择合适的最低 CMake 版本
project(CppTests CXX)
set(CMAKE_CXX_STANDARD 17)
# 添加可执行文件--适用于大的项目
add_executable(main main.cpp)
# 生成动态连接库
add_library(swap SHARED swap.cpp)
add_library(add SHARED add.cpp)
# 再链接
target_link_libraries(main swap add)

## 添加可执行文件--适用于小的项目
#add_executable(main main.cpp swap.cpp add.cpp)#所有源文件都编译到可执行程序 main 中,这样编译和链接过程都在一个步骤中完成。