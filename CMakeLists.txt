cmake_minimum_required(VERSION 3.23)
project(semilife_server)

set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(Boost)
find_package(Eigen3)

add_subdirectory(include/entities)
add_subdirectory(include/common)
add_subdirectory(include/managers)
add_executable(semilife_server src/main.cpp)

target_link_libraries(semilife_server PRIVATE Boost::boost semilife_server::entities semilife_server::common semilife_server::managers)
target_link_libraries(semilife_server PRIVATE Eigen3::Eigen3)
target_include_directories(semilife_server PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>"
        "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>")

