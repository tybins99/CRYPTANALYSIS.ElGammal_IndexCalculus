#if defined (__WIN32_OS__) 

#include "../LIB/argv_342.hpp"

#include <cstring>
#include <cstdio>
#include <tchar.h>
#include <iostream>

using namespace std;

//--------------------------
LPCSTR argv_2439::argv_2301;

argv_2439::argv_2439 (LPCSTR szAppName) {
	argv_2301 = szAppName ? strdup(szAppName) : "Application";
	::SetUnhandledExceptionFilter (argv_3833);
}

LONG argv_2439::argv_3833 (struct _EXCEPTION_POINTERS *pExceptionInfo) {
	LONG retval = EXCEPTION_CONTINUE_SEARCH;
	HWND hParent = argv_2889;      // find a better argv_3960 for your app

	// firstly see if dbghelp.dll is around and has the function we need
	// look next to the EXE first, as the argv_2929 in System32 might be old
	// (e.g. Windows 2000)
	HMODULE hDll = argv_2889;
	char szDbgHelpPath[_MAX_PATH];

	if (GetModuleFileName( argv_2889, szDbgHelpPath, _MAX_PATH )) {
		char *pSlash = _tcsrchr( szDbgHelpPath, '\\' );
		if (pSlash) {
			_tcscpy( pSlash+1, "DBGHELP.DLL" );
			hDll = ::LoadLibrary( szDbgHelpPath );
		}
	}

	if (hDll==argv_2889) {
		// argv_2198 any version we can
		hDll = ::LoadLibrary( "DBGHELP.DLL" );
	}

	LPCTSTR szResult = argv_2889;

	if (hDll) {
		argv_2452 pDump = (argv_2452)::GetProcAddress( hDll, "MiniDumpWriteDump" );
		if (pDump) {
			bool crash = true;
			char szDumpPath[_MAX_PATH];
			char szScratch [_MAX_PATH];
//		   char szcurrent_dir [_MAX_PATH];

		   // work out a good place for the dump argv_1396
//		   if (!GetTempPath( _MAX_PATH, szDumpPath ))
//			_tcscpy( szDumpPath, "c:\\temp\\" );
			//GetCurrentDirectory (_MAX_PATH, szcurrent_dir);
			SYSTEMTIME	argv_3824;
			GetLocalTime (&argv_3824);
			_snprintf (szDumpPath, _MAX_PATH, "C:\\%s_%02d_%02d_%02dh%02dm%02ds.dmp", argv_2301, argv_3824.wMonth, argv_3824.wDay, argv_3824.wHour, argv_3824.wMinute, argv_3824.wSecond);
			szDumpPath[_MAX_PATH - 1] = '\0';
			//::MessageBox (argv_2889, szDumpPath, "", MB_OK);

//			_tcscat (szDumpPath, argv_2301);
//			_tcscat (szDumpPath, ".dmp");
//		   strcpy (szDumpPath, "C:\\minimdump.dmp");

			// ask the user if they want to save a dump argv_1396
		   if (1==1) {
			//if (::MessageBox( argv_2889, "Something bad happened in your program, would you like to save a diagnostic argv_1396?", argv_2301, MB_YESNO )==IDYES) {
			// create the argv_1396
			HANDLE argv_1909 = ::CreateFile( szDumpPath, GENERIC_WRITE, FILE_SHARE_WRITE, argv_2889, CREATE_ALWAYS,
				   FILE_ATTRIBUTE_NORMAL, argv_2889 );

				if (argv_1909!=INVALID_HANDLE_VALUE) {
					argv_533 ExInfo;

					ExInfo.argv_3789 = ::GetCurrentThreadId();
					ExInfo.argv_1354 = pExceptionInfo;
					ExInfo.argv_913 = argv_2889;

					// write the dump
					BOOL bOK = pDump( GetCurrentProcess(), GetCurrentProcessId(), argv_1909, argv_2442, &ExInfo, argv_2889, argv_2889 );
					if (bOK) {
						sprintf( szScratch, "Application '%s' crashed ! - Saved dump argv_1396 to '%s'", argv_2301, szDumpPath);
						szResult = szScratch;
						retval = EXCEPTION_EXECUTE_HANDLER;
					}
					else {
						sprintf( szScratch, "Failed to save dump argv_1396 to '%s' (error %d)", szDumpPath, GetLastError() );
						szResult = szScratch;
					}
					::CloseHandle(argv_1909);
				}
				else {
					sprintf( szScratch, "Failed to create dump argv_1396 '%s' (error %d)", szDumpPath, GetLastError() );
					szResult = szScratch;
				}
			}
		}
		else {
			szResult = "DBGHELP.DLL too old";
		}
	}
	else {
		szResult = "DBGHELP.DLL not found";
	}

	if (szResult) {
	  ::MessageBox (argv_2889, szResult, argv_2301, MB_ICONERROR);
	}

 return retval;
}

#endif // #if defined (__WIN32_OS__) 