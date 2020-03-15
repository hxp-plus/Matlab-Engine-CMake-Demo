# Matlab-Engine-CMake-Demo

A demo to show how to use CMake to build MATLAB Engine App written in C++

## Requirements ##

Platform: 
- Linux (Other platforms might also be ok since CMake is cross-platformed)

Compiler: 
- g++ (My g++ version: g++ (Arch Linux 9.2.1+20200130-2) 9.2.1 20200130)
- CMake

MATLAB:
- My version is R2019b
- My MATLAB installation directory is `/opt/MATLAB/`

Environment Variables:

- Add `<your_matlab_installation_dir>/extern/bin/glnxa64:<your_matlab_installation_dir>/sys/os/glnxa64/`to `LD_LIBRARY_PATH`

- For me, my MATLAB installation directory is `/opt/MATLAB/`

``` shell
export LD_LIBRARY_PATH=/opt/MATLAB/extern/bin/glnxa64:/opt/MATLAB/sys/os/glnxa64/:$LD_LIBRARY_PATH
```

## Instructions on Making the project ##

- `cd` into where this `README.md` is located.
- Change the MATLAB installation directory in `src/CMakeLists.txt` according to your own situations.
- rename `<your_matlab_installation_dir>/sys/os/glnxa64/libstdc++.so.6` to `libstdc++.so.6.old`
- run `cmake .`
- run `make`

The executable is located in `bin`
