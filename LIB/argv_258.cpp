// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_258.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the argv_1139 structure
// @@ and functions that are not project specific
// @@ and that may be used by any argv_2908/function
// @@ acrosss a project.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ scanning daemon service argv_2817 (win32 only)
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_820 argv_3491 = "antivirus (franck)";



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_802	
// @@
// @@ FUNCTION		:	argv_802	
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
// @@ Normal constructor of the 'argv_802' argv_2908.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_802::argv_802 () {
#if defined (__LINUX_OS__)
	pthread_mutex_init (&argv_2813, argv_2889);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	InitializeCriticalSection (&argv_1088);	
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_802	
// @@
// @@ FUNCTION		:	~argv_802	
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
// @@ destructor of the 'argv_802' argv_2908.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_802::~argv_802 () {
#if defined (__LINUX_OS__)
	pthread_mutex_lock (&argv_2813);
	pthread_mutex_unlock (&argv_2813);
	pthread_mutex_destroy (&argv_2813);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	EnterCriticalSection (&argv_1088);
	LeaveCriticalSection(&argv_1088);
	DeleteCriticalSection(&argv_1088);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_802	
// @@
// @@ FUNCTION		:	argv_2230
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
// @@ This function permits to acquire the argv_2230 to access
// @@ the resource to be protected from race condition.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_802::argv_2230 () {
#if defined (__LINUX_OS__)
	pthread_mutex_lock (&argv_2813);
#endif //  #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	EnterCriticalSection (&argv_1088);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_802	
// @@
// @@ FUNCTION		:	argv_3917
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
// @@ This function permits to release the argv_2230 to permit
// @@ other threads to access the resource that is to be protected 
// @@ from race condition.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_802::argv_3917 () {
#if defined (__LINUX_OS__)
	pthread_mutex_unlock (&argv_2813);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	LeaveCriticalSection (&argv_1088);
#endif // #if defined (__WIN32_OS__) 
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1319		
// @@
// @@ INPUT			:
// @@ _ercode: argv_3864 : the error argv_929 whose associated argv_2389 is to
// @@                 be retrieved.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the argv_2389 associated with the error argv_929 '_ercode'
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to map an error argv_929 as an integer to
// @@ a corresponding error argv_2389.
// @@ Notice that if the '_ercode' parameter does not correspond
// @@ to a valid error argv_929, then the string returned will be 
// @@ 'UNKNOWN_ERROR'.
// @@ The argv_2253 argv_3402 is returned as a string.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_1319 (argv_3864 _ercode) {
	char argv_3828[MAX_PATH];
	argv_1319 (_ercode, &argv_3828[0]);
	return (argv_3828);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_3251		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function is a wrapper that permits to initialize
// @@ the TCP/IP stack for the win32 network subsystem.
// @@ This function must be called once before any other winsock
// @@ function usage.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
bool argv_3251 () {
	bool bret	= true;
	WORD			argv_3552;
	WSADATA			argv_3995;
	argv_3552 =	MAKEWORD (1,1);
	if (WSAStartup (argv_3552, &argv_3995) != 0) {
		bret = false;
	}
	return (bret);
}
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_3738		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function is a wrapper that permits to terminate
// @@ the TCP/IP stack for the win32 network subsystem.
// @@ This function must be called once.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
bool argv_3738 () {
	bool bret = true;
	if (WSACleanup () != 0) {
		bret = false;
	}
	return (bret);
}
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_851		
// @@
// @@ INPUT			:
// @@ _filename: argv_820 : argv_2817 of the argv_1396 whose existence is to
// @@   be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the argv_1396 whose argv_2817 was given as a parameter exists.
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_1396 whose
// @@ argv_2817 was given as a parameter exists or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_851 (argv_820 _filename) {
	bool bret = true;

	FILE * argv_1478 = fopen (_filename, "rb");
	if (! argv_1478) {
		bret = false;
	}
	else { // argv_1396 was succesfully opened
		fclose(argv_1478);
	}	
	return(bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_852		
// @@
// @@ INPUT			:
// @@ _folder_name: argv_820 : argv_2817 of the folder whose existence is to
// @@   be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the folder whose argv_2817 was given as a parameter exists.
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the folder whose
// @@ argv_2817 was given as a parameter exists or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_852 (argv_820 _folder_name) {
	bool bret = false;
#if defined (__WIN32_OS__) 
	DWORD attr = GetFileAttributes (_folder_name);
	if ((attr != argv_1991) && (attr & FILE_ATTRIBUTE_DIRECTORY)) {
		bret = true;
	}
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	bret = argv_851 (_folder_name);
#endif // #if defined (__LINUX_OS__)
	return (bret);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1184		
// @@
// @@ INPUT			:
// @@ _filename: argv_820 : argv_2817 of the argv_1396 to be deleted
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the argv_1396 whose argv_2817 was given as a parameter was
// @@        succesfully deleted,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to delete the argv_1396 whose argv_2817 was
// @@ given as a parameter from the argv_1396 system.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1184 (argv_820 _filename) {
	bool bret = true;
	if (_filename == argv_2889) {
		bret = false;
	}
	else { // parameter is valid
#if defined (__WIN32_OS__)
		if (DeleteFile (_filename) == 0) {
			bret = false;
		}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (unlink (_filename) < 0) {
			bret = false;
		}
#endif // #if defined (__LINUX_OS__)
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	dump_buffer_2_file		
// @@
// @@ INPUT			:
// @@ _filename: argv_820 : argv_2817 of the argv_1396 whose existence is to
// @@   be checked.
// @@
// @@ _msg : argv_820 : argv_2389 associated to the argv_771.
// @@
// @@ _buf: argv_3862 *: pointer on the argv_771 to argv_1200 to log argv_1396.
// @@
// @@ _size: argv_3864: size of the argv_771 to be displayed to log argv_1396.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to dump the content of a given
// @@ binary argv_771 in a human readeable fashion to a argv_1396
// @@ whose argv_2817 is given as a parameter.
// @@ Notice : this function is for debug purpose only.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
void dump_buffer_2_file (argv_820 _filename, argv_820 _msg, argv_3862 * _buf, argv_3864 _size) {
#if defined (__DEBUG_COM_TRACE__)
	FILE * argv_1478 = fopen (_filename, "ab");
	if (argv_1478) {
		fprintf (argv_1478, "\r\n====== [%s] ======\r\n", _msg);
		for (argv_3864 i=0 ; i<_size ; i++) {
			fprintf (argv_1478, "%02X ", _buf[i]);
			if ((i>0) && ((i%32)==0)) {
				fprintf (argv_1478, "\r\n");
			}
		}
		fprintf (argv_1478, "\r\n");
		fclose (argv_1478);
	}
#endif // #if defined (DEBUG_COM)
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1027		
// @@
// @@ INPUT			:
// @@ _filename: argv_820 : argv_2817 of the argv_1396 whose argv_1396 is to be
// @@   computed.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3864 : size of the argv_1396 whose argv_2817 was given as a parameter.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the size
// @@ of the argv_1396 whose argv_2817 is given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3864 argv_1027 (argv_820 _filename) {
	argv_3864 size = 0;

	if (_filename != argv_2889) {
		FILE * argv_1478 = fopen (_filename, "rb");
		if (argv_1478) {
			fseek (argv_1478, 0, SEEK_END);
			size=ftell (argv_1478);
			fclose (argv_1478);
		}
	}
	return (size);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1052		
// @@
// @@ INPUT			:
// @@ _src_filename: argv_820: argv_2817 of the original argv_1396 to copy.
// @@
// @@ _dst_filename: argv_820 : argv_2817 of the copied argv_1396.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : 0 if operation was succesful,
// @@        1 if argv_2929 or more parameters are incorrect,
// @@        2 if the source argv_1396 could not be opened,
// @@        3 if the source argv_1396 could not be opened,
// @@        4 if the source argv_1396 size could not be computed,
// @@        5 if an error occured while reading the source argv_1396,
// @@		 6 if an error occured while writing the destination argv_1396,		
// @@		 7 if the destination argv_1396 could not be closed.
// @@
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to copy the argv_1396 '_src_filename'
// @@ to the destination argv_1396 '_dst_filename'. 
// @@
// @@ CONTRACT		: 
// @@ - '_src_filename' parameter must not be a argv_2889 pointer.
// @@ - '_dst_filename' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1054 (argv_820 _src_filename, argv_820 _dst_filename) {
	argv_3517 argv_1993 = 0;
	if ((_src_filename == argv_2889) || (_dst_filename == argv_2889)) {
		argv_1993 = 1;
	}
	else { // parameters are OK
		FILE * argv_1626 = fopen (_src_filename, "rb");
		if (! argv_1626) {
			argv_1993 = 2; 
		}
		else { // source argv_1396 opened succesfully
			FILE * argv_1497 = fopen (_dst_filename, "wb"); 
			if ( ! argv_1497) {
				argv_1993 = 3;
			}
			else { // destination argv_1396 opened succesfully
				char argv_770[argv_1053];
				unsigned long argv_1416 = argv_1027 (_src_filename);
				if (argv_1416 == 0) {
					argv_1993 = 4;
				}

				unsigned long nb_todo				= 0;
				unsigned long total_nb_remaining	= argv_1416;
				bool finished						= false;
				argv_3864 argv_2872						= 0;
				argv_3864 argv_2877						= 0;

				do {
					nb_todo = total_nb_remaining;
					if (nb_todo >= argv_1053) {
						nb_todo = argv_1053;	
					}

					argv_2872 = fread (argv_770, 1, nb_todo, argv_1626);
					if (argv_2872 != nb_todo) {
						argv_1993		= 5;
						break;
					}

					argv_2877 = fwrite (argv_770, 1, nb_todo, argv_1497);
					if (argv_2877 != nb_todo) {
						argv_1993		= 6;
						break;
					}

					total_nb_remaining -= nb_todo;
					if (total_nb_remaining == 0) {
						finished	= true;
					}
				}
				while (finished == false);

				if (fclose (argv_1497) != 0) {
					if (argv_1993 == 0) { // don't overwrite another error argv_929
						argv_1993 = 7;
					}
				}
			}

			fclose (argv_1626);
		}
	}

	// wait until the copied argv_1396 appears on the argv_1396 system
	if (argv_1993 == 0) {
		while (argv_851 (_dst_filename) == false) {
#if defined (__WIN32_OS__) 
			Sleep (250);
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
			usleep (250000);	
#endif // #if defined (__LINUX_OS__)
		}
	}

	return (argv_1993);
}


// prefix : dll_cipher
// suffix : dll
// => dll_cipher_20_12_74.dll
//argv_1731 (argv_1247.c_str(), _dll_name, "kernel_api", "dll", argv_3829); 
argv_3517 argv_1731 (argv_820 _dest_folder, argv_820 _original_full_filename, argv_820 _prefix, argv_820 _suffix, string& _tmp_filename, bool _do_copy) {	
	argv_3517 argv_1993 = 0;
	char argv_3828[MAX_PATH];
	_tmp_filename = "";

	// 1. generate temporary argv_1446
#if defined (__WIN32_OS__)
	string argv_2976 = "\\";
	SYSTEMTIME	argv_3824;
	GetLocalTime (&argv_3824);
	argv_3548 (argv_3828, MAX_PATH, "%s%s%s_%02d%02d%02d%02d%02d%02d%02d.%s", _dest_folder, argv_2976.c_str(), _prefix, argv_3824.wYear, argv_3824.wMonth, argv_3824.wDay, argv_3824.wHour, argv_3824.wMinute, argv_3824.wSecond, argv_3824.wMilliseconds, _suffix);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	string		argv_2976 = "/";
    time_t      argv_1121;
	struct		timeval argv_3733;
    struct tm * argv_3827;
	argv_1121 = argv_3825 (argv_2889);
	argv_3827 = localtime (&argv_1121);
	gettimeofday (&argv_3733, argv_2889);
	argv_3548 (argv_3828, MAX_PATH, "%s%s%s_%02d%02d%02d%02d%02d%02d%02d.%s", _dest_folder, argv_2976.c_str(), _prefix, argv_3827->tm_year, argv_3827->tm_mon, argv_3827->tm_mday, argv_3827->tm_hour, argv_3827->tm_min, argv_3827->tm_sec, (argv_3864) argv_3733.tv_usec, _suffix);
#endif // #if defined (__LINUX_OS__)
	argv_3828[MAX_PATH - 1] = '\0';

	_tmp_filename = argv_3828;
	
	// 2. copy original argv_1396 to temporary
	if (_do_copy == true) {
#if defined (__LINUX_OS__)
		cerr << "dest_folder   : " << _dest_folder << endl;
		cerr << "prefix        : " << _prefix << endl;
		cerr << "suffix        : " << _suffix << endl; 			
		cerr << "original argv_1396 : " << _original_full_filename << endl;
		cerr << "argv_3830  : " << _tmp_filename << endl;
#endif // #if defined (__LINUX_OS__)
		argv_1993 = argv_1054 (_original_full_filename, _tmp_filename.c_str());
	} 
	return (argv_1993);
}

#if defined (__LINUX_OS__)
void argv_736 (argv_3517 _sockfd) {
	int flag = 1;
	setsockopt (_sockfd, SOL_SOCKET, SO_REUSEADDR, &flag, sizeof(flag)); 
}
#endif // #if defined (__LINUX_OS__)


argv_3517 argv_2973 (argv_820 _filename, string& _private_mem) {
	argv_3517 argv_1993	= 0;
	bool found	= false;
	FILE * argv_1478 = fopen (_filename, "rb");
	if (! argv_1478) {
		argv_1993 = 1;
	}
	else {
		char argv_770[MAX_PATH];
		int line_nb = 1;
		char * cptr = fgets (argv_770, MAX_PATH, argv_1478);
		while (cptr != argv_2889) {
			if (line_nb == 4) {
				int size				= strlen (argv_770);
				int argv_3604				= 0; 
				int nb_value_done		= 0;
				string current_value;
				for (int i=0 ; i<size ; i++) {
					if (argv_770[i] != ' ') {
						argv_3604 = 0;
						current_value += argv_770[i];	
					}
					else if (argv_3604 == 0) {
						nb_value_done++;
						if (nb_value_done >= 5) {
							found			= true;
							_private_mem	= current_value.c_str();
							break;
						}
						argv_3604 = 1;
						current_value = "";
						// found = true;
					}
				}
				
				if (found == true) {
					break;
				}
			}
			cptr = fgets (argv_770, MAX_PATH, argv_1478);
			line_nb++;
		}
		fclose (argv_1478);
	}

	if (argv_1993 == 0) {
		if (found == false) {
			argv_1993 = 3;
		}
	}
	return (argv_1993);
}

argv_3517 parse_handle_file (argv_820 _filename, string& _count) {
	argv_3517 argv_1993	= 0;
	_count		= "";
	bool found	= false;
	FILE * argv_1478 = fopen (_filename, "rb");
	if ( ! argv_1478) {
		argv_1993 = 1;
	}
	else {
		string pattern = "Total handles: ";
		char * location_ptr = argv_2889;
		char argv_770[MAX_PATH];
		char * cptr = fgets (argv_770, MAX_PATH, argv_1478); 
		while (cptr != argv_2889) {
			location_ptr = strstr (argv_770, pattern.c_str());
			if (location_ptr != argv_2889) {
				char * first_byte = &location_ptr[pattern.size()];
				int i=0;
				while (isdigit (first_byte[i])) {
					_count += first_byte[i];
					i++;
				}
				if (_count != "") {
					found = true;
				}
			}
			cptr = fgets (argv_770, MAX_PATH, argv_1478); 
		}

		fclose (argv_1478);
	}

	if (argv_1993 == 0) {
		if (found == false) {
			argv_1993 = 3;
		}
	}
	return (argv_1993);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_842		
// @@
// @@ INPUT			:
// @@ _socket: argv_3550&: the argv_3549 descriptor that must be changed
// @@   to non-blocking mode.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to change the argv_3549 whose descriptor
// @@ was given as a parameter to non-blocking mode.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
argv_3517 argv_842 (argv_3550& _socket) {
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
argv_3517 argv_842 (argv_3517 _socket) {
#endif // #if defined (__LINUX_OS__)

	argv_3517 argv_1993 = argv_2380;

#if defined (__WIN32_OS__)
	unsigned long non_block_flag = 1;
	if (ioctlsocket (_socket, FIONBIO, &non_block_flag) == SOCKET_ERROR) {
		argv_1993 = argv_2357;
	}	
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	argv_3517 argv_3959;
	// acquire argv_1106 flag status
	argv_3959 = fcntl (_socket, F_GETFL, 0);
	// change the flag for this argv_3549
	if (fcntl (_socket, F_SETFL, argv_3959 | O_NONBLOCK) < 0) {
		argv_1993 = argv_2357;
	}
#endif // #if defined (__LINUX_OS__)

	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	disable_nagle_algorithm		
// @@
// @@ INPUT			:
// @@ _socket: argv_3550&: the argv_3549 descriptor that must be changed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2380 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to change the argv_3549 whose descriptor
// @@ was given as a parameter to disable the nagle algorithm.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
argv_3517 disable_nagle_algorithm (argv_3550& _socket) {
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
argv_3517 disable_nagle_algorithm (argv_3517 _socket) {
#endif // #if defined (__LINUX_OS__)

	argv_3517 argv_1993			= argv_2380;
	argv_3864 disabling_flag	= 1;
   
    if (setsockopt (_socket, IPPROTO_TCP, TCP_NODELAY, (char *) &disabling_flag, sizeof(argv_3864)) != 0) {
		argv_1993 = argv_2359;
	}	
	return (argv_1993);
}


bool argv_1374 (argv_820 _abs_filename, string& _left, string& _right) {
	bool bret		= true;
	bool dot_found	= false;
	argv_3864 size = strlen (_abs_filename);
	_right = "";
	_left  = "";
	argv_3864 argv_3601;
	for (argv_3601 = size - 1 ; argv_3601 >= 0 ; argv_3601--) {
		if (_abs_filename[argv_3601] == '\\') {
			dot_found = true;
			argv_3601++; // jump the '\\'
			break;
		}
	}

	if (dot_found == false) {
		bret = false;
	}
	else {
		argv_3864 i;
		for (i=argv_3601 ; i<size ; i++) {
			_right += _abs_filename[i];	
		}

		if (_right == "") { // failed to retrieve the relative path
			bret = false;
		}

		// argv_1371 the left part
		argv_3601--;
		if (argv_3601 >= 0) {
			for (i=0 ; i<argv_3601 ; i++) {
				_left += _abs_filename[i];	
			}
		}

		if (_left == "") { // failed to retrieve the relative path
			bret = false;
		}
	}
	return (bret);
}	

void argv_3483 (argv_3862 _separator, argv_820 _path, vector<string>& _v_result) {
	_v_result.clear ();
	argv_3864 size = strlen (_path);
	string argv_1106;
	for (argv_3864 i=0 ; i<size ; i++) {
		if (_path[i] == _separator) {
			_v_result.push_back (argv_1106);	
			argv_1106 = "";
		}
		else {
			argv_1106 += _path[i];
		}
	}

	// don't forget the last argv_2929 (if any)
	if (argv_1106 != "") {
		_v_result.push_back (argv_1106);
	}
}


#if defined (__WIN32_OS__)
// delete only files matching the pattern given as a parameter.
bool argv_1182 (argv_820 _folder_name, argv_820 _pattern) {
	bool bret = true;
	char previous_current_directory[MAX_PATH];
	// save the previous argv_1106 directory
	GetCurrentDirectory (MAX_PATH, previous_current_directory);

	if (SetCurrentDirectory (_folder_name) == false) {
		bret = false;
	}
	else {	
		WIN32_FIND_DATA	FindData;
		HANDLE hFind = FindFirstFile (_pattern, &FindData);

		if (hFind == INVALID_HANDLE_VALUE) { // no argv_1396 found matching the pattern
			bret = true;
		}
		else {
			string full_filename = "";
			do {
				// if it is not a directory
				if (!(FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
					full_filename = _folder_name;
					full_filename = full_filename + "\\" + FindData.cFileName;
					DeleteFile (full_filename.c_str());
				}
			}
			while (FindNextFile (hFind, &FindData)) ;
			FindClose (hFind);
		}
	}

	// restore the original argv_1106 directory
	SetCurrentDirectory (previous_current_directory);
	return (bret);
}
#endif // #if defined (__WIN32_OS__)


#if defined (__LINUX_OS__)
void argv_1182 (argv_820 _folder_name, argv_820 _pattern) {

}
#endif // #if defined (__LINUX_OS__)

void argv_617 (argv_3862 _data, vector<argv_819>& _v_atom) {
	argv_819 atom;
	atom.argv_3842		= argv_1046;
	atom.argv_3963	= _data;
	_v_atom.push_back (atom);
}

void argv_617 (argv_3864 _data, vector<argv_819>& _v_atom) {
	argv_819 atom;
	atom.argv_3842			= argv_1047;
	atom.argv_3964		= _data;
	_v_atom.push_back (atom);
}

void argv_617 (argv_820 _data, vector<argv_819>& _v_atom) {
	argv_819 atom;
	atom.argv_3842			= argv_1045;
	atom.argv_3962	= _data;
	_v_atom.push_back (atom);
}

void argv_617 (const string& _data, vector<argv_819>& _v_atom) {
	argv_819 atom;
	atom.argv_3842			= argv_1045;
	atom.argv_3962	= _data;
	_v_atom.push_back (atom);
}


bool argv_1373 (argv_820 _dirname, vector<string>& v_dir) {
	bool bret = true;
	string dirname = _dirname;
	char previous_current_directory[MAX_PATH];
	// save the previous argv_1106 directory
	GetCurrentDirectory (MAX_PATH, previous_current_directory);

	if (SetCurrentDirectory (_dirname) == false) {
		bret = false;
	}
	else {
		WIN32_FIND_DATA FindData; 
		HANDLE hFind = FindFirstFile ("*.*", &FindData);	

		if (hFind == INVALID_HANDLE_VALUE) {
			bret = false;
		}
		else {
			v_dir.clear ();
			argv_3864 name_size;
			do  {
				if (FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
					if((strcmp(FindData.cFileName, ".")!=0) && (strcmp(FindData.cFileName, "..")!=0)) {
//if ! defined (EXPLORE_HIDDEN_SYSTEM_DIR)
//						if (is_hidden_system_file (FindData.cFileName) == true) {
//#if defined (DEBUG_SCANNER)
						name_size = dirname.size ();
						if (name_size > 0) {
							if (dirname[name_size - 1] != '\\') {
								v_dir.push_back (dirname + "\\" + FindData.cFileName);
							}
							else {
								v_dir.push_back (dirname + FindData.cFileName);
							}
						}
					}
				}
			}
			while (FindNextFile (hFind, &FindData)) ;
		}
		FindClose (hFind);
	}

	// restore the original argv_1106 directory
	SetCurrentDirectory (previous_current_directory);
	return (bret);
}


bool empty_directory (argv_820 _folderPath) {
	bool bret = true;

	if (argv_852 (_folderPath) == false) {
		bret = false;
	}
	else {
		char fileFound[MAX_PATH];
		WIN32_FIND_DATA info;
		HANDLE hp; 
		argv_3548 (fileFound, MAX_PATH, "%s\\*.*", _folderPath);
		fileFound[MAX_PATH - 1] = '\0';
		hp = FindFirstFile(fileFound, &info);
		do {
			if (!((strcmp(info.cFileName, ".")==0)||
				(strcmp(info.cFileName, "..")==0))) {
			  if((info.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)==
				  FILE_ATTRIBUTE_DIRECTORY) {
				  string subFolder = _folderPath;
				  subFolder.append("\\");
				  subFolder.append(info.cFileName);
				  empty_directory((char*)subFolder.c_str());
				  RemoveDirectory(subFolder.c_str());
			  }
			  else {
				argv_3548 (fileFound, MAX_PATH, "%s\\%s", _folderPath, info.cFileName);
				fileFound[MAX_PATH - 1] = '\0';
				argv_3348 (fileFound);

				BOOL retVal = DeleteFile(fileFound);
				if (retVal == 0) {
					DWORD argv_1318 = GetLastError ();
					char argv_3828[MAX_PATH];
					argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: DeleteFile(%s) failed ! (erno=%d)", fileFound, argv_1318);
					argv_3828[MAX_PATH - 1] = '\0';
					MessageBox (argv_2889, argv_3828, "", MB_ICONERROR);
					bret = false;
					break;
				}
			  }
			}
		}while(FindNextFile(hp, &info)); 
		FindClose(hp);
	}
	return (bret);
}


argv_3517 empty_and_remove_directory (argv_820 _folder_name) {
	argv_3517 argv_1993 = 0;
	bool bret = empty_directory (_folder_name);
	if (bret == false) {
		argv_1993 = 1;
	} 
	else if (RemoveDirectory (_folder_name) == 0) { // failed
		DWORD argv_1318 = GetLastError ();
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: empty_and_remove_directory(%s) failed ! (erno=%d)", _folder_name, argv_1318);
		argv_3828[MAX_PATH - 1] = '\0';
		MessageBox (argv_2889, argv_3828, "", MB_ICONERROR);
		argv_1993 = 2;
	}
	return (argv_1993);
}


bool argv_1399 (argv_820 _filename) {
#if defined (__WIN32_OS__) 
	bool bret = false;

	DWORD dwAttrs; 
	dwAttrs = GetFileAttributes (_filename); 
	if ((dwAttrs != -1) && (dwAttrs & FILE_ATTRIBUTE_READONLY)) {
		bret = true;
	}
#endif // #if defined (__WIN32_OS__) 
	return (bret);
}

bool argv_3348 (argv_820 _filename) {
	bool bret = true;
#if defined (__WIN32_OS__) 
	DWORD dwAttrs;
	dwAttrs = GetFileAttributes (_filename); 
	if (dwAttrs == -1) {
		bret = false;
	}
	else {
		if (!(dwAttrs & FILE_ATTRIBUTE_READONLY)) {
			bret = false;
		}
		else {
			dwAttrs &= ~FILE_ATTRIBUTE_READONLY;
			if (! SetFileAttributes (_filename, dwAttrs)) {
				int argv_1993 = GetLastError();
				bret = false;	
			}
			else {
				bret = true;
			}
		}
	}
#endif // #if defined (__WIN32_OS__) 
	return (bret);
}


bool argv_625 (argv_820 _filename) {
	bool bret = true;
#if defined (__WIN32_OS__) 
	DWORD dwAttrs;
	dwAttrs = GetFileAttributes (_filename); 
	if (dwAttrs == -1) {
		bret = false;
	}
	else {
		dwAttrs |= FILE_ATTRIBUTE_READONLY;
		if (! SetFileAttributes (_filename, dwAttrs)) {
			int argv_1993 = GetLastError();
			bret = false;	
		}
		else {
			bret = true;
		}
	}
#endif // #if defined (__WIN32_OS__) 
	return (bret);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1319		
// @@
// @@ INPUT			:
// @@ _ercode: argv_3864 : the error argv_929 whose associated argv_2389 is to
// @@                 be retrieved.
// @@
// @@ OUTPUT		:	
// @@ _erstring: char * : the argv_771 in which this function will
// @@       copy the argv_3402 of the argv_2253 of the error argv_2389
// @@       associated with the error argv_929 '_ercode'.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to map an error argv_929 as an integer to
// @@ a corresponding error argv_2389.
// @@ Notice that if the '_ercode' parameter does not correspond
// @@ to a valid error argv_929, then the string returned will be 
// @@ 'UNKNOWN_ERROR'.
// @@ 
// @@ The argv_2253 argv_3402 is stored into the '_erstring' parameter.
// @@ Notice that it is up to the caller to allocate the '_erstring'
// @@ argv_771, with a sufficient size (MAX_PATH is a recommended argv_3960).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	void argv_1319 (argv_3864 _ercode, char * _erstring) {
		switch (_ercode) {
			// kernel related errors
			case argv_2103                                    :  strncpy (_erstring, "argv_2103", MAX_PATH);							break;
			case argv_2060                          :  strncpy (_erstring, "argv_2060", MAX_PATH);				break;
			case argv_2053                   :  strncpy (_erstring, "argv_2053", MAX_PATH);			break;
			case argv_2051                    :  strncpy (_erstring, "argv_2051", MAX_PATH);			break;
			case argv_2057           :  strncpy (_erstring, "argv_2057", MAX_PATH);	break;
			case argv_2058			   :  strncpy (_erstring, "argv_2058", MAX_PATH);		break;
			case argv_2092                         :  strncpy (_erstring, "argv_2092", MAX_PATH);				break;
			case argv_2088                 :  strncpy (_erstring, "argv_2088", MAX_PATH);		break;
			case argv_2089               :  strncpy (_erstring, "argv_2089", MAX_PATH);		break;
			case argv_2090                     :  strncpy (_erstring, "argv_2090", MAX_PATH);			break;
			case argv_2087                  :  strncpy (_erstring, "argv_2087", MAX_PATH);		break;
			case argv_2061                        :  strncpy (_erstring, "argv_2061", MAX_PATH);				break;
			case argv_2065                   :  strncpy (_erstring, "argv_2065", MAX_PATH);			break;
			case argv_2094          :  strncpy (_erstring, "argv_2094", MAX_PATH);break;
			case argv_2098            :  strncpy (_erstring, "argv_2098", MAX_PATH);  break;
			case argv_2036                  :  strncpy (_erstring, "argv_2036", MAX_PATH);		break;
			case argv_2052           :  strncpy (_erstring, "argv_2052", MAX_PATH);	break;
			case argv_2055          :  strncpy (_erstring, "argv_2055", MAX_PATH);break;
			case argv_2056              :  strncpy (_erstring, "argv_2056", MAX_PATH);	break;
			case argv_2043           :  strncpy (_erstring, "argv_2043", MAX_PATH);	break;
			case argv_2044         :  strncpy (_erstring, "argv_2044", MAX_PATH);  break;
			case argv_2085                             :  strncpy (_erstring, "argv_2085", MAX_PATH);					break;
			case argv_2049            :  strncpy (_erstring, "argv_2049", MAX_PATH);  break;
			case argv_2086          :  strncpy (_erstring, "argv_2086", MAX_PATH);break;
			case argv_2037           :  strncpy (_erstring, "argv_2037", MAX_PATH); break;
			case argv_2106            :  strncpy (_erstring, "argv_2106", MAX_PATH);  break;
			case argv_2035                     :  strncpy (_erstring, "argv_2035", MAX_PATH);			break;
			case argv_2102			   :  strncpy (_erstring, "argv_2102", MAX_PATH);	break;
			case argv_2101				   :  strncpy (_erstring, "argv_2101", MAX_PATH);		break;	
			case argv_2050					   :  strncpy (_erstring, "argv_2050", MAX_PATH);				break;	
			case argv_2100	       :  strncpy (_erstring, "argv_2100", MAX_PATH); break;
			case argv_2054         :  strncpy (_erstring, "argv_2054", MAX_PATH); break;
			case argv_2042        :  strncpy (_erstring, "argv_2042", MAX_PATH); break;
			case argv_2047				   :  strncpy (_erstring, "argv_2047", MAX_PATH);			break;
			case argv_2040			   :  strncpy (_erstring, "argv_2040", MAX_PATH);	break;
			case argv_2105					   :  strncpy (_erstring, "argv_2105", MAX_PATH);			break;
			case argv_2048 :  strncpy (_erstring, "argv_2048", MAX_PATH);	break;
			case argv_2091					   :  strncpy (_erstring, "argv_2091", MAX_PATH);			break;
			case argv_2046			   :  strncpy (_erstring, "argv_2046", MAX_PATH);	break;
			case argv_2097			   :  strncpy (_erstring, "argv_2097", MAX_PATH);	break;
			case argv_2107					   :  strncpy (_erstring, "argv_2107", MAX_PATH);			break;
			case argv_2104					   :  strncpy (_erstring, "argv_2104", MAX_PATH);			break;
			case argv_2045	   :  strncpy (_erstring, "argv_2045", MAX_PATH);	break;
			case argv_2095			   :  strncpy (_erstring, "argv_2095", MAX_PATH);	break;
			case argv_2059			   :  strncpy (_erstring, "argv_2059", MAX_PATH);		break;

			// library loader related errors
			case argv_2168                                :  strncpy (_erstring, "argv_2168", MAX_PATH);						break;
			case argv_2159                          :  strncpy (_erstring, "argv_2159", MAX_PATH);				break;
			case argv_2165                    :  strncpy (_erstring, "argv_2165", MAX_PATH);			break;
			case argv_2164                 :  strncpy (_erstring, "argv_2164", MAX_PATH);		break;
			case argv_2166                        :  strncpy (_erstring, "argv_2166", MAX_PATH);				break;
			case argv_2160                  :  strncpy (_erstring, "argv_2160", MAX_PATH);		break;
			case argv_2169                         :  strncpy (_erstring, "argv_2169", MAX_PATH);				break;
			case argv_2161                       :  strncpy (_erstring, "argv_2161", MAX_PATH);				break;
			case argv_2167                  :  strncpy (_erstring, "argv_2167", MAX_PATH);		break;
			case argv_2163            :  strncpy (_erstring, "argv_2163", MAX_PATH);  break;
			case argv_2162						   :  strncpy (_erstring, "argv_2162", MAX_PATH);				break;

			// plugin loader related errors
			case argv_3168                                    :  strncpy (_erstring, "argv_3168", MAX_PATH);							break;
			case argv_3148                          :  strncpy (_erstring, "argv_3148", MAX_PATH);				break;
			case argv_3147                   :  strncpy (_erstring, "argv_3147", MAX_PATH);			break;
			case argv_3145                    :  strncpy (_erstring, "argv_3145", MAX_PATH);			break;
			case argv_3157                               :  strncpy (_erstring, "argv_3157", MAX_PATH);						break;
			case argv_3137                 :  strncpy (_erstring, "argv_3137", MAX_PATH);		break;
			case argv_3158                     :  strncpy (_erstring, "argv_3158", MAX_PATH);			break;
			case argv_3166                            :  strncpy (_erstring, "argv_3166", MAX_PATH);					break;
			case argv_3167                           :  strncpy (_erstring, "argv_3167", MAX_PATH);					break;
			case argv_3169                      :  strncpy (_erstring, "argv_3169", MAX_PATH);			break;
			case argv_3177             :  strncpy (_erstring, "argv_3177", MAX_PATH);	break;
			case argv_3156                                :  strncpy (_erstring, "argv_3156", MAX_PATH);						break;
			case argv_3142                               :  strncpy (_erstring, "argv_3142", MAX_PATH);						break;
			case argv_3140                              :  strncpy (_erstring, "argv_3140", MAX_PATH);					break;
			case argv_3143                              :  strncpy (_erstring, "argv_3143", MAX_PATH);					break;
			case argv_3165                        :  strncpy (_erstring, "argv_3165", MAX_PATH);				break;
			case argv_3160                                :  strncpy (_erstring, "argv_3160", MAX_PATH);						break;
			case argv_3161                 :  strncpy (_erstring, "argv_3161", MAX_PATH);		break;
			case argv_3162                 :  strncpy (_erstring, "argv_3162", MAX_PATH);		break;
			case argv_3159                      :  strncpy (_erstring, "argv_3159", MAX_PATH);			break;
			case argv_3163                     :  strncpy (_erstring, "argv_3163", MAX_PATH);			break;
			case argv_3164                  :  strncpy (_erstring, "argv_3164", MAX_PATH);		break;
			case argv_3136                          :  strncpy (_erstring, "argv_3136", MAX_PATH);				break;
			case argv_3144               :  strncpy (_erstring, "argv_3144", MAX_PATH);		break;
			case argv_3146              :  strncpy (_erstring, "argv_3146", MAX_PATH);	break;
			case argv_3139        :  strncpy (_erstring, "argv_3139", MAX_PATH);	break;

			// compressor/decompressor related errors
			case argv_2131                                  :  strncpy (_erstring, "argv_2131", MAX_PATH);						break;
			case argv_2130                           :  strncpy (_erstring, "argv_2130", MAX_PATH);					break;
			case argv_2132                        :  strncpy (_erstring, "argv_2132", MAX_PATH);				break;
			case argv_2129                                 :  strncpy (_erstring, "argv_2129", MAX_PATH);						break;
			case argv_2133                     :  strncpy (_erstring, "argv_2133", MAX_PATH);			break;
			case argv_2134                   :  strncpy (_erstring, "argv_2134", MAX_PATH);			break;

			// cypher/decypher related errors
			case argv_1134                                    :  strncpy (_erstring, "argv_1134", MAX_PATH);							break;
			case argv_1132                          :  strncpy (_erstring, "argv_1132", MAX_PATH);				break;
			case argv_1137                          :  strncpy (_erstring, "argv_1137", MAX_PATH);				break;
			case argv_1133                                   :  strncpy (_erstring, "argv_1133", MAX_PATH);							break;

			// xmemroy related errors
			case argv_4007                                      :  strncpy (_erstring, "argv_4007", MAX_PATH);							break;
			case argv_4005                       :  strncpy (_erstring, "argv_4005", MAX_PATH);				break;
			case argv_3999                     :  strncpy (_erstring, "argv_3999", MAX_PATH);			break;
			case argv_3998                      :  strncpy (_erstring, "argv_3998", MAX_PATH);			break;
			case argv_4000                            :  strncpy (_erstring, "argv_4000", MAX_PATH);					break;

			// coff argv_1396 loader related errors
			case argv_2923                                    :  strncpy (_erstring, "argv_2923", MAX_PATH);							break;
			case argv_2914                             :  strncpy (_erstring, "argv_2914", MAX_PATH);					break;
			case argv_2921                                :  strncpy (_erstring, "argv_2921", MAX_PATH);						break;
			case argv_2913                       :  strncpy (_erstring, "argv_2913", MAX_PATH);				break;
			case argv_2922                    :  strncpy (_erstring, "argv_2922", MAX_PATH);			break;
			case argv_2909                              :  strncpy (_erstring, "argv_2909", MAX_PATH);					break;
			case argv_2917                    :  strncpy (_erstring, "argv_2917", MAX_PATH);			break;
			case argv_2912                      :  strncpy (_erstring, "argv_2912", MAX_PATH);			break;
			case argv_2920                        :  strncpy (_erstring, "argv_2920", MAX_PATH);				break;
			case argv_2919                          :  strncpy (_erstring, "argv_2919", MAX_PATH);				break;
			case argv_2915                   :  strncpy (_erstring, "argv_2915", MAX_PATH);			break;
			case argv_2916                   :  strncpy (_erstring, "argv_2916", MAX_PATH);			break;
			case argv_2925                          :  strncpy (_erstring, "argv_2925", MAX_PATH);				break;
			case argv_2910                   :  strncpy (_erstring, "argv_2910", MAX_PATH);			break;
			case argv_2924                     :  strncpy (_erstring, "argv_2924", MAX_PATH);			break;
			case argv_2918          :  strncpy (_erstring, "argv_2918", MAX_PATH);  break;
			case argv_2911          :  strncpy (_erstring, "argv_2911", MAX_PATH);  break;

			// list related errors
			case argv_2196                                      :  strncpy (_erstring, "argv_2196", MAX_PATH);							break;
			case argv_2195                     :  strncpy (_erstring, "argv_2195", MAX_PATH);			break;
			case argv_2194                            :  strncpy (_erstring, "argv_2194", MAX_PATH);					break;
			case argv_2193                 :  strncpy (_erstring, "argv_2193", MAX_PATH);		break;
			case argv_2187                                  :  strncpy (_erstring, "argv_2187", MAX_PATH);						break;
			case argv_2192              :  strncpy (_erstring, "argv_2192", MAX_PATH);	break;
			case argv_1010     :  strncpy (_erstring, "argv_1010", MAX_PATH);	break;
			case argv_2185						   :  strncpy (_erstring, "argv_2185", MAX_PATH);				break;

			// argv_1396 argv_3842 detection argv_3402 related errors
			case argv_3857                              :  strncpy (_erstring, "argv_3857", MAX_PATH);					break;
			case argv_3854                    :  strncpy (_erstring, "argv_3854", MAX_PATH);			break;
			case argv_3855             :  strncpy (_erstring, "argv_3855", MAX_PATH);	break;
			case argv_3853      :  strncpy (_erstring, "argv_3853", MAX_PATH);  break;
			case argv_3856                             :  strncpy (_erstring, "argv_3856", MAX_PATH);					break;

			// kernel related errors
			case argv_3135                                :  strncpy (_erstring, "argv_3135", MAX_PATH);						break;
			case argv_3132                      :  strncpy (_erstring, "argv_3132", MAX_PATH);			break;
			case argv_3130               :  strncpy (_erstring, "argv_3130", MAX_PATH);		break;
			case argv_3129                :  strncpy (_erstring, "argv_3129", MAX_PATH);		break;
			case argv_3131       :  strncpy (_erstring, "argv_3131", MAX_PATH);  break;
			case argv_3127                         :  strncpy (_erstring, "argv_3127", MAX_PATH);				break;
			case argv_3133                       :  strncpy (_erstring, "argv_3133", MAX_PATH);				break;
			case argv_3125                    :  strncpy (_erstring, "argv_3125", MAX_PATH);			break;
			case argv_3128                          :  strncpy (_erstring, "argv_3128", MAX_PATH);				break;
			case argv_3126                      :  strncpy (_erstring, "argv_3126", MAX_PATH);			break;
			case argv_3134                     :  strncpy (_erstring, "argv_3134", MAX_PATH);			break;

			// scanner related errors
			case argv_1413                              :  strncpy (_erstring, "argv_1413", MAX_PATH);					break;
			case argv_1410                    :  strncpy (_erstring, "argv_1410", MAX_PATH);			break;
			case argv_1404              :  strncpy (_erstring, "argv_1404", MAX_PATH);	break;
			case argv_1412             :  strncpy (_erstring, "argv_1412", MAX_PATH);	break;
			case argv_1403                      :  strncpy (_erstring, "argv_1403", MAX_PATH);			break;
			case argv_1409			   :  strncpy (_erstring, "argv_1409", MAX_PATH);		break;
			case argv_1415				   :  strncpy (_erstring, "argv_1415", MAX_PATH);		break;
			case argv_1414				   :  strncpy (_erstring, "argv_1414", MAX_PATH);		break;
			case argv_1411			   :  strncpy (_erstring, "argv_1411", MAX_PATH);		break;
			case argv_1405		   :  strncpy (_erstring, "argv_1405", MAX_PATH);		break;
			case argv_1406		   :  strncpy (_erstring, "argv_1406", MAX_PATH);		break;
			case argv_1408		   :  strncpy (_erstring, "argv_1408", MAX_PATH);		break;
			case argv_1407	   :  strncpy (_erstring, "argv_1407", MAX_PATH);	break;

			// symbol table related errors
			case argv_3640                              :  strncpy (_erstring, "argv_3640", MAX_PATH);					break;
			case argv_3638                    :  strncpy (_erstring, "argv_3638", MAX_PATH);			break;
			case argv_3641               :  strncpy (_erstring, "argv_3641", MAX_PATH);		break;
			case argv_3639                       :  strncpy (_erstring, "argv_3639", MAX_PATH);				break;
			case argv_3637             :  strncpy (_erstring, "argv_3637", MAX_PATH);	break;
			case argv_3636              :  strncpy (_erstring, "argv_3636", MAX_PATH);	break;

			// plugin manager related errors
			case argv_3155                            :  strncpy (_erstring, "argv_3155", MAX_PATH);					break;
			case argv_3152                  :  strncpy (_erstring, "argv_3152", MAX_PATH);		break;
			case argv_3150            :  strncpy (_erstring, "argv_3150", MAX_PATH);  break;
			case argv_3151           :  strncpy (_erstring, "argv_3151", MAX_PATH); break;
			case argv_3154             :  strncpy (_erstring, "argv_3154", MAX_PATH);	break;
			case argv_3153                     :  strncpy (_erstring, "argv_3153", MAX_PATH);			break;

			// COFF loader related errors
			case argv_947                               :  strncpy (_erstring, "argv_947", MAX_PATH);						break;
			case argv_940                     :  strncpy (_erstring, "argv_940", MAX_PATH);			break;
			case argv_936               :  strncpy (_erstring, "argv_936", MAX_PATH);		break;
			case argv_937              :  strncpy (_erstring, "argv_937", MAX_PATH);	break;
			case argv_938                 :  strncpy (_erstring, "argv_938", MAX_PATH);		break;
			case argv_948             :  strncpy (_erstring, "argv_948", MAX_PATH);	break;
			case argv_935                   :  strncpy (_erstring, "argv_935", MAX_PATH);			break;
			case argv_934              :  strncpy (_erstring, "argv_934", MAX_PATH);	break;
			case argv_944                              :  strncpy (_erstring, "argv_944", MAX_PATH);					break;
			case argv_950            :  strncpy (_erstring, "argv_950", MAX_PATH);  break;
			case argv_932          :  strncpy (_erstring, "argv_932", MAX_PATH);break;
			case argv_939            :  strncpy (_erstring, "argv_939", MAX_PATH);  break;
			case argv_949                 :  strncpy (_erstring, "argv_949", MAX_PATH);		break;
			case argv_933             :  strncpy (_erstring, "argv_933", MAX_PATH);	break;
			case argv_943              :  strncpy (_erstring, "argv_943", MAX_PATH);	break;
			case argv_946             :  strncpy (_erstring, "argv_946", MAX_PATH);	break;
			case argv_953           :  strncpy (_erstring, "argv_953", MAX_PATH); break;
			case argv_952          :  strncpy (_erstring, "argv_952", MAX_PATH);break;
			case argv_941                    :  strncpy (_erstring, "argv_941", MAX_PATH);			break;
			case argv_951                   :  strncpy (_erstring, "argv_951", MAX_PATH);			break;
			case argv_945              :  strncpy (_erstring, "argv_945", MAX_PATH);	break;
			case argv_942       :  strncpy (_erstring, "argv_942", MAX_PATH); break;

			// complex list related errors
			case argv_1014                              :  strncpy (_erstring, "argv_1014", MAX_PATH);					break;
			case argv_1011                    :  strncpy (_erstring, "argv_1011", MAX_PATH);			break;
			case argv_1009      :  strncpy (_erstring, "argv_1009", MAX_PATH);  break;
			case argv_1012             :  strncpy (_erstring, "argv_1012", MAX_PATH);	break;
			case argv_1013                       :  strncpy (_erstring, "argv_1013", MAX_PATH);				break;
			case argv_1008                          :  strncpy (_erstring, "argv_1008", MAX_PATH);				break;
			case argv_1007                :  strncpy (_erstring, "argv_1007", MAX_PATH);		break;

			// argv_1396 mapper related errors
			case argv_1462                                   :  strncpy (_erstring, "argv_1462", MAX_PATH);							break;
			case argv_1461                               :  strncpy (_erstring, "argv_1461", MAX_PATH);						break;
			case argv_1459                         :  strncpy (_erstring, "argv_1459", MAX_PATH);				break;
			case argv_1457           :  strncpy (_erstring, "argv_1457", MAX_PATH);	break;
			case argv_1460                  :  strncpy (_erstring, "argv_1460", MAX_PATH);		break;
			case argv_1458                  :  strncpy (_erstring, "argv_1458", MAX_PATH);		break;
			case argv_1456                   :  strncpy (_erstring, "argv_1456", MAX_PATH);			break;

			// PE extractor related error
			case argv_3079							   :  strncpy (_erstring, "argv_3079", MAX_PATH);					break;	
			case argv_3076					   :  strncpy (_erstring, "argv_3076", MAX_PATH);			break;			
			case argv_3075      :  strncpy (_erstring, "argv_3075", MAX_PATH); break;
			case argv_3078			   :  strncpy (_erstring, "argv_3078", MAX_PATH);	break;
			case argv_3077						   :  strncpy (_erstring, "argv_3077", MAX_PATH);				break;
			case argv_3074				   :  strncpy (_erstring, "argv_3074", MAX_PATH);		break;

			// argv_2352 related errors
			case argv_2380									   :  strncpy (_erstring, "argv_2380", MAX_PATH);							break;	
			case argv_2366                :  strncpy (_erstring, "argv_2366", MAX_PATH);		break;	
			case argv_2363               :  strncpy (_erstring, "argv_2363", MAX_PATH);		break;	
			case argv_2355               :  strncpy (_erstring, "argv_2355", MAX_PATH);		break;	
			case argv_2364                 :  strncpy (_erstring, "argv_2364", MAX_PATH);		break;	
			case argv_2365              :  strncpy (_erstring, "argv_2365", MAX_PATH);	break;	
			case argv_2367                           :  strncpy (_erstring, "argv_2367", MAX_PATH);					break;	
			case argv_2379                      :  strncpy (_erstring, "argv_2379", MAX_PATH);			break;	
			case argv_2354                                 :  strncpy (_erstring, "argv_2354", MAX_PATH);   			        break;	
			case argv_2368                               :  strncpy (_erstring, "argv_2368", MAX_PATH);   			        break;	
			case argv_2353                           :  strncpy (_erstring, "argv_2353", MAX_PATH); 		        break;	
			case argv_2356                           :  strncpy (_erstring, "argv_2356", MAX_PATH); 		        break;	
			case argv_2358                              :  strncpy (_erstring, "argv_2358", MAX_PATH); 		            break;	
			case argv_2357                 :  strncpy (_erstring, "argv_2357", MAX_PATH);       break;	
			case argv_2359              :  strncpy (_erstring, "argv_2359", MAX_PATH);    break;	
			case argv_2374                                 :  strncpy (_erstring, "argv_2374", MAX_PATH);						break;	
			case argv_2362                                :  strncpy (_erstring, "argv_2362", MAX_PATH);						break;	
			case argv_2371                                 :  strncpy (_erstring, "argv_2371", MAX_PATH);						break;	
			case argv_2378						   :  strncpy (_erstring, "argv_2378", MAX_PATH);				break;
			case argv_2372				   :  strncpy (_erstring, "argv_2372", MAX_PATH);		break;
			case argv_2375				   :  strncpy (_erstring, "argv_2375", MAX_PATH);		break;
			case argv_2373							   :  strncpy (_erstring, "argv_2373", MAX_PATH);						break;
			case argv_2370								   :  strncpy (_erstring, "argv_2370", MAX_PATH);						break;

			// packet coder related errors
			case argv_2988                                 :  strncpy (_erstring, "argv_2988", MAX_PATH); 		                break;	
			case argv_2985                       :  strncpy (_erstring, "argv_2985", MAX_PATH);             break;	
			case argv_2984                :  strncpy (_erstring, "argv_2984", MAX_PATH);      break;	
			case argv_2987                                :  strncpy (_erstring, "argv_2987", MAX_PATH);                      break;	
			case argv_2986                :  strncpy (_erstring, "argv_2986", MAX_PATH);      break;	
			case argv_2983                          :  strncpy (_erstring, "argv_2983", MAX_PATH);                break;	
				
			// packet related errors
			case argv_3026                                    :  strncpy (_erstring, "argv_3026", MAX_PATH);                             break;	
			case argv_2998                   :  strncpy (_erstring, "argv_2998", MAX_PATH);            break;	
			case argv_3002                     :  strncpy (_erstring, "argv_3002", MAX_PATH);              break;	
			case argv_3005							:  strncpy (_erstring, "argv_3005", MAX_PATH);					break;	
			case argv_2999                   :  strncpy (_erstring, "argv_2999", MAX_PATH);			break;	
			case argv_3008                               :  strncpy (_erstring, "argv_3008", MAX_PATH);			            break;	
			case argv_3003            :  strncpy (_erstring, "argv_3003", MAX_PATH);	    break;	
			case argv_2982			:  strncpy (_erstring, "argv_2982", MAX_PATH);	break;	
			case argv_3000	    :  strncpy (_erstring, "argv_3000", MAX_PATH);	break;	
			case argv_2991						:  strncpy (_erstring, "argv_2991", MAX_PATH);				break;	
			case argv_2990					:  strncpy (_erstring, "argv_2990", MAX_PATH);				break;	
			case argv_3013					:  strncpy (_erstring, "argv_3013", MAX_PATH);				break;	
			case argv_2994						:  strncpy (_erstring, "argv_2994", MAX_PATH);				break;	
			case argv_2992				:  strncpy (_erstring, "argv_2992", MAX_PATH);			break;	
			case argv_2995						:  strncpy (_erstring, "argv_2995", MAX_PATH);				break;	
			case argv_2996						:  strncpy (_erstring, "argv_2996", MAX_PATH);				break;	
			case argv_2993					:  strncpy (_erstring, "argv_2993", MAX_PATH);				break;	
			case argv_2989						:  strncpy (_erstring, "argv_2989", MAX_PATH);					break;	
			case argv_3006						:  strncpy (_erstring, "argv_3006", MAX_PATH);					break;	
			case argv_3030			:  strncpy (_erstring, "argv_3030", MAX_PATH);		break;	
			case argv_3004		:  strncpy (_erstring, "argv_3004", MAX_PATH);	break;	
			case PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET			:  strncpy (_erstring, "PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET", MAX_PATH);		break;	
			case argv_2997					:  strncpy (_erstring, "argv_2997", MAX_PATH);				break;	
			case argv_3007					:  strncpy (_erstring, "argv_3007", MAX_PATH);				break;	
			case argv_3001				:  strncpy (_erstring, "argv_3001", MAX_PATH);			break;	
			case PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET			:  strncpy (_erstring, "PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET", MAX_PATH);		break;	

			// test related error codes
			case argv_3775						:  strncpy (_erstring, "argv_3775", MAX_PATH);					break;	
			case argv_3774									:  strncpy (_erstring, "argv_3774", MAX_PATH);								break;	
			case argv_3751					:  strncpy (_erstring, "argv_3751", MAX_PATH);				break;	
			case argv_3750		:  strncpy (_erstring, "argv_3750", MAX_PATH);	break;	
			case argv_3756							:  strncpy (_erstring, "argv_3756", MAX_PATH);						break;	
			case argv_3748						:  strncpy (_erstring, "argv_3748", MAX_PATH);					break;	
			case argv_3749						:  strncpy (_erstring, "argv_3749", MAX_PATH);					break;	
			case argv_3753				:  strncpy (_erstring, "argv_3753", MAX_PATH);			break;	
			case argv_3752				:  strncpy (_erstring, "argv_3752", MAX_PATH);			break;	
			case argv_3757					:  strncpy (_erstring, "argv_3757", MAX_PATH);				break;	
			case argv_3755				:  strncpy (_erstring, "argv_3755", MAX_PATH);			break;	
			case argv_3754				:  strncpy (_erstring, "argv_3754", MAX_PATH);			break;	

			// test related error codes (internal test errors)
			case argv_3761							:  strncpy (_erstring, "argv_3761", MAX_PATH);						break;	
			case argv_3760				:  strncpy (_erstring, "argv_3760", MAX_PATH);			break;	

			// event loop related events
			case argv_1343								:  strncpy (_erstring, "argv_1343", MAX_PATH);							break;	
			case argv_1333					:  strncpy (_erstring, "argv_1333", MAX_PATH);				break;	
			case argv_1328						:  strncpy (_erstring, "argv_1328", MAX_PATH);					break;	
			case argv_1344					:  strncpy (_erstring, "argv_1344", MAX_PATH);				break;	
			case argv_1329				:  strncpy (_erstring, "argv_1329", MAX_PATH);			break;	
			case argv_1338							:  strncpy (_erstring, "argv_1338", MAX_PATH);						break;	
			case argv_1346						:  strncpy (_erstring, "argv_1346", MAX_PATH);					break;	
			case argv_1330			:  strncpy (_erstring, "argv_1330", MAX_PATH);		break;	
			case argv_1339						:  strncpy (_erstring, "argv_1339", MAX_PATH);					break;	
			case argv_1336					:  strncpy (_erstring, "argv_1336", MAX_PATH);				break;	
			case argv_1340					:  strncpy (_erstring, "argv_1340", MAX_PATH);				break;	
			case argv_1334			:  strncpy (_erstring, "argv_1334", MAX_PATH);		break;	
			case argv_1331			:  strncpy (_erstring, "argv_1331", MAX_PATH);		break;	
			case argv_1335			:  strncpy (_erstring, "argv_1335", MAX_PATH);		break;	
			case argv_1332					:  strncpy (_erstring, "argv_1332", MAX_PATH);				break;	
			case argv_1345					:  strncpy (_erstring, "argv_1345", MAX_PATH);				break;	
			case argv_1337					:  strncpy (_erstring, "argv_1337", MAX_PATH);				break;	
			case argv_1342						:  strncpy (_erstring, "argv_1342", MAX_PATH);					break;	
			case argv_1341				:  strncpy (_erstring, "argv_1341", MAX_PATH);			break;	

			// client argv_1139 related errors
			case argv_896							:  strncpy (_erstring, "argv_896", MAX_PATH);						break;	
			case argv_894			:  strncpy (_erstring, "argv_894", MAX_PATH);		break;	
			case argv_895				:  strncpy (_erstring, "argv_895", MAX_PATH);			break;	

			// scanning daemon related errors
			case argv_3439							:  strncpy (_erstring, "argv_3439", MAX_PATH);						break;	
			case argv_3438				:  strncpy (_erstring, "argv_3438", MAX_PATH);			break;	
			case argv_3437			:  strncpy (_erstring, "argv_3437", MAX_PATH);		break;	
			case argv_3427			:  strncpy (_erstring, "argv_3427", MAX_PATH);		break;	
			case argv_3433				:  strncpy (_erstring, "argv_3433", MAX_PATH);			break;	
			case argv_3428				:  strncpy (_erstring, "argv_3428", MAX_PATH);			break;	
			case argv_3436			:  strncpy (_erstring, "argv_3436", MAX_PATH);		break;	
			case argv_3431			:  strncpy (_erstring, "argv_3431", MAX_PATH);		break;	
			case argv_3432					:  strncpy (_erstring, "argv_3432", MAX_PATH);				break;	
			case argv_3429			:  strncpy (_erstring, "argv_3429", MAX_PATH);		break;	
			case argv_3434			:  strncpy (_erstring, "argv_3434", MAX_PATH);		break;	
			case argv_3435				:  strncpy (_erstring, "argv_3435", MAX_PATH);			break;	
			case argv_3430		:  strncpy (_erstring, "argv_3430", MAX_PATH);	break;	
			case argv_3441	:  strncpy (_erstring, "argv_3441", MAX_PATH);break;	
			case argv_3440		:  strncpy (_erstring, "argv_3440", MAX_PATH);	break;	

			// com client related errors
			case argv_976								:  strncpy (_erstring, "argv_976", MAX_PATH);							break;	
			case argv_970					:  strncpy (_erstring, "argv_970", MAX_PATH);				break;	
			case argv_968		:  strncpy (_erstring, "argv_968", MAX_PATH);	break;	
			case argv_971			:  strncpy (_erstring, "argv_971", MAX_PATH);		break;	
			case argv_972						:  strncpy (_erstring, "argv_972", MAX_PATH);					break;	
			case argv_969		:  strncpy (_erstring, "argv_969", MAX_PATH);	break;	
			case argv_977					:  strncpy (_erstring, "argv_977", MAX_PATH);				break;
			case argv_975						:  strncpy (_erstring, "argv_975", MAX_PATH);					break;

			// gateway related errors
			case argv_1716								:  strncpy (_erstring, "argv_1716", MAX_PATH);							break;	
			case argv_1713						:  strncpy (_erstring, "argv_1713", MAX_PATH);					break;	
			case argv_1714					:  strncpy (_erstring, "argv_1714", MAX_PATH);				break;	
			case argv_1712			:  strncpy (_erstring, "argv_1712", MAX_PATH);		break;	

 			// kernel manager related errors
			case argv_2083								:  strncpy (_erstring, "argv_2083", MAX_PATH);							break;	
			case argv_2073					:  strncpy (_erstring, "argv_2073", MAX_PATH);				break;	
			case argv_2078						:  strncpy (_erstring, "argv_2078", MAX_PATH);					break;	
			case argv_2075					:  strncpy (_erstring, "argv_2075", MAX_PATH);				break;	
			case argv_2071		:  strncpy (_erstring, "argv_2071", MAX_PATH);	break;	
			case argv_2072			:  strncpy (_erstring, "argv_2072", MAX_PATH);		break;	
			case argv_2076				:  strncpy (_erstring, "argv_2076", MAX_PATH);			break;	
			case argv_2070	:  strncpy (_erstring, "argv_2070", MAX_PATH);break;	
			case argv_2068			:  strncpy (_erstring, "argv_2068", MAX_PATH);		break;	
			case argv_2074			:  strncpy (_erstring, "argv_2074", MAX_PATH);		break;	
			case argv_2067			:  strncpy (_erstring, "argv_2067", MAX_PATH);		break;	
			case argv_2069		:  strncpy (_erstring, "argv_2069", MAX_PATH);	break;	
			case argv_2066					:  strncpy (_erstring, "argv_2066", MAX_PATH);				break;	
			case argv_2077		:  strncpy (_erstring, "argv_2077", MAX_PATH);	break;	

			// admin related errors
			case argv_3934							:  strncpy (_erstring, "argv_3934", MAX_PATH);								break;
			case argv_3927				:  strncpy (_erstring, "argv_3927", MAX_PATH);					break;
			case argv_3923		:  strncpy (_erstring, "argv_3923", MAX_PATH);			break;
			case argv_3931		:  strncpy (_erstring, "argv_3931", MAX_PATH);			break;
			case argv_3922				:  strncpy (_erstring, "argv_3922", MAX_PATH);					break;
			case argv_3924				:  strncpy (_erstring, "argv_3924", MAX_PATH);					break;
			case argv_3925	:  strncpy (_erstring, "argv_3925", MAX_PATH);		break;
			case argv_3926		:  strncpy (_erstring, "argv_3926", MAX_PATH);			break;
			case argv_3929	:  strncpy (_erstring, "argv_3929", MAX_PATH);		break;
			case argv_3935:  strncpy (_erstring, "argv_3935", MAX_PATH);	break;
			case argv_3930					:  strncpy (_erstring, "argv_3930", MAX_PATH);						break;
			case argv_3928		:  strncpy (_erstring, "argv_3928", MAX_PATH);			break;
			case argv_3936		:  strncpy (_erstring, "argv_3936", MAX_PATH);			break;
			case argv_3933	:  strncpy (_erstring, "argv_3933", MAX_PATH);		break;	
			case argv_3937					:  strncpy (_erstring, "argv_3937", MAX_PATH);						break;
			case argv_3938	:  strncpy (_erstring, "argv_3938", MAX_PATH);		break;

			// resolved shelf related errors
			case argv_3400							:  strncpy (_erstring, "argv_3400", MAX_PATH);						break;
			case argv_3397				:  strncpy (_erstring, "argv_3397", MAX_PATH);			break;
			case argv_3394		:  strncpy (_erstring, "argv_3394", MAX_PATH);	break;
			case argv_3395						:  strncpy (_erstring, "argv_3395", MAX_PATH);					break;
			case argv_3396					:  strncpy (_erstring, "argv_3396", MAX_PATH);				break;
			case argv_3399				:  strncpy (_erstring, "argv_3399", MAX_PATH);			break;
			case argv_3398	:  strncpy (_erstring, "argv_3398", MAX_PATH);break;

			// spyware manager related errors
			case argv_3566							:  strncpy (_erstring, "argv_3566", MAX_PATH);						break;
			case argv_3564					:  strncpy (_erstring, "argv_3564", MAX_PATH);				break;
			case argv_3565			:  strncpy (_erstring, "argv_3565", MAX_PATH);		break;
			case argv_3563		:  strncpy (_erstring, "argv_3563", MAX_PATH);	break;

			// inner argv_3221 related errors
			case argv_1988								:  strncpy (_erstring, "argv_1988", MAX_PATH);							break;
			case argv_1987					:  strncpy (_erstring, "argv_1987", MAX_PATH);				break;
			case argv_1984					:  strncpy (_erstring, "argv_1984", MAX_PATH);				break;
			case argv_1983			:  strncpy (_erstring, "argv_1983", MAX_PATH);		break;
			case argv_1986			:  strncpy (_erstring, "argv_1986", MAX_PATH);		break;
			case argv_1985			:  strncpy (_erstring, "argv_1985", MAX_PATH);		break;

			// inner client related errors
			case argv_1981							:  strncpy (_erstring, "argv_1981", MAX_PATH);						break;
			case argv_1978					:  strncpy (_erstring, "argv_1978", MAX_PATH);				break;
			case argv_1976		:  strncpy (_erstring, "argv_1976", MAX_PATH);	break;
			case argv_1979			:  strncpy (_erstring, "argv_1979", MAX_PATH);		break;
			case argv_1982					:  strncpy (_erstring, "argv_1982", MAX_PATH);				break;
			case argv_1975					:  strncpy (_erstring, "argv_1975", MAX_PATH);				break;
			case argv_1980		:  strncpy (_erstring, "argv_1980", MAX_PATH);	break;
			case argv_1977		:  strncpy (_erstring, "argv_1977", MAX_PATH);	break;

			// admin client related errors
			case argv_659							:  strncpy (_erstring, "argv_659", MAX_PATH);						break;
			case argv_654					:  strncpy (_erstring, "argv_654", MAX_PATH);				break;
			case argv_652	:  strncpy (_erstring, "argv_652", MAX_PATH); break;
			case argv_656			:  strncpy (_erstring, "argv_656", MAX_PATH);		break;
			case argv_653		:  strncpy (_erstring, "argv_653", MAX_PATH);	break;
			case argv_658				:  strncpy (_erstring, "argv_658", MAX_PATH);			break;
			case argv_657					:  strncpy (_erstring, "argv_657", MAX_PATH);				break;
			case argv_655					:  strncpy (_erstring, "argv_655", MAX_PATH);				break;

			// archive extractor related errors
			case argv_701						:  strncpy (_erstring, "argv_701", MAX_PATH);					break;
			case argv_703			:  strncpy (_erstring, "argv_703", MAX_PATH);		break;
			case argv_695					:  strncpy (_erstring, "argv_695", MAX_PATH);				break;
			case argv_696				:  strncpy (_erstring, "argv_696", MAX_PATH);			break;
			case argv_697			:  strncpy (_erstring, "argv_697", MAX_PATH);		break;
			case argv_702			:  strncpy (_erstring, "argv_702", MAX_PATH);		break;
			case argv_698		:  strncpy (_erstring, "argv_698", MAX_PATH);	break;
			case argv_694		:  strncpy (_erstring, "argv_694", MAX_PATH);	break;
			case argv_700		:  strncpy (_erstring, "argv_700", MAX_PATH);	break;
			case argv_690		:  strncpy (_erstring, "argv_690", MAX_PATH);	break;
			case argv_691				:  strncpy (_erstring, "argv_691", MAX_PATH);			break;
			case argv_692				:  strncpy (_erstring, "argv_692", MAX_PATH);			break;
			case argv_693				:  strncpy (_erstring, "argv_693", MAX_PATH);			break;

			// archive creator related errors
			case argv_685						:  strncpy (_erstring, "argv_685", MAX_PATH);					break;
			case argv_688			:  strncpy (_erstring, "argv_688", MAX_PATH);		break;
			case argv_681					:  strncpy (_erstring, "argv_681", MAX_PATH);				break;
			case argv_680				:  strncpy (_erstring, "argv_680", MAX_PATH);			break;
			case argv_682		:  strncpy (_erstring, "argv_682", MAX_PATH);	break;
			case argv_678		:  strncpy (_erstring, "argv_678", MAX_PATH);	break;
			case argv_686			:  strncpy (_erstring, "argv_686", MAX_PATH);		break;
			case argv_687			:  strncpy (_erstring, "argv_687", MAX_PATH);		break;
			case argv_679			:  strncpy (_erstring, "argv_679", MAX_PATH);		break;
			case argv_677				:  strncpy (_erstring, "argv_677", MAX_PATH);			break;
			case argv_683			:  strncpy (_erstring, "argv_683", MAX_PATH);		break;

			// argv_1396 argv_3842 analyzer related errors
			case argv_3849							:  strncpy (_erstring, "argv_3849", MAX_PATH);						break;
			case argv_3848				:  strncpy (_erstring, "argv_3848", MAX_PATH);			break;
			case argv_3845				:  strncpy (_erstring, "argv_3845", MAX_PATH);			break;
			case argv_3846					:  strncpy (_erstring, "argv_3846", MAX_PATH);				break;
			case argv_3847						:  strncpy (_erstring, "argv_3847", MAX_PATH);					break;

			// com manager related errors
			case argv_992							:  strncpy (_erstring, "argv_992", MAX_PATH);						break;
			case argv_985					:  strncpy (_erstring, "argv_985", MAX_PATH);				break;
			case argv_986				:  strncpy (_erstring, "argv_986", MAX_PATH);			break;
			case argv_989					:  strncpy (_erstring, "argv_989", MAX_PATH);				break;
			case argv_980					:  strncpy (_erstring, "argv_980", MAX_PATH);				break;
			case argv_983 :  strncpy (_erstring, "argv_983", MAX_PATH);		break;
			case argv_984				:  strncpy (_erstring, "argv_984", MAX_PATH);			break;
			case argv_990			:  strncpy (_erstring, "argv_990", MAX_PATH);		break;
			case argv_981			:  strncpy (_erstring, "argv_981", MAX_PATH);		break;
			case argv_991					:  strncpy (_erstring, "argv_991", MAX_PATH);				break;
			case argv_982				:  strncpy (_erstring, "argv_982", MAX_PATH);			break;
			case argv_987	:  strncpy (_erstring, "argv_987", MAX_PATH); break;
			case argv_994			:  strncpy (_erstring, "argv_994", MAX_PATH);		break;
			case argv_979		:  strncpy (_erstring, "argv_979", MAX_PATH);	break;

			// scan gateway related errors
			case argv_3449							:  strncpy (_erstring, "argv_3449", MAX_PATH);						break;
			case argv_3450		:  strncpy (_erstring, "argv_3450", MAX_PATH);	break;
			case argv_3447					:  strncpy (_erstring, "argv_3447", MAX_PATH);				break;
			case argv_3444	:  strncpy (_erstring, "argv_3444", MAX_PATH); break;
			case argv_3448				:  strncpy (_erstring, "argv_3448", MAX_PATH);			break;
			case argv_3451					:  strncpy (_erstring, "argv_3451", MAX_PATH);				break;
			case argv_3445		:  strncpy (_erstring, "argv_3445", MAX_PATH);	break;
			case argv_3446				:  strncpy (_erstring, "argv_3446", MAX_PATH);			break;

			// archive facility related errors
			case argv_718						:  strncpy (_erstring, "argv_718", MAX_PATH);					break;
			case argv_712				:  strncpy (_erstring, "argv_712", MAX_PATH);			break;
			case argv_710		:  strncpy (_erstring, "argv_710", MAX_PATH);	break;
			case argv_711		:  strncpy (_erstring, "argv_711", MAX_PATH);	break;
			case argv_716					:  strncpy (_erstring, "argv_716", MAX_PATH);				break;
			case argv_713			:  strncpy (_erstring, "argv_713", MAX_PATH);		break;
			case argv_714			:  strncpy (_erstring, "argv_714", MAX_PATH);		break;
			case argv_715	:  strncpy (_erstring, "argv_715", MAX_PATH);break;
			case argv_708		:  strncpy (_erstring, "argv_708", MAX_PATH);	break;
			case argv_706				:  strncpy (_erstring, "argv_706", MAX_PATH);			break;
			case argv_707	:  strncpy (_erstring, "argv_707", MAX_PATH);break;
			case argv_717			:  strncpy (_erstring, "argv_717", MAX_PATH);		break;
			case argv_709				:  strncpy (_erstring, "argv_709", MAX_PATH);			break;
			case argv_705		:  strncpy (_erstring, "argv_705", MAX_PATH);	break;
			case argv_704				:  strncpy (_erstring, "argv_704", MAX_PATH);			break;

			default: argv_1087 (_ercode, _erstring);
		}
		_erstring[MAX_PATH - 1] = '\0';
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_3170		
// @@
// @@ INPUT			:
// @@ _type: argv_3864: argv_3842 of the plugin whose associated readable argv_2817
// @@              is to be retrieved.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the readable argv_2817 associated with the plugin whose argv_3842
// @@ was given as a parameter.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 the readable plugin argv_2817
// @@ associated with the plugin argv_3842 passed as a parameter.
// @@ The argv_3402 is returned as a std::string.
// @@
// @@ Notice that if the parameter '_type' is not a valid plugin
// @@ argv_3842, then "<UNDEFINED_PLUGIN_TYPE>" is returned.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_3170 (argv_3864 _type) {
	switch (_type) {
		case argv_3173:				return ("argv_3173");
		case argv_3172:	return ("argv_3172");	
		case argv_3171:			return ("argv_3171");
		case argv_3174:					return ("argv_3174");
		case argv_3176:				return ("argv_3176");
		case argv_3175:					return ("argv_3175");

		default: return "<UNDEFINED_PLUGIN_TYPE>";		
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

