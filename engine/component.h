/*component.h*/

#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
public:
  Component();
  ~Component() = default;

  virtual void GetAt( void*pAt ) = 0;
  virtual void GetStr( const char* pStr ) = 0;

};

#endif
