#ifndef __COMMON_INIT_H__
#define __COMMON_INIT_H__

#include "common_stuff.h"

extern "C" __declspec(dllexport) void rdll_FreeModeList(RMode* pModes);
extern "C" __declspec(dllexport) RMode* rdll_GetSupportedModes();
extern "C" __declspec(dllexport) void rdll_RenderDLLSetup(RenderStruct* pStruct);

extern HMODULE g_hModule;

#endif