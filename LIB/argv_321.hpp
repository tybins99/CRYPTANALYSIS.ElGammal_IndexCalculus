// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_321.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the necessary objects
// @@ to argv_1890 n argv_2352 and all their events.
// @@ (argv_3549 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_394
#define argv_394



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <stack>
#include "../LIB/argv_340.hpp"
#include "../LIB/argv_343.hpp"
#include "../LIB/argv_345.hpp"
#include "../LIB/argv_349.hpp"
#include "../LIB/argv_350.hpp"
#include "../LIB/argv_352.hpp"
#include "../LIB/argv_314.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_1349	256



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible client types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3222 {
	argv_912 = 0,

	// external clients
	argv_910,
	argv_911,
	argv_902,

	// internal clients
	argv_905,
	argv_904,
	argv_907,
	argv_906,
	argv_908,
	argv_903,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ listener argv_2908 (associate a argv_3549 with a clien argv_3842)
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_916
{
public:
	argv_3862		argv_900;
	argv_3550 		argv_3549;

	argv_916 ();
	void		reset ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ event loop routines
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3517 (* argv_1505)		(argv_807 * _data_ptr, argv_3864 _index, bool& _trigger_write);
typedef argv_3517 (* argv_1506)	(argv_807 * _data_ptr, argv_3864 _index, vector<argv_3864>&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_834
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 contains all the argv_1139 needed
// @@ by the event loop to be able to argv_1890
// @@ all possible events.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_834
{
public:
	void reset ();
	argv_834 ();

	argv_1505		argv_1695;
	argv_1506		argv_1697;
	argv_1505		argv_1698;
	argv_1505		argv_1629;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_833
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to build an event driven
// @@ architecture when working with sockets.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_833 
{
protected:
	fd_set				readfds;
	fd_set				readfds_dirty;
	fd_set				writefds;
	fd_set				writefds_dirty;

	stack<argv_3864>	argv_3595;						// to avoid argv_2253 at runtime
	argv_833 (const argv_833&);				// forbid copy
	argv_833& operator= (const argv_833&);	// forbid copy

	argv_3517 argv_854 (argv_3864&);
	argv_3517 argv_861 (argv_3864&);
	argv_3517 argv_619 (argv_3864, bool, bool);
	argv_3517 argv_3347 (argv_3864, argv_3517);
	argv_3517 argv_3347 (argv_3864, bool, bool, argv_3517);
	argv_3517 argv_3346 (argv_3864, argv_3517);
	argv_3517 argv_618 (argv_3864&, argv_3550&, argv_3862);
	argv_3517 argv_3243 ();
	argv_3517 argv_3243 (argv_834&, argv_807 *, argv_3864, vector<argv_916>&);
	argv_3517 argv_3278 (argv_807 *, argv_3864, vector<argv_3864>&);
	argv_3517 argv_3279 (argv_807 *, argv_3864, bool&);
	void argv_1223 (argv_3550&, argv_3862);
	argv_3517 argv_3839 (vector<argv_3864>&);
	bool argv_909 (argv_3862);

	argv_834	argv_1327;
	argv_3864				argv_2871;
	vector<argv_916>	argv_3948;	
	argv_807 *		argv_898;
	argv_3864				argv_899;
	argv_3864				argv_2862; // permits to argv_3607 the loop sooner (speed up)
	argv_3517				argv_2339;
	argv_917	*			argv_2240;
	argv_3864				argv_2867;

public:
	void reset ();
	argv_833 ();

	argv_3517 argv_3414 (argv_917 *, vector<argv_916>&, argv_807 *, argv_3864 _tab_size, argv_834&);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_901 (argv_3862);


#endif // argv_394
