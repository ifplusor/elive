set(HEADER_FILES
        include/TunnelEncaps.hh include/groupsock_version.hh
        include/GroupsockHelper.hh include/GroupEId.hh include/Groupsock.hh
        include/NetCommon.h include/NetInterface.hh include/NetAddress.hh
        include/IOHandlers.hh)

set(SOURCE_FILES
        GroupsockHelper.cpp GroupEId.cpp inet.c Groupsock.cpp
        NetInterface.cpp NetAddress.cpp IOHandlers.cpp)

add_library(groupsock STATIC
        ${HEADER_FILES} ${SOURCE_FILES})
target_include_directories(groupsock
        PUBLIC include)
target_link_libraries(groupsock
        PUBLIC UsageEnvironment)
target_compile_options(groupsock
        PRIVATE -fPIC)

