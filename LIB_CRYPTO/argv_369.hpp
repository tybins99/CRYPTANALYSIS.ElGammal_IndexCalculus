// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_464
#define argv_464



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_365.hpp"
#include "../LIB/argv_320.hpp"
#include "../LIB_CRYPTO/argv_241.h"
#include <vector>
#include <list>

#pragma warning(disable: 4267)
#pragma warning(disable: 4018)
#pragma warning(disable: 4146)

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;

class argv_1036
{
public:
	uint32_t				argv_1915;
	vector<argv_2793 *>		argv_3945;
	argv_2793		*		argv_3553;
	bool operator <		(const argv_1036&);

	void argv_1200 (FILE *, argv_841 *);
};

// used to sort
class argv_811
{
public:
	uint32_t index;
	uint32_t argv_930;
};

class argv_914
{
private:
	FILE      *					argv_1544;
	argv_841 *					argv_1874;
	vector<argv_1036>			argv_3955;
	//vector<argv_1036>::iterator	argv_2020;
	uint32_t						argv_2875;
	uint32_t						argv_2863;
	argv_2793						argv_2490;
	vector<vector<argv_2793 *> >	argv_3985;
	vector<argv_2793 *>				argv_3957; // the right part of the '='
	list<uint32_t>					argv_2155;
	
	//void				sort_row_vector ();
	bool				argv_1299 (uint32_t, vector<argv_2793 *>&, vector<vector<argv_2793 *> >&, vector<argv_2793 *>&);
	bool				argv_1300 (uint32_t, uint32_t, argv_2793, argv_2793);
	bool				argv_3344 (vector<argv_2793 *>&, vector<vector<argv_2793 *> >&, vector<argv_2793 *>&, vector<argv_2793 *>&);
	bool				argv_662 (vector<vector<argv_2793 *> >&, vector<argv_2793 *>&);
	bool				argv_1884 (vector<argv_2793 *>&, vector<vector<argv_2793 *> >&, vector<argv_2793 *>&, vector<argv_2793 *>&);
	void				compute_row_remaining_sum (argv_2793, vector<argv_2793 *>&, uint32_t, uint32_t, argv_2793);
	bool				argv_3555 (vector<argv_2793 *>&, vector<vector<argv_2793 *> >&, vector<argv_2793 *>&);
	bool				argv_862 (vector<argv_2793 *>&, vector<vector<argv_2793 *> >&, vector<argv_2793 *>&);
	void				argv_1227 (const char * _msg, int32_t _pivot_position=-1);
	bool				argv_1055 (vector<vector<argv_2793 *> >&, vector<argv_2793 *>&);
	void				argv_1205 (const char *);

public:
	argv_914 ();
	void				init (argv_841 *, FILE *);
	bool				argv_3554 (argv_2793, vector<argv_2793 *>&, vector<vector<argv_2793 *> >&, vector<argv_2793 *>&, vector<argv_2793 *>&);
};

#endif // #define argv_464



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

