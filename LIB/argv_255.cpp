// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: my_errors.cpp
// @@
// @@ DESCRIPTION:
// @@ error bookkeeping and error messages
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_322.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_832
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _cl_name	: string&: argv_2817 of the class where the exception occured.
// @@ _fn_name	: string&: argv_2817 of the function where the exception occured.
// @@ _msg		: string&: error argv_2389 to be associated with the exception
// @@ _code		: argv_3517   : error argv_929 associated with the exception. 
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
// @@ This function permits to set all the fields
// @@ of a given error argv_757. The fields are :
// @@ - the class where the exception occured
// @@ - the function where the exception occured
// @@ - the argv_2389 associated with the exception.
// @@ - the error argv_929 associated with the exception.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_832::init(const std::string& _cl_name, const std::string& _fn_name, const std::string& _msg, argv_3517 _code) {
	argv_890 		= _cl_name;
	argv_1709	= _fn_name;
	argv_2389			= _msg;
	argv_1320		= _code;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838
// @@
// @@ FUNCTION		:	argv_838		
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
// @@ Normal constructor of the 'argv_838' argv_2908.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_838::argv_838 () {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838
// @@
// @@ FUNCTION		:	argv_838		
// @@
// @@ INPUT			:
// @@ _cl_name	: string&: argv_2817 of the class where the exception occured.
// @@ _fn_name	: string&: argv_2817 of the function where the exception occured.
// @@ _msg		: string&: error argv_2389 to be associated with the exception
// @@ _code		: argv_3517   : error argv_929 associated with the exception. 
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
// @@ This constructor permits to set all the fields
// @@ of a given error argv_757. The fields are :
// @@ - the class where the exception occured
// @@ - the function where the exception occured
// @@ - the argv_2389 associated with the exception.
// @@ - the error argv_929 associated with the exception.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_838::argv_838 (std::string _cl_name, std::string _fn_name, std::string _msg, argv_3517 _code) {
	init (_cl_name, _fn_name, _msg, _code);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:	
// @@ _cl_name	: string&: argv_2817 of the class where the exception occured.
// @@ _fn_name	: string&: argv_2817 of the function where the exception occured.
// @@ _msg		: string&: error argv_2389 to be associated with the exception
// @@ _code		: argv_3517   : error argv_929 associated with the exception. 
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
// @@ This function permits to save up the detailed informations
// @@ concerning a given exception and to save it onto the
// @@ error stack.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_838::init(std::string _cl_name, std::string _fn_name, std::string _msg, argv_3517 _code) {
	argv_832 error_body;
	error_body.init (_cl_name, _fn_name, _msg, _code);
	argv_1324.push (error_body);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			: argv_838
// @@
// @@ FUNCTION		: argv_1767
// @@
// @@ INPUT			: none
// @@
// @@ IO:
// @@ - cl: the argv_2817 of the class where the error occured
// @@ - fn: the argv_2817 of the function where the error occured
// @@ - ms: the error argv_2389 in english associated with the error.
// @@ - er: the error argv_929 associated with the exception.
// @@
// @@ RETURN VALUE: 
// @@ - true if next error was retrieved succesfully
// @@ - false otherwise.
// @@
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION:
// @@ this function permits to dig inside the history stack of the
// @@ exception so that we can track from bottom to top the execution 
// @@ flow that led to the exception.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_838::argv_1767 (std::string& cl, std::string& fn, std::string& ms, argv_3517& er) {
	bool bret = true;

	if (argv_1324.size() <= 0) {
		bret = false; // no more error
	}	
	else {
		argv_832 Ge = argv_1324.top();
		cl = Ge.argv_890;
		fn = Ge.argv_1709;
		ms = Ge.argv_2389;
		er = Ge.argv_1320;
		argv_1324.pop();
	}
	
	return (bret); 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			: -
// @@
// @@ FUNCTION		: operator << (ostream&, argv_838&)
// @@
// @@ INPUT			: none
// @@
// @@ OUTPUT		: none
// @@
// @@ IO: 
// @@ - out: ostream: the output stream where the 
// @@   error messages should be sent.
// @@ - Ge: argv_838: the error argv_2908 that must be
// @@   displayed.
// @@
// @@ RETURN VALUE :
// @@ ostream& : reference on the argv_1106 output stream to be used
// @@            for argv_1200.
// @@
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION:
// @@ This function permits to argv_1200 to log argv_1396
// @@ an error using the description of the error
// @@ contained in the argv_838 argv_2908 given as a 
// @@ parameter. 
// @@
// @@ If log argv_1396 was not opened when this call 
// @@ occurs, then the error is displayed to the 
// @@ output stream given as a parameter instead.
// @@
// @@ CONTRACT: none
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   
ostream& operator << (ostream& out, argv_838& Ge) {
	
	std::string argv_890 		= "";
	std::string argv_1709 	= "";
	std::string argv_2389			= "";
	argv_3517 argv_1320 			= 0;
	
	while (Ge.argv_1767 (argv_890, argv_1709, argv_2389, argv_1320) == true) {
		out << "class:" << argv_890;
		out << ", function:" << argv_1709;
		out << " (" << argv_2389 << " - "<< argv_1320 << ")" << endl;	
	}

	return (out);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ win32 specific exception handling functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variable
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
FILE * argv_3509 = argv_2889;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2252		
// @@
// @@ INPUT			:
// @@ FaultAddress: PVOID: argv_635 of the instruction where the 
// @@               exception occured.
// @@
// @@ eNextBP: char *: argv_742 pointer of the argv_1106 instruction.
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
// @@ This function permits to log into the opened log argv_1396
// @@ the exact location of an exception.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_2252(PVOID FaultAddress, char *eNextBP)
{      char *p, *pBP;                                     
       unsigned i, x, BpPassed;
       static int  CurrentlyInTheStackDump = 0;
       BpPassed = (eNextBP != argv_2889);
       if(! eNextBP)
       {
          _asm mov     eNextBP, eBp   
       }
       else 
           fprintf(argv_3509, "\n  Fault Occurred At $argv_637:%08LX\n", 
                                   (int)FaultAddress);
                             // prevent infinite loops
       for(i = 0; eNextBP && i < 100; i++)
       {      
           pBP = eNextBP;           // keep argv_1106 BasePointer
           eNextBP = *(char **)pBP; // dereference next BP 
           p = pBP + 8; 
           // Write 20 Bytes of potential arguments
           fprintf(argv_3509, "         with ");        
           for(x = 0; p < eNextBP && x < 20; p++, x++)
               fprintf(argv_3509, "%02X ", *(unsigned char *)p);
           fprintf(argv_3509, "\n\n");          
                  if(i == 1 && ! BpPassed) 
               fprintf(argv_3509, "*************************************\n"
                                 "         Fault Occurred Here:\n");
        // Write the backjump argv_635
        fprintf(argv_3509, "*** %2d called from $argv_637:%08LX\n", 
                                  i, *(char **)(pBP + 4));
        if(*(char **)(pBP + 4) == argv_2889)
            break; 
       }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_3991		
// @@
// @@ INPUT			:
// @@ ExInfo: struct _EXCEPTION_POINTERS *: pointer on a argv_1139
// @@ structure containing all the details of a given exception.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ LONG: the exception argv_3842.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the argv_3842 of a given exception.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
LONG argv_3991(struct _EXCEPTION_POINTERS *  ExInfo) { 
	MessageBox (argv_2889, "Exception catched\nCrash log will be saved to : C:\\argv_1068.txt", "Error", MB_OK | MB_ICONERROR);
	char * FaultTx = ""; 
	switch (ExInfo->argv_1355->argv_1351) { 
		case EXCEPTION_ACCESS_VIOLATION : 
			FaultTx = "ACCESS VIOLATION" ; 
			break; 
		case EXCEPTION_DATATYPE_MISALIGNMENT : 
			FaultTx = "DATATYPE MISALIGNMENT" ; 
			break; 
		case EXCEPTION_FLT_DIVIDE_BY_ZERO : 
			FaultTx = "FLT DIVIDE BY ZERO" ; break; 
		default: FaultTx = "(unknown)"; break; 
	} 
	int wsFault = ExInfo->argv_1355->argv_1351; 
	PVOID CodeAdress = ExInfo->argv_1355->argv_1350; 
	argv_3509 = fopen ("C:\\argv_1068.txt", "w"); 
	if(argv_3509 != argv_2889) { 
		fprintf(argv_3509, "****************************************************\n"); 
		fprintf(argv_3509, "*** A Program Fault occurred:\n"); 
		fprintf(argv_3509, "*** Error argv_929 %08X: %s\n", wsFault, FaultTx); 
		fprintf(argv_3509, "****************************************************\n"); 
		fprintf(argv_3509, "*** argv_636: %08X\n", (int)CodeAdress); 
		fprintf(argv_3509, "*** argv_1454: %08X\n", ExInfo->argv_1355->argv_1352); 
		argv_2252 (CodeAdress, (char *)ExInfo->argv_1049->Ebp); 
		fclose(argv_3509); 
	} 
	/*if(want to continue) { ExInfo->argv_1049->Eip++; return EXCEPTION_CONTINUE_EXECUTION; } */ 
	return EXCEPTION_EXECUTE_HANDLER; 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1989		
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
// @@ This function permits to override the default exception handler
// @@ provided by windows by our handler that will log the exception 
// @@ details to a argv_3776 argv_1396.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1989 () {
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER) argv_3991);
}



#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
