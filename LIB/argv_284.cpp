// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_350.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures and
// @@ functions necessary for a packet to be filled
// @@ in using argv_3842 independant functions.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_350.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	argv_1058		
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
// @@ normal destructor of the 'argv_1058' argv_2908.
// @@ it prepares the fields for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1058::argv_1058 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
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
// @@ This function permits to bring the argv_2908
// @@ back to it's original argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1058::reset () {
	argv_3976 = true;	
	argv_776	= argv_2889;
	argv_773	= argv_2889;
	argv_774		= argv_2889;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	init	
// @@
// @@ INPUT			:	
// @@ _buffer: argv_3862 *: argv_771 to associate with the argv_1058.
// @@ 
// @@ _size: argv_3864: the size of the argv_771.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to associate a argv_771 with 
// @@ the argv_1058 argv_2908 so that argv_1139 insertion/extraction
// @@ can be argv_1261.
// @@
// @@ CONTRACT 		:	
// @@ - '_buffer' parameter must not be a argv_2889 pointer.
// @@ - '_size' must not be zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::init (argv_3862 * _buffer, argv_3864 _size) {
	argv_3517 argv_1993 = argv_2988;
	if ((_buffer == argv_2889) || (_size == 0)) {
		argv_1993 = argv_2985;
	}
	else { // parameters are OK
		argv_776	= _buffer;
		argv_774		= _buffer + _size;
		argv_773	= argv_776; // packet is empty
		argv_3976		= false;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	argv_1779		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _retrieved_size: argv_3864&: argv_1106 size of the argv_2908.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the argv_1106 size of
// @@ 'argv_1058' argv_2908.
// @@
// @@ CONTRACT 		:
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::argv_1779 (argv_3864& _retrieved_size) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else { // status is OK
		_retrieved_size = argv_773 - argv_776;	
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3862: the 1 byte argv_1139 to insert into the argv_771
// @@   associated with the 'argv_1058' argv_2908.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the 1 byte argv_1139
// @@ given by the parameter '_data' into the argv_771
// @@ associated with the 'argv_1058' argv_2908.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::insert (argv_3862 _data) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if ((argv_773 + 1) > argv_774) {
		argv_1993 = argv_2987;
	}
	else { // ok to proceed, no overflow will occur
		argv_773[0] = _data;
		argv_773 += 1;
#if defined (DEBUG_COM)
		{
			argv_3864 size;
			argv_1779 (size);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "argv_1058::insert(argv_3862 : %u) - size = %u", _data, size);
			argv_3828[MAX_PATH - 1] = '\0';
			MessageBox (argv_2889, argv_3828, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	argv_1371		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: argv_3862& : the 1 byte argv_1139 extracted from the argv_771
// @@    associated with the 'argv_1058' argv_2908.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the 1 byte argv_1139 from
// @@ from the argv_771 associated with the 'argv_1058' argv_2908.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::argv_1371 (argv_3862& _data) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if ((argv_773 + 1) > argv_774) {
		argv_1993 = argv_2987;
	}
	else { // ok to proceed, no overflow will occur
		_data = argv_773[0];
		argv_773 += 1;
#if defined (DEBUG_COM)
		{
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "argv_1058::argv_1371(argv_3862 : %u)", _data);
			argv_3828[MAX_PATH - 1] = '\0';
			MessageBox (argv_2889, argv_3828, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3863: the 2 argv_782 argv_1139 to insert into the argv_771
// @@   associated with the 'argv_1058' argv_2908.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the 2 argv_782 argv_1139
// @@ given by the parameter '_data' into the argv_771
// @@ associated with the 'argv_1058' argv_2908.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::insert (argv_3863 _data) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if ((argv_773 + 2) > argv_774) {
		argv_1993 = argv_2987;
	}
	else { // ok to proceed, no overflow will occur
		argv_3850.argv_731 = _data;
		memcpy (argv_773, &argv_3850.argv_726[0], 2);
		argv_773 += 2;
#if defined (DEBUG_COM)
		{
			argv_3864 size;
			argv_1779 (size);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "argv_1058::insert(argv_3863 : %u) - size=%u", _data, size);
			argv_3828[MAX_PATH - 1] = '\0';
			MessageBox (argv_2889, argv_3828, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	argv_1371		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: argv_3863 : the 2 argv_782 argv_1139 extracted from the argv_771
// @@    associated with the 'argv_1058' argv_2908.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the 2 argv_782 argv_1139 from
// @@ from the argv_771 associated with the 'argv_1058' argv_2908.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::argv_1371 (argv_3863& _data) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if ((argv_773 + 2) > argv_774) {
		argv_1993 = argv_2987;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (&argv_3850.argv_726[0], argv_773, 2);
		_data = argv_3850.argv_731;
		argv_773 += 2;
#if defined (DEBUG_COM)
		{
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "argv_1058::argv_1371(argv_3863 : %u)", _data);
			argv_3828[MAX_PATH - 1] = '\0';
			MessageBox (argv_2889, argv_3828, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3864: the 4 argv_782 argv_1139 to insert into the argv_771
// @@   associated with the 'argv_1058' argv_2908.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the 4 argv_782 argv_1139
// @@ given by the parameter '_data' into the argv_771
// @@ associated with the 'argv_1058' argv_2908.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::insert (argv_3864 _data) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if ((argv_773 + 4) > argv_774) {
		argv_1993 = argv_2987;
	}
	else { // ok to proceed, no overflow will occur
		argv_3850.argv_732 = _data;
		memcpy (argv_773, &argv_3850.argv_726[0], 4);
		argv_773 += 4;
#if defined (DEBUG_COM)
		{
			argv_3864 size;
			argv_1779 (size);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "argv_1058::insert(argv_3864 : %u) - size=%u", _data, size);
			argv_3828[MAX_PATH - 1] = '\0';
			MessageBox (argv_2889, argv_3828, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	argv_1371		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: argv_3864 : the 4 argv_782 argv_1139 extracted from the argv_771
// @@    associated with the 'argv_1058' argv_2908.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the 4 argv_782 argv_1139 from
// @@ from the argv_771 associated with the 'argv_1058' argv_2908.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::argv_1371 (argv_3864& _data) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if ((argv_773 + 4) > argv_774) {
		argv_1993 = argv_2987;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (&argv_3850.argv_726[0], argv_773, 4);
		_data = argv_3850.argv_732;
		argv_773 += 4;
#if defined (DEBUG_COM)
		{
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "argv_1058::argv_1371(argv_3864 : %u)", _data);
			argv_3828[MAX_PATH - 1] = '\0';
			MessageBox (argv_2889, argv_3828, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _c_string: argv_820: the string to insert into the argv_771
// @@   associated with the 'argv_1058' argv_2908.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string pointed to by
// @@ the parameter '_data' into the argv_771 associated with the 
// @@ 'argv_1058' argv_2908.
// @@
// @@ Notice that for a string, the following argv_1139 is inserted 
// @@ into the argv_771 :
// @@ - the string size (2 argv_782)
// @@ - the string itself (not zero terminated).
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.
// @@ - '_c_string' parameter must not be a argv_2889 pointer.
// @@ - '_c_string' parameter must not be an empty string.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::insert (argv_820 _c_string) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if (_c_string == argv_2889) {
		argv_1993 = argv_2985;
	}
	else if (strlen (_c_string) == 0) {
		argv_1993 = argv_2985;
	}
	else {
		argv_3863 his_size = (argv_3863) strlen(_c_string);
		if ((argv_773 + 2 + his_size) > argv_774) {
			argv_1993 = argv_2987;
		}
		else { // ok to proceed, no overflow will occur
			// insert the string's size (2 argv_782)
			argv_1993 = insert (his_size);
			if (argv_1993 == argv_2988) {
				// insert the string itself (not zero terminated)
				memcpy (argv_773, _c_string, his_size);
				argv_773 += his_size;
			}
		}
	}
	return (argv_1993);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _string: const string&: the string to insert into the argv_771
// @@   associated with the 'argv_1058' argv_2908.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string given by 
// @@ the parameter '_data' into the argv_771 associated with the 
// @@ 'argv_1058' argv_2908.
// @@
// @@ Notice that for a string, the following argv_1139 is inserted 
// @@ into the argv_771 :
// @@ - the string size (2 argv_782)
// @@ - the string itself (not zero terminated).
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.
// @@ - '_string' parameter must not be an empty string.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::insert (const string& _string) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if (_string == "") {
		argv_1993 = argv_2985;
	}
	else {
		argv_3863 his_size = (argv_3863) _string.size ();
		if ((argv_773 + 2 + his_size) > argv_774) {
			argv_1993 = argv_2987;
		}
		else { // ok to proceed, no overflow will occur
			// insert the string's size (2 argv_782)
			argv_1993 = insert (his_size);
			if (argv_1993 == argv_2988) {
				// insert the string itself (not zero terminated)
				memcpy (argv_773, _string.c_str(), his_size);
				argv_773 += his_size;
			}
		}
	}
	return (argv_1993);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	
// @@
// @@ FUNCTION		:	argv_1371		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: string& : the string extracted from the argv_771
// @@    associated with the 'argv_1058' argv_2908.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_2988 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 a string from
// @@ from the argv_771 associated with the 'argv_1058' argv_2908.
// @@ 
// @@ Notice that for a string, the following argv_1139 is extracted 
// @@ from the argv_771 :
// @@ - the string size (2 argv_782)
// @@ - the string itself (not zero terminated).
// @@ the argv_3402 is then stored into the '_data' argument.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1058::argv_1371 (string& _data) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else { // conditions are met to proceed
		// argv_1371 the string size 
		argv_3863 his_size = 0;
		argv_1993 = argv_1371 (his_size);
		if (argv_1993 == argv_2988) { // string size extraction success
			if ((argv_773 + his_size) > argv_774) {
				argv_1993 = argv_2987;
			}		
			else { // no overflow will occur => OK to proceed
				argv_3862 * temp_buffer = new (std::nothrow) argv_3862[his_size+1];
				if (temp_buffer == argv_2889) {
					argv_1993 = argv_2986;
				}
				else { // memory allocation was succesful
					// argv_1371 the string itself (not zero terminated) 
					memcpy (temp_buffer, argv_773, his_size);
					temp_buffer[his_size] = '\0';
					argv_773 += his_size;
					// copy the temporary argv_771 to the string
					_data = (char *) temp_buffer;
					// free the temporary argv_771 as copy was argv_1261
					delete [] temp_buffer;
				}
			}
		}
	}
	return (argv_1993);	
}

argv_3517 argv_1058::insert_buffer (argv_3862 * _buf, argv_3864 _size) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if ((argv_773 + _size) > argv_774) {
		argv_1993 = argv_2987;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (argv_773, _buf, _size);
		argv_773 += _size;
	}
	return (argv_1993);
}

// useful when cloning a given packet after reception
argv_3517 argv_1058::insert_fake_buffer (argv_3864 _size) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if ((argv_773 + _size) > argv_774) {
		argv_1993 = argv_2987;
	}
	else { // ok to proceed, no overflow will occur
		argv_773 += _size;
	}
	return (argv_1993);
}

argv_3517 argv_1058::argv_1372 (argv_3862 * _buf, argv_3864 _size) {
	argv_3517 argv_1993 = argv_2988;
	if (argv_3976 == true) {
		argv_1993 = argv_2984;
	}
	else if ((argv_773 + _size) > argv_774) {
		argv_1993 = argv_2987;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (_buf, argv_773, _size);
		argv_773 += _size;
	}
	return (argv_1993);
}


// adjust pointers of the mirror using the delta of the argv_1106 coder
void argv_1058::argv_1074 (argv_1058& _mirror) {
	_mirror.argv_3976		= argv_3976;
	argv_3864 delta				= argv_773 - argv_776; 
	_mirror.argv_773	= _mirror.argv_776 + delta;
}

argv_3862 *	argv_1058::argv_1740 () {
	return (argv_773);
}


void argv_1058::argv_1202 (argv_820 _msg, FILE * _fp) {
	fprintf (_fp, "'%s': argv_3976=%d, argv_776=0x%X, argv_773=0x%X, argv_774=0x%X", _msg, argv_3976,argv_776, argv_773, argv_774);
	argv_3862 * cptr = argv_776;
	fprintf (_fp, ", content = [");
	while (cptr < argv_773) {
		fprintf (_fp, "0x%02X,", (*cptr));
		cptr++;
	}
	fprintf (_fp, "]\r\n");
}

// the coder may contain argv_1139 even if pointers are not set correctly
// thus we use the size to argv_1200 (found from packet argv_2908 as 'argv_759')
void argv_1058::argv_1202 (argv_820 _msg, FILE * _fp, argv_3864 _buf_size) {
	fprintf (_fp, "'%s': argv_3976=%d, argv_776=0x%X, argv_773=0x%X, argv_774=0x%X", _msg, argv_3976,argv_776, argv_773, argv_774);
	argv_3862 * cptr = argv_776;
	fprintf (_fp, ", content = [");
	for (argv_3864 i=0 ; i<_buf_size ; i++) {
		fprintf (_fp, "0x%02X,", (*cptr));
		cptr++;
	}
	fprintf (_fp, "]\r\n");
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@





