// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_333.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the argv_1139 structures
// @@ and objects that permit to use the 
// @@ platform independant kernel
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_454
#define argv_454



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"
#include "../LIB_AVX/general_avx.hpp"
#include "../LIB/argv_340.hpp"
#if defined (__LINUX_OS__)
	#include <dlfcn.h>
#endif // #if defined (__LINUX_OS__)


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions pointers for the functions exported by the kernel
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2063 {
	argv_2081 = 0,
	argv_2080,
	argv_2079,
	argv_2082,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions pointers for the functions exported by the kernel
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_2263	(* argv_1491)				();
typedef argv_3517	(* argv_1500)				(argv_2263);
typedef argv_3517	(* argv_1481)					(argv_2263, argv_820, argv_820, argv_820, argv_820, argv_2263&);
typedef argv_3517	(* argv_1625)				(argv_2263);
typedef argv_3517	(* argv_1515)			(argv_2263, argv_3864&, argv_3864&);
typedef argv_3517	(* argv_1514)	(argv_2263, argv_3864&, argv_3864&);
typedef argv_3517	(* argv_1516)				(argv_2263, argv_820, argv_2263 *);

typedef argv_3517	(* argv_1529)			(argv_2263&, argv_2263);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ inner functions exported by the kernel
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3517 (* argv_1530)			(argv_2263&, char *, bool&, argv_2263&);	
typedef argv_3517 (* argv_1527)			(argv_2263&, argv_2263, char *, argv_3517&);		
typedef argv_3517 (* argv_1528)		(argv_2263&, argv_2263, char *&, argv_3864&);
typedef argv_3517 (* argv_1526)	(argv_2263);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889
// @@
// @@ DESCRIPTION	:	
// @@ This argv_2908 permits to create an abstraction of the
// @@ plugin based kernel to hide all complicated mechanisms
// @@ for use easiness purpose and low argv_929 coupling.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_889
{
private:
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	FILE	*						argv_1480;
	void							argv_3419 (argv_820);
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	argv_3862							argv_3604;				// to ensure that operations are allowed
	argv_2263							argv_2096;			// contains the kernel's memory
	argv_2263							argv_2038;		// no need to know about that
	argv_2263							argv_3453;	// no need to know about that
	argv_917 *							argv_2240;
	argv_3517							argv_2135;
	string							argv_3409;
	string							argv_3484;
	string							argv_1038;
	string							argv_2236;
	string							argv_1247;
	string							argv_3138;
	string							argv_3426;
	string							argv_1271;
	string							argv_2039;
	string							argv_1775;
	string							argv_3829;
	string							argv_2084;

#if defined (__WIN32_OS__) 
	HMODULE							argv_1911;
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_2263							argv_1911;
#endif // #if defined (__LINUX_OS__)

	argv_1491				argv_1631;
	argv_1500				argv_1634;
	argv_1481					argv_1628;	
	argv_1625				argv_1700;
	argv_1515			argv_1638;
	argv_1514	argv_1637;
	argv_1516				argv_1639;

	argv_1530			argv_1647;
	argv_1527				argv_1644;
	argv_1528		argv_1645;
	argv_1529			argv_1646;
	argv_1526	argv_1643;

	argv_3517							argv_2208 (argv_820);
	argv_3517							argv_2255 (argv_820, argv_2263&);
	argv_3517							argv_3915 ();
	argv_3517							argv_1756 (argv_3517&);
	argv_3517							argv_1212 (argv_3517, argv_820);
	void							argv_1213 (argv_820, argv_3517);
	argv_3517							argv_3242 ();
	argv_3517							argv_2254 ();
	argv_3517							argv_2256 ();
	void							reset ();

public:
	argv_889 ();
	argv_3517							construct_kernel (argv_820, argv_820, argv_917 *);

	argv_3517							argv_764 ();
	argv_3517							argv_3513 ();

	argv_3517							argv_1199 ();

	argv_3517							argv_3442 (argv_820, bool, bool&, bool&, argv_1063&, bool&, bool&, argv_3517&);
};



#endif // argv_454



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
