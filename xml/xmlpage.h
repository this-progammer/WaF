/*xmlpage.h*/

#ifndef XMLPAGE_H
#define XMLPAGE_H

class CXmlPage {
public:
  CXmlPage();
  ~CXmlPage() = default;

virtual void* CreatePageXML( CXmlPage& page, int nLines, const char* pText, char* bufr, const char* pName, bool bOpened, bool bSaved ) = 0;
virtual void* DestroyPageXML( CXmlPage& page ) = 0;

virtual void OpenPageXML( CXmlPage& page ) = 0;
virtual void SavePageXML( CXmlPage& page ) = 0;

const virtual void SetPageText( const char* pText ) = 0;
const virtual void SetPageName( const char* pName ) = 0;

CXmlPage& get() {
  return *this;
}

int getLines() const {
  return lines;
}

const char* getText() const {
  return text;
}

char* getBuf() const {
  return buf;
}

const char* getName() const {
  return name;
}

bool queuePage() {
  return opened || saved ? 1 : 0;
}

protected:
int lines;
const char* text;
char buf[2048]; // supported
const char* name;
bool opened;
bool saved;
}

#endif
