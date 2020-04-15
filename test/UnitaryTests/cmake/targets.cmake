# # here we add CppUTest 
# # the library cpp utest already exist so no need to recreate it

add_executable(${CMAKE_PROJECT_NAME})

target_sources(
	${CMAKE_PROJECT_NAME}
PRIVATE
    ${CMAKE_SOURCE_DIR}/source/main.cpp
    ${CMAKE_SOURCE_DIR}/source/mocks/LedDriverMock.cpp
    ${CMAKE_SOURCE_DIR}/source/tests/TestBlinky_InitialState.cpp
    ${CMAKE_SOURCE_DIR}/source/tests/TestBlinky_Start.cpp
    ${CMAKE_SOURCE_DIR}/source/tests/TestBlinky_Stop.cpp
    ${CMAKE_SOURCE_DIR}/source/tests/TestBlinky_Refresh.cpp
)

target_include_directories(
    ${CMAKE_PROJECT_NAME}
PRIVATE
    ${CMAKE_SOURCE_DIR}/source/mocks
    ${cpputest_SOURCE_DIR}/trunk/include/CppUTest
    ${cpputest_SOURCE_DIR}/trunk/include/CppUTestExt
    ${cpputest_SOURCE_DIR}/trunk/include/
)

target_link_libraries(
	${CMAKE_PROJECT_NAME}
	blinky
    ${cpputest_SOURCE_DIR}/branches/CppUTest-gcc8.2.0/libcpputest.a
)

target_compile_options(
    ${CMAKE_PROJECT_NAME}
PRIVATE
    -std=c++11
    -fprofile-arcs
    -ftest-coverage
)

target_link_options(
    ${CMAKE_PROJECT_NAME}
PRIVATE
    -lgcov
    --coverage
)
