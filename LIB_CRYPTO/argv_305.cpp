#include "../LIB_CRYPTO/argv_369.hpp"

uint32_t		argv_2172;
argv_841 *	argv_1789 = NULL;

bool argv_1036::operator < (const argv_1036& _row) {
	bool bret = false;
	if (argv_1789->argv_1554 (*argv_3945[argv_2172], 0) == 0) {
		bret = false;
	}	
	else if (argv_1789->argv_1554 (*_row.argv_3945[argv_2172], 0) == 0) {
		bret = true;
	}
	else if (argv_1789->argv_1553 (*argv_3945[argv_2172], *_row.argv_3945[argv_2172]) < 0) {
		bret = true;
	}
	return (bret);
}

void argv_1036::argv_1200 (FILE * _fp_log, argv_841 * _gmp_tool_ptr) {
	fprintf (_fp_log, "@%u) ", argv_1915);
	string str_val;
	uint32_t argv_2866 = argv_3945.size ();
	for (uint32_t i=0 ; i<argv_2866 ; i++) {
		str_val = _gmp_tool_ptr->argv_3966 (*argv_3945[i]);
		fprintf (_fp_log, "\t\t%5s\t\t", str_val.c_str());
	}
	str_val = _gmp_tool_ptr->argv_3966 (*argv_3553);
	fprintf (_fp_log, "\t=\t%s\r\n", str_val.c_str());
}

//--------------------------------

argv_914::argv_914 () {
	argv_1874			= NULL;
	argv_1544					= NULL;
	argv_2875					= 0;
	argv_2863				= 0;
}

void argv_914::init (argv_841 * _gmp_tool_ptr, FILE * _fp_log) {
	argv_1874		= _gmp_tool_ptr;
	argv_1789	= _gmp_tool_ptr;
	argv_1544				= _fp_log;
	argv_1874->argv_1568 (argv_2490);
}

void argv_914::argv_1227 (const char * _msg, int32_t _pivot_position) {
	uint32_t argv_2866 = argv_3955.size ();
	fprintf (argv_1544, "\r\n@@@@@@@@ row_vector: %s @@@@@@@@@@\r\n", _msg);
	for (uint32_t i=0 ; i<argv_2866 ; i++) {
		argv_3955[i].argv_1200 (argv_1544, argv_1874);	
		if ((_pivot_position >= 0) && (i == _pivot_position)) {
			fprintf (argv_1544, "---------------------------------------------------------------\r\n");
		}
	}
	fflush (argv_1544);
}

// this function associates  
// - a vector
// - a solution
// for every possible row so that when sorting the rows, we
// can always easily find the solution associated with this row
bool argv_914::argv_662 (vector<vector<argv_2793 *> >& _vv_equation, vector<argv_2793 *>& _v_solution) {
	bool bret = true;
	argv_3955.clear ();

	if (_vv_equation.size() != _v_solution.size ()) {
		fprintf (argv_1544, "+++ ERROR: argv_914::argv_662 failed !\r\n");
		fflush (argv_1544);
		MessageBox (NULL, "argv_662 failed !", "", MB_ICONERROR);
		bret = false;
	}
	else {
		fprintf (argv_1544, "number of equations to aggregate : %u\r\n", argv_2875);
		argv_1036 row;
		for (uint32_t i=0 ; i<argv_2875 ; i++) {
			row.argv_3945 = _vv_equation[i];
			row.argv_3553	= _v_solution[i];
			row.argv_1915		= i;	
			argv_3955.push_back (row);
			argv_2155.push_back (i); // not used as pivot (not yet)
		}
	}

	argv_1227 ("after aggregation");
	return (bret);
}

// using 'argv_2172'
// notice that '_result' is just here to avoid having to allocate/deallocate a new argv_2793
// each argv_3825.
bool argv_914::argv_1300 (uint32_t _reference_row, uint32_t _row_concerned, argv_2793 _multiplicande, argv_2793 _mul_result) {
	bool bret = true;

	if (argv_1874->argv_1554 (*argv_3955[_row_concerned].argv_3945[argv_2172], 0) == 0) {
		fprintf (argv_1544, "row %u already normalized for column %u\r\n", _row_concerned, argv_2172);
	}
	else {
		bret = argv_1874->argv_3087 (*argv_3955[_row_concerned].argv_3945[argv_2172], *argv_3955[_reference_row].argv_3945[argv_2172], argv_2490, _multiplicande);
		if (bret == false) {
			string a_str		= argv_1874->argv_3966 (*argv_3955[_row_concerned].argv_3945[argv_2172]);
			string b_str		= argv_1874->argv_3966 (*argv_3955[_reference_row].argv_3945[argv_2172]);
			string modulo_str	= argv_1874->argv_3966 (argv_2490);
			fprintf (argv_1544, "+++ ERROR: failed to divide (%s/%s) mod %s !\r\n", a_str.c_str(), b_str.c_str(), modulo_str.c_str());
		}
		else { // modify each column of the concerned row using the ratio found in the argv_1106 column of reference row.
			string a_str		= argv_1874->argv_3966 (*argv_3955[_row_concerned].argv_3945[argv_2172]);
			string b_str		= argv_1874->argv_3966 (*argv_3955[_reference_row].argv_3945[argv_2172]);
			string modulo_str	= argv_1874->argv_3966 (argv_2490);
			string result_str	= argv_1874->argv_3966 (_multiplicande);
			fprintf (argv_1544, "(%s/%s) mod %s = %s (the multiplicande for this pivot)\r\n", a_str.c_str(), b_str.c_str(), modulo_str.c_str(), result_str.c_str());

			string s1, s2, s3, s4, s5;

			for (uint32_t i=0 ; i<argv_2863 ; i++) { // L <- L - (multiplicande * Lref[ith_column])
				argv_1874->argv_1574 (_mul_result, _multiplicande, *argv_3955[_reference_row].argv_3945[i]); 
				s1 = argv_1874->argv_3966 (*argv_3955[_reference_row].argv_3945[i]);
				s2 = argv_1874->argv_3966 (_multiplicande);
				s3 = argv_1874->argv_3966 (_mul_result);
				s4 = argv_1874->argv_3966 (*argv_3955[_row_concerned].argv_3945[i]);
				fprintf (argv_1544, "(%s * %s) = %s =>  (%s - %s) = ", s2.c_str(), s1.c_str(), s3.c_str(), s4.c_str(), s3.c_str());

				argv_1874->argv_1589 (*argv_3955[_row_concerned].argv_3945[i], *argv_3955[_row_concerned].argv_3945[i], _mul_result);
				s4 = argv_1874->argv_3966 (*argv_3955[_row_concerned].argv_3945[i]);
				s5 = argv_1874->argv_3966 (argv_2490);
				fprintf (argv_1544, "%s => (%s mod %s) = ", s4.c_str(), s4.c_str(), s5.c_str());

				argv_1874->argv_1573 (*argv_3955[_row_concerned].argv_3945[i], *argv_3955[_row_concerned].argv_3945[i], argv_2490);
				s4 = argv_1874->argv_3966 (*argv_3955[_row_concerned].argv_3945[i]);
				fprintf (argv_1544, "%s\r\n", s4.c_str());
			}

			// modify the solution for this row as well (right part of the '=').
			argv_1874->argv_1574 (_mul_result, _multiplicande, *argv_3955[_reference_row].argv_3553); 
			argv_1874->argv_1589 (*argv_3955[_row_concerned].argv_3553, *argv_3955[_row_concerned].argv_3553, _mul_result);
			argv_1874->argv_1573 (*argv_3955[_row_concerned].argv_3553, *argv_3955[_row_concerned].argv_3553, argv_2490);
		}
	}
	return (bret);	
}

bool argv_914::argv_1299 (uint32_t _ref_row, vector<argv_2793 *>& _base_factor, vector<vector<argv_2793 *> >& _vv_equation, vector<argv_2793 *>& _v_solution) {
	bool bret = true;

	argv_2793 unused_result, unused_mul_result;
	argv_1874->argv_1568 (unused_result);
	argv_1874->argv_1568 (unused_mul_result);

	// because we have more equations than unknown, we must argv_3607 the reduction loop sooner
	uint32_t nb_relevant_row = argv_2863;
	list<uint32_t>::iterator liter;
	
	for (liter=argv_2155.begin() ; liter != argv_2155.end() ; ++liter) {
		if ((*liter) != _ref_row)  {
			fprintf (argv_1544, "argv_1299: ref_row=%u, chosen_row=%u\r\n", _ref_row, *liter);
			bret = argv_1300 (_ref_row, *liter, unused_result, unused_mul_result);
			
			if (bret == false) {
				fprintf (argv_1544, "+++ ERROR: argv_914::argv_1299 - argv_1300 failed !\r\n");
				fflush (argv_1544);
				bret = false;
				break;
			}/*
			else {
				char argv_3828[MAX_PATH];
				sprintf (argv_3828, "after eliminating the unknown from row %u using pivot at index %u", i, _ref_row);
				argv_1227 (argv_3828, _ref_row);
			}*/
		}
	}

	argv_1227 ("after elimination finished");

	argv_1874->argv_1551 (unused_result);
	argv_1874->argv_1551 (unused_mul_result);
	return (bret);
}

void argv_914::argv_1205 (const char * _msg) {
	list<uint32_t>::iterator liter;	
	fprintf (argv_1544, "------------ %s --------------\r\n", _msg);
	fprintf (argv_1544, "<");
	for (liter=argv_2155.begin() ; liter != argv_2155.end() ; ++liter) {
		fprintf (argv_1544, "%u ", *liter);	
	}
	fprintf (argv_1544, ">\r\n");
}

bool argv_914::argv_3344 (vector<argv_2793 *>& _base_factor, vector<vector<argv_2793 *> >& _vv_equation, vector<argv_2793 *>& _v_solution, vector<argv_2793 *>& _v_result) {
	bool bret = false;
	fprintf (argv_1544, "reduce using gauss pivot\r\n");
	bret = argv_662 (_vv_equation, _v_solution);
	if (bret == false) {
		fprintf (argv_1544, "+++ ERROR: argv_3344 - argv_662 failed !\r\n");
	}	
	else {
		list<uint32_t>::iterator liter;
		list<uint32_t>::iterator liter_2_erase;
		bool normalization_done = false;
		argv_2172  = 0;
		argv_1205 ("before starting Gauss");
		for (uint32_t current_row=0 ; current_row < argv_2863 ; current_row++) {
			normalization_done = false;
			// try to find a pivot that works
			for (liter=argv_2155.begin() ; liter != argv_2155.end() ; ) {
				if (argv_1874->argv_1554 (*argv_3955[*liter].argv_3945[argv_2172], 0) != 0) {
					string stmp = argv_1874->argv_3966 (*argv_3955[*liter].argv_3945[argv_2172]);
					fprintf (argv_1544, "chosen pivot located at index %u (argv_3960=%s)\r\n", *liter, stmp.c_str());
					bret = argv_1299 (*liter, _base_factor, _vv_equation, _v_solution);
					if (bret == false) {
						++liter;
						fprintf (argv_1544, "+++ ERROR: argv_3344 failed with pivot at index %u !\r\n", *liter);
					}
					else { // erase the pivot index because it was succesfully used
						normalization_done	= true;
						liter_2_erase		= liter;
						++liter;
						fprintf (argv_1544, "erasing index %u\r\n", *liter_2_erase);
						argv_2155.erase (liter_2_erase); // this index was used as a pivot => remove it from available list
						argv_1205 ("after erase");
						break;
					}
				}
				else {
					++liter;
				}
			}	
			
			if (normalization_done == false) {
				fprintf (argv_1544, "+++ ERROR: argv_3344 - failed to normalize column");
				break;
			}
			else {
				argv_2172++;
			}
		}
	}
	return (bret);
}

void argv_914::compute_row_remaining_sum (argv_2793 _mul_result, vector<argv_2793 *>& _v_result, uint32_t _current_row, uint32_t _current_column, argv_2793 _somme) {
	fprintf (argv_1544, "compute_row_remaining_sum(current_row=%u, current_column=%u)\r\n", _current_row, _current_column);
	fflush (argv_1544);

	argv_1874->argv_1585 (_somme, 0);
	// for all the columns located on the right of the argv_1106 column

	for (uint32_t i=_current_column+1 ; i<argv_2863 ; i++) {
		argv_1874->argv_1574 (_mul_result, *argv_3955[_current_row].argv_3945[i], *_v_result[i]);
		{
			string s1 = argv_1874->argv_3966 (*argv_3955[_current_row].argv_3945[i]);
			string s2 = argv_1874->argv_3966 (*_v_result[i]);
			string s3 = argv_1874->argv_3966 (_mul_result);
			fprintf (argv_1544, "%s * %s = %s, ", s1.c_str(), s2.c_str(), s3.c_str());
		}
		argv_1874->argv_1548 (_somme, _somme, _mul_result);
		argv_1874->argv_1573 (_somme, _somme, argv_2490);
	}
	fprintf (argv_1544, "\r\n");

	string somme_s = argv_1874->argv_3966 (_somme);
	fprintf (argv_1544, "[unknown_column=%d|current_row=%d] between [%d..%d] -> sum = %s\r\n", 
		_current_column, _current_row, _current_column+1, argv_2863, somme_s.c_str());
	fflush (argv_1544);
}

// argv_3402 vector is supposed to have been argv_3254 by the caller
bool argv_914::argv_1884 (vector<argv_2793 *>& _base_factor, vector<vector<argv_2793 *> >& _vv_equation, vector<argv_2793 *>& _v_solution, vector<argv_2793 *>& _v_result) {
	bool bret = true;
	fprintf (argv_1544, "argv_1884...[STARTING]\r\n");
	fflush (argv_1544);

	if (_v_result.size() != _base_factor.size()) {
		fprintf (argv_1544, "+++ ERROR: argv_914::argv_1884 - argv_3402 vector has invalid size !\r\n");
		bret = false;		
	}
	else if (argv_2875 == 0) {
		fprintf (argv_1544, "+++ ERROR: argv_914::argv_1884 - invalid number of rows !\r\n");
		bret = false;
	}
	else { 
		int32_t current_column = argv_2863 - 1;
		argv_2793 cache_box, somme, result_tmp; // just to avoid creation/deletion each argv_3825
		argv_1874->argv_1568 (cache_box);
		argv_1874->argv_1568 (somme);
		argv_1874->argv_1568 (result_tmp);

		// argv_3554 each unknown from right to left on the diagonal matrix
		// notice that we must not change the column when we process an equation that is not
		// located within the square matrix.
		for (int32_t current_row=argv_2875-1 ; current_row >=0 ; current_row--) {
			compute_row_remaining_sum (cache_box, _v_result, current_row, current_column, somme);	

			argv_1874->argv_1589 (result_tmp, *argv_3955[current_row].argv_3553, somme);
			{
				string s1 = argv_1874->argv_3966 (result_tmp);
				string s2 = argv_1874->argv_3966 (somme);
				fprintf (argv_1544, "current_row=%u, current_column=%u, sum =%s, sub argv_3402 = %s\r\n", current_row, current_column, s2.c_str(), s1.c_str());
			}
			argv_1874->argv_1573 (result_tmp, result_tmp, argv_2490);
			{
				string s1 = argv_1874->argv_3966 (result_tmp);
				fprintf (argv_1544, "mod argv_3402 = %s\r\n", s1.c_str());
			}
			bret = argv_1874->argv_3087 (result_tmp, *argv_3955[current_row].argv_3945[current_column], argv_2490, *_v_result[current_column]);
			if (bret == false) {
				fprintf (argv_1544, "+++ ERROR: argv_914::argv_1884 - argv_3087 failed !\r\n");
				break;
			}
			else {
				string s1 = argv_1874->argv_3966 (*_v_result[current_column]);
				fprintf (argv_1544, "unknown at column %u = %s\r\n", current_column, s1.c_str());
				bret = true;
			}

			if (current_row < argv_2863) {
				current_column--;
			}
		}

		argv_1874->argv_1551 (cache_box);
		argv_1874->argv_1551 (somme);
		argv_1874->argv_1551 (result_tmp);
	}
	return (bret);
}

bool argv_914::argv_862 (vector<argv_2793 *>& _v_result, vector<vector<argv_2793 *> >& _vv_equation, vector<argv_2793 *>& _v_solution) {
	bool bret = true;
	argv_2793 computed_result;
	argv_2793 mul_result;
	argv_1874->argv_1568 (computed_result);	
	argv_1874->argv_1568 (mul_result);	
	string s1, s2, s3;

	fprintf (argv_1544, "checking resolution coherency\r\n");
	for (uint32_t i=0 ; i<argv_2875 ; i++) {
		argv_1874->argv_1585 (computed_result, 0);
		for (uint32_t k=0 ; k<argv_2863 ; k++) {
			argv_1874->argv_1574 (mul_result, *_vv_equation[i][k], *_v_result[k]);
			{
				s1 = argv_1874->argv_3966 (*_vv_equation[i][k]);
				s2 = argv_1874->argv_3966 (*_v_result[k]);
				s3 = argv_1874->argv_3966 (mul_result);
				if ((k+1) >= argv_2863) {
					fprintf (argv_1544, "(%s * %s) = ", s1.c_str(), s2.c_str());
				}
				else {
					fprintf (argv_1544, "(%s * %s) + ", s1.c_str(), s2.c_str());
				}
			}
			argv_1874->argv_1548 (computed_result, computed_result, mul_result);
		}
		argv_1874->argv_1573 (computed_result, computed_result, argv_2490);
		s1 = argv_1874->argv_3966 (computed_result);
		s2 = argv_1874->argv_3966 (*_v_solution[i]);
		fprintf (argv_1544, "%s\r\n", s1.c_str());

		if (argv_1874->argv_1553 (computed_result, *_v_solution[i]) != 0) {
			fprintf (argv_1544, "+++ ERROR: incoherency detected at argv_2173 %u (computed argv_3960=%s, expected %s)\r\n", i, s1.c_str(), s2.c_str());
		}
		else {
			fprintf (argv_1544, "argv_2173 %u OK (computed argv_3960=%s, expected %s)\r\n", i, s1.c_str(), s2.c_str());
		}
	}

	argv_1874->argv_1551 (mul_result);
	argv_1874->argv_1551 (computed_result);
	return (bret);
}

bool argv_914::argv_1055 (vector<vector<argv_2793 *> >& _vv_equation, vector<argv_2793 *>& _v_solution) {
	bool bret	= true;
	uint32_t i		= 0;
	vector<argv_2793 *> v;
	fprintf (argv_1544, "argv_1055 - argv_2875=%d, argv_2863=%d\r\n", argv_2875, argv_2863);	fflush (argv_1544);
	argv_3985.clear ();

	for (i=0 ; i<argv_2875 ; i++) {
		v.clear ();
		v.resize (argv_2863);
		for (uint32_t k=0 ; k<argv_2863 ; k++) {
			v[k] = (argv_2793*) malloc (sizeof(argv_2793));
			if (v[k] == NULL) {
				bret = false;
				break;
			}
			else { // memory allocation succeeded
				argv_1874->argv_1568 (*v[k]);
				argv_1874->fp_mpz_set (*v[k], *_vv_equation[i][k]);
			}		
		}
		argv_3985.push_back (v);
	}
	
	argv_3957.clear ();
	argv_3957.resize (argv_2875);
	for (i=0 ; i<argv_2875 ; i++) {
		argv_3957[i] = (argv_2793*) malloc (sizeof(argv_2793));
		if (argv_3957[i] == NULL) {
			bret = false;
			break;
		}
		else { // memory allocation succeeded
			argv_1874->argv_1568 (*argv_3957[i]);
			argv_1874->fp_mpz_set (*argv_3957[i], *_v_solution[i]);
		}		
	}
	return (bret);
}

// the argv_742 argv_1387 vector contains the primes
// the argv_3402 vector is supposed to have been allocated by the caller to the proper size
/*
bool argv_914::argv_3554 (argv_2793 _modulo, vector<argv_2793 *>& _base_factor, vector<vector<argv_2793 *> >& _vv_equation, vector<argv_2793 *>& _v_solution, vector<argv_2793 *>& _v_result) {
	bool bret = true;
	fprintf (argv_1544, "solving linear system\r\n");	fflush (argv_1544);

	argv_2863	= _base_factor.size ();
	argv_2875		= _vv_equation.size ();
	{
		string s1 = argv_1874->argv_3966 (_modulo);
		fprintf (argv_1544, "argv_2488 = %s, argv_2875=%u, argv_2863=%u\r\n", s1.c_str(), argv_2875, argv_2863);
	}
	argv_1874->argv_1590 (argv_2490, _modulo, 1);
	argv_1055 (_vv_equation, _v_solution);

	bret = argv_3344 (_base_factor, argv_3985, argv_3957, _v_result);
	if (bret == false) {
		fprintf (argv_1544, "+++  ERROR: argv_914::argv_3554 - argv_3344 failed !\r\n");
	}
	else {
		fprintf (argv_1544, "argv_3344...[DONE]\r\n");
		bret = argv_1884 (_base_factor, argv_3985, argv_3957, _v_result);
		if (bret == false) {
			fprintf (argv_1544, "+++ ERROR: argv_914::argv_3554 - argv_1884 failed !\r\n");
		}
		else {
			bret = argv_862 (_v_result, _vv_equation, _v_solution);
		}
	}
	return (bret);
}
*/

bool argv_914::argv_3555 (vector<argv_2793 *>& _v_result, vector<vector<argv_2793 *> >& _vv_equation, vector<argv_2793 *>& _v_solution) {
	bool bret = false;
	argv_1874->argv_1585 (*_v_result[0], 886);
	argv_1874->argv_1585 (*_v_result[1], 102);
	argv_1874->argv_1585 (*_v_result[2], 694);
	argv_1874->argv_1585 (*_v_result[3], 788);
	argv_1874->argv_1585 (*_v_result[4], 1);
	argv_1874->argv_1585 (*_v_result[5], 357);
	return (bret);
}

// the argv_742 argv_1387 vector contains the primes
// the argv_3402 vector is supposed to have been allocated by the caller to the proper size
bool argv_914::argv_3554 (argv_2793 _modulo, vector<argv_2793 *>& _base_factor, vector<vector<argv_2793 *> >& _vv_equation, vector<argv_2793 *>& _v_solution, vector<argv_2793 *>& _v_result) {
	bool bret = true;
	fprintf (argv_1544, "solving linear system\r\n");	fflush (argv_1544);

	argv_2863	= _base_factor.size ();
	argv_2875		= _vv_equation.size ();
	{
		string s1 = argv_1874->argv_3966 (_modulo);
		fprintf (argv_1544, "argv_2488 = %s, argv_2875=%u, argv_2863=%u\r\n", s1.c_str(), argv_2875, argv_2863);
	}
	argv_1874->argv_1590 (argv_2490, _modulo, 1);
	argv_1055 (_vv_equation, _v_solution);

	argv_3555 (_v_result, _vv_equation, _v_solution);	

	bret = argv_862 (_v_result, _vv_equation, _v_solution);
	return (bret);
}




