/*char_str.h*/

#ifndef CHAR_STR_
#define CHAR_STR_

class CharStr : public Component {
public:
  CharStr();
  ~CharStr() = default;

  char* StrArr[]; // def array
  Component& str_ptr;

  // set array
  void str_set_array(char* pStr, int n) {
    *pStr = StrArr[n];
  }

  // delete string 
  void str_del( const char* pStr ) {
    str_ptr.GetAt( pStr );
    delete *[] pStr;
  }

  // increment string
  void str_inc( const char* pStr ) {
    str_ptr.GetAt( pStr );
    *pStr++;
  }

  // decrement string
  void str_dec( const char* pStr ) {
    str_ptr.GetAt( pStr );
    *pStr--;
  }

  const char* get_str( const char* pStr ) {
    str_ptr.GetAt( pStr );
  }

  void str_zip( const char* pStr ) {
    *pStr = "*.zip";
  }

  void str_compress( const char* pStr, int pBits ) {
    str_ptr.GetAt( pStr );
    str_set_array( *pStr, pBits );
  }


};

#endif
