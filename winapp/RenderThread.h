#pragma once
#include "framework.h"
#include "BaseMessage.h"
#include "SurfaceData.h"
#include "VLCPlayer.h"

extern bool g_bThreadRun;
extern HANDLE g_hThreadHandle;
extern HWND g_hMainWnd;
extern IDirect3DDevice9* g_pDevice;
extern IDirect3DSwapChain9* g_pSwapChain;
extern BlockQueue<SurfaceData>	g_frames;
extern VLCPlayer g_player;

static DWORD WINAPI	PresentProc(LPVOID lpParameter);
HRESULT DoRender();
HRESULT CreateDevice();
HRESULT CreateSwapChain(int w, int h);
void CreateReaderThread();
void StopReaderThread();

void TestD3D();
