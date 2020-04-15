# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.17.0-rc1)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(toolchains-populate NONE)

include(ExternalProject)
ExternalProject_Add(toolchains-populate
                     "UPDATE_DISCONNECTED" "False" "GIT_REPOSITORY" "http://bitbucket.srl4417r.hq001.corp.sfy/scm/~faurad01/cmake_toolchains.git" "GIT_TAG" "develop"
                    SOURCE_DIR          "C:/Users/ndiapa01/Desktop/documentation_generation/build/_deps/toolchains-src"
                    BINARY_DIR          "C:/Users/ndiapa01/Desktop/documentation_generation/build/_deps/toolchains-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
