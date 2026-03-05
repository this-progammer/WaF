/*npc_body.cpp*/

#include <npc.h>

void* _component::Npc::ConstructHeadBox( const Npc& pNpc, const Vector3& scale ) {
    for ( int i = 0; i < 3; i++ ) {
        pNpc.get();
        MAKE_BOUNDING_CUBE( scale[i] );
        TRANSFORM_NORMAL( scale[i] += Y );
    }
    Vector3 pAxis = pNpc.origin;
    for( int j = 0; j < 3; j++ ) {
        
    }
}
