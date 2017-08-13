set(HEADER_FILES
        include/BasicUsageEnvironment0.hh include/BasicUsageEnvironment.hh
        include/BasicUsageEnvironment_version.hh
        include/DelayQueue.hh include/BasicHashTable.hh
        include/HandlerSet.hh)

set(SOURCE_FILES
        BasicUsageEnvironment0.cpp BasicUsageEnvironment.cpp
        BasicTaskScheduler0.cpp BasicTaskScheduler.cpp
        DelayQueue.cpp BasicHashTable.cpp)

add_library(BasicUsageEnvironment STATIC
        ${HEADER_FILES} ${SOURCE_FILES})
target_include_directories(BasicUsageEnvironment
        PUBLIC include)
target_link_libraries(BasicUsageEnvironment
        PUBLIC UsageEnvironment groupsock)
target_compile_options(BasicUsageEnvironment
        PRIVATE -fPIC)

