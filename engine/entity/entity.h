/*entity.h*/

#ifndef ENTITY_H
#define ENTITY_H

#define SELECT_ENTITY ( e )( g_ComponentPtr.GetAt( e ) )

constexpr const char* const ENTITY_CLASS("Entity");

namespace _component 
{
class Entity : public Component {
public:
  Entity();
  ~Entity() = default;

virtual void* CreateEntity( Entity& pEntity ) = 0;
virtual void* DeleteEntity( Entity& pEntity ) = 0;
virtual void* SetAlias( Entity& pEntity, const char* pAlias ) = 0;

virtual bool SelectEntity( Entity& pEntity ) = 0;
virtual bool SelectEntityByAlias( const char* pAlias ) = 0;

Entity& get() {
  return *this;
}

const char* getAlias() const {
  return alias;
}

bool getStatic() {
  return bStatic ? 1 : 0;
}

protected:
  Vector3 position;
  const char* alias;
  bool bStatic; // no physics
};

}

#endif 
