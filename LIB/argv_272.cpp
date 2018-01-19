// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_272.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures and
// @@ functions that permits the general loader
// @@ argv_2908 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_339.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1129
// @@
// @@ FUNCTION		:	argv_1129		
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
// @@ Normal constructor of the 'argv_1129' argv_2908.
// @@ It merely prepares the argv_2908 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1129::argv_1129 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1129
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
// @@ argv_3517 : argv_2168 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to reset the 'argv_1129'
// @@ argv_2908 to it's initial argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1129::reset () {
	argv_3517 argv_1993 = argv_2168;
	argv_1993 = argv_2158.reset ();
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1129
// @@
// @@ FUNCTION		:	init_one_function		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_839 *: pointer on the argv_2908 containing
// @@     all the global argv_1139.
// @@
// @@ _fn_name: argv_820: argv_2817 of the function whose argv_635 is to be
// @@     retrieved.
// @@
// @@ OUTPUT		:
// @@ _fn_ptr_ptr: argv_2263 *: contains the argv_635 of the function whose
// @@     argv_2817 was passed as a parameter,
// @@     argv_2889 in case of failure.
// @@
// @@ IO			:	
// @@ _iret: argv_3517&: the argv_3960/argv_3402 argument that comes from the previous
// @@     call to this function, and that may be update by the argv_1106 call
// @@     to this function.	
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 the argv_635 of the the function
// @@ '_fn_name' from the currently argv_2221 DLL, and to return it's
// @@ argv_635 into '_fn_ptr_ptr' argv_3402 parameter.
// @@ Notice that if a previous call to this function has failed, 
// @@ in other words if the '_iret' parameter is different of
// @@ argv_2168, then nothing is argv_1261.
// @@ If the '_iret' parameter is equal to argv_2168, then
// @@ the function '_fn_name' is argv_2253 up and the argv_3402 (success or
// @@ failure is saved by updating the argv_3960 of the argv_3960/argv_3402
// @@ '_iret' parameter.
// @@
// @@ CONTRACT 		:	
// @@ - the '_iret' parameter must be equal to argv_2168.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1129::init_one_function (argv_839 * _glob_data_ptr, argv_820 _fn_name, argv_2263 * _fn_ptr_ptr, argv_3517& _iret) {
	if (_iret == argv_2168) {
		_iret = argv_2158.argv_1773 (argv_2157, _fn_name, _fn_ptr_ptr);
		if (_iret != argv_2168) {
			string serror = argv_1319 (_iret);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_1099::init_one_function - failed for function : %s (%s)", _fn_name, serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			_glob_data_ptr->argv_2251.argv_2247 (argv_1321, argv_3828);
		}
		else {
#if defined (DEBUG_SYSTEM_LOADER)
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "retrieved argv_635 of function : %s : %X", _fn_name, *_fn_ptr_ptr);
			argv_3828[MAX_PATH - 1] = '\0';
			_glob_data_ptr->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_SYSTEM_LOADER)
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
