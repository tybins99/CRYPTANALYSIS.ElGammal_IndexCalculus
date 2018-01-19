// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_273.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the definition of the 
// @@ log facility that permits to log events and
// @@ to associate a argv_3825 and date, coming along
// @@ with a argv_3504 level for each event.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_340.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_918	
// @@
// @@ FUNCTION		:	argv_918	
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
argv_918::argv_918 () {
#if defined (__LINUX_OS__)
	pthread_mutex_init (&argv_2813, argv_2889);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	InitializeCriticalSection (&argv_1088);	
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_918	
// @@
// @@ FUNCTION		:	~argv_918	
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
argv_918::~argv_918 () {
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
// @@ CLASS			:	argv_918	
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
void argv_918::argv_2230 () {
#if defined (__LINUX_OS__)
	pthread_mutex_lock (&argv_2813);
#endif //  #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	EnterCriticalSection (&argv_1088);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_918	
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
void argv_918::argv_3917 () {
#if defined (__LINUX_OS__)
	pthread_mutex_unlock (&argv_2813);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	LeaveCriticalSection (&argv_1088);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1033
// @@
// @@ FUNCTION		:	insert_date
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1396.
// @@ - _date: argv_820: pointer on a string containing the argv_1106 date
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
// @@ This function permits to insert the date in a fixed
// @@ format into the argv_1106 argv_2173.
// @@
// @@ CONTRACT		: 
// @@ - '_fp' must be a valid opened argv_1396's pointer
// @@ - '_date' must not be a argv_2889 pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1033::insert_date (FILE * _fp, argv_820 _date) {
	int nb_2_do = strlen (_date);
	if (nb_2_do > argv_1144) {
		nb_2_do = argv_1144;	
	}
	fwrite (_date, 1, nb_2_do, _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1033
// @@
// @@ FUNCTION		:	insert_level
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1396.
// @@ - _level: argv_820: pointer on a string containing the argv_1106 date
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the argv_3504 level in a fixed
// @@ format into the argv_1106 argv_2173.
// @@ Notice that the argv_3504 level may be chosen out of :
// @@ - argv_2886
// @@ - argv_3989
// @@ - argv_1321
// @@ - argv_660
// @@ - argv_1152
// @@ - argv_2885
// @@
// @@ CONTRACT		:
// @@ - '_fp' must be a valid opened argv_1396's pointer
// @@ - '_level' must not be a argv_2889 pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1033::insert_level (FILE * _fp, argv_820 _level) {
	int nb_2_do = strlen (_level);
	if (nb_2_do > argv_2153) {
		nb_2_do = argv_2153;	
	}
	fwrite (_level, 1, nb_2_do, _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1033
// @@
// @@ FUNCTION		:	insert_body
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1396.
// @@ - _level: argv_820: pointer on a string containing the argv_1106 date
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
// @@ This function permits to insert the argv_3504 level in a fixed
// @@ format into the argv_1106 argv_2173.
// @@
// @@ CONTRACT		:
// @@ - '_fp' must be a valid opened argv_1396's pointer
// @@ - '_level' must not be a argv_2889 pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1033::insert_body (FILE * _fp, argv_820 _body) {
	int nb_2_do = strlen (_body);
	if (nb_2_do > argv_2174) {
		nb_2_do = argv_2174;
	}
	fwrite (_body, 1, nb_2_do, _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
	int remaining = argv_2174 - nb_2_do;
	if (remaining > 0) {
		char vide = ' ';
		for (int i=0 ; i<remaining ; i++) {
			fwrite (&vide, 1, 1, _fp);
		}
#if defined (__LOG_DEBUG_MEDIUM__)
		fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
	}
	insert_terminator (_fp);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1033
// @@
// @@ FUNCTION		:	insert_terminator
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1396.
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
// @@ This function permits to end the argv_1106 argv_2173 by inserting
// @@ an end of argv_2173 character sequence, that is OS dependant.
// @@
// @@ CONTRACT		: 
// @@ - '_fp' must be a valid opened argv_1396's pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1033::insert_terminator (FILE * _fp) {
	fwrite (argv_3739.c_str(), 1, argv_3739.size (), _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1211	
// @@
// @@ INPUT			:
// @@ - _filename: argv_820: argv_2817 of the destination argv_1396.
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ - _logger: argv_917 : instance of the log facility to use.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to dump the content of a given argv_1396
// @@ into the argv_1106 log argv_1396 using the log facility given as
// @@ a parameter.
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' must not be a argv_2889 pointer
// @@ - '_filename' must be the argv_2817 of a valid and existing argv_1396.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1211 (argv_820 _filename, argv_917& _logger) {
	int ic;
	FILE * argv_1478 = fopen (_filename, "rb");
	if (! argv_1478) {
		_logger.argv_2247 (argv_1321, "+++ failed to visualize argv_1396 (fopen failed) : ", _filename);	
	}
	else {
		string total = "";
		ic = fgetc (argv_1478);
		while (ic != EOF) {
			total += ic;
			ic = fgetc (argv_1478);
		}
		fclose (argv_1478);
		_logger.argv_2247 (argv_1152, "argv_1396 content : ", total.c_str());
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_917		
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
// @@ Normal constructor of the argv_917 argv_2908.
// @@
// @@ CONTRACT 		:	none	 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_917::argv_917() {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	~argv_917		
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
// @@ destructor of the argv_917 argv_2908.
// @@
// @@ CONTRACT 		:	none	 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_917::~argv_917() {
	argv_924 ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_864	
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
// @@ This function permits to determine whether the argv_1106 argv_2173
// @@ is the last argv_2173 of the rolling log argv_1396. If it is the case
// @@ then the argv_1396 is rewinded so that the next argv_2173 logged will
// @@ be located at the top of the log argv_1396.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_864 () {
	argv_1117++;
	if (argv_1117 >= argv_2239) {
		rewind (argv_1478);
		argv_1117 = 1;
	}

#if defined (__LOG_DEBUG_STRONG__)
	fclose (argv_1478);
	argv_1478 = fopen (argv_1446.c_str(), "ab");
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2937	
// @@
// @@ INPUT			:
// @@ _filename: string : argv_2817 of the log argv_1396 to open.
// @@ _error_log_ptr: argv_635 of the error log, can be argv_2889 if
// @@    error log is not used.
// @@ - _credential: string: symbolic argv_2817 of the log.
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
// @@ This function permits to open the log argv_1396 whose argv_2817 is given
// @@ as a parameter.
// @@ Notice that as soon as the log argv_1396 was opened, the opening date
// @@ and argv_3825 is logged to this log argv_1396 automatically.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_917::argv_2937 (string _filename, argv_917 * _error_log_ptr, string _credential) {
	bool bret = true;

	if (argv_1478 != argv_2889) { // argv_1396 already opened
		bret = false;
	}
	else {
		argv_1446 = _filename;
		argv_1478 = fopen (_filename.c_str(), "wb");

		if (!argv_1478) {
			bret = false;
		}
		else { // log opened ok
			argv_3940 (true);
			string stmp = "Log argv_1396 creation date : ";
			stmp = stmp + argv_3734;
			//argv_2247 (argv_660, stmp.c_str());

			argv_1078 = _credential;
			// the error log
			argv_1322 = _error_log_ptr;
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_3940	
// @@
// @@ INPUT			:
// @@ _large_mode: bool: true if we want a large argv_1200 of argv_1106 date and argv_3825
// @@                    false otherwise.
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
// @@ This function permits to obtain the argv_1106 date and argv_3825
// @@ formatted to either a condensed string, or to a developped
// @@ string.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_3940 (bool _large_mode) {
	#if defined (__WIN32_OS__)
		GetLocalTime (&argv_3824);
		if (_large_mode == false) {
			argv_3548 (argv_3734, MAX_PATH, "%02d/%02d-%02dh%02dm%02ds ", argv_3824.wMonth, argv_3824.wDay, argv_3824.wHour, argv_3824.wMinute, argv_3824.wSecond);
		}
		else {
			argv_3548 (argv_3734, MAX_PATH, "month %d the %dth at %d hour %d minutes and %d seconds", argv_3824.wMonth, argv_3824.wDay, argv_3824.wHour, argv_3824.wMinute, argv_3824.wSecond);
		}
	#endif // #if defined (__WIN32_OS__)
	#if defined (__LINUX_OS__)
		argv_1121 = argv_3825 (argv_2889);
		argv_3827 = localtime (&argv_1121);
		if (_large_mode == false) {
			argv_3548 (argv_3734, MAX_PATH, "%02d/%02d-%02dh%02dm%02ds ", argv_3827->tm_mon, argv_3827->tm_mday, argv_3827->tm_hour, argv_3827->tm_min, argv_3827->tm_sec);
		}
		else {
			argv_3548 (argv_3734, MAX_PATH, "month %d the %dth at %d hour %d minutes and %d seconds", argv_3827->tm_mon, argv_3827->tm_mday, argv_3827->tm_hour, argv_3827->tm_min, argv_3827->tm_sec);
		}
	#endif // #if defined (__LINUX_OS__)
	argv_3734[MAX_PATH - 1] = '\0';
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	insert_date		
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
// @@ This function permits to update the argv_1106 argv_3825 and to
// @@ insert it into the argv_1907 of a new argv_2173 of the log argv_1396.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::insert_date () {
    if (argv_1478) {
        argv_3940 ();
		argv_2931.insert_date (argv_1478, argv_3734);
    }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	insert_level	
// @@
// @@ INPUT			:
// @@ _level: argv_3864: level to be displayed.
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
// @@ This function permits to insert the level given as a parameter
// @@ to the argv_1907 of a new argv_2173 of the log argv_1396.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::insert_level (argv_3864 _level) {
    string level = "|???| ";
    switch (_level) {
        case argv_2886:
            level = "|NOR| ";
            break;
        case argv_3989:
            level = "|WRN| ";
            break;
        case argv_1321:
            level = "|ERR| ";
            break;
        case argv_660:
            level = "|ADM| ";
            break;
        case argv_1152:
            level = "|DBG| ";
            break;
        case argv_2885:
            level = "     ";
            break;
    }
    if (argv_1478) {
		argv_2931.insert_level (argv_1478, level.c_str());
    }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS				: argv_917
// @@
// @@ FUNCTION			: argv_924
// @@
// @@ INPUT				: none
// @@
// @@ OUTPUT			: none
// @@
// @@ IO				: none
// @@
// @@ RETURN VALUE		: none
// @@	
// @@ DISCLOSURE		: public	
// @@
// @@ DESCRIPTION:
// @@ This function just flushes the argv_1139 and argv_921 the previously
// @@ opened log argv_1396.
// @@
// @@ CONTRACT			: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_924() {
	if ((argv_2238 == true) && (argv_1478)) {
		fclose (argv_1478);
		argv_1478 = argv_2889;
	}
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS				: argv_917
// @@
// @@ FUNCTION			: reset
// @@
// @@ INPUT				: none
// @@
// @@ OUTPUT			: none
// @@
// @@ IO				: none
// @@
// @@ RETURN VALUE		: none
// @@	
// @@ DISCLOSURE		: public	
// @@
// @@ DESCRIPTION:
// @@ This function permits to set all fields of the
// @@ argv_2908 to an initial argv_3604.
// @@
// @@ CONTRACT			: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::reset () {
	argv_1446		= "";
	argv_1078		= "";
	argv_1478				= argv_2889;
	argv_1322	= argv_2889;
	argv_1117	= 1;
	argv_2238		= true;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2247		
// @@
// @@ INPUT			:
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _cptr: char *: the argv_2389 to log
// @@ _no_eol: bool: true if an end of argv_2173 should be appended at the end of the
// @@                argv_2389, false otherwise.
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
// @@ This function logs the argv_2389(s) given as parameter(s) and associate
// @@ with them the argv_1106 argv_3825 and a argv_3504 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2247 (argv_3864 _level, argv_820 _cptr) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			argv_2931.insert_body (argv_1478, _cptr);
			argv_864 ();
		}
	}
#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1322 != argv_2889) && (_level == argv_1321)) {
		string total = argv_1078 + _cptr;
		argv_1322->argv_2247 (_level, total.c_str());	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_1747		
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
// @@ This function permits to retrieve the argv_2817 of the argv_1396
// @@ that is currently opened.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_917::argv_1747 () {
	return (argv_1446);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2247		
// @@
// @@ INPUT			:
// @@ _level: argv_3864  :	the argv_3504 level associated with the argv_2389 to log.
// @@ _cptr: char * :	the first argv_2389 to log
// @@ _cptr2: char *:	the second argv_2389 to log
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
// @@ This function logs the argv_2389(s) given as parameter(s) and associate
// @@ with them the argv_1106 argv_3825 and a argv_3504 level given as a parameter.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2247 (argv_3864 _level, argv_820 _cptr, argv_820 _cptr2) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			string stmp = _cptr;
			stmp = stmp + _cptr2;
			argv_2931.insert_body (argv_1478, stmp.c_str());
			argv_864 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1322 != argv_2889) && (_level == argv_1321)) {
		string total = argv_1078 + _cptr;
		argv_1322->argv_2247 (_level, total.c_str(), _cptr2);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2247		
// @@
// @@ INPUT			:
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _cptr: char * : the first argv_2389 to log
// @@ _cptr2: char *: the second argv_2389 to log
// @@ _cptr3: char *: the third argv_2389 to log
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
// @@ This function logs the argv_2389(s) given as parameter(s) and associate
// @@ with them the argv_1106 argv_3825 and a argv_3504 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2247 (argv_3864 _level, argv_820 _cptr, argv_820 _cptr2, argv_820 _cptr3) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			string stmp = _cptr;
			stmp = stmp + _cptr2;
			stmp = stmp + _cptr3;
			argv_2931.insert_body (argv_1478, stmp.c_str());
			argv_864 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1322 != argv_2889) && (_level == argv_1321)) {
		string total = argv_1078 + _cptr;
		argv_1322->argv_2247 (_level, total.c_str(), _cptr2, _cptr3);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2247	
// @@
// @@ INPUT			:
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _cptr: char * : the first argv_2389 to log
// @@ _cptr2: char *: the second argv_2389 to log
// @@ _cptr3: char *: the third argv_2389 to log
// @@ _cptr4: char *: the fourth argv_2389 to log
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
// @@ This function logs the argv_2389(s) given as parameter(s) and associate
// @@ with them the argv_1106 argv_3825 and a argv_3504 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2247 (argv_3864 _level, argv_820 _cptr, argv_820 _cptr2, argv_820 _cptr3, argv_820 _cptr4) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			string stmp = _cptr;
			stmp = stmp + _cptr2;
			stmp = stmp + _cptr3;
			stmp = stmp + _cptr4;
			argv_2931.insert_body (argv_1478, stmp.c_str());
			argv_864 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1322 != argv_2889) && (_level == argv_1321)) {
		string total = argv_1078 + _cptr;
		argv_1322->argv_2247 (_level, total.c_str(), _cptr2, _cptr3, _cptr4);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2247	
// @@
// @@ INPUT			:	
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _cptr: char *: the argv_2389 to write to log argv_1396.
// @@ _val: argv_3517: the argv_3960 to log after the argv_2389.
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
// @@ This function logs the argv_2389(s) given as parameter(s) and associate
// @@ with them the argv_1106 argv_3825 and a argv_3504 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2247 (argv_3864 _level, argv_820 _cptr, argv_3517 _val) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "%s %d", _cptr, _val);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2931.insert_body (argv_1478, argv_3828);
			argv_864 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1322 != argv_2889) && (_level == argv_1321)) {
		string total = argv_1078 + _cptr;
		argv_1322->argv_2247 (_level, total.c_str(), _val);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2247	
// @@
// @@ INPUT			:	
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _cptr: char *: the argv_2389 to write to log argv_1396.
// @@ _val: argv_3864: the argv_3960 to log after the argv_2389.
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
// @@ This function logs the argv_2389(s) given as parameter(s) and associate
// @@ with them the argv_1106 argv_3825 and a argv_3504 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2247 (argv_3864 _level, argv_820 _cptr, argv_3864 _val) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "%s %u", _cptr, _val);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2931.insert_body (argv_1478, argv_3828);
			argv_864 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1322 != argv_2889) && (_level == argv_1321)) {
		string total = argv_1078 + _cptr;
		argv_1322->argv_2247 (_level, total.c_str(), _val);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2247	
// @@
// @@ INPUT			:	
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _val_zero: argv_3864: the first argv_3960 to log.
// @@ _val_un  : argv_3864: the second argv_3960 to log.
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
// @@ This function logs the argv_2389(s) given as parameter(s) and associate
// @@ with them the argv_1106 argv_3825 and a argv_3504 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2247 (argv_3864 _level, argv_3864 _val_zero, argv_3864 _val_un) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "%u %u", _val_zero, _val_un);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2931.insert_body (argv_1478, argv_3828);
			argv_864 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1322 != argv_2889) && (_level == argv_1321)) {
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "%s%u %u", argv_1078.c_str(), _val_zero, _val_un);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1322->argv_2247 (_level, argv_3828);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2247	
// @@
// @@ INPUT			:	
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _cptr: argv_820: the argv_2389 to log to argv_1396.
// @@ _val: unsigned long: the argv_3960 to log to argv_1396 after the argv_2389.
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
// @@ This function logs the argv_2389(s) given as parameter(s) and associate
// @@ with them the argv_1106 argv_3825 and a argv_3504 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2247 (argv_3864 _level, argv_820 _cptr, unsigned long _val) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "%s %u", _cptr, (argv_3864) _val);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2931.insert_body (argv_1478, argv_3828);
			argv_864 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1322 != argv_2889) && (_level == argv_1321)) {
		string total = argv_1078 + _cptr;
		argv_1322->argv_2247 (_level, total.c_str(), _val);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2248	
// @@
// @@ INPUT			:	
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _cptr: argv_820: the argv_2389 to log to argv_1396.
// @@ _value: argv_3864: the argv_3960 to log to argv_1396 after the argv_2389.
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
// @@ This function logs the argv_2389(s) given as parameter(s) and associate
// @@ with them the argv_1106 argv_3825 and a argv_3504 level given as a parameter.
// @@ Notice that the '_value' parameter argv_2944 logged in hexadecimal format.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2248 (argv_3864 _level, argv_820 _msg, argv_3864 _value) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "%s %X", _msg, _value);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2931.insert_body (argv_1478, argv_3828);
			argv_864 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1322 != argv_2889) && (_level == argv_1321)) {
		string total = argv_1078 + _msg;
		argv_1322->argv_2248 (_level, total.c_str(), _value);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2233	
// @@
// @@ INPUT			:	
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _buffer: argv_3862 *: the argv_635 of the first byte of the argv_771 to log.
// @@ _size: argv_3864: the size of the argv_771 to log.
// @@ _comment: argv_820: the argv_998 associated with the argv_771 to log.
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
// @@ This function is for debug purpose only.
// @@ it dump the content of the argv_771 '_buffer' into the 
// @@ argv_1396 : C:\\binary.bin, the format of the argv_1396 being
// @@ a readable sequence of hexadecimal values (a argv_753).
// @@ So it can be seen as an outbound save up function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2233 (argv_3864 _level, argv_3862 * _buffer, argv_3864 _size, argv_820 _comment) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			char argv_3828[MAX_PATH];
			char tmp2[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "=== BUFFER argv_2927 : %s ===", _comment);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2931.insert_body (argv_1478, argv_3828);
			argv_864 ();

			argv_3828[0]			= '\0';
			argv_3864 nb_byte	= 0;
			argv_3864 i			= 0;
			FILE * fpzx		= argv_2889;

			fpzx = fopen ("C:\\binary.bin", "wb");

			if (! fpzx) {
#if defined (__WIN32_OS__) 
				MessageBox (argv_2889, "failed to open bin log argv_1396 !", "", MB_ICONERROR);
#endif // #if defined (__WIN32_OS__) 
			}

			for (i=0 ; i<_size ; i++) {
				fwrite ((char *) &_buffer[i], 1, 1, fpzx);
				fflush (fpzx);
				argv_3548 (tmp2, MAX_PATH, "%02X ", _buffer[i]);
				tmp2[MAX_PATH - 1] = '\0';
				strcat (argv_3828, tmp2);
				nb_byte++;

				if (nb_byte >= 16) {
					insert_date ();
					insert_level (_level);
					argv_2931.insert_body (argv_1478, argv_3828);
					argv_3828[0] = '\0'; // reset the cumulative argv_2173
					nb_byte = 0;
				}
			}

			fclose (fpzx);

			// flush the remaining argv_782 (if any)
			if (nb_byte > 0) {
				insert_date ();
				insert_level (_level);
				argv_2931.insert_body (argv_1478, argv_3828);
			}
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_2233	
// @@
// @@ INPUT			:	
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _buffer: argv_3862 *: the argv_635 of the first byte of the argv_771 to log.
// @@ _comment: argv_820: the argv_998 associated with the argv_771 to log.
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
// @@ This function is for debug purpose only.
// @@ it permits to dump to the log argv_1396 the content of 
// @@ a given argv_771 containing the opcode of a given function.
// @@ Notice that this function stops to dump when it reaches
// @@ a RET (0x3C) or a NOP (0x90) instruction.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_2234 (argv_3864 _level, argv_3862 * _buffer, argv_820 _comment) {
	if (argv_2238 == true) {
		if (argv_1478) {
			insert_date ();
			insert_level (_level);
			char argv_3828[MAX_PATH];
			char tmp2[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "=== %s ===", _comment);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2931.insert_body (argv_1478, argv_3828);
			argv_864 ();

			argv_3828[0]			= '\0';
			argv_3864 nb_byte	= 0;
			argv_3864 i			= 0;

			for (i=0 ; ; i++) {
				argv_3548 (tmp2, MAX_PATH, "%02X ", _buffer[i]);
				tmp2[MAX_PATH - 1] = '\0';
				strcat (argv_3828, tmp2);
				nb_byte++;

				if (nb_byte >= 32) {
					insert_date ();
					insert_level (_level);
					argv_2931.insert_body (argv_1478, argv_3828);
					argv_3828[0] = '\0'; // reset the cumulative argv_2173
					nb_byte = 0;
				}

				// functions finish by a RET + NOP instruction
				if ((i>256) || ((i > 0) && (_buffer[i] == 0x90) && (_buffer[i-1] == 0x3C))) { 
					break;
				}

			}

			// flush the remaining argv_782 (if any)
			if (nb_byte > 0) {
				insert_date ();
				insert_level (_level);
				argv_2931.insert_body (argv_1478, argv_3828);
			}
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_1745	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ FILE * : the argv_1396 descriptor of the opened log argv_1396.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the descriptor of
// @@ the log argv_1396 (so that external functions can use this
// @@ descriptor to do their job if necessary).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
FILE * argv_917::argv_1745 () {
	return (argv_1478);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_917
// @@
// @@ FUNCTION		:	argv_1463	
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
// @@ This function permits to ensure that all the argv_1139
// @@ are flushed to the log argv_1396 by closing and reopening this
// @@ argv_1396. Notice That the performance decrease if you use this
// @@ function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_917::argv_1463 () {
	fflush (argv_1478);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_839
// @@
// @@ FUNCTION		:	argv_839		
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
// @@ Normal constructor of the argv_839 argv_2908.
// @@ This argv_2908 contains important argv_1139 that are used 
// @@ by many other functions and thus avoid having to use
// @@ global variables.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_839::argv_839 () {
#if defined (__WIN32_OS__) 
	argv_2976								= "\\";
	argv_2832					= "native_api.dll";
	argv_885					= "cypher_api.dll";
	argv_1018				= "compress_api.dll";
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_2976								= "/";
	argv_2832					= "native_api.so";
	argv_885					= "cypher_api.so";
	argv_1018				= "compress_api.so";
#endif // #if defined (__LINUX_OS__)

	argv_1719						= "general_plugin.plugin";
	argv_1432					= "file_type_result.plugin";
	argv_2093						= "kernel.plugin";
	argv_3149					= "plugin_list.bin";
	argv_1187								= ".dep";
	int_size								= 4;
	argv_2828						= "scan_buffer";
	argv_2824			= "get_scan_report";
	argv_2823					= "dysinfect";
	argv_2819					= "construct";
	argv_2821					= "argv_1197";

	argv_2826					= "match_type";
	argv_2820	= "create_scan_result_atom";
	argv_2822	= "destruct_scan_result_atom";
} 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2247		
// @@
// @@ INPUT			:
// @@ _log_ptr: argv_917 *: argv_635 of the argv_917 argv_2908 that is necessary
// @@                   to log events to log argv_1396.
// @@ _level: argv_3864: the argv_3504 level associated with the argv_2389 to log.
// @@ _msg: argv_820: the argv_2389 to log to argv_1396.
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
// @@ This function permits to use a previously instanciated log
// @@ argv_2908 to log a given argv_2389 to log argv_1396 associated with
// @@ it's argv_3504 level. 
// @@
// @@ CONTRACT 		:	
// @@ - '_log_ptr' parameter must not be a argv_2889 pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	void argv_2247 (argv_917 * _log_ptr, argv_3864 _level, argv_820 _msg) {
		if (_log_ptr != argv_2889) {
			_log_ptr->argv_2247 (_level, _msg);
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
