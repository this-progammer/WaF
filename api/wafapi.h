/*wafapi.h*/

#include <Windows.h>

#ifndef WAFAPI_
#define WAFAPI_

#ifdef WAFAPI_
#define _WIN32
#endif

#ifndef _WIN32
#error "WaFAPI Error : Win32API not defined!"
#endif

#define WAF_MENU_PAGE 0x00
#define WAF_MENU_IMAGE 0x01
#define WAF_MENU_LABEL 0x02
#define WAF_MENU_BUTTON 0x03
#define WAF_TEXT 0x04
#define WAF_PANEL 0x05
#define WAF_PANEL_BUTTON 0x06
#define WAF_PANEL_SLOT 0x07
#define WAF_PANEL_LABEL 0x08
#define WAF_RECTANGLE 0x09
#define WAF_TREE_LIST 0x10
#define WAF_ENTRY_BOX 0x11
#define WAF_HINT_TEXT 0x12
#define WAF_IMAGE_BOX 0x13
#define WAF_SCROLLBAR 0x14

#endif
