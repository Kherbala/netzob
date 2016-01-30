#pragma once

#ifdef _WIN32
	#define DECLUNUSED
	#define STRNCAT(dst, szDst, src, count) strncat_s(dst, szDst, src, count)
	#define STRCPY(dst, szDst, src) strcpy_s(dst, szDst, src)
	#define inline __inline
#else
	#define DECLUNUSED __attribute__((unused))
	#define STRNCAT(dst, szDst, src, count) strncat(dst, src, count)
	#define STRCPY(dst, szDst, src) strlcpy(dst, src, szDst)
#endif

