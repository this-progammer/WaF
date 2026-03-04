/*introscreen.h*/

#ifndef INTROSCREEN_H
#define INTROSCREEN_H

constexpr const char* const INTROSCREEN_CLASS("Introscreen");

class CIntroScreen {
public:
  CIntroScreen();
  ~CIntroScreen() = default;

virtual void* CreateIntroscreen( CIntroScreen& pIntroscreen, int& x, int& y, int& w, int& h, const char* pFile, HWND pWnd ) = 0;
virtual void* DestroyIntroscreen( CIntroScreen& pIntroscreen ) = 0;

virtual void create() = 0;

CIntroScreen& get() {
  return *this;
}

HWND getWindow() {
  return hWindow;
}

protected:
int x;
int y;
int w;
int h;
const char* pMovFile;
HWND hWindow;
HDC hDC;
PFD hPFD;
WaFAPI* _pAPI;
HGLRC hGL;
};

#endif`
