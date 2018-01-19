// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_268.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all necessary argv_1139 
// @@ structures and functions for the library
// @@ loader to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_335.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893
// @@
// @@ FUNCTION		:	argv_893		
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
// @@ Normal constructor of the 'argv_893' argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_893::argv_893 () {
	argv_1115	= 0;
	argv_2135	= 0;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893
// @@
// @@ FUNCTION		:	argv_2170		
// @@
// @@ INPUT			:
// @@ _lib_name: argv_820: argv_2817 of the library whose argv_2817 must be checked.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the library '_lib_name' has an absolute argv_2817.
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_2817 of a given
// @@ library argv_1396 (DLL or .so) is absolute or relative, we need this
// @@ piece of information because for security reasons relative argv_1396
// @@ argv_2817 are strictly forbidden.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_893::argv_2170 (argv_820 _lib_name) {
	bool bret = false;
#if defined (__WIN32_OS__)
	if (strlen(_lib_name) > 3) {
		if ((_lib_name[0] >= 'A') && (_lib_name[0] <= 'Z') && (_lib_name[1]==':') && (_lib_name[2]=='\\')) {
			bret = true;		
		}
	}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (strlen(_lib_name) > 2) {
		if (_lib_name[0]=='/') {
			bret = true;
		}
	}
#endif // #if defined (__LINUX_OS__)
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893
// @@
// @@ FUNCTION		:	argv_2156		
// @@
// @@ INPUT			:
// @@ _lib_name: argv_820: argv_2817 of the library whose argv_2817 must be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the library whose argv_2817 is given as a parameter
// @@        was already argv_2221,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether a given library 
// @@ was already argv_2221 or not, it is useful because a given
// @@ library must not be argv_2221 more than once.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_893::argv_2156 (argv_820 _lib_name) {
	bool bret = false;
	argv_2020 = argv_2313.find (_lib_name);
	if (argv_2020 != argv_2313.end()) {
		return (true);
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893
// @@
// @@ FUNCTION		:	argv_1756		
// @@
// @@ INPUT			:
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
// @@ This function permits to retrieve the error argv_929, and the
// @@ error string that is related to the last error that 
// @@ occured.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_893::argv_1756 (argv_3517& _ercode, string& _erstring) {
	_ercode		= argv_2135;
	_erstring	= argv_2137;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893
// @@
// @@ FUNCTION		:	argv_2208		
// @@
// @@ INPUT			:
// @@ _lib_name: argv_820: argv_2817 of the library whose argv_2817 must be checked.
// @@
// @@ OUTPUT		:	
// @@ _lib_id: argv_3864&: unique identifier associated with the library argv_2221.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2168 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2198 a given shared library
// @@ and ensure that this library was not argv_2221 yet, then
// @@ if argv_2198 was succesful, then a unique identifier is
// @@ given to the caller through the argv_3402 argument '_lib_id'
// @@ for further use (symbols argv_2253).
// @@
// @@ CONTRACT 		: 
// @@ - '_lib_name' parameter must not be a argv_2889 pointer.
// @@ - '_lib_name' parameter must not be an empty string.
// @@ - library whose argv_2817 is contained in the '_lib_name' parameter
// @@   must not have already been argv_2221.
// @@ - '_lib_name' parameter must be an absolute argv_1446.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_893::argv_2208 (argv_820 _lib_name, argv_3864& _lib_id) {
	argv_3517 argv_1993 = argv_2168;
	if ((_lib_name == argv_2889) || (strlen (_lib_name) == 0)) {
		argv_1993 = argv_2159;
	}
	else if (argv_2156 (/*_glob_data_ptr, */_lib_name) == true){
		argv_1993 = argv_2164;
	}
	else if (argv_2170 (/*_glob_data_ptr, */_lib_name) == false) {
		argv_1993 = argv_2167;
	}
	else {
#if defined (__WIN32_OS__)
		HMODULE argv_1911 = LoadLibrary (_lib_name);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		argv_2263 argv_1911  = dlopen (_lib_name, RTLD_NOW);
#endif // #if defined (__LINUX_OS__)
		if (argv_1911 == argv_2889) {
			argv_2135 = 1;
			argv_1993 = argv_2165;	
#if defined (__LINUX_OS__)
			char * serr = dlerror ();
			argv_2137 = serr;
#endif // #if defined (__LINUX_OS__)
		}
		else {
			argv_2315[argv_1115]	= argv_1911;
			// the library argv_2817 must also be saved so that we can ensure that
			// it won't be argv_2221 twice or more
			argv_2313[_lib_name]		= argv_1115;
			_lib_id					= argv_1115;
			argv_1115++;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893
// @@
// @@ FUNCTION		:	argv_3915		
// @@
// @@ INPUT			:
// @@ _lib_id: argv_3864: the unique identifier of the library to unload.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2168 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@
// @@ CONTRACT 		: 
// @@ - the '_lib_id' parameter must contain a valid library identifier
// @@   that was obtained by the call to the 'argv_2208' function.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_893::argv_3915 (argv_3864 _lib_id) {
	argv_3517 argv_1993 = argv_2168;
	argv_2023 = argv_2315.find (_lib_id);
	if (argv_2023 == argv_2315.end()) {
		argv_1993 = argv_2166;
	}
	else {
		// free it from system point of view
#if defined (__WIN32_OS__)
		if (FreeLibrary (argv_2023->second) == 0) {
			argv_1993 = argv_2162;
		}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (dlclose (argv_2023->second) != 0) {
			argv_1993 = argv_2162;
		}
#endif // #if defined (__LINUX_OS__)

		argv_2315.erase (argv_2023);
		// also remove it from dictionnary
		bool found = false;
		for (argv_2020=argv_2313.begin () ; argv_2020 != argv_2313.end() ; ++argv_2020) {
			if (argv_2020->second == _lib_id) {
				argv_2313.erase (argv_2020);
				found = true;
				break;	
			}
		}

		if (found == false) {
			if (argv_1993 == argv_2168) {
				argv_1993 = argv_2160;
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893
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
// @@ argv_3517 : argv_2168 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to free all memory 
// @@ allocated (if any) to bring the argv_2908 back to
// @@ it's original argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_893::reset () {
	argv_3517 argv_1993 = argv_2168;
	vector<argv_3864> v_id;

	// collect all IDs to delete
	for (argv_2023=argv_2315.begin() ; argv_2023 != argv_2315.end() ; ++argv_2023) {
		v_id.push_back (argv_2023->first);
	}

	// delete all libraries using their IDs
	argv_3864 argv_2866 = v_id.size ();
	for (argv_3864 i=0 ; i<argv_2866 ; i++) {
		argv_1993 = argv_3915 (v_id[i]);
		if (argv_1993 != argv_2168) {
			break;
		}
	}
	 
	// erase the library dictionnary
	argv_2313.clear ();

	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893
// @@
// @@ FUNCTION		:	argv_1773		
// @@
// @@ INPUT			:
// @@ _lib_id: argv_3864: the unique identifier of the library to unload.
// @@
// @@ _fn_name: argv_820: argv_2817 of the symbol to argv_2253 from the argv_2221
// @@   library whose unique identifier is contained in the '_lib_id'
// @@   parameter.
// @@
// @@ OUTPUT		:
// @@ _fn_ptr_ptr: argv_2263 *: contains the argv_635 of the symbol
// @@   extracted from the library (in case of success).
// @@   it is argv_2889 in case of failure.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2168 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 and argv_1371 the 
// @@ argv_635 of a given symbol that is exported by 
// @@ the library which was previously argv_2221 using the 
// @@ the 'argv_2208' function and whose unique 
// @@ identifier is contained in the '_lib_id' parameter.
// @@
// @@ CONTRACT 		: 
// @@ - '_fn_name' parameter must not be a argv_2889 pointer.
// @@ - '_fn_name' parameter must not be an empty string.
// @@ - '_lib_id' must be a valid library identifier previously
// @@   obtained by the 'argv_2208' function.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_893::argv_1773 (argv_3864 _lib_id, argv_820 _fn_name, argv_2263 * _fn_ptr_ptr) {
	argv_3517 argv_1993 = argv_2168;
	*_fn_ptr_ptr = argv_2889;

	if ((_fn_name == argv_2889) || (strlen (_fn_name) == 0)) {
		argv_1993 = argv_2159;
	}
	else {
		argv_2023 = argv_2315.find (_lib_id);
		if (argv_2023 == argv_2315.end ()) {
			argv_1993 = argv_2169;
		}
		else { // ok, this module is known
#if defined (__WIN32_OS__)
			*_fn_ptr_ptr = (argv_2263) GetProcAddress (argv_2023->second, _fn_name);
			if (*_fn_ptr_ptr == argv_2889) {
				argv_2135 = GetLastError ();
				argv_1993 = argv_2161;
			}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
			*_fn_ptr_ptr = (argv_2263) dlsym (argv_2023->second, _fn_name);
			if (*_fn_ptr_ptr == argv_2889) {
				argv_2135 = errno;
				argv_1993 = argv_2161;
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
