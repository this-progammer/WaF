/*node.h*/

#ifndef NODE_H
#define NODE_H

#define SELECT_NODE ( n )( g_ComponentPtr.GetAt( n ) )

#define NODE_PATH 0x01
#define NODE_SCRIPT 0x02
#define NODE_ANIMATION 0x03

constexpr const char* const NODE_CLASS("Node");

namespace _component {

class Node : public Component {
public:
  Node();
  ~Node() = default;

virtual void* CreateNode( Node& pNode, const Vector3& origin, const int& nType ) = 0;
virtual void* DestroyNode( Node& pNode ) = 0;
virtual void SetScript( Node& pNode, const char* script ) = 0;
virtual void SelectNode( Node& pNode ) = 0;


protected:
Mesh& m_MeshNode;
Vector3 origin;
const char* alias_name;
const char* node_script;
int node_type;
};

}

#endif
