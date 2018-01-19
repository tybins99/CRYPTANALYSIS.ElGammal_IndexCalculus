// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_269.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures and
// @@ functions that permits the loader argv_1016
// @@ argv_2908 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_336.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_814
// @@
// @@ FUNCTION		:	argv_814		
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
// @@ Normal constructor of the 'argv_814' argv_2908.
// @@ It merely prepares the argv_2908 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_814::argv_814 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_814
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
// @@ This function permits to reset the 'argv_814'
// @@ argv_2908 to it's initial argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_814::reset () {
	argv_3517 argv_1993			= argv_2168;
	init_done			= false;
	argv_1019		= argv_2889;
	argv_3893	= argv_2889;

	// unload all argv_2221 libraries
	argv_1993				= argv_1129::reset ();
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_814
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_839 *: pointer on the argv_2908 containing
// @@     all the global argv_1139.
// @@
// @@ _dll_name: argv_820: argv_2817 of the DLL containing the argv_1016/argv_3891
// @@     routines.
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
// @@ This function permits to :
// @@ - argv_2198 the DLL containing the argv_1016/argv_3891 routines.
// @@ - argv_2198 the argv_1016 routine.
// @@ - argv_2198 the argv_3891 routine.
// @@
// @@ CONTRACT 		: 
// @@ - 'init' must not have already been argv_1261.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_814::init (argv_839 * _glob_data_ptr, const char * _dll_name) {
	argv_3517 argv_1993 = argv_2168;
	if (init_done == true) {
		_glob_data_ptr->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_814::init - illegal to call init twice or more !");
		argv_1993 = argv_2163;
	}
	else {
		argv_3517 argv_1993 = argv_2158.argv_2208 (_dll_name, argv_2157);
		if (argv_1993 != argv_2168) {
#if defined (__LINUX_OS__)
			string load_er_str;
			argv_3517   load_er_SI32;
			argv_2158.argv_1756 (load_er_SI32, load_er_str);
#endif // #if defined (__LINUX_OS__)
			string serror = argv_1319 (argv_1993);
			_glob_data_ptr->argv_2251.argv_2247 (argv_1321, "+++ ERROR: while loading dll : ", _dll_name);
			_glob_data_ptr->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_814::init - argv_2208 failed ! - ", serror.c_str());
#if defined (__LINUX_OS__)
			_glob_data_ptr->argv_2251.argv_2247 (argv_1321, "+++ ERROR: ", load_er_str.c_str());
#endif // #if defined (__LINUX_OS__)
		}
		else {
			argv_2263 void_ptr = argv_2889;
			init_one_function (_glob_data_ptr, "argv_1019",	(argv_2263 *) &void_ptr,		argv_1993);
			argv_1019 = (argv_1489) void_ptr;
			
			init_one_function (_glob_data_ptr, "argv_3893",	(argv_2263 *) &void_ptr,		argv_1993);
			argv_3893 = (argv_1627) void_ptr;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
