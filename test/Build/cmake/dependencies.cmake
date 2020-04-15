### ---------------------------------------------------------------------------
### --- PROJECT PRIVATE DEPENDENCIES
### ---------------------------------------------------------------------------

### --- Fetch blinky sources
set(FETCHCONTENT_SOURCE_DIR_BLINKY "../../" CACHE STRING "")
FetchContent_Declare(
    blinky
    GIT_REPOSITORY ssh://git@bitbucket.srl4417r.hq001.corp.sfy:7999/cmt/blinky.git
    GIT_TAG 0.1.0
)
FetchContent_MakeAvailable(blinky)
