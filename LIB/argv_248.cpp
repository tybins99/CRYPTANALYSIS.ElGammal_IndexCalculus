// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_248.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the functions that permit
// @@ to communicate with the service scanner either
// @@ from remote, or from a local client 
// @@ independantly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_315.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;


/*
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_995	
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
// @@ to argv_3237 the com API to use the TCP/IP stack.
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
	bool argv_995 () {
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
// @@ FUNCTION		:	argv_996	
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
// @@ no other call to the com api is necessary.
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
	bool argv_996 () {
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
// @@ FUNCTION		:	argv_964
// @@
// @@ INPUT			:	
// @@ _cli_ptr_ptr: argv_2263 *: contains the argv_635 of the new instance
// @@   of the com client.
// @@
// @@ OUTPUT		:	
// @@ _result: bool& : true if operation was succesful,
// @@          false otherwise.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_976 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create a new instance of the com
// @@ client argv_2908 and argv_3237 it for use.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr_ptr' must not be a argv_2889 pointer.
// @@ - '*_cli_ptr_ptr' must be argv_2889, i.e must not contain a valid 
// @@   argv_635. 	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_964 (argv_2263 * _cli_ptr_ptr, bool& _result) {
		_result = true;
		argv_3457 ** cli_ptr_ptr = (argv_3457 **) _cli_ptr_ptr;
		argv_3517 argv_1993 = argv_976;
		if (cli_ptr_ptr == argv_2889) {
			argv_1993 = argv_970;
		}
		else if (*cli_ptr_ptr != argv_2889) {
			argv_1993 = argv_968;
		}
		else { // allocate the client structure
			*cli_ptr_ptr = new (std::nothrow) argv_3457; 
			if (*cli_ptr_ptr == argv_2889) {
				argv_1993 = argv_971;
			}
			else { // memory allocation was succesful for the client structure
				// allocate the argv_2376 argv_2908
				(*cli_ptr_ptr)->argv_2369 = new (std::nothrow) argv_928;
				if ((*cli_ptr_ptr)->argv_2369 == argv_2889) {
					argv_1993 = argv_971;
				}
				else { // argv_2352 sock argv_2908 succesfully allocated
					(*cli_ptr_ptr)->argv_2135 = argv_976;

					// allocate the packet argv_2908
					(*cli_ptr_ptr)->argv_3009 = new (std::nothrow) argv_1057;
					if ((*cli_ptr_ptr)->argv_3009 == argv_2889) {
						argv_1993 = argv_971;
					}
				}
			}
		}

		if (argv_1993 != argv_976) {
			_result = false;
		}
		return (argv_1993);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_965	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2263: argv_635 of the com argv_2908 obtained
// @@   by a previous call to the function 'argv_964'.
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
// @@ This function permits to argv_1197 the com argv_2908 after use
// @@ and to release all memory used by this argv_2908 and other related
// @@ objects as well.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_965 (argv_2263 _cli_ptr) {
		bool bret = true;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		argv_3517 argv_1993 = argv_976;
		if (cli_ptr == argv_2889) {
			argv_1993 = argv_970;
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
// @@ FUNCTION		:	argv_963
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2263: argv_635 of the com client obtained by a previous
// @@ call to the 'argv_964' function.
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
// @@ This function permits to connect the com argv_2908 to the server
// @@ whose IP (or argv_2817) and argv_3221 were given as parameters.
// @@ Notice that this function disables the TCP/IP nagle algorithm
// @@ as well for the connected argv_3549.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_servname' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_963 (argv_2263 _cli_ptr, argv_820 _servname, argv_3864 _servport) {
		bool bret = true;
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if ((cli_ptr == argv_2889) || (_servname == argv_2889)) { // parameters are OK
			argv_1993 = argv_970;
		}
		else { // parameters are OK
			argv_1993 = cli_ptr->argv_2369->argv_3239 (_servname, _servport);
			if (argv_1993 == argv_2380) {
				argv_3550 * sock_ptr = argv_2889;

				argv_1993 = 	cli_ptr->argv_2369->argv_1741 ((argv_2263&) sock_ptr);

				// disable the Nagle's algorithm
				argv_1993 = disable_nagle_algorithm (*sock_ptr);

				if (argv_1993 == argv_2380) {
					argv_1993 = argv_976;
				}
			}
		}

		if (cli_ptr != argv_2889) {
			cli_ptr->argv_2135	= argv_1993;
		}
		if (argv_1993 != argv_976) {
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_973
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2263: argv_635 of the com client obtained by a previous
// @@ call to the 'argv_964' function.
// @@
// @@ _filename: argv_820 : argv_2817 of the local argv_1396 to scan for viruses.
// @@
// @@ _dysinfect: bool: set to true if dysinfection is to be argv_1261.
// @@                   set to false otherwise.
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
// @@ This function permits to scan the local argv_1396 whose argv_2817 is
// @@ given as a parameter for viruses.
// @@ The caller can choose to attempt a dysinfection if necessary
// @@ via the '_dysinfect' parameter.
// @@ The argv_3402 of the scan may be obtained by a call to the 
// @@ 'com_client_get_local_result' function.
// @@
// @@ Notice that the caller is suposed to have connected the com
// @@ argv_2908 using the 'argv_963' prior to this call.
// @@
// @@ CONTRACT		:
// @@ - '_cli_ptr'  parameter must not be a argv_2889 pointer.
// @@ - '_filename' parameter must not be a argv_2889 pointer.		
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_973 (argv_2263 _cli_ptr, argv_820 _filename, bool _dysinfect) {
		bool bret = true;
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if ((cli_ptr == argv_2889) || (_filename == argv_2889)) { // parameters are OK
			argv_1993 = argv_970;
		}
		else { // parameters are OK
			argv_1993 = cli_ptr->argv_3009->reset ();
			if (argv_1993 == argv_3026) { // packet was reseted succesfully
				argv_3862 his_type		= argv_3053;

				if (_dysinfect == true) {
					his_type		= argv_3049;
				}
				argv_1993 = cli_ptr->argv_3009->argv_3501 (his_type);

				if (argv_1993 == argv_3026) { // packet argv_3842 was set succesfully
					argv_1993 = cli_ptr->argv_3009->insert (_filename);
				}

				if (argv_1993 == argv_3026) { // argv_2955 the packet so that it can be ready
					argv_1993 = cli_ptr->argv_3009->argv_2955 ();
				}

				if (argv_1993 == argv_3026) { // argv_3472 the packet to the server
					argv_1993 = cli_ptr->argv_3009->argv_3472 (*(cli_ptr->argv_2369));
				}
			}
		}

		if (argv_1993 == argv_3026) { // remap error argv_929
			argv_1993 = argv_976; 
		}

		if (cli_ptr != argv_2889) {
			cli_ptr->argv_2135 = argv_1993;
		}

		if (argv_1993 != argv_976) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_974
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2263: argv_635 of the com client obtained by a previous
// @@ call to the 'argv_964' function.
// @@
// @@ _filename: argv_820 : argv_2817 of the remote argv_1396 to scan for viruses.
// @@
// @@ _dysinfect: bool: set to true if dysinfection is to be argv_1261.
// @@                   set to false otherwise.
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
// @@ This function permits to perform the scan of a local argv_1396
// @@ when the scan server is located on another host, thus in
// @@ order to perform the scan, this function sends the entire
// @@ argv_1396 content to the remote scan server.
// @@ The caller can choose to attempt a dysinfection if necessary
// @@ via the '_dysinfect' parameter.
// @@ the argv_3402 of the scan may be obtained by a call to the
// @@ 'com_client_get_remote_result' function.
// @@
// @@ WARNING: this function is much slower than the 
// @@ 'argv_973' function (because it sends the argv_1396
// @@  content to the scan server) and thus should not be used when 
// @@ the scan client and scan server are located on the same host. 
// @@
// @@ Notice that the caller is suposed to have connected the com
// @@ argv_2908 using the 'argv_963' prior to this call.
// @@
// @@ CONTRACT		:
// @@ - '_cli_ptr'  parameter must not be a argv_2889 pointer.
// @@ - '_filename' parameter must not be a argv_2889 pointer.		
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_974 (argv_2263 _cli_ptr, argv_820 _filename, bool _dysinfect) {
		bool bret = true;
		
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if ((cli_ptr == argv_2889) || (_filename == argv_2889)) { // parameters are OK
			argv_1993 = argv_970;
		}
		else if (argv_851 (_filename) == false) {
			argv_1993 = argv_972;
		}
		else { // parameters are OK
			argv_1993 = cli_ptr->argv_3009->reset ();
			if (argv_1993 == argv_3026) { // packet was reseted succesfully
				argv_3862 his_type		= argv_3055;

				if (_dysinfect == true) {
					his_type		= argv_3051;
				}

				argv_1993 = cli_ptr->argv_3009->argv_3476 (_filename, *(cli_ptr->argv_2369), his_type, false);
			}
		}

		if (argv_1993 == argv_3026) { // remap error argv_929
			argv_1993 = argv_976; 
		}

		if (cli_ptr != argv_2889) {
			cli_ptr->argv_2135 = argv_1993;
		}

		if (argv_1993 != argv_976) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	com_client_get_local_result	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2263: argv_635 of the com client obtained by a previous
// @@ call to the 'argv_964' function.
// @@
// @@ _socket_timeout: argv_3517: the maximum argv_3549 inactivity duration expressed
// @@    in second (set to -1 for INFINITE).
// @@
// @@ OUTPUT		:
// @@ _scan_success: bool&: true of the scanning operation was succesful,
// @@                       false otherwise.	
// @@
// @@ _infected: bool&: true if a virus was found during scanning,
// @@                   false otherwise (notice that this field is meaningful
// @@                   only when '_scan_success' is true).
// @@
// @@ _dysinfect_possible: true if the infected argv_1396 can be dysinfected,
// @@                      false otherwise (notice that this field is meaningful
// @@                      only when '_infected' is true).
// @@ 
// @@ _virus_name: argv_1063: argv_2817 of the virus found (notice that this field is 
// @@                    meaningful only  when '_infected' is true).
// @@                    Notice that this field should have been allocated by the
// @@                    caller to a size of MAX_PATH.
// @@ 
// @@ _dysinfect_done: bool& : true if dysinfection was performed,
// @@                          false otherwise (notice that this field is meaningful
// @@                          only if '_infected' and '_dysinfect_possible' are true).
// @@
// @@ _dysinfect_success: bool&: true if the dysinfection succeeded, 
// @@                            false otherwise (notice that this field is meaningful
// @@                            only if '_infected' and '_dysinfect_possible' and 
// @@                            '_dysinfect_done' are true).
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
// @@ This function permits to obtain the argv_3402 of the 'argv_973'
// @@ function.
// @@ Notice that the argv_3402 fields have dependancies (see parameters description).
// @@ For information, the detailed description of the scanning server
// @@ answer is as follows :
// @@ BODY DESCRIPTION:
// @@ - scan success				(1)  : 0= success, 1=failed
// @@ - infection flag				(1)	 : 0= not infected, 1=infected
// @@ - dysinfection possible		(1)  : 0= not possible, 1=possible
// @@ - dysinfection argv_1261 flag		(1)	 : 0=not argv_1261, 1=argv_1261
// @@ - dysinfection report flag	(1)	 : 0=failed, 1=success
// @@ - {virus argv_2817}				(??) : empty if infected_flag=0
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_local_result (argv_2263 _cli_ptr, argv_3517 _socket_timeout, bool& _scan_success, bool& _infected, bool& _dysinfect_possible, argv_1063 _virus_name, bool& _dysinfect_done, bool& _dysinfect_success) {
		bool bret			= true;

		_scan_success		= false;
		_infected			= false;
		_dysinfect_possible	= false;
		_dysinfect_done		= false;
		_dysinfect_success	= false;

		argv_3517 argv_1993 = argv_976;
		_virus_name[0] = '\0';

		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if (cli_ptr == argv_2889) { // parameters are OK
			argv_1993 = argv_970;
		}
		else { // parameters are OK
			argv_1993 = cli_ptr->argv_3009->reset ();

			if (argv_1993 == argv_3026) { // packet was reseted succesfully
				argv_1993 = cli_ptr->argv_3009->argv_3333 (*(cli_ptr->argv_2369), _socket_timeout, false);

				if (argv_1993 == argv_3026) { // packet received succesfully
					// argv_1371 the received packet argv_3842
					argv_3862 his_type = argv_3065;
					argv_1993 = cli_ptr->argv_3009->argv_1783 (his_type);
					if (argv_1993 == argv_3026) { // argv_3842 extraction succeeded
						argv_3862 scan_success_UI08				= 0;
						argv_3862 infection_flag_UI08			= 0;
						argv_3862 dysinfect_possible_flag_UI08	= 0;
						argv_3862 dysinf_done_flag_UI08			= 0;
						argv_3862 dysinf_report_flag_UI08		= 0;

						if (argv_1993 == argv_3026) {
							argv_1993 = cli_ptr->argv_3009->argv_1371 (scan_success_UI08);
						}
						if (argv_1993 == argv_3026) {
							argv_1993 = cli_ptr->argv_3009->argv_1371 (infection_flag_UI08);
						}
						if (argv_1993 == argv_3026) {
							argv_1993 = cli_ptr->argv_3009->argv_1371 (dysinfect_possible_flag_UI08);
						}
						if (argv_1993 == argv_3026) {
							argv_1993 = cli_ptr->argv_3009->argv_1371 (dysinf_done_flag_UI08);
						}
						if (argv_1993 == argv_3026) {
							argv_1993 = cli_ptr->argv_3009->argv_1371 (dysinf_report_flag_UI08);
						}

						if ((argv_1993 == argv_3026) && (infection_flag_UI08 == 1)) {
							string argv_3980;
							argv_1993 = cli_ptr->argv_3009->argv_1371 (argv_3980);
							if (argv_1993 == argv_3026) {
								argv_3864 nb_todo = argv_3980.size();
								if (nb_todo > MAX_PATH) {
									nb_todo = MAX_PATH;
								}
								strncpy (_virus_name, argv_3980.c_str(), nb_todo);
								_virus_name[nb_todo - 1] = '\0';
							}
						}

						if (argv_1993 == argv_3026) { // all argv_1139 retrieved succesfully
							if (scan_success_UI08 == 1) {
								_scan_success		= true;
							}
							if (infection_flag_UI08 == 1) {
								_infected			= true;
							}
							if (dysinfect_possible_flag_UI08 == 1) {
								_dysinfect_possible	= true;	
							}
							if (dysinf_done_flag_UI08 == 1) {
								_dysinfect_done		= true;
							}
							if (dysinf_report_flag_UI08 == 1) {
								_dysinfect_success	= true;
							}
						}
					}
				}
			}
		}

		if (argv_1993 == argv_3026) { // remap error argv_929
			argv_1993 = argv_976; 
		}

		if (cli_ptr != argv_2889) {
			cli_ptr->argv_2135 = argv_1993;
		}

		if (argv_1993 != argv_976) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	com_client_get_remote_result	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2263: argv_635 of the com client obtained by a previous
// @@ call to the 'argv_964' function.
// @@
// @@ _socket_timeout: argv_3517: the maximum argv_3549 inactivity duration expressed
// @@    in second (set to -1 for INFINITE).
// @@
// @@ _dest_filename: argv_2817 of the local argv_1396 that must contain the argv_3402
// @@   of the dysinfection (in case of infection).
// @@
// @@ OUTPUT		:
// @@ _scan_success: bool&: true of the scanning operation was succesful,
// @@                       false otherwise.	
// @@
// @@ _infected: bool&: true if a virus was found during scanning,
// @@                   false otherwise (notice that this field is meaningful
// @@                   only when '_scan_success' is true).
// @@
// @@ _dysinfect_possible: true if the infected argv_1396 can be dysinfected,
// @@                      false otherwise (notice that this field is meaningful
// @@                      only when '_infected' is true).
// @@ 
// @@ _virus_name: argv_1063: argv_2817 of the virus found (notice that this field is 
// @@                    meaningful only  when '_infected' is true).
// @@                    Notice that this field should have been allocated by the
// @@                    caller to a size of MAX_PATH.
// @@ 
// @@ _dysinfect_done: bool& : true if dysinfection was performed,
// @@                          false otherwise (notice that this field is meaningful
// @@                          only if '_infected' and '_dysinfect_possible' are true).
// @@
// @@ _dysinfect_success: bool&: true if the dysinfection succeeded, 
// @@                            false otherwise (notice that this field is meaningful
// @@                            only if '_infected' and '_dysinfect_possible' and 
// @@                            '_dysinfect_done' are true).
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
// @@ This function permits to obtain the argv_3402 of the 'argv_974'
// @@ function.
// @@ Notice that the argv_3402 fields have dependancies (see parameters description).
// @@ For information, the detailed description of the scanning server
// @@ answer is as follows :
// @@ BODY DESCRIPTION:
// @@ - scan success				(1)  : 0= success, 1=failed
// @@ - infection flag				(1)	 : 0= not infected, 1=infected
// @@ - dysinfection possible		(1)  : 0= not possible, 1=possible
// @@ - dysinfection argv_1261 flag		(1)	 : 0=not argv_1261, 1=argv_1261
// @@ - dysinfection report flag	(1)	 : 0=failed, 1=success
// @@ - {virus argv_2817}				(??) : empty if infected_flag=0
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_remote_result (argv_2263 _cli_ptr, argv_3517 _timeout_second, argv_820 _dest_filename, bool& _scan_success, bool& _infected, bool& _dysinfect_possible, argv_1063 _virus_name, bool& _dysinfect_done, bool& _dysinfect_success) {
		bool bret = true;
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if ((cli_ptr == argv_2889) || (_dest_filename == argv_2889)) { // parameters are OK
			argv_1993 = argv_970;
		}
		else { // parameters are OK
			argv_1993 = cli_ptr->argv_3009->reset ();
			if (argv_1993 == argv_3026) { // packet was reseted succesfully
				bret = com_client_get_local_result (_cli_ptr, _timeout_second, _scan_success, _infected, _dysinfect_possible, _virus_name, _dysinfect_done, _dysinfect_success);

				if (bret == true) { // scan report received succesfully
					argv_1993 = cli_ptr->argv_3009->reset ();

					// read the dysinfected argv_1396 if necessary
					if ((argv_1993 == argv_3026) && (_infected==true) && (_dysinfect_done==true) && (_dysinfect_success == true))  { 
						argv_1993 = cli_ptr->argv_3009->argv_3336 (*(cli_ptr->argv_2369), _timeout_second, _dest_filename);
					}
				}
			}
		}

		if (argv_1993 == argv_3026) { // remap error argv_929
			argv_1993 = argv_976; 
		}

		if (cli_ptr != argv_2889) {
			cli_ptr->argv_2135 = argv_1993;
		}

		if (argv_1993 != argv_976) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_966
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2263: argv_635 of the com client obtained by a previous
// @@ call to the 'argv_964' function.
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
// @@ This function permits to disconnect the com client from the
// @@ scanning server.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_966 (argv_2263 _cli_ptr) {
		bool bret = true;
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if (cli_ptr == argv_2889) { // parameters are OK
			argv_1993 = argv_970;
		}
		else { // parameters are OK
			argv_1993 = cli_ptr->argv_2369->argv_922 ();
		}

		if (argv_1993 == argv_2380) { // remap error argv_929
			argv_1993 = argv_976; 
		}

		if (cli_ptr != argv_2889) {
			cli_ptr->argv_2135 = argv_1993;
		}

		if (argv_1993 != argv_976) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	com_client_get_last_error
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2263: argv_635 of the com client obtained by a previous
// @@ call to the 'argv_964' function.
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
// @@ com client as a string.
// @@ 
// @@ Notice that the caller is supposed to have allocated the 
// @@ '_serror' argv_771 (to MAX_PATH size) prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 com_client_get_last_error (argv_2263 _cli_ptr, argv_1063 _serror) {
		argv_3517 retrieved_last_error = argv_976;	
		_serror[0] = '\0';
		if (_cli_ptr == argv_2889) {
			retrieved_last_error = argv_969;
		}
		else {
			argv_3457 * cli_ptr	= (argv_3457 *) _cli_ptr;
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
*/

// ============================================================================
// ============================================================================
// ============================================================================
// ============================================================================
// ============================================================================
// ============================================================================
// WARNING: this function is not exported by the DLL (internal use only).
argv_3517 internal_connect_unit (argv_3459& _unit,  argv_820 _servname, argv_3864 _servport) {
	argv_3517 argv_1993 = argv_976;
	_unit.argv_2352.reset ();
	argv_1993 = _unit.argv_2352.argv_3239 (_servname, _servport);
	if (argv_1993 == argv_2380) { // remap error argv_929
		argv_1993 = argv_976;
	}
	return (argv_1993);
}

argv_3517 internal_prepare_packet (argv_1057& _pck, vector<argv_819>& _v_atom, argv_3862 _type) {
	argv_3517 argv_1993 = argv_976;
	argv_1993 = _pck.reset ();
	if (argv_1993 == argv_3026) { // packet was reseted succesfully
		argv_1993 = _pck.argv_3501 (_type);

		if (argv_1993 == argv_3026) {
			argv_3864 argv_2866 = _v_atom.size ();
			for (argv_3864 i=0 ; i<argv_2866 ; i++) {
				switch (_v_atom[i].argv_3842) {
					case argv_1046:
						argv_1993 = _pck.insert (_v_atom[i].argv_3963);
						break;

					case argv_1047:
						argv_1993 = _pck.insert (_v_atom[i].argv_3964);
						break;

					case argv_1045:
						argv_1993 = _pck.insert (_v_atom[i].argv_3962);
						break;

					default:
						argv_1993 = argv_977;
						break;
				}

				if (argv_1993 != argv_3026) {
					break;
				}
			}
		}

		if (argv_1993 == argv_3026) { // argv_2955 the packet so that it can be ready
			argv_1993 = _pck.argv_2955 ();
		}
	}

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_976;
	}
	return (argv_1993);
}

// used by the function that retrieves a remote dysinfected argv_1396.
void internal_generate_unique_tmp_filename (argv_820 _tmp_folder, argv_3864& _generation, argv_1063 _dest_filename) {
	SYSTEMTIME		argv_3824;
	GetLocalTime (&argv_3824);
	argv_3548 (_dest_filename, MAX_PATH, "%s\\com_%u_%u_%u_%u_%u_%u_%u_%u.argv_3828", _tmp_folder, argv_3824.wYear, argv_3824.wMonth, argv_3824.wDay, argv_3824.wHour, argv_3824.wMinute, argv_3824.wSecond, argv_3824.wMilliseconds, _generation);
	_generation++;
	_dest_filename[MAX_PATH - 1] = '\0';
}

void internal_reset_result (argv_3458& _result) {
	_result.argv_1195[0]		= '\0';
	_result.argv_1274		= false;
	_result.argv_1275	= false;
	_result.argv_1276	= false;
	_result.infected				= false;
	_result.argv_2869		= 0;
	_result.argv_3454			= false;
	_result.argv_3842					= argv_3065;
	_result.argv_3980[0]			= '\0';
}

// -------------------------------------------------------

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_995 () {
		argv_3517 argv_1993 = argv_976;
#if defined (__WIN32_OS__) 
		argv_3251 ();
#endif // #if defined (__WIN32_OS__) 
		return (argv_1993);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_996 () {
		argv_3517 argv_1993 = argv_976;
#if defined (__WIN32_OS__) 
		argv_3738 ();
#endif // #if defined (__WIN32_OS__) 
		return (argv_1993);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_964 (argv_2263 * _cli_ptr_ptr, argv_820 _tmp_folder) {
		argv_3457 ** cli_ptr_ptr = (argv_3457 **) _cli_ptr_ptr;
		argv_3517 argv_1993 = argv_976;
		if ((cli_ptr_ptr == argv_2889) || (_tmp_folder == argv_2889)) {
			argv_1993 = argv_970;
		}
		else if (*cli_ptr_ptr != argv_2889) {
			argv_1993 = argv_968;
		}
		else { // allocate the client structure
			*cli_ptr_ptr = new (std::nothrow) argv_3457; 
			if ((*cli_ptr_ptr) == argv_2889) {
				argv_1993 = argv_971;
			}
			else { // memory allocation was succesful for the client structure
				(*cli_ptr_ptr)->argv_3831			= _tmp_folder; 
				(*cli_ptr_ptr)->argv_3832		= 0;
			}
		} 
		return (argv_1993);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_965 (argv_2263 _cli_ptr) {
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if (cli_ptr == argv_2889) {
			argv_1993 = argv_970;
		}
		else { // parameters are OK
			delete cli_ptr;
		}
		return (argv_1993);
	}
}

argv_3517 internal_update_maxfd (argv_2263 _cli_ptr) {
	argv_3517 argv_1993 = argv_976;
	argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
	argv_3550 * sock_ptr_1 = argv_2889;
	argv_3550 * sock_ptr_2 = argv_2889;

	argv_1993 = cli_ptr->argv_719.argv_2352.argv_1741 ((argv_2263&) sock_ptr_1);
	if (argv_1993 == argv_2380) {
		argv_1993 = cli_ptr->argv_3455.argv_2352.argv_1741 ((argv_2263&) sock_ptr_2);
		if (argv_1993 == argv_2380) { // all descriptors retrieved succesfully

			cli_ptr->argv_719.argv_3549	= (*sock_ptr_1);
			cli_ptr->argv_3455.argv_3549		= (*sock_ptr_2);

			cli_ptr->argv_3469.argv_2339		= cli_ptr->argv_719.argv_3549;
			if (cli_ptr->argv_3455.argv_3549 > cli_ptr->argv_3469.argv_2339) {
				cli_ptr->argv_3469.argv_2339	= cli_ptr->argv_3455.argv_3549;
			}
/*
			{
				char argv_3828[MAX_PATH];
				argv_3548 (argv_3828, MAX_PATH, "archive_socket=%d, scan_unit_socket=%d => argv_2339=%d", cli_ptr->argv_719.argv_3549, cli_ptr->argv_3455.argv_3549, cli_ptr->argv_3469.argv_2339);
				argv_3828[MAX_PATH - 1] = '\0';
				MessageBox (argv_2889, argv_3828, "", MB_OK);
			}*/
			// argv_3237 the select argv_1139
			FD_ZERO (&cli_ptr->argv_3469.readfds);
			FD_ZERO (&cli_ptr->argv_3469.readfds_dirty);

			FD_SET (cli_ptr->argv_719.argv_3549,	&cli_ptr->argv_3469.readfds);
			FD_SET (cli_ptr->argv_3455.argv_3549,		&cli_ptr->argv_3469.readfds);
			cli_ptr->argv_3469.argv_2339 = 0;
		}
	}

	if (argv_1993 == argv_2380) {
		argv_1993 = argv_976;
	}
	return (argv_1993);
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_963 (argv_2263 _cli_ptr, argv_820 _servname, argv_3864 _archive_port, argv_3864 _scan_port) {
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if ((cli_ptr == argv_2889) || (_servname == argv_2889)) { // parameters are OK
			argv_1993 = argv_970;
		}
		else { // parameters are OK
			argv_1993 = internal_connect_unit (cli_ptr->argv_719, _servname, _archive_port);
			if (argv_1993 == argv_976) {
				argv_1993 = internal_connect_unit (cli_ptr->argv_3455, _servname, _scan_port);
				if (argv_1993 == argv_976) {
					// update argv_2339 for select using the 2 descriptors.
					argv_1993 = internal_update_maxfd (_cli_ptr);
				}
			}
		}
		return (argv_1993);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_966 (argv_2263 _cli_ptr) {
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if (cli_ptr == argv_2889) { // parameters are OK
			argv_1993 = argv_970;
		}
		else { // parameters are OK
			argv_3517 iret_1 = cli_ptr->argv_719.argv_2352.argv_922 ();
			argv_3517 iret_2 = cli_ptr->argv_3455.argv_2352.argv_922 ();

			// gather only argv_2929 error out of all possible errors
			if (iret_1 != argv_2380) {
				argv_1993 = iret_1;
			}
			else if (iret_2 != argv_2380) {
				argv_1993 = iret_2;
			}
		}

		if (argv_1993 == argv_2380) { // remap error argv_929
			argv_1993 = argv_976; 
		}
		return (argv_1993);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_973 (argv_2263 _cli_ptr, argv_820 _filename, bool _dysinfect) {
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if ((cli_ptr == argv_2889) || (_filename == argv_2889)) { // parameters are OK
			argv_1993 = argv_970;
		}
		else { // parameters are OK
			argv_3862 his_type		= argv_3053;

			if (_dysinfect == true) {
				his_type		= argv_3049;
			}
			vector<argv_819> v_atom;
			argv_617 (_filename, v_atom);

			argv_1993 = internal_prepare_packet (cli_ptr->argv_3455.argv_3014, v_atom, his_type);
			if (argv_1993 == argv_976) { // argv_3472 the packet to the server
				argv_1993 = cli_ptr->argv_3455.argv_3014.argv_3472 (cli_ptr->argv_3455.argv_2352);
			}
		}

		if (argv_1993 == argv_3026) { // remap error argv_929
			argv_1993 = argv_976; 
		}
		return (argv_1993);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_974 (argv_2263 _cli_ptr, argv_820 _filename, bool _dysinfect) {
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if ((cli_ptr == argv_2889) || (_filename == argv_2889)) { // parameters are OK
			argv_1993 = argv_970;
		}
		else if (argv_851 (_filename) == false) {
			argv_1993 = argv_972;
		}
		else { // parameters are OK
			argv_1993 = cli_ptr->argv_3455.argv_3014.reset ();
			if (argv_1993 == argv_3026) { // packet was reseted succesfully
				argv_3862 opa_type	= argv_3055;

				if (_dysinfect == true) {
					opa_type	= argv_3051;
				}

				argv_1993 = cli_ptr->argv_3455.argv_3014.argv_3476 (_filename, cli_ptr->argv_3455.argv_2352, opa_type, false);
			}
		}

		if (argv_1993 == argv_3026) { // remap error argv_929
			argv_1993 = argv_976; 
		}
		return (argv_1993);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_967 (argv_2263 _cli_ptr, argv_820 _archive_file, argv_820 _dest_root_folder) {
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if ((cli_ptr == argv_2889) || (_archive_file == argv_2889) || (_dest_root_folder == argv_2889)) {
			argv_1993 = argv_970;
		}
		else { // parameters correctness succesfuly checked
			argv_3862 opa_type = argv_3036;
			vector<argv_819> v_atom;
			argv_617 (_archive_file, v_atom);
			argv_617 (_dest_root_folder, v_atom);

			argv_1993 = internal_prepare_packet (cli_ptr->argv_719.argv_3014, v_atom, opa_type);
			if (argv_1993 == argv_976) { // argv_3472 the packet to the server
				argv_1993 = cli_ptr->argv_719.argv_3014.argv_3472 (cli_ptr->argv_719.argv_2352);
			}
		}

		if (argv_1993 == argv_3026) { // remap error argv_929
			argv_1993 = argv_976; 
		}
		return (argv_1993);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_962 (argv_2263 _cli_ptr, argv_820 _folder_2_compress, argv_820 _result_filename) {
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		if ((cli_ptr == argv_2889) || (_folder_2_compress == argv_2889) || (_result_filename == argv_2889)) {
			argv_1993 = argv_970;
		}
		else { // parameters correctness succesfuly checked
			argv_3862 opa_type = argv_3033;
			vector<argv_819> v_atom;
			argv_617 (_folder_2_compress, v_atom);
			argv_617 (_result_filename, v_atom);

			argv_1993 = internal_prepare_packet (cli_ptr->argv_719.argv_3014, v_atom, opa_type);
			if (argv_1993 == argv_976) { // argv_3472 the packet to the server
				argv_1993 = cli_ptr->argv_719.argv_3014.argv_3472 (cli_ptr->argv_719.argv_2352);
			}
		}

		if (argv_1993 == argv_3026) { // remap error argv_929
			argv_1993 = argv_976; 
		}
		return (argv_1993);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_961 (argv_2263 _cli_ptr) {
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;

		argv_3862 opa_type = argv_3032;
		vector<argv_819> v_atom;
		argv_3864 unused_UI32 = 0; // because empty packets are not allowed
		argv_617 (unused_UI32, v_atom);

		argv_1993 = internal_prepare_packet (cli_ptr->argv_719.argv_3014, v_atom, opa_type);
		if (argv_1993 == argv_976) { // argv_3472 the packet to the server
			argv_1993 = cli_ptr->argv_719.argv_3014.argv_3472 (cli_ptr->argv_719.argv_2352);
		}

		if (argv_1993 == argv_3026) { // remap error argv_929
			argv_1993 = argv_976; 
		}
		return (argv_1993);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_960 (argv_2263 _cli_ptr) {
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;

		argv_3862 opa_type = argv_3031;
		vector<argv_819> v_atom;
		argv_3864 unused_UI32 = 0; // because empty packets are not allowed
		argv_617 (unused_UI32, v_atom);

		argv_1993 = internal_prepare_packet (cli_ptr->argv_719.argv_3014, v_atom, opa_type);
		if (argv_1993 == argv_976) { // argv_3472 the packet to the server
			argv_1993 = cli_ptr->argv_719.argv_3014.argv_3472 (cli_ptr->argv_719.argv_2352);
		}

		if (argv_1993 == argv_3026) { // remap error argv_929
			argv_1993 = argv_976; 
		}
		return (argv_1993);
	}
}

argv_3517 internal_check_select_return_code (argv_3517 _nb_ready, bool& _must_continue) {
	argv_3517 argv_1993		= argv_976;
	_must_continue	= false;
#if defined (__WIN32_OS__)
	if (_nb_ready == SOCKET_ERROR) {
		{
			argv_3517 argv_1318	= WSAGetLastError ();
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "select failed (errno=%d)", argv_1318);
			argv_3828[MAX_PATH - 1] = '\0';
			MessageBox (argv_2889, argv_3828, "", MB_OK);
		}
		argv_1993 = argv_975;
	}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (nb_ready < 0) {
		if (errno == EINTR) {
			_must_continue = true;
		}
		else {
			argv_1993 = argv_975; // real select error occured
		}
	}
#endif // #if defined (__LINUX_OS__)
	return (argv_1993);
}


void internal_affiche_UI08 (argv_820 _name, argv_3862 _value) {
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "%s : %d", _name, _value);
	argv_3828[MAX_PATH - 1] = '\0';
	MessageBox (argv_2889, argv_3828, "", MB_OK);
}

// argv_1371 the fields from the received packet
// @@ BODY DESCRIPTION:
// @@ - argv_2817 of the concerned argv_1396 (string)
// @@ - scan success				(1)  : 0= success, 1=failed
// @@ - infection flag				(1)	 : 0= not infected, 1=infected
// @@ - dysinfection possible		(1)  : 0= not possible, 1=possible
// @@ - dysinfection argv_1261 flag		(1)	 : 0=not argv_1261, 1=argv_1261
// @@ - dysinfection report flag	(1)	 : 0=failed, 1=success
// @@ - argv_1277	(4)  (see "general_avx.hpp")
// @@ - {virus argv_2817}				(??) : empty if infected_flag=0
argv_3517 internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT (argv_2263 _cli_ptr, argv_3459& _com_unit, argv_3458 * _result_ptr) {
	argv_3517 argv_1993 = argv_976;
	argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;

	argv_3862	scan_success_UI08				= 0;
	argv_3862	infection_flag_UI08				= 0;
	argv_3862	dysinfect_possible_flag_UI08	= 0;
	argv_3862	dysinf_done_flag_UI08			= 0;
	argv_3862	dysinf_report_flag_UI08			= 0;
	string	argv_1113;

	argv_1993 = _com_unit.argv_3010.argv_1371 (argv_1113);

	if (argv_1993 == argv_3026) {
		argv_1993 = _com_unit.argv_3010.argv_1371 (scan_success_UI08);
		//internal_affiche_UI08 ("argv_3454", scan_success_UI08);
	}

	if (argv_1993 == argv_3026) {
		argv_1993 = _com_unit.argv_3010.argv_1371 (infection_flag_UI08);
		//internal_affiche_UI08 ("infection_flag", infection_flag_UI08);
	}
	if (argv_1993 == argv_3026) {
		argv_1993 = _com_unit.argv_3010.argv_1371 (dysinfect_possible_flag_UI08);
		//internal_affiche_UI08 ("argv_1272", dysinfect_possible_flag_UI08);
	}
	if (argv_1993 == argv_3026) {
		argv_1993 = _com_unit.argv_3010.argv_1371 (dysinf_done_flag_UI08);
		//internal_affiche_UI08 ("dysinf_done_flag", dysinf_done_flag_UI08);
	}
	if (argv_1993 == argv_3026) {
		argv_1993 = _com_unit.argv_3010.argv_1371 (dysinf_report_flag_UI08);
		//internal_affiche_UI08 ("dysinf_result_flag", dysinf_report_flag_UI08);
	}

	if (argv_1993 == argv_3026) { // argv_3517
		argv_3864 retcode_tmp = DYSINFECT_UNDEFINED_VALUE;
		argv_1993 = _com_unit.argv_3010.argv_1371 (retcode_tmp);
		_result_ptr->argv_1277 = (argv_3517) retcode_tmp;
	}

	if ((argv_1993 == argv_3026) && (infection_flag_UI08 == 1)) {
		string argv_3980;
		argv_1993 = _com_unit.argv_3010.argv_1371 (argv_3980);
		if (argv_1993 == argv_3026) {
			argv_3864 virus_name_length = argv_3980.size();
			
			if (virus_name_length > MAX_PATH) {
				strncpy (_result_ptr->argv_3980, argv_3980.c_str(), MAX_PATH);
				_result_ptr->argv_3980[MAX_PATH - 1] = '\0';
			}
			else {
				strncpy (_result_ptr->argv_3980, argv_3980.c_str(), virus_name_length);
				_result_ptr->argv_3980[virus_name_length] = '\0';
			}
		}
	}

	if (argv_1993 == argv_3026) { // all argv_1139 retrieved succesfully
		strncpy (_result_ptr->argv_1113, argv_1113.c_str(), MAX_PATH);
		_result_ptr->argv_1113[MAX_PATH - 1] = '\0';

		if (scan_success_UI08 == 1) {
			_result_ptr->argv_3454			= true;
		}
		if (infection_flag_UI08 == 1) {
			_result_ptr->infected				= true;
		}
		if (dysinfect_possible_flag_UI08 == 1) {
			_result_ptr->argv_1275	= true;	
		}
		if (dysinf_done_flag_UI08 == 1) {
			_result_ptr->argv_1274		= true;
		}
		if (dysinf_report_flag_UI08 == 1) {
			_result_ptr->argv_1276	= true;
		}
	}

	if (argv_1993 == argv_3026) { // remap error argv_929
		argv_1993 = argv_976;
	}
	return (argv_1993);
}

argv_3517 internal_process_packet_PCK_TYPE_SCAN_REMOTE_RESULT (argv_2263 _cli_ptr, argv_3459& _com_unit, argv_3458 * _result_ptr) {
	argv_3517 argv_1993 = argv_976;
	argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;

	argv_1993 = internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT (_cli_ptr, _com_unit, _result_ptr);
	if (argv_1993 == argv_976) {
		argv_1993 = _com_unit.argv_3010.reset ();

		// read the dysinfected argv_1396 if necessary
		if ((argv_1993 == argv_3026) && (_result_ptr->infected==true) && (_result_ptr->argv_1274==true) && (_result_ptr->argv_1276 == true))  {
			// generate a unique temporary argv_1446
			internal_generate_unique_tmp_filename (cli_ptr->argv_3831.c_str(), cli_ptr->argv_3832, _result_ptr->argv_1195);
			// receive the dysinfected argv_1396.
			argv_1993 = _com_unit.argv_3010.argv_3336 (_com_unit.argv_2352, cli_ptr->argv_3551, _result_ptr->argv_1195);
		}
	}
	return (argv_1993);
}


// - argv_3862: argv_3402: 0= success, 1=failed
// - argv_3864: number of files in the archive (non-recursively)
//   (not relevant if argv_3402 is "failed")
argv_3517 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_LIST_RESULT (argv_2263 _cli_ptr, argv_3459& _com_unit, argv_3458 * _result_ptr) {
	argv_3517 argv_1993 = argv_976;
	argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;

	argv_1993 = _com_unit.argv_3010.argv_1371 (_result_ptr->argv_2933);
	if (argv_1993 == argv_3026) {
		argv_1993 = _com_unit.argv_3010.argv_1371 (_result_ptr->argv_2869);
	}

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_976;
	}
	return (argv_1993);
}

// a single argv_1446 that was extracted is sent to us (relative path)
// so it is up to the caller to rebuild a full pathname using the temporary root
// he sent to the COM manager when sending it's request.
argv_3517 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_RESULT (argv_2263 _cli_ptr, argv_3459& _com_unit, argv_3458 * _result_ptr) {
	argv_3517 argv_1993 = argv_976;
	argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
	// retrieve the number of elements of this archive
	argv_1993 = _com_unit.argv_3010.argv_1371 (_result_ptr->argv_2866);
	if (argv_1993 == argv_3026) {
		// retrieve the argv_1106 element's argv_1915
		argv_1993 = _com_unit.argv_3010.argv_1371 (_result_ptr->argv_1110);
		if (argv_1993 == argv_3026) {
			// retrieve the argv_1106 element's argv_2817
			argv_1993 = _com_unit.argv_3010.argv_1371 (_result_ptr->argv_1380);
		}
	}

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_976;
	}
	return (argv_1993);
}

argv_3517 internal_process_packet_PCK_TYPE_ARCHIVE_CREATE_RESULT (argv_2263 _cli_ptr, argv_3459& _com_unit, argv_3458 * _result_ptr) {
	argv_3517 argv_1993 = argv_976;
	argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;

	argv_1993 = _com_unit.argv_3010.argv_1371 (_result_ptr->argv_2933);

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_976;
	}
	return (argv_1993);
}

argv_3517 internal_process_received_packet (argv_2263 _cli_ptr, argv_3459& _com_unit, argv_3458 * _result_ptr) {
	argv_3517 argv_1993 = argv_976;
	argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
	
	argv_1993 = _com_unit.argv_3010.argv_1783 (_result_ptr->argv_3842);
	if (argv_1993 == argv_3026) { // argv_3842 extraction succeeded
		switch (_result_ptr->argv_3842) {
			case argv_3054:
			case argv_3050:
				argv_1993 = internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_3056:
				argv_1993 = internal_process_packet_PCK_TYPE_SCAN_REMOTE_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_3035:
				argv_1993 = internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_LIST_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_3037:
				argv_1993 = internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_3034:
				argv_1993 = internal_process_packet_PCK_TYPE_ARCHIVE_CREATE_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;
		}
	}	

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_976;
	}
	return (argv_1993);
}

// process only argv_2929 ready descriptor (user must call it in a loop if necessary).
// we have 3 different sockets :
// - archive extractor argv_3549
// - archive creator argv_3549
// - scan argv_3549 (virus & spyware).
argv_3517 internal_process_ready_descriptors (argv_2263 _cli_ptr, argv_3517 _nb_ready, argv_3458 * _result_ptr) {
	argv_3517 argv_1993 = argv_976;
	argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;

	internal_reset_result (*_result_ptr);

	if (FD_ISSET (cli_ptr->argv_719.argv_3549, &cli_ptr->argv_3469.readfds_dirty)) {
		argv_1993 = cli_ptr->argv_719.argv_3010.reset ();
		if (argv_1993 == argv_3026) {
			argv_1993 = cli_ptr->argv_719.argv_3010.argv_3333 (cli_ptr->argv_719.argv_2352, cli_ptr->argv_3551, false);
			if (argv_1993 == argv_3026) { // packet received succesfully
				argv_1993 = internal_process_received_packet (_cli_ptr, cli_ptr->argv_719, _result_ptr);
			}
		}
	}
	else if (FD_ISSET (cli_ptr->argv_3455.argv_3549, &cli_ptr->argv_3469.readfds_dirty)) {
		argv_1993 = cli_ptr->argv_3455.argv_3010.reset ();
		if (argv_1993 == argv_3026) {
			argv_1993 = cli_ptr->argv_3455.argv_3010.argv_3333 (cli_ptr->argv_3455.argv_2352, cli_ptr->argv_3551, false);
			if (argv_1993 == argv_3026) { // packet received succesfully
				argv_1993 = internal_process_received_packet (_cli_ptr, cli_ptr->argv_3455, _result_ptr);
			}
		}
	}
	return (argv_1993);	
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	// pump a argv_2389 from any of the 3 possible sockets
	argv_3517 argv_3323 (argv_2263 _cli_ptr, argv_3458 * _result_ptr) {
		argv_3517 argv_1993 = argv_976;
		argv_3457 * cli_ptr = (argv_3457 *) _cli_ptr;
		
		argv_3517 nb_ready		= 0;
		bool must_continue	= true;
		while ((argv_1993 == argv_976) && (must_continue == true)) {
			cli_ptr->argv_3469.readfds_dirty = cli_ptr->argv_3469.readfds;	// because Linux modify the sets
			nb_ready = select ((cli_ptr->argv_3469.argv_2339)+1, &cli_ptr->argv_3469.readfds_dirty, argv_2889, argv_2889, argv_2889);
			/*
			{
				char argv_3828[MAX_PATH];
				argv_3548 (argv_3828, MAX_PATH, "select returned %d", nb_ready);
				argv_3828[MAX_PATH - 1] = '\0';
				MessageBox (argv_2889, argv_3828, "", MB_OK);
			}*/
			argv_1993 = internal_check_select_return_code (nb_ready, must_continue);

			if (argv_1993 == argv_976) {
				if (must_continue == true) { // when interrupted by a signal (linux).
					continue;
				}
				else { // select returned without any error
					// here we process the first argv_3549 ready, and the others are not 
					// processed, the user must call 'argv_3323' several times
					// if he wants to retrieve all available messages.
					argv_1993 = internal_process_ready_descriptors (_cli_ptr, nb_ready, _result_ptr);
				}
			}
		}
		return (argv_1993);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


