/*caulked_mesh.h*/

#ifndef CAULKED_MESH_H
#define CAULKED_MESH_H

constexpr const char* const CAULKED_CLASS("Component::Mesh::CaulkedMesh");

namespace _component {
class CaulkedMesh : public Mesh {
public:
  CaulkedMesh( const Mesh& caulkedMesh );
  ~CaulkedMesh() = default;

virtual void CaulkMesh( const Mesh& mesh, const Texture& caulk ) = 0;
virtual void UncaulkMesh( const Mesh& mesh, const Texture** prev_texture ) = 0;

// get the caulked mesh
CaulkedMesh& getMesh() {
  return *this;
}

protected:
 Mesh& mesh;
 Texture& caulk_texture;
};
}

#endif
