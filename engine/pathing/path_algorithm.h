/*path_algorithm.h*/

#ifndef PATH_ALGORITHM_H
#define PATH_ALGORITHM_H

class CPathAlgorithm {
public:
  CPathAlgorithm();
  ~CPathAlgorithm() = default;

virtual void* CreatePathAlgorithm( const CPathAlgorithm& pPath, const Node& pNodes, const Vector3& pGoto, const std::size_t& pSize, const int& nCount ) = 0;
virtual void* DestroyPath( CPathAlgorithm& pPath ) = 0;

virtual void SetPathName( const CPathAlgorithm& pPath, const char* pName ) = 0;

protected:
Vector3 path_positioning;
const char* path_name;
std::size_t path_size;
int path_node_count;
};

#endif
