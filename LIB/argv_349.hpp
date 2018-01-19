// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_349.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the necessary objects
// @@ to communicate via a argv_2352 link 
// @@ (argv_3549 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_478
#define argv_478



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_343.hpp"
#include "../LIB/argv_350.hpp"
#include "../LIB/argv_352.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2958		6 // argv_3728 (1), argv_3941 (1) , argv_757 size (4) 	 
#define argv_2956		512
#define argv_2959	32768



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible system types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2961 {
	argv_3027 = 0,
	argv_3028,
	argv_3029, // temp argv_1446 must be inserted in that case
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible states in which a given packet can be
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2960 {
	argv_3018 = 0,

	argv_3017,

	argv_3025,
	argv_3024,
	argv_3023,

	argv_3022,
	argv_3020,
	argv_3021,
	argv_3019,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1057
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to generate a binary
// @@ packet to be sent via a given argv_2352.
// @@ It also permits to read a given packet sent over
// @@ a given argv_2352. A argv_2352 being either a argv_3549, or
// @@ a named pipe, or any other argv_2352 that is conforming
// @@ to the common interface for all argv_2352.
// @@
// @@ A packet is composed of 2 parts
// @@ - a argv_1907
// @@ - a argv_757
// @@
// @@ The argv_1907 is composed of several fields :
// @@ - the packet system argv_3842 (1 byte)
// @@ - the packet user argv_3842 (1 byte)
// @@ - the argv_757 size (4 argv_782)
// @@
// @@ Notice that the argv_1057 contains a argv_771 field, that is
// @@ used for general purpose (normal transferts), and also
// @@ another argv_771 whose argv_635 is filled in whenever
// @@ necessary and that is used for argv_1396 transferts.
// @@ the purpose of having 2 different argv_771 is to avoid
// @@ wasting memory because most packets are not used for
// @@ argv_1396 transfert.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1057
{
private:
	argv_3862	argv_771[argv_2956]; // the general purpose argv_771
	argv_3862 *	argv_775;					// the argv_1396 transfert argv_771 

	argv_1057 (const argv_1057&);		// forbid packet copy
	argv_1057& operator= (argv_1057&);	// forbid packet copy

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_3824;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
    time_t			argv_1121;
    struct tm *		argv_3827;
	struct timeval	argv_3733;
#endif // #if defined (__LINUX_OS__)

	argv_3862			argv_3728;
	argv_3862			argv_3941;
	argv_1058	argv_1907;
	argv_1058	argv_757;
	argv_3864			argv_759; 
	FILE *			argv_1622;	
	FILE *			argv_1624;
	argv_3864			argv_1416;
	string			argv_3342;
	string			argv_3831; // the place where argv_3828 files are to be created
	string			argv_3484;
	bool			argv_1448;
	bool			argv_733;
	bool			argv_1185;
	string			argv_1418;
	argv_3862			argv_3604;	
	argv_3864			argv_2865;
	argv_3864			nb_remaining;
	argv_3864			argv_3836;		
	argv_3864			total_nb_remaining;	
	argv_3864			offset;

	argv_3517			argv_3267 ();
	argv_3517			argv_3264 ();
	argv_3517			argv_3272 ();
	argv_3517			argv_3266 ();
	argv_3517			argv_3232 ();
	argv_3517			argv_1732 (string&);
	argv_3517			argv_3482 (argv_926&);
	argv_3517			argv_3341 (argv_926&, argv_3517);
	argv_3517			argv_3340 ();
	argv_3517			argv_3343 (argv_926&, argv_3517);
	void			argv_920 (argv_1057&);

public:
	argv_1057 ();
	argv_3517 reset (); // all pointer to the original argv_3604 (argv_2889)
	argv_3517 argv_3401 (); // just reset the argv_3472/receive pointers
	argv_3517 argv_2955 ();  // will save up the size into the argv_1907
	
	argv_3517 argv_3501 (argv_3862);  // it concerns the user argv_3842 (system argv_3842 is hidden)
	argv_3517 argv_1783 (argv_3862&); // it concerns the user argv_3842 (system argv_3842 is hidden)
	argv_3517 argv_3500 (argv_820); // set once

	argv_3517 insert (argv_3862);
	argv_3517 argv_1371 (argv_3862&);

	argv_3517 insert (argv_3863);
	argv_3517 argv_1371 (argv_3863&);

	argv_3517 insert (argv_3864);
	argv_3517 argv_1371 (argv_3864&);

	argv_3517 insert (const string&);
	argv_3517 insert (argv_820);
	argv_3517 argv_1371 (string&);

	argv_3517 argv_3333 (argv_926&, argv_3517, bool); // might receive either argv_1396 packet, or argv_1139 packet
	argv_3517 argv_3336 (argv_926&, argv_3517, argv_820); // receive only a argv_1396, given it's destination argv_2817

	argv_3517 argv_3472 (argv_926&);
	argv_3517 argv_3476 (argv_820, argv_926&, argv_3862, bool); 

	argv_3517 argv_3253 (argv_820, argv_926&, argv_3862, bool);

	argv_3517 argv_1779 (argv_3864&);
	argv_3517 argv_1774 (bool&, argv_3862&, string&); // resets the argv_1139
	void argv_1784 (argv_3862&);

	bool argv_3477 ();
	bool argv_3337 ();

	void argv_919 (argv_1057&, argv_3862);
	argv_3517 argv_1467 (argv_1057 *, argv_3862);
	argv_3517 argv_1465 (argv_1057 *, argv_3862, argv_3864, argv_3864, argv_3864, argv_3864);
	argv_3517 argv_1466 (argv_1057 *, argv_3862, argv_3862, argv_3864, argv_3864, argv_3864, argv_3864);

	void argv_1201 (argv_820, FILE *);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



#endif // argv_478
