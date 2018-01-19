// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_382
#define argv_382



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
#include <map>
#include <string>
#include <iostream>
#include <map>
#include "../LIB_CRYPTO/argv_368.hpp"
#include "../LIB_CRYPTO/argv_241.h"
#include "../LIB_CRYPTO/argv_366.hpp"
#include "../LIB_CRYPTO/argv_365.hpp"
#include "../LIB_CRYPTO/argv_360.hpp"
#include "../LIB_CRYPTO/argv_363.hpp"
#include "../LIB_CRYPTO/argv_370.hpp"
#include "../LIB/argv_328.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;

#define argv_3510 655360

class argv_1094
{
private:
	argv_848		argv_1896;
	FILE      *		argv_1544;
	argv_841 *		argv_1874;

	void			argv_1028 (argv_2793, argv_2793);
	void			argv_737 (argv_2793, argv_2793, argv_2793, argv_2793);
	bool			argv_1786 (argv_2793, argv_2793, argv_2793, argv_2793, argv_2793);
	void			argv_1246 (const char * _varname, argv_2793 _value, bool _display_2_log=true);
	void			argv_1206 (argv_2793, argv_2793, argv_2793, argv_2793);

public:
	argv_1094 ();
	void			init (argv_841 *, FILE *);
	bool			argv_3385 (argv_2793, argv_2793, argv_2793, argv_2793);
	void			argv_875 (Crandom_data_set&, uint32_t);
	bool			argv_876 ();
};




#endif // #define argv_382



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

