/*char_str.h*/

#ifndef CHAR_STR_
#define CHAR_STR_

class CharStr {
public:
  CharStr();
  ~CharStr() = default;

  char* StrArr[];

  virtual void str_set_array(char* pStr, int n) {
    *pStr = StrArr[n];
  }

};

#endif
