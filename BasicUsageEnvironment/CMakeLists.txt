cmake_minimum_required(VERSION 2.8)
#project(BasicUsageEnvironment)


add_library(BasicUsageEnvironment STATIC
		BasicUsageEnvironment0.cpp BasicUsageEnvironment.cpp BasicTaskScheduler0.cpp
		BasicTaskScheduler.cpp DelayQueue.cpp BasicHashTable.cpp)
target_include_directories(BasicUsageEnvironment PUBLIC
		${PROJECT_SOURCE_DIR}/UsageEnvironment/include
		${PROJECT_SOURCE_DIR}/groupsock/include
		${PROJECT_SOURCE_DIR}/BasicUsageEnvironment/include)
target_compile_options(BasicUsageEnvironment
		PRIVATE -fPIC)

