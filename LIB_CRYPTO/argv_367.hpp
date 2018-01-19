// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_449
#define argv_449



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
#endif // #if defined (__WIN32_OS__) 
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include "../LIB_CRYPTO/argv_368.hpp"
#include "../LIB_CRYPTO/argv_241.h"
#include "../LIB_CRYPTO/argv_365.hpp"
#include "../LIB_CRYPTO/argv_366.hpp"
#include "../LIB_CRYPTO/argv_360.hpp"
#include "../LIB_CRYPTO/argv_363.hpp"
#include "../LIB_CRYPTO/argv_370.hpp"
#include "../LIB_CRYPTO/argv_372.hpp"
#include "../LIB_CRYPTO/argv_362.hpp"
#include "../LIB_CRYPTO/argv_369.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;


class argv_881
{
private:

public:
	uint32_t						argv_1111;
	uint32_t						argv_1317; // more equations than unknowns
	FILE      *					argv_1544;
	argv_841 *					argv_1874;
	vector<argv_2793 *>				argv_3947; // set of small primes
	vector<argv_2793 *>				argv_3957;
	vector<argv_2793 *>				argv_3956; // the small exponents computed 
	argv_1062			argv_3256;	
	vector<vector<argv_2793 *> >	argv_3985;
	argv_805						argv_784;

	bool						argv_1722 (uint32_t);
	bool						argv_1725 (argv_2793, argv_2793, argv_2793);
	bool						argv_1164 (argv_2793, argv_2793, vector<argv_2793 *>&, bool _caller_allocate=false);
	bool						argv_3556 (argv_2793);
	bool						argv_1720 ();
	void						argv_1207 ();
	void						argv_1231 ();
	bool						argv_3246 (uint32_t);
	bool						argv_3244 (vector<argv_2793 *>&, uint32_t);
	void						argv_877 (argv_2793, argv_2793, argv_2793, argv_2793, argv_2793, argv_2793, argv_2793, vector<argv_2793 *>&);
	bool						argv_1720 (argv_2793, argv_2793, argv_2793);
	void						argv_1389 (uint32_t, argv_2793);

public:
	argv_881 ();
	void						init (argv_841 *, FILE *);
	bool						argv_3385 (argv_2793, argv_2793, argv_2793, argv_2793);
	void						argv_875 (Crandom_data_set&, uint32_t);
	bool						argv_876 ();
	void						argv_1246 (const char * _varname, argv_2793 _value, bool _display_2_log=true);
};

#endif // #define argv_449



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

