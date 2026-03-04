/*skybox.h*/

#ifndef SKYBOX_H
#define SKYBOX_H

#define SELECT_SKYBOX ( box )( g_PtrComponent.GetAt( box ) )

constexpr const char* const SKYBOX_CLASS("Map::Skybox");

namespace _core {
class Skybox : public Component {
public:
  Skybox();
  ~Skybox() = default;

virtual void* CreateSkybox( Skybox& skybox, const Vector3& scalar, const Vector4& cube, const char* pShader, const Texture& pTexture ) = 0;
virtual void* DestroySkybox( Skybox& skybox ) = 0;

Skybox& get() {
  return *this;
}

const Vector3 getScale() const {
  return scale;
}

const Vector4 getBox() const {
  return box;
}

const char* getShaderFlag() const {
  return m_Shader;
}

const Texture& getTexture() const {
  return textureName;
}

virtual void SelectSkybox( Skybox& pSelSkybox ) = 0;

protected:
Vector3 scale;
Vector4 box; // wrap
const char* m_Shader;
Texture& textureName;

};

}

#endif
