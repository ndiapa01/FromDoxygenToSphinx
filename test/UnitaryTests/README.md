# How to build this project
## Prerequisites
- Install GCC 8.2
- Set the environment variable `CMAKE_GCC_8.2_DESKTOP_PATH` with the path to GCC binaries as value

## Generating the build
`cmake -Bbuild -G "Ninja" -DCMAKE_TOOLCHAIN_FILE=_deps\toolchains-src\ToolchainGCC_8.2_desktop.cmake`

## Building
`cmake --build build`
