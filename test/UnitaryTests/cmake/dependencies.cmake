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

# Get CppUTest library from SVN
FetchContent_Declare(
    cpputest
    SVN_REPOSITORY svn://srvcao/somfysw/Tool/OutilsDeTest/cpputest
    SVN_REVISION -r177244
)
FetchContent_MakeAvailable(cpputest)
