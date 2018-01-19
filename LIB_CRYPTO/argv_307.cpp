#include "../LIB_CRYPTO/argv_371.hpp"

extern uint32_t argv_3258;
extern uint32_t argv_3257[]; 


argv_1059::argv_1059 () {
	argv_1544			= NULL;
	argv_1874	= NULL;
}

void argv_1059::init (argv_841 * _gmp_tool_ptr, FILE * _fp_log) {
	argv_1874	= _gmp_tool_ptr;
	argv_1544			= _fp_log;	 
	argv_1874->argv_1568 (argv_3547);
	argv_1874->argv_1568 (argv_1118);
	argv_1874->argv_1568 (argv_742);
}

// the first argv_3960 is small, and we increase it as needed
void argv_1059::argv_3470 () {
	argv_1874->argv_1585 (argv_3547, 1);	
}

void argv_1059::increase_smoothness_bound () {
	argv_1874->argv_1549 (argv_3547, argv_3547, 1);	
}


void argv_1059::argv_3327 (argv_2793 _prime) {
	
//	argv_2814
}

// found a argv_1387 of the _composite parameter.
bool argv_1059::argv_1387 (argv_2793 _composite, argv_2793 _factor) {
	bool bret = true;

	argv_3470 ();

	for ( ; ; ) {
		increase_smoothness_bound (); // 2,...,n
		argv_3327 (_composite);
	}
	
	return (bret);
}
