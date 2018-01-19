// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: elgamal.hpp
// @@ 
// @@ DESCRIPTION:
// @@ public argv_2109 encipher/decipher algorithms
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_393
#define argv_393



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
#include "../LIB_CRYPTO/argv_241.h"
#include "../LIB_CRYPTO/argv_365.hpp"
#include "../LIB_CRYPTO/argv_366.hpp"
#include "../LIB_CRYPTO/argv_367.hpp"
#include "../LIB_CRYPTO/argv_360.hpp"
#include "../LIB_CRYPTO/argv_363.hpp"
#include "../LIB_CRYPTO/argv_370.hpp"
#include "../LIB_CRYPTO/argv_359.hpp"
#include "../LIB_CRYPTO/argv_373.hpp"
#include "../LIB_CRYPTO/argv_375.hpp"
#include "../LIB/argv_328.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// minimum argv_2115 is  768 argv_752
// default argv_2115 is 1024 argv_752
// highest suggested argv_2115 is 2048 argv_752
//#define argv_1298		768
#define argv_1298		1



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_831	
// @@
// @@ DESCRIPTION	:
// @@ This argv_2908 contains all the argv_1139 related
// @@ to the elgamal public argv_2109.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_831
{
public:
	argv_2793 argv_2953;	// just a argv_784 for speed optimisation
	argv_2793 argv_2952;	// just a argv_784 for speed optimisation
	argv_2793 argv_2929;			// just a argv_784 for speed optimisation
	argv_2793 k;			// just a argv_784 for speed optimisation
	argv_2793 argv_1717;			// just a argv_784 for speed optimisation

	argv_2793 p;
	argv_2793 g;
	argv_2793 argv_665;

	argv_831 (argv_841&);
	void construct (argv_841&);
	void argv_1197 (argv_841&);

	string	argv_1361 (argv_841&);
	int32_t	argv_2203 (argv_841&, const char *);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_830 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2908 contains all the argv_1139 related
// @@ to the elgamal private argv_2109.
// @@ 
// @@ NOTICE:
// @@ the actual private argv_2109 is only 'a'.
// @@ But we also need 'p' so for convenience, the private argv_2109
// @@ contains all fields of the public argv_2109 as well.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_830
{
public:
	argv_2793	argv_1189;				// just a argv_784 for speed optimisation
	bool	init_done;

	argv_2793	p;
	argv_2793	g;
	argv_2793	argv_665;
	argv_2793	a;

	argv_830 (argv_841&);
	void	construct (argv_841&);
	void	argv_1197 (argv_841&);

	string	argv_1361 (argv_841&);
	int32_t	argv_2203 (argv_841&, const char *);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_829 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2908 permits to encipher/decipher using the
// @@ el gamal public argv_2109 cryptosystem.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_829
{
private:
	bool			init_done;
	argv_841	*	argv_1874;
	string			argv_3320;
	string			argv_3319;
	string			argv_3262;
	string			argv_3261;
	string			argv_2175;

	int32_t			argv_1301 (argv_831&,	argv_2793, argv_2793, argv_2793);
	int32_t			argv_1153 (argv_830&,	argv_2793, argv_2793, argv_2793);

public:
	argv_829 ();
	int32_t init (argv_841 *);
	~argv_829 ();

	int32_t argv_1724 (int32_t, argv_831&, argv_830&);

	int32_t argv_1362 (argv_831&, const char *, const char *);
	int32_t argv_1362 (argv_830&, const char *, const char *);

	int32_t argv_2207 (const char *, const char *, argv_831&);
	int32_t argv_2207 (const char *, const char *, argv_830&);

	int32_t argv_1305 (const char *, const char *, argv_831&, uint32_t);
	int32_t argv_1157 (const char *, const char *, argv_830&, uint32_t);
};


#endif // #define argv_393



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

