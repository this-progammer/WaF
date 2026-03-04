/*asset.h*/

#ifndef ASSET_H
#define ASSET_H

namespace _core {

class CAsset {
public:
  CAsset();
  ~CAsset() = default;

virtual void* CreateAsset( CAsset& pAsset, const char* pAlias, Model& pModel ) = 0;
virtual void* DestroyAsset( CAsset& pAsset ) = 0;
virtual void Spawn() = 0;

void UpdatePosition( const Vector3& origin );

CAsset& get() {
  return *this;
}

protected:
const char* asset_alias;
Model& asset_model;
Vector3 asset_origin;
};

}

#endif
