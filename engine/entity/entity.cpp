/*entity.cpp*/

#include <entity.h>

_component::Entity::Entity()
{
}

_component::Entity::~Entity()
{
}

Vector3 g_vEntityPosition( 0.0f, 0.0f, 0.0f );

// *create entity
void* _component::Entity::CreateEntity( Entity& pEntity ) {
  std::size_t pSz = 0;
  pEntity = ( Entity** )malloc( sizeof( Entity ) );
  Vector3 pEntPos = pEntity.position;
  Component& Ptr;
  for( int i = 3; i <= pSz; i++ ){
       Ptr.GetAt( i );
       COMPONENT_MAKE_ENTITY( pEntity );
       if ( pEntity != NULL && SPAWN_COMPONENT( pEntity ) ) {
            g_vEntityPosition[i] = pEntPos[i];
            pEntity.SelectEntity( &this );
       }
  }
  pEntity.get();
}

void* _component::Entity::DeleteEntity( Entity& pEntity ) {
  delete pEntity;
}
