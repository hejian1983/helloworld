/*----------------------------------------------------------------  
// Copyright (C) 2010  大智慧软件版权所有。     
// 文件名：  dzhtype.h
// 文件功能描述：  定义基本类型
//----------------------------------------------------------------*/    
#pragma once

//from myinttype.h file
#if defined(WIN32) && !defined(__MINGW32__) && !defined(__CYGWIN__)
#    define CONFIG_WIN32
#endif
#if defined(WIN32) && !defined(__MINGW32__) && !defined(__CYGWIN__) && !defined(EMULATE_INTTYPES)
#    define EMULATE_INTTYPES
#endif

#ifndef EMULATE_INTTYPES
#   include <inttypes.h>
#	define sprintf_s sprintf
#	define strcpy_s strcpy
#	define strncpy_s strncpy
#else
	typedef signed char  int8_t;
	typedef signed short int16_t;
	typedef signed int   int32_t;
	typedef unsigned char  uint8_t;
	typedef unsigned short uint16_t;
	typedef unsigned int   uint32_t;
#   ifdef CONFIG_WIN32
		typedef signed __int64   int64_t;
		typedef unsigned __int64 uint64_t;
#   else /* other OS */
		typedef signed long long   int64_t;
		typedef unsigned long long uint64_t;
#   endif /* other OS */
#endif /* EMULATE_INTTYPES */
