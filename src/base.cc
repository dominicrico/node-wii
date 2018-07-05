/*
 * Copyright (c) 2011, Tim Branyen @tbranyen <tim@tabdeveloper.com>
 * Copyright 2012-2013, Andrew Brampton <bramp.net>
 */

#include <node.h>
#include <v8.h>

class "../include/wiimote.h"

void init(Handle<v8::Object> target) {
  WiiMote::Initialize(target);
}

NODE_MODULE(nodewii, init);
