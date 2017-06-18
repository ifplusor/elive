cmake_minimum_required(VERSION 2.8)
#project(UsageEnvironment)


add_library(UsageEnvironment STATIC
		UsageEnvironment.cpp HashTable.cpp strDup.cpp)
target_include_directories(UsageEnvironment PUBLIC
		${PROJECT_SOURCE_DIR}/UsageEnvironment/include
		${PROJECT_SOURCE_DIR}/groupsock/include)
target_compile_options(UsageEnvironment
		PRIVATE -fPIC)

