/*
 * Copyright (c) 2011, Tim Branyen @tbranyen <tim@tabdeveloper.com>
 * Copyright 2012-2013, Andrew Brampton <bramp.net>
 */

#include <node.h>

using v8::Local;
using v8::Object;

class WiiMote;

void init(v8::Local<v8::Object> target) {
  WiiMote::Initialize(target);
}

NODE_MODULE(nodewii, init);
