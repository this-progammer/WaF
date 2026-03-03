/*texture.h*/

#ifndef TEXTURE_H
#define TEXTURE_H

#define SELECT_TEXTURE ( texture )( g_ComponentPtr.GetAt( texture ) )

class Texture : public Component {
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
  virtual void GetTextureDirectory( const char* pDir, const char* pExt, int nCount ) = 0;

  Texture& get() {
    return *this;
  }

  virtual void SetTextureCoords( MeshVec4 coords ) = 0;
  virtual void HookTextureDevice( HWND pPanel, HDC pDC ) = 0;

};

#endif
