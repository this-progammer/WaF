/*set_entity_alias.cpp*/

#include <entity.h>

void* _component::Entity::SetAlias( Entity& pEntity, const char* pAlias ) {
  if( pEntity == NULL ) {
     this->DeleteEntity( pEntity );
  }
  for( auto* pStr : pAlias ) {
    *pStr = pEntity.getAlias();
    *pEntity.alias = pStr;
  }
 pEntity.get();
}
