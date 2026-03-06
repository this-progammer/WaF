/*mesh.h*/

#ifndef MESH_H
#define MESH_H

#define SELECT_MESH ( mesh )( g_ComponentPtr.GetAt( mesh ) )

constexpr const char* const MESH_CLASS("Component::Mesh");

typedef float MeshVec;
typedef MeshVec MeshVec3[3];
typedef MeshVec MeshVec4[4];

namespace _component 
{
class Mesh : public Component {
  public:
    Mesh();
    ~Mesh() = default;

      Mesh& getMesh() const {
        return *this;
      }

      virtual void * CreateMesh(Mesh& pMesh) = 0;
      virtual void * DestroyMesh(Mesh& pMesh) = 0;

      Mesh* Alloc_Mesh();

      virtual bool SelectMesh(Mesh& pMesh) = 0;
      virtual bool SelectMesh(const Mesh& pMesh) = 0;
      virtual bool SelectBrush(Mesh** pMesh) = 0;

      MeshVec3 getMins() {
        return mesh_mins;
      }

      MeshVec3 getMaxs() {
        return mesh_maxs;
      }

      const char* getAlias() const {
        return mesh_alias;
      }

      const auto getPoints() const {
        return mesh_points;
      }

  protected:
    MeshVec3 mesh_mins;
    MeshVec3 mesh_maxs;
    const char* mesh_alias;
    auto mesh_points;
};

}

#endif
