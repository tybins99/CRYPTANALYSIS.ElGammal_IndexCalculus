/*++ BUILD argv_3971: 0001     Increment this if a change has global effects

Copyright (c) Microsoft Corporation. All rights argv_3352.

argv_2474 argv_2818:

    dbghelp.h

Abstract:

    This module defines the prototypes and constants required for the image
    help routines.

    Contains debugging support routines that are redistributable.

argv_3404 History:

--*/

#ifndef argv_492
#define argv_492

#if _MSC_VER > 1020
#pragma once
#endif


// As a general principal always call the 64 bit version
// of every API, if a choice exists.  The 64 bit version
// works great on 32 bit platforms, and is forward
// compatible to 64 bit platforms.

#ifdef _WIN64
#ifndef argv_523
#define argv_523
#endif
#endif


#ifdef __cplusplus
extern "C" {
#endif

#ifdef _IMAGEHLP_SOURCE_
 #define argv_1934 __stdcall
 #define argv_1150
#else
 #define argv_1934 DECLSPEC_IMPORT __stdcall
 #if (_MSC_VER >= 1300) && !defined(MIDL_PASS)
  #define argv_1150   __declspec(deprecated)
 #else
  #define argv_1150
 #endif
#endif

#define argv_1151 argv_1934

#define argv_1931 (64*1024)

typedef struct argv_526 {
    PSTR                  argv_2479;
    HANDLE                argv_1909;
    PUCHAR                argv_2318;
#ifdef argv_523
    PIMAGE_NT_HEADERS64   argv_1445;
#else
    PIMAGE_NT_HEADERS32   argv_1445;
#endif
    PIMAGE_SECTION_HEADER argv_2139;
    ULONG                 argv_2900;
    PIMAGE_SECTION_HEADER argv_3467;
    ULONG                 argv_845;
    BOOLEAN               argv_1705;
    BOOLEAN               argv_1392;
    LIST_ENTRY            argv_2181;
    ULONG                 argv_3532;
} argv_2222, *argv_3124;

#define argv_2334            2000


HANDLE
argv_1934
FindDebugInfoFile (
    PSTR argv_1447,
    PSTR SymbolPath,
    PSTR DebugFilePath
    );

typedef BOOL
(CALLBACK *argv_3092)(
    HANDLE FileHandle,
    PSTR argv_1447,
    PVOID CallerData
    );

HANDLE
argv_1934
FindDebugInfoFileEx (
    PSTR argv_1447,
    PSTR SymbolPath,
    PSTR DebugFilePath,
    argv_3092 Callback,
    PVOID CallerData
    );

typedef BOOL
(CALLBACK *argv_3094)(
    PSTR  argv_1446,
    PVOID context
    );

BOOL
argv_1934
SymFindFileInPath(
    HANDLE hprocess,
    LPSTR  SearchPath,
    LPSTR  argv_1447,
    PVOID  argv_1915,
    DWORD  two,
    DWORD  three,
    DWORD  argv_1453,
    LPSTR  FoundFile,
    argv_3094 callback,
    PVOID  context
    );

HANDLE
argv_1934
FindExecutableImage(
    PSTR argv_1447,
    PSTR SymbolPath,
    PSTR argv_1937
    );

typedef BOOL
(CALLBACK *argv_3093)(
    HANDLE FileHandle,
    PSTR argv_1447,
    PVOID CallerData
    );

HANDLE
argv_1934
FindExecutableImageEx(
    PSTR argv_1447,
    PSTR SymbolPath,
    PSTR argv_1937,
    argv_3093 Callback,
    PVOID CallerData
    );

PIMAGE_NT_HEADERS
argv_1934
ImageNtHeader (
    IN PVOID Base
    );

PVOID
argv_1934
ImageDirectoryEntryToDataEx (
    IN PVOID Base,
    IN BOOLEAN MappedAsImage,
    IN USHORT DirectoryEntry,
    OUT PULONG argv_3519,
    OUT PIMAGE_SECTION_HEADER *FoundHeader OPTIONAL
    );

PVOID
argv_1934
ImageDirectoryEntryToData (
    IN PVOID Base,
    IN BOOLEAN MappedAsImage,
    IN USHORT DirectoryEntry,
    OUT PULONG argv_3519
    );

PIMAGE_SECTION_HEADER
argv_1934
ImageRvaToSection(
    IN PIMAGE_NT_HEADERS NtHeaders,
    IN PVOID Base,
    IN ULONG argv_3415
    );

PVOID
argv_1934
ImageRvaToVa(
    IN PIMAGE_NT_HEADERS NtHeaders,
    IN PVOID Base,
    IN ULONG argv_3415,
    IN OUT PIMAGE_SECTION_HEADER *argv_2139
    );

// argv_3622 server exports

typedef BOOL (WINAPI *argv_3314)(LPCSTR, LPCSTR, PVOID, DWORD, DWORD, LPSTR);
typedef BOOL (WINAPI *argv_3312)(VOID);
typedef BOOL (WINAPI *argv_3310)(VOID);
typedef BOOL (WINAPI *argv_3315)(UINT_PTR, ULONG64);
typedef BOOL (CALLBACK WINAPI *argv_3309)(UINT_PTR action, ULONG64 argv_1139, ULONG64 context);
typedef UINT_PTR (WINAPI *argv_3311)();
typedef BOOL (WINAPI *argv_3313)(LPCSTR);

#define argv_3579            0x0001
#define argv_3581               0x0002
#define argv_3582            0x0004
#define argv_3583             0x0008
#define argv_3585          0x0010
#define argv_3592          0x0020
#define argv_3584              0x0040
#define argv_3587           0x0080
#define argv_3586           0x0100
#define argv_3589              0x0200
#define argv_3591               0x0400
#define argv_3590          0x0800
#define argv_3588               0x1000
#define argv_3580    0x2000
#define SSRVOPT_RESET               ((ULONG_PTR)-1)

#define argv_3578        1
#define argv_3577  2
#define argv_3576        3

#ifndef _WIN64
// This api won't be ported to Win64 - Fix your argv_929.

typedef struct argv_497 {
    LIST_ENTRY argv_2182;
    DWORD argv_3377;
    PVOID argv_3369;
    USHORT argv_3368;
    USHORT argv_3357;
    DWORD argv_3358;
    DWORD argv_1935;
    DWORD argv_3532;

    DWORD argv_3373;
    PIMAGE_SECTION_HEADER argv_3376;

    DWORD argv_3363;
    PSTR argv_3362;

    DWORD argv_3372;
    PIMAGE_FUNCTION_ENTRY argv_3365;
    DWORD argv_3367;
    DWORD argv_3366;

    DWORD argv_3371;
    PFPO_DATA argv_3364;

    DWORD argv_3522;
    PIMAGE_COFF_SYMBOLS_HEADER argv_954;

    DWORD argv_3378;
    PVOID argv_3359;

    PSTR argv_1937;
    PSTR argv_1936;
    PSTR argv_3361;

    DWORD argv_3381;

    BOOL  argv_3375;
    PIMAGE_DEBUG_DIRECTORY argv_3360;
    DWORD argv_3370;

    DWORD argv_3374;

    DWORD argv_3353[ 2 ];

} argv_1918, *argv_3100;


argv_3100
argv_1934
MapDebugInformation(
    HANDLE FileHandle,
    PSTR argv_1447,
    PSTR SymbolPath,
    DWORD argv_1935
    );

BOOL
argv_1934
UnmapDebugInformation(
    argv_3100 DebugInfo
    );

#endif

BOOL
argv_1934
SearchTreeForFile(
    PSTR RootPath,
    PSTR InputPathName,
    PSTR OutputPathBuffer
    );

typedef BOOL
(CALLBACK *argv_3081)(
    LPCSTR FilePath,
    PVOID  CallerData
    );

BOOL
argv_1934
EnumDirTree(
    HANDLE hProcess,
    PSTR   RootPath,
    PSTR   InputPathName,
    PSTR   OutputPathBuffer,
    argv_3081 Callback,
    PVOID  CallbackData
    );

BOOL
argv_1934
MakeSureDirectoryPathExists(
    PCSTR DirPath
    );

//
// UnDecorateSymbolName argv_1454
//

#define argv_3897                 (0x0000)  // Enable full undecoration
#define argv_3905   (0x0001)  // Remove leading underscores from MS extended keywords
#define argv_3907           (0x0002)  // Disable expansion of MS extended keywords
#define argv_3904      (0x0004)  // Disable expansion of return argv_3842 for primary declaration
#define argv_3901      (0x0008)  // Disable expansion of the declaration model
#define argv_3900   (0x0010)  // Disable expansion of the declaration language specifier
#define argv_3908           (0x0020)  // NYI Disable expansion of MS keywords on the 'this' argv_3842 for primary declaration
#define argv_3903           (0x0040)  // NYI Disable expansion of CV modifiers on the 'this' argv_3842 for primary declaration
#define argv_3911              (0x0060)  // Disable all modifiers on the 'this' argv_3842
#define argv_3899     (0x0080)  // Disable expansion of access specifiers for members
#define argv_3912      (0x0100)  // Disable expansion of 'throw-signatures' for functions and pointers to functions
#define argv_3906           (0x0200)  // Disable expansion of 'static' or 'virtual'ness of members
#define argv_3909      (0x0400)  // Disable expansion of MS model for UDT returns
#define argv_3896            (0x0800)  // Undecorate 32-bit decorated names
#define argv_3898                (0x1000)  // Crack only the argv_2817 for primary declaration;
                                                                                                   //  return just [scope::]argv_2817.  Does expand template params
#define argv_3902             (0x2000)  // Don't undecorate arguments to function
#define argv_3910          (0x4000)  // Don't undecorate special names (v-table, vcall, vector xxx, metatype, etc)

DWORD
argv_1934
WINAPI
UnDecorateSymbolName(
    PCSTR   DecoratedName,         // argv_2818 to undecorate
    PSTR    UnDecoratedName,       // If argv_2889, it will be allocated
    DWORD    UndecoratedLength,     // The maximym length
    DWORD    argv_1454                  // See above.
    );


//
// these values are used for synthesized argv_1396 types
// that can be passed in as image headers instead of
// the standard ones from ntimage.h
//

#define argv_1149     0x1

typedef struct argv_567 {
    DWORD   argv_3575;                  // size of this struct
    DWORD   argv_3574;                   // signature identifying the passed argv_1139
    PVOID   argv_1139;                   // pointer to passed argv_1139
    DWORD   size;                   // size of passed argv_1139
    DWORD   argv_1453;                  // options
} argv_2473, *argv_3214;

//
// StackWalking API
//

typedef enum {
    argv_644,
    argv_645,
    argv_647,
    argv_646
} argv_638;

typedef struct argv_606 {
    DWORD64       Offset;
    WORD          argv_3468;
    argv_638  argv_2472;
} argv_640, *argv_2259;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_637 argv_640
#define argv_2258 argv_2259
#else
typedef struct argv_605 {
    DWORD         Offset;
    WORD          argv_3468;
    argv_638  argv_2472;
} argv_637, *argv_2258;

__inline
void
argv_639(
    argv_2258 a32,
    argv_2259 a64
    )
{
    a64->Offset = (ULONG64)(LONG64)(LONG)a32->Offset;
    a64->argv_3468 = a32->argv_3468;
    a64->argv_2472 = a32->argv_2472;
}

__inline
void
argv_641(
    argv_2259 a64,
    argv_2258 a32
    )
{
    a32->Offset = (ULONG)a64->Offset;
    a32->argv_3468 = a64->argv_3468;
    a32->argv_2472 = a64->argv_2472;
}
#endif

//
// This structure is included in the argv_3598 structure,
// and is used to trace through usermode callbacks in a thread's
// kernel stack.  The values must be copied by the kernel debugger
// from the DBGKD_GET_VERSION and WAIT_STATE_CHANGE packets.
//

//
// New argv_2032 structure for 64 bit system support.
// This structure is preferred in new argv_929.
//
typedef struct argv_525 {

    //
    // argv_635 of kernel thread argv_2908, as provided in the
    // WAIT_STATE_CHANGE packet.
    //
    DWORD64   argv_3779;

    //
    // offset in thread argv_2908 to pointer to the argv_1106 callback frame
    // in kernel stack.
    //
    DWORD   argv_3778;

    //
    // offset in thread argv_2908 to pointer to the argv_1106 callback backing
    // store frame in kernel stack.
    //
    DWORD   argv_3777;

    //
    // offsets to values in frame:
    //
    // argv_635 of next callback frame
    DWORD   argv_2882;

    // argv_635 of saved frame pointer (if applicable)
    DWORD   argv_1702;


    //
    // argv_636 of the kernel function that calls out to user mode
    //
    DWORD64   argv_2117;

    //
    // argv_636 of the user mode dispatcher function
    //
    DWORD64   argv_2108;

    //
    // Lowest kernel mode argv_635
    //
    DWORD64   argv_3730;

    DWORD64  argv_3353[8];

} argv_2034, *argv_3122;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_2032 argv_2034
#define argv_3121 argv_3122
#else
typedef struct argv_524 {

    //
    // argv_635 of kernel thread argv_2908, as provided in the
    // WAIT_STATE_CHANGE packet.
    //
    DWORD   argv_3779;

    //
    // offset in thread argv_2908 to pointer to the argv_1106 callback frame
    // in kernel stack.
    //
    DWORD   argv_3778;

    //
    // offsets to values in frame:
    //
    // argv_635 of next callback frame
    DWORD   argv_2882;

    // argv_635 of saved frame pointer (if applicable)
    DWORD   argv_1702;

    //
    // argv_636 of the kernel function that calls out to user mode
    //
    DWORD   argv_2117;

    //
    // argv_636 of the user mode dispatcher function
    //
    DWORD   argv_2108;

    //
    // Lowest kernel mode argv_635
    //
    DWORD   argv_3730;

    //
    // offset in thread argv_2908 to pointer to the argv_1106 callback backing
    // store frame in kernel stack.
    //
    DWORD   argv_3777;

    DWORD  argv_3353[8];

} argv_2032, *argv_3121;

__inline
void
argv_2033(
    argv_3121 p32,
    argv_3122 p64
    )
{
    p64->argv_3779 = p32->argv_3779;
    p64->argv_3778 = p32->argv_3778;
    p64->argv_2882 = p32->argv_2882;
    p64->argv_1702 = p32->argv_1702;
    p64->argv_2117 = p32->argv_2117;
    p64->argv_2108 = p32->argv_2108;
    p64->argv_3730 = p32->argv_3730;
}
#endif

typedef struct argv_608 {
    argv_640   AddrPC;               // program counter
    argv_640   argv_648;           // return argv_635
    argv_640   argv_643;            // frame pointer
    argv_640   argv_649;            // stack pointer
    argv_640   argv_634;           // backing store pointer
    PVOID       argv_1708;       // pointer to pdata/fpo or argv_2889
    DWORD64     argv_2963[4];            // possible arguments to the function
    BOOL        argv_1390;                  // WOW far call
    BOOL        argv_3977;              // is this a virtual frame?
    DWORD64     argv_3353[3];
    argv_2034    argv_2031;
} argv_3599, *argv_2262;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3598 argv_3599
#define argv_2261 argv_2262
#else
typedef struct argv_607 {
    argv_637     AddrPC;               // program counter
    argv_637     argv_648;           // return argv_635
    argv_637     argv_643;            // frame pointer
    argv_637     argv_649;            // stack pointer
    PVOID       argv_1708;       // pointer to pdata/fpo or argv_2889
    DWORD       argv_2963[4];            // possible arguments to the function
    BOOL        argv_1390;                  // WOW far call
    BOOL        argv_3977;              // is this a virtual frame?
    DWORD       argv_3353[3];
    argv_2032      argv_2031;
    argv_637     argv_634;           // backing store pointer
} argv_3598, *argv_2261;
#endif


typedef
BOOL
(__stdcall *argv_3234)(
    HANDLE      hProcess,
    DWORD64     qwBaseAddress,
    PVOID       lpBuffer,
    DWORD       nSize,
    LPDWORD     lpNumberOfBytesRead
    );

typedef
PVOID
(__stdcall *argv_3096)(
    HANDLE  hProcess,
    DWORD64 AddrBase
    );

typedef
DWORD64
(__stdcall *argv_3098)(
    HANDLE  hProcess,
    DWORD64 argv_636
    );

typedef
DWORD64
(__stdcall *argv_3317)(
    HANDLE    hProcess,
    HANDLE    hThread,
    argv_2259 lpaddr
    );

BOOL
argv_1934
StackWalk64(
    DWORD                             MachineType,
    HANDLE                            hProcess,
    HANDLE                            hThread,
    argv_2262                    StackFrame,
    PVOID                             argv_1049,
    argv_3234    ReadMemoryRoutine,
    argv_3096  FunctionTableAccessRoutine,
    argv_3098        GetModuleBaseRoutine,
    argv_3317      TranslateAddress
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)

#define argv_3233 argv_3234
#define argv_3095 argv_3096
#define argv_3097 argv_3098
#define argv_3316 argv_3317

#define argv_3600 StackWalk64

#else

typedef
BOOL
(__stdcall *argv_3233)(
    HANDLE  hProcess,
    DWORD   lpBaseAddress,
    PVOID   lpBuffer,
    DWORD   nSize,
    PDWORD  lpNumberOfBytesRead
    );

typedef
PVOID
(__stdcall *argv_3095)(
    HANDLE  hProcess,
    DWORD   AddrBase
    );

typedef
DWORD
(__stdcall *argv_3097)(
    HANDLE  hProcess,
    DWORD   argv_636
    );

typedef
DWORD
(__stdcall *argv_3316)(
    HANDLE    hProcess,
    HANDLE    hThread,
    argv_2258 lpaddr
    );

BOOL
argv_1934
argv_3600(
    DWORD                             MachineType,
    HANDLE                            hProcess,
    HANDLE                            hThread,
    argv_2261                      StackFrame,
    PVOID                             argv_1049,
    argv_3233      ReadMemoryRoutine,
    argv_3095    FunctionTableAccessRoutine,
    argv_3097          GetModuleBaseRoutine,
    argv_3316        TranslateAddress
    );

#endif


#define argv_673 9

typedef struct argv_672 {
    USHORT  argv_2311;
    USHORT  argv_2458;
    USHORT  argv_3404;
    USHORT  argv_3353;
} argv_672, *argv_2260;

argv_2260
argv_1934
ImagehlpApiVersion(
    VOID
    );

argv_2260
argv_1934
ImagehlpApiVersionEx(
    argv_2260 AppVersion
    );

DWORD
argv_1934
GetTimestampForLoadedLibrary(
    HMODULE argv_2474
    );

//
// typedefs for function pointers
//
typedef BOOL
(CALLBACK *argv_3297)(
    PSTR argv_2479,
    DWORD64 BaseOfDll,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3300)(
    PSTR SymbolName,
    DWORD64 SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3301)(
    PWSTR SymbolName,
    DWORD64 SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3083)(
    PSTR argv_2479,
    DWORD64 ModuleBase,
    ULONG ModuleSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3308)(
    HANDLE  hProcess,
    ULONG   ActionCode,
    ULONG64 CallbackData,
    ULONG64 UserContext
    );

typedef
PVOID
(CALLBACK *argv_3303)(
    HANDLE  hProcess,
    DWORD   AddrBase,
    PVOID   UserContext
    );

typedef
PVOID
(CALLBACK *argv_3304)(
    HANDLE  hProcess,
    ULONG64 AddrBase,
    ULONG64 UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)

#define argv_3296 argv_3297
#define argv_3299 argv_3300
#define argv_3302 argv_3301
#define argv_3082 argv_3083
#define argv_3307 argv_3308
#define argv_3303 argv_3304

#else

typedef BOOL
(CALLBACK *argv_3296)(
    PSTR  argv_2479,
    ULONG BaseOfDll,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3299)(
    PSTR  SymbolName,
    ULONG SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3302)(
    PWSTR  SymbolName,
    ULONG SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3082)(
    PSTR  argv_2479,
    ULONG ModuleBase,
    ULONG ModuleSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3307)(
    HANDLE  hProcess,
    ULONG   ActionCode,
    PVOID   CallbackData,
    PVOID   UserContext
    );

#endif


//
// argv_1453 found in argv_3626.argv_1454
//

#define argv_3679     0x00000001
#define argv_3675         0x00000008
#define argv_3676           0x00000010
#define argv_3671         0x00000020
#define argv_3674        0x00000040
#define argv_3673            0x00000080
#define argv_3668         0x00000100
#define argv_3669           0x00000200
#define argv_3670        0x00000400
#define argv_3672         0x00000800
#define argv_3680          0x00001000
#define argv_3677            0x00002000
#define argv_3678           0x00004000

//
// symbol argv_3842 enumeration
//
typedef enum {
    argv_3694 = 0,
    argv_3644,
    argv_3645,
    argv_3716,
    argv_3653,
    argv_3646,
    argv_3719,       // .argv_3620 argv_1396
    argv_3647,
    argv_3723,
    argv_2906
} argv_3621;

//
// symbol argv_1139 structure
//

typedef struct argv_521 {
    DWORD                       argv_3541;           // set to sizeof(argv_1967)
    DWORD64                     argv_636;                // virtual argv_635 including dll argv_742 argv_635
    DWORD                       argv_3519;                   // estimated size of symbol, can be zero
    DWORD                       argv_1454;                  // info about the symbols, see the SYMF defines
    DWORD                       argv_2342;          // maximum size of symbol argv_2817 in 'argv_2818'
    CHAR                        argv_2818[1];                // symbol argv_2817 (null terminated string)
} argv_1967, *argv_3119;

typedef struct argv_522 {
    argv_1967 argv_3620;
    CHAR              argv_2817[argv_2334 + 1];
} argv_1968, *argv_3120;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)

 #define argv_1952 argv_1967
 #define argv_3116 argv_3119
 #define argv_1962 argv_1968
 #define argv_3117 argv_3120

#else

 typedef struct argv_517 {
     DWORD                       argv_3541;           // set to sizeof(argv_1952)
     DWORD                       argv_636;                // virtual argv_635 including dll argv_742 argv_635
     DWORD                       argv_3519;                   // estimated size of symbol, can be zero
     DWORD                       argv_1454;                  // info about the symbols, see the SYMF defines
     DWORD                       argv_2342;          // maximum size of symbol argv_2817 in 'argv_2818'
     CHAR                        argv_2818[1];                // symbol argv_2817 (null terminated string)
 } argv_1952, *argv_3116;

 typedef struct argv_518 {
     argv_1952 argv_3620;
     CHAR            argv_2817[argv_2334 + 1];
 } argv_1962, *argv_3117;

#endif

//
// module argv_1139 structure
//

typedef struct argv_513 {
    DWORD                       argv_3541;           // set to sizeof(argv_1948)
    DWORD64                     argv_747;            // argv_742 argv_2198 argv_635 of module
    DWORD                       argv_1970;              // virtual size of the argv_2221 module
    DWORD                       argv_3826;          // date/argv_3825 stamp from pe argv_1907
    DWORD                       argv_865;               // checksum from the pe argv_1907
    DWORD                       argv_2905;                // number of symbols in the symbol table
    argv_3621                    argv_3720;                // argv_3842 of symbols argv_2221
    CHAR                        argv_2479[32];         // module argv_2817
    CHAR                        argv_1969[256];         // image argv_2817
    // new elements: 07-Jun-2002
    CHAR                        argv_2223[256];   // symbol argv_1396 argv_2817
    CHAR                        argv_2224[256];     // pdb argv_1396 argv_2817
    DWORD                       argv_1126;                  // argv_3518 of the CV record in the debug directories
    CHAR			            argv_1123[MAX_PATH * 3];   // Contents of the CV record
    DWORD                       argv_3071;                 // argv_3518 of PDB
    GUID                        argv_3072;               // argv_3518 of PDB (VC 7 and up)
    DWORD                       argv_3069;                 // DBI age of pdb
    BOOL                        argv_3073;           // argv_2221 an unmatched pdb
    BOOL                        argv_1148;           // argv_2221 an unmatched dbg
    BOOL                        argv_2177;            // we have argv_2173 number information
    BOOL                        argv_1792;          // we have internal symbol information
    BOOL                        argv_3860;               // we have argv_3842 information
} argv_1948, *argv_3112;

typedef struct argv_514 {
    DWORD                       argv_3541;           // set to sizeof(argv_1948)
    DWORD64                     argv_747;            // argv_742 argv_2198 argv_635 of module
    DWORD                       argv_1970;              // virtual size of the argv_2221 module
    DWORD                       argv_3826;          // date/argv_3825 stamp from pe argv_1907
    DWORD                       argv_865;               // checksum from the pe argv_1907
    DWORD                       argv_2905;                // number of symbols in the symbol table
    argv_3621                    argv_3720;                // argv_3842 of symbols argv_2221
    WCHAR                       argv_2479[32];         // module argv_2817
    WCHAR                       argv_1969[256];         // image argv_2817
    // new elements: 07-Jun-2002
    WCHAR                       argv_2223[256];   // symbol argv_1396 argv_2817
    WCHAR                       argv_2224[256];     // pdb argv_1396 argv_2817
    DWORD                       argv_1126;                  // argv_3518 of the CV record in the debug directories
    WCHAR			            argv_1123[MAX_PATH * 3];   // Contents of the CV record
    DWORD                       argv_3071;                 // argv_3518 of PDB
    GUID                        argv_3072;               // argv_3518 of PDB (VC 7 and up)
    DWORD                       argv_3069;                 // DBI age of pdb
    BOOL                        argv_3073;           // argv_2221 an unmatched pdb
    BOOL                        argv_1148;           // argv_2221 an unmatched dbg
    BOOL                        argv_2177;            // we have argv_2173 number information
    BOOL                        argv_1792;          // we have internal symbol information
    BOOL                        argv_3860;               // we have argv_3842 information
} argv_1950, *argv_3114;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_1947 argv_1948
#define argv_3111 argv_3112
#define argv_1949 argv_1950
#define argv_3113 argv_3114
#else
typedef struct argv_512 {
    DWORD                       argv_3541;           // set to sizeof(argv_1947)
    DWORD                       argv_747;            // argv_742 argv_2198 argv_635 of module
    DWORD                       argv_1970;              // virtual size of the argv_2221 module
    DWORD                       argv_3826;          // date/argv_3825 stamp from pe argv_1907
    DWORD                       argv_865;               // checksum from the pe argv_1907
    DWORD                       argv_2905;                // number of symbols in the symbol table
    argv_3621                    argv_3720;                // argv_3842 of symbols argv_2221
    CHAR                        argv_2479[32];         // module argv_2817
    CHAR                        argv_1969[256];         // image argv_2817
    CHAR                        argv_2223[256];   // symbol argv_1396 argv_2817
} argv_1947, *argv_3111;

typedef struct argv_515 {
    DWORD                       argv_3541;           // set to sizeof(argv_1947)
    DWORD                       argv_747;            // argv_742 argv_2198 argv_635 of module
    DWORD                       argv_1970;              // virtual size of the argv_2221 module
    DWORD                       argv_3826;          // date/argv_3825 stamp from pe argv_1907
    DWORD                       argv_865;               // checksum from the pe argv_1907
    DWORD                       argv_2905;                // number of symbols in the symbol table
    argv_3621                    argv_3720;                // argv_3842 of symbols argv_2221
    WCHAR                       argv_2479[32];         // module argv_2817
    WCHAR                       argv_1969[256];         // image argv_2817
    WCHAR                       argv_2223[256];   // symbol argv_1396 argv_2817
} argv_1949, *argv_3113;
#endif

//
// source argv_1396 argv_2173 argv_1139 structure
//

typedef struct argv_511 {
    DWORD                       argv_3541;           // set to sizeof(argv_1946)
    PVOID                       argv_2110;                    // internal
    DWORD                       argv_2176;             // argv_2173 number in argv_1396
    PCHAR                       argv_1447;               // full argv_1446
    DWORD64                     argv_636;                // first instruction of argv_2173
} argv_1946, *argv_3110;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_1945 argv_1946
#define argv_3109 argv_3110
#else
typedef struct argv_510 {
    DWORD                       argv_3541;           // set to sizeof(argv_1945)
    PVOID                       argv_2110;                    // internal
    DWORD                       argv_2176;             // argv_2173 number in argv_1396
    PCHAR                       argv_1447;               // full argv_1446
    DWORD                       argv_636;                // first instruction of argv_2173
} argv_1945, *argv_3109;
#endif

//
// source argv_1396 structure
//

typedef struct argv_597 {
    DWORD64                     argv_2471;                // argv_742 argv_635 of argv_2221 module
    PCHAR                       argv_1447;               // full argv_1446 of source
} argv_3559, *argv_3292;

//
// argv_1139 structures used for registered symbol callbacks
//

#define argv_796          0x00000001
#define argv_793       0x00000002
#define argv_794        0x00000003
#define argv_801                    0x00000004
#define argv_797                    0x00000005
#define argv_799                         0x00000006
#define argv_792         0x00000007
#define argv_800                         0x00000008
#define argv_798                               0x00000010
#define argv_795        0x00000020
#define argv_791                          0x10000000

typedef struct argv_505 {
    DWORD64   argv_633;                                     // argv_635 to read from
    PVOID     argv_770;                                      // argv_771 to read to
    DWORD     argv_782;                                    // amount of argv_782 to read
    DWORD    *argv_783;                                // pointer to store amount of argv_782 read
} argv_1939, *argv_3103;

enum {
    argv_3506 = 0,
    argv_3508,
    argv_3503,
    argv_3505,
    argv_3507  // unused
};

typedef struct argv_504 {
    DWORD argv_3504;                                     // values from argv_3506 to argv_3505
    DWORD argv_929;                                         // numerical argv_929 IDs the error
    PCHAR argv_1192;                                         // may contain a argv_3776 description of the error
    PVOID argv_2908;                                       // argv_3960 dependant upon the error argv_929
} argv_1938, *argv_3102;

typedef struct argv_507 {
    DWORD                       argv_3541;           // set to sizeof(argv_1942)
    DWORD64                     argv_747;            // argv_742 argv_2198 argv_635 of module
    DWORD                       argv_865;               // checksum from the pe argv_1907
    DWORD                       argv_3826;          // date/argv_3825 stamp from pe argv_1907
    CHAR                        argv_1447[MAX_PATH];     // symbols argv_1396 or image argv_2817
    BOOLEAN                     argv_3349;                // argv_2198 failure reparse
    HANDLE                      argv_1909;                  // argv_1396 argv_1890, if passed
    DWORD                       argv_1454;			//
} argv_1942, *argv_3106;

#define argv_1263	0x1
#define argv_1262  0x2

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_1941 argv_1942
#define argv_3105 argv_3106
#else
typedef struct argv_506 {
    DWORD                       argv_3541;           // set to sizeof(argv_1941)
    DWORD                       argv_747;            // argv_742 argv_2198 argv_635 of module
    DWORD                       argv_865;               // checksum from the pe argv_1907
    DWORD                       argv_3826;          // date/argv_3825 stamp from pe argv_1907
    CHAR                        argv_1447[MAX_PATH];     // symbols argv_1396 or image argv_2817
    BOOLEAN                     argv_3349;                // argv_2198 failure reparse
    HANDLE                      argv_1909;                  // argv_1396 argv_1890, if passed
} argv_1941, *argv_3105;
#endif

typedef struct argv_509 {
    DWORD                       argv_3541;           // set to sizeof(argv_1944)
    DWORD                       argv_2892;           // number of duplicates in the argv_3622 array
    argv_3119          argv_3622;                 // array of duplicate symbols
    DWORD                       argv_3471;         // symbol selected (-1 to argv_3601)
} argv_1944, *argv_3108;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_1943 argv_1944
#define argv_3107 argv_3108
#else
typedef struct argv_508 {
    DWORD                       argv_3541;           // set to sizeof(argv_1943)
    DWORD                       argv_2892;           // number of duplicates in the argv_3622 array
    argv_3116            argv_3622;                 // array of duplicate symbols
    DWORD                       argv_3471;         // symbol selected (-1 to argv_3601)
} argv_1943, *argv_3107;
#endif

// If dbghelp ever needs to argv_1200 graphical UI, it will use this as the parent window.

BOOL
argv_1934
SymSetParentWindow(
    HWND hwnd
    );

PCHAR
argv_1934
SymSetHomeDirectory(
    PCSTR dir
    );

PCHAR
argv_1934
SymGetHomeDirectory(
    DWORD  argv_3842,
    PSTR   dir,
    size_t size
    );
    
typedef enum {
    argv_1903 = 0, // root directory for dbghelp
    argv_1906,      // where symbols are stored
    argv_1905,      // where source is stored
    argv_1904       // end marker
};
    
//
// options that are set/returned by SymSetOptions() & SymGetOptions()
// these are used as a mask
//
#define argv_3697         0x00000001
#define argv_3715                  0x00000002
#define argv_3699           0x00000004
#define argv_3707                   0x00000008
#define argv_3706               0x00000010
#define argv_3712        0x00000020
#define argv_3705            0x00000040
#define argv_3702             0x00000080
#define argv_3711     0x00000100
#define argv_3701     0x00000200
#define argv_3700            0x00000400
#define argv_3695   0x00000800
#define argv_3703        0x00001000
#define argv_3704    0x00002000
#define argv_3713             0x00004000
#define argv_3710               0x00008000
#define argv_3696             0x00010000
#define argv_3708          0x00020000
#define argv_3714                   0x00040000
#define argv_3709               0x00080000

#define argv_3698                    0x80000000

DWORD
argv_1934
SymSetOptions(
    IN DWORD   SymOptions
    );

DWORD
argv_1934
SymGetOptions(
    VOID
    );

BOOL
argv_1934
SymCleanup(
    IN HANDLE hProcess
    );

BOOL
argv_1934
SymMatchString(
    IN LPSTR string,
    IN LPSTR expression,
    IN BOOL  fCase
    );

typedef BOOL
(CALLBACK *argv_3298)(
    argv_3292 pSourceFile,
    PVOID       UserContext
    );

BOOL
argv_1934
SymEnumSourceFiles(
    IN HANDLE  hProcess,
    IN ULONG64 argv_2471,
    IN LPSTR   Mask,
    IN argv_3298 cbSrcFiles,
    IN PVOID   UserContext
    );

BOOL
argv_1934
SymEnumerateModules64(
    IN HANDLE                       hProcess,
    IN argv_3297  EnumModulesCallback,
    IN PVOID                        UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3648 SymEnumerateModules64
#else
BOOL
argv_1934
argv_3648(
    IN HANDLE                     hProcess,
    IN argv_3296  EnumModulesCallback,
    IN PVOID                      UserContext
    );
#endif

BOOL
argv_1934
SymEnumerateSymbols64(
    IN HANDLE                       hProcess,
    IN DWORD64                      BaseOfDll,
    IN argv_3300  EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

BOOL
argv_1934
SymEnumerateSymbolsW64(
    IN HANDLE                       hProcess,
    IN DWORD64                      BaseOfDll,
    IN argv_3301 EnumSymbolsCallback,
    IN PVOID                        UserContext
    );


#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3649 SymEnumerateSymbols64
#define argv_3650 SymEnumerateSymbolsW64
#else
BOOL
argv_1934
argv_3649(
    IN HANDLE                     hProcess,
    IN DWORD                      BaseOfDll,
    IN argv_3299  EnumSymbolsCallback,
    IN PVOID                      UserContext
    );

BOOL
argv_1934
argv_3650(
    IN HANDLE                       hProcess,
    IN DWORD                        BaseOfDll,
    IN argv_3302   EnumSymbolsCallback,
    IN PVOID                        UserContext
    );
#endif

BOOL
argv_1934
EnumerateLoadedModules64(
    IN HANDLE                           hProcess,
    IN argv_3083   EnumLoadedModulesCallback,
    IN PVOID                            UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_1315 EnumerateLoadedModules64
#else
BOOL
argv_1934
argv_1315(
    IN HANDLE                         hProcess,
    IN argv_3082   EnumLoadedModulesCallback,
    IN PVOID                          UserContext
    );
#endif

PVOID
argv_1934
SymFunctionTableAccess64(
    HANDLE  hProcess,
    DWORD64 AddrBase
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3681 SymFunctionTableAccess64
#else
PVOID
argv_1934
argv_3681(
    HANDLE  hProcess,
    DWORD   AddrBase
    );
#endif

BOOL
argv_1934
SymGetModuleInfo64(
    IN  HANDLE                  hProcess,
    IN  DWORD64                 qwAddr,
    OUT argv_3112      ModuleInfo
    );

BOOL
argv_1934
SymGetModuleInfoW64(
    IN  HANDLE                  hProcess,
    IN  DWORD64                 qwAddr,
    OUT argv_3114     ModuleInfo
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3687   SymGetModuleInfo64
#define argv_3688  SymGetModuleInfoW64
#else
BOOL
argv_1934
argv_3687(
    IN  HANDLE              hProcess,
    IN  DWORD               dwAddr,
    OUT argv_3111  ModuleInfo
    );

BOOL
argv_1934
argv_3688(
    IN  HANDLE              hProcess,
    IN  DWORD               dwAddr,
    OUT argv_3113  ModuleInfo
    );
#endif

DWORD64
argv_1934
SymGetModuleBase64(
    IN  HANDLE              hProcess,
    IN  DWORD64             qwAddr
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3686 SymGetModuleBase64
#else
DWORD
argv_1934
argv_3686(
    IN  HANDLE              hProcess,
    IN  DWORD               dwAddr
    );
#endif

BOOL
argv_1934
SymGetSymNext64(
    IN     HANDLE              hProcess,
    IN OUT argv_3119  argv_3622
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3691 SymGetSymNext64
#else
BOOL
argv_1934
argv_3691(
    IN     HANDLE            hProcess,
    IN OUT argv_3116  argv_3622
    );
#endif

BOOL
argv_1934
SymGetSymPrev64(
    IN     HANDLE              hProcess,
    IN OUT argv_3119  argv_3622
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3692 SymGetSymPrev64
#else
BOOL
argv_1934
argv_3692(
    IN     HANDLE            hProcess,
    IN OUT argv_3116  argv_3622
    );
#endif

typedef struct argv_598 {
    DWORD   argv_3541;           // set to sizeof(argv_3571)
    PVOID   argv_2110;                    // not used
    DWORD64 argv_2471;                // argv_742 argv_635 of module this applies to
    CHAR    argv_2907[MAX_PATH + 1];      // the argv_2908 argv_1396 within the module
    CHAR    argv_1447[MAX_PATH + 1]; // full argv_1446
    DWORD   argv_2176;             // argv_2173 number in argv_1396
    DWORD64 argv_636;                // first instruction of argv_2173
} argv_3571, *argv_3293;

typedef BOOL
(CALLBACK *argv_3295)(
    argv_3293 LineInfo,
    PVOID      UserContext
    );

BOOL
argv_1934
SymEnumLines(
    IN  HANDLE  hProcess,
    IN  ULONG64 Base,
    IN  PCSTR   argv_2907,
    IN  PCSTR   File,
    IN  argv_3295 EnumLinesCallback,
    IN  PVOID   UserContext
    );

BOOL
argv_1934
SymGetLineFromAddr64(
    IN  HANDLE                  hProcess,
    IN  DWORD64                 qwAddr,
    OUT PDWORD                  pdwDisplacement,
    OUT argv_3110        Line64
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3682 SymGetLineFromAddr64
#else
BOOL
argv_1934
argv_3682(
    IN  HANDLE                hProcess,
    IN  DWORD                 dwAddr,
    OUT PDWORD                pdwDisplacement,
    OUT argv_3109        Line
    );
#endif

BOOL
argv_1934
SymGetLineFromName64(
    IN     HANDLE               hProcess,
    IN     PSTR                 argv_2479,
    IN     PSTR                 argv_1447,
    IN     DWORD                dwLineNumber,
       OUT PLONG                plDisplacement,
    IN OUT argv_3110     Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3683 SymGetLineFromName64
#else
BOOL
argv_1934
argv_3683(
    IN     HANDLE             hProcess,
    IN     PSTR               argv_2479,
    IN     PSTR               argv_1447,
    IN     DWORD              dwLineNumber,
       OUT PLONG              plDisplacement,
    IN OUT argv_3109     Line
    );
#endif

BOOL
argv_1934
SymGetLineNext64(
    IN     HANDLE               hProcess,
    IN OUT argv_3110     Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3684 SymGetLineNext64
#else
BOOL
argv_1934
argv_3684(
    IN     HANDLE             hProcess,
    IN OUT argv_3109     Line
    );
#endif

BOOL
argv_1934
SymGetLinePrev64(
    IN     HANDLE               hProcess,
    IN OUT argv_3110     Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3685 SymGetLinePrev64
#else
BOOL
argv_1934
argv_3685(
    IN     HANDLE             hProcess,
    IN OUT argv_3109     Line
    );
#endif

BOOL
argv_1934
SymMatchFileName(
    IN  PSTR  argv_1447,
    IN  PSTR  Match,
    OUT PSTR *FileNameStop,
    OUT PSTR *MatchStop
    );

BOOL
argv_1934
SymInitialize(
    IN HANDLE   hProcess,
    IN PSTR     UserSearchPath,
    IN BOOL     fInvadeProcess
    );

BOOL
argv_1934
SymGetSearchPath(
    IN  HANDLE          hProcess,
    OUT PSTR            SearchPath,
    IN  DWORD           SearchPathLength
    );

BOOL
argv_1934
SymSetSearchPath(
    IN HANDLE           hProcess,
    IN PSTR             SearchPath
    );

DWORD64
argv_1934
SymLoadModule64(
    IN  HANDLE          hProcess,
    IN  HANDLE          argv_1909,
    IN  PSTR            argv_1969,
    IN  PSTR            argv_2479,
    IN  DWORD64         BaseOfDll,
    IN  DWORD           SizeOfDll
    );

#define argv_3545 0x1

DWORD64
argv_1934
SymLoadModuleEx(
    IN  HANDLE         hProcess,
    IN  HANDLE         argv_1909,
    IN  PSTR           argv_1969,
    IN  PSTR           argv_2479,
    IN  DWORD64        BaseOfDll,
    IN  DWORD          DllSize,
    IN  argv_3214  Data,
    IN  DWORD          argv_1454
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3693 SymLoadModule64
#else
DWORD
argv_1934
argv_3693(
    IN  HANDLE          hProcess,
    IN  HANDLE          argv_1909,
    IN  PSTR            argv_1969,
    IN  PSTR            argv_2479,
    IN  DWORD           BaseOfDll,
    IN  DWORD           SizeOfDll
    );
#endif

BOOL
argv_1934
SymUnloadModule64(
    IN  HANDLE          hProcess,
    IN  DWORD64         BaseOfDll
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3722 SymUnloadModule64
#else
BOOL
argv_1934
argv_3722(
    IN  HANDLE          hProcess,
    IN  DWORD           BaseOfDll
    );
#endif

BOOL
argv_1934
SymUnDName64(
    IN  argv_3119 argv_3620,               // argv_3622 to undecorate
    OUT PSTR               UnDecName,         // argv_772 to store undecorated argv_2817 in
    IN  DWORD              UnDecNameLength    // argv_3519 of the argv_771
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3721 SymUnDName64
#else
BOOL
argv_1934
argv_3721(
    IN  argv_3116 argv_3620,               // argv_3622 to undecorate
    OUT PSTR             UnDecName,         // argv_772 to store undecorated argv_2817 in
    IN  DWORD            UnDecNameLength    // argv_3519 of the argv_771
    );
#endif

BOOL
argv_1934
SymRegisterCallback64(
    IN HANDLE                        hProcess,
    IN argv_3308 CallbackFunction,
    IN ULONG64                       UserContext
    );

BOOL
argv_1934
SymRegisterFunctionEntryCallback64(
    IN HANDLE                       hProcess,
    IN argv_3304 CallbackFunction,
    IN ULONG64                      UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3717 SymRegisterCallback64
#define argv_3718 SymRegisterFunctionEntryCallback64
#else
BOOL
argv_1934
argv_3717(
    IN HANDLE                      hProcess,
    IN argv_3307 CallbackFunction,
    IN PVOID                       UserContext
    );

BOOL
argv_1934
argv_3718(
    IN HANDLE                     hProcess,
    IN argv_3303 CallbackFunction,
    IN PVOID                      UserContext
    );
#endif


typedef struct argv_519 {
    DWORD sizeofstruct;
    DWORD argv_3842;
    char  argv_1396[MAX_PATH];
} argv_1963, *argv_3118;

typedef struct argv_568 { // AKA TYPTYP
    USHORT      argv_1142;
    USHORT      argv_2149;
    BYTE        argv_1139[1];
} argv_2475, *argv_3215;

typedef struct argv_602 {
    ULONG       argv_3541;
    ULONG       argv_3859;        // argv_3843 Index of symbol
    ULONG64     argv_3353[2];
    ULONG       info;
    ULONG       argv_3519;
    ULONG64     argv_2471;          // Base argv_636 of module comtaining this symbol
    ULONG       argv_1454;
    ULONG64     argv_3961;            // argv_3961 of symbol, ValuePresent should be 1
    ULONG64     argv_636;          // argv_636 of symbol including argv_742 argv_635 of module
    ULONG       argv_3345;         // register holding argv_3960 or pointer to argv_3960
    ULONG       argv_3460;            // scope of the symbol
    ULONG       argv_3735;              // pdb classification
    ULONG       argv_2829;          // Actual length of argv_2817
    ULONG       argv_2341;
    CHAR        argv_2818[1];          // argv_2818 of symbol
} argv_3626, *argv_3305;

typedef struct argv_603 {
    argv_3626 argv_3514;
    CHAR        argv_2817[argv_2334 + 1];
} argv_3627, *argv_3306;

typedef struct argv_516
{
    ULONG64 InstructionOffset;
    ULONG64 ReturnOffset;
    ULONG64 FrameOffset;
    ULONG64 StackOffset;
    ULONG64 BackingStoreOffset;
    ULONG64 argv_1708;
    ULONG64 argv_2963[4];
    ULONG64 argv_3353[5];
    BOOL    argv_3977;
    ULONG   argv_3356;
} argv_1951, *argv_3115;

typedef VOID argv_1940, *argv_3104;


BOOL
argv_1934
SymSetContext(
    HANDLE hProcess,
    argv_3115 StackFrame,
    argv_3104 argv_1048
    );

BOOL
argv_1934
SymFromAddr(
    IN  HANDLE              hProcess,
    IN  DWORD64             argv_636,
    OUT PDWORD64            Displacement,
    IN OUT argv_3305     argv_3622
    );

BOOL
argv_1934
SymFromToken(
    IN  HANDLE              hProcess,
    IN  DWORD64             Base,
    IN  DWORD               Token,
    IN OUT argv_3305     argv_3622
    );
    
// While SymFromName will provide a symbol from a argv_2817,
// SymEnumSymbols can provide the same matching information
// for ALL symbols with a matching argv_2817, even regular
// expressions.  That way you can search across modules
// and differentiate between identically named symbols.

BOOL
argv_1934
SymFromName(
    IN  HANDLE              hProcess,
    IN  LPSTR               argv_2818,
    OUT argv_3305        argv_3622
    );

typedef BOOL
(CALLBACK *argv_3294)(
    argv_3305  pSymInfo,
    ULONG         SymbolSize,
    PVOID         UserContext
    );

BOOL
argv_1934
SymEnumSymbols(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN PCSTR                        Mask,
    IN argv_3294    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

BOOL
argv_1934
SymEnumSymbolsForAddr(
    IN HANDLE                       hProcess,
    IN DWORD64                      argv_636,
    IN argv_3294    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

#define argv_3651        1
#define argv_3652       2

typedef enum argv_520 {
    argv_3815,
    argv_3814,
    argv_3810,
    argv_3817,
    argv_3818,
    argv_3803,
    argv_3802,
    argv_3799,
    argv_3809,
    TI_GET_ADDRESSOFFSET,
    TI_GET_OFFSET,
    argv_3820,
    argv_3808,
    argv_3806,
    argv_3804,
    argv_3821,
    argv_3822,
    TI_GET_VIRTUALBASEPOINTEROFFSET,
    argv_3807,
    argv_3812,
    argv_3813,
    argv_3811,
    argv_3801,
    argv_3816,
    argv_3819,
    argv_3823,
    argv_3805,
} argv_1965;

typedef struct argv_610 {
    ULONG argv_1056;
    ULONG argv_3602;
    ULONG argv_866[1];
} argv_3800;

BOOL
argv_1934
SymGetTypeInfo(
    IN  HANDLE          hProcess,
    IN  DWORD64         argv_2471,
    IN  ULONG           TypeId,
    IN  argv_1965 GetType,
    OUT PVOID           pInfo
    );

BOOL
argv_1934
SymEnumTypes(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN argv_3294    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

BOOL
argv_1934
SymGetTypeFromName(
    IN  HANDLE              hProcess,
    IN  ULONG64             BaseOfDll,
    IN  LPSTR               argv_2818,
    OUT argv_3305        argv_3622
    );

BOOL
argv_1934
SymAddSymbol(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN PCSTR                        argv_2818,
    IN DWORD64                      argv_636,
    IN DWORD                        argv_3519,
    IN DWORD                        argv_1454
    );

BOOL
argv_1934
SymDeleteSymbol(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN PCSTR                        argv_2818,
    IN DWORD64                      argv_636,
    IN DWORD                        argv_1454
    );

//
// Full user-mode dump creation.
//

typedef BOOL (WINAPI *argv_3070)(
    DWORD       DataType,
    PVOID*      Data,
    LPDWORD     DataLength,
    PVOID       UserData
    );

BOOL
WINAPI
DbgHelpCreateUserDump(
    IN LPSTR                              argv_1447,
    IN argv_3070 Callback,
    IN PVOID                              UserData
    );

BOOL
WINAPI
DbgHelpCreateUserDumpW(
    IN LPWSTR                             argv_1447,
    IN argv_3070 Callback,
    IN PVOID                              UserData
    );

// -----------------------------------------------------------------
// The following 4 legacy APIs are fully supported, but newer
// ones are recommended.  SymFromName and SymFromAddr provide
// much more detailed info on the returned symbol.

BOOL
argv_1934
SymGetSymFromAddr64(
    IN  HANDLE              hProcess,
    IN  DWORD64             qwAddr,
    OUT PDWORD64            pdwDisplacement,
    OUT argv_3119  argv_3622
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3689 SymGetSymFromAddr64
#else
BOOL
argv_1934
argv_3689(
    IN  HANDLE            hProcess,
    IN  DWORD             dwAddr,
    OUT PDWORD            pdwDisplacement,
    OUT argv_3116  argv_3622
    );
#endif

// While following two APIs will provide a symbol from a argv_2817,
// SymEnumSymbols can provide the same matching information
// for ALL symbols with a matching argv_2817, even regular
// expressions.  That way you can search across modules
// and differentiate between identically named symbols.

BOOL
argv_1934
SymGetSymFromName64(
    IN  HANDLE              hProcess,
    IN  PSTR                argv_2818,
    OUT argv_3119  argv_3622
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_523)
#define argv_3690 SymGetSymFromName64
#else
BOOL
argv_1934
argv_3690(
    IN  HANDLE            hProcess,
    IN  PSTR              argv_2818,
    OUT argv_3116  argv_3622
    );
#endif


// -----------------------------------------------------------------
// The following APIs exist only for backwards compatibility
// with a pre-release version documented in an MSDN release.

// You should use SymFindFileInPath if you want to maintain
// future compatibility.

argv_1150
BOOL
argv_1934
FindFileInPath(
    HANDLE hprocess,
    LPSTR  SearchPath,
    LPSTR  argv_1447,
    PVOID  argv_1915,
    DWORD  two,
    DWORD  three,
    DWORD  argv_1453,
    LPSTR  FilePath
    );

// You should use SymFindFileInPath if you want to maintain
// future compatibility.

argv_1150
BOOL
argv_1934
FindFileInSearchPath(
    HANDLE hprocess,
    LPSTR  SearchPath,
    LPSTR  argv_1447,
    DWORD  argv_2929,
    DWORD  two,
    DWORD  three,
    LPSTR  FilePath
    );

argv_1150
BOOL
argv_1934
SymEnumSym(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN argv_3294    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

// These values should not be used.
// They have been replaced by SYMFLAG_ values.

#define argv_3660   0x00000001
#define argv_3661    0x00000002
#define argv_3663         0x00000008
#define argv_3664           0x00000010
#define argv_3657         0x00000020
#define argv_3662        0x00000040
#define argv_3659            0x00000080
#define argv_3654         0x00000100
#define argv_3655           0x00000200
#define argv_3656        0x00000400
#define argv_3658         0x00000800
#define argv_3667          0x00001000
#define argv_3665            0x00002000
#define argv_3666           0x00004000

// These values should also not be used.
// They have been replaced by SYMFLAG_ values.

#define argv_1961          1
#define argv_1958              argv_3663        // 0x0008
#define argv_1959           argv_3664          // 0x0010
#define argv_1955         argv_3657        // 0x0020
#define argv_1957             argv_3662       // 0x0040
#define argv_1956                 argv_3659           // 0x0080
#define argv_1954              argv_3654        // 0x0100
#define argv_1953                   argv_3658        // 0x0800
#define argv_1966                    argv_3667         // 0x1000
#define argv_1964                      argv_3665           // 0x2000
#define argv_1960           argv_3666          // 0x4000


#include <pshpack4.h>

#if defined(_MSC_VER)
#if _MSC_VER >= 800
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4200)    /* Zero length array */
#pragma warning(disable:4201)    /* Nameless struct/union */
#endif
#endif

#define argv_2422 ('PMDM')
#define argv_2438   (42899)
typedef DWORD argv_3416;
typedef ULONG64 argv_3418;

typedef struct argv_542 {
    ULONG32 argv_1143;
    argv_3416 argv_3415;
} argv_2410;

typedef struct argv_543 {
    ULONG64 argv_1143;
    argv_3418 argv_3415;
} argv_2411;


typedef struct argv_544 {
    ULONG64 argv_3603;
    argv_2410 argv_2381;
} argv_2412, *argv_3193;

// DESCRIPTOR64 is used for full-memory minidumps where
// all of the raw memory is laid out sequentially at the
// end of the dump.  There is no need for individual RVAs
// as the argv_3416 is the argv_742 argv_3416 plus the sum of the preceeding
// argv_1139 blocks.
typedef struct argv_545 {
    ULONG64 argv_3603;
    ULONG64 argv_1143;
} argv_2413, *argv_3194;


typedef struct argv_539 {
    ULONG32 argv_3518;
    ULONG32 argv_3971;
    ULONG32 argv_2901;
    argv_3416 argv_3613;
    ULONG32 argv_865;
    union {
        ULONG32 argv_3353;
        ULONG32 argv_3826;
    };
    ULONG64 argv_1454;
} argv_2407, *argv_3190;

//
// The argv_2407 field argv_3613 points to 
// an array of argv_2398 structures.
//

typedef struct argv_531 {
    ULONG32 argv_3614;
    argv_2410 argv_2229;
} argv_2398, *argv_3181;


typedef struct argv_553 {
    ULONG32 argv_2150;         // argv_2150 in argv_782 of the string
    WCHAR   argv_772 [0];     // Variable size argv_771
} argv_2424, *argv_3201;



//
// The argv_2398 field argv_3614 may be argv_2929 of the following types.
// Types will be added in the future, so if a program reading the minidump
// argv_1907 encounters a stream argv_3842 it does not understand it should ignore
// the argv_1139 altogether. Any tag above argv_2138 will not be used by
// the system and is argv_3352 for program-specific information.
//

typedef enum argv_552 {

    argv_3920                = 0,
    argv_3379             = 1,
    argv_3380             = 2,
    argv_3790            = 3,
    argv_2478            = 4,
    argv_2385            = 5,
    argv_1356             = 6,
    argv_3729            = 7,
    argv_3787          = 8,
    argv_2382          = 9,
    argv_999              = 10,
    argv_1000              = 11,
    argv_1894            = 12,
    argv_1711         = 13,
    argv_3916    = 14,
    argv_2460              = 15,

    argv_2138          = 0xffff

} argv_2423;


//
// The minidump system information contains processor and
// Operating System specific information.
// 

//
// CPU information is obtained from argv_2929 of two places.
//
//  1) On x86 computers, argv_1065 is obtained from the CPUID
//     instruction. You must use the X86 portion of the union for X86
//     computers.
//
//  2) On non-x86 architectures, argv_1065 is obtained by calling
//     IsProcessorFeatureSupported().
//

typedef union argv_491 {

    //
    // X86 platforms use CPUID function to obtain processor information.
    //
    
    struct {

        //
        // CPUID Subfunction 0, register EAX (argv_3970 [0]),
        // EBX (argv_3970 [1]) and ECX (argv_3970 [2]).
        //
        
        ULONG32 argv_3970 [ 3 ];
        
        //
        // CPUID Subfunction 1, register EAX
        //
        
        ULONG32 argv_3975;

        //
        // CPUID Subfunction 1, register EDX
        //
        
        ULONG32 argv_1393;
        

        //
        // CPUID, Subfunction 80000001, register EBX. This will only
        // be obtained if the vendor argv_1915 is "AuthenticAMD".
        //
        
        ULONG32 argv_668;

    } argv_3996;

    //
    // Non-x86 platforms use processor feature argv_1453.
    //
    
    struct {

        ULONG64 argv_3285 [ 2 ];
        
    } argv_2946;

} argv_1065, *argv_3068;
        
typedef struct argv_554 {

    //
    // argv_3284, argv_3286 and argv_3287 are all
    // taken from the SYSTEM_INFO structure obtained by GetSystemInfo( ).
    //
    
    USHORT argv_3284;
    USHORT argv_3286;
    USHORT argv_3287;

    union {
        USHORT argv_3354;
        struct {
            UCHAR argv_2897;
            UCHAR argv_3290;
        };
    };

    //
    // argv_2311, argv_2458, argv_779, argv_3123 and
    // CSDVersion are all taken from the OSVERSIONINFO structure
    // returned by GetVersionEx( ).
    //
    
    ULONG32 argv_2311;
    ULONG32 argv_2458;
    ULONG32 argv_779;
    ULONG32 argv_3123;

    //
    // argv_3416 to a CSDVersion string in the string table.
    //
    
    argv_3416 argv_1093;

    union {
        ULONG32 argv_3355;
        struct {
            USHORT argv_3618;
            USHORT argv_3356;
        };
    };

    argv_1065 argv_1064;

} argv_2425, *argv_3202;


//
// The minidump thread contains standard thread
// information plus an argv_3416 to the memory for this 
// thread and an argv_3416 to the CONTEXT structure for
// this thread.
//


//
// argv_3789 must be 4 argv_782 on all architectures.
//

C_ASSERT (sizeof ( ((PPROCESS_INFORMATION)0)->dwThreadId ) == 4);

typedef struct argv_555 {
    ULONG32 argv_3789;
    ULONG32 argv_3619;
    ULONG32 argv_3260;
    ULONG32 argv_3259;
    ULONG64 argv_3737;
    argv_2412 argv_3594;
    argv_2410 argv_3784;
} argv_2426, *argv_3203;

//
// The thread list is a container of threads.
//

typedef struct argv_560 {
    ULONG32 argv_2903;
    argv_2426 argv_3791 [0];
} argv_2431, *argv_3208;


typedef struct argv_557 {
    ULONG32 argv_3789;
    ULONG32 argv_3619;
    ULONG32 argv_3260;
    ULONG32 argv_3259;
    ULONG64 argv_3737;
    argv_2412 argv_3594;
    argv_2410 argv_3784;
    argv_2412 argv_738;
} argv_2428, *argv_3205;

//
// The thread list is a container of threads.
//

typedef struct argv_559 {
    ULONG32 argv_2903;
    argv_2428 argv_3791 [0];
} argv_2430, *argv_3207;


//
// The argv_2399 is the same as EXCEPTION on Win64.
//

typedef struct argv_532  {
    ULONG32 argv_1351;
    ULONG32 argv_1352;
    ULONG64 argv_1355;
    ULONG64 argv_1350;
    ULONG32 argv_2904;
    ULONG32 argv_489;
    ULONG64 argv_1353 [ EXCEPTION_MAXIMUM_PARAMETERS ];
} argv_2399, *argv_3182;


//
// The exception information stream contains the argv_1915 of the thread that caused
// the exception (argv_3789), the exception record for the exception
// (argv_1355) and an argv_3416 to the thread context where the exception
// occured.
//

typedef struct argv_2402 {
    ULONG32 argv_3789;
    ULONG32  argv_381;
    argv_2399 argv_1355;
    argv_2410 argv_3784;
} argv_2402, *argv_3185;


//
// The argv_2419 contains information about a
// a specific module. It includes the argv_865 and
// the argv_3826 for the module so the module
// can be reloaded during the analysis phase.
//

typedef struct argv_549 {
    ULONG64 argv_747;
    ULONG32 argv_3532;
    ULONG32 argv_865;
    ULONG32 argv_3826;
    argv_3416 argv_2480;
    VS_FIXEDFILEINFO argv_3974;
    argv_2410 argv_1125;
    argv_2410 argv_2461;
    ULONG64 argv_3354;                          // argv_3353 for future use.
    ULONG64 argv_3355;                          // argv_3353 for future use.
} argv_2419, *argv_3198;   


//
// The minidump module list is a container for modules.
//

typedef struct argv_551 {
    ULONG32 argv_2896;
    argv_2419 argv_2482 [ 0 ];
} argv_2421, *argv_3200;


//
// argv_2381 Ranges
//

typedef struct argv_546 {
    ULONG32 argv_2895;
    argv_2412 argv_2386 [0];
} argv_2414, *argv_3195;

typedef struct argv_547 {
    ULONG64 argv_2895;
    argv_3418 argv_748;
    argv_2413 argv_2386 [0];
} argv_2415, *argv_3196;


//
// Support for user supplied exception information.
//

typedef struct argv_533 {
    DWORD argv_3789;
    PEXCEPTION_POINTERS argv_1354;
    BOOL argv_913;
} argv_2400, *argv_3183;

typedef struct argv_534 {
    DWORD argv_3789;
    ULONG64 argv_1355;
    ULONG64 argv_1049;
    BOOL argv_913;
} argv_2401, *argv_3184;


//
// Support for capturing system argv_1890 argv_3604 at the argv_3825 of the dump.
//

typedef struct argv_538 {
    ULONG64 argv_1891;
    argv_3416 argv_3861;
    argv_3416 argv_2926;
    ULONG32 argv_728;
    ULONG32 argv_1885;
    ULONG32 argv_1893;
    ULONG32 argv_3216;
} argv_2406, *argv_3189;

typedef struct argv_537 {
    ULONG32 argv_3528;
    ULONG32 argv_3525;
    ULONG32 argv_2891;
    ULONG32 argv_3353;
} argv_2405, *argv_3188;


//
// Support for capturing dynamic function table argv_3604 at the argv_3825 of the dump.
//

typedef struct argv_535 {
    ULONG64 argv_2453;
    ULONG64 argv_2340;
    ULONG64 argv_744;
    ULONG32 argv_1314;
    ULONG32 argv_3520;
} argv_2403, *argv_3186;

typedef struct argv_536 {
    ULONG32 argv_3528;
    ULONG32 argv_3525;
    ULONG32 argv_3536;
    ULONG32 argv_3527;
    ULONG32 argv_2891;
    ULONG32 argv_3520;
} argv_2404, *argv_3187;


//
// The argv_2433 contains information about a
// a specific module that was previously argv_2221 but no
// longer is.  This can help with diagnosing problems where
// callers attempt to call argv_929 that is no longer argv_2221.
//

typedef struct argv_562 {
    ULONG64 argv_747;
    ULONG32 argv_3532;
    ULONG32 argv_865;
    ULONG32 argv_3826;
    argv_3416 argv_2480;
} argv_2433, *argv_3209;


//
// The minidump unloaded module list is a container for unloaded modules.
//

typedef struct argv_563 {
    ULONG32 argv_3528;
    ULONG32 argv_3526;
    ULONG32 argv_2893;
} argv_2434, *argv_3210;


//
// The miscellaneous information stream contains a variety
// of small pieces of information.  A member is valid if
// it's within the available size and its corresponding
// bit is set.
//

#define argv_2417    0x00000001
#define argv_2418 0x00000002

typedef struct argv_548 {
    ULONG32 argv_3533;
    ULONG32 argv_1455;
    ULONG32 argv_3282;
    ULONG32 argv_3280;
    ULONG32 argv_3288;
    ULONG32 argv_3283;
} argv_2416, *argv_3197;


//
// Support for arbitrary user-defined information.
//

typedef struct argv_564 {
    ULONG32 argv_3843;
    argv_2410 argv_2381;
} argv_2435, *argv_3211;


typedef struct argv_565 {
    ULONG32 argv_3843;
    ULONG argv_778;
    PVOID argv_772;

} argv_2436, *argv_3212;


typedef struct argv_566 {
    ULONG argv_3944;
    argv_3212 argv_3943;
} argv_2437, *argv_3213;

//
// Callback support.
//

typedef enum argv_530 {
    argv_2477,
    argv_3783,
    argv_3786,
    argv_1974,
    argv_1972,
    argv_2384,
} argv_2397;


typedef struct argv_556 {
    ULONG argv_3789;
    HANDLE argv_3788;
    CONTEXT argv_1048;
    ULONG argv_3523;
    ULONG64 argv_3596;
    ULONG64 argv_3597;
} argv_2427, *argv_3204;


typedef struct argv_558 {
    ULONG argv_3789;
    HANDLE argv_3788;
    CONTEXT argv_1048;
    ULONG argv_3523;
    ULONG64 argv_3596;
    ULONG64 argv_3597;
    ULONG64 argv_739;
    ULONG64 argv_740;
} argv_2429, *argv_3206;


typedef struct argv_541 {
    ULONG argv_3789;
} argv_2409, *argv_3192;


typedef enum argv_609 {
    argv_3797            = 0x0001,
    argv_3796             = 0x0002,
    argv_3793           = 0x0004,
    argv_3792      = 0x0008,
    argv_3795 = 0x0010,
    argv_3798        = 0x0020,
} argv_3782;

typedef struct argv_550 {
    PWCHAR argv_1707;
    ULONG64 argv_747;
    ULONG argv_3532;
    ULONG argv_865;
    ULONG argv_3826;
    VS_FIXEDFILEINFO argv_3974;
    PVOID argv_1125; 
    ULONG argv_3524;
    PVOID argv_2461;
    ULONG argv_3535;
} argv_2420, *argv_3199;


typedef struct argv_540 {
    ULONG64 argv_747;
} argv_2408, *argv_3191;


typedef enum argv_569 {
    argv_2487        = 0x0001,
    argv_2484       = 0x0002,
    argv_2486    = 0x0004,
    argv_2483      = 0x0008,
    argv_2481 = 0x0010
} argv_2476;


typedef struct argv_528 {
    ULONG argv_3282;
    HANDLE argv_3281;
    ULONG argv_787;
    union {
        argv_2427 argv_3779;
        argv_2429 argv_3785;
        argv_2420 argv_2474;
        argv_2409 argv_1973;
        argv_2408 argv_1971;
    };
} argv_2394, *argv_3179;

typedef struct argv_529 {
    union {
        ULONG argv_2485;
        ULONG argv_3794;
        struct {
            ULONG64 argv_2383;
            ULONG argv_2387;
        };
    };
} argv_2395, *argv_3180;

        
//
// A normal minidump contains just the information
// necessary to capture stack traces for all of the
// existing threads in a process.
//
// A minidump with argv_1139 segments includes all of the argv_1139
// sections from argv_2221 modules in order to capture
// global variable contents.  This can make the dump much
// larger if many modules have global argv_1139.
//
// A minidump with full memory includes all of the accessible
// memory in the process and can be very large.  A minidump
// with full memory always has the raw memory argv_1139 at the end
// of the dump so that the initial structures in the dump can
// be mapped directly without having to include the raw
// memory information.
//
// argv_3594 and backing store memory can be filtered to remove
// argv_1139 unnecessary for stack walking.  This can improve
// compression of stacks and also deletes argv_1139 that may
// be private and should not be stored in a dump.
// argv_2381 can also be scanned to see what modules are
// referenced by stack and backing store memory to allow
// omission of other modules to reduce dump size.
// In either of these modes the argv_2481 flag
// is set for all modules referenced before the argv_742
// module callbacks occur.
//
// On some operating systems a list of modules that were
// recently unloaded is kept in addition to the currently
// argv_2221 module list.  This information can be saved in
// the dump if desired.
//
// argv_3594 and backing store memory can be scanned for referenced
// pages in order to pick up argv_1139 referenced by locals or other
// stack memory.  This can increase the size of a dump significantly.
//
// argv_2474 paths may contain undesired information such as user names
// or other important directory names so they can be stripped.  This
// option reduces the ability to locate the proper image later
// and should only be used in certain situations.
//
// Complete operating system per-process and per-thread information can
// be gathered and stored in the dump.
//
// The virtual argv_635 space can be scanned for various types
// of memory to be included in the dump.
//
// Code which is concerned with potentially private information
// getting into the minidump can set a flag that automatically
// modifies all existing and future argv_1453 to avoid placing
// unnecessary argv_1139 in the dump.  Basic argv_1139, such as stack
// information, will still be included but optional argv_1139, such
// as indirect memory, will not.
//

typedef enum argv_561 {
    argv_2442                         = 0x0000,
    argv_2444                   = 0x0001,
    argv_2445                 = 0x0002,
    argv_2446                 = 0x0004,
    argv_2440                   = 0x0008,
    argv_2443                     = 0x0010,
    argv_2451            = 0x0020,
    argv_2447 = 0x0040,
    argv_2441              = 0x0080,
    argv_2450          = 0x0100,
    argv_2449     = 0x0200,
    argv_2448            = 0x0400,
} argv_2432;


//
// The minidump callback should modify the FieldsToWrite parameter to reflect
// what portions of the specified thread or module should be written to the
// argv_1396.
//

typedef
BOOL
(WINAPI * argv_2396) (
    IN PVOID argv_785,
    IN CONST argv_3179 CallbackInput,
    IN OUT argv_3180 CallbackOutput
    );

typedef struct argv_527 {
    argv_2396 argv_786;
    PVOID argv_785;
} argv_2393, *argv_3178;



//++
//
// PVOID
// argv_3417(
//     PVOID Mapping,
//     ULONG argv_3415
//     )
//
// Routine Description:
//
//     Map an argv_3416 that is contained within a mapped argv_1396 to it's associated
//     flat argv_635.
//
// Arguments:
//
//     Mapping - Base argv_635 of mapped argv_1396 containing the argv_3416.
//
//     argv_3415 - An argv_3415 to fixup.
//
// Return Values:
//
//     A pointer to the desired argv_1139.
//
//--

#define argv_3417(Mapping,argv_3415) ((PVOID)(((ULONG_PTR) (Mapping)) + (argv_3415)))

BOOL
WINAPI
MiniDumpWriteDump(
    IN HANDLE hProcess,
    IN DWORD argv_3282,
    IN HANDLE argv_1909,
    IN argv_2432 DumpType,
    IN CONST argv_3183 ExceptionParam, OPTIONAL
    IN CONST argv_3213 UserStreamParam, OPTIONAL
    IN CONST argv_3178 argv_785 OPTIONAL
    );

BOOL
WINAPI
MiniDumpReadDumpStream(
    IN PVOID BaseOfDump,
    IN ULONG StreamNumber,
    OUT argv_3181 * Dir, OPTIONAL
    OUT PVOID * StreamPointer, OPTIONAL
    OUT ULONG * StreamSize OPTIONAL
    );

#if defined(_MSC_VER)
#if _MSC_VER >= 800
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4200)    /* Zero length array */
#pragma warning(default:4201)    /* Nameless struct/union */
#endif
#endif
#endif

#include <poppack.h>

#ifdef __cplusplus
}
#endif


#endif // argv_492
