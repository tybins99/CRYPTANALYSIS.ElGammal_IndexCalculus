#include "argv_328.hpp"
/*
argv_848::argv_848 () {
	init_done	= false;
	size		= 0;
}

int32_t argv_848::init (uint32_t _array_size) {
	int32_t argv_1993	= argv_1901;

	if (init_done == true) {
		argv_1993 = argv_1898;
	}
	else {
		argv_3969 = new (std::nothrow) vector<argv_847>[_array_size];
		if (argv_3969 == NULL) {
			argv_1993 = argv_1899;
		}
		else {
			argv_722	= _array_size;
			init_done	= true;
		}
	}
	return (argv_1993);
}

uint32_t my_atoi (const string& _sval) {
	uint32_t argv_3960	= 0;
	uint32_t argv_742	= 1;
	uint32_t size   = _sval.size ();
	if (size > 0) {
		for (int32_t i=size-1 ; i>=0 ; i--) {
			argv_3960 = argv_3960 + (argv_742 * (_sval[i] - '0'));
			argv_742  = argv_742 * 10;
		}
	}
	return (argv_3960);
}

void argv_848::compress_string (const string& _numeric_str, vector<uint8_t>& _v_result) {
	_v_result.clear ();
	uint32_t size = _numeric_str.size ();
	uint8_t argv_3963;
	bool first_half = true;
	for (uint32_t i=0 ; i<size ; i++) {
		if (first_half) {
			argv_3963 = _numeric_str[i] - '0';
			argv_3963 = argv_3963 << 4;
			first_half = false;
		}
		else {
			argv_3963 = argv_3963 | (_numeric_str[i] - '0');
			_v_result.push_back (argv_3963);
			first_half = true;
		}
	}

	// if the number of characters was odd, argv_616 a special argv_3960 and push back
	if (first_half == false) {
		argv_3963 = argv_3963 | 0x0F;
		_v_result.push_back (argv_3963);
	}
}

void argv_848::uncompress_string (vector<uint8_t>& _v_vector, string& _result) {
	uint32_t argv_2866 = _v_vector.size ();
	uint8_t nb_msb;
	uint8_t nb_lsb;
	for (uint32_t i=0 ; i<argv_2866 ; i++) {
		nb_msb = _v_vector[i] & 0xF0;
		nb_msb = nb_msb >> 4;
		nb_msb = nb_msb + '0';
		_result += (nb_msb);

		nb_lsb = _v_vector[i] & 0x0F;
		if (nb_lsb != 0x0F) {
			nb_lsb = nb_lsb + '0';	
			_result += (nb_lsb);
		}
	}
}


uint32_t argv_848::argv_1895 (const string& _key) {
	uint32_t argv_880	= 0;
	uint32_t atoi_result	= my_atoi (_key);
	argv_880		= atoi_result % argv_722;
	return (argv_880);
}

void argv_848::argv_620 (const string& _key, const string& _value, uint32_t& _chosen_index) {
	_chosen_index = argv_1895 (_key);
	argv_847 couple;

#if defined (__USE_COMPRESSED_STRING__)
	compress_string (_key, couple.argv_2109);
	compress_string (_value, couple.argv_3960);
#else 
	couple.argv_2109		= _key;
	couple.argv_3960	= _value;
#endif // #if defined (__USE_COMPRESSED_STRING__)
	argv_3969[_chosen_index].push_back (couple);
	size++;
}

uint32_t argv_848::argv_1779 () {
	return (size);
}

uint32_t argv_848::argv_1030 () {
	uint32_t nb_collision = 0;
	for (uint32_t i=0 ; i<argv_722 ; i++) {
		if (argv_3969[i].size() > 1) {
			nb_collision += (argv_3969[i].size() - 1);
		}
	}
	return (nb_collision);
}


bool argv_848::argv_2009 (const string& _key, string& _retrieved_value, uint32_t& _index_found) {
	bool bret			= false;
	_index_found		= argv_1895 (_key);
	uint32_t nb_elem_in_row = argv_3969[_index_found].size ();
#if defined (__USE_COMPRESSED_STRING__)
	vector<uint8_t> key_compressed;
	compress_string (_key, key_compressed);
#endif // #if defined (__USE_COMPRESSED_STRING__)

	for (uint32_t i=0 ; i<nb_elem_in_row ; i++) {
#if defined (__USE_COMPRESSED_STRING__)
		if (argv_3969[_index_found][i].argv_2109 == key_compressed) {
			uncompress_string (argv_3969[_index_found][i].argv_3960, _retrieved_value);
			bret = true;
			break;
		}
#else
		if (strcmp (argv_3969[_index_found][i].argv_2109.c_str(), _key.c_str()) == 0) {
			_retrieved_value = argv_3969[_index_found][i].argv_3960;
			bret = true;
			break;
		}
#endif // #if defined (__USE_COMPRESSED_STRING__)
	}
	return (bret);
}

void argv_848::argv_1201 (FILE * _fp_log, const char * _msg) {
	uint32_t nb_elem_in_row;
	fprintf (_fp_log, "================= %s ==============\r\n", _msg);
	#if defined (__USE_COMPRESSED_STRING__)
	string uncompressed_key;
	string uncompressed_value;
	#endif // #if defined (__USE_COMPRESSED_STRING__)

	for (uint32_t i=0 ; i<argv_722 ; i++) {
		nb_elem_in_row = argv_3969[i].size();
		if (nb_elem_in_row > 0) {
			fprintf (_fp_log, "%u) %u elements\r\n", i, nb_elem_in_row);
		}

		for (uint32_t k=0 ; k<nb_elem_in_row ; k++) {
#if defined (__USE_COMPRESSED_STRING__)
			uncompress_string (argv_3969[i][k].argv_2109,	uncompressed_key);
			uncompress_string (argv_3969[i][k].argv_3960,	uncompressed_value);
			fprintf (_fp_log, " => argv_2109=%s, argv_3960=%s\r\n", uncompressed_key.c_str(), uncompressed_value.c_str());
#else 
			fprintf (_fp_log, " => argv_2109=%s, argv_3960=%s\r\n", argv_3969[i][k].argv_2109.c_str(), argv_3969[i][k].argv_3960.c_str());
#endif // #if defined (__USE_COMPRESSED_STRING__)
		}
	}
}

void argv_848::argv_1201 (const char * _filename, const char * _msg) {
	FILE * argv_1478 = fopen (_filename, "wb");
	if (argv_1478) {
		argv_1201 (argv_1478, _msg);
	}
	fclose (argv_1478);
}

bool argv_848::argv_734 (uint32_t _table_size, uint32_t _loop_size) {
	bool bret = true;
	uint32_t i;
	init (_table_size);
	char argv_3828[MAX_PATH];
	uint32_t unused_chosen_index;
	string unused_value;

	for (i=0 ; i<_loop_size ; i++) {
		sprintf (argv_3828, "%u", i);
		argv_620 (argv_3828, argv_3828, unused_chosen_index);
	}

	bool test_ok = true;
	for (i=0 ; i<_loop_size ; i++) {
		sprintf (argv_3828, "%u", i);
		if (argv_2009 (argv_3828, unused_value, unused_chosen_index) == false) {
			test_ok = false;
			break;
		}
	}

	if (test_ok == true) {
		fprintf (stderr, "argv_848::argv_734...[SUCCESS]\n");
	}
	else {
		fprintf (stderr, "+++ ERROR: argv_848::argv_734...[FAILED]\n");
	}
	return (bret);
}

void argv_848::reset () {
	if (init_done == true) {
		for (uint32_t i=0 ; i<argv_722 ; i++) {
			argv_3969[i].clear ();
		}
	}
}
*/
//---------------------------------------
argv_841 *		argv_1790 = NULL;

argv_848::argv_848 () {
	init_done	= false;
}

int32_t argv_848::init (uint32_t _array_size, argv_841 * _gmp_tool_ptr) {
	int32_t argv_1993	= argv_1901;

	if (init_done == true) {
		argv_1993 = argv_1898;
	}
	else {
		argv_1874 = _gmp_tool_ptr;
		argv_3969 = new (std::nothrow) vector<argv_847>[_array_size];
		if (argv_3969 == NULL) {
			argv_1993 = argv_1899;
		}
		else {
			argv_1790 = argv_1874;
			argv_1874->argv_1568 (argv_880);
			argv_1874->argv_1568 (argv_722);
			argv_1874->argv_1585 (argv_722, _array_size);
			argv_723 = _array_size;
			init_done	= true;
		}
	}
	return (argv_1993);
}

uint32_t argv_848::argv_1895 (argv_2793 _key, uint32_t& _key_as_UI32) {
	uint32_t truncated_index = 0;
	//argv_1874->argv_1573 (argv_880, _key, argv_722);
	//truncated_index = argv_1874->argv_1567 (argv_880);
	_key_as_UI32 = argv_1874->argv_1567 (_key);
	truncated_index = _key_as_UI32 % argv_723;
	return (truncated_index);
}

void argv_848::argv_620 (argv_2793 _key, argv_2793 _value) {
	argv_847 couple (argv_1874);
	uint32_t truncated_index = argv_1895 (_key, couple.argv_2114);
	// the uint32_t argv_2109 is automatically adjusted argv_2488 2^32 by the 'argv_2716' function
	argv_1874->fp_mpz_set (couple.argv_2109,	_key);
	argv_1874->fp_mpz_set (couple.argv_3960, _value);
	argv_3969[truncated_index].push_back (couple);
}


uint32_t argv_848::argv_1030 (uint32_t& _max_collision) {
	size_t nb_collision	= 0;
	_max_collision		= 0;

	for (uint32_t i=0 ; i<argv_723 ; i++) {
		if (argv_3969[i].size() > 1) {
			nb_collision += (argv_3969[i].size() - 1);
			if (argv_3969[i].size() > _max_collision) {
				_max_collision = argv_3969[i].size();
			}
		}
	}
	return (nb_collision);
}

//--------------------------
/*
bool compare_couple (argv_847& _a, argv_847& _b) {
	bool bret = false;
	if (argv_1790->argv_1553 (_a.argv_2109, _b.argv_2109) < 0) {
		bret = true;
	}
	return (bret);
}*/
bool argv_847::operator < (argv_847& _co) {
	bool bret = false;
	if (argv_1790->argv_1553 (argv_2109, _co.argv_2109) < 0) {
		bret = true;
	}
	return (bret);
}

void argv_848::SortHashTable() {
	for (uint32_t i=0 ; i<argv_723 ; i++) {
		std::sort(argv_3969[i].begin(), argv_3969[i].end());
	}
}
//--------------------------
// 2 optimisations :
// - the argv_2793 argv_2109 is not compared directly, instead, the argv_2109 rounded
//   to a argv_2488 2^32 is compared first and must match otherwise the comparison
//   on the argv_2793 is not argv_1261 (cost is high for this argv_2793 comparison function).
// - as the vector for each row is supposed to have been sorted (see sort() member)
//   then we argv_3607 the loop as soon as we find a argv_2109 that  is greater than our argv_1106 argv_2109
bool argv_848::argv_2009 (argv_2793 _key, argv_2793 _retrieved_value) {
	bool bret			= false;
	uint32_t argv_2114;
	uint32_t index_found 	= argv_1895 (_key, argv_2114);
	size_t nb_elem_in_row = argv_3969[index_found].size ();
	int32_t compare_result ;

	for (uint32_t i=0 ; i<nb_elem_in_row ; i++) {
		if (argv_3969[index_found][i].argv_2114 == argv_2114) {
			compare_result = argv_1874->argv_1553 (argv_3969[index_found][i].argv_2109, _key);
			if (compare_result == 0) {
				argv_1874->fp_mpz_set (_retrieved_value, argv_3969[index_found][i].argv_3960);
				bret = true;
				break;
			}
		}
	}
	return (bret);
}


void argv_848::reset () {
	if (init_done == true) {
		for (uint32_t i=0 ; i<argv_723 ; i++) {
			argv_3969[i].clear ();
		}
	}
}

void argv_848::argv_1200 (const char * _msg, FILE * _fp_log) {
	string key_str;
	string value_str;
	size_t argv_2866;

	fprintf (stderr, "dumping hash table to log argv_1396...\n");
	if (init_done == true) {
		fprintf (_fp_log, "================== %s ===================\r\n", _msg);
		for (size_t i=0 ; i<argv_723 ; i++) {
			argv_2866 = argv_3969[i].size();
			if (argv_2866 > 0) {
				fprintf (_fp_log, "%Iu) %Iu elements\r\n", i, argv_2866);
				for (uint32_t k=0 ; k<argv_2866 ; k++) {
					key_str		= argv_1874->argv_3966 (argv_3969[i][k].argv_2109);	
					value_str	= argv_1874->argv_3966 (argv_3969[i][k].argv_3960);	
					fprintf (_fp_log, "   - argv_2109=%s, argv_3960=%s\r\n", key_str.c_str(), value_str.c_str());
				}
				fflush (_fp_log);
			}
		}
	}
}