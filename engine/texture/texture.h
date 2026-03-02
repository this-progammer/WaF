/*texture.h*/

#ifndef TEXTURE_H
#define TEXTURE_H

class Texture : public Component : public CharStr {
public:
  Texture();
  ~Texture() = default;

  Component& texshare_ptr;
  CharStr& str;

  MeshVec4 texturecoords;

  //*& texture
  virtual void SetTextureName( const char* pStr ) = 0;
  virtual void* CreateTexture( Texture& pTexture ) = 0;
  virtual void* CreateTextureName( Texture& pTexture, const char* pStr ) = 0;

};

#endif
