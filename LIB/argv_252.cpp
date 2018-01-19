// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_252.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the functions and argv_1139
// @@ structures necessary for a given daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_319.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variables
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern argv_820		argv_3491;
argv_917  *				argv_3490	= argv_2889;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_823
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
// @@ This function permits to set up the argv_3604 of the
// @@ argv_823 argv_2908 to it's initial argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_823::reset () {
	argv_3484				= "/";
	argv_3492			= false;
#if defined (__WIN32_OS__)
	argv_2236			= "C:";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	argv_2236			= ".";
#endif // #if defined (__LINUX_OS__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_823
// @@
// @@ FUNCTION		:	argv_823			
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
// @@ Normal constructor of the argv_823 argv_2908.
// @@ it permits to set up the argv_3604 of the
// @@ argv_823 argv_2908 to it's initial argv_3604.
// @@ It also argv_3237 the network for first use (win32 only)
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_823::argv_823 () {
#if defined (__WIN32_OS__)
	argv_3251 ();
#endif // #if defined (__WIN32_OS__)
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_823
// @@
// @@ FUNCTION		:	~argv_823			
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
// @@ destructor of the argv_823 argv_2908.
// @@ it permits to set up the argv_3604 of the
// @@ argv_823 argv_2908 to it's initial argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_823::~argv_823 () {
#if defined (__WIN32_OS__)
	argv_3738 ();
#endif // #if defined (__WIN32_OS__)
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_823
// @@
// @@ FUNCTION		:	argv_1077			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3439 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create the thread that will do
// @@ the actual task that is application dependant.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_823::argv_1077 () {
	argv_3517 argv_1993 = argv_3429;
	argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_823::argv_1077 - illegal call of the argv_742 class function !");
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_823
// @@
// @@ FUNCTION		:	argv_3939			
// @@
// @@ INPUT			:	
// @@ dwCurrentState : DWORD : the argv_1106 status of the service.
// @@
// @@ dwWin32ExitCode: DWORD : Specifies an Win32 error argv_929 that 
// @@     the service uses to report an error that occurs when it is 
// @@     starting or stopping.
// @@
// @@ dwServiceSpecificExitCode: DWORD :  Specifies a service specific 
// @@     error argv_929 that the service returns when an error occurs while 
// @@     the service is starting or stopping.
// @@
// @@ dwCheckPoint : DWORD : Specifies a argv_3960 that the service increments 
// @@     periodically to report its progress during a lengthy argv_3601, 
// @@     argv_3607, pause, or continue operation.
// @@
// @@ dwWaitHint: DWORD : Specifies an estimate of the amount of argv_3825, 
// @@     in milliseconds, that the service expects a pending argv_3601, argv_3607, 
// @@     pause, or continue operation.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3439 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to update the status of the service
// @@ so that depending on the steps performed, the user can see
// @@ what the argv_1106 status of the service is.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
	argv_3517 argv_823::argv_3939 (DWORD dwCurrentState, DWORD dwWin32ExitCode,
						 DWORD dwServiceSpecificExitCode, DWORD dwCheckPoint,
						 DWORD dwWaitHint) {
		
		argv_3517 argv_1993 = argv_3439;

		argv_2887.dwServiceType=SERVICE_WIN32_OWN_PROCESS;
		argv_2887.dwCurrentState=dwCurrentState;
		
		if(dwCurrentState==SERVICE_START_PENDING) {
			argv_2887.dwControlsAccepted=0;
		}
		else {
			argv_2887.dwControlsAccepted = SERVICE_ACCEPT_STOP			
				|SERVICE_ACCEPT_SHUTDOWN;
		}

		if(dwServiceSpecificExitCode==0) {
			argv_2887.dwWin32ExitCode=dwWin32ExitCode;
		}
		else {
			argv_2887.dwWin32ExitCode=ERROR_SERVICE_SPECIFIC_ERROR;
		}
		argv_2887.dwServiceSpecificExitCode=dwServiceSpecificExitCode;
		argv_2887.dwCheckPoint=dwCheckPoint;
		argv_2887.dwWaitHint=dwWaitHint;

		if (! SetServiceStatus (argv_2888,&argv_2887)) {
			argv_2251.argv_2247 (argv_1321, "+++ ERROR: SetServiceStatus failed !");
			argv_2119 ();
			argv_1993 = argv_3438;
		}
		return (argv_1993);
	}
#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_823
// @@
// @@ FUNCTION		:	argv_2119			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3439 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3607 the service after this 
// @@ service was started.
// @@
// @@ CONTRACT 		:	
// @@ - the service must have been started prior to this call. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_823::argv_2119 () {
	argv_3517 argv_1993 = argv_3439;
	argv_741.argv_2230 ();
		if (argv_3492 == false) {
			argv_1993 = argv_3431;
		}
		else { // service is running => ok to argv_3607 it
#if defined (__WIN32_OS__)
			argv_3517 argv_1993 = argv_3939 (SERVICE_STOP_PENDING, NO_ERROR, 0, 0, 0);
			if (argv_1993 != argv_3439) {
				argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_823::argv_2119 failed ! - argv_3939 failed !");
				argv_1993 = argv_3433;
			}
			else {
				argv_2251.argv_2247 (argv_2886, "argv_823::argv_2119 - status set to SERVICE_STOP_PENDING");
			}

			argv_2251.argv_2247 (argv_2886, "asking the worker thread to die : calling 'argv_2120'");
			argv_2120 ();	
			argv_2251.argv_2247 (argv_2886, "worker threads succesfully terminated");

			argv_3492 = false;
			SetEvent (argv_2121);
			argv_1993 = argv_3939 (SERVICE_STOPPED, NO_ERROR, 0, 0, 0);
			if (argv_1993 != argv_3439) {
				argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_2119 failed !");
				argv_1993 = argv_3433;
			}
			else {
				argv_2251.argv_2247 (argv_2886, "argv_2119...[OK]");
			}
			reset ();
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
			argv_2251.argv_2247 (argv_2886, "argv_823::argv_2119 - asking the worker thread to die : calling 'argv_2120'");
			argv_2120 ();	
			argv_3492 = false;
			argv_2251.argv_2247 (argv_2886, "argv_2119...[OK]");
			reset ();
#endif // #if defined (__LINUX_OS__)
		}
	argv_741.argv_3917 ();
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_823
// @@
// @@ FUNCTION		:	argv_2120			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3439 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function should never be called.
// @@ The user must argv_1189 the 'argv_823' argv_2908
// @@ and override this function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_823::argv_2120 () {
	// illegal to call the argv_742 class function
	argv_3517 argv_1993 = argv_3430;
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_823
// @@
// @@ FUNCTION		:	argv_3414			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3439 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3414 the service and performs the
// @@ following steps :
// @@ - retrieve the log argv_1396's path.
// @@ - open the service's log argv_1396.
// @@ - register the function that will argv_1890 the service control
// @@   requests.
// @@ - update the service's status at each step.
// @@ - create the worker thread that will perform the actual
// @@   application dependant processing.
// @@ - wait for the worker thread to finish.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_823::argv_3414 () {
	argv_3517 argv_1993 = argv_3439;

	// open the log argv_1396 (using the registry to get the path)
	string argv_2237 = argv_2236 + argv_3484 + "log_av_service_status.txt"; 
	argv_2251.argv_2937 (argv_2237.c_str(), argv_2889, "");
	cerr << "opened log :" << argv_2237 << endl;
	argv_3490 = &argv_2251; // for the functions that can not be member functions

	argv_2251.argv_2247 (argv_2886, "Starting daemon service");
	
	argv_2888 = RegisterServiceCtrlHandler (argv_3491,
								(LPHANDLER_FUNCTION) argv_3488);

	if (! argv_2888) {
		argv_1993 = argv_3436;
		argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_3414: RegisterServiceCtrlHandler failed !");
	}
	else { // RegisterServiceCtrlHandler succeeded
		argv_2251.argv_2247 (argv_2886, "RegisterServiceCtrlHandler...[OK]");
		argv_1993 = argv_3939 (SERVICE_START_PENDING, NO_ERROR, 0, 1, 3000);
		if (argv_1993 != argv_3439) { // status update failed
			argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_3414: argv_3939 failed (SERVICE_START_PENDING) @1 !");
		}
		else {  // status updated succesfully
			argv_2251.argv_2247 (argv_2886, "argv_3939 to SERVICE_START_PENDING mark 1...[OK]");
			argv_2121 = CreateEvent (0,TRUE,FALSE,0);
			if (argv_2121==argv_2889) {
				argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_3414: CreateEvent failed !");
				argv_1993 = argv_3428;
			}
			else { // event created succesfully
				argv_1993 = argv_3939 (SERVICE_START_PENDING, NO_ERROR, 0, 2, 1000);
				if (argv_1993 != argv_3439) {
					argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_3414: argv_3939 failed (SERVICE_START_PENDING) @2 !");
				}
				else { // status updated succesfully
					argv_2251.argv_2247 (argv_2886, "argv_3939 to SERVICE_START_PENDING mark 2...[OK]");
					argv_1993 = argv_1077 ();
					if (argv_1993 != argv_3439) {
						argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_3414: argv_1077 failed !");
					}
					else { // worker thread created succesfully
						argv_2251.argv_2247 (argv_2886, "worker thread creation...[OK]");
						argv_3489 = SERVICE_RUNNING;
						argv_1993 = argv_3939 (SERVICE_RUNNING, NO_ERROR, 0, 0, 0);
						if (argv_1993 != argv_3439) {
							argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_3414: argv_3939 failed (SERVICE_RUNNING) !");
						}
						else { // status updated succesfully
							argv_2251.argv_2247 (argv_2886, "argv_3939 to SERVICE_RUNNING ...[OK]");
							if (WaitForSingleObject (argv_2121, INFINITE) == WAIT_FAILED) {
								argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_3414:  WaitForSingleObject failed !");	
							}
							CloseHandle (argv_2121);
						}
					}
				}
			}
		}
	}
	return (argv_1993);	
}

#if defined (__LINUX_OS__)
void * argv_1257 (void * _param) {
	argv_1103 * param_ptr = (argv_1103 *) _param;
	argv_1103 param = (*param_ptr);
	delete param_ptr;

	pthread_join (param.argv_1890, argv_2889);

	if (param.argv_1915 == 0) { // watch the admin thread
		param.argv_1138->argv_2251.argv_2247 (argv_660, "*** ADMIN THREAD HAS EXITED !");
	}
	else if (param.argv_1915 == 1) { // watch the scanner thread
		param.argv_1138->argv_2251.argv_2247 (argv_660, "*** SCANNER THREAD HAS EXITED !");
	}

	param.argv_1138->argv_2251.argv_2247 (argv_660, "*** KILLING SERVICE");
	param.argv_1138->argv_2119 ();

	// wait for the peer thread to exit
	pthread_join (param.argv_3080, argv_2889);
	exit(1);
	return (argv_2889);
}
#endif // #if defined (__LINUX_OS__)


argv_3517 argv_823::argv_1076 () {
	argv_3517 argv_1993 = argv_3439;
#if defined (__LINUX_OS__)
	argv_2251.argv_2247 (argv_1152, "creating watcher threads");
	argv_1103 * param_ptr = new (std::nothrow) argv_1103;
	param_ptr->argv_1915				= 0;
	param_ptr->argv_1890			= admin_handle;
	param_ptr->argv_3080		= scanner_handle;
	param_ptr->argv_1138	= this;

	// create the thread that will monitor the admin thread
	argv_3517 iret2 = pthread_create (&watcher_admin_handle, argv_2889, argv_1257, (argv_2263) param_ptr);
	if (iret2 != 0) {
		argv_1993 = argv_3437;
	}
	else {
		// create the thread that will monitor the scanner thread
		argv_1103 * param_ptr = new (std::nothrow) argv_1103;
		param_ptr->argv_1915				= 1;
		param_ptr->argv_1890			= scanner_handle;
		param_ptr->argv_3080		= admin_handle;
		param_ptr->argv_1138	= this;
		iret2 = pthread_create (&watcher_scanner_handle, argv_2889, argv_1257, (argv_2263) param_ptr);
		if (iret2 != 0) {
			argv_1993 = argv_3437;
		}
	}
#endif
	return (argv_1993);
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


