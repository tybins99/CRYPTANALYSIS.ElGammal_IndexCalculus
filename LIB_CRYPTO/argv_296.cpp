#include "../LIB_CRYPTO/argv_361.hpp"

argv_804::argv_804 () {
}


void argv_804::argv_2226 (uint32_t _index, bool _enlarge_if_necessary) {
	argv_2264		= _index / 8;
	argv_2290			= argv_2302.size ();
	argv_2293	= _index % 8; 

	if ((_enlarge_if_necessary == true) && (argv_2264 >= argv_2290)) {
		argv_2291 = (argv_2290 + 1) - argv_2264;

		for (uint32_t i=0 ; i<argv_2291 ; i++) {
			argv_2302.push_back (0x00);	
		}
	}
}

void argv_804::argv_3494 (uint32_t _index) {
	argv_2226 (_index, true);
	argv_2286					= 0x80 >> argv_2293;
	argv_2302[argv_2264]	= argv_2302[argv_2264] | argv_2286; 
}

void argv_804::argv_3382 (uint32_t _index) {
	argv_2226 (_index, true);
	argv_2286					= 0x80 >> argv_2293;
	argv_2286					= (~argv_2286);
	argv_2302[argv_2264]	= argv_2302[argv_2264] & argv_2286; 
}


bool argv_804::is_set (uint32_t _index) {
	bool bret = false;
	argv_2226 (_index, false);
	argv_2286				= 0x80 >> argv_2293;

	if ((argv_2290 > argv_2264) && ((argv_2302[argv_2264] & argv_2286) == argv_2286)) {
		bret = true;
	}
	return (bret);
}


bool argv_804::argv_734 () {
	bool bret = true;
	for (uint32_t i=0 ; i<255 ; i++) {
		if (is_set (i) == true) {
			bret = false;
			break;
		}
		argv_3494 (i);
		if (is_set (i) == false) {
			bret = false;
			break;
		}

		argv_3382 (i);
		if (is_set (i) == true) {
			bret = false;
			break;
		}
		argv_3494 (i);
		if (is_set (i) == false) {
			bret = false;
			break;
		}
	}
	return (bret);
}

