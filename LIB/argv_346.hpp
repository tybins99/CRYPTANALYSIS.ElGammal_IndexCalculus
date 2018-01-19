// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: complex_list.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the declaration of the
// @@ functions related to the complex list argv_2908.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_471
#define argv_471



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4503)
	#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 


#include <map>
#include "../LIB/argv_320.hpp"
#include "../LIB_CRYPTO/argv_365.hpp"
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_347.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



typedef map<string, argv_878 *>::iterator argv_3841;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1124
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to store a set of horizontal list.
// @@ Each horizontal list contains the list of resolved symbols.
// @@ The vertical list being a list of list of resolved symbols.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1124
{
private:
	map<string, argv_878 *>			argv_2283;
	argv_3841						argv_2273;

public:
	argv_1124 ();
	void reset ();

	argv_3517 argv_2228 (argv_820, argv_2263&);

	argv_3517 argv_1765 (argv_3864& _nb_elem);
	argv_3517 argv_1764 (argv_820 _symbol, argv_2263&, argv_3864&);

	argv_3517 argv_1752 (argv_820, argv_2263&, argv_2263 *);
	argv_3517 argv_1771 (argv_820, argv_2263&, argv_2263 *);

	argv_3517 argv_630 (argv_820 _symbol_name);
	argv_3517 argv_629 (argv_2263&, argv_820, argv_2263);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_813
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to store all the symbols and solved symbols
// @@ for a given plugin argv_3842.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_813
{
private:
	argv_1124 * argv_2277; // array initialyzed according to the number of types
	
public:
	argv_813 ();
	argv_3517 init (argv_3864);
	void reset ();

	argv_3517 argv_2228 (argv_3864 _plugin_type, argv_820, argv_2263&);

	argv_3517 argv_1765 (argv_3864 _plugin_type, argv_3864& _nb_elem);
	argv_3517 argv_1764 (argv_3864 _plugin_type, argv_820 _symbol, argv_2263&, argv_3864&);

	argv_3517 argv_1752 (argv_3864, argv_820, argv_2263&, argv_2263 *);
	argv_3517 argv_1771 (argv_3864, argv_820, argv_2263&, argv_2263 *);

	argv_3517 argv_630 (argv_3864, argv_820 _symbol_name);
	argv_3517 argv_629 (argv_2263&, argv_3864, argv_820, argv_2263);
};



#endif // argv_471



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
