set(HEADER_FILES
        include/DarwinInjector.hh include/elive.h)

set(SOURCE_FILES
        DarwinInjector.cpp pushVideoToDarwin.cpp elive.c ExternSource.hpp)

add_executable(mediaClient
        ${HEADER_FILES} ${SOURCE_FILES})
target_include_directories(mediaClient PUBLIC
        ${PROJECT_SOURCE_DIR}/mediaClient/include)
target_link_libraries(mediaClient PRIVATE
        liveMedia groupsock BasicUsageEnvironment UsageEnvironment)

