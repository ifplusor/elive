link_libraries(liveMedia groupsock BasicUsageEnvironment UsageEnvironment)

add_executable(openRTSP.cpp
        playCommon.hh playCommon.cpp openRTSP.cpp)

add_executable(testH264VideoStreamer
        testH264VideoStreamer.cpp)

add_executable(testH264VideoToTransportStream
        testH264VideoToTransportStream.cpp)

add_executable(testMP3Streamer
        testMP3Streamer.cpp)

add_executable(testOnDemandRTSPServer
        testOnDemandRTSPServer.cpp)
