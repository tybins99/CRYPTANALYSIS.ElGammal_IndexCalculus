// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_343.hpp
// @@ 
// @@ DESCRIPTION:
// @@ abstraction layer for local and remote
// @@ inter process communications
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_377
#define argv_377



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_926
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to create argv_1189 classes
// @@ that argv_1890 the communications between local or
// @@ remote processes.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_926
{
protected:
	bool			argv_2017;
	bool			argv_2008;
	bool			argv_1999;
	argv_3864			argv_2135;

	virtual argv_3517 argv_3240 (argv_820 _target_address, argv_3864 _port=0)	= 0;

	// server related function
	virtual argv_3517 argv_3249 (argv_820 _target_address, argv_3864 _port=0)	= 0;
	virtual argv_3517 argv_615 (argv_2263&)			= 0;

	virtual argv_3517 argv_3474 (argv_3862 *, argv_3864, argv_3864&)		= 0;
	virtual argv_3517 argv_3335 (argv_3862 * _buf, argv_3864 _size_2_read, argv_3864& _actual_size, argv_3517 _timeout_second=-1)	= 0;
	virtual argv_3517 argv_923 ()					= 0;
	virtual argv_3517 argv_923 (argv_2263)				= 0;
	virtual argv_3517 argv_1742 (argv_2263&)				= 0; 	
	virtual argv_3517 argv_1759 (argv_2263&)	= 0;

public:
	argv_926 ();
	void reset ();
	virtual ~argv_926 ();

	// client related functions
	argv_3517 argv_3239 (argv_820 _target_address, argv_3864 _port=0);

	// server related function
	argv_3517 argv_3248 (argv_820 _target_address, argv_3864 _port=0);
	argv_3517 argv_614 (argv_2263&);

	argv_3517 argv_3473 (argv_3862 *, argv_3864, argv_3864&);
	argv_3517 argv_3334 (argv_3862 * _buf, argv_3864 _size_2_read, argv_3864& _actual_size, argv_3517 _timeout_second=-1);

	argv_3517 argv_922 ();
	argv_3517 argv_922 (argv_2263);
	argv_3517 argv_1756 ();
	argv_3517 argv_1741 (argv_2263&);
	argv_3517 argv_1758 (argv_2263&);
};



#endif // argv_377



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
