// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_246.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the functions that permit
// @@ to communicate with the service update.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_313.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_958	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if operation was succesful,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function is to be called prior to any other in order
// @@ to argv_3237 the admin API to use the TCP/IP stack.
// @@ Notice that it does nothing under Linux platforms.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_958 () {
		bool bret = true;
#if defined (__WIN32_OS__) 
		bret = argv_3251 ();
#endif // #if defined (__WIN32_OS__) 
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_959	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if operation was succesful,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function is to be called before exiting and when
// @@ no other call to the admin api is necessary.
// @@ Notice that it does nothing on Linux platforms.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_959 () {
		bool bret = true;
#if defined (__WIN32_OS__) 
		bret = argv_3738 ();
#endif // #if defined (__WIN32_OS__) 
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_create
// @@
// @@ INPUT			:	
// @@ _cli_ptr_ptr: argv_2263 *: contains the argv_635 of the new instance
// @@   of the admin client.
// @@
// @@ OUTPUT		:	
// @@ _result: bool& : true if operation was succesful,
// @@          false otherwise.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_659 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create a new instance of the admin
// @@ client argv_2908 and argv_3237 it for use.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_3517 internal_com_admin_client_create (argv_2263 * _cli_ptr_ptr, bool& _result) {
		_result = true;
		argv_3456 ** cli_ptr_ptr = (argv_3456 **) _cli_ptr_ptr;
		argv_3517 argv_1993 = argv_659;
		if (cli_ptr_ptr == argv_2889) {
			argv_1993 = argv_654;
		}
		else if (*cli_ptr_ptr != argv_2889) {
			argv_1993 = argv_652;
		}
		else { // allocate the client structure
			*cli_ptr_ptr = new (std::nothrow) argv_3456; 
			if (*cli_ptr_ptr == argv_2889) {
				argv_1993 = argv_656;
			}
			else { // memory allocation was succesful for the client structure
				(*cli_ptr_ptr)->argv_2135 = argv_659;

				// allocate the argv_2376 argv_2908
				(*cli_ptr_ptr)->argv_2369 = new (std::nothrow) argv_928;
				if ((*cli_ptr_ptr)->argv_2369 == argv_2889) {
					argv_1993 = argv_656;
				}
				else { // argv_2352 sock argv_2908 succesfully allocated
					// allocate the packet argv_2908
					(*cli_ptr_ptr)->argv_3009 = new (std::nothrow) argv_1057;
					if ((*cli_ptr_ptr)->argv_3009 == argv_2889) {
						argv_1993 = argv_656;
					}
				}
			}
		}

		if (argv_1993 != argv_659) {
			_result = false;
		}
		return (argv_1993);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_destruct	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2263: argv_635 of the admin argv_2908 obtained
// @@   by a previous call to the function 'internal_com_admin_client_create'.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if operation was succesful,
// @@        false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1197 the admin argv_2908 after use
// @@ and to release all memory used by this argv_2908 and other related
// @@ objects as well.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_destruct (argv_2263 _cli_ptr) {
		bool bret = true;
		argv_3456 * cli_ptr = (argv_3456 *) _cli_ptr;
		argv_3517 argv_1993 = argv_659;
		if (cli_ptr == argv_2889) {
			argv_1993 = argv_654;
			bret = false;
		}
		else { // parameters are OK
			delete cli_ptr;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_connect
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2263: argv_635 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ _servname: argv_820: argv_2817 or IP argv_635 of the server to connect to.
// @@
// @@ _servport: argv_3864: argv_3221 to connect to.
// @@ 
// @@ OUTPUT		:	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if operation was succesful,
// @@        false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to connect the admin argv_2908 to the server
// @@ whose IP (or argv_2817) and argv_3221 were given as parameters.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_servname' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_connect (argv_2263 _cli_ptr, argv_820 _servname, argv_3864 _servport) {
		bool bret = true;
		argv_3517 argv_1993 = argv_659;
		argv_3456 * cli_ptr = (argv_3456 *) _cli_ptr;
		if ((cli_ptr == argv_2889) || (_servname == argv_2889)) { // parameters are OK
			argv_1993 = argv_654;
		}
		else { // parameters are OK
			argv_1993 = cli_ptr->argv_2369->argv_3239 (_servname, _servport);
			if (argv_1993 == argv_2380) { // remap error argv_929
				argv_1993 = argv_659;
			}
			else {
				char argv_3828[MAX_PATH];
				string serror = argv_1319 (argv_1993);
				argv_3548 (argv_3828, MAX_PATH, "internal_com_admin_client_connect - argv_3239(%s,%d) failed ! (argv_1318=%s)", _servname, _servport, serror.c_str());
				argv_3828[MAX_PATH - 1] = '\0';
				MessageBox (argv_2889, argv_3828, "", MB_ICONERROR);
			}
		}

		if (cli_ptr != argv_2889) {
			cli_ptr->argv_2135	= argv_1993;
		}
		if (argv_1993 != argv_659) {
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_disconnect
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2263: argv_635 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to disconnect the admin client from the
// @@ scanning server.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_disconnect (argv_2263 _cli_ptr) {
		bool bret = true;
		argv_3517 argv_1993 = argv_659;
		argv_3456 * cli_ptr = (argv_3456 *) _cli_ptr;
		if (cli_ptr == argv_2889) { // parameters are OK
			argv_1993 = argv_654;
		}
		else { // parameters are OK
			argv_1993 = cli_ptr->argv_2369->argv_922 ();
		}

		if (argv_1993 == argv_2380) { // remap error argv_929
			argv_1993 = argv_659; 
		}

		if (cli_ptr != argv_2889) {
			cli_ptr->argv_2135 = argv_1993;
		}

		if (argv_1993 != argv_659) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_read_answer
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2263: argv_635 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ _timeout_second: argv_3517: the timeout associated with the read operation
// @@   on the argv_1106 argv_2352 (choose -1 for infinite).
// @@
// @@ _expected_type: argv_3862: the argv_3842 expected for the answer from the server.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_659 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to read the update argv_3402 coming from
// @@ the server. Notice that the server is supposed to argv_3472 a 
// @@ specific answer argv_3842, so the caller must provide the expected
// @@ argv_3842. If the received argv_3842 does not match the '_expected_type'
// @@ parameter, a protocol violation error occurs.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 internal_com_admin_client_read_answer (argv_3456 * _cli_ptr, argv_3517 _timeout_second, argv_3862 _expected_type) {
	argv_3517 argv_1993				= argv_659;
	argv_3862 extracted_type		= argv_3065;
	argv_3862 extracted_result	= 0;

	argv_1993 = _cli_ptr->argv_3009->reset ();

	if (argv_1993 == argv_3026) {
		argv_1993 = _cli_ptr->argv_3009->argv_3333 (*(_cli_ptr->argv_2369), _timeout_second, false);
	}

	if (argv_1993 == argv_3026) { // packet received succesfully
		// argv_1371 the received packet argv_3842
		argv_1993 = _cli_ptr->argv_3009->argv_1783 (extracted_type);
	}

	if (argv_1993 == argv_3026) { // argv_3842 extraction succeeded
		if (extracted_type != _expected_type) {
			argv_1993 = argv_658;
		}
		else { // the received argv_3842 matches the expected argv_3842
			// argv_1371 the argv_3402 of the operation sent by the server
			argv_1993 = _cli_ptr->argv_3009->argv_1371 (extracted_result);
			if (argv_1993 == argv_3026) {
				if (extracted_result == 1) {
					argv_1993 = argv_657;
				}
				else if ((extracted_result == 0) && (extracted_result == 1)) {
					argv_1993 = argv_655;
				}
			}
		}
	}

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_659; // remap error argv_929
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_send_request
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2263: argv_635 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ _pck_type: argv_3862: the argv_3842 of request to be sent to the server.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_659 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3472 a given request to the 
// @@ admin server. The request argv_3842 being given by the caller
// @@ via the '_pck_type' parameter.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 internal_com_admin_client_send_request (argv_3456 * _cli_ptr, argv_3862 _pck_type) {
	argv_3517 argv_1993 = argv_659;
	if (_cli_ptr == argv_2889) { // parameters are OK
		argv_1993 = argv_654;
	}
	else { // parameters are OK
		argv_1993 = _cli_ptr->argv_3009->reset ();
		if (argv_1993 == argv_3026) { // packet was reseted succesfully
			argv_1993 = _cli_ptr->argv_3009->argv_3501 (_pck_type);
		}

		if (argv_1993 == argv_3026) { // packet argv_3842 was set succesfully
			argv_3864 unused_data = 0; // empty packets are not allowed
			argv_1993 = _cli_ptr->argv_3009->insert (unused_data);
		}

		if (argv_1993 == argv_3026) { // argv_2955 the packet so that it can be ready
			argv_1993 = _cli_ptr->argv_3009->argv_2955 ();
		}

		if (argv_1993 == argv_3026) { // argv_3472 the packet to the server
			argv_1993 = _cli_ptr->argv_3009->argv_3472 (*(_cli_ptr->argv_2369));
		}
	}

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_659; // remap error argv_929
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_update
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2263: argv_635 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ _timeout_second: argv_3517: the timeout associated with the read operation
// @@   on the argv_1106 argv_2352 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if operation was succesful,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3472 the update request to the
// @@ scan server, then the answer from the server is read.
// @@ 
// @@ Notice that the admin client is supposed to have been 
// @@ connected to the server prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_update (argv_2263 _cli_ptr, argv_3517 _timeout_second) {
		bool bret = true;
		argv_3517 argv_1993 = argv_659;
		argv_3456 * cli_ptr = (argv_3456 *) _cli_ptr;
		if (cli_ptr == argv_2889) { // parameters are OK
			argv_1993 = argv_654;
		}
		else { // parameters are OK
			argv_1993 = internal_com_admin_client_send_request (cli_ptr, argv_3066);
			if (argv_1993 == argv_659) {
				argv_1993 = internal_com_admin_client_read_answer (cli_ptr, _timeout_second, argv_3067);
			}
		}

		if (argv_1993 != argv_659) { 
			MessageBox (argv_2889, "internal_com_admin_client_update - internal_com_admin_client_send_request failed !", "", MB_ICONERROR);
			bret = false;
		}

		if (cli_ptr != argv_2889) {
			cli_ptr->argv_2135 = argv_1993;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_957	
// @@
// @@ INPUT			:	
// @@ _servname: argv_820: argv_2817 or IP of the server to connect to.
// @@
// @@ _servport: argv_3864: argv_3221 of the server to connect to.
// @@
// @@ _timeout_second: argv_3517: the timeout associated with the read operation
// @@   on the argv_1106 argv_2352 (choose -1 for infinite).
// @@
// @@ OUTPUT		:
// @@ _ret_code: argv_3517&: return argv_929 for the operation.
// @@
// @@ _serror: argv_1063: the string error argv_2389 of the operation.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if operation was succesful,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the update by connecting to
// @@ the server whose argv_2817 or IP is given as the '_servname' parameter
// @@ and whose argv_3221 is given by the '_servport' parameter.
// @@ The argv_3402 of the operation can be determined by the argv_3402
// @@ parameters '_ret_code' and '_serror'.
// @@
// @@ Notice that the caller is supposed to have allocated the 
// @@ '_serror' argv_771 (to MAX_PATH size) prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_servname' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool argv_957 (argv_820 _servname, argv_3864 _servport, argv_3517 _timeout_second, argv_3517& _ret_code, argv_1063 _serror) {
		bool bret = true;
		MessageBox (argv_2889, "argv_957 - @1", "", MB_OK);
		argv_3517 argv_1993 = argv_659;
		if (_servname == argv_2889) { // parameters are OK
			argv_1993 = argv_654;
		}
		else { // parameters are OK
			argv_2263 admin_data_ptr = argv_2889;
			// create the client
			argv_1993 = internal_com_admin_client_create (&admin_data_ptr, bret);
			if (bret ==  true) { // connect the client
				MessageBox (argv_2889, "admin client created", "", MB_OK);
				bret = internal_com_admin_client_connect (admin_data_ptr, _servname, _servport);

				if (bret == true) { // perform the update
					bret = internal_com_admin_client_update (admin_data_ptr, _timeout_second);
				}

				if (bret == true) { // argv_921 the connection (closed by the server anyway)
					bret = internal_com_admin_client_disconnect (admin_data_ptr);
				}

				if (admin_data_ptr != argv_2889) {
					_ret_code = internal_com_admin_get_last_error (admin_data_ptr, _serror);
					internal_com_admin_client_destruct (admin_data_ptr);
				}
			}
			else {
				MessageBox (argv_2889, "argv_957 - internal_com_admin_client_create failed !", "", MB_ICONERROR);
			}
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_get_last_error
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2263: argv_635 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ OUTPUT		:	
// @@ _serror: argv_1063: error string retrieved, this parameter is supposed
// @@          to have been allocated by the caller prior to this call.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : the error argv_929 of the last error as a numeric argv_3960.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last error of the
// @@ admin client as a string.
// @@ 
// @@ Notice that the caller is supposed to have allocated the 
// @@ '_serror' argv_771 (to MAX_PATH size) prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_servname' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_3517 internal_com_admin_get_last_error (argv_2263 _cli_ptr, argv_1063 _serror) {
		argv_3517 retrieved_last_error = argv_659;	
		_serror[0] = '\0';
		if (_cli_ptr == argv_2889) {
			retrieved_last_error = argv_653;
		}
		else {
			argv_3456 * cli_ptr	= (argv_3456 *) _cli_ptr;
			retrieved_last_error	= cli_ptr->argv_2135;
			string serror = argv_1319 (retrieved_last_error);

			argv_3864 nb_todo = MAX_PATH - 1;
			if (serror.size() < MAX_PATH) {
				nb_todo = serror.size();
			}
			strncpy (_serror, serror.c_str(), nb_todo);
			_serror[nb_todo] = '\0';		
		}
		return (retrieved_last_error);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


