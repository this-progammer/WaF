/*clip.h*/

#ifndef CLIP_H
#define CLIP_H

// selection code is in volume class

constexpr const char* const CLIP_CLASS("Component::Volume::Clip");

namespace _component {
class Clip : public Volume {
public:
  Clip();
  ~Clip() = default;

virtual void* CreateClipBox( const Clip& clip, const char* pName ) = 0;
virtual void* DestroyClipBox( Clip& clip ) = 0;

virtual int SetClipType( const int& type ) = 0;

// get clip volume
Clip& getClip() {
  return *this;
}

protected:
const char* clip_name;
int clip_type;
};
}

#endif
