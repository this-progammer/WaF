/*map.h*/

#ifndef MAP_H
#define MAP_H

constexpr const char* const MAP_CLASS("Map");

extern Vector3 g_MinWorldCoord = 1024.0f * -64.0f;
extern Vector3 g_MaxWorldCoord = 1024.0f * 64.0f;
extern const char* g_MapName;
extern const char* g_MapPath;
extern Mesh g_Meshes;
extern Mesh* g_pBrushes;
extern Npc g_NPCS;
extern Model g_Models;
extern Entity g_Entites;
extern Player g_Player;
extern Player g_Players;
extern HWND g_MapCurrApp;
extern CXmlPage g_MapPage;
extern int g_nMapMode;

namespace _core {

class CMap {
public:
  CMap();
  ~CMap() = default;

virtual void* CreateMap( CMap& pMap, const Vector3& min, const Vector3& max, const Mesh& meshes, const Mesh* brushes, const Npc& npcs, const Entity& entities, const Model& models, const Player& player, const Player& players, const int& mode, const char* name, const char* path ) = 0;
virtual void* DestroyMap( CMap& pMap ) = 0;

const virtual void HookGLWindow( HWND gl_rect ) = 0;

// means no worldspawn
virtual bool MapIsEmpty( CMap& pMap ) = 0;

CMap& get() {
  return *this;
}

protected:
const Vector3 min_coord;
const Vector3 max_coord;
const Mesh& meshes;
const Npc& npcs;
const Entity& entities;
const Mesh* brushes;
const Model& models;
const Player& player;
const Player& players;
const int mode;
const HWND gl_window;
const char* name;
const char* path;
};

}

#endif
