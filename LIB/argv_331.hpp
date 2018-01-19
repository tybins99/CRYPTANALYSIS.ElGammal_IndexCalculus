// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_331.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the definition of the 
// @@ general kernel argv_2908 that permits to create
// @@ platform independant systems. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_452
#define argv_452



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
#pragma warning(disable: 4786)
#pragma warning(disable: 4503)
#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ include files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#if defined (__WIN32_OS__) 
	#include <Windows.h>
#endif // #if defined (__WIN32_OS__) 

#include "../LIB/argv_336.hpp"
#include "../LIB/argv_337.hpp"
#include "../LIB/argv_338.hpp"
//#include "../LIB/argv_346.hpp"
#include "../LIB/argv_358.hpp"
//#include "../LIB/argv_332.hpp"
#include "../LIB/argv_348.hpp"
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_351.hpp"
//#include "../LIB/argv_347.hpp"
#include "../LIB/argv_340.hpp"
#include "../LIB/argv_334.hpp"
#include "../LIB_CRYPTO/argv_365.hpp"
#include "../LIB_CRYPTO/argv_366.hpp"


#if defined (argv_2928)
        #include <strstream.h>
#else
        #include <sstream>
#endif



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#ifdef SYSTEM_DLL_EXPORTS
	#define argv_3725 __declspec(dllexport)
	#else
	#define argv_3725 __declspec(dllimport)
	#endif
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ necessary function pointers definition
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void (* argv_1518)		(argv_3864&, argv_3864&);
typedef argv_3517 (* argv_1525)		(argv_2263, argv_820, argv_3593 *);
typedef argv_3517 (* argv_1531)	(argv_2263&);



class argv_888
{
public:
	bool						argv_2833;
	bool						argv_3892;
	bool						argv_1130;
	bool						argv_763;
	bool						argv_3642;
	bool						argv_3322;
	bool						argv_1833;

	string						argv_2831;	// argv_2817 of the copy
	string						argv_1017; // argv_2817 of the copy 
	string						argv_884;	// argv_2817 of the copy
	string						argv_3141;

	argv_839				argv_1787;
	argv_1099				argv_3726;
	argv_3593 *				argv_3732; // group of system independant functions
	argv_814				argv_1020;
	argv_821				argv_1135;
	argv_1127				argv_4001;
//	map<argv_3864, argv_1079>	m_resolve_query;
//	map<string, argv_1079>	m_unique_resolve_query; // for unique symbols (tool,..)

	vector<string>				argv_3954;	
	vector<string>				argv_3952;

	map<string, argv_1034 *>	argv_2314; 
	argv_1081				argv_3393;

	argv_841					argv_1873;
	argv_1082						argv_3411;
	argv_1086				argv_3321;

	argv_888 ();
	void reset ();
};



class argv_887
{
protected:
	argv_888			argv_1914;
	argv_3517						argv_2209 (argv_820);
	argv_3517						argv_3878 ();

	argv_3517						argv_2220 (argv_820);
	argv_3517						argv_3882 ();

	argv_3517						argv_2200 (argv_820);
	argv_3517						argv_3876 ();

	argv_3517						argv_762  (argv_820, argv_820, argv_820, argv_820, argv_2263&);
	argv_3517						argv_3872  ();

	argv_3517						argv_765 (argv_820, argv_820, argv_820, argv_820, argv_2263&);
	argv_3517						argv_3873 ();

	void						argv_1213 (argv_820, argv_3517, argv_3517);

	argv_3517						argv_2935 (argv_820, argv_820);
	argv_3517						argv_3883 ();

	argv_3517						argv_1733 (argv_820, argv_820);
	argv_3517						argv_3874 ();

	argv_3517						argv_3390 (map<string, argv_1034 *>::iterator&);
	argv_3517						argv_3887 ();

	argv_3517						argv_2204 (argv_820);
	argv_3517						argv_3877 ();

	argv_3517						argv_2217 (argv_820);
	argv_3517						argv_3881 ();

	argv_3517						argv_2216 (argv_820);
	argv_3517						argv_3880 ();

	argv_3517						argv_2214 (argv_820, argv_820, argv_1034 *);
	argv_3517						argv_3879 ();

	argv_3517						argv_2199 ();
	argv_3517						argv_3875 ();

	argv_3517						argv_2972 (argv_3862 *, argv_3864, argv_820);
	argv_3517						argv_3884 ();

	argv_3517						argv_3392 ();
	argv_3517						argv_3889 ();

	argv_3517						resolve_all_symbols_of_profile (map<string, argv_1034 *>::iterator&, argv_1079&);
	argv_3517						resolve_one_multiple_plugin_symbols (map<string, argv_1034 *>::iterator&);
	argv_3517						resolve_one_unique_plugin_symbols (map<string, argv_1034 *>::iterator&);

	argv_3517						argv_3391 (map<string, argv_1034 *>::iterator&, argv_820, bool);
	argv_3517						argv_3888 ();

	argv_3517						argv_3241 ();
	argv_3517						argv_3886 ();

//	virtual	argv_3517				prepare_symbols_2_resolve ();
//	virtual	argv_3517				un_prepare_symbols_2_resolve ();

	virtual argv_3517				argv_761 (argv_820, argv_820, argv_820, argv_820, argv_2263&);
	virtual argv_3517				argv_3871 ();
	
	virtual argv_3517				argv_3231 ();
	virtual argv_3517				argv_3885 ();

	void						remove_remaining_tmp_files (argv_820, argv_820, argv_820);

public:
	argv_887 ();
	void						reset ();
	virtual						~argv_887 ();
	argv_3517						argv_760 (argv_820, argv_820, argv_820, argv_820, argv_2263&);
	argv_3517						argv_3512 ();
	argv_3517						argv_1785 (argv_3864&, argv_3864&);
	argv_3517						argv_1755 (argv_3864&, argv_3864&);
	argv_3517						argv_1773 (argv_820, argv_2263&);
};



#endif // argv_452



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

