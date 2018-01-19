// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_276.cpp
// @@ 
// @@ DESCRIPTION:
// @@ abstraction layer for local and remote
// @@ inter process communications
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_343.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	reset		
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
// @@ This function permits to reset all fields of
// @@ the argv_926 argv_2908 to their initial argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_926::reset () {
	argv_2017		= false;
	argv_2008		= false;
	argv_1999	= false;
	argv_2135		= 0;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_926		
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
// @@ Normal constructor of the 'argv_926' argv_2908.
// @@ it argv_3254 the argv_926 argv_2908 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_926::argv_926 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	~argv_926		
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
// @@ destructor of the argv_926 argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_926::~argv_926 () {

}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_1756			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : the last error encountered with the argv_926 argv_2908.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last error 
// @@ encountered with the argv_926 argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_926::argv_1756 () {
	return (argv_2135);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_3239			
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
// @@ argv_3517 : argv_2380 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 a TCP client using the
// @@ server argv_2817 and server argv_3221 (cf parameters) and to perform
// @@ the connection to this server.
// @@
// @@ CONTRACT 		:	
// @@ - client must not have been argv_3254 before this call.
// @@ - client must not be connected prior to this call.
// @@ - argv_2352 argv_2908 must not be a server entity.
// @@ - '_target_address' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_926::argv_3239 (argv_820 _target_address, argv_3864 _port) {
	argv_3517 argv_1993 = argv_2380;
	if (argv_2008 == true) {
		argv_1993 = argv_2364;
	}
	else if (argv_1999 == true) {
		argv_1993 = argv_2363;
	}
	else if (argv_2017 == true) {
		argv_1993 = argv_2355;
	}
	else if (_target_address == argv_2889) {
		argv_1993 = argv_2367;
	}
	else { // ok to proceed
		argv_1993 = argv_3240 (_target_address, _port);
		if (argv_1993 != argv_2380) {
			reset ();		
		}
		else { // preparation succeeded
			argv_2008		= true;
			argv_2017		= false;
			argv_1999	= true;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_922				
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to tear down the previously
// @@ established connection, then the argv_926 argv_2908 is resetted
// @@ so that it can be ready for use.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_926' argv_2908 must have been argv_3254 before this call.
// @@ - 'argv_926' argv_2908 must be connected prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_926::argv_922 () {
	argv_3517 argv_1993 = argv_2380;
	if (argv_2008 == false) {
		argv_1993 = argv_2366;
	}
	else if (argv_1999 == false) {
		argv_1993 = argv_2365;
	}
	else { // ok to proceed, argv_3604 is correct
		argv_1993 = argv_923 ();
		reset (); // reset
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_922				
// @@
// @@ INPUT			:
// @@ _descriptor: argv_2263: pointer on the descriptor to argv_921.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_921 the connection that was
// @@ previously established with the descriptor given as 
// @@ the parameter '_descriptor'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_926::argv_922 (argv_2263 _descriptor) {
	argv_3517 argv_1993 = argv_923 (_descriptor);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_3248				
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
// @@ argv_3517 : argv_2380 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to bind the argv_3221 '_port' on the 
// @@ network card interface whose IP is given by the 
// @@ '_target_address' parameter, so that the server will then
// @@ be ready to receive new incoming connections.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_926' argv_2908 must not have been argv_3254 yet before.
// @@ - 'argv_926' must not be connected prior to this call.
// @@ - '_target_address' parameter must not be a argv_2889 pointer. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_926::argv_3248 (argv_820 _target_address, argv_3864 _port) {
	argv_3517 argv_1993 = argv_2380;
	if (argv_2008 == true) {
		argv_1993 = argv_2364;
	}
	else if (argv_1999 == true) {
		argv_1993 = argv_2363;
	}
	else if (_target_address == argv_2889) {
		argv_1993 = argv_2367;
	}
	else { // ok to proceed
		argv_1993 = argv_3249 (_target_address, _port);
		if (argv_1993 == argv_2380) {
			argv_2008 = true;
			argv_2017	= true;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_614				
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _descriptor: argv_2263&: the newly connected client argv_3549.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to a argv_926 argv_2908 initialized
// @@ as a server to accept a new connection and to return
// @@ the newly connected argv_3549 via the argv_3402 
// @@ parameter '_descriptor'.
// @@
// @@ CONTRACT 		:
// @@ - 'argv_926' argv_2908 must not have been argv_3254 yet.
// @@ - 'argv_926' must have been argv_3254 as a server prior to
// @@   this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_926::argv_614 (argv_2263& _descriptor) {
	argv_3517 argv_1993 = argv_2380;
	if (argv_2008 == false) {
		argv_1993 = argv_2366;
	}
	else if (argv_2017 == false) {
		argv_1993 = argv_2355;
	}
	else if (argv_1999 == true) {
		// for now the server accepts only argv_2929 connection from
		// a given client for simplicity of the primary tests.
		argv_1993 = argv_2363;
	}
	else { // ok to proceed, argv_3604 is correct
		argv_1993 = argv_615 (_descriptor);
		if (argv_1993 == argv_2380) { // connection was succesful
			argv_1999 = true;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_1741				
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
// @@ argv_3517 : argv_2380 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the descriptor associated
// @@ with the argv_926 argv_2908, this descriptor being returned via
// @@ the '_descriptor_ptr' argv_3402 argument.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_926' argv_2908 must be connected prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_926::argv_1741 (argv_2263& _descriptor_ptr) {
	argv_3517 argv_1993 = argv_2380;
	if (argv_1999 == false) {
		argv_1993 = argv_2365;
	}
	else {
		argv_1993 = argv_1742 (_descriptor_ptr);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_1758				
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
// @@ argv_3517 : argv_2380 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the descriptor associated
// @@ with the argv_926 argv_2908 when this argv_2908 is a server that 
// @@ was previously argv_3254 to listen.
// @@ this descriptor being returned via the '_descriptor_ptr' 
// @@ argv_3402 argument.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_926' argv_2908 must have been argv_3254 prior to this call.
// @@ - 'argv_926' must be a server argv_2908 (cf preparation).
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_926::argv_1758 (argv_2263& _descriptor_ptr) {
	argv_3517 argv_1993 = argv_2380;
	if (argv_2017 == false) {
		argv_1993 = argv_2355;
	}
	else if (argv_2008 == false) {
		argv_1993 = argv_2366;
	}
	else { // all pre-conditions are met
		argv_1993 = argv_1759 (_descriptor_ptr);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_3473				
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
// @@ argv_3517 : argv_2380 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3472 '_size' argv_782 toward the 
// @@ connection, the argv_782 to argv_3472 being located at the argv_635
// @@ pointed to by the '_buf' parameter.
// @@
// @@ CONTRACT 		:	
// @@ - '_buf' parameter must not be a argv_2889 pointer.
// @@ - '_size' parameter must not be zero.
// @@ - 'argv_926' must have been connected prior to this call, either
// @@   as a server, or as a client.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_926::argv_3473 (argv_3862 * _buf, argv_3864 _size, argv_3864& _actual_nb_sent) {
	argv_3517 argv_1993 = argv_2380;
	if ((_buf == argv_2889) || (_size == 0)) {
		argv_1993 = argv_2367;	
	}
	else if (argv_1999 == false) {
		argv_1993 = argv_2365;
	}
	else { // argv_3604 is correct => ok to proceed
		argv_1993 = argv_3474 (_buf, _size, _actual_nb_sent);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_926	
// @@
// @@ FUNCTION		:	argv_3334				
// @@
// @@ INPUT			:
// @@ _buf: argv_3862 *: argv_635 of the first byte of the argv_771 containing
// @@   the argv_1139 to be sent.
// @@
// @@ _size_2_read: argv_3864 : number of argv_782 to read via the connection.
// @@
// @@ _timeout_second: argv_3517: the timeout associated with the read operation
// @@   on the argv_1106 argv_2352 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	
// @@ _actual_size: argv_3864& : actual number of argv_782 read (can be lower
// @@  than '_size' in case of non-blocking sockets.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive '_size_2_read' argv_782 from
// @@ the connection established. Notice that when the argv_3549
// @@ are in non-blocking mode, the number of argv_782 actually
// @@ received may be lower than '_size_2_read', so the actual
// @@ number of argv_782 read must be returned via the 
// @@ '_actual_size' argument.
// @@
// @@ CONTRACT 		:	
// @@ - '_buf' parameter must not be a argv_2889 pointer.
// @@ - '_size' parameter must not be zero.
// @@ - 'argv_926' must have been connected prior to this call, either
// @@   as a server, or as a client.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_926::argv_3334 (argv_3862 * _buf, argv_3864 _size_2_read, argv_3864& _actual_size, argv_3517 _timeout_second) {
	argv_3517 argv_1993 = argv_2380;
	if (_buf == argv_2889) {
		argv_1993 = argv_2367;	
	}
	else if (argv_1999 == false) {
		argv_1993 = argv_2365;
	}
	else { // argv_3604 is correct => ok to proceed
		argv_1993 = argv_3335 (_buf, _size_2_read, _actual_size, _timeout_second);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
