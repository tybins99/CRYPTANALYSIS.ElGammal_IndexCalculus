// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_337.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures and
// @@ functions that permits the loader cypher
// @@ argv_2908 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_337.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_821
// @@
// @@ FUNCTION		:	argv_821		
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
// @@ Normal constructor of the 'argv_821' argv_2908.
// @@ It merely prepares the argv_2908 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_821::argv_821 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_821
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
// @@ This function permits to reset the 'argv_821'
// @@ argv_2908 to it's initial argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_821::reset () {
	argv_3517 argv_1993		= argv_2168;
	init_done		= false;
	argv_1131	= argv_2889;
	argv_1168	= argv_2889;

	// unload all argv_2221 libraries
	argv_1993			= argv_1129::reset ();
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_821
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
// @@ - argv_2198 the DLL containing the cipher/decipher routines.
// @@ - argv_2198 the cipher routine.
// @@ - argv_2198 the decipher routine.
// @@
// @@ CONTRACT 		: 
// @@ - 'init' must not have already been argv_1261.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_821::init (argv_839 * _glob_data_ptr, argv_820 _dll_name) {
	argv_3517 argv_1993 = argv_2168;
	if (init_done == true) {
		_glob_data_ptr->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_821::init - illegal to call init twice or more !");
		argv_1993 = argv_2163;
	}
	else {
		argv_3517 argv_1993 = argv_2158.argv_2208 (_dll_name, argv_2157);
		if (argv_1993 != argv_2168) {
			_glob_data_ptr->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_821::init - argv_2208 failed !");
		}
		else {
			argv_2263 void_ptr = argv_2889;
			init_one_function (_glob_data_ptr, "argv_1131",		(argv_2263 *) &void_ptr,	argv_1993);
			argv_1131 = (argv_1495) void_ptr;

			init_one_function (_glob_data_ptr, "argv_1168",	(argv_2263 *) &void_ptr,	argv_1993);
			argv_1168 = (argv_1496) void_ptr;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
