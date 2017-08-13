cmake_minimum_required(VERSION 2.8)
project(elive)


set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#set(CMAKE_VERBOSE_MAKEFILE ON)

IF (WIN32)
    MESSAGE("compile for win32")
    IF (MINGW)
        MESSAGE("use mingw toolchain")
        add_compile_options(-O)
        add_definitions(-DSOCKLEN_T=int -DLOCALE_NOT_USED)
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DUSE_OUR_BZERO=1 -D__MINGW32__")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__MINGW32__ -Wall -Wno-deprecated")
    ELSEIF (MSYS)
        MESSAGE("use msys toolchain")
    ENDIF ()
    link_libraries(ws2_32)
ELSEIF (UNIX)
    MESSAGE("compile for unix-like OS, include OS X and Cygwin")
    add_definitions(-DSOCKLEN_T=socklen_t -D_LARGEFILE_SOURCE=1 -D_FILE_OFFSET_BITS=64)
    add_compile_options(-O2)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -DBSD=1")
ENDIF ()

#set(CMAKE_C_STANDARD 99)
#set(CMAKE_CXX_STANDARD 11)


add_subdirectory(UsageEnvironment)
add_subdirectory(groupsock)
add_subdirectory(liveMedia)
add_subdirectory(BasicUsageEnvironment)
add_subdirectory(mediaServer)
add_subdirectory(mediaClient)
add_subdirectory(testProgs)

