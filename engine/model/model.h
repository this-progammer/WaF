/*model.h*/

#ifndef MODEL_H
#define MODEL_H

namespace _component 
{

class Model : public Component {
public:
  Model();
  ~Model();

virtual void * CreateModel( Model& pModel ) = 0;
virtual void * DestroyModel( Model& pModel ) = 0;
virtual void SetModelAlias( const char* pAlias ) = 0;

virtual bool SelectModel( Model& pModel ) = 0;

Model& get() {
  return *this;
}

const char* getAlias() const {
  return alias;
}

Vector3 getPosition() {
  return position;
}

int getVertices() const {
  return verticies;
}

protected:
const char* alias;
Vector3 position;
int vertices;
};

}

#endif
