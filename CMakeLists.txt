cmake_minimum_required(VERSION 3.15)
project(C++ with MATLAB)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -I /opt/MATLAB/extern/include -L /opt/MATLAB/extern/bin/glnxa64 -pthread -lMatlabDataArray -lMatlabEngine")
add_executable(main
        main.cpp)
