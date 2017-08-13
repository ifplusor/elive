set(HEADER_FILES
        include/DarwinInjector.hh)

set(SOURCE_FILES
        DarwinInjector.cpp pushVideoToDarwin.cpp)

add_executable(mediaClient
        ${HEADER_FILES} ${SOURCE_FILES})
target_include_directories(mediaClient PUBLIC
        ${PROJECT_SOURCE_DIR}/mediaClient/include)
target_link_libraries(mediaClient PRIVATE
        groupsock liveMedia BasicUsageEnvironment UsageEnvironment)

