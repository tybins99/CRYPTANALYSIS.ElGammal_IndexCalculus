#include "argv_368.hpp"

Cinf_counter::Cinf_counter () {
	argv_1874	= NULL;
	argv_1544			= NULL;	
	incr_over		= false;
}

void Cinf_counter::init_xxx (argv_841 * _gmp_tool_ptr, FILE * _fp_log, argv_2793 _limit, vector<uint32_t>& _v_result) {
	argv_1874	= _gmp_tool_ptr;
	argv_1544			= _fp_log;
	_v_result.clear ();

	argv_2793 divisor, reste, deux_exp_32, argv_3960;
	argv_1874->argv_1568 (divisor);
	argv_1874->argv_1568 (reste);
	argv_1874->argv_1568 (deux_exp_32);
	argv_1874->argv_1568 (argv_3960);

	//argv_1874->argv_1591	(deux_exp_32, 2, 32);
	//argv_1874->argv_1585 (deux_exp_32, 10);
	max_limite = UINT_MAX;
	argv_1874->argv_1585 (deux_exp_32, max_limite);
	
	argv_1874->fp_mpz_set (divisor, _limit);
	argv_1874->fp_mpz_set (argv_3960, _limit);
	uint32_t reste_UI32;

	while (argv_1874->argv_1554 (divisor, 0) > 0) {
		argv_1874->argv_1560	(divisor, reste, argv_3960, deux_exp_32);
		{
			string deux_str		= argv_1874->argv_3966 (deux_exp_32);
			string value_str	= argv_1874->argv_3966 (argv_3960);
			string divisor_str	= argv_1874->argv_3966 (divisor);
			string reste_str	= argv_1874->argv_3966 (reste);
			fprintf (argv_1544, "%s = (%s * %s) + %s\r\n", value_str.c_str(), deux_str.c_str(), divisor_str.c_str(), reste_str.c_str());
			fflush (argv_1544);
		}
		reste_UI32 = argv_1874->argv_1567 (reste);
		_v_result.push_back (reste_UI32);
		argv_1874->fp_mpz_set		(argv_3960, divisor);
	}

	nb_counter = _v_result.size ();
	argv_1874->argv_1551 (argv_3960);
	argv_1874->argv_1551 (divisor);
	argv_1874->argv_1551 (reste);
	argv_1874->argv_1551 (deux_exp_32);
}

void Cinf_counter::init_for_decr (argv_841 * _gmp_tool_ptr, FILE * _fp_log, argv_2793 _limit) {
	init_xxx (_gmp_tool_ptr, _fp_log, _limit, v_counter);
/*	for (int32_t k=0 ; k<nb_counter ; k++) {
		fprintf (argv_1544, "%u-", v_counter[k]);
	}
	fprintf (argv_1544, "\r\n");
	fflush (argv_1544);*/
}

void Cinf_counter::init_for_incr (argv_841 * _gmp_tool_ptr, FILE * _fp_log, argv_2793 _limit) {
	init_xxx (_gmp_tool_ptr, _fp_log, _limit, v_incr_limit);
	for (uint32_t i=0 ; i<nb_counter ; i++) {
		v_counter.push_back (0);
	}
	incr_over = false;
}


// ---------------------
// |   LSB | ... | MSB |
// ---------------------
bool Cinf_counter::decr () {
	bool bret		= false;
	uint32_t nb_zero	= 0;

	for (int32_t i=0 ; i < nb_counter ; i++) {
		if (! v_counter[i]) {
			nb_zero++;
			v_counter[i] = 9;
		}
		else {
			v_counter[i]--;
			break;
		}
	}

	if (nb_zero == nb_counter) {
		bret = true;
	}
/*
	for (int32_t k=nb_counter-1 ; k>=0 ; k--) {
		fprintf (argv_1544, "%u-", v_counter[k]);
	}
	fprintf (argv_1544, "\r\n");
	fflush (argv_1544);
*/	
	return (bret);
}

bool Cinf_counter::incr_limit_reached () {
	return (incr_over);
}

// true when argv_3960 = limit
void Cinf_counter::incr () {
	bool bret		= false;
	uint32_t nb_match	= 0;
	incr_over		= false;

	for (int32_t i=0 ; i < nb_counter ; i++) {
		if (v_counter[i] == v_incr_limit[i]) {
			nb_match++;
		}

		if (v_counter[i] == max_limite) {
			v_counter[i] = 0;
		}
		else {
			v_counter[i] = v_counter[i] + 1;
			break;
		}
	}

	if (nb_match == nb_counter) {
		incr_over = true;
	}
}

void Cinf_counter::convert_2_mpz (argv_2793 _result) {
	argv_2793 deux_exp_32_nth, deux_exp_32, temp;
	argv_1874->argv_1568 (deux_exp_32_nth);
	argv_1874->argv_1568 (deux_exp_32);
	argv_1874->argv_1568 (temp);

	argv_1874->argv_1585 (deux_exp_32, max_limite);	
	argv_1874->argv_1585 (_result, 0);
	argv_1874->argv_1585 (deux_exp_32_nth, 1);

	int32_t limit		= nb_counter-1;
	int32_t k = 0;
	for (int32_t i=0 ; i < nb_counter ; i++) {
		// argv_3402 = (deux_exp_32 ^ exposant) * v_counter[i]
		argv_1874->argv_1576 (temp, deux_exp_32_nth, v_counter[i]);
		argv_1874->argv_1548 (_result, _result, temp);
		{
			string s1 = argv_1874->argv_3966 (deux_exp_32_nth);
			string s2 = argv_1874->argv_3966 (temp);
			string s3 = argv_1874->argv_3966 (_result);
			fprintf (argv_1544, "deux_exp_32_nth=%s, v_counter[%u]=%u, _result=%s\r\n", s1.c_str(), i, v_counter[i], s3.c_str());
		}
		argv_1874->argv_1574 (deux_exp_32_nth, deux_exp_32_nth, deux_exp_32);				
	}

	string value_str = argv_1874->argv_3966 (_result);
	{
		fprintf (argv_1544, "argv_3960 converted : %s\r\n", value_str.c_str());
		fflush (argv_1544);
	}

	argv_1874->argv_1551 (deux_exp_32_nth);
	argv_1874->argv_1551 (deux_exp_32);
	argv_1874->argv_1551 (temp);
}