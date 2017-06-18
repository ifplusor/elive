cmake_minimum_required(VERSION 2.8)
#project(liveMedia)


set(MP3_SOURCE_OBJS MP3FileSource.cpp MP3Transcoder.cpp MP3ADU.cpp MP3ADUdescriptor.cpp
		MP3ADUinterleaving.cpp MP3ADUTranscoder.cpp MP3StreamState.cpp MP3Internals.cpp
		MP3InternalsHuffman.cpp MP3InternalsHuffmanTable.cpp MP3ADURTPSource.cpp)
set(MPEG_SOURCE_OBJS MPEG1or2Demux.cpp MPEG1or2DemuxedElementaryStream.cpp MPEGVideoStreamFramer.cpp
		MPEG1or2VideoStreamFramer.cpp MPEG1or2VideoStreamDiscreteFramer.cpp MPEG4VideoStreamFramer.cpp
		MPEG4VideoStreamDiscreteFramer.cpp H264or5VideoStreamFramer.cpp H264or5VideoStreamDiscreteFramer.cpp
		H264VideoStreamFramer.cpp H264VideoStreamDiscreteFramer.cpp H265VideoStreamFramer.cpp
		H265VideoStreamDiscreteFramer.cpp MPEGVideoStreamParser.cpp MPEG1or2AudioStreamFramer.cpp
		MPEG1or2AudioRTPSource.cpp MPEG4LATMAudioRTPSource.cpp MPEG4ESVideoRTPSource.cpp MPEG4GenericRTPSource.cpp
		${MP3_SOURCE_OBJS} MPEG1or2VideoRTPSource.cpp MPEG2TransportStreamMultiplexor.cpp
		MPEG2TransportStreamFromPESSource.cpp MPEG2TransportStreamFromESSource.cpp MPEG2TransportStreamFramer.cpp
		MPEG2TransportStreamAccumulator.cpp ADTSAudioFileSource.cpp)
set(H263_SOURCE_OBJS H263plusVideoRTPSource.cpp H263plusVideoStreamFramer.cpp H263plusVideoStreamParser.cpp)
set(AC3_SOURCE_OBJS AC3AudioStreamFramer.cpp AC3AudioRTPSource.cpp)
set(DV_SOURCE_OBJS DVVideoStreamFramer.cpp DVVideoRTPSource.cpp)
set(MP3_SINK_OBJS MP3ADURTPSink.cpp)
set(MPEG_SINK_OBJS MPEG1or2AudioRTPSink.cpp ${MP3_SINK_OBJS} MPEG1or2VideoRTPSink.cpp MPEG4LATMAudioRTPSink.cpp
		MPEG4GenericRTPSink.cpp MPEG4ESVideoRTPSink.cpp)
set(H263_SINK_OBJS H263plusVideoRTPSink.cpp)
set(H264_OR_5_SINK_OBJS H264or5VideoRTPSink.cpp H264VideoRTPSink.cpp H265VideoRTPSink.cpp)
set(DV_SINK_OBJS DVVideoRTPSink.cpp)
set(AC3_SINK_OBJS AC3AudioRTPSink.cpp)

set(MISC_SOURCE_OBJS MediaSource.cpp FramedSource.cpp FramedFileSource.cpp FramedFilter.cpp ByteStreamFileSource.cpp
		ByteStreamMultiFileSource.cpp ByteStreamMemoryBufferSource.cpp BasicUDPSource.cpp DeviceSource.cpp
		AudioInputDevice.cpp WAVAudioFileSource.cpp ${MPEG_SOURCE_OBJS} ${H263_SOURCE_OBJS} ${AC3_SOURCE_OBJS}
		${DV_SOURCE_OBJS} JPEGVideoSource.cpp AMRAudioSource.cpp AMRAudioFileSource.cpp InputFile.cpp
		StreamReplicator.cpp)
set(MISC_SINK_OBJS MediaSink.cpp FileSink.cpp BasicUDPSink.cpp AMRAudioFileSink.cpp H264or5VideoFileSink.cpp
		H264VideoFileSink.cpp H265VideoFileSink.cpp OggFileSink.cpp ${MPEG_SINK_OBJS} ${H263_SINK_OBJS}
		${H264_OR_5_SINK_OBJS} ${DV_SINK_OBJS} ${AC3_SINK_OBJS} VorbisAudioRTPSink.cpp TheoraVideoRTPSink.cpp
		VP8VideoRTPSink.cpp VP9VideoRTPSink.cpp GSMAudioRTPSink.cpp JPEGVideoRTPSink.cpp SimpleRTPSink.cpp
		AMRAudioRTPSink.cpp T140TextRTPSink.cpp TCPStreamSink.cpp OutputFile.cpp)
set(MISC_FILTER_OBJS uLawAudioFilter.cpp)
set(TRANSPORT_STREAM_TRICK_PLAY_OBJS MPEG2IndexFromTransportStream.cpp MPEG2TransportStreamIndexFile.cpp
		MPEG2TransportStreamTrickModeFilter.cpp)

set(RTP_SOURCE_OBJS RTPSource.cpp MultiFramedRTPSource.cpp SimpleRTPSource.cpp H261VideoRTPSource.cpp
		H264VideoRTPSource.cpp H265VideoRTPSource.cpp QCELPAudioRTPSource.cpp AMRAudioRTPSource.cpp
		JPEGVideoRTPSource.cpp VorbisAudioRTPSource.cpp TheoraVideoRTPSource.cpp VP8VideoRTPSource.cpp
		VP9VideoRTPSource.cpp)
set(RTP_SINK_OBJS RTPSink.cpp MultiFramedRTPSink.cpp AudioRTPSink.cpp VideoRTPSink.cpp TextRTPSink.cpp)
set(RTP_INTERFACE_OBJS RTPInterface.cpp)
set(RTP_OBJS ${RTP_SOURCE_OBJS} ${RTP_SINK_OBJS} ${RTP_INTERFACE_OBJS})

set(RTCP_OBJS RTCP.cpp rtcp_from_spec.c)
set(GENERIC_MEDIA_SERVER_OBJS GenericMediaServer.cpp)
set(RTSP_OBJS RTSPServer.cpp RTSPServerRegister.cpp RTSPClient.cpp RTSPCommon.cpp
		RTSPServerSupportingHTTPStreaming.cpp RTSPRegisterSender.cpp)
set(SIP_OBJS SIPClient.cpp)

set(SESSION_OBJS MediaSession.cpp ServerMediaSession.cpp PassiveServerMediaSubsession.cpp
		OnDemandServerMediaSubsession.cpp FileServerMediaSubsession.cpp MPEG4VideoFileServerMediaSubsession.cpp
		H264VideoFileServerMediaSubsession.cpp H265VideoFileServerMediaSubsession.cpp
		H263plusVideoFileServerMediaSubsession.cpp WAVAudioFileServerMediaSubsession.cpp
		AMRAudioFileServerMediaSubsession.cpp MP3AudioFileServerMediaSubsession.cpp
		MPEG1or2VideoFileServerMediaSubsession.cpp MPEG1or2FileServerDemux.cpp MPEG1or2DemuxedServerMediaSubsession.cpp
		MPEG2TransportFileServerMediaSubsession.cpp ADTSAudioFileServerMediaSubsession.cpp
		DVVideoFileServerMediaSubsession.cpp AC3AudioFileServerMediaSubsession.cpp
		MPEG2TransportUDPServerMediaSubsession.cpp ProxyServerMediaSession.cpp)

set(QUICKTIME_OBJS QuickTimeFileSink.cpp QuickTimeGenericRTPSource.cpp)
set(AVI_OBJS AVIFileSink.cpp)

set(MATROSKA_FILE_OBJS MatroskaFile.cpp MatroskaFileParser.cpp EBMLNumber.cpp MatroskaDemuxedTrack.cpp)
set(MATROSKA_SERVER_MEDIA_SUBSESSION_OBJS MatroskaFileServerMediaSubsession.cpp
		MP3AudioMatroskaFileServerMediaSubsession.cpp)
set(MATROSKA_RTSP_SERVER_OBJS MatroskaFileServerDemux.cpp ${MATROSKA_SERVER_MEDIA_SUBSESSION_OBJS})
set(MATROSKA_OBJS ${MATROSKA_FILE_OBJS} ${MATROSKA_RTSP_SERVER_OBJS})

set(OGG_FILE_OBJS OggFile.cpp OggFileParser.cpp OggDemuxedTrack.cpp)
set(OGG_SERVER_MEDIA_SUBSESSION_OBJS OggFileServerMediaSubsession.cpp)
set(OGG_RTSP_SERVER_OBJS OggFileServerDemux.cpp ${OGG_SERVER_MEDIA_SUBSESSION_OBJS})
set(OGG_OBJS ${OGG_FILE_OBJS} ${OGG_RTSP_SERVER_OBJS})

set(MISC_OBJS BitVector.cpp StreamParser.cpp DigestAuthentication.cpp ourMD5.cpp Base64.cpp Locale.cpp)

set(LIVEMEDIA_LIB_OBJS Media.cpp ${MISC_SOURCE_OBJS} ${MISC_SINK_OBJS} ${MISC_FILTER_OBJS} ${RTP_OBJS}
		${RTCP_OBJS} ${GENERIC_MEDIA_SERVER_OBJS} ${RTSP_OBJS} ${SIP_OBJS} ${SESSION_OBJS} ${QUICKTIME_OBJS}
		${AVI_OBJS} ${TRANSPORT_STREAM_TRICK_PLAY_OBJS} ${MATROSKA_OBJS} ${OGG_OBJS} ${MISC_OBJS})

add_library(liveMedia STATIC
		${LIVEMEDIA_LIB_OBJS})
set_target_properties(liveMedia PROPERTIES PREFIX "")
target_include_directories(liveMedia PUBLIC
		${PROJECT_SOURCE_DIR}/UsageEnvironment/include
		${PROJECT_SOURCE_DIR}/groupsock/include
		${PROJECT_SOURCE_DIR}/liveMedia/include)
target_compile_options(liveMedia
		PRIVATE -fPIC)

