#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HELIX_API __declspec(dllexport)

	#else
		#define HELIX_API __declspec(dllimport)
	#endif
#else
	#error Helix only supports Windows!
#endif