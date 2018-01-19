// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_314.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures used
// @@ by the event loop to argv_1890 clients
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_314.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_807	
// @@
// @@ FUNCTION		:	argv_807
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
// @@ Normal constructor of the argv_807 argv_2908.
// @@ it resets all fields of the argv_2908 to their initial values.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_807::argv_807 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_807	
// @@
// @@ FUNCTION		:	~argv_807
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
// @@ destructor of the 'argv_807' argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_807::~argv_807 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_807	
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
// @@ This function permits to reset the client's argv_1139 to
// @@ it's initial argv_3604.
// @@ all possible awaiting packets are discarded and destroyed
// @@ from the argv_3472 argv_3324.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_807::reset () {
	list<argv_1057 *>::iterator iter_tmp;
	// free all packets that were enqueued into the argv_3472 argv_3324
	for (iter_tmp=argv_3481.begin() ; iter_tmp != argv_3481.end() ; ++iter_tmp) {
		delete (*iter_tmp);
	}

	// clear the packet list
	argv_3481.clear ();

	argv_3329	= false;
	argv_3994	= false;
	argv_3976 = true;
	argv_2135	= argv_1343;
	argv_1734	= 0;
	argv_3014.reset ();
	argv_3010.reset ();
	argv_3010.argv_3500 ("C:");
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_807	
// @@
// @@ FUNCTION		:	argv_1776	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _size: argv_3864& : size of the argv_3472 argv_3324.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_896 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute and retrieve the
// @@ size of the argv_3472 argv_3324.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_807::argv_1776 (argv_3864& _size) {
	argv_3517 argv_1993 = argv_896;
	_size = argv_3481.size ();
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_807	
// @@
// @@ FUNCTION		:	argv_1704	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _pck_ptr: argv_1057 *&: argv_635 of the retrieved packet.
// @@    argv_2889 if the retrieval failed. 
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_896 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the next packet from
// @@ the argv_3472 argv_3324. If the argv_3472 argv_3324 is empty, the function
// @@ fails and the '_pck_ptr' parameter is set to argv_2889.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_807::argv_1704 (argv_1057 *& _pck_ptr) {
	argv_3517 argv_1993 = argv_896;
	_pck_ptr = argv_2889;
	if (argv_3481.size () == 0) {
		argv_1993 = argv_894;
	}
	else { // pre-conditions are OK
		_pck_ptr = argv_3481.argv_1704 ();
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_807	
// @@
// @@ FUNCTION		:	pop_front
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_896 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to discard the argv_1704 packet from
// @@ the argv_3472 argv_3324. Notice that if the argv_3472 argv_3324 is empty,
// @@ the operation fails.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_807::pop_front () {
	argv_3517 argv_1993 = argv_896;
	if (argv_3481.size () == 0) {
		argv_1993 = argv_894;
	}
	else { // pre-conditions are OK
		argv_1057 * argv_3009 = argv_3481.argv_1704 ();
		argv_3481.pop_front ();
		delete argv_3009;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_807	
// @@
// @@ FUNCTION		:	push_back	
// @@
// @@ INPUT			:	
// @@ _pck_ptr: argv_1057 *: argv_635 of the packet to argv_616 to the
// @@   argv_3472 argv_3324.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_896 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_616 a new packet to the argv_3472 argv_3324.
// @@ Notice that if the argv_3472 argv_3324 is full, the function will fail.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_807::push_back (argv_1057 * _pck_ptr) {
	argv_3517 argv_1993 = argv_896;
	if (argv_3481.size () >= argv_2333) {
		argv_1993 = argv_895;
	}
	else { // pre-conditions are OK
		argv_3481.push_back (_pck_ptr);	
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
