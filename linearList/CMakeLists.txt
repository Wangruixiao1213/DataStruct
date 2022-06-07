cmake_minimum_required(VERSION 3.14)
project(linearList)

set(CMAKE_CXX_STANDARD 14)

add_executable(seqList seqTest.cpp seqList.cpp seqList.h utlib.h)
add_executable(nodeList nodeList.cpp nodeList.h node.h nodeTest.cpp)