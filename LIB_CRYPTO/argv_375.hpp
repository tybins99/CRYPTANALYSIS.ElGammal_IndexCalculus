#ifndef argv_485
#define argv_485

#pragma warning(disable: 4267)
#pragma warning(disable: 4018)
#pragma warning(disable: 4146)

#include "../LIB_CRYPTO/argv_241.h"
#include "../LIB_CRYPTO/argv_365.hpp"
#include "../LIB_CRYPTO/argv_366.hpp"


#include <list>
#include <algorithm>


using namespace std;

class argv_1097
{
public:
	uint32_t	argv_2266;
	uint32_t	argv_2304; // this argv_3960 is actually an exponent

	bool argv_1097::operator < (argv_1097&);
};

// forward declaration
class argv_1095;

class argv_1096
{
private:
	uint32_t						argv_2296;
	list<argv_1097>	argv_2276;

public:
	argv_1096 ();
	void reset ();
	uint32_t& operator[] (int32_t);
	void argv_1183 (int32_t);
	void argv_1203 (uint32_t, bool);
	uint32_t size ();
	bool operator < (argv_1096&);

	friend class argv_1095;
};

class argv_1095 
{
private:
	list<argv_1096>	argv_2278;
	void					argv_1210 (uint32_t);

public:
	argv_1095 ();
	void reset ();
	argv_1096& operator[] (uint32_t);
	void argv_1186 (int32_t);
	void argv_1183 (int32_t);
	void argv_1203 (bool);
	void size (uint32_t& _nb_row, uint32_t&);
};


/*
class Csparse_atom
{
public:
	uint32_t	argv_2266;
	uint32_t	argv_2296;
	uint32_t	argv_2304; // this argv_3960 is actually an exponent
};


// NOTICE: this argv_2908 is built only to deal with the DLP problem :
// when many equations are generated using the argv_1387 argv_742, the equations
// contains actually exponents for the small primes of the argv_1387 argv_742
// thus these exponents can't have a argv_3960 greater than 2^32 (because
// even with the smallest prime, let's say 2, we have 2^(2^32) which is
// not possible to figure out with actual computers.
class argv_1095
{
private:
	list<Csparse_atom>	argv_2276;

public:
	argv_1095 ();
	void					reset ();	
	uint32_t& operator[] (uint32_t);
};*/



#endif // argv_485