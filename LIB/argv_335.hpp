// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_335.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all necessary argv_1139 
// @@ structures and functions for the library
// @@ loader to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_459
#define argv_459



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <map>
#include <string>
#if defined (__LINUX_OS__)
	#include <dlfcn.h>
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_325.hpp"
#include "../LIB/argv_320.hpp"
#include "../LIB/argv_340.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_893
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to argv_2198/unload shared libraries (DLL)
// @@ and to argv_2253 safely symbols from these DLL.
// @@ Furthermore this argv_2908 is an abstract layer as it works
// @@ under win32 as well as under Linux.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_893
{
private:
	argv_3864							argv_1115;
	map<string, argv_3864>				argv_2313;
	map<string, argv_3864>::iterator		argv_2020;
	argv_3517							argv_2135;
	string							argv_2137;

	bool argv_2156   (argv_820);
	bool argv_2170 (argv_820);

#if defined (__WIN32_OS__)
	map<argv_3864, HMODULE>				argv_2315;
	map<argv_3864, HMODULE>::iterator	argv_2023;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	map<argv_3864, argv_2263>				argv_2315;
	map<argv_3864, argv_2263>::iterator		argv_2023;
#endif // #if defined (__LINUX_OS__)

public:
	argv_893 ();
	argv_3517 reset (); 
	argv_3517 argv_2208     (argv_820, argv_3864&);
	argv_3517 argv_3915   (argv_3864);
	argv_3517 argv_1773 (argv_3864, argv_820, argv_2263 *);
	void argv_1756 (argv_3517&, string&);
};



#endif // argv_459



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
