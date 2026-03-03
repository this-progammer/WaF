/*multiplayer.h*/

#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H

namespace _core {

class CMultiplayer {
public:
  CMultiplayer();
  ~CMultiplayer() = default;

virtual void* CreateNetwork( CMultiplayer& cMP, const char* pServer, int nLobbyCount, const char* pHost, int nHostId ) = 0;
virtual void* TerminateNetwork( CMultiplayer& cMP ) = 0;

virtual void AddPlayer() = 0;
virtual void ChangeHost() = 0;
virtual void KickPlayer() = 0;

const virtual void StartTimer() = 0;

CMultiplayer& get() {
  return *this
}

const char* getServer() const {
  return server;
}

int getCount() {
  return lobbycount;
}

const char* getHostName() const {
  return host_name;
};

const int getHostId() const {
  return host_id;
}

virtual void IncrementCount( CMultiplayer& cMP ) = 0;
virtual void DecrementCount( CMultiplayer& cMP ) = 0;
virtual void SetPlayerCount( int nCount ) = 0;

virtual void Do_MessageWindow( const char* pCaption, const char* pText, HWND pWindow ) = 0;
virtual void DoMatch() = 0;

virtual void SavePingUsingBrushes() = 0;

float getPing() {
  return ping;
}

float getTimer() {
  return timer;
}

protected:
const char* server;
int lobbycount;
const char* host_name;
int host_id;
float ping;
float timer;
};

}

#endif
