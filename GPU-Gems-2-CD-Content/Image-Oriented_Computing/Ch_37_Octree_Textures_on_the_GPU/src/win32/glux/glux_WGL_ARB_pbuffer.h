// --------------------------------------------------------
#ifdef WIN32

// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:33 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_WGL_ARB_pbuffer__
#define __GLUX_WGL_ARB_pbuffer__

GLUX_NEW_PLUGIN(WGL_ARB_pbuffer);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef WGL_DRAW_TO_PBUFFER_ARB
#  define WGL_DRAW_TO_PBUFFER_ARB 0x202D
#endif
#ifndef WGL_MAX_PBUFFER_PIXELS_ARB
#  define WGL_MAX_PBUFFER_PIXELS_ARB 0x202E
#endif
#ifndef WGL_MAX_PBUFFER_WIDTH_ARB
#  define WGL_MAX_PBUFFER_WIDTH_ARB 0x202F
#endif
#ifndef WGL_MAX_PBUFFER_HEIGHT_ARB
#  define WGL_MAX_PBUFFER_HEIGHT_ARB 0x2030
#endif
#ifndef WGL_PBUFFER_LARGEST_ARB
#  define WGL_PBUFFER_LARGEST_ARB 0x2033
#endif
#ifndef WGL_PBUFFER_WIDTH_ARB
#  define WGL_PBUFFER_WIDTH_ARB 0x2034
#endif
#ifndef WGL_PBUFFER_HEIGHT_ARB
#  define WGL_PBUFFER_HEIGHT_ARB 0x2035
#endif
#ifndef WGL_PBUFFER_LOST_ARB
#  define WGL_PBUFFER_LOST_ARB 0x2036
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_wglCreatePbufferARB
typedef HPBUFFERARB (APIENTRYP PFNWGLUXCREATEPBUFFERARBPROC) (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList);
#endif
#ifndef __GLUX__GLFCT_wglGetPbufferDCARB
typedef HDC (APIENTRYP PFNWGLUXGETPBUFFERDCARBPROC) (HPBUFFERARB hPbuffer);
#endif
#ifndef __GLUX__GLFCT_wglReleasePbufferDCARB
typedef int (APIENTRYP PFNWGLUXRELEASEPBUFFERDCARBPROC) (HPBUFFERARB hPbuffer, HDC hDC);
#endif
#ifndef __GLUX__GLFCT_wglDestroyPbufferARB
typedef BOOL (APIENTRYP PFNWGLUXDESTROYPBUFFERARBPROC) (HPBUFFERARB hPbuffer);
#endif
#ifndef __GLUX__GLFCT_wglQueryPbufferARB
typedef BOOL (APIENTRYP PFNWGLUXQUERYPBUFFERARBPROC) (HPBUFFERARB hPbuffer, int iAttribute, int *piValue);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_wglCreatePbufferARB
extern PFNWGLUXCREATEPBUFFERARBPROC wglCreatePbufferARB;
#endif
#ifndef __GLUX__GLFCT_wglGetPbufferDCARB
extern PFNWGLUXGETPBUFFERDCARBPROC wglGetPbufferDCARB;
#endif
#ifndef __GLUX__GLFCT_wglReleasePbufferDCARB
extern PFNWGLUXRELEASEPBUFFERDCARBPROC wglReleasePbufferDCARB;
#endif
#ifndef __GLUX__GLFCT_wglDestroyPbufferARB
extern PFNWGLUXDESTROYPBUFFERARBPROC wglDestroyPbufferARB;
#endif
#ifndef __GLUX__GLFCT_wglQueryPbufferARB
extern PFNWGLUXQUERYPBUFFERARBPROC wglQueryPbufferARB;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------