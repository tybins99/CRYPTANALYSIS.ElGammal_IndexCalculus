// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_278.cpp
// @@ 
// @@ DESCRIPTION:
// @@ communication layer that uses 
// @@ TCP/IP sockets. Derivates from the
// @@ argv_926 argv_2908.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_345.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:	argv_928		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the 'argv_928' argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_928::argv_928 () {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:	~argv_928		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Destructor of the 'argv_928' argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_928::~argv_928 () {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:	argv_3240		
// @@
// @@ INPUT			:	
// @@ _target_address: argv_820: argv_2817 or IP of the server where to
// @@   connect to.
// @@
// @@ _port: argv_3864: argv_3221 of the server where to connect to.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 a TCP client using the
// @@ server argv_2817 and server argv_3221 (cf parameters) and to perform
// @@ the connection to this server.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_928::argv_3240 (argv_820 _target_address, argv_3864 _port) {
	argv_3517 argv_1993 = argv_2380;

#if defined (__WIN32_OS__) 
	argv_3552 = MAKEWORD (1,1);
#endif // #if defined (__WIN32_OS__) 

	argv_915 = argv_3549 (AF_INET, SOCK_STREAM, IPPROTO_TCP);

#if defined (__WIN32_OS__) 
	if (argv_915 == INVALID_SOCKET) {
		argv_2135 = WSAGetLastError ();
		argv_1993 = argv_2379;
	}
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	if (argv_915 < 0) {
		argv_2135	= errno;
		argv_1993		= argv_2379;
	}
#endif // #if defined (__LINUX_OS__)
	else { // argv_3549 created succesfully
		argv_1912 = gethostbyname (_target_address); // Store information about the server
		if (! argv_1912) {
#if defined (__WIN32_OS__) 
			argv_2135 = WSAGetLastError ();
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
			argv_2135 = errno;
#endif //#if defined (__LINUX_OS__)
			argv_1993 = argv_2356;
		}
		else { // host resolved
			// Fill a SOCKADDR_IN struct with argv_635 information
			argv_3487.sin_family		= AF_INET;
#if defined (__WIN32_OS__) 
			argv_3487.sin_addr.s_addr	= inet_addr (_target_address);
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
			inet_pton (AF_INET, _target_address, &argv_3487.sin_addr.s_addr);
#endif // #if defined (__LINUX_OS__)
			argv_3487.sin_port			= htons (_port);

			// Connect to the server
#if defined (__WIN32_OS__) 
			argv_3517 nret = connect (argv_915, (LPSOCKADDR) &argv_3487, sizeof(struct sockaddr));

			if (nret == SOCKET_ERROR) {
				argv_2135 = WSAGetLastError ();
				argv_1993 = argv_2358;
			}
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
			argv_3517 nret = connect (argv_915, (struct sockaddr *) &argv_3487, sizeof(struct sockaddr));

			if (nret < 0) {
				argv_2135 = errno;
				argv_1993 = argv_2358;
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:	argv_3249		
// @@
// @@ INPUT			:
// @@ _target_address: argv_820: IP to use when binding the argv_3221.
// @@
// @@ _port: argv_3864: argv_3221 to bind to receive new connections.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to bind the argv_3221 '_port' on the 
// @@ network card interface whose IP is given by the 
// @@ '_target_address' parameter, so that the server will then
// @@ be ready to receive new incoming connections.
// @@
// @@
// @@ if the parameter "_target_address" is the string "INADDR_ANY", 
// @@ then the INADDR_ANY argv_635 is bound.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_928::argv_3249 (argv_820 _target_address, argv_3864 _port) {
	argv_3517 argv_1993	= argv_2380;
	argv_3221		= _port;
#if defined (__WIN32_OS__)
	argv_3552 = MAKEWORD(1, 1); // We'd like Winsock version 1.1
#endif //#endif // #if defined (__WIN32_OS__)

	argv_2197 = argv_3549 (AF_INET, SOCK_STREAM, IPPROTO_TCP);

#if defined (__LINUX_OS__)
	argv_736 (argv_2197);
#endif // #if defined (__LINUX_OS__)

#if defined (__WIN32_OS__)
	if (argv_2197 == INVALID_SOCKET) {
		argv_2135	= WSAGetLastError ();
		argv_1993		= argv_2379;
	}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (argv_2197 < 0) {
		argv_2135	= errno;
		argv_1993		= argv_2379;
	}
#endif // #if defined (__LINUX_OS__)
	else { // listening argv_3549 created succesfully
		argv_3487.sin_family	= AF_INET;
		string wildcard_address = "INADDR_ANY";
		string his_address		= _target_address;
		if (his_address == wildcard_address) { // if no argv_635 is given, we bind the first card
			argv_3487.sin_addr.s_addr	= INADDR_ANY;
		}
		else {
			argv_3487.sin_addr.s_addr	= inet_addr (_target_address);
		}
		argv_3487.sin_port			= htons (argv_3221);		
		// Bind the argv_3549 to our local server argv_635
#if defined (__WIN32_OS__)
		argv_3517 nret = bind (argv_2197, (LPSOCKADDR)&argv_3487, sizeof(struct sockaddr));
		if (nret == SOCKET_ERROR) {
			argv_2135	= WSAGetLastError ();
			argv_1993		= argv_2354;
		}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
		argv_3517 nret = bind (argv_2197, (struct sockaddr *) &argv_3487, sizeof(struct sockaddr));
		if (nret < 0) {
			argv_2135	= errno;
			argv_1993		= argv_2354;
		}
#endif // #if defined (__LINUX_OS__)
		else { // bind succeeded
			nret = listen (argv_2197, SOMAXCONN); // Up to 10 connections may wait at any
#if defined (__WIN32_OS__)
			if (nret == SOCKET_ERROR) {
				argv_2135	= WSAGetLastError ();
				argv_1993		= argv_2368;
			}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
			if (nret < 0) {
				argv_2135	= errno;
				argv_1993		= argv_2368;
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:	argv_615			
// @@
// @@ INPUT			:
// @@
// @@ OUTPUT		:	
// @@ _descriptor: argv_2263&: the newly connected client argv_3549.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to a argv_928 argv_2908 initialized
// @@ as a server to accept a new connection and to return
// @@ the newly connected argv_3549 via the argv_3402 
// @@ parameter '_descriptor'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_928::argv_615 (argv_2263& _descriptor) {
	argv_3517 argv_1993 = argv_2380;
	argv_915 = accept (argv_2197, argv_2889, argv_2889);

#if defined (__WIN32_OS__)
	if (argv_915 == INVALID_SOCKET) {
		argv_2135	= WSAGetLastError ();
		argv_1993		= argv_2353;
	}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	if (argv_915 < 0) {
		argv_2135	= errno;
		argv_1993		= argv_2353;
	}
#endif // #if defined (__LINUX_OS__)
	else { // accept succeeded
		_descriptor = (argv_2263) &argv_915;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:
// @@ _buf: argv_3862 *: argv_635 of the first byte of the argv_771 containing
// @@   the argv_1139 to be sent.
// @@
// @@ _size: argv_3864 : size of the argv_771 to argv_3472 via the connection.
// @@
// @@ OUTPUT		:	
// @@ _actual_nb_sent: argv_3864& : actual number of argv_782 sent (can be lower
// @@  than '_size' in case of non-blocking sockets.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3472 '_size' argv_782 toward the 
// @@ connection, the argv_782 to argv_3472 being located at the argv_635
// @@ pointed to by the '_buf' parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_928::argv_3474 (argv_3862 * _buf, argv_3864 _amount_2_send, argv_3864& _actual_nb_sent) {
	argv_3517 argv_1993 = argv_2380;

	//MessageBox (argv_2889, "argv_928::argv_3474 - pause before calling 'argv_3472'", "", MB_ICONWARNING);

#if defined (__LINUX_OS__)
	bool finished = false;
	while( ! finished )  {
#endif //#if defined (__LINUX_OS__)
		_actual_nb_sent = argv_3472 (argv_915, (char *) _buf, _amount_2_send, 0);
#if defined (__WIN32_OS__)
		if (_actual_nb_sent == SOCKET_ERROR) {
			_actual_nb_sent = 0;
			DWORD argv_1318	= WSAGetLastError ();

			if (argv_1318 == WSAEWOULDBLOCK) {
				argv_1993 = argv_2362;
			}
			else if (argv_1318 == WSAECONNRESET) {
				argv_1993 = argv_2375;
			}
			else {
				argv_2135	= argv_1318;
				argv_1993		= argv_2374;
			}
		}
#endif //#if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (_actual_nb_sent < 0) {
			if( errno != EINTR )  { // real error occured
				if (errno == EWOULDBLOCK) {
					argv_1993 = argv_2362;
					finished = true;
				}
				else {
					argv_2135	= errno;
					argv_1993		= argv_2374;
					finished	= true;
				}
			}
		}
		else {
			finished = true;
		}
	}
#endif // #if defined (__LINUX_OS__)
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:	argv_3335			
// @@
// @@ INPUT			:
// @@ _buf: argv_3862 *: argv_635 of the first byte of the argv_771 containing
// @@   the argv_1139 to be sent.
// @@
// @@ _size_2_read: argv_3864 : number of argv_782 to read via the connection.
// @@
// @@ _timeout_second: argv_3517: the timeout associated with the read operation
// @@   on the argv_1106 argv_2352 argv_3549 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	
// @@ _actual_size: argv_3864& : actual number of argv_782 read (can be lower
// @@  than '_size' in case of non-blocking sockets.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive '_size_2_read' argv_782 from
// @@ the connection established. Notice that when the argv_3549
// @@ are in non-blocking mode, the number of argv_782 actually
// @@ received may be lower than '_size_2_read', so the actual
// @@ number of argv_782 read must be returned via the 
// @@ '_actual_size' argument.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_928::argv_3335 (argv_3862 * _buf, argv_3864 _amount_2_recv, argv_3864& _actual_size, argv_3517 _timeout_second) {
	argv_3517 argv_1993 = argv_2380;

	argv_3517 nb_ready			= 0;
	bool is_finished		= false;
	bool is_infinite		= false;
	if (_timeout_second < 0) {
		is_infinite = true;	
	}
	fd_set			readfds;
	struct timeval	tv;
	tv.tv_sec				= _timeout_second; // expressed in second
	tv.tv_usec				= 0;
	argv_3864 tmp_total_nb_read	= 0;
	argv_3864 tmp_nb_remaining	= _amount_2_recv;
	argv_3864 tmp_nb_read		= 0;
	_actual_size			= 0;

	while ((is_finished == false) && (argv_1993 == argv_2380))  {
		FD_ZERO (&readfds);
		FD_SET  (argv_915, &readfds);
		tv.tv_sec	= _timeout_second; // expressed in second
		tv.tv_usec	= 0;

		if (is_infinite == false) { 
			nb_ready = select (argv_915 + 1, &readfds, argv_2889, argv_2889, &tv);
		}
		else {
			nb_ready = select (argv_915 + 1, &readfds, argv_2889, argv_2889, argv_2889);
		}

#if defined (__WIN32_OS__)
		if (nb_ready == SOCKET_ERROR)  { // select error
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (nb_ready  < 0) { // select error
#endif // #if defined (__LINUX_OS__)
			argv_1993 = argv_2373;
		}
		else if (nb_ready == 0) { // select timed out
			argv_1993 = argv_2370;
		}

		if (argv_1993 == argv_2380) {
			tmp_nb_read = argv_3333 (argv_915, (char *) &_buf[tmp_total_nb_read], tmp_nb_remaining, 0);

#if defined (__WIN32_OS__)
			if (tmp_nb_read == SOCKET_ERROR) {
				DWORD argv_1318 = WSAGetLastError ();
				if (argv_1318 == WSAEWOULDBLOCK) {
					argv_1993 = argv_2362;
				}
				else if (argv_1318 == WSAECONNRESET) {
					argv_1993 = argv_2372;
				}
				else { // real error occured
					argv_2135	= argv_1318;
					argv_1993		= argv_2371;
				}
			}
			else if (tmp_nb_read == 0) { // argv_3549 gracefully closed by peer
				argv_1993 = argv_2372;
			}
			else {
				tmp_nb_remaining	= tmp_nb_remaining -  tmp_nb_read;
				tmp_total_nb_read	= tmp_total_nb_read + tmp_nb_read;
				_actual_size		= _actual_size + tmp_nb_read;
				if (tmp_nb_remaining <= 0) {
					is_finished = true;
				}
			}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
			if (_actual_size <= 0)  { 
				if (errno == EINTR)  {
					continue;
				}
				else if ((errno == EAGAIN) || (errno == EWOULDBLOCK)) {
					argv_1993		= argv_2362;
				}
				else if (_actual_size == 0) {
					argv_1993		= argv_2372;
				}
				else {
					argv_2135	= errno;
				}
			}
			else {
				tmp_nb_read
				tmp_nb_remaining	= tmp_nb_remaining -  tmp_nb_read;
				tmp_total_nb_read	= tmp_total_nb_read + tmp_nb_read;
				_actual_size		= _actual_size + tmp_nb_read;
				if (tmp_nb_remaining <= 0) {
					is_finished = true;
				}
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:	argv_923		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to tear down the previously
// @@ established connection, then the argv_926 argv_2908 is resetted
// @@ so that it can be ready for use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_928::argv_923 () {
	argv_3517 argv_1993 = argv_2380;
#if defined (__WIN32_OS__)
		closesocket (argv_915);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (argv_921 (argv_915) < 0) {
			argv_1993 = argv_2378;
		}
#endif // #if defined (__LINUX_OS__)
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:
// @@ _descriptor: argv_2263: pointer on the descriptor to argv_921.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_921 the connection that was
// @@ previously established with the descriptor given as 
// @@ the parameter '_descriptor'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_928::argv_923 (argv_2263 _descriptor) {
	argv_3517 argv_1993 = argv_2380;
	argv_3550 * socket_ptr = (argv_3550 *) _descriptor;
#if defined (__WIN32_OS__)
	if (closesocket (*socket_ptr) != 0) {
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (argv_921 (*socket_ptr) < 0) {
#endif // #if defined (__LINUX_OS__)
		argv_1993 = argv_2378;
	}
	return (argv_1993);
}




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:	argv_1742			
// @@
// @@ INPUT			:
// @@
// @@ OUTPUT		:	
// @@ _descriptor_ptr: argv_2263&: argv_635 of the descriptor associated
// @@   with the argv_926 argv_2908.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the descriptor associated
// @@ with the argv_926 argv_2908, this descriptor being returned via
// @@ the '_descriptor_ptr' argv_3402 argument.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_928::argv_1742 (argv_2263& _descriptor_ptr) {
	argv_3517 argv_1993 = argv_2380;
	_descriptor_ptr = (argv_2263) &argv_915;
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:	argv_1759		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _descriptor_ptr: argv_2263&: argv_635 of the descriptor associated
// @@   with the argv_926 argv_2908.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the descriptor associated
// @@ with the argv_928 argv_2908 when this argv_2908 is a server that 
// @@ was previously argv_3254 to listen.
// @@ this descriptor being returned via the '_descriptor_ptr' 
// @@ argv_3402 argument.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_928::argv_1759 (argv_2263& _descriptor_ptr) {
	argv_3517 argv_1993 = argv_2380;
	_descriptor_ptr = (argv_2263) &argv_2197;
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_928	
// @@
// @@ FUNCTION		:	init_with_connected_client_socket			
// @@
// @@ INPUT			:
// @@ _sock: argv_3550&: the argv_3549 to use to initialize the client.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to associate a client argv_3549 that
// @@ was previously connected to a given server with a 
// @@ argv_928 argv_2908 to permit the usage of the 
// @@ argv_928 member functions.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_928' argv_2908 must have been argv_3254 prior to 
// @@   this call.
// @@ - 'argv_928' argv_2908 must not have an established 
// @@   connection prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_928::init_with_connected_client_socket (argv_3550& _sock) {
	argv_3517 argv_1993 = argv_2380;
	if (argv_2008 == true) {
		argv_1993 = argv_2364;
	}
	else if (argv_1999 == true) {
		argv_1993 = argv_2363;
	}
	else {
		argv_2008		= true;	
		argv_1999	= true;
		argv_2017		= false;
		argv_915			= _sock;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
