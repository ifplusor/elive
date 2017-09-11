//
// Created by James on 2017/8/17.
//

#ifndef __ELIVE_ELIVE_H__
#define __ELIVE_ELIVE_H__

typedef enum evideo_t {
  ELIVE_VIDEO_NONE,
  ELIVE_VIDEO_H264,
  ELIVE_VIDEO_H265,
  ELIVE_VIDEO_MP4,
} evideo_t;

typedef enum eaudio_t {
  ELIVE_AUDIO_NONE,
  ELIVE_AUDIO_AAC,
  ELIVE_AUDIO_MP3,
} eaudio_t;

typedef void (*evideo_source)(void *data);
typedef void (*eaudio_source)(void *data);

void *elive_create_session(evideo_t vtype, eaudio_t atype,
                           evideo_source vsource, eaudio_source asource,
                           void *data);

#endif //__ELIVE_ELIVE_H__
