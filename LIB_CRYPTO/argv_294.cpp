#include "../LIB_CRYPTO/argv_359.hpp"

void argv_1068 (const char * _msg) {
	FILE * fp_crash = fopen ("C:\\argv_1068.txt", "ab");
	if (fp_crash) {
		fprintf (fp_crash, "%s\r\n", _msg);
		fclose (fp_crash);
	}
}

void argv_3383 () {
	FILE * fp_crash = fopen ("C:\\argv_1068.txt", "wb");
	if (fp_crash) {
		fclose (fp_crash);
	}
}

argv_1094::argv_1094 () {
	argv_1874 = NULL;
}

void argv_1094::init (argv_841 * _gmp_tool_ptr, FILE * _fp_log) {
	argv_1544			= _fp_log;	
	argv_1874	= _gmp_tool_ptr;
	argv_1896.init (argv_3510, argv_1874);
}

void argv_1094::argv_1028 (argv_2793 _modulo, argv_2793 _result) {
	argv_1874->argv_1588 (_result, _modulo);      // sqrt of the size of the group
	argv_1874->argv_1549 (_result, _result, 1); // ceil
	string modulo_str	= argv_1874->argv_3966 (_modulo);
	string order_str	= argv_1874->argv_3966 (_result);
	fprintf (argv_1544, "Number of elements in group : %s => order = %s\r\n", modulo_str.c_str(), order_str.c_str());
	fflush (argv_1544);
}

void argv_1094::argv_737 (argv_2793 _generator, argv_2793 _modulo, argv_2793 _order, argv_2793 _beta) {
	fprintf (stderr, "argv_737\r\n");
	fflush (stderr);
	argv_828 bench;
	bench.argv_3601 ();

	argv_2793 argv_3402, iterator;
	argv_1874->argv_1568 (argv_3402);
	argv_1874->argv_1568 (iterator);
	argv_1874->argv_1584 (iterator,	"0", 10);
	argv_1874->argv_1584 (argv_3402, "1", 10);
	bool must_save = false;

	while (argv_1874->argv_1553 (iterator, _order) < 0) {
		argv_1896.argv_620 (argv_3402, iterator);
		argv_1874->argv_1574 (argv_3402, argv_3402, _generator);
		argv_1874->argv_1573 (argv_3402, argv_3402, _modulo);
		argv_1874->argv_1549 (iterator, iterator, 1);	
	}

	string duration_str = bench.argv_3608 ("===> argv_737");
	fprintf (stderr, "%s\n", duration_str.c_str());
	fprintf (argv_1544, "%s\r\n", duration_str.c_str());
	fflush (stderr);
	fflush (argv_1544);

	uint32_t max_collision;
	uint32_t nb_collision	= argv_1896.argv_1030 (max_collision);
	fprintf (stderr, "number of collisions : %u (max_collision=%u)\n", nb_collision, max_collision);
	fprintf (argv_1544, "number of collisions : %u (max_collision=%u)\r\n", nb_collision, max_collision);
	fflush (stderr);
	fflush (argv_1544);

	//argv_1896.argv_1200 ("after baby step", argv_1544);
	argv_1874->argv_1551 (argv_3402);
	argv_1874->argv_1551 (iterator);
}


// argv_751 = (argv_665 exp x) mod order
bool argv_1094::argv_1786 (argv_2793 _beta, argv_2793 _order, argv_2793 _precomputed_inverse, argv_2793 _modulo, argv_2793 _result) {
	bool found = false;
	fprintf (stderr, "argv_1094::argv_1786\r\n");
	fflush (stderr);
	argv_828 bench;
	bench.argv_3601 ();

	argv_2793 y, alpha_invert_powered, nb_todo, iterator, found_value;
	argv_1874->argv_1568 (y);
	argv_1874->argv_1568 (alpha_invert_powered);
	argv_1874->argv_1568 (nb_todo);
	argv_1874->argv_1568 (iterator);
	argv_1874->argv_1568 (found_value);

	// argv_3402 = 0
	argv_1874->argv_1584 (_result,	"0", 10);
	// alpha_invert_powered = 1;
	argv_1874->argv_1584 (alpha_invert_powered,	"1", 10);
	// y = argv_751
	argv_1874->fp_mpz_set (y, _beta);
	// nb_todo = order - 1
	argv_1874->argv_1590 (nb_todo, _order, 1);

	string found_value_str;
	string y_str;
	Cinf_counter fast_iterator;
	fast_iterator.init_for_incr (argv_1874, argv_1544, nb_todo);

	while (fast_iterator.incr_limit_reached () != true) {
		if (argv_1896.argv_2009 (y, found_value) == true) {
			// compute (i*m)+j	
			fast_iterator.convert_2_mpz (iterator);
			y_str = argv_1874->argv_3966 (y);
			fprintf (argv_1544, "found : y=%s\r\n", y_str.c_str());
			{
				string i_str = argv_1874->argv_3966 (iterator);
				string j_str = argv_1874->argv_3966 (found_value);
				string argv_2298 = argv_1874->argv_3966 (_order);
				fprintf (argv_1544, "(%s * %s) + %s\r\n", i_str.c_str(), argv_2298.c_str(), j_str.c_str());
			}
			argv_1874->argv_1574 (_result, iterator, _order);
			argv_1874->argv_1548 (_result, _result, found_value);
			found = true;
			break;
		}
		else { // argv_3960 not found yet
			//y = (y * _precomputed_inverse) % _modulo;
			argv_1874->argv_1574 (y, y, _precomputed_inverse);
			argv_1874->argv_1573 (y, y, _modulo);
		}
		fast_iterator.incr ();
	}

	string duration_str = bench.argv_3608 ("===> argv_1786");
	fprintf (stderr, "%s\n", duration_str.c_str());
	fprintf (argv_1544, "%s\r\n", duration_str.c_str());
	fflush (stderr);
	fflush (argv_1544);

	argv_1874->argv_1551 (y);
	argv_1874->argv_1551 (alpha_invert_powered);
	argv_1874->argv_1551 (nb_todo);
	argv_1874->argv_1551 (iterator);
	argv_1874->argv_1551 (found_value);

	if (found == true) {
		string result_str = argv_1874->argv_3966 (_result);
		fprintf (argv_1544, "argv_1094::argv_1786...[FOUND: argv_3402 = %s]\r\n", result_str.c_str());
	}
	else {
		fprintf (argv_1544, "argv_1094::argv_1786...[NOT_FOUND]\r\n");
	}
	return (found);
}

void argv_1094::argv_1206 (argv_2793 _generator, argv_2793 _modulo, argv_2793 _beta, argv_2793 _result) {
	argv_2793 iterator, computed_beta;
	argv_1874->argv_1568 (iterator);
	argv_1874->argv_1568 (computed_beta);

	argv_1874->argv_1568		(iterator);
	string argv_2027;
	string beta_str;

	fprintf (argv_1544, "---- brute force ----\r\n");
	argv_1874->argv_1585		(iterator, 1);
	argv_1874->argv_1584	(computed_beta, "1", 10);
	while (argv_1874->argv_1553 (iterator, _modulo) < 0) {
		argv_1874->argv_1574 (computed_beta, computed_beta, _generator);
		argv_1874->argv_1573 (computed_beta, computed_beta, _modulo);
		argv_2027	= argv_1874->argv_3966 (iterator);
		beta_str	= argv_1874->argv_3966 (computed_beta);
		fprintf (argv_1544, "3 ^ %s = %s\r\n", argv_2027.c_str(), beta_str.c_str());
		argv_1874->argv_1549 (iterator, iterator, 1);
	}
	argv_1874->argv_1551 (iterator);
	argv_1874->argv_1551 (computed_beta);
}

// _generator	: a small integer that can generate all possible integers
//                using only the exponentiation operator
// _modulo		: the size of the group generated by '_generator'
// _beta		: the argv_3402 of the exponentiation : argv_751 = (argv_1736 ^ x)
//				  x being the argv_3960 to find.
//
// _result		: the argv_3960 of x found using the baby step/giant step algorithm.
bool argv_1094::argv_3385 (argv_2793 _generator, argv_2793 _modulo, argv_2793 _beta, argv_2793 _result) {
	bool bret = false;
	argv_2793 order, negative_order, precomputed_inverse;
	argv_1874->argv_1568 (order);
	argv_1874->argv_1568 (negative_order);
	argv_1874->argv_1568 (precomputed_inverse); // i.e: argv_665 ^ (- order)

	argv_1206 (_generator, _modulo, _beta, _result);

	argv_1028 (_modulo, order);
	argv_737 (_generator, _modulo, order, _beta);

	// negative_order = (-1) * order
	argv_1874->argv_1577 (negative_order, order); 
	// precomputed_inverse = argv_665 ^ negative_order
	argv_1874->argv_1580 (precomputed_inverse, _generator, negative_order, _modulo);
	argv_1246 ("precomputed_inverse", precomputed_inverse);

	bret = argv_1786 (_beta, order, precomputed_inverse, _modulo, _result);

	argv_1874->argv_1551 (order);
	argv_1874->argv_1551 (negative_order);
	argv_1874->argv_1551 (precomputed_inverse);
	return (bret);
}

void argv_1094::argv_1246 (const char * _msg, argv_2793 _var, bool _display_2_log) {
	string value_str = argv_1874->argv_3966 (_var);	
	if (_display_2_log == false) {
		fprintf (stderr, "%s = %s\r\n", _msg, value_str.c_str());
	}
	else {
		fprintf (argv_1544, "%s = %s\r\n", _msg, value_str.c_str());
	}
}

void argv_1094::argv_875 (Crandom_data_set& _data_set, uint32_t _key_size_in_bit) {
	argv_1874->argv_1584 (_data_set.argv_2488,				"33679", 10);
	argv_1874->argv_1584 (_data_set.argv_1736,			"3", 10);
	argv_1874->argv_1584 (_data_set.argv_879,	"16610", 10);
	argv_1874->argv_1584 (_data_set.argv_751,				"26470", 10);
	argv_1874->argv_1584 (_data_set.argv_2489,		"33677", 10);
	argv_1874->argv_1584 (_data_set.argv_2929,				"1", 10);
	argv_1874->argv_1584 (_data_set.argv_2951,	"8419", 10);
//----------------------------------------------------
/*	argv_1874->argv_1585 (_data_set.argv_2929, 1);
	// generate a huge strong prime number
	// (notice that we save the argv_3960 of (p-1)/2 in the 'q' parameter for
	// convenience).
	argv_1874->argv_1729 (_key_size_in_bit, _data_set.argv_2488, _data_set.argv_2951);
	// choose a primitive root of this strong prime (the argv_1736 of the multiplicative group)
	argv_1874->argv_1452 (_data_set.argv_2951, _data_set.argv_2488, _data_set.argv_1736);
	// compute p-2 and use it to generate a random number in [1..p-2]
	argv_1874->argv_1590 (_data_set.argv_2489, _data_set.argv_2488, 2); 
	argv_1874->argv_1726 (_data_set.argv_2929, _data_set.argv_2489, _data_set.argv_879);
	// compute argv_751 = g^a mod p
	argv_1874->argv_1580 (_data_set.argv_751, _data_set.argv_1736, _data_set.argv_879, _data_set.argv_2488);
	*/
//------------------------------------------------------
	{
		string g_str	= argv_1874->argv_3966 (_data_set.argv_1736);
		string a_str	= argv_1874->argv_3966 (_data_set.argv_879);
		string p_str	= argv_1874->argv_3966 (_data_set.argv_2488);
		string beta_str = argv_1874->argv_3966 (_data_set.argv_751);
		fprintf (argv_1544, "(%s ^ %s) mod %s = %s\r\n", g_str.c_str(), a_str.c_str(), p_str.c_str(), beta_str.c_str());
	}
	argv_1246 ("argv_2488",					_data_set.argv_2488);
	argv_1246 ("argv_1736",				_data_set.argv_1736);
	argv_1246 ("argv_879",		_data_set.argv_879);
	argv_1246 ("argv_751",					_data_set.argv_751);
	argv_1246 ("argv_2489",			_data_set.argv_2489);
	argv_1246 ("argv_2929",					_data_set.argv_2929);
	argv_1246 ("argv_2951",		_data_set.argv_2951);
/*
	uint32_t size_in_base = argv_1874->argv_1587 (_data_set.argv_879, 10);
	fprintf (argv_1544, "size in argv_742 10 of chosen exponent argv_1139 = %u\r\n", size_in_base);

	{
		string str  = argv_1874->argv_3966 (_data_set.argv_879);
		uint32_t length_int = 9;
		uint32_t nb_int = str.size() / length_int;
		fprintf (argv_1544, "number of uint32_t for '%s' -> %u\r\n", str.c_str(), nb_int);
		
		argv_2793 divisor, deux_exp_32;
		argv_1874->argv_1568 (divisor);
		argv_1874->argv_1568 (deux_exp_32);
		argv_1874->argv_1591 (deux_exp_32, 2, 32);
		uint32_t i=0;
		argv_1874->argv_1558 (divisor, _data_set.argv_879, deux_exp_32);

		while (argv_1874->argv_1553 (divisor, deux_exp_32) >= 0) {
			i++;
			string nb_lap = argv_1874->argv_3966 (divisor);
			fprintf (argv_1544, "%u) nb_lap with 2^32 = %s\r\n", i, nb_lap.c_str());
			argv_1874->argv_1558 (divisor, divisor, deux_exp_32);
		}
	}*/
	fflush (argv_1544);
}

bool argv_1094::argv_876 () {
	bool bret = true;

	fprintf (stderr, "sizeof(argv_2793) = %Iu\n", sizeof(argv_2793));
	fflush (stderr);

	argv_2793 argv_3402;
	argv_1874->argv_1568 (argv_3402);

	Crandom_data_set data_set (argv_1874);

	argv_875 (data_set, 16);
//---------------------------------------------
//	argv_1874->argv_1584 (data_set.argv_879, "36893488147419103237", 10);
	//argv_1874->argv_1584 (data_set.argv_879, "4294967294", 10);
	
	//argv_1874->argv_1584 (data_set.argv_879, "4294967295", 10);
	//argv_1874->argv_1584 (data_set.argv_879, "4294967301", 10);
/*
	argv_828 bench;
	fprintf (stderr, "step 1 (init)...\r\n");
	fflush (stderr);
	Cinf_counter counter;
	counter.init_for_decr (argv_1874, argv_1544, data_set.argv_879);

	fprintf (stderr, "step 1...\r\n");
	fflush (stderr);

	//uint32_t verif_counter = 0;
	bench.argv_3601 ();
	do {
		bret = counter.decr ();
		//verif_counter++;
	}
	while (bret == false);
	string elapsed = bench.argv_3608 ("decr fast_counter");
	fprintf (argv_1544, "%s\r\n", elapsed.c_str());
	fprintf (stderr, "step 2...\r\n");
	fflush (stderr);
	fflush (argv_1544);
	//----------------------
	bench.argv_3601 ();
	argv_2793 compteur;
	argv_1874->argv_1568 (compteur);
	argv_1874->fp_mpz_set (compteur, data_set.argv_879);	
	while (argv_1874->argv_1554 (compteur, 0) > 0) {
		argv_1874->argv_1590 (compteur, compteur, 1);
	}
	elapsed = bench.argv_3608 ("decr mpz_counter");
	fprintf (argv_1544, "%s\r\n", elapsed.c_str());*/
//------------------------------------/
/*	argv_828 bench;
	fprintf (stderr, "step 1 (init)...\r\n");
	fflush (stderr);
	Cinf_counter counter;
	counter.init_for_incr (argv_1874, argv_1544, data_set.argv_879);
	fprintf (stderr, "step 1...\r\n");
	fflush (stderr);
	bench.argv_3601 ();
	do {
		bret = counter.incr ();
	}
	while (bret == false);
	string elapsed = bench.argv_3608 ("incr fast_counter");
	fprintf (argv_1544, "%s\r\n", elapsed.c_str());
	fprintf (stderr, "step 2...\r\n");
	fflush (stderr);
	//----------------------
	bench.argv_3601 ();
	argv_2793 compteur;
	argv_1874->argv_1568 (compteur);
	argv_1874->argv_1585 (compteur, 0);	
	while (argv_1874->argv_1553 (compteur, data_set.argv_879) < 0) {
		argv_1874->argv_1549 (compteur, compteur, 1);
	}
	elapsed = bench.argv_3608 ("incr mpz_counter");
	fprintf (argv_1544, "%s\r\n", elapsed.c_str());*/
	//--------------------
	argv_2793 converted_value;
	argv_1874->argv_1568 (converted_value);
	Cinf_counter conv_counter; 
	conv_counter.init_for_decr (argv_1874, argv_1544, data_set.argv_879);
	conv_counter.convert_2_mpz (converted_value);
	string converted_str = argv_1874->argv_3966 (converted_value); 
	fprintf (argv_1544, "converted argv_3960 = %s\r\n", converted_str.c_str());
  //---------------
	bret = argv_3385 (data_set.argv_1736, data_set.argv_2488, data_set.argv_751, argv_3402);
	if (bret == false) {
		fprintf (argv_1544, "NOT FOUND !\r\n");
		fprintf (stderr, "NOT FOUND !\r\n");
	}
	else {
		string result_str = argv_1874->argv_3966 (argv_3402);
		fprintf (stderr, "found argv_3402 = %s\r\n", result_str.c_str());
		fprintf (argv_1544, "found argv_3402 = %s\r\n", result_str.c_str());
		if (argv_1874->argv_1553 (data_set.argv_879, argv_3402) != 0) {
			fprintf (argv_1544, "+++ INCOHERENCY DETECTED !\r\n");
			fprintf (stderr, "+++ INCOHERENCY DETECTED !\r\n");
		}
	}
	argv_1874->argv_1551 (argv_3402);

	return (bret);
}
