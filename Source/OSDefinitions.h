#pragma once

//Full list of platforms
//	PLATFORM_WINDOWS
//  PLATFORM_OSX
//  PLATFORM_IOS
//  PLATFORM_ANDROID

//Full list of architectures
//	ARCHITECTURE_X86
//	ARCHITECTURE_X64

#if defined(_WIN32) 

#define PLATFORM_WINDOWS
#define ARCHITECTURE_X86

#endif

#if defined(_WIN64)

#define PLATFORM_WINDOWS
#define ARCHITECTURE_X64

#endif