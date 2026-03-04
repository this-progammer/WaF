/*introscreen.h*/

#ifndef INTROSCREEN_H
#define INTROSCREEN_H

constexpr const char* const INTROSCREEN_CLASS("Introscreen");

class CIntroScreen {
public:
  CIntroScreen();
  ~CIntroScreen() = default;


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
