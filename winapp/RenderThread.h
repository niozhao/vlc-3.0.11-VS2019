#pragma once
#include "framework.h"
#include "BaseMessage.h"
#include "VLCDecoder.h"
#include "FrameQueue.h"

extern bool g_bThreadRun;
extern HANDLE g_hThreadHandle;
extern HWND g_hMainWnd;
extern IDirect3DDevice9* g_pDevice;
extern IDirect3DSwapChain9* g_pSwapChain;
extern VLCDecoder g_player;

extern IDirect3DSurface9* g_pSurfaceTemp;
extern IDirect3DSurface9* g_pSysSurface;

extern BlockQueue<SurfaceData>	g_frames_surface;
extern BlockQueue<FrameData>	g_frames_buffer;

extern D3DFORMAT g_SurfaceFormat;
extern DWORD g_NvidiaBufferFormat;
extern SwsContext* g_pSwsctx;

static DWORD WINAPI	PresentProc(LPVOID lpParameter);
HRESULT DoRender();
HRESULT CreateDevice();
void CreateReaderThread();
void StopReaderThread();
HRESULT InitSurface(int width, int height);
