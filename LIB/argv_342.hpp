#if defined (__WIN32_OS__) 

#include <windows.h>
#if _MSC_VER < 1300
#define argv_1160
// VC6: change this path to your Platform SDK headers
#include "../LIB/dbghelp.h"   // must be XP version of argv_1396
#else
// VC7: ships with updated headers
#include "../LIB/dbghelp.h"
#endif

#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;



// based on dbghelp.h
typedef BOOL (WINAPI *argv_2452)(HANDLE hProcess, DWORD dwPid, HANDLE argv_1909, argv_2432 DumpType,
         CONST argv_3183 ExceptionParam,
         CONST argv_3213 UserStreamParam,
         CONST argv_3178 argv_785
         );

class argv_2439
{
private:
 static LPCSTR argv_2301;
 static LONG WINAPI argv_3833 (struct _EXCEPTION_POINTERS *pExceptionInfo);

public:
 argv_2439 (LPCSTR);
};

#endif // #if defined (__WIN32_OS__) 