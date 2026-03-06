/*volume.h*/

#ifndef VOLUME_H
#define VOLUME_H

#define SELECT_VOLUME ( volume )( g_ComponentPtr.GetAt( volume ) )

constexpr const char* const VOLUME_CLASS("Component::Volume");

namespace _component {
class Volume : public Mesh {
   Volume();
   ~Volume() = default;

virtual void* CreateVolumeBox( const Volume& volume, const Vector3& extents, const char* pStr, const Vector3& position, Mesh& cube, const Texture& texture, const bool bVisible ) = 0;
virtual void* DestroyVolumeBox( Volume& volume ) = 0;

virtual bool IsTransparent( const Texture& texture ) = 0;
virtual bool IsVisible( const Volume& volume ) = 0; 

virtual void SelectVolumeBox( Volume& volume ) = 0;

Volume& getVolume() {
   return *this;
}

protected:
Vector3 volume_extents;
const char* volume_alias;
Vector3 volume_position;
Mesh& volume_mesh;
Texture& volume_texture;
const char* volume_shader;
bool volume_vis;
};
}

#endif
