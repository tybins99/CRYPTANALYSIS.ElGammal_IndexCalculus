// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_283.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the necessary objects
// @@ to communicate via a argv_2352 link 
// @@ (argv_3549 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_349.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	none		
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
// @@ copy constructor of the 'argv_1057' argv_2908.
// @@ Does nothing as the copy constructor is private and
// @@ thus should never be called.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1057::argv_1057 (const argv_1057& _p) {
	;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	operator=
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ argv_1057& : packet to use to perform the copy.
// @@	
// @@ RETURN VALUE	:
// @@ argv_1057& : the argv_1106 argv_2908's instance.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ assignment operator of the argv_1057 argv_2908.
// @@ does nothing because it is private and thus should
// @@ never be used.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1057& argv_1057::operator= (argv_1057& _p) {
	return (*this);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_1057		
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
// @@ This function permits to bring the argv_1057 argv_2908 
// @@ back to it's original argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1057::argv_1057 () {
	argv_1622				= argv_2889;
	argv_1624				= argv_2889;
	argv_3831			= "";
#if defined (__WIN32_OS__)
	argv_3484			= "\\";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	argv_3484			= "/";
#endif // #if defined (__LINUX_OS__)
	argv_775			= argv_2889;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3401		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function is to be called after a argv_1057 was used
// @@ and before another use. It resets some important fields
// @@ to their initial argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3401 () {
	argv_3517 argv_1993				= argv_3026;
	argv_2865					= 0;
	nb_remaining			= 0;
	offset					= 0;
	argv_3604					= argv_3018;
	argv_759				= 0;
	argv_1416				= 0;
	argv_3342		= "";
	argv_1448			= false;
	argv_733			= false;
	argv_1185	= false;
	argv_1418			= "";
	
	if (argv_1622 != argv_2889) {
		fclose (argv_1622);
		argv_1622 = argv_2889;
	}
	if (argv_1624 != argv_2889) {
		fclose (argv_1624);
		argv_1624 = argv_2889;
	}
	if (argv_775 != argv_2889) {
		delete [] argv_775;
		argv_775 = argv_2889;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
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
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to bring the argv_1057 argv_2908
// @@ back to it's virgin argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::reset () {
	argv_3517 argv_1993		= argv_3026;
	argv_3728		= argv_3065;
	argv_3941		= argv_3065;
	argv_3401 ();

	// associate the argv_1907 with it's corresponding part of the argv_771 
	argv_1993 = argv_1907.init (&argv_771[0], argv_2958);
	if (argv_1993 == argv_2988) { // argv_1907 init was succesful
		// associate the argv_757 with it's corresponding part of the argv_771 
		argv_1993 = argv_757.init (&argv_771[argv_2958], argv_2956 - argv_2958);
	}

	if (argv_1993 == argv_2988) { // remap error argv_929
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3500		
// @@
// @@ INPUT			:	
// @@ _tmp_folder: argv_820: argv_2817 of the directory to use
// @@   when a argv_1396 packet is received.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set the temporary folder
// @@ that is required because the packet may receive
// @@ a argv_1396, and thus a temporary argv_1396 must be created
// @@ for reception, and this temporary argv_1396 is created
// @@ in the temporary folder '_tmp_folder'.
// @@
// @@ CONTRACT 		:	
// @@ - '_tmp_folder' parameter should not be argv_2889.
// @@ - '_tmp_folder' should not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3500 (argv_820 _tmp_folder) {
	argv_3517 argv_1993 = argv_3026;
	if ((_tmp_folder == argv_2889) || (strlen (_tmp_folder) == 0)) {
		argv_1993 = argv_3005;
	}
	else {
		argv_3831 = _tmp_folder;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3477		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the argv_1106 packet was totally sent,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the
// @@ argv_1106 packet was entirely sent or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1057::argv_3477 () {
	return (argv_3604 == argv_3023);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3337		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the packet was fully received,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the
// @@ argv_1106 packet was entirely received or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1057::argv_3337 () {
	return (argv_3604 == argv_3019);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_1779		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _size: argv_3864&: the size of the packet : argv_1907 size + argv_757 size.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the packet size, the 
// @@ packet size being the sum of the argv_1907 size and the 
// @@ argv_757 size.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_1779 (argv_3864& _size) {
	argv_3517 argv_1993			= argv_3026;
	argv_3864 header_size	= 0;
	argv_3864 argv_759		= 0;
	_size				= 0;

	argv_1993 = argv_1907.argv_1779 (header_size);
	if (argv_1993 == argv_2988) {
		argv_1993 = argv_757.argv_1779 (argv_759);
		if (argv_1993 == argv_2988) {
			_size = header_size + argv_759;	
		}
	}

	if (argv_1993 == argv_2988) { // remap error argv_929
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_2955		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 the packet for 
// @@ sending by updating the argv_1907's fields. This function
// @@ is necessary because we need to tell the packet that
// @@ we won't argv_616 more argv_1139 into it's argv_757.
// @@ 
// @@ Notice : 'argv_2955' function is not called if the packet 
// @@   is to argv_3472 a argv_1396.
// @@
// @@ CONTRACT 		:	
// @@ - the packet argv_3842 should have been set prior to this call.
// @@ - the packet argv_757 should contain some argv_1139.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_2955 () {
	argv_3517 argv_1993	= argv_3026;
	if (argv_3941 == argv_3065) {
		argv_1993 = argv_2998; 
	}
	else { // packet argv_3842 is OK
		argv_1993 = argv_757.argv_1779 (argv_759);
		if (argv_1993 == argv_2988) {
			if (argv_759 == 0) {
				argv_1993 = argv_3002;
			}
			else { // packet argv_757 is not empty
				argv_3728 = argv_3027;
				// insert the packet system argv_3842 into the argv_1907
				argv_1993 = argv_1907.insert (argv_3728);
				if (argv_1993 == argv_2988) {
					// insert the packet user argv_3842 into the argv_1907
					argv_1993 = argv_1907.insert (argv_3941);
					if (argv_1993 == argv_2988) {
						// insert the argv_757 size into the argv_1907
						argv_1993 = argv_1907.insert (argv_759);
						if (argv_1993 == argv_2988) {
							argv_3604 = argv_3017;
						}
					}
				}
			}
		}
	}

	if (argv_1993 == argv_2988) { // remap error argv_929
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3501		
// @@
// @@ INPUT			:	
// @@ _type: argv_3862: the user argv_3842 to be assigned to the packet.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to associate a user argv_3842 to the argv_1057
// @@ notice that the system argv_3842 is hidden for the argv_1057's user.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3501 (argv_3862 _type) {
	argv_3517 argv_1993	= argv_3026;
	argv_3941	= _type;
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_1783		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _extracted_type: argv_3862&: user argv_3842 of the argv_1057.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the user argv_3842 associated
// @@ with the argv_1057.
// @@
// @@ CONTRACT 		:	
// @@ - user argv_3842 of the argv_1057 should have been set prior to
// @@   this call using the 'argv_3501' function.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_1783 (argv_3862& _extracted_type) {
	argv_3517 argv_1993 = argv_3026;
	if (argv_3941 == argv_3065) {
		argv_1993 = PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET; 
	}
	else {
		_extracted_type	= argv_3941;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3862: the 1 byte argv_1139 to insert into the packet's argv_757.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert a 1 byte argv_1139 into the argv_1057.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::insert (argv_3862 _data) {
	argv_3517 argv_1993	= argv_3026;
	argv_1993 = argv_757.insert (_data);
	if (argv_1993 == argv_2988) { // remap error argv_929
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_1371		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _data&: argv_3862 : the 1 byte argv_1139 extracted from the argv_1057.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 a 1 byte argv_1139 from
// @@ the argv_1057 argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_1371 (argv_3862& _data) {
	argv_3517 argv_1993	= argv_3026;
	if (argv_3604 != argv_3019) {
		argv_1993 = argv_3003;
	}
	else { // packet argv_3604 is OK
		argv_1993 = argv_757.argv_1371 (_data);
		if (argv_1993 == argv_2988) { // remap error argv_929
			argv_1993 = argv_3026;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3863: the 2 argv_782 argv_1139 to insert into the packet's argv_757.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert a 2 argv_782 argv_1139 into the argv_1057.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::insert (argv_3863 _data) {
	argv_3517 argv_1993 = argv_3026;
	argv_1993 = argv_757.insert (_data);
	if (argv_1993 == argv_2988) { // remap error argv_929
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_1371		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _data: argv_3863& : the 2 argv_782 argv_1139 extracted from the argv_1057.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 a 2 argv_782 argv_1139 from
// @@ the argv_1057 argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_1371 (argv_3863& _data) {
	argv_3517 argv_1993 = argv_3026;
	if (argv_3604 != argv_3019) {
		argv_1993 = argv_3003;
	}
	else { // packet argv_3604 is OK
		argv_1993 = argv_757.argv_1371 (_data);
		if (argv_1993 == argv_2988) { // remap error argv_929
			argv_1993 = argv_3026;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3864: the 4 argv_782 argv_1139 to insert into the packet's argv_757.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert a 4 argv_782 argv_1139 into the argv_1057.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::insert (argv_3864 _data) {
	argv_3517 argv_1993	= argv_3026;
	argv_1993 = argv_757.insert (_data);
	if (argv_1993 == argv_2988) { // remap error argv_929
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_1371		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _data: argv_3864& : the 4 argv_782 argv_1139 extracted from the argv_1057.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 a 4 argv_782 argv_1139 from
// @@ the argv_1057 argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_1371 (argv_3864& _data) {
	argv_3517 argv_1993	= argv_3026;
	if (argv_3604 != argv_3019) {
		argv_1993 = argv_3003;
	}
	else { // packet argv_3604 is OK
		argv_1993 = argv_757.argv_1371 (_data);
		if (argv_1993 == argv_2988) { // remap error argv_929
			argv_1993 = argv_3026;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_820: the string to insert into the argv_1057.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string pointed to by
// @@ the '_data' parameter into the argv_1057 argv_2908.
// @@
// @@ CONTRACT 		:	
// @@ - '_data' parameter should not be a argv_2889 pointer.
// @@ - '_data' parameter should not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::insert (argv_820 _data) {
	argv_3517 argv_1993 = argv_3026;
	if ((_data == argv_2889) || (strlen(_data) == 0)) {
		argv_1993 = argv_3005;
	}
	else { // parameter is OK
		argv_1993 = argv_757.insert (_data);
		if (argv_1993 == argv_2988) { // remap error argv_929
			argv_1993 = argv_3026;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data : const string&: the string to insert into
// @@   the argv_1057.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string '_data'
// @@ into the argv_1057 argv_2908.
// @@
// @@ CONTRACT 		:	
// @@ - the '_data' should not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::insert (const string& _data) {
	argv_3517 argv_1993	= argv_3026;
	argv_1993 = argv_757.insert (_data);
	if (argv_1993 == argv_2988) { // remap error argv_929
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_1371		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: string&: string extracted from the argv_1057.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 a string from the 
// @@ argv_1057.
// @@
// @@ CONTRACT 		:	
// @@ - a full packet should have been received.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_1371 (string& _data) {
	argv_3517 argv_1993	= argv_3026;
	if (argv_3604 != argv_3019) {
		argv_1993 = argv_3003;
	}
	else { // packet argv_3604 is OK
		argv_1993 = argv_757.argv_1371 (_data);
		if (argv_1993 == argv_2988) { // remap error argv_929
			argv_1993 = argv_3026;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_1732		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a unique argv_1446
// @@ using the temporary folder that was previously set
// @@ by another function.
// @@
// @@ CONTRACT 		:	
// @@ - the temporary folder should have been set prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_1732 (string& _tmp_filename) {
	argv_3517 argv_1993 = argv_3026;
	_tmp_filename = "";
	if (argv_3831 == "") {
		argv_1993 = PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET;
	}
	else { // argv_3604 is coherent with the requested operation
		char argv_3828[MAX_PATH];
	#if defined (__WIN32_OS__)
		GetLocalTime (&argv_3824);
		argv_3548 (argv_3828, MAX_PATH, "%s%s%d_%d_%d_%d_%d_%d_%d.argv_3828", argv_3831.c_str(), argv_3484.c_str(), argv_3824.wYear, argv_3824.wMonth, argv_3824.wDay, argv_3824.wHour, argv_3824.wMinute, argv_3824.wSecond, argv_3824.wMilliseconds);
	#endif // #if defined (__WIN32_OS__)
	#if defined (__LINUX_OS__)
		argv_1121 = argv_3825 (argv_2889);
		argv_3827 = localtime (&argv_1121);
		gettimeofday (&argv_3733, argv_2889);
		//srand ( argv_3733.tv_usec );
		argv_3548 (argv_3828, MAX_PATH, "%s%s%d_%d_%d_%d_%d_%d_%d.argv_3828", argv_3831.c_str(), argv_3484.c_str(), argv_3827->tm_year, argv_3827->tm_mon, argv_3827->tm_mday, argv_3827->tm_hour, argv_3827->tm_min, argv_3827->tm_sec, (argv_3864) argv_3733.tv_usec);
	#endif // #if defined (__LINUX_OS__)
		argv_3828[MAX_PATH - 1] = '\0';
		_tmp_filename = argv_3828;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3232		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to ensure that after a packet was
// @@ entirely received, everything  is coherent.
// @@ the following steps are performed :
// @@ - ensure that the packet's system argv_3842 is coherent.
// @@ - ensure that no argv_1396 was received if the argv_1396 transfert
// @@   feature was not enabled.
// @@ - the temporary argv_1446 should be empty.
// @@
// @@ Furthermore, if a packet was received, then a unique
// @@ temporary argv_1446 is chosen and this argv_1396 is opened
// @@ so that the received content can be saved.
// @@ 
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3232 () {
	argv_3517 argv_1993 = argv_3026;
	if ((argv_3728 != argv_3027) && (argv_3728 != argv_3028)) {
		argv_1993 = argv_3006;
	}
	else if (argv_3728 == argv_3028) {
		if (argv_1448 == false) {
			argv_1993 = argv_2997;
		}
		else if ((argv_733==true) && (argv_3342 != "")) { 
			// the argv_1446 should be empty
			argv_1993 = argv_3030;	
		}
		else if (argv_1622 != argv_2889) {
			argv_1993 = argv_3004;
		}
		else { // all conditions are met
			if (argv_733 == true) {
				// choose a temporary argv_1446
				 argv_1993 = argv_1732 (argv_3342);
			}

			if (argv_1993 ==  argv_3026) {
				// open the temporary receive argv_1396
				argv_1622 = fopen (argv_3342.c_str(), "wb");
				if ( ! argv_1622) {
					argv_1993 = argv_2991;
				}
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3267		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the important fields
// @@ from a received packet :
// @@ - the system argv_3842.
// @@ - the user argv_3842.
// @@ - the argv_757 size.
// @@ The argv_3604 of the argv_1057 argv_2908 is modified accordingly.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3267 () {
	argv_3517 argv_1993			= argv_3026;
	argv_759			= 0;

	// argv_1371 the packet's system argv_3842 from the argv_1907
	argv_1993 = argv_1907.argv_1371 (argv_3728);

	if (argv_1993 == argv_2988) { // the system argv_3842 was retrieved succesfully
		argv_1993 = argv_3232 ();

		if (argv_1993 == argv_3026) { 
			// argv_1371 the packet's user argv_3842 from the argv_1907
			argv_1993 = argv_1907.argv_1371 (argv_3941);
			if (argv_1993 == argv_2988) {
				// argv_1371 the packet's argv_757's size from the argv_1907
				argv_1993 = argv_1907.argv_1371 (argv_759);

				if (argv_1993 == argv_2988) {
					// argv_3237 the packet to perform the reception of the argv_757
					argv_2865			= 0;
					nb_remaining	= argv_759;
					if (nb_remaining > (argv_2956 - argv_2958)) {
						argv_1993		= argv_2982;
					}
					else { // the argv_757 size is coherent
						offset		= argv_2958;
						argv_3604		= argv_3020; // update the argv_3604 
						// adjust the argv_757's coder so that overflow can be detected
						argv_1993 = argv_757.init (&argv_771[argv_2958], argv_759);
					}
				}
			}
		}
	}

	if (argv_1993 == argv_2988) { // remap error argv_929
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3341		
// @@
// @@ INPUT			:	
// @@ _timeout_second: argv_3517: the timeout associated with the read operation
// @@   on the argv_1106 argv_2352 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_926&: the argv_2352 to use for reception (connection).
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive a argv_1396 via the connection
// @@ established with the '_media' parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3341 (argv_926& _media, argv_3517 _timeout_second) {
	argv_3517 argv_1993			= argv_3026;
	argv_3864 actual_nb_recv	= 0;
	bool finished		= false;

	while ((finished==false) && (total_nb_remaining > 0)) {
		argv_1993 = _media.argv_3334 (&argv_775[argv_2865], nb_remaining, actual_nb_recv, _timeout_second);

		if (argv_1993 == argv_2380) {
			argv_2865			+= actual_nb_recv;
			nb_remaining	-= actual_nb_recv;
			if (nb_remaining == 0) { // argv_1106 argv_753 fully received
				// dump this argv_753 to the argv_1396
				if (fwrite (argv_775, 1, argv_2865, argv_1622) != argv_2865) {
					argv_1993 = argv_3013;
					finished = true;
				}
				else { // argv_753 succesfully dumped to the destination argv_1396
					argv_3836		+= argv_2865;
					total_nb_remaining	-= argv_2865;
					if (total_nb_remaining > 0) {
						if (total_nb_remaining < argv_2956) {
							nb_remaining = total_nb_remaining;	
						}
						else { // the remaining amount of argv_1139 is larger than the argv_753 size
							nb_remaining = argv_2956;
						}
						argv_2865 = 0;
					}
					else { // all blocks succesfully received and dumped to destination argv_1396.
						argv_3604		= argv_3019;
						finished	= true;
					}
				}
			}
		}
		else { // argv_3333 error occured
			finished = true;
		}
	}

	if ((argv_1993 == argv_2380) || (argv_1993 == argv_2988)) { // remap error argv_929 
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3340		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the necessary steps
// @@ when a given argv_1396 was entirely received.
// @@ the following steps are performed :
// @@ - the temporary argv_1396 descriptor is closed.
// @@ - the input/output argv_771 is deallocated.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3340 () {
	argv_3517 argv_1993 = argv_3026;
	if (argv_3728 == argv_3028) {
		if (argv_1622 != argv_2889) {
			if (fclose (argv_1622) != 0) {
				argv_1993 = argv_2990;
			} 
			argv_1622 = argv_2889;
		}
	}

	if (argv_775 != argv_2889) {
		delete [] argv_775;
		argv_775 = argv_2889;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3264		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to change the packet argv_3604 after the
// @@ packet's argv_757 was fully received.
// @@ If the system argv_3842 of the packet is argv_3028, 
// @@ then the function allocates the IO argv_771 to argv_3237 the
// @@ argv_1396 transfert.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3264 () {
	argv_3517 argv_1993 = argv_3026;
	if (argv_3728 == argv_3027) {
		argv_3604 = argv_3019;
	}
	else if (argv_3728 == argv_3028) {
		argv_3836		= 0;
		argv_2865				= 0;	

		// argv_1371 the unique field of the argv_757 (the argv_1396 size, on 4 argv_782)
		argv_1993 = argv_757.argv_1371 (total_nb_remaining);

		if (argv_1993 == argv_2988) {
			argv_3604 = argv_3021;
			// divide the argv_1396 into blocks to be received
			if (total_nb_remaining < argv_2956) {
				nb_remaining = total_nb_remaining;	
			}
			else { // the remaining amount of argv_1139 is larger than the argv_753 size
				nb_remaining = argv_2956;
			}

			// allocate the IO argv_771
			if (argv_775 != argv_2889) {
				argv_1993 = argv_3001;
			}
			else { // IO argv_771 not allocated yet
				argv_775 = new (std::nothrow) argv_3862[argv_2959];
				if (argv_775 == argv_2889) {
					argv_1993 = argv_3007;
				}
			}
		}
	}

	if ((argv_1993 == argv_2380) || (argv_1993 == argv_2988)) { // remap error argv_929 
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3343		
// @@
// @@ INPUT			:	
// @@ _timeout_second: argv_3517: the timeout associated with the read operation
// @@   on the argv_1106 argv_2352 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_926&: the communication channel to use for
// @@  argv_1139 reception.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is a kind of dispatcher that permits to 
// @@ perform the adequate process considering the argv_1106
// @@ argv_3604 of the argv_1057 argv_2908.
// @@ This scheme is necessary when using sockets in non-blocking
// @@ mode.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3343 (argv_926& _media, argv_3517 _timeout_second) {
	argv_3517 argv_1993 = argv_3026;
	argv_3864 actual_nb_recv = 0;

	if (argv_3604 == argv_3018) {
		argv_3604			= argv_3022;
		nb_remaining	= argv_2958;
		argv_2865			= 0;
		offset			= 0;
	}

	if ((argv_1993 == argv_3026) && (argv_3604 == argv_3022)) {
		argv_1993 = _media.argv_3334 (&argv_771[offset + argv_2865], nb_remaining, actual_nb_recv, _timeout_second);
		if (argv_1993 == argv_2380) {
			argv_1993			 = argv_3026;
			argv_2865			+= actual_nb_recv;
			nb_remaining	-= actual_nb_recv;
			if (nb_remaining == 0) { // argv_1907 fully read
				argv_1993 = argv_3267 ();
			}
		}
	}

	if ((argv_1993 == argv_3026) && (argv_3604 == argv_3020)) {
		argv_1993 = _media.argv_3334 (&argv_771[offset + argv_2865], nb_remaining, actual_nb_recv, _timeout_second);
		if (argv_1993 == argv_2380) {
			argv_1993			 = argv_3026;
			argv_2865			+= actual_nb_recv;
			nb_remaining	-= actual_nb_recv;
			if (nb_remaining == 0) { // argv_757 fully read
				argv_1993 = argv_3264 ();
			}
		}
	}

	if ((argv_1993 == argv_3026) && (argv_3604 == argv_3021)) {
		argv_1993 = argv_3341 (_media, _timeout_second);
	}

	if ((argv_1993 == argv_3026) && (argv_3604 == argv_3019)) {
		argv_1993 = argv_3340 ();
	}

	if (argv_1993 == argv_2380) { // remap error argv_929 
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3336		
// @@
// @@ INPUT			:	
// @@ _dest_filename: argv_820: argv_2817 of the argv_1396 where the received
// @@   argv_1139 must be saved.	
// @@
// @@ _timeout_second: argv_3517: the timeout associated with the read operation
// @@   on the argv_1106 argv_2352 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_926&: the communication channel to use for
// @@   the argv_1139 reception.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive a remote argv_1396 and to 
// @@ save it to the local argv_1396 whose argv_2817 was given as 
// @@ a parameter.
// @@
// @@ CONTRACT 		:	
// @@ - packet argv_3604 must be coherent with the operation.
// @@ - '_dest_filename' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3336 (argv_926& _media, argv_3517 _timeout_second, argv_820 _dest_filename) {
	argv_3517 argv_1993 = argv_3026;
	if ((argv_3604 != argv_3018) && 
		(argv_3604 != argv_3022) &&
		(argv_3604 != argv_3020)   &&
		(argv_3604 != argv_3021) ) {
		argv_1993 = argv_2999;
	}
	else if ((_dest_filename == argv_2889) || (strlen(_dest_filename) == 0)) {
		argv_1993 = argv_3005;
	}
	else { // status and parameters are OK
		argv_733		= false;
		argv_1448		= true;
		argv_3342	= _dest_filename;

		argv_1993 = argv_3343 (_media, _timeout_second);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	none		
// @@
// @@ INPUT			:	
// @@ _files_allowed: bool: true if the packet is allowed to receive
// @@                 remote files,
// @@                 false otherwise.	
// @@
// @@ _timeout_second: argv_3517: the timeout associated with the read operation
// @@   on the argv_1106 argv_2352 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_926&: the communication channel to use for
// @@   the argv_1139 reception.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive either argv_1139, 
// @@ or a remote argv_1396.
// @@ in case of a argv_1396, the flag '_files_allowed' must have been 
// @@ enabled and the packet will generate a temporary argv_1446 for 
// @@ the received argv_1396, the user must then call the "argv_1774" 
// @@ function to obtain the argv_2817 of the temporary argv_1396 chosen 
// @@ by the packet.
// @@
// @@ CONTRACT 		:	
// @@ - packet's argv_3604 must be coherent with the operation.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3333 (argv_926& _media, argv_3517 _timeout_second, bool _files_allowed) {
	argv_3517 argv_1993 = argv_3026;
	if ((argv_3604 != argv_3018) && 
		(argv_3604 != argv_3022) &&
		(argv_3604 != argv_3020)   &&
		(argv_3604 != argv_3021) ) {
		argv_1993 = argv_2999;
	}
	else { // packet argv_3604 is OK
		argv_1448		= _files_allowed;
		if (argv_1448 == true) {
			argv_733	= true; // temp argv_1446 will be chosen randomly
		}

		if ((argv_733 == true) && (argv_3831 == "")) {
			argv_1993 = PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET;
		}
		else { // conditions are met for argv_1396 reception
			argv_1993 = argv_3343 (_media, _timeout_second);
		}
	}
	return (argv_1993);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_1774		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _file_received: bool&: set to true if a argv_1396 was received,
// @@                  set to false if argv_1139 was received instead.
// @@
// @@ _user_type: argv_3862&: the user argv_3842 associated with the 
// @@    received packet
// @@
// @@ _tmp_filename: string&: the argv_2817 of the temporary argv_1396
// @@   chosen by the argv_1057 if the '_file_received' flag
// @@   is true.
// @@ 
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the reception report
// @@ after a given packet was succesfully received.
// @@ As a packet can either receive some argv_1139 or a argv_1396,
// @@ the flag '_file_received' tells whether a argv_1396, or some
// @@ argv_1139 were received.
// @@ Then the argv_3941 is also returned.
// @@ and eventually if '_file_received' was set to true, it
// @@ means that a argv_1396 was received, and the argv_2817 of received
// @@ argv_1396 was automatically chosen by the argv_1057 itself, and
// @@ the argv_2817 of this temporary argv_1396 is returned via the
// @@ '_tmp_filename' argument.
// @@
// @@ CONTRACT 		:	
// @@ - argv_1057 must be in argv_3019 argv_3604.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_1774 (bool& _file_received, argv_3862& _user_type, string& _tmp_filename) {
	argv_3517 argv_1993 = argv_3026;
	if (argv_3604 != argv_3019) {
		argv_1993 = argv_2999;	
	}
	else { // status is OK to proceed
		_file_received = false;
		if (argv_3728 == argv_3028) {
			_file_received = true;
		}
		_user_type		= argv_3941;

		if (argv_3728 == argv_3028) {
			_tmp_filename = argv_3342;
			// reset the temporary argv_1446
			argv_3342 = "";
		}
		else { // the packet received was a argv_1139 packet, not a argv_1396 packet
			_tmp_filename = "";	
		}
	}
	return (argv_1993);
}



// lightweigh retrieval of the packet's user argv_3842.
void argv_1057::argv_1784 (argv_3862& _user_type) {
	_user_type = argv_3941;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3272		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to update the argv_1057 argv_3604 after
// @@ the packet was totally sent.
// @@ Notice that if the packet was a argv_1396 packet, then
// @@ the packet itself is followed by the remote argv_1396's content,
// @@ Thus in that case, the function allocates an IO argv_771.
// @@
// @@ Notice that the argv_1396 content (if any) is not considered
// @@ a part of the packet (it is outside of the argv_757).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3272 () {
	argv_3517 argv_1993 = argv_3026;
	if (argv_3728 == argv_3027) {
		argv_3604 = argv_3023;
	}
	else if (argv_3728 == argv_3028) {
		argv_3604 = argv_3024; 

		argv_3836		= 0;
		total_nb_remaining	= argv_1416;
		argv_2865				= 0;
		if (total_nb_remaining < argv_2956) {
			nb_remaining	= argv_1416;
		}
		else {
			nb_remaining	= argv_2956;
		}

		// allocate the IO argv_771
		if (argv_775 != argv_2889) {
			argv_1993 = argv_3001;
		}
		else { // IO argv_771 not allocated yet
			argv_775 = new (std::nothrow) argv_3862[argv_2959];
			if (argv_775 == argv_2889) {
				argv_1993 = argv_3007;
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3482		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_926&: the communication channel to use for
// @@   the transfert.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3472 a given argv_1396 through the 
// @@ '_media' communication channel.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3482 (argv_926& _media) {
	argv_3517 argv_1993			= argv_3026;
	argv_3864 actual_nb_sent	= 0;
	bool finished		= false;
	argv_3864 nb_tmp			= 0;
	argv_3864 prior_file_pos = 0;

	while ((finished == false) && (total_nb_remaining > 0)) {
		prior_file_pos = ftell (argv_1624);

		nb_tmp = fread (argv_775, 1, nb_remaining, argv_1624);
		if (nb_tmp != nb_remaining) {
			argv_1993		= argv_2995;
			finished	= true;
		}
		else { // fread succeeded
			argv_1993 = _media.argv_3473 (&argv_775[argv_2865], nb_remaining, actual_nb_sent);

			if (argv_1993 == argv_2380) {
				argv_2865			+= actual_nb_sent;
				nb_remaining	-= actual_nb_sent;

				if (nb_remaining == 0) {
					argv_3836		+= argv_2865;
					total_nb_remaining	-= argv_2865;

					if (total_nb_remaining == 0) {
						argv_3604		= argv_3023;
						finished	= true;
					}
					else { // the argv_1396 was not fully sent yet
						argv_2865	= 0;
						if (total_nb_remaining < argv_2956) {
							nb_remaining = total_nb_remaining;
						}
						else {
							nb_remaining = argv_2956;
						}
					}
				}
			}
			else { // argv_3472 error occured
				if (argv_1993 == argv_2362) { // reposition the argv_1396
					if (fseek (argv_1624, prior_file_pos, SEEK_SET) != 0) {
						argv_1993 = argv_2996;
					}
				}
				finished = true; 
			}
		}
	}

	if (argv_1993 == argv_2380) { // remap error argv_929 
		argv_1993 = argv_3026;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3266		
// @@
// @@ INPUT			:	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the necessary steps
// @@ after a argv_1396 was sent to a remote entity.
// @@ it does the following steps :
// @@ - argv_921 the argv_1396 descriptor of the argv_1396 that was sent.
// @@ - deallocate the IO argv_771.
// @@ - delete the argv_1396 sent if necessary
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3266 () {
	argv_3517 argv_1993 = argv_3026;
	if (argv_1624 != argv_2889) {
		if (fclose (argv_1624) != 0) {
			argv_1993 = argv_2993;
		}
		argv_1624 = argv_2889;

		// if the argv_1396 that was sent is to be deleted, then delete it
		if (argv_1185 == true) {
			if (argv_1184 (argv_1418.c_str()) == false) {
				if (argv_1993 == argv_3026) { // do not overwrite the argv_1106 error argv_929
					argv_1993 = argv_2989;
				}
			}
		}
	}

	if (argv_775 != argv_2889) {
		delete [] argv_775;
		argv_775 = argv_2889;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3472		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_926& : the communication channel to use
// @@  for transfert.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3472 the argv_1106 packet to
// @@ the entity whose connection was established by the 
// @@ '_media' argv_2908.
// @@ if the argv_2352 is in non-blocking mode, the argv_3472 function
// @@ may not be able to argv_3472 the entire packet in a row, thus
// @@ the caller may have to call the argv_3472 function several argv_3825.
// @@ To determine whether the packet was entirely sent, the user
// @@ must use the 'argv_3477' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3472 (argv_926& _media) {
	argv_3517 argv_1993			= argv_3026;
	argv_3864 actual_nb_sent	= 0;
	if ((argv_3604 != argv_3017) && 
		(argv_3604 != argv_3025) && 
		(argv_3604 != argv_3024)) {
		argv_1993 = argv_2999;
	}
	else { // valid argv_3604 for this operation
		if (argv_3604 == argv_3017) { // argv_3472 operation not started yet
			argv_2865					= 0;
			argv_3864 header_size_tmp	= 0;
			argv_3864 body_size_tmp		= 0;
			argv_1993 = argv_1907.argv_1779 (header_size_tmp);
			if (argv_1993 == argv_2988) {
				argv_1993 = argv_757.argv_1779 (body_size_tmp);
				if (argv_1993 == argv_2988) {
					nb_remaining	= header_size_tmp + body_size_tmp;
					argv_3604			= argv_3025;
					argv_1993			= argv_3026;
				}
			}
		}

		// argv_3472 both argv_1907 & argv_757 in a row
		if ((argv_1993 == argv_3026) && (argv_3604 == argv_3025)) { 
			argv_1993 = _media.argv_3473 (&argv_771[argv_2865], nb_remaining, actual_nb_sent);
			if (argv_1993 == argv_2380) {
				argv_1993			= argv_3026;
				argv_2865			+= actual_nb_sent;
				nb_remaining	-= actual_nb_sent;
				if (nb_remaining == 0) {
					argv_1993 = argv_3272 ();
				}
			}
		}

		if ((argv_1993 == argv_3026) && (argv_3604 == argv_3024)) {
			argv_1993 = argv_3482 (_media);	
		}

		if ((argv_1993 == argv_3026) && (argv_3604 == argv_3023)) {
			argv_1993 = argv_3266 ();	
		}
	}

	if (argv_1993 == argv_2380) { // remap error argv_929
		argv_1993 = argv_3026;
	}
	else { // in case of error, we may have to argv_921 descriptors and delete argv_1396
		argv_3266 ();
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3253		
// @@
// @@ INPUT			:	
// @@ _filename: argv_820 : argv_2817 of the argv_1396 to argv_3472.	
// @@
// @@ _media: argv_926&: channel to use for transfert.
// @@
// @@ _user_type: argv_3842 to associate to the packet.
// @@ 
// @@ _del_file_after_send: bool: if set to true, then
// @@   the argv_1396 is deleted after it was sent to the peer.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 a given packet
// @@ to argv_3472 a given argv_1396.
// @@ Notice that most applications won't need to call
// @@ this function to argv_3472 a argv_1396, instead a call to the
// @@ the 'argv_3476' function will be appropriate.
// @@
// @@ This function is necessary for the event loop.
// @@
// @@ CONTRACT 		:	
// @@ - '_filename' parameter must not be a argv_2889 pointer.
// @@ - '_filename' must be the argv_2817 of an existing argv_1396.
// @@ - another call to argv_3476 must not be in progress.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3253 (argv_820 _filename, argv_926& _media, argv_3862 _user_type, bool _del_file_after_send) {
	argv_3517 argv_1993	= argv_3026;
	if (_filename == argv_2889) {
		argv_1993 = argv_3005;
	}
	else if (argv_1624 != argv_2889) {
		argv_1993 = argv_3000;
	}

	if (argv_851 (_filename) == false) {
		argv_1993 = argv_3008;
	}
	else if (argv_3604 != argv_3018) {
		argv_1993 = argv_2999;
	}
	else { // all pre-conditions are met to proceed
		argv_1185 = _del_file_after_send; // set the argv_1396 deletion flag
		argv_1418 = "";
		if (argv_1185 == true) {
			argv_1418 = _filename;
		}
		
		argv_1416 = argv_1027 (_filename);
		if (argv_1416 == 0) { // failed, or argv_1396 is empty
			argv_1993 = argv_2992;
		}
		else { // open the argv_1396 to argv_3472
			argv_1624 = fopen (_filename, "rb");
			if (! argv_1624) {
				argv_1993 = argv_2994;
			}
			else { // argv_1396 was opened succesfully
				argv_3728		= argv_3028;
				argv_3941		= _user_type;
				argv_759		= 0;

				// here we argv_2955 the packet manually
				argv_1993 = argv_757.insert (argv_1416); // argv_757 contains only the argv_1396 size (4 argv_782)
				if (argv_1993 == argv_2988) {
					argv_1993 = argv_757.argv_1779 (argv_759);
				}
				
				if (argv_1993 == argv_2988) { // insert the system argv_3842 into the argv_1907
					argv_1993 = argv_1907.insert (argv_3728); 
				}

				if (argv_1993 == argv_2988) { // insert the user argv_3842 into the argv_1907
					argv_1993 = argv_1907.insert (argv_3941); 
				}

				if (argv_1993 == argv_2988) { // insert the argv_757 size into the argv_1907
					argv_1993 = argv_1907.insert (argv_759); 
				}

				if (argv_1993 == argv_2988) {
					argv_3604 = argv_3017;
				}
			}
		}
	}

	if (argv_1993 == argv_2988) { 
		argv_1993 = argv_3026; // remap error argv_929
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1057	
// @@
// @@ FUNCTION		:	argv_3476		
// @@
// @@ INPUT			:	
// @@ _filename: argv_820 : argv_2817 of the argv_1396 to argv_3472.	
// @@
// @@ _media: argv_926&: channel to use for transfert.
// @@
// @@ _user_type: argv_3842 to associate to the packet.
// @@ 
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3026 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3472 the argv_1396 whose argv_2817
// @@ was given as a parameter through the channel '_media'
// @@ 
// @@ Notice : called only once, even if it blocks, 
// @@          further calls are calls to argv_3472(), not argv_3476()
// @@
// @@ CONTRACT 		:	
// @@ - '_filename' parameter must not be a argv_2889 pointer.
// @@ - '_filename' must be the argv_2817 of an existing argv_1396.
// @@ - another call to argv_3476 must not be in progress.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1057::argv_3476 (argv_820 _filename, argv_926& _media, argv_3862 _user_type, bool _delete_file_after_send) {
	argv_3517 argv_1993	= argv_3026;

	argv_1993 = argv_3253 (_filename, _media, _user_type, _delete_file_after_send);
	if (argv_1993 == argv_3026) {
		argv_1993  = argv_3472 (_media); // perform the actual argv_3472
	}

	if (argv_1993 == argv_2988) { 
		argv_1993 = argv_3026; // remap error argv_929
	}
	return (argv_1993);
}

// when forwarding a packet that was used to transmit a argv_1396, we need
// to insert the argv_2817 of the temporary argv_1396 into the packet argv_757
// instead of the packet size, thus we need to recreate a argv_757 and argv_2955 it
// 
// <------------  HEADER  ------------------------><----------  BODY ------------------->
// -------------------------------------------------------------------------------------
// | argv_3028 | argv_3941 | argv_759 | argv_1416 (4) | file_content		|
// -------------------------------------------------------------------------------------
//
// changed to =>
//
// <------------  HEADER  ----------------------><----------  BODY -------------------->
// -------------------------------------------------------------------------------------
// | argv_3029 | argv_3941 | temp argv_1446	                       |
// -------------------------------------------------------------------------------------
void argv_1057::argv_920 (argv_1057& _clone_pck) {
	_clone_pck.reset ();
	_clone_pck.argv_3728 = argv_3029;
	_clone_pck.argv_3501 (argv_3941);
	_clone_pck.insert (argv_3342);
	_clone_pck.argv_2955 ();
}

void argv_1057::argv_919 (argv_1057& _clone_pck, argv_3862 _clone_state) {
	if (argv_3728 == argv_3028) {
		argv_920 (_clone_pck);	
	}
	else {
		memcpy (_clone_pck.argv_771, argv_771, argv_2956);
		_clone_pck.argv_775				=	argv_2889;
		_clone_pck.argv_3728				=	argv_3728; 
		_clone_pck.argv_3941				=	argv_3941; 
		_clone_pck.argv_759				=	argv_759; 
		_clone_pck.argv_1622					=	argv_2889; 
		_clone_pck.argv_1624					=	argv_2889; 
		_clone_pck.argv_1416				=	argv_1416; 
		_clone_pck.argv_3342		=	argv_3342; 
		_clone_pck.argv_3831				=	argv_3831; 
		_clone_pck.argv_3484				=	argv_3484; 
		_clone_pck.argv_1448			=	argv_1448; 
		_clone_pck.argv_733			=	argv_733; 
		_clone_pck.argv_1185	=	argv_1185; 
		_clone_pck.argv_1418			=	argv_1418; 
		// here we modify the argv_3604 so that we can simulate the fact that the
		// packet was read or packed.
		_clone_pck.argv_3604					=	_clone_state;
		_clone_pck.argv_2865					=	argv_2865; 
		_clone_pck.nb_remaining				=	nb_remaining; 
		_clone_pck.argv_3836			=	argv_3836; 
		_clone_pck.total_nb_remaining		=	total_nb_remaining; 
		_clone_pck.offset					=	offset; 

		_clone_pck.argv_1907.init	(&_clone_pck.argv_771[0], argv_2958);
		_clone_pck.argv_757.init	(&_clone_pck.argv_771[argv_2958], argv_759);

		if (argv_3604 == argv_3019) {
			_clone_pck.argv_1907.insert_fake_buffer (argv_2958);
			_clone_pck.argv_757.insert_fake_buffer (argv_759);
		}
	}
}

argv_3517 argv_1057::argv_1465 (argv_1057 * _rich_pck_ptr, argv_3862 _rich_pck_type, argv_3864 _src_index, argv_3864 _src_gen, argv_3864 _dest_index, argv_3864 _dest_gen) {
	argv_3517 argv_1993 = argv_3026;
	argv_1993 = _rich_pck_ptr->reset ();
	if (argv_1993 == argv_3026) {
		argv_1993 = _rich_pck_ptr->argv_3501 (_rich_pck_type);
		if (argv_1993 == argv_3026) {
			argv_1993 = _rich_pck_ptr->insert (_src_index);
			if (argv_1993 == argv_3026) {
				argv_1993 = _rich_pck_ptr->insert (_src_gen);
				if (argv_1993 == argv_3026) {
					argv_1993 = _rich_pck_ptr->insert (_dest_index);
					if (argv_1993 == argv_3026) {
						_rich_pck_ptr->insert (_dest_gen);
						if (argv_1993 == argv_3026) {
							/*
							{
								FILE * argv_1478 = fopen ("C:\\debug_packet_log.txt", "ab");
								if (argv_1478) {
									argv_1201 ("argv_1057::argv_1465", argv_1478);
									fclose (argv_1478);
								}
							}*/
							argv_1993 = _rich_pck_ptr->insert (argv_3941);
							if (argv_1993 == argv_3026) { // copy the payload
								argv_1993 = _rich_pck_ptr->argv_757.insert_buffer (&argv_771[argv_2958], argv_759);
								if (argv_1993 == argv_2988) {
									argv_1993 = _rich_pck_ptr->argv_2955 ();
								}
							}
						}
					}
				}
			}
		}
	}
	return (argv_1993);
}


// the caller is supposed to have retrieved the
// - src_index
// - src_generation
// - dest_index
// - dest_generation
// - inner_type
// from the rich packet before calling us
// thus the argv_1106 pointer points on the payload
argv_3517 argv_1057::argv_1467 (argv_1057 * _naked_packet_ptr, argv_3862 _naked_pck_type) {
	argv_3517 argv_1993 = argv_3026;
	argv_1993 = _naked_packet_ptr->reset ();
	if (argv_1993 == argv_3026) {
		argv_1993 = _naked_packet_ptr->argv_3501 (_naked_pck_type);
		if (argv_1993 == argv_3026) {
			/*
			{
				FILE * argv_1478 = fopen ("C:\\debug_packet_log.txt", "ab");
				if (argv_1478) {
					argv_1201 ("argv_1057::argv_1467", argv_1478);
					fclose (argv_1478);
				}
			}*/
			argv_3862 * current_pointer = argv_757.argv_1740 ();
			argv_3864 fake_header_size = argv_759 - ((4+4) + (4+4) + 1);
			argv_1993 = _naked_packet_ptr->argv_757.insert_buffer (current_pointer, fake_header_size);
			if (argv_1993 == argv_2988) {
				argv_1993 = _naked_packet_ptr->argv_2955 ();
			}
		}
	}
	return (argv_1993);
}


// this function is useful when the rich packet to be generated does not contain
// valid source and destination (case of broadcast), in that case we must argv_616 them
// by hand and then copy the payload to the destination packet.
// NOTICE: the caller is supposed to have retrieved the
// src, src_generation, 
// dest, dest_generation
// before calling us, thus the argv_1106 pointer points on the payload
argv_3517 argv_1057::argv_1466 (argv_1057 * _clone_pck_ptr, argv_3862 _outer_type, argv_3862 _payload_type, argv_3864 _src_index, argv_3864 _src_gen, argv_3864 _dest_index, argv_3864 _dest_gen) {
	argv_3517 argv_1993 = argv_3026;
	argv_1993 = _clone_pck_ptr->reset ();
	if (argv_1993 == argv_3026) {
		argv_1993 = _clone_pck_ptr->argv_3501 (_outer_type);
		if (argv_1993 == argv_3026) {
			argv_1993 = _clone_pck_ptr->insert (_src_index);
			if (argv_1993 == argv_3026) {
				argv_1993 = _clone_pck_ptr->insert (_src_gen);
				if (argv_1993 == argv_3026) {
					argv_1993 = _clone_pck_ptr->insert (_dest_index);
					if (argv_1993 == argv_3026) {
						argv_1993 = _clone_pck_ptr->insert (_dest_gen);
						if (argv_1993 == argv_3026) {
							argv_1993 = _clone_pck_ptr->insert (_payload_type);
							if (argv_1993 == argv_3026) { // argv_919 the payload itself
								argv_3864 current_consumed_body_size = 0;
								argv_757.argv_1779 (current_consumed_body_size);
								argv_3862 * current_position = argv_757.argv_1740 ();
								argv_1993 = _clone_pck_ptr->argv_757.insert_buffer (current_position, argv_759 - current_consumed_body_size);
								if (argv_1993 == argv_2988) {
									argv_1993 = _clone_pck_ptr->argv_2955 ();
								}
							}
						}
					}
				}
			}
		}
	}
	return (argv_1993);
}


void argv_1057::argv_1201 (argv_820 _msg, FILE * _fp) {
	fprintf (_fp, "---- packet '%s' -----\r\n", _msg);
	fprintf (_fp, "- argv_3728    =  %d\r\n", argv_3728);
	fprintf (_fp, "- argv_3941      =  %d\r\n", argv_3941);
	fprintf (_fp, "- argv_759      =  %d\r\n", argv_759);
	fprintf (_fp, "- argv_1416      =  %d\r\n", argv_1416);
	fprintf (_fp, "- argv_1448  =  %d\r\n", argv_1448);
	fprintf (_fp, "- argv_733 =  %d\r\n", argv_733);
	fprintf (_fp, "- argv_3604          =  %d\r\n", argv_3604);
	fprintf (_fp, "- argv_2865        =  %d\r\n", argv_2865);
	fprintf (_fp, "- nb_remaining   =  %d\r\n", nb_remaining);
	fprintf (_fp, "- nb_remaining   =  %d\r\n", nb_remaining);
	fprintf (_fp, "- argv_3836  =  %d\r\n", argv_3836);
	fprintf (_fp, "- total_nb_remaining  =  %d\r\n", total_nb_remaining);
	fprintf (_fp, "- offset         =  %d\r\n", offset);
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "%s argv_1907's coder", _msg);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1907.argv_1202 (argv_3828, _fp);

	argv_3548 (argv_3828, MAX_PATH, "%s argv_757's coder", _msg);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_757.argv_1202 (argv_3828, _fp, argv_759);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

