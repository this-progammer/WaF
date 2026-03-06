/*trigger.h*/

#ifndef TRIGGER_H
#define TRIGGER_H

namespace _component {
class Trigger : public Volume {
  Trigger( const Volume& volume );
  ~Trigger() = default;

virtual void * CreateTriggerBox( const Trigger& trigger, const char* pScriptStr, bool bCubed ) = 0;
virtual void * DestroyTriggerBox( Trigger& trigger ) = 0;

virtual void SetBoxExtents( const Vector3& extents ) = 0;
virtual void SetTriggerTexture( const Texture& texture ) = 0;
virtual void SetTriggerScript( const char* pScript );

// do selection in volume class

protected:
Volume& trigger_box;
bool is_sphere;
int type;
const char* trigger_script;
}
}

#endif
