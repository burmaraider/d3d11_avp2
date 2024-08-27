#ifndef __D3D_DIRECT_DRAW_H__
#define __D3D_DIRECT_DRAW_H__

#ifndef __DDRAW_H__
#include "ddraw.h"
#define __DDRAW_H__
#endif

#include "d3d_surface.h"

class DirectDraw7 : public IDirectDraw7
{

public:

    DirectDraw7() { m_dwRefs = 1; };

    HRESULT __stdcall   QueryInterface(REFIID riid, LPVOID* ppvObject)
    { 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    ULONG   __stdcall   AddRef();
    ULONG   __stdcall   Release();

    HRESULT __stdcall   Compact(){ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   CreateClipper(DWORD dwFlags, LPDIRECTDRAWCLIPPER* ppDDClipper, IUnknown* pUnkOuter)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   CreatePalette(DWORD dwFlags, LPPALETTEENTRY pDDColorArray, LPDIRECTDRAWPALETTE* ppDDPalette, IUnknown* pUnkOuter)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    }; 
    HRESULT __stdcall   CreateSurface(LPDDSURFACEDESC2 pDDSurfaceDesc2, LPDIRECTDRAWSURFACE7* ppDDSurface, IUnknown* pUnkOuter);
    HRESULT __stdcall   DuplicateSurface(LPDIRECTDRAWSURFACE7 pDDSurface, LPDIRECTDRAWSURFACE7* pDupDDSurface)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   EnumDisplayModes(DWORD dwFlags, LPDDSURFACEDESC2 pDDSurfaceDesc2, LPVOID pContext, LPDDENUMMODESCALLBACK2 pEnumModesCallback)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   EnumSurfaces(DWORD dwFlags, LPDDSURFACEDESC2 pDDSD2, LPVOID pContext, LPDDENUMSURFACESCALLBACK7 pEnumSurfacesCallback)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   FlipToGDISurface()
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetCaps(LPDDCAPS pDDDriverCaps, LPDDCAPS pDDHELCaps)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetDisplayMode(LPDDSURFACEDESC2 pDDSurfaceDesc2);
    HRESULT __stdcall   GetFourCCCodes(LPDWORD pNumCodes, LPDWORD pCodes)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetGDISurface(LPDIRECTDRAWSURFACE7* ppGDIDDSSurface)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetMonitorFrequency(LPDWORD pdwFrequency)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetScanLine(LPDWORD pdwScanLine)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetVerticalBlankStatus(LPBOOL pbIsInVB)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   Initialize(GUID* pGUID)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   RestoreDisplayMode()
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   SetCooperativeLevel(HWND hWnd, DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   SetDisplayMode(DWORD dwWidth, DWORD dwHeight, DWORD dwBPP, DWORD dwRefreshRate, DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   WaitForVerticalBlank(DWORD dwFlags, HANDLE hEvent)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };

    HRESULT __stdcall   GetAvailableVidMem(LPDDSCAPS2 pDDSCaps2, LPDWORD pdwTotal, LPDWORD pdwFree)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };

    HRESULT __stdcall   GetSurfaceFromDC(HDC hdc, LPDIRECTDRAWSURFACE7* ppDDS)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   RestoreAllSurfaces()
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   TestCooperativeLevel()
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetDeviceIdentifier(LPDDDEVICEIDENTIFIER2 pdddi, DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   StartModeTest(LPSIZE pModesToTest, DWORD dwNumEntries, DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   EvaluateMode(DWORD dwFlags, DWORD* pSecondsUntilTimeout)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };

protected:

    ULONG   m_dwRefs;
};

class DirectDrawSurface7 : public IDirectDrawSurface7
{

public:

    DirectDrawSurface7() { m_dwRefs = 1; };

    HRESULT __stdcall   QueryInterface(REFIID riid, LPVOID* ppvObject)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    ULONG   __stdcall   AddRef();
    ULONG   __stdcall   Release();

    HRESULT __stdcall   AddAttachedSurface(LPDIRECTDRAWSURFACE7 pDDSAttachedSurface)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   AddOverlayDirtyRect(LPRECT pRect)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   Blt(LPRECT pDestRect, LPDIRECTDRAWSURFACE7 pDDSrcSurface, LPRECT pSrcRect, DWORD dwFlags, LPDDBLTFX pDDBltFx)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   BltBatch(LPDDBLTBATCH pDDBltBatch, DWORD dwCount, DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   BltFast(DWORD dwX, DWORD dwY, LPDIRECTDRAWSURFACE7 pDDSrcSurface, LPRECT pSrcRect, DWORD dwTrans)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   DeleteAttachedSurface(DWORD dwFlags, LPDIRECTDRAWSURFACE7 pDDSAttachedSurface)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   EnumAttachedSurfaces(LPVOID pContext, LPDDENUMSURFACESCALLBACK7 pEnumSurfacesCallback)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   EnumOverlayZOrders(DWORD dwFlags, LPVOID pContext, LPDDENUMSURFACESCALLBACK7 pfnCallback)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   Flip(LPDIRECTDRAWSURFACE7 pDDSurfaceTargetOverride, DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetAttachedSurface(LPDDSCAPS2 pDDSCaps, LPDIRECTDRAWSURFACE7* ppDDAttachedSurface)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetBltStatus(DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetCaps(LPDDSCAPS2 pDDSCaps)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetClipper(LPDIRECTDRAWCLIPPER* ppDDClipper)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetColorKey(DWORD dwFlags, LPDDCOLORKEY pDDColorKey)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetDC(HDC* phDC)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetFlipStatus(DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetOverlayPosition(LPLONG plX, LPLONG plY)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetPalette(LPDIRECTDRAWPALETTE* ppDDPalette)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetPixelFormat(LPDDPIXELFORMAT pDDPixelFormat)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetSurfaceDesc(LPDDSURFACEDESC2 pDDSurfaceDesc)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   Initialize(LPDIRECTDRAW pDD, LPDDSURFACEDESC2 pDDSurfaceDesc)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   IsLost()
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   Lock(LPRECT pDestRect, LPDDSURFACEDESC2 pDDSurfaceDesc, DWORD dwFlags, HANDLE hEvent)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   ReleaseDC(HDC hDC)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   Restore()
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   SetClipper(LPDIRECTDRAWCLIPPER pDDClipper)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   SetColorKey(DWORD dwFlags, LPDDCOLORKEY pDDColorKey)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   SetOverlayPosition(LONG lX, LONG lY)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   SetPalette(LPDIRECTDRAWPALETTE pDDPalette)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   Unlock(LPRECT pRect)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   UpdateOverlay(LPRECT pSrcRect, LPDIRECTDRAWSURFACE7 pDDDestSurface, LPRECT pDestRect, DWORD dwFlags, LPDDOVERLAYFX pDDOverlayFx)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   UpdateOverlayDisplay(DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   UpdateOverlayZOrder(DWORD dwFlags, LPDIRECTDRAWSURFACE7 pDDSReference)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };

    HRESULT __stdcall   GetDDInterface(LPVOID* ppDD)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   PageLock(DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   PageUnlock(DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };

    HRESULT __stdcall   SetSurfaceDesc(LPDDSURFACEDESC2 pddsd2, DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };

    HRESULT __stdcall   SetPrivateData(REFGUID guidTag, LPVOID pData, DWORD cbSize, DWORD dwFlags)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetPrivateData(REFGUID guidTag, LPVOID pBuffer, LPDWORD pcbBufferSize)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   FreePrivateData(REFGUID guidTag)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetUniquenessValue(LPDWORD pValue)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   ChangeUniquenessValue()
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };

    HRESULT __stdcall   SetPriority(DWORD dwPriority)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetPriority(LPDWORD pdwPriority)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   SetLOD(DWORD dwMaxLOD)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };
    HRESULT __stdcall   GetLOD(LPDWORD pdwMaxLOD)
{ 
        #ifdef __GNUC__
        __asm__("int $3");
        #else
        __asm 
        { 
            int 3 
        }; 
        #endif
    };

protected:

    ULONG   m_dwRefs;
};

class DDS7_BackBuffer : public DirectDrawSurface7
{

public:

    DDS7_BackBuffer() : DirectDrawSurface7() { };

    HRESULT __stdcall   Blt(LPRECT pDestRect, LPDIRECTDRAWSURFACE7 pDDSrcSurface, LPRECT pSrcRect, DWORD dwFlags, LPDDBLTFX pDDBltFx);
    HRESULT __stdcall   Lock(LPRECT pDestRect, LPDDSURFACEDESC2 pDDSurfaceDesc, DWORD dwFlags, HANDLE hEvent);
    HRESULT __stdcall   Unlock(LPRECT pRect);
};

class DDS7_BinkVideoBuffer : public DirectDrawSurface7
{

public:

    DDS7_BinkVideoBuffer(LPDDSURFACEDESC2 pDDSurfaceDesc);
    ~DDS7_BinkVideoBuffer();

    ULONG   __stdcall   Release();

    HRESULT __stdcall   Blt(LPRECT pDestRect, LPDIRECTDRAWSURFACE7 pDDSrcSurface, LPRECT pSrcRect, DWORD dwFlags, LPDDBLTFX pDDBltFx); // 0x01000c00
    HRESULT __stdcall   Lock(LPRECT pDestRect, LPDDSURFACEDESC2 pDDSurfaceDesc, DWORD dwFlags, HANDLE hEvent);
    HRESULT __stdcall   Unlock(LPRECT pRect);

    RSurface*   GetRSurface() { return m_pSurface;  }

private:
    
    RSurface*   m_pSurface;
};

void* d3d_GetDirectDrawInterface(const char* szQuery);

#endif