/*npc_body.cpp*/

#include <npc.h>

void* _component::Npc::ConstructHeadBox( const Npc& pNpc, const Vector3& scale ) {
    for ( int i = 0; i < 3; i++ ) {
        pNpc.get();
        CSG_MAKE_BOUNDING( scale[i] );
    }
}
