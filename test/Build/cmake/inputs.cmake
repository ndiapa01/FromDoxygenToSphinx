### ---------------------------------------------------------------------------
### --- PROJECT INPUT PARAMETERS
### ---------------------------------------------------------------------------

### --- Check compilation mode
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(TARGET_SUFFIX "_dbg")
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(TARGET_SUFFIX "")
else()
    message(SEND_ERROR "CMAKE_BUILD_TYPE parameter must be set to Debug or Release")
endif()

message(STATUS "Building for:")
message(STATUS "    Toolchain: ${TOOLCHAIN_NAME}")
message(STATUS "    Build type: ${CMAKE_BUILD_TYPE}")
