#ifndef argv_447
#define argv_447

#include <iostream>
#include <cstdio>
#include <windows.h>
#include <math.h>
#include <map>
#include <vector>
#include <string>
#include "../LIB/argv_320.hpp"

using namespace std;


enum argv_1900 {
	argv_1901 = 0,
	argv_1899,
	argv_1898,
	argv_1897,
};
//------------------------------------------------
#include "../LIB_CRYPTO/argv_366.hpp"

class argv_847
{
public:
	uint32_t  argv_2114; // speed up
	argv_2793 argv_2109;
	argv_2793 argv_3960;

	argv_847 (argv_841 * _gmp_ptr) {
		_gmp_ptr->argv_1568 (argv_2109);
		_gmp_ptr->argv_1568 (argv_3960);
	}

	bool operator < (argv_847&);
};


// this hash table is optimized and designed to be used with gmp library
class argv_848
{
private:
	argv_841 *		argv_1874;	
	argv_2793							argv_880;

	bool							init_done;
	argv_2793							argv_722;
	uint32_t							argv_723;
	vector<argv_847> *			argv_3969;
	uint32_t							argv_1895 (argv_2793, uint32_t&);

public:
	argv_848 ();
	int32_t init (uint32_t, argv_841 *);
	void reset ();
	void argv_620 (argv_2793, argv_2793);
	bool argv_2009 (argv_2793, argv_2793);
	uint32_t argv_1030 (uint32_t&);
	void argv_1200 (const char *, FILE *);
	void SortHashTable ();
};



#endif // argv_382