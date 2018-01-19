// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_314.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures used
// @@ by the event loop to argv_1890 clients
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_385
#define argv_385



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <stack>
#include <list>
#include "../LIB/argv_343.hpp"
#include "../LIB/argv_350.hpp"
#include "../LIB/argv_352.hpp"
#include "../LIB/argv_349.hpp"
#include "../LIB/argv_345.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2333 640 // number of packets



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_807
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 contains all the argv_1139 needed
// @@ by the event loop to be able to process
// @@ argv_2929 given client.
// @@
// @@ Notice that the client has argv_2929 receive packet, and possibly
// @@ n argv_3472 packets whose argv_635 are contained in a argv_3472 argv_3324.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_807
{
private:
	list<argv_1057 *>	argv_3481;

public:
	bool			argv_3976;
	bool			argv_3329;
	bool			argv_3994;
	argv_1057			argv_3010;
	list<argv_1057 *>::iterator argv_2020;
	argv_1057			argv_3014;
	argv_928	argv_2376;
	argv_3550			argv_3549; // just a argv_784
	argv_3517			argv_2135;
	argv_3862			argv_900; // each father argv_3842 may have a different protocol
	argv_3864			argv_1734; // argv_1734 of this box

	argv_807 ();
	~argv_807 ();
	void reset ();

	argv_3517			argv_1776 (argv_3864&);
	argv_3517			argv_1704 (argv_1057 *&);
	argv_3517			pop_front ();
	argv_3517			push_back (argv_1057 *);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



#endif // argv_385
