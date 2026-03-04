/*select_entity.cpp*/

#include <entity.h>

bool _component::Entity::SelectEntity( Entity& pEntity ) {
  if( pEntity != NULL ) {
    SELECT_ENTITY( pEntity );
    return true
  }
  return false
}
