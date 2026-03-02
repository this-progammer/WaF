/*window.h*/
#include <Windows.h>

#ifndef WINDOW_
#define WINDOW_

HWND g_HandleWindow;
HANDLE g_WindowHandle;
HBRUSH g_WindowColor;
HDC g_DeviceContext;
HGLRC g_GlRenderContext;
PIXELFORMATDESCRIPTOR g_PixelDescriptor;

typedef struct windowtable_s {
  windowtable_s** next;
  int nSize;
  HWND m_pWidget;
  void* pData;
}windowtable_t;

void* load_window(windowtable_t* w);

#endif
