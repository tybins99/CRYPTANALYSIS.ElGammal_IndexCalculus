// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4267)
	#pragma warning(disable: 4146)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_365.hpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_396
#define argv_396



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
#endif // #if defined (__WIN32_OS__) 
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include "../LIB/argv_320.hpp"
#include "../LIB_CRYPTO/argv_241.h"
#include "../LIB_CRYPTO/argv_366.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3223 {
	argv_1847 = 201274,
	argv_1832,
	argv_1831,
	argv_1830,
	argv_1823,
	argv_1824,
	argv_1841,
	argv_1842,
	argv_1845,
	argv_1844,
	argv_1838,
	argv_1834,
	argv_1843,
	argv_1821,
	argv_1820,
	argv_1827,
	argv_1825,
	argv_1840,
	argv_1837,
	argv_1839,
	argv_1828,
	argv_1835,
	argv_1826,
	argv_1811,
	argv_1808,
	argv_1807,
	argv_1809,
	argv_1810,
	argv_1818,
	argv_1813,
	argv_1812,
	argv_1814,
	argv_1817,
	argv_1815,
	argv_1816,
	argv_1806,
	argv_1805,
	argv_1836,
	argv_1819,
	argv_1829,
	argv_1846,
	argv_1822,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants and aliases definitions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__LINUX_OS__)
	#define LPVOID void *
	#define MAX_PATH	256
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1396 mmap possible open mode
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2465 {
	argv_2466 = 0,
	argv_2467,
	argv_2468,
};


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool			argv_1398				(const char *);
int32_t			argv_2974			(const char *, map<string, bool>&, map<string, string>&);
int32_t			argv_2968			(FILE *, string&, string&, string&);
void			argv_1908		(uint8_t *, uint32_t, string&);
void			argv_2962	(string&, uint32_t);
bool			argv_2930			(uint8_t, uint8_t&);
bool			argv_844				(uint8_t, uint8_t, uint8_t&);
int32_t			argv_3615		(const char *, uint32_t, uint8_t *, uint32_t, uint32_t&);
bool			argv_1449		(const char * _file_1, const char * _file_2);
unsigned long	argv_1746			(const char *);
std::string		argv_1087		(uint32_t);

extern "C"
{
	void argv_1087 (uint32_t _ercode, char * _erstring);
}

class argv_828
{
protected:
	LARGE_INTEGER argv_2279;
	LARGE_INTEGER argv_2280;

	LONGLONG argv_2282;
	LONGLONG argv_2281;

public:
	argv_828(void);

	void argv_3601(void);
	void argv_3607(void);
	double argv_1743(void) const;
	string argv_3608 (const char *);
};

inline argv_828::argv_828(void) {
	LARGE_INTEGER liFrequency;

	QueryPerformanceFrequency(&liFrequency);
	argv_2282 = liFrequency.QuadPart;

	// Calibration
	argv_3601();
	argv_3607();

	argv_2281 = argv_2280.QuadPart-argv_2279.QuadPart;
}

inline void argv_828::argv_3601(void) {
	// Ensure we will not be interrupted by any other thread for a while
//	Sleep(0);
	QueryPerformanceCounter(&argv_2279);
}

inline void argv_828::argv_3607(void) {
	QueryPerformanceCounter(&argv_2280);
}

inline double argv_828::argv_1743(void) const {
	return (double)(argv_2280.QuadPart-argv_2279.QuadPart-argv_2281)*1000000.0 / argv_2282;
}

inline string argv_828::argv_3608 (const char * _msg) {
	argv_3607 ();
	double elapsed = argv_1743 ();
	char argv_3828[1024];
	if (elapsed > 1000000.0) {
		elapsed = elapsed / 1000000.0;
		if (elapsed > 60.0) {
			elapsed = elapsed / 60.0;
			snprintf (argv_3828, 1024, "elapsed argv_3825 : %.02lf minutes", elapsed);
		}
		else {
			snprintf (argv_3828, 1024, "%s: elapsed argv_3825 : %.02lf seconds", _msg, elapsed);
		}
	}
	else {
		snprintf (argv_3828, 1024, "%s: elapsed argv_3825 : %.02lf microseconds", _msg, elapsed);
	}
	argv_3828[1024 - 1] = '\0';
	return argv_3828;
}


#endif // #define argv_426



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
