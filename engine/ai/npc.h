/*npc.h*/

#ifndef NPC_H
#define NPC_H

#define SELECT_NPC ( node )( g_ComponentPtr.GetAt( node ) )

namespace _component {

class Npc : public Component {
public:
  Npc();
  ~Npc() = default;

virtual void* CreateNpcNode( Npc& pNpc, Vector3& position ) = 0;
virtual void* DestroyNpcNode( Npc& pNpc ) = 0;
virtual void* MiscNpcPtr( Npc*& pNpc ) = 0;

virtual void SelectNpcNode( Npc& pNpc ) = 0;

Npc& get() {
  return *this;
}

Vector3 getOrigin() {
  return origin;
}

const char* getAlias() const {
  return alias_name;
}

Model& getModel() {
  return dynamic_model;
}

protected:
Vector3 origin;
const char* alias_name;
Model& dynamic_model;
};

}

#endif
