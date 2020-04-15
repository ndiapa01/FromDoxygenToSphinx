
### ---------------------------------------------------------------------------
### --- ENVIRONMENT CONFIGURATION
### ---------------------------------------------------------------------------
# Set minimum required version of CMake
cmake_minimum_required(VERSION 3.15)

# Download toolchains definitions. TO BE INCLUDED BEFORE project() COMMAND

message(STATUS "Fetching toolchains")
include("toolchains.cmake")

### ---------------------------------------------------------------------------
### --- PROJECT DESCRIPTION
### ---------------------------------------------------------------------------

### --- Project name followed by used languages
project(BlinkyLib C CXX ASM)

### fetching dependencies 
message(STATUS "Validating input parameters")
include("dependencies.cmake")
### --- Validate input parameters
message(STATUS "Validating input parameters")
include("inputs.cmake")

### --- Declare targets
message(STATUS "Declaring targets")
include("targets.cmake")
