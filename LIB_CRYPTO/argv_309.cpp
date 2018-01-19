#include "../LIB_CRYPTO/argv_373.hpp"

extern uint32_t argv_3258;
extern uint32_t argv_3257[]; 


argv_1067::argv_1067 () {
	argv_1544			= NULL;
	argv_1874	= NULL;
}

//----------------------------
void argv_1067::init (argv_841 * _gmp_tool_ptr, FILE * _fp_log) {
	argv_1874	= _gmp_tool_ptr;
	argv_1544			= _fp_log;	
	argv_3256.init (argv_1874, argv_1544);
	argv_1874->argv_1568 (argv_2943);				// sqrt(input)
}

void argv_1067::argv_1032 (argv_2793 _input) {
	argv_1874->argv_1588 (argv_2943, _input);	
	string input_str = argv_1874->argv_3966 (_input);
	string value_str = argv_1874->argv_3966 (argv_2943);
	fprintf (argv_1544, "root of %s = %s\r\n", input_str.c_str(), value_str.c_str());
}

void argv_1067::argv_1246 (const char * _msg, argv_2793 _var, bool _display_2_log) {
	string value_str = argv_1874->argv_3966 (_var);	
	if (_display_2_log == false) {
		fprintf (stderr, "%s = %s\r\n", _msg, value_str.c_str());
	}
	else {
		fprintf (argv_1544, "%s = %s\r\n", _msg, value_str.c_str());
	}
}
/*
for (p=1; p<sqrt(N); p++) { 
	while ((N%p)==0) { 
		print p;
		N=N/p;
	}
}
print N;
*/

// use the trial division algorithm
bool argv_1067::argv_2016 (argv_2793 _value_2_check, uint32_t _smooth_order) {
	bool bret = false;
	argv_2793 iterator, nb_todo, value_2_check, modulo_result;
	argv_1874->argv_1568	(iterator);
	argv_1874->argv_1568	(nb_todo);
	argv_1874->argv_1568	(value_2_check);
	argv_1874->argv_1568	(modulo_result);

	argv_1874->argv_1585 (iterator, 1);
	argv_1874->fp_mpz_set	(value_2_check, _value_2_check);
	argv_1874->argv_1588	(nb_todo, value_2_check); // nb_todo = sqrt (_value_2_check);

	argv_1874->argv_1573 (modulo_result, value_2_check, iterator);
	while (argv_1874->argv_1554 (modulo_result, 0) == 0) {
		argv_1874->argv_1558 (value_2_check, value_2_check, iterator);
	}

	argv_1874->argv_1551 (iterator);
	argv_1874->argv_1551 (nb_todo);
	argv_1874->argv_1551 (value_2_check);
	argv_1874->argv_1551 (modulo_result);
	return (bret);
}

// we must alternate : 0,-0, 1, -1, 2, -2,...
void argv_1067::argv_955 (argv_2793 _input, uint32_t _base_size) {
	argv_2793 iterator, x, argv_2865, nb_todo, b;
	bool first_half = true;
	argv_1874->argv_1568 (iterator);
	argv_1874->argv_1568 (x);
	argv_1874->argv_1568 (argv_2865);
	argv_1874->argv_1568 (nb_todo);
	argv_1874->argv_1568 (b);
	
	argv_1874->argv_1585 (argv_2865, 0);	
	argv_1874->argv_1585 (iterator, 0);	

	// the loop size is : prime argv_742 size + 1
	argv_1874->argv_1585	(nb_todo, _base_size);
	argv_1874->argv_1549 (nb_todo, nb_todo, 1);
	
	while (argv_1874->argv_1553 (argv_2865, nb_todo) < 0) {
		if (first_half == true) { // x = iterator
			first_half = false;
			argv_1874->fp_mpz_set (x, iterator);
		}
		else { // x = (-1) * iterator
			argv_1874->argv_1577 (x, iterator);
			first_half = true;
		}

		// compute b = q(x) = (x+m)^2 - n 
		argv_1874->fp_mpz_set (b, x);
		argv_1874->argv_1548 (b, b, argv_2943);
		argv_1874->argv_1574 (b, b, b);			// b = b^2
		argv_1874->argv_1589 (b, b, _input);	// b = b - input

		if (argv_2016 (b, _base_size) == true) {
			argv_1874->argv_1549 (argv_2865, argv_2865, 1);
		}

		argv_1874->argv_1549 (iterator, iterator, 1);
	}

	argv_1874->argv_1551 (iterator);
	argv_1874->argv_1551 (x);
	argv_1874->argv_1551 (argv_2865);
	argv_1874->argv_1551 (nb_todo);
	argv_1874->argv_1551 (b);
}

// argv_3402 is stored into the 'argv_3953' vector
// notice: the prime argv_742 only needs to contain such primes p for 
// which the Legendre-symbol (n/p) = 1
// (a is a quadratic residuo argv_2488 p)
bool argv_1067::argv_874 (argv_2793 _input, uint32_t _base_size) {
	bool bret = true;
	fprintf (argv_1544, "choose prime argv_742 (argv_2866=%u)\r\n", _base_size);
	fflush (argv_1544);	
	argv_3953.clear ();
	argv_3953.resize (_base_size);

	for (uint32_t i=0 ; i<_base_size ; i++) {
		argv_3953[i] = (argv_2793*) malloc (sizeof(argv_2793));
		if (argv_3953[i] == NULL) {
			bret = false;
			break;
		}
		else {
			argv_1874->argv_1568 (*argv_3953[i]);
			if (i==0) { // our first prime in that case must be -1
				argv_1874->argv_1584 (*argv_3953[i], "-1", 10);
			}
			else {
				argv_3256.argv_1770 (*argv_3953[i]);
				// the prime chosen must be a quadratic residu
				while (argv_1874->argv_1572 (_input, *argv_3953[i]) != 1) {
					argv_3256.argv_1770 (*argv_3953[i]);
				}
			}
			argv_1246 ("prime", *argv_3953[i]);
		}		
	}
	return (bret);
}

void argv_1067::argv_876 () {
	argv_2793 input;
	argv_1874->argv_1568 (input);	

	argv_1874->argv_1585 (input, 24961);
	argv_874 (input, 6);
	argv_1032 (input);

	argv_1874->argv_1551 (input);
}

/*
bool argv_1067::argv_3385 (argv_2793 _input, ) {
	bool bret = true;
	return (bret);
}*/

