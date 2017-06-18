cmake_minimum_required(VERSION 2.8)
#project(groupsock)


add_library(groupsock STATIC
		GroupsockHelper.cpp GroupEId.cpp inet.c Groupsock.cpp
		NetInterface.cpp NetAddress.cpp IOHandlers.cpp)
target_include_directories(groupsock PUBLIC
		${PROJECT_SOURCE_DIR}/UsageEnvironment/include
		${PROJECT_SOURCE_DIR}/groupsock/include)

