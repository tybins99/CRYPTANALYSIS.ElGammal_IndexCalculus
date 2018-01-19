// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_344.hpp
// @@ 
// @@ DESCRIPTION:
// @@ communication layer that uses namped pipes
// @@ (win32), and unix domain argv_3549 (Linux).
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_378
#define argv_378



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"
#include "argv_343.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_927
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits several local processes
// @@ to talk with each other.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_927 : public argv_926
{
protected:

public:
	argv_927 ();
	~argv_927 ();

	// client related functions
	argv_3517 argv_3239 (argv_820 _target_address, argv_3864 _port=0);

	// server related function
	argv_3517 argv_3248 (argv_820 _target_address, argv_3864 _port=0);
	argv_3517 argv_614 ();

	argv_3517 argv_3473 (argv_3862 *, argv_3864, argv_3864&);
	argv_3517 argv_3334 (argv_3862 *, argv_3864&);
	argv_3517 argv_922 ();
};



#endif // argv_378



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
