 g++ -std=c++11 -I /opt/MATLAB/extern/include -L /opt/MATLAB/extern/bin/glnxa64 -pthread main.cpp -lMatlabDataArray -lMatlabEngine -o main

# Errors that you might encounter

# /opt/MATLAB/sys/os/glnxa64/libstdc++.so.6: version `CXXABI_1.3.11' not found (required by ./a.out)

# Solution

# cd /opt/MATLAB/sys/os/glnxa64/
# sudo mv libstdc++.so.6 libstdc++.so.6.old
