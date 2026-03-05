/*npc.h*/

#ifndef NPC_H
#define NPC_H

#define SELECT_NPC ( node )( g_ComponentPtr.GetAt( node ) )

constexpr const char* const NPC_CLASS("Npc");

namespace _component {

class Npc : public Component {
public:
  Npc();
  ~Npc() = default;

virtual void* CreateNpcNode( Npc& pNpc, Vector3& position ) = 0;
virtual void* DestroyNpcNode( Npc& pNpc ) = 0;
virtual void* MiscNpcPtr( Npc*& pNpc ) = 0;
virtual void SelectNpcNode( Npc& pNpc ) = 0;

static std::size_t NpcNodeSize( const Npc& pNpc );

virtual void ConstructHeadBox( const Npc& pNpc, const Vector3& scale ) = 0;
virtual void ContructBodyBox( const Npc& pNpc, const Vector3& scale ) = 0;
virtual void ConstructLegBox( const Npc& pNpc, const Vector3& scale ) = 0;
virtual void ConstructArmBox( const Npc& pNpc, const Vector3& scale ) = 0;

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
