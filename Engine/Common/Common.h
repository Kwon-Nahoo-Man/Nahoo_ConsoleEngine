#pragma once

#define DLLEXPORT __declspec(dllexport)
#define DLLIMPORT __declspec(dllimport)

#if ENGINE_BUILD_DLL
#define NAHOO_API DLLEXPORT
#else
#define NAHOO_API DLLIMPORT
#endif
