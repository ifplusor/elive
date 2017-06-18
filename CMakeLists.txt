cmake_minimum_required(VERSION 2.8)
project(live)


set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


IF (WIN32)
	MESSAGE("compile for win32")
	link_libraries(WS2_32)
ELSEIF (LINUX)
	MESSAGE("compile for unix-like OS, include OS X and Cygwin")
	SET(COMPILE_OPTS -m64 -fPIC -O2 -DSOCKLEN_T=socklen_t -D_LARGEFILE_SOURCE=1)
	SET(CMAKE_C_FLAG ${COMPILE_OPTS})
	SET(CMAKE_CXX_FLAG ${COMPILE_OPTS} -Wall -DBSD=1)
ENDIF ()

set(CMAKE_C_STANDARD 99)


add_subdirectory(UsageEnvironment)
add_subdirectory(groupsock)
add_subdirectory(liveMedia)
add_subdirectory(BasicUsageEnvironment)
add_subdirectory(mediaServer)
add_subdirectory(mediaClient)
add_subdirectory(testProgs)

