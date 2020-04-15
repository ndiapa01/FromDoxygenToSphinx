### --- Declare target library bliny
add_library(
    blinky
)

### -- List the sources needed to build the target blinky
target_sources(
    blinky
PRIVATE
    ${CMAKE_SOURCE_DIR}/source/blinky.cpp
)

### -- List include paths needed to build the target library blinky
target_include_directories(
    blinky
PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

target_compile_options(
    blinky
PRIVATE
    -std=c++11
)

target_link_libraries(
	blinky
)


