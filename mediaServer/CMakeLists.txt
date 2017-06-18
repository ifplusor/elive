cmake_minimum_required(VERSION 2.8)
#project(mediaServer)


add_executable(live555MediaServer
		live555MediaServer.cpp DynamicRTSPServer.cpp)
target_link_libraries(live555MediaServer PRIVATE
		UsageEnvironment groupsock liveMedia BasicUsageEnvironment)

