// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_257.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all argv_1139 structures and
// @@ objects that permits to have an event-driven
// @@ TCP/IP based loop to create an application.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_324.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variable
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_837 * argv_1715 = argv_2889;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C functions called by the event loop
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_2879	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client that has just connected.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_635 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ connects itself.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_2879 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1715->argv_2878 (_cli_tab, _index, _trigger_write);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3012	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client that has just finished
// @@   reading a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_635 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to read a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_3012 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1715->argv_3011 (_cli_tab, _index, _trigger_write);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3016	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client that has just finished
// @@   sending a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_635 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to write a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_3016 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1715->argv_3015 (_cli_tab, _index, _trigger_write);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_2361	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client that has a pending error.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_635 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has a pending error.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_2361 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1715->argv_2360 (_cli_tab, _index, _trigger_write);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C++ functions associated with argv_3549 events
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_2878		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client that has just connected.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ connects itself.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_2878 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_GATEWAY__)
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "argv_837::argv_2878 - new client at box %u (sockfd=%u)", _index, _cli_tab[_index].argv_3549);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_2886, argv_3828);
#endif // #if defined (__DEBUG_GATEWAY__)

	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3011		
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client that has just finished
// @@   reading a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to read a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3011 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_GATEWAY__)
	argv_2240->argv_2247 (argv_2886, "argv_837::argv_3011");
#endif // #if defined (__DEBUG_GATEWAY__)
	// log the packet into the log argv_1396
	argv_1402	= false;
	argv_3941		= argv_3065;
	argv_3830	= "";
	argv_1993 = _cli_tab[_index].argv_3010.argv_1774 (argv_1402, argv_3941, argv_3830);
	if (argv_1993 != argv_3026) { // failed to argv_1371 receive report for this client
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3011 - failed to argv_1371 receive report !");	
	}
	else { // receive report extracted succesfully
		string user_type_str = argv_3942 (argv_3941);

		if (argv_1402 == false) { // a argv_1139 packet was received
#if defined (__DEBUG_GATEWAY__)
			argv_3548 (argv_3828, MAX_PATH, "argv_837::argv_3011 - a argv_1139 packet was received (argv_3941=%s)", user_type_str.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_2886, argv_3828);
#endif // #if defined (__DEBUG_GATEWAY__)
		}
		else { // a argv_1396 was received
#if defined (__DEBUG_GATEWAY__)
			argv_3548 (argv_3828, MAX_PATH, "argv_837::argv_3011 - a argv_1396 packet was received (argv_3941=%s), argv_3830='%s'", user_type_str.c_str(), argv_3830.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_2886, argv_3828);
#endif // #if defined (__DEBUG_GATEWAY__)
		}

		argv_1993 = argv_3275 (_cli_tab, _index, _trigger_write);
		if (argv_1993 != argv_1343) {
			if (argv_1993 == argv_1342) {
				argv_2240->argv_2247 (argv_660, "*** WARNING : argv_837::argv_3011 - << RECEIVED ORDER TO STOP >>");
			}
			else { // real error occured
				string serror = argv_1319 (argv_1993);
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3011 failed ! - errno = ", serror.c_str());
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3015		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client that has just finished
// @@   sending a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to write a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3015 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_GATEWAY__)
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "argv_837::argv_3015 - packet fully sent for client whose box is %u (sockfd=%u)", _index, _cli_tab[_index].argv_3549);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_2886, argv_3828);
#endif // #if defined (__DEBUG_GATEWAY__)
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_2360	
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client that has a pending error.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has a pending error.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_2360 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_GATEWAY__)
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "argv_837::argv_2360 - error occured with client whose box is %u (sockfd=%u)", _index, _cli_tab[_index].argv_3549);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_2886, argv_3828);
#endif // #if defined (__DEBUG_GATEWAY__)
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_1229		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1200 to log argv_1396 the scan argv_3402
// @@ for a given argv_1396.
// @@ 
// @@ Notice that this function is disabled if the gateway is not
// @@ in debug mode.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_1229 () {
	argv_3517 argv_1993		= argv_1343;
#if defined (__DEBUG_GATEWAY__)
	char argv_3828[MAX_PATH];
	string total_msg = "";

	if (argv_3454 == false) { argv_3548 (argv_3828, MAX_PATH, "|scan FAILED"); }
	else { argv_3548 (argv_3828, MAX_PATH, "|scan SUCCESS"); }
	argv_3828[MAX_PATH - 1] = '\0';
	total_msg += argv_3828;	

	if (infected == false) { argv_3548 (argv_3828, MAX_PATH, "|no virus found"); }
	else { argv_3548 (argv_3828, MAX_PATH, "|virus FOUND"); }
	argv_3828[MAX_PATH - 1] = '\0';
	total_msg += argv_3828;	

	if (infected == true) {
		if (argv_1272 == false) { argv_3548 (argv_3828, MAX_PATH, "|dysinfection NOT POSSIBLE"); }
		else { argv_3548 (argv_3828, MAX_PATH, "|dysinfection POSSIBLE"); }
		argv_3828[MAX_PATH - 1] = '\0';
		total_msg += argv_3828;	
	}

	if (infected == true) {
		if (argv_1270 == false) { argv_3548 (argv_3828, MAX_PATH, "|dysinfection NOT DONE"); }
		else { argv_3548 (argv_3828, MAX_PATH, "|dysinfection DONE"); }
		argv_3828[MAX_PATH - 1] = '\0';
		total_msg += argv_3828;	
	}

	if (infected == true) {
		if (argv_1273 == false) { argv_3548 (argv_3828, MAX_PATH, "|dysinfection FAILED"); }
		else { argv_3548 (argv_3828, MAX_PATH, "|dysinfection SUCCESS"); }
		argv_3828[MAX_PATH - 1] = '\0';
		total_msg += argv_3828;	
	}

	if (infected == true) {
		argv_3548 (argv_3828, MAX_PATH, "|virus argv_2817 : '%s'", argv_3980);
		argv_3828[MAX_PATH - 1] = '\0';
		total_msg += argv_3828;	
	}
	argv_2240->argv_2247 (argv_2886, total_msg.c_str());
#endif // #if defined (__DEBUG_GATEWAY__)
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3442		
// @@
// @@ INPUT			:
// @@ _filename: argv_820 : argv_2817 of the argv_1396 to scan.	
// @@
// @@ _dysinfect : bool: true if the argv_1396, in case of infection,
// @@   must be dysinfected, false otherwise.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to scan the argv_1396 whose argv_2817 is 
// @@ contained in the '_filename' parameter, if the '_dysinfect'
// @@ parameter is set to true, and if the argv_1396 is infected, then
// @@ a dysinfection of the argv_1396 is attempted.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3442 (argv_820 _filename, bool _dysinfect) {
	argv_3517 argv_1993		= argv_1343;
	argv_3454	= false;

#if defined (__BYPASS_KERNEL__)
	argv_1993 = argv_2083;
	infected				= false;
	argv_1272		= false;
	argv_1270			= false;
	argv_1273		= false;
#else 

	argv_1993 = argv_2064->argv_3442 (_filename, _dysinfect, infected, argv_1272, argv_3980, argv_1270, argv_1273);

#endif // #if defined (__BYPASS_KERNEL__)

	if (argv_1993 == argv_2083) {
#if defined (__DEBUG_GATEWAY__)
		argv_2240->argv_2247 (argv_2886, "gateway - argv_3442...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
		argv_1993 = argv_1343; // remap error argv_929
		argv_3454 = true;
	}
	else {
		string serror = argv_1319 (argv_1993);
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: gateway : failed to scan argv_1396 '%s' (%s)", _filename, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1321, argv_3828);
	}
	argv_1229 ();
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3493		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _answer_type: argv_3864& : argv_3842 of the answer packet to argv_3472.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the argv_3842 of the answer
// @@ packet to argv_3472 using the argv_3842 of the received packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3493 (argv_3864& _answer_type) {
	argv_3517 argv_1993		= argv_1343;
	_answer_type	= argv_3065;
	// set the answer's argv_3842
	if (argv_3941 == argv_3053) {
		_answer_type = argv_3054;
	}
	else if (argv_3941 == argv_3049) {
		_answer_type = argv_3050;	
	}
	else if (argv_3941 == argv_3055) {
		_answer_type = argv_3056;	
	}
	else if (argv_3941 == argv_3051) {
		_answer_type = argv_3052;	
	}
	else if (argv_3941 == PCK_TYPE_UPDATE) {
		_answer_type = argv_3067;	
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3475		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
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
// @@ This function permits to argv_3472 the dysinfected argv_1396
// @@ back to the remote client.
// @@ NOTICE : we don't need to trigger the write event as it will
// @@          have already been triggered by the 'argv_1468' 
// @@          function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3475 (argv_807 * _cli_tab, argv_3864 _index, argv_820 _dysinfected_filename) {
	argv_3517 argv_1993 = argv_1343;

#if defined (__DEBUG_GATEWAY__)
	argv_2240->argv_2247 (argv_2886, "sending the dysinfected argv_1396 to the client");
#endif // #if defined (__DEBUG_GATEWAY__)

	// former packet will be deallocated by the event loop 
	argv_3009 = new (std::nothrow) argv_1057; // create a new packet for argv_3472

	if (argv_3009 == argv_2889) {
		argv_1993 = argv_1335;
	}
	else { // new argv_3472 packet was succesfully allocated
		// argv_3237 the packet to argv_3472 the argv_1396 to the client
		bool must_delete_file = false;
		argv_1993 = argv_3009->argv_3253 (_dysinfected_filename, _cli_tab[_index].argv_2376, argv_3052, must_delete_file);

		if (argv_1993 != argv_3026) {
			delete argv_3009; 		
		}
		else { // the argv_1396 to argv_3472 was argv_3254 succesfully
			argv_1993 = _cli_tab[_index].push_back (argv_3009); // argv_616 packet to the argv_3472 argv_3324
			if (argv_1993 != argv_896) { // the addition to the argv_3472 argv_3324 failed
				string serror = argv_1319 (argv_1993);
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3475 - push_back failed ! - errno = ", serror.c_str());
			}
		}
	}

	if ((argv_1993 == argv_3026) || (argv_1993 == argv_896)) {
		argv_1993 = argv_1343;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_1470		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to inform an update client about the
// @@ kernel's update argv_3402.
// @@ it performs the following steps :
// @@ - allocate a new binary packet.
// @@ - set the packet argv_3842.
// @@ - insert the argv_3402 of the update operation into the packet :
// @@   - 0=failure, 1=success (coded using a argv_3862).
// @@ - argv_2955 the binary packet.
// @@ - push back this packet onto the argv_3472 argv_3324 of the concerned
// @@   client.
// @@ - set the '_trigger_write' to true so that a write operation
// @@   can occur for the concerned client.
// @@
// @@ NOTICE : it is up to the event loop to free the allocated 
// @@          packet after sending it.
// @@ 
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_1470 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write, argv_3517 _iret) {
	argv_3517 argv_1993 = argv_1343;

	// former packet will be deallocated by the event loop 
	argv_3009 = new (std::nothrow) argv_1057; // create a new packet for argv_3472
	if (argv_3009 == argv_2889) {
		argv_1993 = argv_1335;
	}
	else {
		argv_3864 answer_type	= argv_3065;
		// set the answer's argv_3842
		argv_1993 = argv_3493 (answer_type);
		if (argv_1993 != argv_1343) {
			argv_1993 = argv_1341;
		}
		else { // answer argv_3842 setting was succesful
			argv_1993 = argv_3009->argv_3501 (answer_type);
			if (argv_1993 != argv_3026) {
				string serror = argv_1319 (argv_1993);	
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway : argv_1470 : argv_1057::argv_3501 failed ! - errno = ", serror.c_str());
			}
			else { // packet argv_3842 set succesfully
				argv_3862 argv_3960 = 0; // previous operation failed
				if (_iret == argv_1343) {
					argv_3960 = 1;
				}
				argv_1993 = argv_3009->insert (argv_3960);

				if (argv_1993 != argv_3026) {
					string serror = argv_1319 (argv_1993);	
					argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway : argv_1470 : argv_1057::insert failed ! - errno = ", serror.c_str());
				}
				else { // argv_1139 inserted succesfully
					argv_1993 = argv_3009->argv_2955 ();
					if (argv_1993 !=  argv_3026) {
						string serror = argv_1319 (argv_1993);	
						argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway : argv_1470 : argv_1057::argv_2955 failed ! - errno = ", serror.c_str());
					}
					else { // packet packed succesfully
						argv_1993 = _cli_tab[_index].push_back (argv_3009);
						if (argv_1993 == argv_896) {
							// packet added to this client's argv_3472 argv_3324 succesfully
							_trigger_write	= true; // tell the event loop to argv_3601 sending
						}
						else { // could not deposit packet onto the argv_3472 argv_3324
							string serror = argv_1319 (argv_1993);	
							argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway : argv_1470 : push_back failed ! - errno = ", serror.c_str());
						}
					}
				}
			}
		}
		// notice that it is up to the event loop to free the allocated packet !
	}

	if ((argv_1993 == argv_3026) || (argv_1993 == argv_896)) {
		argv_1993 = argv_1343;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_1468		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function prepares a packet that was previously allocated
// @@ by another function. the packet's content reflects the scan
// @@ argv_3402 and is composed of the following fields :
// @@ - scan success			: argv_3862 (0= success, 1..n=failed)
// @@ - virus_found_flag		: argv_3862 (0= not infected, 1=infected)
// @@ - argv_1275	: argv_3862 (0= not possible, 1=possible)
// @@ - argv_1274		: argv_3862 (0=not argv_1261, 1=argv_1261)
// @@ - dysinfection_result	: argv_3862 (0=failed, 1=success)
// @@ {- argv_3980			    : string (present only if a virus 
// @@    was found, empty if infected_flag=0) }
// @@
// @@ Notice that the answer packet may be followed by a argv_1396 in 
// @@ case the scan was remote and the argv_1396 was infected and the 
// @@ dysinfection was possible (argv_1261 by another function).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_1468 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993			= argv_1343;
	argv_3864 answer_type	= argv_3065;
	// set the answer's argv_3842
	argv_1993 = argv_3493 (answer_type);
	if (argv_1993 != argv_1343) {
		string serror = argv_1319 (argv_1993);
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_1468 - argv_3493 failed ! - errno = ", serror.c_str());
		argv_1993 = argv_1341;
	}
	else { // answer argv_3842 setting was succesful
		argv_1993 = argv_3009->argv_3501 (answer_type);
		if (argv_1993 != argv_3026) { 
			string serror = argv_1319 (argv_1993);
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_1468 - argv_3501 failed ! - errno = ", serror.c_str());
		}
		else { // argv_3842 of the new packet set succesfully
			// we assume that no virus was found and thus that dysinfection was not argv_1261.
			argv_3862 scan_success_UI08			= (argv_3862) argv_3454;
			argv_3862 virus_found_flag_UI08		= (argv_3862) infected;
			argv_3862 dysinfection_possible_UI08	= (argv_3862) argv_1272;
			argv_3862 dysinfection_done_UI08		= (argv_3862) argv_1270;
			argv_3862 dysinfection_result_UI08	= (argv_3862) argv_1273;

			// insert the flag that tells whether the scan was succesful or not
			argv_1993 = argv_3009->insert (scan_success_UI08);

			if (argv_1993 == argv_3026) { // field 1 inserted succesfully
				argv_1993 = argv_3009->insert (virus_found_flag_UI08);
			}

			if (argv_1993 == argv_3026) { // field 1,2 inserted succesfully
				argv_1993 = argv_3009->insert (dysinfection_possible_UI08);
			}
			if (argv_1993 == argv_3026) { // field 1,2,3 inserted succesfully
				argv_1993 = argv_3009->insert (dysinfection_done_UI08);
			}
			if (argv_1993 == argv_3026) { // field 1,2,3,4 inserted succesfully
				argv_1993 = argv_3009->insert (dysinfection_result_UI08);
			}
			// insert the virus argv_2817 if the argv_1396 was infected
			if ((argv_1993 == argv_3026) && (infected == true)) {
				argv_1993 = argv_3009->insert (argv_3980);
			}

			if (argv_1993 == argv_3026) { // field 1,2,3,4,5 inserted succesfully
				argv_1993 = argv_3009->argv_2955 ();
			}

			if (argv_1993 == argv_3026) { // packet packed succesfully
				argv_1993 = _cli_tab[_index].push_back (argv_3009); // argv_616 packet to the argv_3472 argv_3324
				if (argv_1993 == argv_896) {
					_trigger_write	= true; // tell the event loop to argv_3601 sending
				}
				else {
					string serror = argv_1319 (argv_1993);
					argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_1468 - push_back failed ! - errno = ", serror.c_str());
				}
			}
		}
	}

	if ((argv_1993 == argv_3026) || (argv_1993 == argv_896)) { 
		argv_1993 = argv_1343; // remap error argv_929
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3271		
// @@
// @@ INPUT			:	
// @@ 
// @@ _source: argv_820: source of the error
// @@
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the failure that may occur
// @@ when preparing a packet to argv_3472 to the client.
// @@ The following steps are argv_1261 :
// @@ - the allocated packet is deallocated.
// @@ - the connection with this client is forcibly closed.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3271 (argv_820 _source, argv_807 * _cli_tab, argv_3864 _index, argv_3517 _iret) {
	argv_3517 argv_1993 = argv_1343;
	char argv_3828[MAX_PATH];
	string serror = argv_1319 (_iret);
	argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: %s...[FAILED] - errno = %s", _source, serror.c_str());
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1321, argv_3828);

	// delete the packet
	if (argv_3009 != argv_2889) {
		delete argv_3009;
		argv_3009 = argv_2889;
	}

	// argv_921 the connection with this client
	argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_1468 failed => terminating client connection");
	_cli_tab[_index].argv_2376.argv_922 ();

	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3268		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function extracts a argv_1446 from a received packet.
// @@ this argv_1446 is the argv_2817 of a argv_1396 that must be present
// @@ on the local argv_1396 system. 
// @@ Then using this argv_1446, a scan is performed, and the
// @@ scan argv_3402 is sent to the local client that has requested
// @@ the operation.
// @@ The following steps are performed :
// @@ - a string is extracted from the received packet
// @@ - depending on the received packet argv_3842, we can determine
// @@   whether a dysinfection should be performed or not in case
// @@   of infection.
// @@ - a scan of this local argv_1396 is performed.
// @@ - a new packet containing the scan argv_3402 is allocated
// @@ - the new packet is filled to reflect the scan argv_3402
// @@ - this new packet is pushed onto the argv_3472 argv_3324 of the
// @@   concerned local client using the '_index' parameter.
// @@ - a write event is triggered for the concerned client.
// @@
// @@ Notice : it is up to the event loop to free the allocated 
// @@   packet after sending it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// the local packet contains the following fields :
// - argv_1446 (string)
argv_3517 argv_837::argv_3268 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_GATEWAY__)
	argv_2240->argv_2247 (argv_2886, "processing a local argv_1396");
#endif // #if defined (__DEBUG_GATEWAY__)
	// argv_1371 the 'argv_1446' field from the received packet
	argv_1993 = argv_891[_index].argv_3010.argv_1371 (argv_1379);
	if (argv_1993 != argv_3026) {
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3268 - argv_1057::argv_1371 failed !");
	}
	else {
#if defined (__DEBUG_GATEWAY__)
		argv_2240->argv_2247 (argv_2886, "local argv_1396 to scan : ", argv_1379.c_str());
#endif // #if defined (__DEBUG_GATEWAY__)

		// scan the local argv_1396
		bool must_dysinfect = false;
		if (argv_3941 == argv_3049) {
			must_dysinfect = true;	
		}

		argv_1993 = argv_3442 (argv_1379.c_str(), must_dysinfect);
		if (argv_1993 != argv_1343) {
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway - argv_3268 : argv_3442 failed !");
		}
		else {
#if defined (__DEBUG_GATEWAY__)
			argv_2240->argv_2247 (argv_2886, "local argv_1396 scanned...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
		}

		argv_3009 = new (std::nothrow) argv_1057; // create a new packet for argv_3472
		if (argv_3009 == argv_2889) {
			argv_1993 = argv_1335;
		}
		else { // new packet allocated succesfully
			argv_1993 = argv_1468 (_cli_tab, _index, _trigger_write);
			if (argv_1993 != argv_1343) {
				argv_3271 ("argv_837::argv_3268 - argv_1468", _cli_tab, _index, argv_1993);
			}
		}
		// notice that it is up to the event loop to free the allocated packet !
	}

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_1343; // remap error argv_929
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3276		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to scan a argv_1396 that was sent by 
// @@ a remote client. The argv_1396 to scan is saved to a temporary
// @@ argv_1396 by a previous function, and it's this temporary argv_1396
// @@ that is scanned.
// @@ Then using this argv_1446, a scan is performed, and the
// @@ scan argv_3402 is sent to the local client that has requested
// @@ the operation.
// @@ The following steps are performed :
// @@ - depending on the received packet argv_3842, we can determine
// @@   whether an dysinfection should be performed or not in case
// @@   of infection.
// @@ - a scan of this temporary argv_1396 is performed.
// @@ - a new packet containing the scan argv_3402 is allocated
// @@ - the new packet is filled to reflect the scan argv_3402
// @@ - this new packet is pushed onto the argv_3472 argv_3324 of the
// @@   concerned local client using the '_index' parameter.
// @@ - a write event is triggered for the concerned client.
// @@
// @@ Notice : 
// @@  - it is up to the event loop to free the allocated 
// @@    packet after sending it.
// @@ 
// @@ - the remote packet has no field to be extracted as all was
// @@   already argv_1261 by the argv_3333 function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3276 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_GATEWAY__)
	argv_2240->argv_2247 (argv_2886, "processing a remote argv_1396");
	argv_2240->argv_2247 (argv_2886, "remote argv_1396 to scan saved to temporary argv_1396 : ", argv_3830.c_str());
#endif // #if defined (__DEBUG_GATEWAY__)

	// scan the temporary argv_1396
	bool must_dysinfect = false;
	if (argv_3941 == argv_3051) {
		must_dysinfect = true;	
	}
	argv_1993 = argv_3442 (argv_3830.c_str(), must_dysinfect);
	if (argv_1993 != argv_1343) {
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway - argv_3276 : argv_3442 failed !");
	}

	argv_3009 = new (std::nothrow) argv_1057; // create a new packet for argv_3472
	if (argv_3009 == argv_2889) {
		argv_1993 = argv_1335;
	}
	else { // new packet allocated succesfully
#if defined (__DEBUG_GATEWAY__)
		argv_2240->argv_2247 (argv_1152, "scan argv_3402 packet allocated succesfully");
#endif // #if defined (__DEBUG_GATEWAY__)
		argv_1993 = argv_1468 (_cli_tab, _index, _trigger_write);

		if (argv_1993 != argv_1343) {
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3276 - argv_1468 failed !!");
			argv_3271 ("argv_837::argv_3276 - argv_1468", _cli_tab, _index, argv_1993);
		}
		else {
#if defined (__DEBUG_GATEWAY__)
			argv_2240->argv_2247 (argv_1152, "argv_837::argv_3276 - argv_1468...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
			
			if ((infected==true) && (argv_1272==true) && (argv_1270==true) && (argv_1273==true)) {
#if defined (__DEBUG_GATEWAY__)
				argv_2240->argv_2247 (argv_1152, "argv_837::argv_3276 - argv_1396 infected, dysinfection argv_1261 => need to argv_3472 the clean argv_1396 to the client");
#endif // #if defined (__DEBUG_GATEWAY__)
				argv_1993 = argv_3475 (_cli_tab, _index, argv_3830.c_str());
				if (argv_1993 != argv_1343) {
					argv_3271 ("argv_837::argv_3276 - argv_3475", _cli_tab, _index, argv_1993);
				}
			}
		}
		// notice that it is up to the event loop to free the allocated packet !
	}

	// delete the temporary received argv_1396 if the operation was a failure
	if (argv_1993 != argv_1343) {
		argv_2240->argv_2247 (argv_3989, "*** WARNING: argv_837::argv_3276 - operation could not succeed ! - deleting temporary argv_1396 : ", argv_3830.c_str());
		if (argv_1184 (argv_3830.c_str()) == false) {
			argv_2240->argv_2247 (argv_3989, "*** WARNING : argv_837::argv_3276 - failed to delete argv_1396 : ", argv_3830.c_str());
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_860	
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to ensure that no protocol violation 
// @@ occured when receiving a given packet.
// @@ we can have 3 different client types :
// @@ - local clients
// @@ - remote clients
// @@ - admin clients
// @@ For each category of clients, there is a different protocol
// @@ so for security reasons, we need to ensure that the argv_2389 
// @@ received from a given argv_3549 is allowed for this client argv_3842. 
// @@ this function permits to ensure that the user argv_3842 of the 
// @@ received packet is coherent with the client argv_3842.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_860 (argv_807 * _cli_tab, argv_3864 _index) {
	argv_3517 argv_1993 = argv_1343;
	if (_cli_tab[_index].argv_900 == argv_910) {
		if ((argv_3941 != argv_3053) && (argv_3941 != argv_3049)) {
			argv_1993 = 	argv_1337;
		}
	}
	else if (_cli_tab[_index].argv_900 == argv_911) {
		if ((argv_3941 != argv_3055) && (argv_3941 != argv_3051)) {
			argv_1993 = 	argv_1337;
		}
	}
	else if (_cli_tab[_index].argv_900 == CLIENT_TYPE_ADMIN) {
		if ((argv_3941 != PCK_TYPE_UPDATE) && (argv_3941 != argv_3063)) {
			argv_1993 = 	argv_1337;
		}
	}
	else if (_cli_tab[_index].argv_900 == argv_912) { 
		argv_1993 = argv_1332;
	}
	else { // unknown client argv_3842 !
		argv_1993 = argv_1345;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3273		
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the packet whose argv_3842 is
// @@ argv_3063. The aim of this packet argv_3842 is to
// @@ argv_3607 the gateway. The mechanism used to argv_3607 it is to 
// @@ return and propagate a dedicated error argv_929 :
// @@ argv_1342. This error argv_929, when encountered
// @@ by any other function, will be propagated so that the 
// @@ gateway can eventually argv_3607 and return.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3273 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_GATEWAY__)
	argv_2240->argv_2247 (argv_2886, "argv_837::argv_3273");
#endif // #if defined (__DEBUG_GATEWAY__)
	argv_1993 = argv_1342;
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3274		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the packet whose argv_3842 is
// @@ PCK_TYPE_UPDATE. The aim of this packet argv_3842 is to permit
// @@ to update the kernel without stopping the service.
// @@ The PCK_TYPE_UPDATE packet contains the argv_635 of a new
// @@ kernel manager that was argv_3254 by the admin part.
// @@ it does the following steps :
// @@ - argv_1371 the argv_635 of the kernel manager argv_3254 by the 
// @@   admin part from the received packet.
// @@ - argv_3512 argv_1106 kernel.
// @@ - argv_1197 argv_1106 kernel.
// @@ - save up the argv_635 of the new kernel for use.
// @@ - format and argv_3472 a new packet to the concerned update client
// @@   by :
// @@   - allocating a new packet.
// @@   - fill it with the update argv_3402.
// @@   - deposit it to the argv_3472 argv_3324 of the concerned client.
// @@   - trigger a write event for this client.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3274 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_GATEWAY__)
	argv_2240->argv_2247 (argv_2886, "argv_837::argv_3274");
#endif // #if defined (__DEBUG_GATEWAY__)

	// argv_1371 the argv_635 of the new kernel (ready for use)
	argv_3864 new_kernel_addr = 0;
	argv_1993 = argv_891[_index].argv_3010.argv_1371 (new_kernel_addr);
	if (argv_1993 != argv_3026) {
		string serror = argv_1319 (argv_1993);
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3274 - argv_1057::argv_1371 failed ! - errno = ", serror.c_str());
	}
	else { // new kernel's argv_635 extraction success
#if defined (__DEBUG_GATEWAY__)
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "gateway : argv_3274 : received adress of new kernel : 0x%X", new_kernel_addr);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_GATEWAY__)

		// argv_3512 argv_1106 kernel
		argv_1993 = argv_2064->argv_3513 ();
		if (argv_1993 != argv_2083) {
			string serror = argv_1319 (argv_1993);
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3274 - argv_889::argv_3513 failed ! - errno = ", serror.c_str());
		}

		// argv_1197 argv_1106 kernel
		if (argv_1993 == argv_2083) {
#if defined (__DEBUG_GATEWAY__)
			argv_2240->argv_2247 (argv_1152, "gateway - argv_3274 : argv_3513...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
			argv_1993 = argv_2064->argv_1199 ();
			if (argv_1993 != argv_2083) {
				string serror = argv_1319 (argv_1993);
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3274 - argv_889::argv_1199 failed ! - errno = ", serror.c_str());
			}
		}

		if (argv_1993 == argv_2083) {
#if defined (__DEBUG_GATEWAY__)
			argv_2240->argv_2247 (argv_1152, "gateway - argv_3274 : argv_1199...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
			delete argv_2064; // deallocate argv_1106 kernel
			// save up the argv_635 of the new kernel
			argv_2064 = (argv_889 *) new_kernel_addr;
#if defined (__DEBUG_GATEWAY__)
			argv_2240->argv_2247 (argv_1152, "gateway - argv_3274: new kernel's argv_635 saved...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
		}
	}

	if (argv_1993 == argv_2083) { // remap error argv_929
		argv_1993 = argv_1343;
	}

	// argv_3472 an answer anyway
	argv_3517 iret2 = argv_1470 (_cli_tab, _index, _trigger_write, argv_1993);
	if (iret2 != argv_1343) {
		string serror = argv_1319 (iret2);
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway : argv_3274 : argv_1470 failed ! - errno = ", serror.c_str());
	}
	else { // answer packet sent succesfully
#if defined (__DEBUG_GATEWAY__)
		argv_2240->argv_2247 (argv_1152, "gateway - argv_3274 : answer sent to admin client...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
	}

	if (argv_1993 == argv_2083) {
		argv_1993 = iret2; // don't override a previous error (if any)		 
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3263		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is a dispatcher that permits to call the proper
// @@ function to argv_1890 the received packet depending on it's argv_3842.
// @@ Notice that the packet's argv_3842  must pertain to the set of
// @@ possible types for an admin packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3263 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1343;
#if defined (__DEBUG_GATEWAY__)
	argv_2240->argv_2247 (argv_2886, "argv_837::argv_3263");
#endif // #if defined (__DEBUG_GATEWAY__)

	switch (argv_3941) {
		case argv_3063:
			argv_1993 = argv_3273 (_cli_tab, _index, _trigger_write);
			break;

		case PCK_TYPE_UPDATE:
			argv_1993 = argv_3274 (_cli_tab, _index, _trigger_write);
			break;
	}

	if (argv_1993 != argv_1343) {
		if (argv_1993 == argv_1342) {
			argv_2240->argv_2247 (argv_660, "*** WARNING: argv_837::argv_3263 - << RECEIVED ORDER TO STOP >>");
		}
		else { // real error occured
			string serror = argv_1319 (argv_1993);
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3263 failed ! - errno = ", serror.c_str());
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3275		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_807 *: array of client argv_1139.
// @@
// @@ _index: argv_3864 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1343 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is a dispatcher that permits to call the proper
// @@ function to argv_1890 the received packet depending on it's argv_3842.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3275 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_1343;

	// ensure that the packet argv_3842 is correct
	if ((argv_3941 != argv_3053) && (argv_3941 != argv_3049) &&
		(argv_3941 != argv_3055) && (argv_3941 != argv_3051) &&
		(argv_3941 != PCK_TYPE_UPDATE) && (argv_3941 != argv_3063)) {
		argv_1993 = argv_1334;
	}
	else { // user packet argv_3842 is coherent with the application
		// ensure that the packet argv_3842 is coherent with the client argv_3842
		argv_1993 = argv_860 (_cli_tab, _index);
		if (argv_1993 == argv_1343) {
			// ensure that the packet user argv_3842 matches the packet system argv_3842
			if (argv_1402 == false) {
				if ((argv_3941 != argv_3053) && 
					(argv_3941 != argv_3049) && 
					(argv_3941 != PCK_TYPE_UPDATE) && 
					(argv_3941 != argv_3063)) {
					argv_1993 = argv_1331;
				}
				else if ((argv_3941 == argv_3053) || (argv_3941 == argv_3049)) { 
					argv_1993 = argv_3268 (_cli_tab, _index, _trigger_write);
				}
				else if ((argv_3941 == PCK_TYPE_UPDATE) || (argv_3941 == argv_3063)) {
					argv_1993 = argv_3263 (_cli_tab, _index, _trigger_write);
				}
			}
			else { // a argv_1396 was received
				if ((argv_3941 != argv_3055) && (argv_3941 != argv_3051)) {
					argv_1993 = argv_1331;
				}
				else { // user packet argv_3842 is coherent with the system packet argv_3842
					argv_1993 = argv_3276 (_cli_tab, _index, _trigger_write);
				}
			}
		}
	}

	// reset the receive packet for this client so that it can be reused
	if (argv_1993 == argv_1343) {
		argv_1993 = _cli_tab[_index].argv_3010.reset ();
	}

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_1343; // remap error argv_929
	}

	if (argv_1993 != argv_1343) {
		if (argv_1993 == argv_1342) {
			argv_2240->argv_2247 (argv_660, "*** WARNING : argv_837::argv_3275 - << RECEIVED ORDER TO STOP >>");
		}
		else {
			string serror = argv_1319 (argv_1993);
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3275 failed ! - errno = ", serror.c_str());
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	reset		
// @@
// @@ INPUT			:	none	
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
// @@ This function permits to bring back the argv_837 argv_2908
// @@ to it's original argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_837::reset () {
	argv_2240								= argv_2889;
	argv_1348.argv_1695	= argv_2879;
	//argv_1348.argv_1697	= argv_3012;
	argv_1348.argv_1698		= argv_3016;
	argv_1348.argv_1629		= argv_2361;

	argv_3948.clear ();
	argv_1347.reset ();

	if (argv_891 != argv_2889) {
		delete [] argv_891;
		argv_891 = argv_2889;
	}

	if (argv_2064 != argv_2889) {
		delete argv_2064;
		argv_2064 = argv_2889;
	}

	argv_1402		= false;
	argv_3941			= argv_3065;
	argv_3830		= "";
	argv_1379	= "";
	argv_3409			= "";
	argv_2041		= "";
	argv_3009				= argv_2889;
	
	argv_3454		= false;
	infected			= false;
	argv_3980			= argv_2889;
	argv_1272	= false;
	argv_1270		= false;
	argv_1273	= false;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_837		
// @@
// @@ INPUT			:	none		
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
// @@ Normal constructor of the argv_837 argv_2908.
// @@ it permits to set up all fields to their initial argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_837::argv_837 () {
	argv_891				= argv_2889;
	argv_2064	= argv_2889;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_837	
// @@
// @@ FUNCTION		:	argv_3414		
// @@
// @@ INPUT			:
// @@ _log_ptr: argv_917 *: argv_635 of the log argv_1396 to use.
// @@ 
// @@ _max_nb_client: argv_3864 : size of the client array to allocate.	
// @@
// @@ _v_listener: vector<argv_916>&: vector containing all the argv_1139
// @@   concerning the listening argv_3549 descriptors.
// @@
// @@ _root_folder: argv_820 : argv_742 directory of the kernel.
// @@
// @@ _kernel_dll_name: argv_820: argv_2817 of the kernel's DLL argv_1396.
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
// @@ This function permits to argv_3414 the gateway that is activated
// @@ by events sent by the event loop located in the kernel.
// @@ it performs the following steps :
// @@ - allocate the client array using the '_max_nb_client' parameter.
// @@ - allocate a new kernel manager.
// @@ - construct the new kernel manager.
// @@ - argv_760 the new kernel manager.
// @@ - argv_3414 the event loop.
// @@ 
// @@ Notice that the event loop is given a bunch of function 
// @@ pointers so that the gateway can be notified of events 
// @@ by the event loop.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_837::argv_3414 (argv_917 * _log_ptr, argv_3864 _max_nb_client, vector<argv_916>& _v_listener, argv_820 _root_folder, argv_820 _kernel_dll_name) {
	argv_3517 argv_1993 = argv_1716;
#if defined (__BYPASS_KERNEL__)
	MessageBox (argv_2889, "the kernel will be bypassed ! (__BYPASS_KERNEL__ flag set)", "", MB_ICONWARNING);		
#endif // #if defined (__BYPASS_KERNEL__)


	if ((_log_ptr == argv_2889) || (_max_nb_client == 0) || (_root_folder == argv_2889) || (_kernel_dll_name == argv_2889)) {
		argv_1993 = argv_1713;
	}
	else { // parameters are OK
		argv_1715		= this; // will permit C functions to call C++ argv_2908
		argv_2240			= _log_ptr;
		argv_3409		= _root_folder;
		argv_2041	= _kernel_dll_name;
#if defined (__DEBUG_GATEWAY__)
		argv_2240->argv_2247 (argv_2886, "gateway...[STARTING]");
#endif // #if defined (__DEBUG_GATEWAY__)
		// argv_3237 the client array
		argv_891 = new (std::nothrow) argv_807[_max_nb_client];
		if (argv_891 == argv_2889) {
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway : failed to allocate client argv_3734 !");
			argv_1993 = argv_1714;
		}
		else { // memory allocation succeeded
#if defined (__DEBUG_GATEWAY__)
			argv_2240->argv_2247 (argv_2886, "gateway - client array allocated succesfully");
			argv_2240->argv_2247 (argv_2886, "gateway - constructing the kernel...");
#endif // #if defined (__DEBUG_GATEWAY__)
			// ensure that conditions are met to allocate a new kernel manager
			if (argv_2064 != argv_2889) {
				argv_1993 = argv_1712;
			}
			else { // allocate the kernel manager
				argv_2064 	= new (std::nothrow) argv_889;
				if (argv_2064 == argv_2889) {
					argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway : failed to allocate kernel manager !");
					argv_1993 = argv_1714;
				}
				else { // kernel manager succesfuly allocated
					// construct the kernel
					argv_1993 = argv_2064->construct_kernel (argv_3409.c_str(), argv_2041.c_str(), argv_2240);
					if (argv_1993 != argv_2083) {
						string serror = argv_1319 (argv_1993);
						argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway - argv_3414 : construct_kernel failed ! - ", serror.c_str());
					}
					else { // kernel created succesfully
#if defined (__DEBUG_GATEWAY__)
						argv_2240->argv_2247 (argv_2886, "gateway - kernel constructed succesfully");
#endif // #if defined (__DEBUG_GATEWAY__)

						// argv_760 the kernel
						argv_1993 = argv_2064->argv_764 ();
						if (argv_1993 != argv_2083) { // kernel built and booted succesfully
							argv_2240->argv_2247 (argv_1321, "+++ ERROR: gateway - kernel argv_760 failed !");
						}
						else { // kernel ready => argv_3601 the event loop
#if defined (__DEBUG_GATEWAY__)
							argv_2240->argv_2247 (argv_2886, "gateway - kernel booted succesfully");
							argv_2240->argv_2247 (argv_2886, "gateway - launching event loop");
#endif // #if defined (__DEBUG_GATEWAY__)
							argv_1993 = argv_1347.argv_3414 (argv_2240, _v_listener, &argv_891[0], _max_nb_client, argv_1348);
							if (argv_1993 == argv_1343) {
								argv_1993 = argv_1716; // remap error argv_929
							}
							else { // event loop returned
								if (argv_1993 == argv_1342) {
									argv_2240->argv_2247 (argv_660, "*** WARNING : argv_837::argv_3414 - << RECEIVED ORDER TO STOP >>");
									argv_3517 iret2 = argv_2064->argv_3513 ();
									if (iret2 != argv_2083) {
										string serror = argv_1319 (iret2);
										argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3414 - argv_3513 failed ! - errno = ", serror.c_str());
									}
									else {
										argv_2240->argv_2247 (argv_2886, "gateway - kernel manager argv_3512...[SUCCESS]");
										iret2 = argv_2064->argv_1199 ();
										if (iret2 != argv_2083) {
											string serror = argv_1319 (iret2);
											argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3414 - argv_1199 failed ! - errno = ", serror.c_str());
										}
										else { // kernel manager destructed succesfully
											argv_2240->argv_2247 (argv_2886, "gateway - kernel manager argv_1197...[SUCCESS]");
										}
									}
								}
								else { // real error occured
									string serror = argv_1319 (argv_1993);
									argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_837::argv_3414 - event loop argv_3414 failed ! - errno = ", serror.c_str());
								}
							}
						}
					}
				}
			}
		}
	}

	return (argv_1993);		
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


