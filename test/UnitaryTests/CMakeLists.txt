### ---------------------------------------------------------------------------
### --- ENVIRONMENT CONFIGURATION
### ---------------------------------------------------------------------------
# Set minimum required version of CMake
cmake_minimum_required(VERSION 3.16)

include(FetchContent)

# Download toolchains definitions. TO BE INCLUDED BEFORE project() COMMAND
message(STATUS "Fetching toolchains")
include("cmake/toolchains.cmake")

### ---------------------------------------------------------------------------
### --- PROJECT DESCRIPTION
### ---------------------------------------------------------------------------

### --- Project name followed by used languages
project(UT_blinky CXX)

### --- Declaring dependencies
message(STATUS "Fetching dependencies")
include("cmake/dependencies.cmake")

### --- Declare targets
message(STATUS "Declaring targets")
include("cmake/targets.cmake")
