### ---------------------------------------------------------------------------
### --- FETCH TOOLCHAINS DEFINITIONS
### ---------------------------------------------------------------------------

# Download toolchains cmake files. TO DO BEFORE project() COMMAND
include(FetchContent)
FetchContent_Declare(
    toolchains
    GIT_REPOSITORY ssh://git@bitbucket.srl4417r.hq001.corp.sfy:7999/cmt/cmake-toolchains.git
    GIT_TAG 0.1.0
)
FetchContent_makeAvailable(toolchains)
