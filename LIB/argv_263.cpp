// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_263.cpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_330.hpp"


argv_883::argv_883 () {
	reset ();
}

void argv_883::reset () {
	argv_2240					= argv_2889;
	argv_3221					= 0;
	inner_port_servname		= "127.0.0.1";
	argv_2950				= "";
	argv_1041	= false;
	argv_3339			= argv_2889;
	argv_3480			= argv_2889;
	argv_3254				= false;
}

void argv_883::argv_1225 (argv_3517 _iret_success, argv_3517 _iret, argv_820 _operation) {
	char argv_3828[MAX_PATH];
	if (argv_2240 != argv_2889) {
		if (_iret == _iret_success) {
			argv_3548 (argv_3828, MAX_PATH, "%s (argv_2949:%s)...[SUCCESS]", _operation, argv_2950.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1152, argv_3828);
		}
		else {
			string serror = argv_1319 (_iret);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: %s (argv_2949:%s)...[FAILED] - serror=%s", _operation, argv_2950.c_str(), serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1321, argv_3828);
		}
	}
}

void argv_883::argv_1220 (argv_820 _message) {
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "argv_883(argv_2949:%s) %s", argv_2950.c_str(), _message);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
}

argv_3517 argv_883::argv_921 () {
	argv_3517 argv_1993 = argv_1988;
	if (argv_1041 == false) {
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_883::argv_921 - illegal call  when connection was not established !");
		argv_1993 = argv_1986;
	}
	else { // argv_921 the connection with the external client
		argv_2377.argv_922 ();
		argv_1041	= false;
		argv_3254				= false;
	}
	return (argv_1993);
}

argv_3517 argv_883::argv_3478 () {
	argv_3517 argv_1993 = argv_1988;
	argv_1993 = argv_3480->argv_3472 (argv_2377);
	if (argv_1993 != argv_3026) {
		string serror = argv_1319 (argv_1993);
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_883::argv_3478 -  packet argv_3333 failed ! - errno = ", serror.c_str());
	}

	if (argv_1993 == argv_3026) { // remap error argv_929
		argv_1993 = argv_1988;
	}
	return (argv_1993);
}

argv_3517 argv_883::argv_1738 (argv_2263& _socket_ptr_as_void) {
	argv_3517 argv_1993 = argv_1988;
	argv_1993 = argv_2377.argv_1741 (_socket_ptr_as_void);
	return (argv_1993);
}

argv_3517 argv_883::argv_3330 () {
	argv_3517 argv_1993				= argv_1988;
	argv_3517 infinite_timeout	= -1;

	argv_1993 = argv_3339->reset ();
	if (argv_1993 != argv_3026) {
		string serror = argv_1319 (argv_1993);
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_883::argv_3330 -  packet reset failed ! - errno = ", serror.c_str());
	}
	else { // packet reseted succesfully
		// wait for a request from this external client
		argv_1993 = argv_3339->argv_3333 (argv_2377, infinite_timeout, false);
		if (argv_1993 != argv_3026) {
			string serror = argv_1319 (argv_1993);
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_883::argv_3330 -  packet argv_3333 failed ! - errno = ", serror.c_str());
		}
	}

	if (argv_1993 == argv_3026) { // remap error argv_929
		argv_1993 = argv_1988;
	}
	return (argv_1993);
}


argv_3517 argv_883::argv_3237 (argv_820 _owner, argv_3864 _port, argv_917 * _log_ptr, argv_1057 * _recv_pck_ptr, argv_1057 * _send_pck_ptr) {
	argv_3517 argv_1993 = argv_1988;
	if ((_log_ptr == argv_2889) || (_recv_pck_ptr == argv_2889) || (_send_pck_ptr == argv_2889)) {
		argv_1993 = argv_1987;
	}
	else if (argv_3254 == true) {
		argv_1993 = argv_1985;
	}
	else {
		argv_3339	= _recv_pck_ptr;
		argv_3480	= _send_pck_ptr;
		argv_2240			= _log_ptr;
		argv_3221			= _port;
		argv_2950		= _owner;

		argv_1220 ("preparing inner argv_3221");

		// bind the argv_3221 given as a parameter
		argv_1993 = argv_2377.argv_3239 (inner_port_servname.c_str(), argv_3221);
		argv_1225 (argv_2380, argv_1993, "argv_3239");
		if (argv_1993 != argv_2380) {
			argv_3864 argv_2135 = argv_2377.argv_1756 ();
			string serror = argv_1319 (argv_1993);
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_883::argv_3237 - argv_3239 FAILED ! - errno = ", serror.c_str());
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_883::argv_3237 - last argv_3549 error = ", argv_2135);
			argv_1993 = argv_1983;
		}
		else { // client argv_3254 succesfully
#if defined (__DEBUG_INNER_PORT__)
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "client argv_3254 succesfully on argv_3221 %u for '%s' (connection established)", _port, _owner);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_INNER_PORT__)
			argv_1041	= true;
			argv_3254				= true;
		}
	}

	if (argv_1993 == argv_2380) {
		argv_1993 = argv_1988; // remap error argv_929
	}
	return (argv_1993);
}




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
