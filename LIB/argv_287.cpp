// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_353.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the functions and argv_1139
// @@ structures necessary for the scan daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_353.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variables
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	extern argv_820		argv_3491;
#endif // #if defined (__WIN32_OS__) 
extern argv_917  *		argv_3490;
argv_1090 *		argv_1138	= argv_2889;


void WINAPI service_main (DWORD _argc, LPTSTR _argv[]) {
	argv_1090 * daemon_mgr_ptr_local = new (std::nothrow) argv_1090;
	if (daemon_mgr_ptr_local == argv_2889) {
		FILE * argv_1478 = fopen ("C:\\av_service_log.txt", "wb");
		if (argv_1478) {
			fprintf (argv_1478, "+++ ERROR: memory allocation failed for service argv_2908");
			fclose (argv_1478);
		}
	}
	else {
		argv_1138 = daemon_mgr_ptr_local;
		daemon_mgr_ptr_local->argv_3414 ();	
		delete daemon_mgr_ptr_local;
	}
}


argv_3517 main (argv_3517 _argc, char ** _argv) {
	argv_3517 argv_1993 = 0;

	SERVICE_TABLE_ENTRY servicetable[]=
	{
		{(char *) argv_3491, (LPSERVICE_MAIN_FUNCTION) service_main},
		{argv_2889,argv_2889}
	};

	BOOL bresult = StartServiceCtrlDispatcher (servicetable);
	if (! bresult) {
		argv_1993 = 1;
	}
	return (argv_1993);
	
}

void argv_3488 (DWORD nControlCode) {
	argv_3517 argv_1993 = argv_3439;

	switch (nControlCode) {
		case SERVICE_CONTROL_SHUTDOWN:
		case SERVICE_CONTROL_STOP:
		case SERVICE_STOP_PENDING:
			argv_1138->argv_3489 = SERVICE_STOP_PENDING;
			argv_1993 = argv_1138->argv_3939 (SERVICE_STOP_PENDING, NO_ERROR, 0, 1, 3000);
			if (argv_1993 != argv_3439) {
				argv_3490->argv_2247 (argv_1321, "+++ ERROR: argv_3488: argv_3939 failed ! (SERVICE_STOP_PENDING)");
			}
			else {
				argv_3490->argv_2247 (argv_2886, "service status set to SERVICE_STOP_PENDING...[OK]");
			}
			argv_1138->argv_2119 ();
			return;
			break;

		default:
			break;
	}
	
	argv_1993 = argv_1138->argv_3939 (argv_1138->argv_3489, NO_ERROR, 0, 0, 0);
	if (argv_1993 != argv_3439) {
		argv_3490->argv_2247 (argv_1321, "+++ ERROR: argv_3488: argv_3939 failed !");
	}
	else {
		argv_3490->argv_2247 (argv_2886, "argv_3488: argv_3939...[OK]");
	}
	Sleep (5000);
}

DWORD WINAPI argv_1256 (argv_2263 lParam) {
	argv_1091 * env_ptr = (argv_1091 *) lParam;
	argv_3517 argv_1993 = env_ptr->inner_objects.argv_978.argv_3414 (&env_ptr->log_set.argv_2235, env_ptr->data_set.argv_2327, env_ptr->argv_3948, &env_ptr->inner_objects.argv_676, &env_ptr->inner_objects.argv_689, &env_ptr->inner_objects.argv_3561);
	return (0);
}

DWORD WINAPI argv_1254 (argv_2263 lParam) {
	argv_1091 * env_ptr = (argv_1091 *) lParam;
	argv_3517 argv_1993 = env_ptr->inner_objects.argv_676.argv_3414 ("Carchive_creator", env_ptr->data_set.internal_archive_creator_port, &env_ptr->log_set.argv_2231, env_ptr->data_set.argv_667.c_str(), env_ptr->data_set.argv_666.c_str());
	return (0);
}

DWORD WINAPI argv_1255 (argv_2263 lParam) {
	argv_1091 * env_ptr = (argv_1091 *) lParam;
	argv_3517 argv_1993 = env_ptr->inner_objects.argv_689.argv_3414 ("Carchive_extractor", env_ptr->data_set.internal_archive_extractor_port, &env_ptr->log_set.argv_2232, env_ptr->data_set.argv_667.c_str(), env_ptr->data_set.argv_666.c_str());
	return (0);
}

DWORD WINAPI argv_1259 (argv_2263 lParam) {
	argv_1091 * env_ptr = (argv_1091 *) lParam;
	argv_3517 argv_1993 = env_ptr->inner_objects.argv_3561.argv_3414 ("Cspyware_manager", env_ptr->data_set.internal_spyware_manager_port, &env_ptr->log_set.argv_2244);
	return (0);
}

DWORD WINAPI argv_1258 (argv_2263 lParam) {
	argv_1091 * env_ptr = (argv_1091 *) lParam;
	argv_3517 argv_1993 = env_ptr->inner_objects.argv_3443.argv_3414 (env_ptr->data_set.argv_3409.c_str(), env_ptr->data_set.argv_2041.c_str(), "Cscan_gateway", env_ptr->data_set.internal_scan_gateway_port, &env_ptr->log_set.argv_2243);
	return (0);
}

DWORD WINAPI argv_1260 (argv_2263 lParam) {
	argv_1091 * env_ptr = (argv_1091 *) lParam;
	argv_3517 argv_1993 = env_ptr->inner_objects.argv_3921.argv_3414 (env_ptr->data_set.argv_1366.c_str(), env_ptr->data_set.internal_update_manager_port, env_ptr->data_set.argv_1367, &env_ptr->log_set.argv_2250, env_ptr->data_set.argv_3409.c_str(), env_ptr->data_set.argv_2041.c_str());
	return (0);
}

void argv_1090::argv_1224 (argv_820 _from, argv_3517 _success_iret, argv_3517 _iret) {
	char argv_3828[MAX_PATH];	
	if (_iret == _success_iret) {
		argv_3548 (argv_3828, MAX_PATH, "%s...[SUCCESS]", _from);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2251.argv_2247 (argv_1152, argv_3828);	
	}
	else {
		string serror = argv_1319 (_iret);
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: %s...[FAILED] - argv_1318 = %s", _from, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2251.argv_2247 (argv_1321, argv_3828);
	}
}

// this function permits to argv_1371 the necessary settings from registry (win32)
// for now this extraction is just simulated as the product should be installed
// in order to have a valid registry tree established.
//
// NOTICE: Linux gets parameters from command argv_2173
argv_3517 argv_1090::argv_1375 () {
	argv_3517 argv_1993 = argv_3439;
#if defined (__WIN32_OS__) 
	argv_1316.data_set.internal_servname				= "127.0.0.1";
	argv_1316.data_set.argv_1366				= "INADDR_ANY";

	argv_3864 base_port								= 30000;
	argv_1316.data_set.argv_1364			= base_port + 0;
	argv_1316.data_set.argv_1365			= base_port + 1;
	argv_1316.data_set.argv_1363			= base_port + 2;
	argv_1316.data_set.argv_1367	= base_port + 3;

	argv_1316.data_set.internal_archive_creator_port	= base_port + 4;
	argv_1316.data_set.internal_archive_extractor_port= base_port + 5;	
	argv_1316.data_set.internal_spyware_manager_port	= base_port + 6;
	argv_1316.data_set.internal_scan_gateway_port		= base_port + 7;
	argv_1316.data_set.internal_update_manager_port	= base_port + 8;
	argv_1316.data_set.internal_admin_port			= base_port + 9;

	argv_1316.data_set.argv_2327					= 30;

	char argv_3828[MAX_PATH];
	strncpy (argv_3828, "C:\\new_engine\\SRC\\fake_GUI", MAX_PATH);
	argv_3828[MAX_PATH - 1] = '\0';

	argv_1316.data_set.argv_3409					= argv_3828;
	argv_1316.data_set.argv_2041				= argv_1316.data_set.argv_3409 + "\\DLL\\" + "kernel_api.dll";
	argv_1316.data_set.argv_667				= argv_1316.data_set.argv_3409 + "\\DLL";
	argv_1316.data_set.argv_666					= "vrazmain.dll";

#endif // #if defined (__WIN32_OS__) 
	argv_1230 ();
	return (argv_1993);
}

void argv_1090::argv_1230 () {
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2251.argv_2247 (argv_1152, "internal_servname               = ", argv_1316.data_set.internal_servname.c_str());	
	argv_2251.argv_2247 (argv_1152, "argv_1366               = ", argv_1316.data_set.argv_1366.c_str());
	argv_2251.argv_2247 (argv_1152, " ");
	argv_2251.argv_2247 (argv_1152, "argv_1364             = ", argv_1316.data_set.argv_1364);
	argv_2251.argv_2247 (argv_1152, "argv_1365            = ", argv_1316.data_set.argv_1365);
	argv_2251.argv_2247 (argv_1152, "argv_1363           = ", argv_1316.data_set.argv_1363);
	argv_2251.argv_2247 (argv_1152, "argv_1367    = ", argv_1316.data_set.argv_1367);
	argv_2251.argv_2247 (argv_1152, "");
	argv_2251.argv_2247 (argv_1152, "internal_archive_creator_port   = ", argv_1316.data_set.internal_archive_creator_port);
	argv_2251.argv_2247 (argv_1152, "internal_archive_extractor_port = ", argv_1316.data_set.internal_archive_extractor_port);
	argv_2251.argv_2247 (argv_1152, "internal_spyware_manager_port   = ", argv_1316.data_set.internal_spyware_manager_port);
	argv_2251.argv_2247 (argv_1152, "internal_scan_gateway_port      = ", argv_1316.data_set.internal_scan_gateway_port);
	argv_2251.argv_2247 (argv_1152, "internal_update_manager_port    = ", argv_1316.data_set.internal_update_manager_port);
	argv_2251.argv_2247 (argv_1152, "internal_admin_port             = ", argv_1316.data_set.internal_admin_port);
	argv_2251.argv_2247 (argv_1152, "");
	argv_2251.argv_2247 (argv_1152, "argv_2327                   = ", argv_1316.data_set.argv_2327);
	argv_2251.argv_2247 (argv_1152, "argv_3409                     = ", argv_1316.data_set.argv_3409.c_str());
	argv_2251.argv_2247 (argv_1152, "argv_2041                 = ", argv_1316.data_set.argv_2041.c_str());
	argv_2251.argv_2247 (argv_1152, "argv_667               = ", argv_1316.data_set.argv_667.c_str());
	argv_2251.argv_2247 (argv_1152, "argv_666                  = ", argv_1316.data_set.argv_666.c_str());
	argv_2251.argv_2247 (argv_1152, "");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
}

argv_3517 argv_1090::argv_3987 (argv_820 _name, HANDLE _handle, argv_3517 _timeout) {
	argv_3517 argv_1993		= argv_3439;
	argv_3517 ret_local = WaitForSingleObject (_handle, /*INFINITE*/_timeout);

	if (ret_local == WAIT_OBJECT_0) {
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2251.argv_2247 (argv_2886, "following thread succesfully finished : '", _name, "'");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	}
	else if (ret_local == WAIT_TIMEOUT) {
		argv_1993 = argv_3441;
		argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1090::send_stop_packet - WAIT_TIMEOUT for following thread : '", _name, "'");
	}
	else {
		argv_1993 = argv_3440;
		argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1090::send_stop_packet - wait failed for following thread : '", _name, "'");
	}
	return (argv_1993);
}


argv_3517 argv_1090::argv_3986 () {
	argv_3517 argv_1993		= argv_3439;
	argv_3517 ret_local	= 0;
	argv_3864 argv_2866	= argv_3958.size ();
	argv_3864 nb_success = 0;
	argv_3864 nb_error   = 0;

	for (argv_3864 i=0 ; i<argv_2866 ; i++) {
		ret_local = argv_3987 (argv_3958[i].argv_2817.c_str(), argv_3958[i].argv_3780, argv_2335);
		if (ret_local == argv_3439) {
			nb_success++;
		}
		else {
			nb_error++;
		}
	}

	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "terminated inner threads (%u argv_1261, %u success, %u failure)", argv_2866, nb_success, nb_error);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2251.argv_2247 (argv_2886, argv_3828);
	return (argv_1993);
}

// we need to argv_3472 a different argv_2389 to kill the COM manager when we are sure
// that all other parts have been succesfully killed.
argv_3517 argv_1090::argv_2118 (argv_882& _inner_client) {
	argv_3517 argv_1993 = argv_3439;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2251.argv_2247 (argv_1152, "scan_daemon: killing the COM manager");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	// forge a rich packet and argv_3472 it to the COM manager
	vector<argv_819> v_atom;
	argv_3864 unused_UI32 = 0; // because empty packets are not allowed
	argv_617 (unused_UI32, v_atom);
	argv_1993 = _inner_client.argv_1464 (argv_3064, v_atom, "argv_1090::argv_2120", argv_3038);
	if (argv_1993 != argv_1981) {
		argv_1224 ("argv_1090::argv_2118 - argv_1464", argv_1981, argv_1993);
	}
	else {
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2251.argv_2247 (argv_1152, "scan_daemon: sent the termination packet (FINALIZE) to the COM manager");
		argv_2251.argv_2247 (argv_1152, "scan_daemon: waiting for COM manager to argv_3607");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
		argv_3987 (argv_993.argv_2817.c_str(), argv_993.argv_3780, argv_2335);
	}
	return (argv_1993);
}

// to argv_3607 the service, the only thing that we need to do is to forge a rich
// packet and argv_3472 it to the com manager. Then the com manager will broadcast 
// this request to other parts.
// Notice that we argv_3472 a argv_3063 to argv_3607 the following parts :
// - archive creator
// - archive extractor
// - spyware manager
// - argv_3443
// - update manager
// Then when we are sure that all these threads have exited, we argv_3472 another
// argv_2389 argv_3842 argv_3064 in order to tell the COM manager
// to terminate itself.
argv_3517 argv_1090::argv_2120 () {
	argv_3517 argv_1993 = argv_3439;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2251.argv_2247 (argv_1152, "scan_daemon: killing the service");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	argv_882 inner_client;

	argv_1993 = inner_client.argv_3237 ("argv_1090", argv_1316.data_set.internal_admin_port, &argv_2251);
	if (argv_1993 != argv_1981) {
		argv_1224 ("argv_1090::argv_2120 - argv_3237", argv_1981, argv_1993);
	}
	else { // client connected to the admin argv_3221
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2251.argv_2247 (argv_1152, "scan_daemon: connected to the COM manager");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
		// forge a rich packet and argv_3472 it to the COM manager
		vector<argv_819> v_atom;
		argv_3864 unused_UI32 = 0; // because empty packets are not allowed
		argv_617 (unused_UI32, v_atom);
		argv_1993 = inner_client.argv_1464 (argv_3063, v_atom, "argv_1090::argv_2120", argv_3038);
		if (argv_1993 != argv_1981) {
			argv_1224 ("argv_1090::argv_2120 - argv_1464", argv_1981, argv_1993);
		}
		else {
#if defined (__DEBUG_SCAN_DAEMON__)
			argv_2251.argv_2247 (argv_1152, "scan_daemon: sent the termination packet to the COM manager");
			argv_2251.argv_2247 (argv_1152, "scan_daemon: waiting for all blocks to argv_3607");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
			argv_1993 = argv_3986 ();
			if (argv_1993 != argv_3439) {
				argv_1224 ("argv_1090::argv_2120 - argv_3986", argv_3439, argv_1993);
			}

			argv_1993 = argv_2118 (inner_client);
		}
	}

	if (argv_1993 == argv_1981) { // remap error argv_929
		argv_1993 = argv_3439;
	}
	argv_2251.argv_2247 (argv_2886, "application dependant service killed");
	return (argv_1993);
}

void argv_1090::reset () {
	;
}

argv_1090::argv_1090 () {
	reset ();
}

argv_1090::~argv_1090 () {

}

argv_3517 argv_1090::argv_2147 (argv_820 _name, argv_2263 _callback_ptr, argv_2263 _param_ptr, bool _is_com_manager) {
	argv_3517 argv_1993 = argv_3439;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2251.argv_2247 (argv_1152, "- launching thread : ", _name);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	argv_1102 thread_desc;
	thread_desc.argv_2817 = _name;

	thread_desc.argv_3780 = CreateThread (0, 0, (argv_1701) _callback_ptr, (argv_2263) _param_ptr, 0, &thread_desc.argv_3781);
	if (thread_desc.argv_3780 == argv_2889) {
		argv_2251.argv_2247 (argv_1321, "+++ ERROR: failed to launch thread : ", _name);
		argv_1993 = argv_3437;
	}
	else { // save up this new thread descriptor (useful to monitor thread termination).
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2251.argv_2247 (argv_1152, " => thread started : ", _name);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
		if (_is_com_manager == false) {
			argv_3958.push_back (thread_desc);
		}
		else { // save up the thread descriptor of the COM manager separately 
			argv_993 = thread_desc;
		}
	}
	return (argv_1993);
}


argv_3517 argv_1090::argv_2143 () {
	argv_3517 argv_1993 = argv_3439;
	argv_1993 = argv_2147 ("argv_978", argv_1256, (argv_2263) &argv_1316, true);
	if (argv_1993 != argv_3439) {
		argv_1224 ("argv_1090::argv_2143", argv_3439, argv_1993);
	}
	return (argv_1993);
}

argv_3517 argv_1090::argv_2141 () {
	argv_3517 argv_1993 = argv_3439;
	argv_1993 = argv_2147 ("argv_676", argv_1254, (argv_2263) &argv_1316);
	if (argv_1993 != argv_3439) {
		argv_1224 ("argv_1090::argv_2141", argv_3439, argv_1993);
	}
	return (argv_1993);
}

argv_3517 argv_1090::argv_2142 () {
	argv_3517 argv_1993 = argv_3439;
	argv_1993 = argv_2147 ("argv_689", argv_1255, (argv_2263) &argv_1316);
	if (argv_1993 != argv_3439) {
		argv_1224 ("argv_1090::argv_2142", argv_3439, argv_1993);
	}
	return (argv_1993);
}

argv_3517 argv_1090::argv_2145 () {
	argv_3517 argv_1993 = argv_3439;
	argv_1993 = argv_2147 ("argv_3561", argv_1259, (argv_2263) &argv_1316);
	if (argv_1993 != argv_3439) {
		argv_1224 ("argv_1090::argv_2145", argv_3439, argv_1993);
	}
	return (argv_1993);
}

argv_3517 argv_1090::argv_2144 () {
	argv_3517 argv_1993 = argv_3439;
	argv_1993 = argv_2147 ("argv_3443", argv_1258, (argv_2263) &argv_1316);
	if (argv_1993 != argv_3439) {
		argv_1224 ("argv_1090::argv_2144", argv_3439, argv_1993);
	}
	return (argv_1993);
}

argv_3517 argv_1090::argv_2148 () {
	argv_3517 argv_1993 = argv_3439;

	argv_1993 = argv_2147 ("argv_3921", argv_1260, (argv_2263) &argv_1316);
	if (argv_1993 != argv_3439) {
		argv_1224 ("argv_1090::argv_2148", argv_3439, argv_1993);
	}
	return (argv_1993);
}

// this function permits to create all necessary threads :
// - com manager thread
// - archive creator thread
// - archive extractor thread
// - spyware manager thread
// - scan gateway thread
argv_3517 argv_1090::argv_2140 () {
	argv_3517 argv_1993 = argv_3439;

#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2251.argv_2247 (argv_1152, "argv_1090: launching all inner objects");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	argv_1993 = argv_2143 ();
	if (argv_1993 != argv_3439) {
		argv_1224 ("argv_1090::argv_2140 - argv_2143", argv_3439, argv_1993);
	}

	if (argv_1993 == argv_3439) {
		argv_1993 = argv_2141 ();
		if (argv_1993 != argv_3439) {
			argv_1224 ("argv_1090::argv_2140 - argv_2141", argv_3439, argv_1993);
		}
	}

	if (argv_1993 == argv_3439) {
		argv_1993 = argv_2142 ();
		if (argv_1993 != argv_3439) {
			argv_1224 ("argv_1090::argv_2140 - argv_2142", argv_3439, argv_1993);
		}
	}

	if (argv_1993 == argv_3439) {
		argv_1993 = argv_2145 ();
		if (argv_1993 != argv_3439) {
			argv_1224 ("argv_1090::argv_2140 - argv_2145", argv_3439, argv_1993);
		}
	}

	if (argv_1993 == argv_3439) {
		argv_1993 = argv_2144 ();
		if (argv_1993 != argv_3439) {
			argv_1224 ("argv_1090::argv_2140 - argv_2144", argv_3439, argv_1993);
		}
	}

	if (argv_1993 == argv_3439) {
		argv_1993 = argv_2148 ();
		if (argv_1993 != argv_3439) {
			argv_1224 ("argv_1090::argv_2140 - argv_2148", argv_3439, argv_1993);
		}
	}
	return (argv_1993);
}

// all necessary threads are created by this function called by the argv_742 class
argv_3517 argv_1090::argv_1077 () {
	argv_3517 argv_1993 = argv_3439;

	argv_1993 = argv_1375 (); // (Linux gets parameters from command argv_2173)
	if (argv_1993 != argv_3439) {
		argv_1224 ("argv_1090::argv_1077 - argv_1375", argv_3439, argv_1993);
	}
	else { // settings extracted succesfully
		// open all log files
		argv_1993 = argv_2936 ();
		if (argv_1993 != argv_3439) {
			argv_1224 ("argv_1090::argv_1077 - argv_2936", argv_3439, argv_1993);
		}
		else { // all log files opened succesfully
			argv_1993 = argv_3238 ();
			if (argv_1993 != argv_3439) {
				argv_1224 ("argv_1090::argv_1077 - argv_3238", argv_3439, argv_1993);
			}
			else { // all listeners ready (all ports bound).
				argv_1993 = argv_2140 ();
				if (argv_1993 != argv_3439) {
					argv_1224 ("argv_1090::argv_1077 - argv_2140", argv_3439, argv_1993);
				}
				else {
					argv_3492 = true;
				}
			}
		}
	}
	return (argv_1993);
}

argv_3517 argv_1090::argv_2936 () {
	argv_3517 argv_1993 = argv_3439;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2251.argv_2247 (argv_1152, "argv_1090: opening all log files");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	string log_base		= argv_2236 + argv_3484;

	argv_2237 = log_base + "argv_2235.txt"; 
	argv_1316.log_set.argv_2235.argv_2937 (argv_2237.c_str(), argv_2889, "");

	string argv_2237 = log_base + "argv_2231.txt"; 
	argv_1316.log_set.argv_2231.argv_2937 (argv_2237.c_str(), argv_2889, "");

	argv_2237 = log_base + "argv_2232.txt"; 
	argv_1316.log_set.argv_2232.argv_2937 (argv_2237.c_str(), argv_2889, "");

	argv_2237 = log_base + "argv_2244.txt"; 
	argv_1316.log_set.argv_2244.argv_2937 (argv_2237.c_str(), argv_2889, "");

	argv_2237 = log_base + "argv_2243.txt"; 
	argv_1316.log_set.argv_2243.argv_2937 (argv_2237.c_str(), argv_2889, "");

	argv_2237 = log_base + "argv_2250.txt"; 
	argv_1316.log_set.argv_2250.argv_2937 (argv_2237.c_str(), argv_2889, "");

#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2251.argv_2247 (argv_1152, "argv_1090: opening all log files...[DONE]");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	return (argv_1993);
}

argv_3517 argv_1090::argv_3238 () {
	argv_3517 argv_1993 = argv_3439;

	argv_1993 = argv_3245		("argv_1364", argv_1316.data_set.argv_1366.c_str(), argv_1316.data_set.argv_1364, argv_910);

	if (argv_1993 == argv_3439) {
		argv_1993 = argv_3245 ("argv_1365", argv_1316.data_set.argv_1366.c_str(), argv_1316.data_set.argv_1365, argv_911);
	}
	if (argv_1993 == argv_3439) {
		argv_1993 = argv_3245 ("argv_1363", argv_1316.data_set.argv_1366.c_str(), argv_1316.data_set.argv_1363, argv_902);
	}
	/*
	if (argv_1993 == argv_3439) {
		argv_1993 = argv_3245 ("argv_1367", argv_1316.data_set.argv_1366.c_str(), argv_1316.data_set.argv_1367, argv_908);
	}*/
	if (argv_1993 == argv_3439) {
		argv_1993 = argv_3245 ("internal_archive_creator_port", argv_1316.data_set.internal_servname.c_str(), argv_1316.data_set.internal_archive_creator_port, argv_904);
	}
	if (argv_1993 == argv_3439) {
		argv_1993 = argv_3245 ("internal_archive_extractor_port", argv_1316.data_set.internal_servname.c_str(), argv_1316.data_set.internal_archive_extractor_port, argv_905);
	}
	if (argv_1993 == argv_3439) {
		argv_1993 = argv_3245 ("internal_spyware_manager_port", argv_1316.data_set.internal_servname.c_str(), argv_1316.data_set.internal_spyware_manager_port, argv_907);
	}
	if (argv_1993 == argv_3439) {
		argv_1993 = argv_3245 ("internal_scan_gateway_port", argv_1316.data_set.internal_servname.c_str(), argv_1316.data_set.internal_scan_gateway_port, argv_906);
	}
	if (argv_1993 == argv_3439) {
		argv_1993 = argv_3245 ("internal_update_manager_port", argv_1316.data_set.internal_servname.c_str(), argv_1316.data_set.internal_update_manager_port, argv_908);
	}
	if (argv_1993 == argv_3439) {
		argv_1993 = argv_3245 ("internal_admin_port", argv_1316.data_set.internal_servname.c_str(), argv_1316.data_set.internal_admin_port, argv_903);
	}
	return (argv_1993);
}

argv_3517 argv_1090::argv_3245 (argv_820 _name, argv_820 _servname, argv_3864 _port, argv_3862 _client_type) {
	argv_3517 argv_1993 = argv_3439;
	char argv_3828[MAX_PATH];

#if defined (__DEBUG_SCAN_DAEMON__)
	argv_3548 (argv_3828, MAX_PATH, "preparing listener '%s' : servname: %s, argv_3221: %u", _name, _servname, _port);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	// bind the argv_3221 and the servname
	argv_928 argv_2376;
	argv_1993 = argv_2376.argv_3248 (_servname, _port);
	if (argv_1993 != argv_2380) {
		string serror = argv_1319 (argv_1993);
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_1090::argv_3245 - argv_3248 failed ! (%s,%s,%u) - argv_1318 = ", _name, _servname, _port, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2251.argv_2247 (argv_1321, argv_3828);
	}
	else { // server argv_3254 => argv_1371 it's listening argv_3549 
		argv_916 listener;
		listener.argv_900	= _client_type;
		argv_2263 void_ptr			= argv_2889;
		argv_3550 * socket_ptr		= argv_2889;
		argv_1993 = argv_2376.argv_1758 ((argv_2263&) void_ptr);

		if (argv_1993 != argv_2380) {
			argv_1224 ("argv_1090::argv_3245 - argv_1758", argv_2380, argv_1993);
		}
		else { // argv_616 the listening argv_3549 to the vector for the event loop of COM manager
			socket_ptr = (argv_3550 *) void_ptr;
			listener.argv_3549 = (*socket_ptr);
#if defined (__DEBUG_SCAN_DAEMON__)
			argv_3548 (argv_3828, MAX_PATH, "extracted listening argv_3549 of '%s' : %d", _name, listener.argv_3549);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
			argv_1316.argv_3948.push_back (listener);
		}
	}

	if (argv_1993 == argv_2380) { // remap error argv_929
		argv_1993 = argv_3439;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
