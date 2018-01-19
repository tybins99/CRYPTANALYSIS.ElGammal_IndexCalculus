// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: list.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures and
// @@ functions necessary for the simple linked
// @@ list argv_2908 to work properly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_347.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_878			
// @@
// @@ FUNCTION		:	argv_878			
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
// @@ Normal constructor of the 'argv_878' argv_2908.
// @@ It prepares the 'argv_878' argv_2908 before it's
// @@ first use.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_878::argv_878 () {
	reset ();	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_878			
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
// @@ This function permits to restore the 'argv_878' 
// @@ argv_2908 to it's initial argv_3604.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_878::reset () {
	argv_2303.clear ();
	vector<argv_2263>().swap (argv_2303);
	argv_2292	= 0;
	argv_2267	= 0;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_878			
// @@
// @@ FUNCTION		:	argv_1779			
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
// @@ This function permits to argv_1371 the argv_1106 size of the 
// @@ 'argv_878' argv_2908.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3864 argv_878::argv_1779 () {
	return (argv_2303.size ());
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_878			
// @@
// @@ FUNCTION		:	argv_616			
// @@
// @@ INPUT			:	
// @@ _data: argv_2263: the argv_1139 to argv_616 to the list
// @@
// @@ _duplicate_forbidden: bool: true if the user want the function
// @@   to fail if the argv_2908 was already added to the list.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2196 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_616 the argv_1139 given as the '_data'
// @@ parameter into the list. If the '_duplicate_forbidden' parameter
// @@ was set to true, then if the argv_1139 is already present, the function
// @@ will fail.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_878::argv_616 (argv_2263 _data, bool _duplicate_forbidden) {
	argv_3517 argv_1993 = argv_2196;
	argv_2303.push_back (_data);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_878			
// @@
// @@ FUNCTION		:	argv_1748			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _data_ptr: argv_2263 *: pointer on the argv_635 of the retrieved
// @@   argv_1139.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2196 if operation was succesful,
// @@        argv_2187 if end of list was reached,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the first element of the
// @@ list. The retrieved argv_1139 being saved into the '_data_ptr' 
// @@ argv_3402 parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_878::argv_1748 (argv_2263 * _data_ptr) {
	argv_3517 argv_1993	= argv_2196;
	
	argv_2292	= argv_2303.size ();
	argv_2267	= 0;

	if (argv_2267 >= argv_2292) {
		argv_1993 = argv_2187; 
	}
	else {
		*_data_ptr = argv_2303[argv_2267];
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_878			
// @@
// @@ FUNCTION		:	argv_1766			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _data_ptr: argv_2263 *: pointer on the argv_635 of the retrieved
// @@   argv_1139.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2196 if operation was succesful,
// @@        argv_2187 if end of list was reached,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the next element of the
// @@ list. The retrieved argv_1139 being saved into the '_data_ptr' 
// @@ argv_3402 parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_878::argv_1766  (argv_2263 * _data_ptr) {
	argv_3517 argv_1993 = argv_2196;

	++argv_2267;

	if (argv_2267 >= argv_2292) {
		argv_1993 = argv_2187; 
	}
	else {
		*_data_ptr = argv_2303[argv_2267];
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
