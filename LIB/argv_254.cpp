// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_321.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the necessary objects
// @@ to argv_1890 n argv_2352 and all their events.
// @@ (argv_3549 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_321.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_916	
// @@
// @@ FUNCTION		:	argv_916	
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
// @@ normal constructor of the 'argv_916' argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_916::argv_916 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_916	
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
// @@ This function permits to set all fields of
// @@ the 'argv_916' argv_2908 to their initial argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_916::reset () {
	argv_900 = argv_912;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_834	
// @@
// @@ FUNCTION		:	argv_834	
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
// @@ Normal constructor of the 'argv_834' argv_2908.
// @@ it sets all fields of the 'argv_916' argv_2908 to 
// @@ their initial argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_834::argv_834 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_834	
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
// @@ This function permits to set all fields of the 
// @@ 'argv_834' argv_2908 to their initial argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_834::reset () {
	argv_1695			= argv_2889;
	argv_1697		= argv_2889;
	argv_1698			= argv_2889;
	argv_1629			= argv_2889;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_833	
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
// @@ normal constructor of the 'argv_833' argv_2908.
// @@ it sets all fields of the 'argv_833' argv_2908 to 
// @@ their initial argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_833::argv_833 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	reset
// @@
// @@ INPUT			:	
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
// @@ This function permits to bring the 'argv_833' argv_2908
// @@ back to it's initial argv_3604 :
// @@ - free box stack is emptied
// @@ - all sets are reseted.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_833::reset () {
	// empty the stack of free box indexes
	while (argv_3595.empty () == false) {
		argv_3595.pop ();
	}

	// reset all sets
	FD_ZERO (&readfds);
	FD_ZERO (&readfds_dirty);
	FD_ZERO (&writefds);
	FD_ZERO (&writefds_dirty);
	argv_2240				= argv_2889;

	argv_2862			= 0;
	argv_2871			= 0;
	argv_899		= 0;
	argv_898			= argv_2889;
	argv_2867		= 0; // debug purpose

	// force the vector to free it's internal memory
	argv_3948.clear ();
	vector<argv_916>().swap (argv_3948);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_854	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@ _nb_ready: argv_3864: the number of remaining argv_3549 descriptor
// @@   that have a pending event. The function must update it's
// @@   argv_3960.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function checks all listening argv_3549 to see if they have
// @@ a pending connection. If it is the case, then the connection
// @@ is accepted, and a box is chosen for this new client.
// @@ Then the application dependant is called for each new connection.
// @@ Notice that this application dependant function can either
// @@ trigger the write event or not.
// @@
// @@ Notice that the listeners are handled using only the argv_3549
// @@ (not the argv_2352 argv_2908).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_854 (argv_3864& _nb_ready) {
	argv_3517 argv_1993			= argv_1343;
	argv_3864 his_box		= 0;
	bool trigger_write	= false;
	argv_3864 nb_new_cnx		= 0;
	argv_3550 sock_tmp;

#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3828[MAX_PATH];
	argv_2240->argv_2247 (argv_1152, "checking new connections");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	// check all listening sockets
	for (argv_3864 i=0 ; i<argv_2871 ; i++) {
		if (FD_ISSET (argv_3948[i].argv_3549, &readfds_dirty)) {
			sock_tmp = accept (argv_3948[i].argv_3549 , argv_2889, argv_2889);

			_nb_ready--;

#if defined (__WIN32_OS__)
			if (sock_tmp == INVALID_SOCKET) {
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
			if (sock_tmp < 0) {
#endif // #if defined (__LINUX_OS__)
				argv_1993 = argv_1328;
				break;
			}

#if defined (__DEBUG_EVT_LOOP__) 
			argv_3548 (argv_3828, MAX_PATH, "new connection for listener %u : new descriptor = %u", argv_3948[i].argv_3549, sock_tmp);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1152, "new connection : descriptor = ", (argv_3864) sock_tmp);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			// the connected client inherits the argv_3842 of the listener.
			argv_1993 = argv_618 (his_box, sock_tmp, argv_3948[i].argv_900);
			if (argv_1993 != argv_1343) {
				break;
			}

			// disable the Nagle's algorithm for the newly connected argv_3549
			argv_1993 = disable_nagle_algorithm (sock_tmp);
			if (argv_1993 == argv_2380) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_2240->argv_2247 (argv_1321, "argv_833::argv_854  - disable_nagle_algorithm...[SUCCESS]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				argv_1993 = argv_1343; // remap error argv_929
			}
			else {
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_833::argv_854 - 'disable_nagle_algorithm' failed !");
			}

			// to ensure that it won't be triggered if the 
			// function does not set it
			trigger_write = false; 
			nb_new_cnx++;
			// now let the user function do it's job
			argv_1993 = argv_1327.argv_1695 (argv_898, his_box, trigger_write);
			if (argv_1993 != argv_1343) {
				break;
			}
			else if (trigger_write == true) { // if argv_3549 must be scheduled for write
				argv_1993 = argv_619 (i, false, true); // argv_616 it for write event
				if (argv_1993 != argv_1343) {
					break;
				}
			}
		}
		else {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_3548 (argv_3828, MAX_PATH, "listener at listening box %u has no new connection (fd=%u)", i, argv_3948[i].argv_3549);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}

		if (_nb_ready == 0) {
			break;
		}
	}

#if defined (__DEBUG_EVT_LOOP__) 
	argv_2240->argv_2247 (argv_1152, "number of new connections processed : ", nb_new_cnx);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_1993 == argv_2380) {
		argv_1993 = argv_1343; // remap error argv_929
	}
	return (argv_1993);
}

string argv_901 (argv_3862 _client_type) {
	string type_str;
	switch (_client_type) {
		case argv_912:				type_str = "argv_912";				break;	
		case argv_910:						type_str = "argv_910";						break;	
		case argv_911:					type_str = "argv_911";					break;	
		case argv_902:					type_str = "argv_902";					break;	
		case argv_905:	type_str = "argv_905";	break;	
		case argv_904:		type_str = "argv_904";		break;	
		case argv_907:		type_str = "argv_907";		break;	
		case argv_906:		type_str = "argv_906";		break;
		case argv_908:				type_str = "argv_908";				break;	
		case argv_903:				type_str = "argv_903";				break;	

		default: type_str = "<unknown client argv_3842>";
	}
	return (type_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_1223	
// @@
// @@ INPUT			:
// @@ _socket: argv_3550: the descriptor of the new connection.
// @@ _client_type: argv_3862 : the argv_3842 of the client associated 
// @@    with the newly connected argv_3549.
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
// @@ This function permits to argv_1200 information concerning
// @@ a newly connected client and it's associated argv_3842 to the 
// @@ log argv_1396.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_833::argv_1223 (argv_3550& _socket, argv_3862 _client_type) {
	char argv_3828[MAX_PATH];
	switch (_client_type) {
		case argv_912				: argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=argv_912)", (argv_3864) _socket);				break;
		case argv_910						: argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=argv_910)", (argv_3864) _socket);						break;
		case argv_911						: argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=argv_911)", (argv_3864) _socket);						break;
		case argv_902					: argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=argv_902)", (argv_3864) _socket);					break;
		case argv_905	: argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=argv_905)", (argv_3864) _socket);	break;
		case argv_904		: argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=argv_904)", (argv_3864) _socket);		break;
		case argv_907		: argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=argv_907)", (argv_3864) _socket);		break;
		case argv_906			: argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=argv_906)", (argv_3864) _socket);			break;
		case argv_908				: argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=argv_908)", (argv_3864) _socket);				break;
		case argv_903				: argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=argv_903)", (argv_3864) _socket);				break;

		default :
			argv_3548 (argv_3828, MAX_PATH, "adding newly connected client : descriptor = %u (argv_900=<unknown argv_3842>)", (argv_3864) _socket);
	}
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
}

bool argv_833::argv_909 (argv_3862 _type) {
	bool bret = false;
	if ((_type == argv_910) ||
		(_type == argv_911) ||
		(_type == argv_902) ||
		(_type == argv_905) ||
		(_type == argv_904) ||
		(_type == argv_907) ||
		(_type == argv_906) ||
		(_type == argv_908) ||
		(_type == argv_903)) {
		bret = true;
	}
	return (bret);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_618
// @@
// @@ INPUT			:	
// @@ _socket: argv_3550&: descriptor of the new client
// @@ _client_type: argv_3862 : argv_3842 of the new client.
// @@
// @@ OUTPUT		:	
// @@ _index: argv_3864: index of the box chosen for the new client.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_616 a new client by choosing a free
// @@ box for it, and by adding it to the proper event sets.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_618 (argv_3864& _index, argv_3550& _socket, argv_3862 _client_type) {
	argv_3517 argv_1993 = argv_1343;

#if defined (__DEBUG_EVT_LOOP__) 
	argv_1223 (_socket, _client_type);
	//argv_2240->argv_2247 (argv_1152, "adding newly connected client : descriptor = ", (argv_3864) _socket);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	// ensure that the client argv_3842 is coherent
	if (argv_909 (_client_type) == false) {
		argv_1993 = argv_1332;
	}
	else { // client argv_3842 is correct
		if (argv_3595.size () == 0) { // choose a free box for this newcomer
			argv_1993 = argv_1344; 
		}
		else { // found a free box for this newcomer
			_index = argv_3595.top ();
			argv_3595.pop ();

			// ensure that this box is free
			if (argv_898[_index].argv_3976 == false) {
				argv_1993 = argv_1329;
			}
			else { // the chosen box is not busy => OK to use
				argv_898[_index].argv_3976	= false;
				argv_898[_index].argv_3549		= _socket; 
				argv_898[_index].argv_900	= _client_type;
				argv_898[_index].argv_1734	= argv_898[_index].argv_1734 + 1;

				argv_1993 = argv_898[_index].argv_2376.init_with_connected_client_socket (_socket);
				if (argv_1993 == argv_2380) {
					argv_2862++; // to speed up the client loop

					// argv_616 this new argv_3549 to the read event set
					argv_1993 = argv_619 (_index, true, false);

					// ensure that the argv_3472 argv_3324 is empty for this client
					argv_3864 queue_size = 0;
					argv_3517 iret2 = argv_898[_index].argv_1776 (queue_size);
					if (iret2 == argv_896) {
						/*
				#if defined (__DEBUG_EVT_LOOP__) 
						char argv_3828[MAX_PATH];
						argv_3548 (argv_3828, MAX_PATH, "argv_833::argv_618 -  Initial argv_3472 argv_3324 size for client %u is %u", _index, queue_size);
						argv_3828[MAX_PATH - 1] = '\0';
						argv_2240->argv_2247 (argv_1152, argv_3828);
				#endif // #if defined (__DEBUG_EVT_LOOP__) 
						*/
					}

				}
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_3346	
// @@
// @@ INPUT			:	
// @@ _index: argv_3864 : index from the client argv_3734 of the client to
// @@   remove.
// @@
// @@ _last_errno: argv_3517 : the last error encountered with this client
// @@   we need it so that we can save it to the client argv_3734 for the
// @@   application dependant functions.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to remove the client whose location
// @@ in the argv_898 is '_index', and the last error encountered
// @@ with this client is contained in the '_last_errno' parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_3346 (argv_3864 _index, argv_3517 _last_errno) {
	argv_3517 argv_1993 = argv_1343;
	// ensure that the box is busy
	if (argv_898[_index].argv_3976 == true) {
		argv_1993 = argv_1330;
	}
	else { // the box is busy => ok to proceed
		// argv_921 the argv_3549 (may fail but it's OK)
		argv_898[_index].argv_2376.argv_922 ();
#if defined (__DEBUG_EVT_LOOP__) 
		string serror = argv_1319 (argv_1993);
		argv_2240->argv_2247 (argv_1152, "event_loop - forced the connection to argv_921 : argv_1318= ", serror.c_str());
#endif // #if defined (__DEBUG_EVT_LOOP__) 

		argv_1993 = argv_3347 (_index, _last_errno);
		if (argv_1993 == argv_1343) {
			argv_898[_index].argv_3976	= true;
			argv_3595.push (_index); // this box becomes available
			argv_2862--;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_3278	
// @@
// @@ INPUT			:	
// @@ _client_tab: argv_807 *: array of clients
// @@
// @@ _index: argv_3864 : index of the client whose argv_3549 is
// @@   readable.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: true if a write sequence is to be initiated
// @@   set to false otherwise.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the descriptor of a client
// @@ that is ready to read. This client is found using the '_index'
// @@ parameter, coming along with the '_client_tab' parameter.
// @@ 
// @@ Notice that if a full packet was read, the application dependant
// @@ function is called, and this function may or may not trigger a
// @@ write event for this client using the argv_3402 
// @@ argument '_trigger_write'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_3278 (argv_807 * _client_tab, argv_3864 _index, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3828[MAX_PATH];
	string client_type_tmp = argv_901 (_client_tab[_index].argv_900);
	argv_3548 (argv_3828, MAX_PATH, "event_loop - processing client ready to read : index = %d (argv_3842=%s)", _index, client_type_tmp.c_str());
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	// read the packet
	argv_1993 = _client_tab[_index].argv_3010.argv_3333 (_client_tab[_index].argv_2376, -1, true);
	if (argv_1993 == argv_3026) {
#if defined (__DEBUG_EVT_LOOP__) 
		string serror = argv_1319 (argv_1993);
		argv_3548 (argv_3828, MAX_PATH, "event_loop - read performed for client %u (errno=%s)", _index, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

		// if the packet was fully read, then call the "packet received" argv_2389
		if (_client_tab[_index].argv_3010.argv_3337 () == true) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2240->argv_2247 (argv_1152, "event_loop - packet fully read for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
			argv_1993 = argv_1327.argv_1697 (_client_tab, _index, _v_index_2_trigger_write);
		}
		else { // packet not fully read yet
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2240->argv_2247 (argv_1152, "event_loop - packet not fully read for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
	}
	else { // packet argv_3333 failed
#if defined (__DEBUG_EVT_LOOP__) 
		string serror = argv_1319 (argv_1993);
		argv_3548 (argv_3828, MAX_PATH, "event_loop - packet read failed for client %u (%s)", _index, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	if ((argv_1993 == argv_3026) || (argv_1993 == argv_2362)) {
		argv_1993 = argv_1343; // remap error argv_929
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_3279
// @@
// @@ INPUT			:	
// @@ _client_tab: argv_807 *: array of clients
// @@
// @@ _index: argv_3864 : index of the client whose argv_3549 is
// @@   readable.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: true if a write sequence is to be initiated
// @@   set to false otherwise.
// @@
// @@ IO			: none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function considers the packet that is the first
// @@ packet of the argv_3472 argv_3324 of the client located at the
// @@ index '_index' and sends it, if the packet is entirely sent
// @@ the sent packet is removed from argv_3472 argv_3324, and the 
// @@ application dependant function is called, and may or
// @@ may not trigger the write event again.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_3279 (argv_807 * _client_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993		= argv_1343;
	_trigger_write	= false;
	argv_3864 queue_size	= 0;

#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3828[MAX_PATH];
	argv_2240->argv_2247 (argv_1152, "event_loop - processing argv_3549 ready to write for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	// if the argv_3472 argv_3324 is empty, then it is an error
	argv_1993 = _client_tab[_index].argv_1776 (queue_size);

#if defined (__DEBUG_EVT_LOOP__) 
	argv_3548 (argv_3828, MAX_PATH, "event_loop - argv_3472 argv_3324 size for client %u is %u", _index, queue_size);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_1993 == argv_896) {
		if (queue_size == 0) {
			argv_1993 = argv_1340;
		}
		else { // argv_3472 argv_3324 contains 1 or more packets to argv_3472
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2240->argv_2247 (argv_1152, "argv_3324 size is OK");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			// try to argv_3472 the argv_1704 packet
			bool finished		= false;
			argv_1057 * argv_3009	= argv_2889;

			while (finished == false) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_2240->argv_2247 (argv_1152, "retrieving argv_1704 packet");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				argv_3009	= argv_2889; // detect malfunctions and crash asap
				argv_1993 = _client_tab[_index].argv_1704 (argv_3009);
				if (argv_1993 != argv_896) {
#if defined (__DEBUG_EVT_LOOP__) 
					argv_2240->argv_2247 (argv_1321, "+++ FAILED to retrieve argv_1704 packet");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					finished = true;
				}
				else { // the argv_1704 packet was succesfully retrieved from argv_3324
#if defined (__DEBUG_EVT_LOOP__) 
					argv_2240->argv_2247 (argv_1321, "argv_1704 packet retrieved succesfully");
					argv_2240->argv_2247 (argv_1152, "sending argv_1704 packet");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					argv_1993 = argv_3009->argv_3472 (_client_tab[_index].argv_2376);

#if defined (__DEBUG_EVT_LOOP__) 
					argv_2240->argv_2247 (argv_1152, "argv_1704 packet sent");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					if (argv_1993 == argv_3026) { // if packet was entirely sent
						argv_1993 = argv_1343;
						if (argv_3009->argv_3477 () == true) {
							// remove the argv_1704 packet from argv_3472 argv_3324
							argv_1993 = _client_tab[_index].pop_front ();
							if (argv_1993 == argv_896) {
								argv_1993 = argv_1327.argv_1698 (_client_tab, _index, _trigger_write);
							}
						}
					}

					if (argv_1993 != argv_1343) {
						finished = true; // error occured while sending argv_1704 packet
						if (argv_1993 == argv_2362) {
							_trigger_write	= true;	
							argv_1993			= argv_1343;
#if defined (__EVT_LOOP_TRACK_EWOULDBLOCK__) 
						argv_2867++;
						argv_2240->argv_2247 (argv_1152, "argv_2362 - total number = ", argv_2867);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
						}
						else { // real error occured
							char tmp2[MAX_PATH];
							string serror = argv_1319 (argv_1993);
							argv_3548 (tmp2, MAX_PATH, "+++ ERROR: argv_833::argv_3279 - argv_3472 failed for client whose box is %u (errno=%s)", _index, serror.c_str());
							tmp2[MAX_PATH - 1] = '\0';
							argv_2240->argv_2247 (argv_1321, tmp2);
						}
					}
					else { // argv_3472 was performed without any error
						argv_1993 = _client_tab[_index].argv_1776 (queue_size);
						if (argv_1993 != argv_896) {
							finished		= true;
						}
						else if (queue_size == 0) { // no more to argv_3472
							_trigger_write	= false;
							finished		= true;
						}
					}
				}
			}
		}
	}

	if (argv_1993 == argv_896) {
		argv_1993 = argv_1343; // remap error argv_929
	}
	return (argv_1993);
}

argv_3517 argv_833::argv_3839 (vector<argv_3864>& _v_trigger_2_write) {
	argv_3517 argv_1993 = argv_1343;
	argv_3864 argv_2866 = _v_trigger_2_write.size ();
	for (argv_3864 i=0 ; i<argv_2866 ; i++) {
		argv_1993 = argv_619 (_v_trigger_2_write[i], false, true);
		if (argv_1993 != argv_1343) {
			string serror = argv_1319 (argv_1993);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_833::argv_3839 - argv_619 failed for descriptor at index %d", _v_trigger_2_write[i], serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1321, argv_3828);
			break;
		}
	}
	return (argv_1993);
}

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_861
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ argv_3864&: _nb_ready: number of argv_3549 descriptors ready.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check all sockets that have either
// @@ a read, or a write, or both events, pending, and process these
// @@ events.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_861 (argv_3864& _nb_ready) {
	argv_3517 argv_1993				= argv_1343;
	argv_3517 iret2				= argv_1343;
	bool trigger_write		= false;	
	char argv_3828[MAX_PATH];
	vector<argv_3864>			v_trigger_2_write;
	
#if defined (__DEBUG_EVT_LOOP__) 
	argv_3548 (argv_3828, MAX_PATH, "event loop - checking read/write events (argv_899=%u)", argv_899);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	for (argv_3864 i=0 ; i<argv_899 ; i++) {
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2240->argv_2247 (argv_1152, "event_loop - considering client ", i);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

		if (argv_898[i].argv_3976 == true) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_3548 (argv_3828, MAX_PATH, "event_loop - client %u is virgin", i);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
		else { // argv_1106 client's box is busy (and thus not virgin)
#if defined (__DEBUG_EVT_LOOP__) 
			argv_3548 (argv_3828, MAX_PATH, "event_loop - client %u is busy (not virgin)", i);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
			// check if argv_1106 box is ready to read
			if (argv_898[i].argv_3329 == true) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_3548 (argv_3828, MAX_PATH, "event_loop - client %u is read aware", i);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				if (FD_ISSET (argv_898[i].argv_3549, &readfds_dirty)) {
					_nb_ready--;
#if defined (__DEBUG_EVT_LOOP__) 
					argv_3548 (argv_3828, MAX_PATH, "event_loop - client %u is ready to read", i);
					argv_3828[MAX_PATH - 1] = '\0';
					argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					v_trigger_2_write.clear ();
					iret2 = argv_3278 (argv_898, i, v_trigger_2_write);
					if (iret2 != argv_1343) {

						if (iret2 == argv_1342) {
							argv_1993 = iret2;
#if defined (__DEBUG_EVT_LOOP__) 
							argv_2240->argv_2247 (argv_3989, "*** WARNING : argv_833::argv_861 - << RECEIVED ORDER TO STOP >>");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
							break;
						}
						else { // real error occured
							string serror = argv_1319 (iret2);
							argv_3548 (argv_3828, MAX_PATH, "event_loop - client %u read failure (%s)", i, serror.c_str());
							argv_3828[MAX_PATH - 1] = '\0';
							argv_2240->argv_2247 (argv_1152, argv_3828);
						}
						argv_1993 = argv_3346 (i, iret2);
						if (argv_1993 != argv_1343) {
							argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_833::argv_861 - argv_3346 failed ! (read event)");
							break;
						}
					}
					else {// read was succesful, must we argv_616 the argv_3549 for write ?
#if defined (__DEBUG_EVT_LOOP__) 
						argv_3548 (argv_3828, MAX_PATH, "event_loop - client %u read success (number of write events to  trigger : %u)", i, v_trigger_2_write.size());
						argv_3828[MAX_PATH - 1] = '\0';
						argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
						argv_1993 = argv_3839 (v_trigger_2_write);
					}
				}
			}

			// check if argv_1106 box is ready to write
			if ((argv_1993 == argv_1343) && (argv_898[i].argv_3994 == true)) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_3548 (argv_3828, MAX_PATH, "event_loop - client %u is write aware", i);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

				if (FD_ISSET (argv_898[i].argv_3549, &writefds_dirty)) {
					_nb_ready--;
#if defined (__DEBUG_EVT_LOOP__) 
					argv_3548 (argv_3828, MAX_PATH, "event_loop - client %u is ready to write (from select)", i);
					argv_3828[MAX_PATH - 1] = '\0';
					argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

					iret2 = argv_3279 (argv_898, i, trigger_write);
					if (iret2 != argv_1343) {
#if defined (__DEBUG_EVT_LOOP__) 
						argv_3548 (argv_3828, MAX_PATH, "event_loop - client %u write failure", i);
						argv_3828[MAX_PATH - 1] = '\0';
						argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

						argv_1993 = argv_3346 (i, iret2);
						if (argv_1993 != argv_1343) {
							argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_833::argv_861 - argv_3346 failed ! (write event)");
							break;
						}
					}
					else {// write was succesful, must we argv_616 the argv_3549 again for write ?
#if defined (__DEBUG_EVT_LOOP__) 
						argv_3548 (argv_3828, MAX_PATH, "event_loop - client %u write success", i);
						argv_3828[MAX_PATH - 1] = '\0';
						argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

						if (trigger_write == true) {
#if defined (__DEBUG_EVT_LOOP__) 
							argv_3548 (argv_3828, MAX_PATH, "event_loop - triggering write event for client %u", i);
							argv_3828[MAX_PATH - 1] = '\0';
							argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
							argv_1993			= argv_619 (i, false, true);
							trigger_write	= false;
						}
						else { // remove the argv_3549 from the write set
#if defined (__DEBUG_EVT_LOOP__) 
							argv_3548 (argv_3828, MAX_PATH, "event_loop - removing write event for client %u", i);
							argv_3828[MAX_PATH - 1] = '\0';
							argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
							argv_1993 = argv_3347 (i, false, true, iret2);
						}
					}
				}
			}

			if (_nb_ready == 0) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_3548 (argv_3828, MAX_PATH, "argv_861 - _nb_ready=%u => all argv_1261", _nb_ready);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				break; // all ready descriptors processed
			}
		}

		// if an order to argv_3607 was received, then inform the caller
		if (argv_1993 == argv_1342) {
			argv_2240->argv_2247 (argv_660, "*** WARNING: argv_833::argv_861 - << RECEIVED ORDER TO STOP >>");
			break;
		}
	}

	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_619	
// @@
// @@ INPUT			:	
// @@ _index: argv_3864 : location of the new descriptor whose events 
// @@   are to be triggered
// @@
// @@ _read_mode: bool: true if the argv_3549 must be added to the read 
// @@    event.
// @@
// @@ _write_mode: bool: true if the argv_3549 must be added to the write 
// @@    event.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_616 the descriptor located at index
// @@ '_index' to the read or write event set.
// @@ if the parameter '_read_mode' is set to true, the argv_3549 is 
// @@ added to the read events set.
// @@ if the parameter '_write_mode' is set to true, the argv_3549 is 
// @@ added to the write events set.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_619 (argv_3864 _index, bool _read_mode, bool _write_mode) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3828[MAX_PATH];
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_898[_index].argv_3549 > argv_2339) {
		argv_2339 = argv_898[_index].argv_3549; // adjust the maximum descriptor (for select)
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2240->argv_2247 (argv_1152, "event loop - maximum fd becomes ", argv_2339);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	if (_read_mode == true) {
		if (argv_898[_index].argv_3329 == false) {
			FD_SET  (argv_898[_index].argv_3549, &readfds);
			argv_898[_index].argv_3329 = true;
#if defined (__DEBUG_EVT_LOOP__) 
			argv_3548 (argv_3828, MAX_PATH, "event loop - argv_616 descriptor %u (client %u) to read event", argv_898[_index].argv_3549, _index);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
	}

	if (_write_mode == true) {
		if (argv_898[_index].argv_3994 == false) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2240->argv_2247 (argv_1152, "event loop - triggering write event for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
			FD_SET  (argv_898[_index].argv_3549, &writefds);
			argv_898[_index].argv_3994 = true;
		}
	}

	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_3347	
// @@
// @@ INPUT			:	
// @@ _index: argv_3864 : location of the new descriptor whose events 
// @@   are to be removed
// @@
// @@ _read_mode: bool: true if the argv_3549 must be removed from the read 
// @@    event.
// @@
// @@ _write_mode: bool: true if the argv_3549 must be removed from the write 
// @@    event.
// @@
// @@ _last_errno: argv_3517 : unused parameter.
// @@ 
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to remove the descriptor located at index
// @@ '_index' from the read or write event set.
// @@ if the parameter '_read_mode' is set to true, the argv_3549 is 
// @@ removed from the read events set.
// @@ if the parameter '_write_mode' is set to true, the argv_3549 is 
// @@ removed from the write events set.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_3347 (argv_3864 _index, bool _read_mode, bool _write_mode, argv_3517 _last_errno) {
	argv_3517 argv_1993 = argv_1343;
	if (_read_mode == true) {
		if (argv_898[_index].argv_3329 == true) {
			FD_CLR (argv_898[_index].argv_3549, &readfds);	
			argv_898[_index].argv_3329 = false;
		}
	}

	if (_write_mode == true) {
		if (argv_898[_index].argv_3994 == true) {
			FD_CLR (argv_898[_index].argv_3549, &writefds);
			argv_898[_index].argv_3994 = false;
		}
	}
	return (argv_1993); 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_3347	
// @@
// @@ INPUT			:	
// @@ _index: argv_3864 : location of the new descriptor whose events 
// @@   are to be removed
// @@
// @@ _last_errno: argv_3517 : contains the last error encountered with
// @@   the client whose index is '_index'.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to remove entirely the argv_3549 descriptor 
// @@ which can be found at the index '_index' from the read
// @@ and write event without distinction.
// @@ The last error encountered with this argv_3549 is saved
// @@ into it's box so that the application dependant functions
// @@ can be aware of what has happened with this client.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_3347 (argv_3864 _index, argv_3517 _last_errno) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "event_loop - about to remove descriptor %u (client %d)", argv_898[_index].argv_3549, _index);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_898[_index].argv_3329 == true) {
		FD_CLR (argv_898[_index].argv_3549, &readfds);
		argv_898[_index].argv_3329 = false;
#if defined (__DEBUG_EVT_LOOP__) 
		argv_3548 (argv_3828, MAX_PATH, "event_loop - removed descriptor %u (client %d) from read event", argv_898[_index].argv_3549, _index);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	if (argv_898[_index].argv_3994 == true) {
		FD_CLR (argv_898[_index].argv_3549, &writefds);	
		argv_898[_index].argv_3994 = false;
#if defined (__DEBUG_EVT_LOOP__) 
		argv_3548 (argv_3828, MAX_PATH, "event_loop - removed descriptor %u from write event", _index);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	// reset the box that was used by this client for a future reuse.
	/*
#if defined (__DEBUG_EVT_LOOP__) 
	argv_2240->argv_2247 (argv_1152, "about to reset the client box whose index is ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	*/
	argv_898[_index].reset ();
/*
#if defined (__DEBUG_EVT_LOOP__) 
	argv_2240->argv_2247 (argv_1152, "reseted the client box whose index is ", _index);

	argv_3864 queue_size = 0;
	argv_3517 iret2 = argv_898[_index].argv_1776 (queue_size);
	argv_3548 (argv_3828, MAX_PATH, "argv_833::argv_3347 - after reset : argv_3472 argv_3324 size for client %u is %u", _index, queue_size);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
*/
	// now call the external function to tell about this client that has a problem
	bool b_unused;
	argv_898[_index].argv_2135 = _last_errno;
	argv_1327.argv_1629 (argv_898, _index, b_unused);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_3243	
// @@
// @@ INPUT			:
// @@ _event_data: argv_834& : the set that contains all 
// @@   the function pointers (application dependant functions).
// @@
// @@ _cli_tab: argv_807 *: the client array
// @@
// @@ _cli_tab_size: argv_3864: the size of the client array.
// @@
// @@ _v_listener: vector<argv_916>&: the vector that contains
// @@   all argv_1139 concerning the listening descriptors to consider.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to do the following things :
// @@ - update the 'argv_2339' variable
// @@ - argv_3237 the stack of available boxes (avoid argv_2253)
// @@ - argv_616 all listening descriptors to the read event set.
// @@
// @@ CONTRACT 		:
// @@ - _v_listener should not be empty.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_3243 (argv_834& _event_data, argv_807 * _cli_tab, argv_3864 _cli_tab_size, vector<argv_916>& _v_listener) {
	argv_3517 argv_1993	= argv_1343;

	argv_1327		= _event_data;
	argv_898		= _cli_tab;
	argv_899	= _cli_tab_size;
	argv_3948		= _v_listener;	
	argv_2871		= argv_3948.size ();
	argv_2339			= 0;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3828[MAX_PATH];
	argv_2240->argv_2247 (argv_1152, "maximum number of clients : ", _cli_tab_size);
	argv_2240->argv_2247 (argv_1152, "number of listeners : ", argv_2871);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_2871 == 0) {
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_833::argv_3243 - no listener at all ! (empty vector)");
		argv_1993 = argv_1336;
	}
	else {
		// argv_616 all listening sockets to the read set
		argv_3864 i=0;
		for (i=0 ; i<argv_2871 ; i++) {
			FD_SET (argv_3948[i].argv_3549, &readfds);

#if defined (__DEBUG_EVT_LOOP__) 
			argv_3548 (argv_3828, MAX_PATH, "argv_616 argv_3549 %u to the listening set", argv_3948[i].argv_3549);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			if (argv_3948[i].argv_3549 > argv_2339) {
				argv_2339 = argv_3948[i].argv_3549; // adjust the maximum descriptor (for select)
			}
		}

		// argv_3237 the stack of available boxes
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2240->argv_2247 (argv_1152, "preparing real argv_3825 stack of free boxes...");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		for (argv_3517 k=_cli_tab_size-1 ; k>=0 ; k--) {
			argv_3595.push (k);
		}
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2240->argv_2247 (argv_1152, "preparing real argv_3825 stack of free boxes...[OK]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_833	
// @@
// @@ FUNCTION		:	argv_3414
// @@
// @@ INPUT			:	
// @@ _log_ptr: argv_917 *: pointer on the log argv_1396 to use.
// @@ 
// @@ _v_listener: vector<argv_916>&: vector containing all argv_1139
// @@ concerning the listening argv_3549 descriptors.
// @@
// @@ _cli_tab: argv_807 *: array of client argv_1139, each box is
// @@  dedicated to a given client.
// @@ 
// @@ _cli_tab_size: size of the client array (number of boxes). 
// @@
// @@ _event_data: argv_834& : set of function pointers
// @@   containing all application dependant functions.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to argv_3237 the event loop, and to
// @@ enter this loop that is an infinite loop.
// @@ the following steps are performed :
// @@ - listeners are argv_3254 (listening sockets are added to read set)
// @@ - a call to select is performed.
// @@ - when waking up from select :
// @@   - new pending connections are checked.
// @@   - argv_3549 ready to read are checked
// @@   - argv_3549 ready to write are checked.
// @@
// @@ Notice that the event loop is an infinite loop, except when 
// @@ it is asked to argv_3607 service, in that case, the event
// @@ loop can be stopped.
// @@ 
// @@ Also notice that when a fatal error occurs, the event loop
// @@ stops and returns.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_833::argv_3414 (argv_917 * _log_ptr, vector<argv_916>& _v_listener, argv_807 * _cli_tab, argv_3864 _cli_tab_size, argv_834& _event_data) {
	argv_3517 argv_1993	= argv_1343;
	char argv_3828[MAX_PATH];

	if ((_log_ptr == argv_2889) || (_cli_tab==argv_2889) || (_cli_tab_size==0)) {
		argv_1993 = argv_1333;
	}
	else { // parameters are OK
		argv_2240 = _log_ptr;
		argv_3864 nb_ready	= 0;
#if defined (__DEBUG_EVT_LOOP__)
		argv_2240->argv_2247 (argv_1152, "event loop - preparing listeners...");
#endif // #if defined (__DEBUG_EVT_LOOP__)
		argv_1993 = argv_3243 (_event_data, _cli_tab, _cli_tab_size, _v_listener);

		if (argv_1993 == argv_1343) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2240->argv_2247 (argv_1152, "event loop - preparing listeners...[OK]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			bool first_pck_received = false;

			for ( argv_3864 i=0 ; argv_1993 == argv_1343 ; i++) {
				readfds_dirty	= readfds;	// because Linux modify the sets
				writefds_dirty	= writefds; // because Linux modify the sets

#if defined (__DEBUG_EVT_LOOP__) 
				argv_2240->argv_2247 (argv_1152, "sleeping in select...");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

				nb_ready = select (argv_2339+1, &readfds_dirty, &writefds_dirty, argv_2889, argv_2889);

#if defined (__DEBUG_EVT_LOOP__) 
				argv_3548 (argv_3828, MAX_PATH, "=== woken up from select (nb_ready=%d) ===", nb_ready);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

#if defined (__WIN32_OS__)
				if (nb_ready == SOCKET_ERROR) {
					argv_1993 = argv_1339;
				}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
				if (nb_ready < 0) {
					if (errno == EINTR) {
						continue;
					}
					else {
						argv_1993 = argv_1339;
					}
				}
#endif // #if defined (__LINUX_OS__)
				else { // select returned without any error
#if defined (__DEBUG_EVT_LOOP__) 
					argv_2240->argv_2247 (argv_1152, "number of descriptor ready : ", nb_ready);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					argv_1993 = argv_854 (nb_ready);
					if (argv_1993 != argv_1343) {
						string serror = argv_1319 (argv_1993);
						argv_3548 (argv_3828, MAX_PATH, "event loop - argv_854...[FAILED (%s) - EXITING]", serror.c_str());
						argv_3828[MAX_PATH - 1] = '\0';
						argv_2240->argv_2247 (argv_1321, argv_3828);
						break; // error occured while accepting new connections
					}

					if (nb_ready > 0) {
						if (first_pck_received == false) {
							argv_2240->argv_2247 (argv_1152, "first packet received at event : ", i);
							first_pck_received = true;
						}

						argv_1993 = argv_861 (nb_ready);
						if (argv_1993 != argv_1343) {
							// maybe we received the order to argv_3607
							if (argv_1993 == argv_1342) {
								argv_2240->argv_2247 (argv_660, "*** WARNING : argv_833::argv_3414 - << RECEIVED ORDER TO STOP >>");
							}
							else { // real error occured
								string serror = argv_1319 (argv_1993);
								char argv_3828[MAX_PATH];
								argv_3548 (argv_3828, MAX_PATH, "event loop - argv_861...[FAILED (%s) - EXITING]", serror.c_str());
								argv_3828[MAX_PATH - 1] = '\0';
								argv_2240->argv_2247 (argv_1321, argv_3828);
							}
							break; // error occured while checking connected sockets
						}
					}

					if (nb_ready > 0) { // slower the deadly infinite loop
						argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_833::argv_3414 - after processing, nb_ready greater than zero : ", nb_ready);
						argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_833::argv_3414 - argv_3960 should be zero !");
#if defined (__WIN32_OS__)
						Sleep (1000); // CPU friendly when entering an infinite loop
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
						usleep (1000000);
#endif // #if defined (__LINUX_OS__)
					}
				}
			}
		}
		else {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2240->argv_2247 (argv_1321, "event loop - preparing listeners...[FAILED]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
	}


	if (argv_1993 == argv_1342) {
		argv_2240->argv_2247 (argv_660, "*** WARNING : event_loop - << RECEIVED ORDER TO STOP >>");
	}
	else {
		string serror = argv_1319 (argv_1993);
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: event loop - exiting event loop - errno = ", serror.c_str());
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
