/*npc_body.cpp*/

#include <npc.h>

void* _component::Npc::ConstructHeadBox( const Npc& pNpc, const Vector3& scale ) {
    for ( int i = 0; i < 3; i++ ) {
        pNpc.get();
        MAKE_BOUNDING_CUBE( scale[i] );
        MAKE_NORMAL( scale[i] += Y );
    }
}
