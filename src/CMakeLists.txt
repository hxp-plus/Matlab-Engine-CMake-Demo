
add_executable(main
        main.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -I /opt/MATLAB/extern/include -L /opt/MATLAB/extern/bin/glnxa64 -pthread -lMatlabDataArray -lMatlabEngine")
