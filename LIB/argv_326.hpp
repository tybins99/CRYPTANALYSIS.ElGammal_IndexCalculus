// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_326.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structure and 
// @@ function that are necessary for the plugins
// @@ to work.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_398
#define argv_398



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_320.hpp"
#include "../LIB_AVX/general_avx.hpp"
#if defined (__WIN32_OS__)
	#include <windows.h>
#endif // __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define MAX_PATH_PLUGIN 256



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ STRUCTURE NAME: argv_3572
// @@
// @@ DESCRIPTION:
// @@ This argv_1139 structure is used to store :
// @@ - the argv_1396 mapper used to mmap the argv_1396 to scan
// @@ - the virus signature database argv_771
// @@ - the virus signature database argv_771's size.
// @@ - the argv_2817 of the virus signature argv_1396.
// @@ 
// @@ the signature argv_1396 does not need to be parsed because the avx 
// @@ has a kind of precompiled signature argv_1396 format that permits to
// @@ use the sign argv_1396 without parsing it.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_599 {
	char	*		argv_1146;
	argv_2263			argv_1400;	// used to mmap the signature argv_1396 (if necessary)
	argv_3862	*		argv_1145;		// mmapped DB argv_1396's first byte's argv_635
	argv_3864			argv_1147;		// mmapped DB argv_1396's size
} argv_3572;




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ all possible argv_1396 types 
// @@ Notice that a given argv_1396 might have several types.
// @@ BEWARE: there might be more argv_1396 argv_3842 detection plugins that scan 
// @@         plugins, thus there is not a 1 to 1 relationship between them
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3224 {
	argv_1439 = 0,
	argv_1435, 
	argv_1422,
	argv_1441,
	argv_1424,
	argv_1434,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ general functions used by plugins
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1419 (argv_3864, char *);
void argv_2312 (char *, char *, argv_3864);
typedef void (* argv_1507) (argv_3864, char *);



#endif // argv_398



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
