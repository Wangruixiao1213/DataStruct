cmake_minimum_required(VERSION 3.15)
project(limitedLinearList)

set(CMAKE_CXX_STANDARD 14)

add_executable(linkStack stackTest.cpp linkStack.cpp linkStack.h utlib.h node.h)