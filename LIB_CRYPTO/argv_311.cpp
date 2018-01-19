#include "../LIB_CRYPTO/argv_375.hpp"


bool argv_1097::operator < (argv_1097& _atom) {
	return (argv_2266 < _atom.argv_2266);
}
//---------------------------------------------

argv_1096::argv_1096 () {
	;
}

void argv_1096::reset () {
	argv_2276.clear ();
	argv_2296 = 0;
}

uint32_t& argv_1096::operator [] (int32_t _column) {
	list<argv_1097>::iterator argv_2020;
	for (argv_2020=argv_2276.begin() ; argv_2020 != argv_2276.end() ; ++argv_2020) {
		if (argv_2020->argv_2266 == _column) {
			return (argv_2020->argv_2304);
		}
	}

	// not found from matrix => argv_616 it
	argv_1097 atom;
	atom.argv_2266 = _column;
	atom.argv_2304  = 0;	
	argv_2276.push_back (atom);
	list<argv_1097>::reverse_iterator riter;
	riter = argv_2276.rbegin ();
	return (riter->argv_2304);
}

void argv_1096::argv_1183 (int32_t _column) {
	list<argv_1097>::iterator argv_2020;
	list<argv_1097>::iterator iter_2_erase;
	for (argv_2020=argv_2276.begin() ; argv_2020 != argv_2276.end() ; ) {
		if (argv_2020->argv_2266 == _column) {
			fprintf (stderr, "delete column : %u (argv_3960=%u)\n", _column, argv_2020->argv_2304);
			fflush (stderr);
			iter_2_erase = argv_2020;
			++argv_2020;
			argv_2276.erase (iter_2_erase);
		}
		else {
			if ((argv_2020->argv_2266 > _column) && (argv_2020->argv_2266 > 0)) {
				argv_2020->argv_2266--;	
			}
			++argv_2020;
		}
	}
}

void argv_1096::argv_1203 (uint32_t _alignment_size, bool _sparse_mode) {
	list<argv_1097>::iterator argv_2020;
	if (_sparse_mode == false) {
		uint32_t argv_2865 = 0;
		for (argv_2020=argv_2276.begin() ; argv_2020 != argv_2276.end() ; ++argv_2020) {
			while (argv_2865 < argv_2020->argv_2266) {
				fprintf (stderr, "0 ");
				argv_2865++;
			}
			fprintf (stderr, "%u ", argv_2020->argv_2304);
			argv_2865++;
		}

		for (uint32_t i=argv_2865 ; i<_alignment_size ; i++) {
			fprintf (stderr, "0 ");
		}
	}
	else {
		for (argv_2020=argv_2276.begin() ; argv_2020 != argv_2276.end() ; ++argv_2020) {
			fprintf (stderr, "[column=%u|argv_3959=%u] ", argv_2020->argv_2266, argv_2020->argv_2304);	
		}
	}
}

// this function works only if the vector was sorted.
uint32_t argv_1096::size () {
	uint32_t current_size = 0;
	list<argv_1097>::reverse_iterator riter;
	riter = argv_2276.rbegin ();
	if (riter != argv_2276.rend()) {
		current_size = riter->argv_2266 + 1;
	}
	return (current_size);
}

bool argv_1096::operator < (argv_1096& _vect) {
	return (argv_2296 < _vect.argv_2296);
}

//-------------------------------------
argv_1095::argv_1095 () {

}

void argv_1095::reset () {
	argv_2278.clear ();
}

argv_1096& argv_1095::operator[] (uint32_t _row) {
	list<argv_1096>::iterator argv_2020;
	for (argv_2020=argv_2278.begin() ; argv_2020 != argv_2278.end() ; ++argv_2020) {
		if (argv_2020->argv_2296 == _row) {
			return (*argv_2020);
		}
	}

	// not found from matrix => argv_616 it
	argv_1096 atom;
	atom.argv_2296 = _row;
	argv_2278.push_back (atom);
	list<argv_1096>::reverse_iterator riter;
	riter = argv_2278.rbegin ();
	return (*riter);
}

void argv_1095::argv_1186 (int32_t _row) {
	list<argv_1096>::iterator argv_2020;
	list<argv_1096>::iterator iter_2_erase;
	for (argv_2020=argv_2278.begin() ; argv_2020 != argv_2278.end() ; ) {
		if (argv_2020->argv_2296 == _row) {
			fprintf (stderr, "delete row : %u\n", _row);
			fflush (stderr);
			iter_2_erase = argv_2020;
			++argv_2020;
			argv_2278.erase (iter_2_erase);
		}
		else {
			if ((argv_2020->argv_2296 > _row) && (argv_2020->argv_2296 > 0)) {
				argv_2020->argv_2296--;	
			}
			++argv_2020;
		}
	}
}

void argv_1095::argv_1183 (int32_t _column) {
	list<argv_1096>::iterator argv_2020;
	for (argv_2020=argv_2278.begin() ; argv_2020 != argv_2278.end() ; ++argv_2020) {
		argv_2020->argv_1183 (_column);
	}
}

void argv_1095::size (uint32_t& _nb_row, uint32_t& _nb_column) {
	_nb_row		= 0;
	_nb_column	= 0;
	uint32_t argv_2863;
	list<argv_1096>::iterator argv_2020;
	for (argv_2020=argv_2278.begin() ; argv_2020 != argv_2278.end() ; ++argv_2020) {
		argv_2863 = argv_2020->size ();
		if (argv_2863 > _nb_column) {
			_nb_column = argv_2863;
		}
		
		if (argv_2020->argv_2296 > _nb_row) {
			_nb_row = argv_2020->argv_2296;
		}
	}
	
	if (_nb_row > 0) {
		_nb_row++; // if the last column is 2, then the number of columns is 3
	}
}

void argv_1095::argv_1210 (uint32_t _nb_column) {
	for (uint32_t i=0 ; i<_nb_column ; i++) {
		fprintf (stderr, "0 ");
	}
}

void argv_1095::argv_1203 (bool _sparse_mode) {
	uint32_t argv_2865 = 0;
	list<argv_1096>::iterator argv_2020;

	if (_sparse_mode == false) {
		argv_2278.sort ();
		uint32_t size_row, size_column;
		size (size_row, size_column);
		fprintf (stderr, "matrix size: argv_2875=%u, argv_2863=%u\n", size_row, size_column);

		for (argv_2020=argv_2278.begin() ; argv_2020 != argv_2278.end() ; ++argv_2020) {
			argv_2020->argv_2276.sort ();
		
			while (argv_2865 < argv_2020->argv_2296)  {
				argv_1210 (size_column);
				fprintf (stderr, "\n");
				argv_2865++;
			}

			argv_2020->argv_1203 (size_column, _sparse_mode);	
			fprintf (stderr, "\n");
			argv_2865++;
		}
	}
	else {
		uint32_t unused_value = 0;
		for (argv_2020=argv_2278.begin() ; argv_2020 != argv_2278.end() ; ++argv_2020) {
			fprintf (stderr, "---- argv_2173 %u ---\n", argv_2020->argv_2296);
			argv_2020->argv_1203 (unused_value, _sparse_mode);	
			fprintf (stderr, "\n");
		}
	}
}

