// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_363.hpp
// @@ 
// @@ DESCRIPTION:
// @@ Data encryption standard algorithm
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_391
#define argv_391



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_365.hpp"
#include "../LIB/argv_320.hpp"
#include "argv_364.hpp"
#include <iostream>
#if defined (__WIN32_OS__)
	#include <windows.h>
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	#include <sys/argv_3825.h>
	#include <unistd.h>
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_826	
// @@
// @@ DESCRIPTION	:
// @@ This argv_2908 permits to cipher/decipher a given argv_1396 or argv_771
// @@ using the "Data Encryption Standard" algorithm.
// @@ This argv_2908 is needed because the D.E.S algorithm only process
// @@ blocks of 64 argv_752, thus when we have a argv_771 that is either
// @@ shorter, or longer than 64 argv_752, we just can't use the D.E.S
// @@ directly.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_826
{
private:
	FILE *	argv_1626;
	FILE * 	argv_1497; 	
	uint8_t 	argv_771[argv_756];
	uint8_t 	argv_777[argv_756];
	uint8_t	argv_3403[argv_756];
	size_t	argv_2872;
	size_t	argv_2873;
	size_t	argv_2860;
	size_t	argv_2877;
	bool	argv_3609;
	bool 	argv_3088 (uint8_t *, const char *, const char *, bool);
	bool	argv_3086 (uint8_t *, uint8_t *, uint32_t, uint8_t *, bool, uint32_t&);
	void	argv_1031 (uint32_t, uint8_t&);
	void	init_random_generator ();
	argv_825	argv_1191;
public:
	argv_826 ();

	bool 	argv_1312 (uint8_t *, const char *, const char *);
	bool 	argv_1167 (uint8_t *, const char *, const char *);

	bool	argv_1311 (uint8_t *, uint8_t *, uint32_t, uint8_t *, uint32_t&);
	bool	argv_1166 (uint8_t *, uint8_t *, uint32_t, uint8_t *, uint32_t&);
};



#endif // argv_391



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ other functions 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1730 ();



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

