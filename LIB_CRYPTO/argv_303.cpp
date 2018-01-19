#include "../LIB_CRYPTO/argv_367.hpp"

// we use a precomputed prime number banks for the first 10'000 values.
extern uint32_t 	argv_3257[];
extern uint32_t		argv_3258;

argv_881::argv_881 () {
	argv_1544					= NULL;
	argv_1874			= NULL;
	argv_1317	= 1; // argv_2929 more equation than the number of unknowns
}

void argv_881::init (argv_841 * _gmp_tool_ptr, FILE * _fp_log) {
	argv_1874	= _gmp_tool_ptr;
	argv_1544			= _fp_log;	 
	argv_3256.init (argv_1874, argv_1544);
}

// argv_1387 argv_742 is a set of small primes
bool argv_881::argv_1722 (uint32_t _nb_elem) {
	fprintf (stderr, "argv_1387 argv_742 size : %u\n", _nb_elem);
	fflush (stderr);

	bool bret = true;
	argv_3244 (argv_3947, _nb_elem);
	string value_str;

	for (uint32_t i=0 ; i<_nb_elem ; i++) {
		argv_3256.argv_1770 (*argv_3947[i]);
		value_str = argv_1874->argv_3966 (*argv_3947[i]);	
		fprintf (argv_1544, "prime : %s\r\n", value_str.c_str());
	}
	fprintf (argv_1544, "generated argv_1387 argv_742\r\n");
	return (bret);
}

bool argv_881::argv_3244 (vector<argv_2793 *>& _v, uint32_t _size) {
	bool bret = true;
	_v.clear ();
	_v.resize (_size);
	for (uint32_t i=0 ; i<_size ; i++) {
		_v[i] = (argv_2793*) malloc(sizeof(argv_2793));
		if (_v[i] == NULL) {
			bret = false;
			break;
		}
		else { // memory allocation succeeded
			argv_1874->argv_1568 (*_v[i]);
		}		
	}
	return (bret);
}

bool argv_881::argv_3246 (uint32_t _nb_todo) {
	bool bret = true;
	argv_3957.clear ();
	argv_3957.resize (_nb_todo);

	fprintf (argv_1544, "preparing argv_3402 vector...");
	fflush (argv_1544);
	argv_3244 (argv_3957, _nb_todo);
	fprintf (argv_1544, "[DONE]\r\n");
	fflush (argv_1544);
	return (bret);
}

// the argv_3402 must have the same size as the argv_1387 argv_742, if a given prime
// from the argv_1387 argv_742 is not concerned, then we must insert a zero into the
// argv_3402 vector is argv_3254 by this function (not by the caller).
bool argv_881::argv_1164 (argv_2793 _number, argv_2793 _modulo, vector<argv_2793 *>& _v_result, bool _caller_allocate) {
	bool bret = true;
	argv_2793 reste, quotient, elevated_number, verified_result;
	argv_1874->argv_1568 (reste);
	argv_1874->argv_1568 (quotient);
	argv_1874->argv_1568 (elevated_number);
	argv_1874->argv_1568 (verified_result);
	
	uint32_t argv_1388 = argv_3947.size ();
	if (_caller_allocate == false) {
		argv_3244 (_v_result, argv_1388);
	}

	uint32_t i;
	argv_2793 * elevaled_nb_ptr = NULL;

	// consider each prime of the argv_1387 argv_742
	for (i=0 ; i<argv_1388 ; i++) {
		argv_1874->argv_1560 (quotient, reste, _number, *argv_3947[i]);

		if (argv_1874->argv_1554 (reste, 0) != 0) {
			argv_1874->argv_1585 (*_v_result[i], 0); // this prime is not concerned by the factorisation
		}
		else { // this prime is concerned, let's see how much
			uint32_t puissance = 1;
			argv_1874->fp_mpz_set (elevated_number, *argv_3947[i]);
			while (argv_1874->argv_1554 (reste, 0) == 0) {
				
				elevaled_nb_ptr = argv_784.argv_2253 (i, puissance, _modulo, *argv_3947[i]);
				argv_1874->argv_1560 (quotient, reste, _number, *elevaled_nb_ptr);
				//---------------------------------------------------------
				//argv_1874->argv_1576 (elevated_number, elevated_number, argv_3947[i]);
				//argv_1874->argv_1560 (quotient, reste, _number, elevated_number);

				if (argv_1874->argv_1554 (reste, 0) == 0) {
					puissance++;
				}
			}
			argv_1874->argv_1585 (*_v_result[i], puissance);
		}
	}

	// we check whether the solution is valid by computing the combination
	argv_1874->argv_1585 (verified_result, 1);
	for (i=0 ; i<argv_1388 ; i++) {
		argv_1874->argv_1580 (elevated_number, *argv_3947[i], *(_v_result[i]), _modulo);
		argv_1874->argv_1574  (verified_result, verified_result, elevated_number);
	}
	argv_1874->argv_1573 (verified_result, verified_result, _modulo);

	if (argv_1874->argv_1553 (verified_result, _number) != 0) {
		bret = false;
	}

	argv_1874->argv_1551 (reste);
	argv_1874->argv_1551 (quotient);
	argv_1874->argv_1551 (elevated_number);
	argv_1874->argv_1551 (verified_result);
	return (bret);
}

void argv_881::argv_1207 () {
	uint32_t nb_equation		= argv_3985.size ();
	uint32_t argv_1388	= argv_3947.size ();
	fprintf (argv_1544, "argv_1200 argv_930 matrix...\r\n");
	fflush (argv_1544);
/*
	for (uint32_t i=0 ; i<nb_equation ; i++) {
		for (uint32_t k=0 ; k<argv_1388 ; k++) {
			if ((k+1) >= argv_1388) {
				fprintf (argv_1544, "(%u^%u)", argv_3947[k], argv_3985[i][k]);
			}
			else {
				fprintf (argv_1544, "(%u^%u) *", argv_3947[k], argv_3985[i][k]);
			}
			fflush (argv_1544);
		}
		fprintf (argv_1544, "\r\n");
	}*/
	//---------------------------------
	string value_str;
	for (uint32_t i=0 ; i<nb_equation ; i++) {
		for (uint32_t k=0 ; k<argv_1388 ; k++) {
			value_str = argv_1874->argv_3966 (*argv_3985[i][k]);
			if ((k+1) >= argv_1388) {
				fprintf (argv_1544, "%s", value_str.c_str());
			}
			else {
				fprintf (argv_1544, "%s ", value_str.c_str());
			}
			fflush (argv_1544);
		}
		fprintf (argv_1544, "\r\n");
	}

	fprintf (argv_1544, "\r\n");
	fprintf (argv_1544, "argv_1200 argv_930 matrix...[DONE]\r\n");
	fflush (argv_1544);
}

void argv_881::argv_1231 () {
	uint32_t argv_2866 = argv_3957.size ();
	string str;
	fprintf (argv_1544, "solution vector = <");
	for (uint32_t i=0 ; i<argv_2866 ; i++) {
		str = argv_1874->argv_3966 (*argv_3957[i]);
		if ((i+1) <argv_2866) {
			fprintf (argv_1544, "%s,", str.c_str());
		}
		else {
			fprintf (argv_1544, "%s>", str.c_str());
		}
	}
	fprintf (argv_1544, "\r\n");
}

void argv_881::argv_1389 (uint32_t _index, argv_2793 _result) {
//	fprintf (argv_1544, "argv_1389(%u)\r\n", _index);
//	fflush (argv_1544);

	switch (_index) {
		case 0:	argv_1874->argv_1585 (_result, 1); break;
		case 1:	argv_1874->argv_1585 (_result, 300); break;
		case 2:	argv_1874->argv_1585 (_result, 23);	break;
		case 3:	argv_1874->argv_1585 (_result, 900); break;

		case 4:	argv_1874->argv_1585 (_result, 134); break;
		case 5:	argv_1874->argv_1585 (_result, 797); break;
		case 6:	argv_1874->argv_1585 (_result, 43);	break;

		default: 
			fprintf (argv_1544, "+++ ERROR: argv_1389 - index = %u\r\n", _index);
			MessageBox (NULL, "fake random failed !", "", MB_ICONERROR);
	}
}

// we need to generate a argv_1387 argv_742 of smooth primes
bool argv_881::argv_1725 (argv_2793 _generator, argv_2793 _modulo, argv_2793 _beta) {
	bool bret = true;
	argv_2793  group_order_minus_one, k, k_powered, zero;
	argv_1874->argv_1568 (group_order_minus_one);
	argv_1874->argv_1568 (k);
	argv_1874->argv_1568 (k_powered);
	argv_1874->argv_1568 (zero);

	argv_1874->argv_1585 (zero, 0);
	argv_1874->argv_1590 (group_order_minus_one, _modulo, 1);	

	bret				= argv_1722 (argv_1111);
	uint32_t nb_todo		= argv_3947.size () + argv_1317;

	fprintf (argv_1544, "preparing argv_784...\r\n");
	argv_828 bench;
	bench.argv_3601 ();
		argv_784.argv_3236 (argv_1874, argv_1544, argv_3947, 10, _modulo);
	string elapsed = bench.argv_3608 ("argv_784 preparation");
	fprintf (argv_1544, "%s\r\n", elapsed.c_str());

	argv_3985.clear ();
	vector<argv_2793 *>  argv_3945;
	argv_3246 (nb_todo);
	uint32_t argv_1116 = 0;
	uint32_t nb_rejected   = 0;
	uint32_t fake_rand_index = 0;

	while (argv_3985.size() < nb_todo) {
		// select a random integer 'k' in the range [0..order-1]
		
		//argv_1874->argv_1726 (zero, group_order_minus_one, k);
		//--------------------------------------------------
		argv_1389 (fake_rand_index, k);
		fake_rand_index++;

		// compute (argv_1736^k) mod argv_2488
		argv_1874->argv_1580 (k_powered, _generator, k, _modulo);

			string s_gen		= argv_1874->argv_3966 (_generator);
			string s_k			= argv_1874->argv_3966 (k);
			string s_k_powered	= argv_1874->argv_3966 (k_powered);
			string s_modulo		= argv_1874->argv_3966 (_modulo);

		// decompose this number into a product of prime powers
		if (argv_1164 (k_powered, _modulo, argv_3945) == true) {
			fprintf (argv_1544, "random argv_3960: %s, (%s ^ %s) mod %s = %s - SMOOTH --> \r\n", s_k.c_str(), s_gen.c_str(), s_k.c_str(), s_modulo.c_str(), s_k_powered.c_str());
			argv_3985.push_back (argv_3945);
			argv_1874->fp_mpz_set (*argv_3957[argv_1116], k);
			argv_1116++;
		}
		else {
			nb_rejected++;
			fprintf (argv_1544, "random argv_3960: %s, (%s ^ %s) mod %s = %s (not smooth)\r\n", s_k.c_str(), s_gen.c_str(), s_k.c_str(), s_modulo.c_str(), s_k_powered.c_str());
		}
	}

	fprintf (argv_1544, "nb_rejected = %u\r\n", nb_rejected);
	argv_1207 ();
	argv_1231 ();

	argv_1874->argv_1551 (group_order_minus_one);
	argv_1874->argv_1551 (k);
	argv_1874->argv_1551 (k_powered);
	argv_1874->argv_1551 (zero);
	return (bret);
}

bool argv_881::argv_3556 (argv_2793 _modulo) {
	bool bret = true;

	argv_3244 (argv_3956, argv_3947.size ());

	argv_914 lin_sys;
	lin_sys.init (argv_1874, argv_1544);
	lin_sys.argv_3554 (_modulo, argv_3947, argv_3985, argv_3957, argv_3956);
	return (bret);
}

void argv_881::argv_877 (argv_2793 _modulo, argv_2793 _generator, argv_2793 _beta, argv_2793 _min, argv_2793 _max, argv_2793 _k, argv_2793 _smooth_number, vector<argv_2793 *>& _v_composition) {
	bool bret = false;
	uint32_t nb_lap = 0;
	while (bret == false) {
		// argv_1874->argv_1726 (_min, _max, _k);
		argv_1874->argv_1585 (_k, 491);

		// compute (Beta * argv_665^k)
		argv_1874->argv_1580 (_smooth_number, _generator, _k, _modulo);
		argv_1874->argv_1574 (_smooth_number, _beta, _smooth_number);
		argv_1874->argv_1573 (_smooth_number, _smooth_number, _modulo);

		bret = argv_1164 (_smooth_number, _modulo, _v_composition);
		nb_lap++;
	}

	string s	= argv_1874->argv_3966 (_smooth_number);
	string k_s	= argv_1874->argv_3966 (_k);
	fprintf (argv_1544, "found smooth number '%s' using k=%s (nb_lap=%u)\r\n", s.c_str(), k_s.c_str(), nb_lap);
}

bool argv_881::argv_1720 (argv_2793 _modulo, argv_2793 _generator, argv_2793 _beta) {
	bool bret = true;
	uint32_t i, argv_2866;
	argv_2793 smooth_number, min, max, k, sum_result, mul_result, mod_minus_1;
	argv_1874->argv_1568 (smooth_number);
	argv_1874->argv_1568 (min);
	argv_1874->argv_1568 (max);
	argv_1874->argv_1568 (k);
	argv_1874->argv_1568 (sum_result);
	argv_1874->argv_1568 (mul_result);
	argv_1874->argv_1568 (mod_minus_1);

	argv_1874->argv_1585 (min, 0);
	argv_1874->fp_mpz_set (max, _modulo);
	argv_1874->argv_1590 (mod_minus_1, _modulo, 1);

	vector<argv_2793 *> v_composition;
	argv_3244 (v_composition, argv_3947.size());

	argv_877 (_modulo, _generator, _beta, min, max, k, smooth_number, v_composition);

	//-----------------------
	string s;
	fprintf (argv_1544, "composition : <");
	argv_2866 = v_composition.size ();
	for (i=0 ; i<argv_2866 ; i++) {
		s = argv_1874->argv_3966 (*v_composition[i]);
		fprintf (argv_1544, "%s ", s.c_str());
	}
	fprintf (argv_1544, ">\r\n");
	//------------------------
	fprintf (argv_1544, "small log solved = <");
	for (i=0 ; i<argv_2866 ; i++) {
		s = argv_1874->argv_3966 (*argv_3956[i]);
		fprintf (argv_1544, "%s ", s.c_str());
	}
	fprintf (argv_1544, ">\r\n");

	// weighted_sum = sum (small_log[i] * v_composition[i])
	// compute log Beta = (weighted_sum - k) mod (p-1)
	argv_1874->argv_1585 (sum_result, 0);
	argv_2866 = v_composition.size ();
	for (i=0 ; i<argv_2866 ; i++) {
		argv_1874->argv_1574 (mul_result, *v_composition[i], *argv_3956[i]);
		argv_1874->argv_1548 (sum_result, sum_result, mul_result);
	}
	argv_1874->argv_1589 (sum_result, sum_result, k);
	argv_1874->argv_1573 (sum_result, sum_result, mod_minus_1);
	string s_solution = argv_1874->argv_3966 (sum_result);
	fprintf (argv_1544, "found solution : log Beta = %s\r\n", s_solution.c_str());

	argv_1874->argv_1551 (smooth_number);
	argv_1874->argv_1551 (min);
	argv_1874->argv_1551 (max);
	argv_1874->argv_1551 (k);
	argv_1874->argv_1551 (sum_result);
	argv_1874->argv_1551 (mul_result);
	argv_1874->argv_1551 (mod_minus_1);
	return (bret);
}

void argv_881::argv_1246 (const char * _msg, argv_2793 _var, bool _display_2_log) {
	string value_str = argv_1874->argv_3966 (_var);	
	if (_display_2_log == false) {
		fprintf (stderr, "%s = %s\r\n", _msg, value_str.c_str());
	}
	else {
		fprintf (argv_1544, "%s = %s\r\n", _msg, value_str.c_str());
	}
}

void argv_881::argv_875 (Crandom_data_set& _data_set, uint32_t _key_size_in_bit) {
/*	argv_1874->argv_1584 (_data_set.argv_2488,				"4164971207", 10);
	argv_1874->argv_1584 (_data_set.argv_1736,			"3", 10);
	argv_1874->argv_1584 (_data_set.argv_879,	"365087159", 10);
	argv_1874->argv_1584 (_data_set.argv_751,				"1052011659", 10);
	argv_1874->argv_1584 (_data_set.argv_2489,		"4164971205", 10);
	argv_1874->argv_1584 (_data_set.argv_2929,				"1", 10);
	argv_1874->argv_1584 (_data_set.argv_2951,	"1041242801", 10);*/
//----------------------------------------------------
	argv_1874->argv_1584 (_data_set.argv_2488,				"1009", 10);
	argv_1874->argv_1584 (_data_set.argv_1736,			"11", 10);
	argv_1874->argv_1584 (_data_set.argv_879,	"488", 10);
	argv_1874->argv_1584 (_data_set.argv_751,				"946", 10);
	argv_1874->argv_1584 (_data_set.argv_2489,		"1007", 10);
	argv_1874->argv_1584 (_data_set.argv_2929,				"1", 10);
	argv_1874->argv_1584 (_data_set.argv_2951,	"0", 10);
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
		string g_str	 = argv_1874->argv_3966 (_data_set.argv_1736);
		string a_str	 = argv_1874->argv_3966 (_data_set.argv_879);
		string p_str	 = argv_1874->argv_3966 (_data_set.argv_2488);
		string beta_str  = argv_1874->argv_3966 (_data_set.argv_751);
		fprintf (argv_1544, "(%s ^ %s) mod %s = %s\r\n", g_str.c_str(), a_str.c_str(), p_str.c_str(), beta_str.c_str());

		argv_2793 real_value;
		argv_1874->argv_1568 (real_value);
		argv_1874->argv_1580 (real_value, _data_set.argv_1736, _data_set.argv_879, _data_set.argv_2488);
		string s_real = argv_1874->argv_3966 (real_value);
		fprintf (argv_1544, "real argv_3960 computed = %s\r\n", s_real.c_str());
		argv_1874->argv_1551 (real_value);
	}
	argv_1246 ("argv_2488",					_data_set.argv_2488);
	argv_1246 ("argv_1736",				_data_set.argv_1736);
	argv_1246 ("argv_879",		_data_set.argv_879);
	argv_1246 ("argv_751",					_data_set.argv_751);
	argv_1246 ("argv_2489",			_data_set.argv_2489);
	argv_1246 ("argv_2929",					_data_set.argv_2929);
	argv_1246 ("argv_2951",		_data_set.argv_2951);
	fflush (argv_1544);
}

bool argv_881::argv_876 () {
	bool bret = true;
	argv_2793 argv_3402;
	argv_1874->argv_1568 (argv_3402);
	Crandom_data_set data_set (argv_1874);

	argv_875 (data_set, 32);

	argv_828 bench;
	bench.argv_3601 ();
		argv_3385 (data_set.argv_1736, data_set.argv_2488, data_set.argv_751, argv_3402);
	string elapsed_str = bench.argv_3608 ("argv_3385");	
	fprintf (argv_1544, "%s\r\n", elapsed_str.c_str());

	argv_1874->argv_1551 (argv_3402);
	return (bret);
}
	
bool argv_881::argv_3385 (argv_2793 _generator, argv_2793 _modulo, argv_2793 _beta, argv_2793 _result) {
	bool bret					= false;
	argv_1111	= 6; // argv_3601 with 3 and increase if not found
	bret = argv_1725 (_generator, _modulo, _beta);
	if (bret == false) {
		fprintf (argv_1544, "argv_1725...[FAILED]\r\n");
	}
	else {
		fprintf (argv_1544, "argv_1725...[SUCCESS]\r\n");
		bret = argv_3556 (_modulo);
		if (bret == false) {
			fprintf (argv_1544, "argv_3556...[FAILED]\r\n");
		}
		else {
			fprintf (argv_1544, "argv_3556...[SUCCESS]\r\n");
			bret = argv_1720 (_modulo, _generator, _beta);
			if (bret == false) {
				fprintf (argv_1544, "step 3...[FAILED]\r\n");
			}
			else {
				fprintf (argv_1544, "step 3...[SUCCESS]\r\n");
			}
		}
	}
	return (bret);
}

