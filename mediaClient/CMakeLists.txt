cmake_minimum_required(VERSION 2.8)
#project(mediaClient)


add_executable(mediaClient
		DarwinInjector.cpp testMPEG4VideoToDarwin.cpp)
target_include_directories(mediaClient PUBLIC
		${PROJECT_SOURCE_DIR}/mediaClient/include)
target_link_libraries(mediaClient PRIVATE
		groupsock liveMedia BasicUsageEnvironment UsageEnvironment)

