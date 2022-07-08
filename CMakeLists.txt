cmake_minimum_required(VERSION 3.16.3)
project(serial_test CXX)

add_subdirectory(serial_connect)

include_directories(
	serial_connect/include
)

add_executable(serial_test serial_test.cpp)

target_link_libraries(serial_test
	serial_connect
)
