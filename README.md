# CHIP-8 Emulator

A simple [CHIP-8 Emulator](http://en.wikipedia.org/wiki/CHIP-8) written in C++.

## Building

With [CMake](https://cmake.org/) and [vcpkg](https://vcpkg.io/en/getting-started.html) installed,
clone the repository and run the following commands in the project directory

```sh
$ mkdir build && cd build
$ cmake .. -DCMAKE_TOOLCHAIN_FILE="<PATH_TO_VCPKG>/scripts/buildsystems/vcpkg.cmake"
$ make
```
