/*fx.h*/

#ifndef FX_H
#define FX_H

constexpr const char* const FX_CLASS("FX");

namespace _component {
class FX : public Component {
public:
  FX();
  ~FX() = default;

  virtual void* CreateFX( FX& pFX, const Vector& X, const Vector& Y, const Vector& Z ) = 0;
  virtual void* DestroyFX( FX& pFX ) = 0;

  virtual void GetFXAlias( FX& pFX, const char* pAlias ) = 0;

  FX& get() {
    return *this;
  }

  Vector3& getPosition() const {
    return position;
  }

protected:
Vector3 position;
};

}

#endif
