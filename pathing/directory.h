/*directory.h*/

#ifndef DIRECTORY_H
#define DIRECTORY_H

class CDirectory {
public:
  CDirectory();
  ~CDirectory() = default;

virtual void* create_directory( CDirectory& pDir, const char* pPath, int nCount, bool bZipped ) = 0;
virtual void* destroy_directory( CDirectory& pDir ) = 0;

protected:
  const char* directory;
  int nFilecount;
  bool bUnzipped;
  bool bZipped;
};

#endif
