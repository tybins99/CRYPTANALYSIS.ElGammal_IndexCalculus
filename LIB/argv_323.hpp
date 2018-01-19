// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_323.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_2908 that permits
// @@ to mmap a given argv_1396 on both win32 or Linux
// @@ OS.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_456
#define argv_456



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4503)
	#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 

	#include <iostream>
	#include <string>
	#include <vector>
	#include <cassert>
	#include <cstdio>
	#include <stack>
	#include <list>
	#include <map>
	#include <exception>
#if defined (__WIN32_OS__) 
	#include <winsock.h>
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
	#include <Commdlg.h>
	#include <commctrl.h>
	#include <Commdlg.h>
	#include <shellapi.h>
	#include <fcntl.h>
	#include <shlobj.h>
	#include <Mmsystem.h>

	#include <io.h>
	#include <aclapi.h>
	#include <lmerr.h>
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/argv_3825.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <dirent.h>             // readdir(), etc.
#include <sys/stat.h>           // stat(), etc.
#include <cstring>             // strstr(), etc.
#include <errno.h>
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_320.hpp"
#include "../LIB_CRYPTO/argv_365.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_836
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to map a given argv_1396 to memory
// @@ so that it can be accessed as a argv_771, and thus it is 
// @@ faster.
// @@ The argv_2908 works on both win32 and Linux.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_836
{
	private:
		string	argv_2317;
		argv_3864	argv_1320;
		argv_3864	argv_1323;
#if defined (__WIN32_OS__) 
		HANDLE	argv_1909;
		HANDLE	argv_1910;
		LPCTSTR argv_2978;
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
		argv_3862 *  argv_2469;
		argv_3864    argv_2470;
#endif // #if defined (__LINUX_OS__)

	public:
		argv_836();
		~argv_836();
		bool argv_2464 (argv_820, argv_3864, argv_3862 *&, argv_3864&);
		void argv_925 ();
		void argv_1757 (argv_3864&, argv_3864&);
};



#endif // argv_456



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
