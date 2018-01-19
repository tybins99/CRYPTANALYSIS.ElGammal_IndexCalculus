// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_481
#define argv_481



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_365.hpp"
#include "../LIB/argv_320.hpp"
#include "../LIB_CRYPTO/argv_241.h"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;


class argv_1062
{
private:
	FILE      *		argv_1544;
	argv_841 *		argv_1874;
	uint32_t			argv_1116;
	argv_2793			argv_1118;
	
public:
	argv_1062 ();
	void			init (argv_841 *, FILE *);
	void			argv_1751 (argv_2793); // don't need to call it if used once
	void			argv_1770	(argv_2793);

	void			argv_1751 (uint32_t&);
	void			argv_1770 (uint32_t&);
};

#endif // #define argv_481



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

