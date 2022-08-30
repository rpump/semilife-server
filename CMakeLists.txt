cmake_minimum_required(VERSION 3.23)
project(semilife_server)

set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(Boost)

add_executable(semilife_server src/main.cpp)

target_link_libraries(semilife_server PRIVATE Boost::boost)
