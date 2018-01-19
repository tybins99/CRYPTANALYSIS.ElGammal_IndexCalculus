// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_266.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the argv_1139 structures
// @@ and objects that permit to use the 
// @@ platform independant kernel
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_333.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:		
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
// @@ normal constructor of the argv_889 argv_2908.
// @@ it sets all fields to their initial argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_889::argv_889 () {
	argv_1911 = argv_2889;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
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
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to set all fields of the 
// @@ 'argv_889' to their initial argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_889::reset () {
	argv_2096							= argv_2889;
	argv_2038							= argv_2889;
	argv_3453						= argv_2889;
	argv_2240								= argv_2889;
	argv_3604								= argv_2081;
	
	argv_2135							= 0;
	argv_3409							= "";
	argv_1038						= "";
	argv_2236						= "";
	argv_1247						= "";
	argv_3138					= "";
	argv_3829					= "";
	argv_3426					= "kernel_scan_buffer";
	argv_1271					= "kernel_dysinfect";		
	argv_2039	= "kernel_deallocate_all_atoms";	
	argv_1775				= "kernel_get_scan_report";
	argv_2084			= "kernel_NATIVE_free";

#if defined (__LINUX_OS__)
	argv_3484						= "/";
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	argv_3484						= "\\";
#endif // #if defined (__WIN32_OS__) 

	argv_1631			= argv_2889;
	argv_1634			= argv_2889;
	argv_1628				= argv_2889;
	argv_1700			= argv_2889;
	argv_1638			= argv_2889;
	argv_1637	= argv_2889;
	argv_1639			= argv_2889;

	argv_1647			= argv_2889;
	argv_1644			= argv_2889;
	argv_1645		= argv_2889;
	argv_1646			= argv_2889;
	argv_1643= argv_2889;

	if (argv_1911 != argv_2889) {
		argv_3915 (); // ok if it fails
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:	
// @@ _dll_name: argv_820 : argv_2817 of the DLL of the kernel.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create a copy of the kernel DLL
// @@ the copy having a unique argv_2817, then to argv_2198 this copy
// @@ so that argv_2253 of exported functions can be performed.
// @@ The reason why we can't work on the actuall DLL argv_1396 is
// @@ because we must permit the update of this DLL (argv_1261 by
// @@ another part) without having to argv_3607 the service offered
// @@ by the currently running kernel.
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should not have already been argv_2221.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_2208 (argv_820 _dll_name) {
	argv_3517 argv_1993 = argv_2083; 

	if (argv_1911 != argv_2889) {
		argv_1993 = argv_2071;
	}
	else { // library not argv_2221 yet
		if (_dll_name == argv_2889) {
			argv_1993 = argv_2073;
		}
		else if (argv_851 (_dll_name) == false) {
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: kernel_manager dll argv_1396 can not be found : ", _dll_name);
			argv_1993 = argv_2078;
		}
		else { // parameters are OK
			// copy the kernel dll to temporary
			if (argv_3829 != "") {
				argv_1993 = argv_2069;
			}
			else { 
				string suffix;
#if defined (__WIN32_OS__) 
				suffix = "dll.delme";
#endif
#if defined (__LINUX_OS__)
				suffix = "so.delme";
#endif //#if defined (__LINUX_OS__)

				argv_1993 = argv_1731 (argv_1247.c_str(), _dll_name, "kernel_api", suffix.c_str(), argv_3829); 

				if (argv_1993 != 0) {
					argv_1993 = argv_2067;
				}
				else { // dll succesfully copied to temporary
					argv_1993 = argv_2083;
#if defined (__DEBUG_KERNEL_MANAGER__)
					argv_2240->argv_2247 (argv_2886, "kernel manager - argv_2208 : copied DLL to temporary : ", argv_3829.c_str());
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)

					#if defined (__WIN32_OS__) 
						argv_1911 = LoadLibrary (argv_3829.c_str());
					#endif // #if defined (__WIN32_OS__) 
					#if defined (__LINUX_OS__)
						argv_1911 = dlopen (argv_3829.c_str(), RTLD_NOW);
					#endif // #if defined (__LINUX_OS__)

					if (argv_1911 == argv_2889) {
#if defined (__LINUX_OS__)
						char * strerror = dlerror ();
						argv_2240->argv_2247 (argv_1321, "+++ ERROR: dlopen failed : ", strerror);
#endif // #if defined (__LINUX_OS__)
						argv_1993 = argv_2075;
					}
				}
			}
		}
	}

	argv_1213 ("argv_2208", argv_1993);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_3915			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to unload the kernel
// @@ library that was previously argv_2221, then as
// @@ the argv_2221 library was a copy of the original
// @@ argv_1396, the copy is deleted from argv_1396 system.
// @@
// @@ CONTRACT 		:
// @@ - the kernel library 	should have been argv_2221 prior 
// @@   to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_3915 () {
	argv_3517 argv_1993 = argv_2083; 
	if (argv_1911 == argv_2889) {
		argv_1993 = argv_2072;
	}
	else { // the library seems to have been argv_2221 before this call
#if defined (__WIN32_OS__) 
			if (FreeLibrary (argv_1911) == 0) {
				argv_1993 = argv_2076;	
			}
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
			if (dlclose (argv_1911) != 0) {
				argv_1993 = argv_2076;
			}
#endif // #if defined (__LINUX_OS__)

			argv_1911 = argv_2889;

			// delete the temporary dll argv_1396
			if (argv_1184 (argv_3829.c_str()) == false) {
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_889::argv_3915 - failed to delete temporary argv_1396 : ", argv_3829.c_str());
				argv_1993 = argv_2066;			
			}
			argv_3829 = "";
	}
	argv_1213 ("argv_3915", argv_1993);	
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_2256			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to perform the argv_2253 of symbols 
// @@ (functions) that are resolved, argv_2221 and linked by 
// @@ the kernel itself. For that, we use the "argv_1773" 
// @@ function exported by the kernel API (DLL).
// @@ the necessary functions are :
// @@ - a argv_771 scan function
// @@ - a dysinfection function
// @@ - a scan report retrieval function
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should have been succesfully argv_2221
// @@   using the 'argv_2208' prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_2256 () {
	argv_3517 argv_1993 = argv_2083;
	if (argv_1639 == argv_2889) {
		argv_1993 = argv_2070;
	}
	else { // pre-conditions are OK
		argv_2263 fn_addr = argv_2889;
		// argv_2198 the 'scanning' function argv_2221 & linked by the kernel
		argv_1993 = argv_1639 (argv_2096, argv_3426.c_str(), &fn_addr);
		if (argv_1993 == argv_2103) {
			argv_1647 = (argv_1530) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
			argv_2240->argv_2247 (argv_2886, "- argv_2221 inner function : ", argv_3426.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
		}
		else {
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: failed to argv_2198 inner function : ", argv_3426.c_str());	
		}

		// argv_2198 the 'argv_2039' function argv_2221 & linked by the kernel 
		if (argv_1993 == argv_2103) {
			argv_1993 = argv_1639 (argv_2096, argv_2039.c_str(), &fn_addr);
			if (argv_1993 == argv_2103) {
				argv_1643 = (argv_1526) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2240->argv_2247 (argv_2886, "- argv_2221 inner function : ", argv_2039.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: failed to argv_2198 inner function : ", argv_2039.c_str());	
			}
		}

		// argv_2198 the 'dysinfect' function argv_2221 & linked by the kernel
		if (argv_1993 == argv_2103) {
			argv_1993 = argv_1639 (argv_2096, argv_1271.c_str(), &fn_addr);
			if (argv_1993 == argv_2103) {
				argv_1644 = (argv_1527) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2240->argv_2247 (argv_2886, "- argv_2221 inner function : ", argv_1271.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: failed to argv_2198 inner function : ", argv_1271.c_str());	
			}
		}

		// argv_2198 the 'get_scan_report' function argv_2221 & linked by the kernel
		if (argv_1993 == argv_2103) {
			argv_1993 = argv_1639 (argv_2096, argv_1775.c_str(), &fn_addr);
			if (argv_1993 == argv_2103) {
				argv_1645 = (argv_1528) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2240->argv_2247 (argv_2886, "- argv_2221 inner function : ", argv_1775.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: failed to argv_2198 inner function : ", argv_1775.c_str());	
			}
		}

		// argv_2198 the 'kernel_NATIVE_free' function argv_2221 & linked by the kernel
		if (argv_1993 == argv_2103) {
			argv_1993 = argv_1639 (argv_2096, argv_2084.c_str(), &fn_addr);
			if (argv_1993 == argv_2103) {
				argv_1646 = (argv_1529) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2240->argv_2247 (argv_2886, "- argv_2221 inner function : ", argv_2084.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: failed to argv_2198 inner function : ", argv_2084.c_str());	
			}
		}

	}

////////////////////////////////////////////////////
		{
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "argv_889::argv_2256 - argv_2221 the 'scanning' function : 0x%X\r\n", argv_1647);
			argv_3828[MAX_PATH - 1] = '\0';	argv_3419 (argv_3828);

			argv_3548 (argv_3828, MAX_PATH, "argv_889::argv_2256 - argv_2221 the 'dysinfect' function : 0x%X\r\n", argv_1644);
			argv_3828[MAX_PATH - 1] = '\0';	argv_3419 (argv_3828);

			argv_3548 (argv_3828, MAX_PATH, "argv_889::argv_2256 - argv_2221 the 'get_scan_report' function : 0x%X\r\n", argv_1645);
			argv_3828[MAX_PATH - 1] = '\0';	argv_3419 (argv_3828);

			argv_3548 (argv_3828, MAX_PATH, "argv_889::argv_2256 - argv_2221 the 'kernel_NATIVE_free' function : 0x%X\r\n", argv_1646);
			argv_3828[MAX_PATH - 1] = '\0';	argv_3419 (argv_3828);
		}
////////////////////////////////////////////////////


	if (argv_1993 == argv_2103) {
		argv_1993 = argv_2083;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_2255			
// @@
// @@ INPUT			:
// @@ _fn_name: argv_820: argv_2817 of the function whose argv_635 is to
// @@   be extracted from kernel library.
// @@
// @@ OUTPUT		:	none
// @@ _fn_addr: argv_2263&: argv_635 of the function that was looked up.
// @@    it is set to argv_2889 if argv_2253 failed.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 the argv_635 of the function
// @@ whose argv_2817 is given as the '_fn_name' parameter from the
// @@ kernel library which was previously argv_2221 by a call to 
// @@ the 'argv_2208' function.
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should have been succesfully argv_2221
// @@   using the 'argv_2208' prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_2255 (argv_820 _fn_name, argv_2263& _fn_addr) {
	argv_3517 argv_1993 = argv_2083; 
	_fn_addr = argv_2889;

	if (argv_1911 == argv_2889) {
		argv_1993 = argv_2072;
	}
	else if ((_fn_name == argv_2889) || (strlen (_fn_name) == 0)) {
		argv_1993 = argv_2073;
	}
	else { // all pre-conditions are met, ok to proceed
			#if defined (__LINUX_OS__)
				_fn_addr = (argv_2263) dlsym (argv_1911, _fn_name);
			#endif // #if defined (__LINUX_OS__)		
			#if defined (__WIN32_OS__) 
				_fn_addr = (argv_2263) GetProcAddress (argv_1911, _fn_name);
			#endif // #if defined (__WIN32_OS__) 
			
		if (_fn_addr == argv_2889) {
			#if defined (__WIN32_OS__) 
				argv_2135 = GetLastError ();
			#endif // #if defined (__WIN32_OS__) 
			#if defined (__LINUX_OS__)
				argv_2135 = errno;
			#endif // #if defined (__LINUX_OS__)
			argv_1993 = argv_2077;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_1756			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _last_error: argv_3517&: the error argv_929 of the last error that
// @@   has occured.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the last error that occured.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_1756 (argv_3517& _last_error) {
	argv_3517 argv_1993 = argv_2083;
	_last_error = argv_2135;
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_1212			
// @@
// @@ INPUT			:	
// @@ _iret: argv_3517 : the return argv_929 of the function whose argv_3402
// @@   is to be displayed.
// @@
// @@ _fn_name: argv_820: argv_2817 of the function whose argv_3402 is to 
// @@   be displayed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1200 the argv_3402 of the argv_2198 
// @@ operation for the function whose argv_2817 is given as the 
// @@ '_fn_name' parameter, to argv_1200 the argv_3402, the '_iret'
// @@ parameter is used to determine whether the argv_2198 of this
// @@ function has failed or not.
// @@ 
// @@ Notice that in case of success, no argv_2389 is displayed
// @@ if the kernel manager is not in debug mode.
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_1212 (argv_3517 _iret, argv_820 _fn_name) {
	argv_3517 argv_1993 = argv_2083;
	if (argv_2240 != argv_2889) {
		if (_iret !=  argv_2083) {
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_889::init - failed to argv_2198 function : ", _fn_name);	
		}
#if defined (__DEBUG_KERNEL_MANAGER__)
		else {
			argv_2240->argv_2247 (argv_1321, "- argv_2221 function : ", _fn_name);	
		}
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_1213			
// @@
// @@ INPUT			:
// @@ _iret: argv_3517 : the return argv_929 of the function whose argv_3402
// @@   is to be displayed.
// @@
// @@ _fn_name: argv_820: argv_2817 of the function whose argv_3402 is to 
// @@   be displayed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to argv_1200 the argv_3402 of the function
// @@ whose argv_2817 is given as the '_fn_name' parameter using the
// @@ '_iret' parameter which is the argv_3960 returned by the function 
// @@ '_fn_name'.
// @@
// @@ Notice that in case of success, no argv_2389 is displayed
// @@ if the kernel manager is not in debug mode.
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_889::argv_1213 (argv_820 _fn_name, argv_3517 _iret) {
	if (argv_2240 != argv_2889) {
		char argv_3828[MAX_PATH];
		if (_iret !=  argv_2083) {
			string serror = argv_1319 (_iret);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: kernel_manager - function '%s' failed ! (%s)", _fn_name, serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1321, argv_3828);	
		}
		else {
#if defined (__DEBUG_KERNEL_MANAGER__)
			argv_3548 (argv_3828, MAX_PATH, "kernel_manager - function '%s'...[SUCCESS]", _fn_name);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_2886, argv_3828);	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_3242			
// @@
// @@ INPUT			:	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set up the names of :
// @@ - the kernel's configuration argv_1446
// @@ - the kernel's log directory.
// @@ - the kernel's plugin directory
// @@ - the kernel's dll directory
// @@ The actual scheme being :
// @@ argv_3409/PLUGIN
// @@ argv_3409/DLL
// @@ argv_3409/LOG
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_3242 () {
	argv_3517 argv_1993 = argv_2083;

	argv_1038		= argv_3409	+ argv_3484 + "conf_kernel.txt";
	argv_2236		= argv_3409	+ argv_3484 + "LOG";
	cerr << "@@1: argv_3409 = " << argv_3409 << endl;
	cerr << "@@1: argv_1247 = " << argv_1247 << endl;
	cerr << "@@1: argv_3484 = " << argv_3484 << endl;
	argv_1247		= argv_3409	+ argv_3484 + "DLL";
	cerr << "@@2: argv_1247 = " << argv_1247 << endl;
	argv_3138	= argv_3409	+ argv_3484 + "PLUGIN";

	argv_1213 ("argv_3242", argv_1993);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_2254			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 argv_635 of all necessary
// @@ functions that are exported by the kernel library.
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should have succesfully been argv_2221
// @@   prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_2254 () {
	argv_3517	argv_1993		= argv_2083;
	argv_2263	generic_ptr	= argv_2889;
	if (argv_1911 == argv_2889) {
		argv_1993 = argv_2072;
	}
	
	if (argv_1993 == argv_2083) { 
		argv_1993 = argv_2255 ("construct_kernel", generic_ptr);
		argv_1631 = (argv_1491) generic_ptr; 	
		argv_1212 (argv_1993, "construct_kernel");
	}

	if (argv_1993 == argv_2083) {
		argv_1993 = argv_2255 ("argv_1199", generic_ptr);
		argv_1634 = (argv_1500) generic_ptr;
		argv_1212 (argv_1993, "argv_1199");
	}

	if (argv_1993 == argv_2083) {
		argv_1993 = argv_2255 ("argv_764", generic_ptr);
		argv_1628 = (argv_1481) generic_ptr;
		argv_1212 (argv_1993, "argv_764");
	}
	
	if (argv_1993 == argv_2083) {
		argv_1993 = argv_2255 ("argv_3513", generic_ptr);
		argv_1700 = (argv_1625) generic_ptr;
		argv_1212 (argv_1993, "argv_3513");
	}
	
	if (argv_1993 == argv_2083) {
		argv_1993 = argv_2255 ("get_kernel_version", generic_ptr);
		argv_1638 = (argv_1515) generic_ptr;
		argv_1212 (argv_1993, "get_kernel_version");
	}
	
	if (argv_1993 == argv_2083) {
		argv_1993 = argv_2255 ("argv_1755", generic_ptr);
		argv_1637 = (argv_1514) generic_ptr;
		argv_1212 (argv_1993, "argv_1755");
	}
	
	if (argv_1993 == argv_2083) {
		argv_1993 = argv_2255 ("argv_1773", generic_ptr);
		argv_1639 = (argv_1516) generic_ptr;
		argv_1212 (argv_1993, "argv_1773");
	}

	argv_1213 ("argv_2254", argv_1993);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	construct_kernel			
// @@
// @@ INPUT			:	
// @@ _root_folder: argv_820: argv_742 folder of the kernel.
// @@ 
// @@ _dll_name: argv_820: argv_2817 of the kernel library argv_1396.
// @@	
// @@ _log_ptr: argv_917 *: argv_635 of the log argv_2908 to use.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the construct operation.
// @@ It performs the following steps :
// @@ - argv_3237 the necessary directories.
// @@ - argv_2198 the kernel's DLL. 
// @@ - argv_2198 all external symbols exported by the DLL.
// @@ - construct the kernel.
// @@
// @@ CONTRACT 		:	
// @@ - '_dll_name'		parameter should not be a argv_2889 pointer.
// @@ - '_root_folder'	parameter should not be a argv_2889 pointer.
// @@ - '_log_ptr'		parameter should not be a argv_2889 pointer.
// @@ - kernel should not have been constructed yet.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::construct_kernel (argv_820 _root_folder, argv_820 _dll_name, argv_917 * _log_ptr) {
	argv_3517 argv_1993 = argv_2083;
	if (argv_3604 != argv_2081) {
		argv_1993 = argv_2068;
	}
	else if ((_dll_name == argv_2889) || (_root_folder == argv_2889) || (_log_ptr == argv_2889)) {
		argv_1993 = argv_2073;
	}
	else { // parameters are OK
		argv_2240		= _log_ptr;
		argv_3409	= _root_folder;

		// argv_3237 the necessary directories
		argv_1993 = argv_3242 ();

		if (argv_1993 == argv_2083) {
			// argv_2198 the kernel's DLL 
			argv_1993 = argv_2208 (_dll_name);
		}

		if (argv_1993 == argv_2083) {
			// argv_2198 all external symbols exported by the DLL.
			argv_1993 = argv_2254 ();
		}

		// construct the kernel itself (create argv_2929 instance of the kernel)
		if (argv_1993 == argv_2083) {
			argv_2096 = argv_1631 ();
			if (argv_2096 == argv_2889) {
				argv_1993 = argv_2074;
			}
			else { // operation fully succeeded, change the argv_3604
				argv_3604 = argv_2080;
			}
			argv_1213 ("argv_1631", argv_1993);
		}
	}

	if (argv_1993 == argv_2103) { // remap error argv_929
		argv_1993 = argv_2083; 
	}
	argv_1213 ("construct_kernel", argv_1993);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_764			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the argv_760 operation.
// @@ It performs the following steps :
// @@ - argv_760 the kernel
// @@ - argv_2198 the inner functions argv_2221 and linked by the kernel.
// @@ 	- argv_2198 inner function : "scan".
// @@ 	- argv_2198 inner function : "get_scan_result".
// @@ 	- argv_2198 inner function : "dysinfect".
// @@
// @@ CONTRACT 		:	
// @@ - kernel should have been succesfully constructed
// @@   prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_889::argv_3419 (argv_820 _msg) {
#if defined (__STRONG_DEBUG_KERNEL__)
	fprintf (argv_1480, "%s\r\n", _msg);
	fclose (argv_1480); 
	argv_1480 = fopen ("C:\\Ckernel_manager_log.txt", "ab");
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
}


argv_3517 argv_889::argv_764 () {

#if defined (__STRONG_DEBUG_KERNEL__)	
	argv_1480 = fopen ("C:\\Ckernel_manager_log.txt", "wb");
	MessageBox (argv_2889, "open blackbox log : C:\\Ckernel_manager_log.txt", "", MB_OK);
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	/////////////////////////////////////

	argv_3517 argv_1993 = argv_2083;
	if (argv_3604 != argv_2080) {
		argv_1993 = argv_2068;
	}
	else { // valid argv_3604 for this operation
		argv_1993 = argv_1628 (argv_2096, argv_1038.c_str(), argv_2236.c_str(), argv_1247.c_str(), argv_3138.c_str(), argv_2038);
	}

	if (argv_1993 == argv_2103) { // remap error argv_929
		argv_1993 = argv_2083;
	}
	argv_1213 ("argv_1628", argv_1993);

	if (argv_1993 == argv_2083) {
		argv_1993 = argv_2256 ();
		if (argv_1993 == argv_2083) {
			argv_3604 = argv_2079;
		}
		argv_1213 ("argv_2256", argv_1993);
	}

	argv_1213 ("argv_764", argv_1993);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_3513			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the argv_3512 operation.
// @@ It performs the following steps :
// @@ - argv_3512 the kernel using the "argv_3512" exported function.
// @@
// @@ CONTRACT 		:
// @@ - kernel should have been constructed and booted
// @@   succesfully prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_3513 () {
	argv_3517 argv_1993 = argv_2083;
	if (argv_3604 != argv_2079) {
		argv_1993 = argv_2068;
	}
	else { // valid argv_3604 for this operation
		argv_1993 = argv_1700 (argv_2096);
	}

	if (argv_1993 == argv_2103) { // remap error argv_929
		argv_3604	= argv_2082;
		argv_1993	= argv_2083;
	}
	argv_1213 ("argv_3513", argv_1993);

#if defined (__STRONG_DEBUG_KERNEL__)
	fclose (argv_1480);
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the argv_1197 operation.
// @@ It performs the following steps :
// @@ - argv_1197 the kernel.
// @@ - unload the kernel's DLL.
// @@
// @@ CONTRACT 		:	
// @@ - the kernel should have been succesfully constructed,
// @@   booted, and argv_3512 prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_1199 () {
	argv_3517 argv_1993 = argv_2083;
	if (argv_3604 != argv_2082) {
		argv_1993 = argv_2068;
	}
	else { // valid argv_3604 for this operation
		argv_1993 = argv_1634 (argv_2096);
		if (argv_1993 == argv_2103) {
			argv_1993 = argv_2083;
		}

		argv_1213 ("argv_1199", argv_1993);

		if (argv_1993 == argv_2083) {
			argv_1993 = argv_3915 ();
			if (argv_1993 == argv_2083) {
				argv_3604 = argv_2081;
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_3442		
// @@
// @@ INPUT			:
// @@ _filename: argv_820: argv_2817 of the argv_1396 to scan.
// @@
// @@ _dysinfect: true if a dysinfection must be performed in case
// @@   the argv_1396 to scan is infected.
// @@
// @@ OUTPUT		:
// @@ _infected: bool&: set to true if the argv_1396 scanned was infected,
// @@                   false otherwise.
// @@
// @@ _dysinfect_possible: bool&: set to true if the dysinfection of
// @@   the scanned argv_1396 is possible,
// @@   false otherwise.
// @@
// @@ _virus_name: argv_1063&: argv_2817 of the virus in case of infection. 
// @@   Notice that the necessary memory to contain the virus argv_2817
// @@   is allocated by the kernel.
// @@ 
// @@ _dysinfect_done: bool& : set to true if dysinfection step was 
// @@   performed, false otherwise.
// @@    
// @@ _dysinfect_success: bool&: set to true if dysinfection step was
// @@   performed and succeeded. set to false otherwise.   
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2083 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permit to scan the argv_1396 whose argv_2817 is given
// @@ as the '_filename' parameter. Notice that this argv_1396 must be
// @@ located on the argv_1396 system.
// @@ If the argv_1396 is infected, and if the '_dysinfect' flag was
// @@ set to true, a dysinfection is performed.
// @@
// @@ Notice : in case of infection, the kernel allocates enough
// @@   memory and save this memory argv_635 into the argv_3402 
// @@   argument '_virus_name'.
// @@
// @@ CONTRACT 		:	
// @@ - kernel must have been succesfully constructed and booted
// @@   prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_889::argv_3442 (argv_820 _filename, bool _dysinfect, bool& _infected, bool& _dysinfect_possible, argv_1063& _virus_name, bool& _dysinfect_done, bool& _dysinfect_success, argv_3517& _dysinfect_success_code) {
	argv_3517 argv_1993			= argv_2083;
	_infected			= false;
	_dysinfect_done		= false;
	_dysinfect_success	= false;
	_virus_name			= argv_2889;
	_dysinfect_possible	= false;
	argv_3453		= argv_2889;

#if defined (__DEBUG_KERNEL_MANAGER__)
	argv_2240->argv_2247 (argv_1152, "kernel manager - scan argv_1396 : '", _filename, "'");
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)

	////////////////////////////////////////////////
	////////////////////////////////////////////////
	////////////////////////////////////////////////
//	MessageBox (argv_2889, "argv_889::argv_3442 - scan disabled (DEBUG PURPOSE)", "", MB_ICONWARNING);
//	return (argv_2083);
	////////////////////////////////////////////////
	////////////////////////////////////////////////
	////////////////////////////////////////////////

	if (argv_3604 != argv_2079) {
		argv_1993 = argv_2068;
	}
	else { // valid argv_3604 for this operation
		// scan the argv_1396 
#if defined (__STRONG_DEBUG_KERNEL__)
		{ fprintf (argv_1480, "argv_889::argv_3442 - @1\r\n"); fclose (argv_1480);  argv_1480 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
		argv_1993 = argv_1647 (argv_2038, (argv_1063) _filename, _infected, argv_3453);
#if defined (__STRONG_DEBUG_KERNEL__)
		{ fprintf (argv_1480, "argv_889::argv_3442 - @2\r\n"); fclose (argv_1480);  argv_1480 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)

		if (argv_1993 != argv_2103) {
			argv_1213 ("argv_1647", argv_1993);
		}
		else { // scan succeeded
			if (_infected == false) { // argv_1396 is not infected
#if defined (__STRONG_DEBUG_KERNEL__)
			{ fprintf (argv_1480, "argv_889::argv_3442 - @3\r\n"); fclose (argv_1480);  argv_1480 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)

#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2240->argv_2247 (argv_2886, "kernel manager - scan argv_1396 : argv_1396 is not infected");	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else { // argv_1396 is infected, let's retrieve the virus' argv_2817
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2240->argv_2247 (argv_2886, "kernel manager - scan argv_1396 : argv_1396 is infected");	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
				argv_3864 dysinfection_flag = DYSINFECT_UNDEFINED_VALUE;
				argv_1993 = argv_1645 (argv_2038, argv_3453, _virus_name, dysinfection_flag);
				if (argv_1993 == argv_2103) {
					if (dysinfection_flag == DYSINFECT_POSSIBLE) {
						_dysinfect_possible = true;
					}

					if ((_dysinfect == true) && (dysinfection_flag == DYSINFECT_POSSIBLE)) {
						_dysinfect_done		= true;
						_dysinfect_success	= true;
						argv_1993 = argv_1644 (argv_2038, argv_3453, (argv_1063) _filename, _dysinfect_success_code);
						if (argv_1993 != argv_2103) {
							_dysinfect_success = false;
						}
					}
				}
			}
		}
	}

	// deallocate the scan argv_1139 that were allocated by the plugin (if necessary)
#if defined (__STRONG_DEBUG_KERNEL__)
	{ fprintf (argv_1480, "argv_889::argv_3442 - @4\r\n"); fclose (argv_1480);  argv_1480 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
	{ fprintf (argv_1480, "argv_889::argv_3442 - argv_1643 = 0x%X\r\n", argv_1643); fclose (argv_1480);  argv_1480 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	argv_1993 = argv_1643 (argv_2038);
#if defined (__STRONG_DEBUG_KERNEL__)
	{ fprintf (argv_1480, "argv_889::argv_3442 - @5\r\n"); fclose (argv_1480);  argv_1480 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	if (argv_1993 != argv_2103) {
		string serror = argv_1319 (argv_1993);
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: kernel manager - kernel_deallocate_all_atoms failed ! (argv_1318=%s)", serror.c_str());
		argv_2240->argv_2247 (argv_2886, argv_3828);	
	}
#if defined (__DEBUG_KERNEL_MANAGER__)
	else {
		argv_2240->argv_2247 (argv_2886, "kernel manager - kernel_deallocate_all_atoms...[SUCCESS]");
	}
#endif

	if (argv_1993 == argv_2103) { // remap error argv_929
		argv_1993 = argv_2083;
#if defined (__DEBUG_KERNEL_MANAGER__)
		argv_2240->argv_2247 (argv_2886, "kernel manager - scan argv_1396...[SUCCESS]");	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
