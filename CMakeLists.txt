cmake_minimum_required(VERSION 3.10)

# set the project name
project(GOL VERSION 1.0.0)

configure_file(GOLConfig.h.in GOLConfig.h)

# add the executable
add_executable(GOL main.cpp)

target_include_directories(GOL PUBLIC
							"${PROJECT_BINARY_DIR}"
							)
