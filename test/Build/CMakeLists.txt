### ---------------------------------------------------------------------------
### --- ENVIRONMENT CONFIGURATION
### ---------------------------------------------------------------------------
# Set minimum required version of CMake
cmake_minimum_required(VERSION 3.16)

# Download toolchains definitions. TO BE INCLUDED BEFORE project() COMMAND
message(STATUS "Fetching toolchains")
include("cmake/toolchains.cmake")

### ---------------------------------------------------------------------------
### --- PROJECT DESCRIPTION
### ---------------------------------------------------------------------------

### --- Project name followed by used languages
project(Build_blinky C CXX ASM)

### --- Validate input parameters
message(STATUS "Validating input parameters")
include("cmake/inputs.cmake")

### --- Declaring dependencies
message(STATUS "Fetching dependencies")
include("cmake/dependencies.cmake")
