#ifndef __INF_COUNTER_FLAG__
#define __INF_COUNTER_FLAG__

#include "../LIB_CRYPTO/argv_241.h"
#include "../LIB_CRYPTO/argv_365.hpp"
#include "../LIB_CRYPTO/argv_366.hpp"
#include <string>

using namespace std;

#pragma warning(disable: 4267)
#pragma warning(disable: 4018)

class Cinf_counter
{
private:
	bool			incr_over;
	uint32_t			max_limite;
	uint32_t			reste_UI32;
	uint32_t			nb_counter;
	vector<uint32_t>	v_counter;	
	vector<uint32_t>	v_incr_limit;
	argv_841 *		argv_1874;
	FILE *			argv_1544;

	void			init_xxx (argv_841 *, FILE *, argv_2793, vector<uint32_t>&);

public:
	Cinf_counter ();
	void			init_for_decr (argv_841 *, FILE *, argv_2793);
	void			init_for_incr (argv_841 *, FILE *, argv_2793);
	bool			decr ();
	void			incr ();
	void			convert_2_mpz (argv_2793);
	bool			incr_limit_reached ();
};


#endif // __INF_COUNTER_FLAG__