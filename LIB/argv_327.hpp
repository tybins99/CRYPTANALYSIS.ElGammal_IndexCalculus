// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_327.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the constants
// @@ and functions, argv_1139 structures that are
// @@ common to each possible test.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_399
#define argv_399



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_323.hpp"
#include "../LIB/argv_340.hpp"
#include "../LIB/argv_341.hpp"
#include <iostream>
#include <string>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ function pointer definition for a test function
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3517 (* argv_1620) (argv_917 *, int, char **);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions that argv_1200 the parameters types and number
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	void argv_1233  (argv_917 *);
	void argv_1234  (argv_917 *);
	void argv_1237  (argv_917 *);
	void argv_1238  (argv_917 *);
	void argv_1239  (argv_917 *);
	void argv_1240  (argv_917 *);
	void argv_1241  (argv_917 *);
	void argv_1242  (argv_917 *);
	void argv_1243  (argv_917 *);
	void argv_1244  (argv_917 *);
	void argv_1235 (argv_917 *);
	void argv_1236 (argv_917 *);
#endif // #if defined (__WIN32_OS__) 


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ function that argv_1890 the dispatching of all tests
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 main_test (int, char **, map<argv_3864, argv_1620>&);

class argv_1101
{
public:
	argv_1620		argv_1696;
	int				argv_720;
	char **			argv_721;	
	string			argv_2237;
	string			argv_3485;
	argv_3863			argv_3486;
	argv_917 			argv_2251;
	argv_917	*		argv_2241;
	argv_3517			argv_1993;
	argv_3864			argv_3914; // to give a unique ID to each thread

	argv_1101 ();
	~argv_1101 ();
};


class argv_1100
{
private:
	map<argv_3864, argv_1620> argv_2272;
	map<argv_3864, argv_1620>::iterator argv_2020;

public:
	argv_1100 ();
	void reset ();
	argv_3517 argv_632 (argv_3864, argv_1620);
	argv_3517 argv_3414 (int, char **);
};


class argv_840
{
public:
	argv_917 *		argv_2240;	
	int			argv_720;
	char **		argv_721;
	argv_3517		argv_1994;
	argv_3517		argv_1995;
	argv_3517		argv_2865; // general use
	argv_3864		argv_749; // used in advanced tests

	argv_840 ();
};

void argv_2246 (FILE * _fp, argv_820 _msg, bool _echo_on=true, bool _add_eol=true);
void argv_2245 (FILE * _fp, argv_3517 _iret, argv_3864 _errno, bool _echo_on=true, bool _add_eol=true);
void argv_2242   (FILE * _fp, argv_3517 _iret, argv_820 _msg, bool _add_eol=true);
void argv_1204 (argv_820 _msg, argv_3864 _amount);

DWORD WINAPI argv_2146 (argv_2263 lParam);
argv_3517 argv_1397 (argv_917 *, argv_820, argv_820, bool&);


string test_err_2_string (argv_3517);


#endif // argv_399



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
