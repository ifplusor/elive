cmake_minimum_required(VERSION 2.8)
#project(testProgs)


link_libraries(UsageEnvironment groupsock liveMedia BasicUsageEnvironment)

add_executable(testMP3Streamer testMP3Streamer.cpp)

