cmake_minimum_required (VERSION 2.8)
project (MUXMul)

include_directories(${SC_PATH}/include/plugin_interface)
include_directories(${SC_PATH}/include/common)
include_directories(${SC_PATH}/external_libraries/libsndfile/)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_SHARED_MODULE_PREFIX "")
if(APPLE OR WIN32)
set(CMAKE_SHARED_MODULE_SUFFIX ".scx")
endif()

add_library(MUXMul10 MODULE MUXMul.cpp)
add_library(MUXMul100 MODULE MUXMul.cpp)