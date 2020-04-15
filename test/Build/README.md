# How to build this project
## Prerequisites
- Install IAR 8.32
- Set the environment variable `CMAKE_IAR_8.32_PATH` with the path to IAR binaries as value

## Generating the build in Debug mode  
`cmake -Bbuild -G "Ninja" -DCMAKE_TOOLCHAIN_FILE=_deps\toolchains-src\ToolchainIAR_8.32_cm0.cmake -DCMAKE_BUILD_TYPE=Debug`
### Building  
`cmake --build build --target blinky`

## Generating the build in Release mode  
`cmake -Bbuild -G "Ninja" -DCMAKE_TOOLCHAIN_FILE=_deps\toolchains-src\ToolchainIAR_8.32_cm0.cmake -DCMAKE_BUILD_TYPE=Release`
### Building  
`cmake --build build --target blinky`
