// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_319.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the functions and argv_1139
// @@ structures necessary for the scan daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_389
#define argv_389



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <string>
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_340.hpp"

#if defined (__WIN32_OS__)
	#include <windows.h>
	#include <mmsystem.h>
	#include <winsvc.h>
	#include <Windows.h>
#endif // #if defined (__WIN32_OS__)




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_823
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 is application independant, and permits 
// @@ to argv_3414 a given argv_2908 or routine as a service under
// @@ win32.
// @@ Notice that in order to be used, this argv_2908 must be derivated
// @@ so that the argv_2908 can be adapted to the needs of the service
// @@ required by the application.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_823
{
protected:
	argv_802				argv_741;
	string					argv_3484;
	string					argv_2237; // using the registry
	argv_917					argv_2251;
	string					argv_2236;
	bool					argv_3492;
	virtual argv_3517			argv_1077 ();

#if defined (__WIN32_OS__)
	DWORD					argv_3489;
	SERVICE_STATUS			argv_2887;
	HANDLE					argv_2121;
	SERVICE_STATUS_HANDLE	argv_2888; 
	argv_3517					argv_3939 (DWORD,DWORD,DWORD,DWORD,DWORD);
	friend void				argv_3488 (DWORD);
	friend DWORD WINAPI		doit_worker  (argv_2263);
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	friend argv_2263			doit_worker  (argv_2263);
	friend void				child_handler (int);
	friend void *			argv_1257 (void *);
#endif // #if defined (__LINUX_OS__)
	argv_3517					argv_2119 ();
	void					reset ();
	argv_3517					argv_1076 ();
	virtual argv_3517			argv_2120 () = 0;

public:
	argv_823 ();
	virtual ~argv_823 ();
	argv_3517					argv_3414 ();

};


class argv_1103
{
public:
	argv_3517	argv_1915;
#if defined (__LINUX_OS__)
	pthread_t argv_1890;
	pthread_t argv_3080;
#endif // #if defined (__LINUX_OS__)
	argv_823 * argv_1138;
};



#endif // argv_389



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
