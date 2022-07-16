cmake_minimum_required(VERSION 3.15)
project(conan_t CXX)

add_library(conan_t src/conan_t.cpp)
target_include_directories(conan_t PUBLIC include)

set_target_properties(conan_t PROPERTIES PUBLIC_HEADER "include/conan_t.h")
install(TARGETS conan_t)
