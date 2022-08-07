cmake_minimum_required(VERSION 3.10)

# set the project name
project(GOL VERSION 1.0.2)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(GOLConfig.h.in GOLConfig.h)

# add the executable
add_executable(GOL main.cpp)

target_include_directories(GOL PUBLIC
							"${PROJECT_BINARY_DIR}"
							)
