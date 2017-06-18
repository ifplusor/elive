cmake_minimum_required(VERSION 2.8)
#project(testProgs)


link_libraries(groupsock liveMedia BasicUsageEnvironment UsageEnvironment)

add_executable(testMP3Streamer testMP3Streamer.cpp)

