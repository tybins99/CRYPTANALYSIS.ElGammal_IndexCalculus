// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_332.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the argv_1139 structure and
// @@ functions that are used by the kernel.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_453
#define argv_453



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ include files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_320.hpp"
#include "../LIB/argv_325.hpp"
#include "../LIB_AVX/file_type_result.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ function pointers declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3517 (* argv_1547)					(argv_2263, argv_3862 *, argv_3864, bool&, argv_2263&);
typedef argv_3517 (* argv_1494)		(argv_2263, argv_2263&);
typedef void (* argv_1502)	(argv_2263, argv_2263);

typedef argv_3517 (* argv_1623)					(argv_2263, argv_3862 *, argv_3864, bool&, argv_2263&);
typedef argv_3517 (* argv_1503)					(argv_2263, argv_3862 *, argv_3864&, argv_2263, argv_3517&);
typedef argv_3517 (* argv_1517)				(argv_2263, argv_2263, char *&, argv_3864&);
typedef argv_3517 (* argv_1490)					(argv_2263, argv_820);
typedef argv_3517 (* argv_1498)					(argv_2263);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ structures definitions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_590 {
	argv_2263							argv_727; // necessary to have a O(1) deallocation
	argv_1547					argv_1648;
	argv_1494		argv_1632;
	argv_1502	argv_1635;
	
	argv_1490					argv_1630;
	argv_1498						argv_1633;
	argv_1623					argv_1699;
	argv_1517				argv_1640;
	argv_1503					argv_1636;
} argv_3424;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ STRUCTURE NAME: argv_3543
// @@
// @@ DESCRIPTION:
// @@ This argv_1139 structure contains all the argv_1139 necessary for the kernel
// @@ to work properly :
// @@
// @@ - argv_3727: argv_2908 containing all the system dependant functions.
// @@
// @@ - complex_list_ptr: argv_2908 containing all the resolved symbols
// @@
// @@ - argv_3858: argv_2908 containing the argv_3402 of the argv_1396
// @@   argv_3842 detection process.
// @@
// @@ - argv_1122: argv_3864 : this field permits the kernel plugin 
// @@   to know what argv_3842 of argv_1396 argv_3842 detection plugin was ran.
// @@
// @@ - argv_2062: permits the kernel to log events to log files.
// @@
// @@ - argv_2191: linked list of argv_2908, each
// @@   argv_2908 containing all the functions for a given scanner 
// @@   (construct, scan, get_scan_report, dysinfect, argv_1197)
// @@
// @@ - triplet_ptr: this argv_2908 contains all the functions for a given 
// @@   scanner (construct, scan, get_scan_report, dysinfect, argv_1197).
// @@
// @@ - argv_3452: array of 'argv_3572' structures, so
// @@   actually we have a argv_3572 per argv_1396 argv_3842.
// @@ 
// @@ - argv_2977: char: system dependant path argv_3484.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_595 {
	// common part (for any possible application)
	argv_3593		*		argv_3727;
	argv_2263						argv_2062;
	argv_1621			argv_1504;
	argv_3862						argv_2977;
	char						argv_1112[MAX_PATH]; // argv_1106 argv_1446

	// application dependant part
	argv_2263						argv_3858;
	argv_3864						argv_1122;
	argv_2263						argv_1114; // used when scanning (stateful scan)
	argv_2263 						argv_3452;
	argv_2263						argv_2191;
} argv_3543;



#endif // argv_453



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
