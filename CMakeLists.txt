cmake_minimum_required(VERSION 3.10)


# Set required library ZMQ
find_package(cppzmq REQUIRED)
# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(Interview)

# Add executables or libraries here
add_executable(run_me src/main.cpp)

# Specify any additional libraries or dependencies
target_link_libraries(run_me cppzmq)