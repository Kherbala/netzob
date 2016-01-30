#pragma once

#ifdef _WIN32
	#define DECLUNUSED
#else
	#define DECLUNUSED __attribute__((unused))
#endif

