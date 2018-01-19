// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_374.hpp
// @@ 
// @@ DESCRIPTION:
// @@ public argv_2109 encipher/decipher algorithms
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_483
#define argv_483



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

#if defined (__LINUX_OS__)
	#include "../LIB_CRYPTO/argv_242.h"
#endif // #if defined (__LINUX_OS__)
#include "../LIB_CRYPTO/argv_366.hpp"
#include "../LIB_CRYPTO/argv_360.hpp"
#include "../LIB_CRYPTO/argv_363.hpp"
#include "../LIB_CRYPTO/argv_370.hpp"
#include "../LIB/argv_323.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_3412 1

#if defined (__BENCH_RSA__)
	class argv_828
	{
	protected:
		LARGE_INTEGER argv_2279;
		LARGE_INTEGER argv_2280;

		LONGLONG argv_2282;
		LONGLONG argv_2281;

	public:
		argv_828(void);

		void argv_3601(void);
		void argv_3607(void);
		double argv_1743(void) const;
		string argv_3608 (argv_820);
	};

	inline argv_828::argv_828(void) {
		LARGE_INTEGER liFrequency;

		QueryPerformanceFrequency(&liFrequency);
		argv_2282 = liFrequency.QuadPart;

		// Calibration
		argv_3601();
		argv_3607();

		argv_2281 = argv_2280.QuadPart-argv_2279.QuadPart;
	}

	inline void argv_828::argv_3601(void) {
		// Ensure we will not be interrupted by any other thread for a while
	//	Sleep(0);
		QueryPerformanceCounter(&argv_2279);
	}

	inline void argv_828::argv_3607(void) {
		QueryPerformanceCounter(&argv_2280);
	}

	inline double argv_828::argv_1743(void) const {
		return (double)(argv_2280.QuadPart-argv_2279.QuadPart-argv_2281)*1000000.0 / argv_2282;
	}

	inline string argv_828::argv_3608 (argv_820 _msg) {
		argv_3607 ();
		double elapsed = argv_1743 ();
		char argv_3828[MAX_PATH];
		if (elapsed < 1000000.0) {
			argv_3548 (argv_3828, 1024, "%s : %.02lf microseconds", _msg, elapsed);
		}
		else if ((elapsed >= 1000000.0) && (elapsed < 60000000.0)) {
			elapsed = elapsed / 1000000.0;
			argv_3548 (argv_3828, 1024, "%s : %.02lf seconds", _msg, elapsed);
		}
		else {
			elapsed = elapsed / 60000000.0;
			argv_3548 (argv_3828, 1024, "%s : %.02lf minutes", _msg, elapsed);
		}
		argv_3828[1024 - 1] = '\0';
		return argv_3828;
	}
#endif // #if defined (__BENCH_RSA__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1086	
// @@
// @@ DESCRIPTION	:
// @@ This argv_2908 contains all the argv_1139 related
// @@ to the argv_3411 public argv_2109.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1086
{
public:
	argv_2793	e;
	argv_2793	n;

	argv_1086 ();
	argv_1086 (argv_841&);
	void construct  (argv_841&);
	void argv_1197   (argv_841&);

	string	argv_1361 (argv_841&);
	argv_3517	argv_2203 (argv_841&, argv_820);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1085 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2908 contains all the argv_1139 related
// @@ to the argv_3411 private argv_2109.
// @@ 
// @@ NOTICE:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1085
{
public:
	argv_2793	d;
	argv_2793	n;
	bool	init_done;

	argv_1085 (argv_841&);
	void	construct (argv_841&);
	void	argv_1197 (argv_841&);

	string	argv_1361 (argv_841&);
	argv_3517	argv_2203 (argv_841&, argv_820);
};


class argv_1083
{
public:
	argv_841 *	argv_1874;
	argv_2793		argv_956;
	argv_2793		argv_2815;
	argv_2793		argv_886;
	argv_2793		argv_1159;
	argv_2793		argv_3326;
	argv_2793		argv_2392, argv_2332;

	argv_3864		argv_2816;
	argv_3864		argv_754;
	argv_3864		argv_2870;
	argv_3864		nb_remaining;
	argv_3864		argv_1451;

	argv_3864		argv_2859;
	argv_3864		argv_2872;
	argv_3864		argv_3836;
	argv_3864		total_nb_remaining;
	argv_3864		argv_1196;

	argv_3862 *		argv_3567;
	argv_3862 *		argv_1450;
	argv_3864		argv_2876;
	argv_3864		argv_1107;
	argv_3864		argv_3835;

	argv_1083 ();
	void	reset ();
	argv_3517	construct (argv_841 *, argv_2793, argv_3864, bool);
	void	argv_1197 ();
	argv_3517	argv_1025 (argv_2793, argv_3864, bool, argv_3864&);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2908 permits to encipher/decipher using the
// @@ argv_3411 public argv_2109 cryptosystem.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1082
{
private:
	bool			init_done;
	argv_841	*	argv_1874;
	string			argv_3320;
	string			argv_3319;
	string			argv_3262;
	string			argv_3261;
	string			argv_2175;

	argv_3517			argv_1306 (argv_820, argv_820, argv_2793, argv_2793);
	argv_3517			argv_1158 (argv_820, argv_820, argv_2793, argv_2793);

	argv_3517			argv_1156 (argv_3862 * _src_buf, argv_3864 _src_bufsize, argv_3862 * _dest_buf, argv_3864 _dest_bufsize, argv_3864& _actual_dest_bufsize, argv_2793 _n, argv_2793 _d, argv_2793 _collected_nb, argv_2793 _deciphered_block, argv_3864 _current_block, argv_3864 _total_nb_block, argv_3864 _nb_to_pad, FILE * _fp_log=argv_2889);
	argv_3517			argv_1304 (argv_3862 * _src_buf, argv_3864 _src_bufsize, argv_3862 * _dest_buf, argv_3864 _dest_bufsize, argv_3864& _actual_dest_bufsize, argv_2793 _n, argv_2793 _e, argv_2793 _collected_nb, argv_2793 _ciphered_block,   argv_3864 _nb_to_pad, argv_2793 _min_rand, argv_2793 _max_rand, argv_2793 _random_trailer, argv_2793 _n_minus_1, FILE * _fp_log=argv_2889);

public:
	argv_1082 ();
	argv_3517 init (argv_841 *);
	void reset ();
	~argv_1082 ();

	argv_3517 argv_1724 (argv_3517, argv_1086&, argv_1085&);

	argv_3517 argv_1362 (argv_1086&, argv_820,  argv_820);
	argv_3517 argv_1362 (argv_1085&, argv_820, argv_820);

	argv_3517 argv_2207 (argv_820, argv_820, argv_1086&);
	argv_3517 argv_2207 (argv_820, argv_820, argv_1085&);

	argv_3517 argv_1305 (argv_820, argv_820, argv_1086&);
	argv_3517 argv_1305 (argv_820, argv_820, argv_1085&);

	argv_3517 argv_1157 (argv_820, argv_820, argv_1086&);
	argv_3517 argv_1157 (argv_820, argv_820, argv_1085&);

	argv_3517 argv_1302 (argv_3862 *, argv_3864, argv_3862 *, argv_3864, argv_3864&, argv_1086&);
	argv_3517 argv_1302 (argv_3862 *, argv_3864, argv_3862 *, argv_3864, argv_3864&, argv_1085&);

	argv_3517 argv_1154 (argv_3862 *, argv_3864, argv_3862 *, argv_3864, argv_3864&, argv_1086&);
	argv_3517 argv_1154 (argv_3862 *, argv_3864, argv_3862 *, argv_3864, argv_3864&, argv_1085&);

	argv_3517 argv_1025 (argv_2793, argv_3864, bool, argv_3864&);
	argv_3517 argv_1303 (argv_3862 *, argv_3864, argv_3862 *, argv_3864, argv_3864&, argv_2793, argv_2793);
	argv_3517 argv_1155 (argv_3862 *, argv_3864, argv_3862 *, argv_3864, argv_3864&, argv_2793, argv_2793);
};



#endif // #define argv_483



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

