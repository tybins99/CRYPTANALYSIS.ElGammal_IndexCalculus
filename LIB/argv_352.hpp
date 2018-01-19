// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_352.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the functions,
// @@ argv_1139 structures and constants that are 
// @@ necessary to implement the avx scanning
// @@ and admmin protocol.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_465
#define argv_465



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ possible packet types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3226 {
	argv_3065 = 0,

	// scan client operations
	argv_3053,
	argv_3049,
	argv_3055,
	argv_3051,

	// scan server operations
	argv_3054,
	argv_3050,
	argv_3056,
	argv_3052,

	// admin operations
	argv_3063,				// used when service is shut down (via service manager)
	argv_3064,		// tell the COM manager to terminate itself.

	// update operations results
	argv_3066,			// argv_3512/argv_1197/construct/argv_760
	argv_3067,		

	// spyware operations
	argv_3060,		// forwarded to the spyware manager
	argv_3061, // inform about the number of categories
	argv_3062,			// not forwarded to the spyware manager
	argv_3059,  // argv_2817 + infection flag + spyware argv_2817 if necessary
	argv_3057,
	argv_3058,

	// archive extractor operations
	argv_3036,
	argv_3032,
	argv_3035,
	argv_3037,	// sent for each extracted files.

	// archive creator operations
	argv_3033,
	argv_3031,
	argv_3034,

	// interruptions related messages (same for all blocks)
	argv_3047,
	argv_3048,

	// inner protocol (COM MANAGER)
	argv_3045,
	argv_3041,
	argv_3040,
	argv_3044,
	argv_3038,
	argv_3046,
	argv_3042,
	argv_3043,
	argv_3039,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  protocol related functions.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_3942 (argv_3862);



#endif // argv_465



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
