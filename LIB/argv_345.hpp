// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_345.hpp
// @@ 
// @@ DESCRIPTION:
// @@ communication layer that uses 
// @@ TCP/IP sockets. Derivates from the
// @@ argv_926 argv_2908.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_379
#define argv_379



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_343.hpp"

#if defined (__LINUX_OS__)
	#include <sys/types.h>
	#include <sys/argv_3549.h>
	#include <arpa/inet.h>
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_928
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 is an abstraction layer of a communication
// @@ channel that uses the TCP/IP protocol to communicate.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_928 : public argv_926
{
protected:
	argv_3864		argv_3221;
#if defined (__WIN32_OS__)
	WORD			argv_3552;
	WSADATA			argv_3995;
	SOCKADDR_IN		argv_3487;
	LPHOSTENT		argv_1912;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct hostent *	argv_1912;
	struct sockaddr_in	argv_3487;
#endif // #if defined (__LINUX_OS__)
	argv_3550			argv_2197;
	argv_3550			argv_915;

	argv_3517 argv_3240 (argv_820 _target_address, argv_3864 _port=0);

	// server related function
	argv_3517 argv_3249 (argv_820 _target_address, argv_3864 _port=0);
	argv_3517 argv_615 (argv_2263&);

	argv_3517 argv_3474 (argv_3862 *, argv_3864, argv_3864&);
	argv_3517 argv_3335 (argv_3862 * _buf, argv_3864 _size_2_read, argv_3864& _actual_size, argv_3517 _timeout_second=-1);

	argv_3517 argv_923 ();
	argv_3517 argv_923 (argv_2263);
	argv_3517 argv_1742 (argv_2263&);
	argv_3517 argv_1759 (argv_2263&);

public:
	argv_928 ();
	~argv_928 ();
	argv_3517 init_with_connected_client_socket (argv_3550&);
};



#endif // argv_379



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
