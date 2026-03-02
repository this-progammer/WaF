/*engine.h*/

#ifndef _ENGINE_H
#define _ENGINE_H

class EngineCore {
public:
  EngineCore();
  ~EngineCore() = default;

protected:
bool bRunning;
bool bAudioEnabled;
int nBytes;
void* data;
const char* strName;
char* buf[1024];
};

#endif
