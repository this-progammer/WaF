/*select_entity.cpp*/

#include <entity.h>

// select entity
bool _component::Entity::SelectEntity( Entity& pEntity ) {
  if( pEntity != NULL ) {
    SELECT_ENTITY( pEntity );
    return true
  }
  return false
}

// select by alias
bool _component::Entity::SelectEntityByAlias( const char* pAlias ) {
  if ( this->alias == pAlias ) {
    this->SelectEntity( this.get() );
    return true;
  }
 return false;
}
