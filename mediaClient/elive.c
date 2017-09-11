//
// Created by James on 2017/8/17.
//

#include "elive.h"
#include <stdlib.h>

typedef struct esession_s {
  evideo_t vtype;
  eaudio_t atype;
  evideo_source vsource;
  eaudio_source asource;
  void *udata;
  void *hd;
} esession_s;

void *elive_create_session(evideo_t vtype, eaudio_t atype,
                           evideo_source vsource, eaudio_source asource,
                           void *data) {
  esession_s *s = (esession_s *) malloc(sizeof(esession_s));
  s->vtype = vtype;
  s->atype = atype;
  s->vsource = vsource;
  s->asource = asource;
  s->udata = data;
  return s;
}

