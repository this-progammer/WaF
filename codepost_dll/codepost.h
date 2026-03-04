/*codepost.h*/

#ifndef CODEPOST_
#define CODEPOST_

constexpr const char* const CODEPOST_CLASS("Codepost");

class CCodePost {
public:
  CCodepost();
  ~CCodePost() = default;

virtual void* create_export( CMap& pMap, const char* pName, CCodePost& pPost ) = 0;
virtual void* destroy_export( CCodePost& pExport ) = 0;

};

#endif
