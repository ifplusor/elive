set(HEADER_FILES
        include/Boolean.hh include/HashTable.hh include/strDup.hh
        include/UsageEnvironment_version.hh include/UsageEnvironment.hh)

set(SOURCE_FILES
        UsageEnvironment.cpp HashTable.cpp strDup.cpp)

add_library(UsageEnvironment STATIC
        ${HEADER_FILES} ${SOURCE_FILES})
target_include_directories(UsageEnvironment
        PUBLIC include)
target_link_libraries(UsageEnvironment
        PUBLIC groupsock)
target_compile_options(UsageEnvironment
        PRIVATE -fPIC)

