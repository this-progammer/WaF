/*singleplayer.h*/

#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H

namespace _core {

class Singleplayer {
public:
  Singleplayer();
  ~Singleplayer() = default;

virtual void *CreateSingleplayerContext() = 0;

};

}

#endif
