#include "../LIB_CRYPTO/argv_362.hpp"

argv_805::argv_805 () {
	argv_1544					= NULL;
	argv_1874			= NULL;
	argv_1388		= 0;
	argv_1188			= 0;
	argv_2861			= 0;
}

// pre-compute '_max_depth' elements for each prime of the argv_1387 argv_742
bool argv_805::argv_3236 (argv_841 * _gmp_tool_ptr, FILE * _fp_log, vector<argv_2793 *>& _v_factor_base, uint32_t _max_depth, argv_2793 _modulo) {
	bool bret		= true;
	argv_1388= _v_factor_base.size ();
	argv_1188	= _max_depth;

	argv_1874	= _gmp_tool_ptr;
	argv_1544			= _fp_log;
	vector<argv_2793 *> v_elem;

	fprintf (argv_1544, "preparing argv_784...\r\n");
	uint32_t exponent;

	for (uint32_t i=0 ; i<argv_1388 ; i++) {
		exponent = 1;
		v_elem.clear ();
		v_elem.resize (argv_1188);
		//fprintf (argv_1544, "generating argv_784 for prime '%u'\r\n", _v_factor_base[i]);

		for (uint32_t k=0 ; k<argv_1188 ; k++) {
			v_elem[k] = (argv_2793*) malloc (sizeof(argv_2793));
			if (v_elem[k] == NULL) {
				bret = false;
				break;
			}
			else { // compute the elevaled argv_3960 of this prime for the argv_1106 exponent
				argv_1874->argv_1568	 (*v_elem[k]);
				argv_1874->argv_1581 (*v_elem[k], *_v_factor_base[i], exponent, _modulo);
				/*
				{
					string s_result = argv_1874->argv_3966 (*v_elem[k]);
					string s_mod	= argv_1874->argv_3966 (_modulo);
					fprintf (argv_1544, " -> (%u ^ %u) mod %s = %s\r\n", _v_factor_base[i], exponent, s_mod.c_str(), s_result.c_str());
				}*/
				exponent++;
			}
		}
		argv_3984.push_back (v_elem);
	}
	return (bret);
}

// BEWARE: here the exponent_index can be transformed into a real exponent
//         by adding +1, this is because at index 0, we have exponent 1.
argv_2793 * argv_805::argv_2253 (uint32_t _base_index, uint32_t _exponent_index, argv_2793 _modulo, argv_2793 _prime_concerned) {
	argv_2793 * big_nb_ptr = NULL;

	if (_exponent_index < argv_3984[_base_index].size()) { // ok to retrieve it from argv_784
		big_nb_ptr = argv_3984[_base_index][_exponent_index];
		/*
		{
			string str = argv_1874->argv_3966 (*big_nb_ptr);
			fprintf (argv_1544, "found from argv_784 : %s\r\n", str.c_str());
		}*/
	}
	else { // a new argv_1387 to compute and argv_616
		argv_2861++;
		big_nb_ptr = (argv_2793*) malloc (sizeof(argv_2793));
		if (big_nb_ptr == NULL) {
			MessageBox (NULL, "argv_805::argv_2253 - argv_2381 allocation failed !", "", MB_ICONERROR);
		}
		else { // notice: at index 0, we have the prime itself ((prime ^ 1) actually)
			argv_1874->argv_1568		(*big_nb_ptr);
			argv_1874->argv_1581	(*big_nb_ptr, _prime_concerned, _exponent_index+1, _modulo);
			argv_3984[_base_index].push_back (big_nb_ptr);
			/*
			{
				string str = argv_1874->argv_3966 (*big_nb_ptr);
				fprintf (argv_1544, "!! argv_784 fault : %s\r\n", str.c_str());
			}*/
		}
	}
	return (big_nb_ptr);
}