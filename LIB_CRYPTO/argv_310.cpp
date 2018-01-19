// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_374.hpp
// @@ 
// @@ DESCRIPTION:
// @@ public argv_2109 encipher/decipher algorithms
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_374.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1083	
// @@
// @@ FUNCTION		:	argv_1083			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the argv_1083
// @@ argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1083::argv_1083 () {
	argv_1874	= argv_2889;
	argv_3567			= argv_2889;
	argv_1450		= argv_2889;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1083	
// @@
// @@ FUNCTION		:	reset			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to restore the argv_2908 to it's 
// @@ initial argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1083::reset () {
	argv_1197 ();
	argv_2816				= 0;
	argv_754				= 0;
	argv_2870			= 0;
	nb_remaining			= 0;
	argv_1451			= 0;
	argv_2859				= 0;
	argv_2872					= 0;
	argv_3836			= 0;
	total_nb_remaining		= 0;
	argv_3567					= argv_2889; 
	argv_1450				= argv_2889; 
	argv_1874			= argv_2889;
	argv_2876				= 0;
	argv_1107			= 0;
	argv_3835			= 0;
	argv_1196	= 0;
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1083	
// @@
// @@ FUNCTION		:	argv_1025			
// @@
// @@ INPUT			:	
// @@ _src_size: argv_3864: the size of the source argv_1396 to encipher/decipher.
// @@
// @@ _is_cipher: bool: must be set to true if the operation intended is
// @@   a ciphering operation.
// @@ 
// @@ _n: argv_2793: the RSA famous 'n' integer appearing in the RSA formula.
// @@
// @@ OUTPUT		:	
// @@ _destination_file_size: argv_3864&: the argv_3402 of the computation operation.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the size of the destination argv_1396
// @@ of the argv_1106 operation (either encipher, or decipher) depending 
// @@ on the argv_3960 of n, and depending on the size of the argv_1396 to
// @@ encipher/decipher.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1083::argv_1025 (argv_2793 _n, argv_3864 _src_size, bool _is_cipher, argv_3864& _destination_file_size) {
	argv_3517 argv_1993 = argv_1847;
	_destination_file_size = 0;
	// compute the size of 'n' when represented as an hex string
	string n_str = argv_1874->argv_3966 (_n, true);
	argv_2816			= n_str.size ();

	if (n_str == "0") {
		argv_1993 = argv_1846;
	}
	else { 
		if (_is_cipher == true) {
			argv_754			= (argv_2816 - 4) / 2;
		}
		else {
			argv_754			= argv_2816 / 2;
		}
		argv_2870			= _src_size / argv_754;
		nb_remaining			= _src_size - (argv_2870 * argv_754);
		total_nb_remaining		= _src_size;
		argv_2876				= argv_2816 - 4;
		argv_1107			= 0;
		argv_3836			= 0;
		argv_1451			= 0;
		argv_2872					= 0;

		if (_is_cipher == true) {
			argv_1196	= (argv_2816 / 2) * argv_2870;
			if (nb_remaining > 0) {
				argv_1196 = argv_1196 + (argv_2816 / 2);
			}
		}
		else { // for decipher, we can't know exactly => just take the size of the ciphered argv_1396
			argv_1196 = _src_size;
		}
		_destination_file_size = argv_1196;

#if defined (__DEBUG_RSA__)
		cerr << "n_str          = " << n_str << endl;
		cerr << "argv_2816     = " << argv_2816 << endl; 
		cerr << "argv_754     = " << argv_754 << endl;
		cerr << "argv_2870  = " << argv_2870 << endl;
		cerr << "nb_remaining   = " << nb_remaining << endl;
		cerr << "argv_1196 = " << argv_1196 << endl;
#endif // #if defined (__DEBUG_RSA__)
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1083	
// @@
// @@ FUNCTION		:	construct			
// @@
// @@ INPUT			:	
// @@
// @@ _gmp_tool_ptr: argv_841 *: pointer on the argv_2908 containing all
// @@   the functions necessary to work with the GMP library.
// @@
// @@ _src_size: argv_3864: the size of the source argv_1396 to encipher/decipher.
// @@
// @@ _is_cipher: bool: must be set to true if the operation intended is
// @@   a ciphering operation.
// @@ 
// @@ _n: argv_2793: the RSA famous 'n' integer appearing in the RSA formula.
// @@
// @@ OUTPUT		:	
// @@ _destination_file_size: argv_3864&: the argv_3402 of the computation operation.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 the 'argv_1083'
// @@ argv_2908 before it's first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1083::construct (argv_841 *	_gmp_tool_ptr, argv_2793 _n, argv_3864 _src_size, bool _is_cipher) {
	argv_3517 argv_1993 = argv_1847;

	argv_1874 = _gmp_tool_ptr;
	argv_1874->argv_1568 (argv_956);
	argv_1874->argv_1568 (argv_2815);
	argv_1874->argv_1568 (argv_886);
	argv_1874->argv_1568 (argv_1159);
	argv_1874->argv_1568 (argv_3326);
	argv_1874->argv_1568 (argv_2392);
	argv_1874->argv_1568 (argv_2332);

	argv_1874->fp_mpz_set	 (argv_2815, _n);
	argv_1874->argv_1590  (argv_2815, argv_2815, 1); 
	argv_1874->argv_1584 (argv_2392, "16", 10);
	argv_1874->argv_1584 (argv_2332, "255", 10);

	argv_3864 unused_value;
	argv_1993 = argv_1025 (_n, _src_size, _is_cipher, unused_value);

	argv_3567				= new (std::nothrow) argv_3862[argv_754];
	argv_1450			= new (std::nothrow) argv_3862[argv_2816];
	if ((argv_3567 == argv_2889) || (argv_1450 == argv_2889)) {
		argv_1993 = argv_1835;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1083	
// @@
// @@ FUNCTION		:	argv_1197			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to release argv_1139 used by the
// @@ 'argv_1083' argv_2908 after use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1083::argv_1197 () {
	if (argv_1874 != argv_2889) {
		argv_1874->argv_1551 (argv_956);
		argv_1874->argv_1551 (argv_2815);
		argv_1874->argv_1551 (argv_886);
		argv_1874->argv_1551 (argv_3326);
		argv_1874->argv_1551 (argv_2392);
		argv_1874->argv_1551 (argv_2332);
		argv_1874 = argv_2889;
	}

	if (argv_3567 != argv_2889) {
		delete [] argv_3567;
		argv_3567 = argv_2889;
	}

	if (argv_1450 != argv_2889) {
		delete [] argv_1450;
		argv_1450 = argv_2889;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1086	
// @@
// @@ FUNCTION		:	argv_1086			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the argv_1086
// @@ argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1086::argv_1086 () {
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1086	
// @@
// @@ FUNCTION		:	argv_1086			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the argv_1086
// @@ argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1086::argv_1086 (argv_841& _gmp_tool) {
	construct (_gmp_tool);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1086	
// @@
// @@ FUNCTION		:	construct			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 the argv_1086
// @@ argv_2908 before use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1086::construct (argv_841& _gmp_tool) {
	_gmp_tool.argv_1568 (e);
	_gmp_tool.argv_1568 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1086	
// @@
// @@ FUNCTION		:	argv_1197			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to deallocate the memory 
// @@ used by the argv_1086 argv_2908 after use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1086::argv_1197 (argv_841& _gmp_tool) {
	_gmp_tool.argv_1551 (e);
	_gmp_tool.argv_1551 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1086	
// @@
// @@ FUNCTION		:	argv_1361			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the export argv_3402 containing the public argv_2109.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a unique string
// @@ that contains 2 fields, each field being separated by
// @@ a space character. Each field being as follows :
// @@ variable=argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1086::argv_1361 (argv_841& _gmp_tool) {
	string total;
	string e_s		= _gmp_tool.argv_3966 (e);
	string n_s		= _gmp_tool.argv_3966 (n);

	total = "e=";
	total += e_s;
	total += " n=";
	total += n_s;
	return (total);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1086	
// @@
// @@ FUNCTION		:	argv_2203			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success, 
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 and argv_2198 a public argv_2109
// @@ using a string that is conforming to the format generated
// @@ by the 'argv_1361' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1086::argv_2203 (argv_841& _gmp_tool, argv_820 _str) {
	argv_3517 argv_1993 = argv_1847;
	map<string, bool> m_mandatory;
	m_mandatory["e"]		= true;	
	m_mandatory["n"]		= true;	

	map<string, string> m_found;
	map<string, string>::iterator iter1, iter2;

	argv_1993 = argv_2974 (_str, m_mandatory, m_found);
	if (argv_1993 == argv_1847) {
		iter1 = m_found.find ("e");
		iter2 = m_found.find ("n");
		if ((iter1==m_found.end()) || (iter2 == m_found.end())) {
			argv_1993 = argv_1834;
		}
		else {
			_gmp_tool.argv_1584 (e,		iter1->second.c_str(), 10);
			_gmp_tool.argv_1584 (n,		iter2->second.c_str(), 10);
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1085	
// @@
// @@ FUNCTION		:	argv_1085			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the argv_1085
// @@ argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1085::argv_1085 (argv_841& _gmp_tool) {
	construct (_gmp_tool);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1085	
// @@
// @@ FUNCTION		:	construct			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 the argv_1085
// @@ argv_2908 before use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1085::construct (argv_841& _gmp_tool) {
	_gmp_tool.argv_1568 (d);
	_gmp_tool.argv_1568 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1085	
// @@
// @@ FUNCTION		:	argv_1197			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to deallocate the memory 
// @@ used by the argv_1085 argv_2908 after use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1085::argv_1197 (argv_841& _gmp_tool) {
	_gmp_tool.argv_1551 (d);
	_gmp_tool.argv_1551 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1085	
// @@
// @@ FUNCTION		:	argv_1361			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the export argv_3402 containing the public argv_2109.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a unique string
// @@ that contains 2 fields, each field being separated by
// @@ a space character. Each field being as follows :
// @@ variable=argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1085::argv_1361 (argv_841& _gmp_tool) {
	string total;
	string d_s		= _gmp_tool.argv_3966 (d);
	string n_s		= _gmp_tool.argv_3966 (n);

	total = "d=";
	total += d_s;
	total += " n=";
	total += n_s;
	return (total);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1085	
// @@
// @@ FUNCTION		:	argv_2203			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success, 
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 and argv_2198 a public argv_2109
// @@ using a string that is conforming to the format generated
// @@ by the 'argv_1361' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1085::argv_2203 (argv_841& _gmp_tool, argv_820 _str) {
	argv_3517 argv_1993 = argv_1847;
	map<string, bool> m_mandatory;
	m_mandatory["d"]		= true;	
	m_mandatory["n"]		= true;	

	map<string, string> m_found;
	map<string, string>::iterator iter1, iter2;

	argv_1993 = argv_2974 (_str, m_mandatory, m_found);
	if (argv_1993 == argv_1847) {
		iter1 = m_found.find ("d");
		iter2 = m_found.find ("n");
		if ((iter1==m_found.end()) || (iter2 == m_found.end())) {
			argv_1993 = argv_1834;
		}
		else {
			_gmp_tool.argv_1584 (d,	iter1->second.c_str(), 10);
			_gmp_tool.argv_1584 (n,	iter2->second.c_str(), 10);
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1082			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the 'argv_1082' argv_2908.
// @@ It prepares the pseudo-random argv_1736 before
// @@ it's first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1082::argv_1082 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	reset			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to reset the argv_1082 argv_2908
// @@ to it's original argv_3604.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1082::reset () {
	init_done		= false;
	argv_1874	= argv_2889;
	argv_3320	= "-----BEGIN RSA PUBLIC KEY-----";
	argv_3319	= "-----END RSA PUBLIC KEY-----";
	argv_3262	= "-----BEGIN RSA PRIVATE KEY-----";
	argv_3261	= "-----END RSA PRIVATE KEY-----";
	argv_2175	= "\n"; // newline is the UNIX newline !

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_3824;
	GetLocalTime (&argv_3824);
	srand (argv_3824.wMilliseconds);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct timeval argv_3733;
	gettimeofday (&argv_3733, argv_2889);
	srand (argv_3733.tv_usec);
#endif // #if defined (__LINUX_OS__)
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	~argv_1082			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ destructor of the 'argv_1082' argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1082::~argv_1082 () {
	if (init_done == true) {
		argv_1874	= argv_2889;
		init_done		= false;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_841&: the argv_2908 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to assign a previously argv_2221 'argv_841'
// @@ argv_2908 to the argv_1082 argv_2908.
// @@ It must be called prior to use the argv_1082 argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::init (argv_841 * _gmp_tool_ptr) { 
	argv_3517 argv_1993 = argv_1847;
	if (init_done == true) {
		argv_1993 = argv_1823;
	}
	else if (_gmp_tool_ptr == argv_2889) {
		argv_1993 = argv_1830;
	}
	else {
		argv_1874	= _gmp_tool_ptr;
		init_done		= true;	
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1025		
// @@
// @@ INPUT			:	
// @@ 
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to assign a previously argv_2221 'argv_841'
// @@ argv_2908 to the argv_1082 argv_2908.
// @@ It must be called prior to use the argv_1082 argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_1025 (argv_2793 _n, argv_3864 _src_size, bool _is_cipher, argv_3864& _size) {
	argv_3517 argv_1993 = argv_1847;
	_size = 0;
	argv_1083 rdata;
	argv_1993 = rdata.construct (argv_1874, _n, _src_size, _is_cipher);
	if (argv_1993 == argv_1847) {
		_size = rdata.argv_1196;
	}
	return (argv_1993);
} 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1724			
// @@
// @@ INPUT			:	
// @@ _key_size_in_bit: argv_3517: size of the argv_2109 to be generated (in bit).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _public_key: argv_1086&: the public argv_2109 to generate.
// @@
// @@ _private_key: argv_1085: the private argv_2109 to generate.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate randomly a argv_2109 pair, i.e
// @@ a public argv_2109 and a private argv_2109, the argv_2109 length being the 
// @@ '_key_size_in_bit' parameter.
// @@
// @@ NOTICE: the variables contained in the public and private argv_2109
// @@         are supposed to have been init by the caller.
// @@
// @@ CONTRACT 		:	
// @@ - a succesful call to init must have been argv_1261 prior to this call.
// @@ - the '_key_size_in_bit' parameter must be greater or equal to 
// @@   argv_3412.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_1724 (argv_3517 _key_size_in_bit, argv_1086& _public_key, argv_1085& _private_key) {
	argv_3517 argv_1993 = argv_1847;
	
	if (init_done == false) {
		argv_1993 = argv_1824;
	}
	else if (_key_size_in_bit < argv_3412) {
		argv_1993 = argv_1830;
	}
	else { // parameters are correct
		// Generate two large random (and distinct) primes p and q, each roughly the same size.
		argv_2793 p, q, n, p_minus_1, q_minus_1, phi, e, argv_1717, d, two, phi_minus_1;
		argv_1874->argv_1568 (p);
		argv_1874->argv_1568 (q);
		argv_1874->argv_1568 (n);
		argv_1874->argv_1568 (p_minus_1);
		argv_1874->argv_1568 (q_minus_1);
		argv_1874->argv_1568 (phi);
		argv_1874->argv_1568 (e);
		argv_1874->argv_1568 (argv_1717);
		argv_1874->argv_1568 (d);
		argv_1874->argv_1568 (two);
		argv_1874->argv_1568 (phi_minus_1);

		argv_1874->argv_1584 (two, "2", 10);
		argv_1874->argv_1727 (_key_size_in_bit / 2, p);
		argv_1874->argv_1727 (_key_size_in_bit / 2, q);

		// compute n = p * q
		argv_1874->argv_1574 (n, p, q);

		// compute phi = (p-1)(q-1)
		argv_1874->argv_1590 (p_minus_1, p, 1);
		argv_1874->argv_1590 (q_minus_1, q, 1);
		argv_1874->argv_1574 (phi, p_minus_1, q_minus_1);

#if defined (__UNBALANCED_RSA_KEY_SIZE__)
		//------------------------------------------
		//Get small odd integer e in range ]1..phi[ such that argv_1717 (e,phi) = 1
		unsigned long int e_int = 65537;

		while (true) {
			argv_1874->argv_1565 (argv_1717, phi, e_int);

			if (argv_1874->argv_1554 (argv_1717, 1)==0) {
				break;
			}

			// try the next odd integer...
			e_int += 2;
		}
		argv_1874->argv_1585 (e, e_int);
		//------------------------------------------
#else 
		// Get integer e in range ]1..phi[ such that argv_1717 (e,phi) = 1
		//-------------------------------------------------
		argv_1874->argv_1590 (phi_minus_1, phi, 1);
		
		argv_1874->argv_1726 (two, phi_minus_1, e);

		while (true) {
			argv_1874->argv_1564 (argv_1717, phi, e);

			if (argv_1874->argv_1554 (argv_1717, 1)==0) {
				break;
			}
			argv_1874->argv_1549 (e, e, 1);
		}
#endif // #if defined (__UNBALANCED_RSA_KEY_SIZE__)
		// Calculate unique d such that ed = 1 (mod x)
		if (argv_1874->argv_1571 (d, e, phi) == 0) {
			argv_1993 = argv_1806;
		}	
		else { // multiplicative inverse was found
			// copy the generated values into the public argv_2109
			argv_1874->fp_mpz_set (_public_key.e, e);
			argv_1874->fp_mpz_set (_public_key.n, n);
			// copy the generated values generated into the private argv_2109
			argv_1874->fp_mpz_set (_private_key.d, d);
			argv_1874->fp_mpz_set (_private_key.n, n);
		}

		// free all unnecessary variables
		argv_1874->argv_1551 (p);
		argv_1874->argv_1551 (q);
		argv_1874->argv_1551 (n);
		argv_1874->argv_1551 (p_minus_1);
		argv_1874->argv_1551 (q_minus_1);
		argv_1874->argv_1551 (phi);
		argv_1874->argv_1551 (e);
		argv_1874->argv_1551 (argv_1717);
		argv_1874->argv_1551 (d);
		argv_1874->argv_1551 (two);
		argv_1874->argv_1551 (phi_minus_1);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1362			
// @@
// @@ INPUT			:	
// @@ _public_key: argv_1086&: the public argv_2109 to use for export.
// @@
// @@ _symetric_key: argv_820: the D.E.S argv_2109 to be used to protect the 
// @@   exported argv_2109.
// @@
// @@ _filename: argv_820: argv_2817 of the destination argv_1396 that must contain 
// @@   the export argv_3402.
// @@ 
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to export the RSA public argv_2109 given
// @@ as the '_public_key' parameter to a argv_3776 argv_1396 whose argv_2817
// @@ is given as the '_filename' parameter.
// @@ Notice that the public argv_2109 is enciphered using the symmetric
// @@ D.E.S algorithm.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called once prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_1362 (argv_1086& _public_key, argv_820 _symetric_key, argv_820 _filename) {
	argv_3517 argv_1993 = argv_1847;
	if (init_done == false) {
		argv_1993 = argv_1824;
	}
	else {
		string plain = _public_key.argv_1361 (*argv_1874);
		argv_1993 = argv_4008 (plain.c_str(), _symetric_key, _filename, true, argv_3320.c_str(), argv_3262.c_str(), argv_3319.c_str(), argv_3261.c_str(), argv_2175.c_str());
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1362			
// @@
// @@ INPUT			:	
// @@ _private_key: argv_1085&: the private argv_2109 to use for export.
// @@
// @@ _symetric_key: argv_820: the D.E.S argv_2109 to be used to protect the 
// @@   exported argv_2109.
// @@
// @@ _filename: argv_820: argv_2817 of the destination argv_1396 that must contain 
// @@   the export argv_3402.
// @@ 
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to export the RSA private argv_2109 given
// @@ as the '_private_key' parameter to a argv_3776 argv_1396 whose argv_2817
// @@ is given as the '_filename' parameter.
// @@ Notice that the public argv_2109 is enciphered using the symmetric
// @@ D.E.S algorithm.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called once prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_1362 (argv_1085& _private_key, argv_820 _symetric_key, argv_820 _filename) {
	argv_3517 argv_1993 = argv_1847;
	if (init_done == false) {
		argv_1993 = argv_1824;
	}
	else {
		string plain = _private_key.argv_1361 (*argv_1874);
		argv_1993 = argv_4008 (plain.c_str(), _symetric_key, _filename, false, argv_3320.c_str(), argv_3262.c_str(), argv_3319.c_str(), argv_3261.c_str(), argv_2175.c_str());
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_2207			
// @@
// @@ INPUT			:
// @@ _filename: argv_820: argv_2817 of the argv_1396 containing the public argv_2109
// @@   to argv_2198.
// @@
// @@ _symetric_key: argv_820: the D.E.S argv_2109 to be used to protect the 
// @@   exported argv_2109.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _public_key: argv_1086&: the argv_2109 that is to be initialized
// @@   using the loading argv_3402.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set a given public argv_2109
// @@ by loading/deciphering and parsing a given argv_1396.
// @@ 
// @@ Notice : it is up to the caller to ensure that all 
// @@   argv_1086 inner variables are initialized prior
// @@   to this call.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_2207 (argv_820 _filename, argv_820 _symetric_key, argv_1086& _public_key) {
	argv_3517 argv_1993 = argv_1847;
	if (init_done == false) {
		argv_1993 = argv_1824;
	}
	else { // argv_3604 is OK for this operation
		string load_result;
		argv_1993 = argv_4009 (_filename, _symetric_key, true, load_result, argv_3320.c_str(), argv_3319.c_str(), argv_3262.c_str(), argv_3261.c_str());
		if (argv_1993 == argv_1847) {
			argv_1993 = _public_key.argv_2203 (*argv_1874, load_result.c_str());
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_2207			
// @@
// @@ INPUT			:
// @@ _filename: argv_820: argv_2817 of the argv_1396 containing the public argv_2109
// @@   to argv_2198.
// @@
// @@ _symetric_key: argv_820: the D.E.S argv_2109 to be used to protect the 
// @@   exported argv_2109.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _private_key: argv_1085&: the argv_2109 that is to be initialized
// @@   using the loading argv_3402.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set a given public argv_2109
// @@ by loading/deciphering and parsing a given argv_1396.
// @@ 
// @@ Notice : it is up to the caller to ensure that all 
// @@   argv_1086 inner variables are initialized prior
// @@   to this call.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_2207 (argv_820 _filename, argv_820 _symetric_key, argv_1085& _private_key) {
	argv_3517 argv_1993 = argv_1847;
	string load_result;
	argv_1993 = argv_4009 (_filename, _symetric_key, false, load_result, argv_3320.c_str(), argv_3319.c_str(), argv_3262.c_str(), argv_3261.c_str());
	if (argv_1993 == argv_1847) {
		argv_1993 = _private_key.argv_2203 (*argv_1874, load_result.c_str());
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1305			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_820: argv_2817 of the argv_1396 to encipher.
// @@
// @@ _dst_filename: argv_820: argv_2817 of the argv_1396 resulting from encipher.	
// @@
// @@ _public_key: argv_1086: the public argv_2109 to use to encipher 
// @@   the '_src_filename' argv_1396.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1396 '_src_filename'
// @@ into the argv_1396 '_dst_filename' using the public argv_2109 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_1305 (argv_820 _src_filename, argv_820 _dst_filename, argv_1086& _public_key) {
	argv_3517 argv_1993 = argv_1847;
	argv_1993 = argv_1306 (_src_filename, _dst_filename, _public_key.n, _public_key.e);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1305			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_820: argv_2817 of the argv_1396 to encipher.
// @@
// @@ _dst_filename: argv_820: argv_2817 of the argv_1396 resulting from encipher.	
// @@
// @@ _private_key: argv_1085: the private argv_2109 to use to encipher 
// @@   the '_src_filename' argv_1396.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1396 '_src_filename'
// @@ into the argv_1396 '_dst_filename' using the private argv_2109 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_1305 (argv_820 _src_filename, argv_820 _dst_filename, argv_1085& _private_key) {
	argv_3517 argv_1993 = argv_1847;
	argv_1993 = argv_1306 (_src_filename, _dst_filename, _private_key.n, _private_key.d);
	return (argv_1993);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1305			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_820: argv_2817 of the argv_1396 to encipher.
// @@
// @@ _dst_filename: argv_820: argv_2817 of the argv_1396 resulting from encipher.	
// @@
// @@ _n : argv_2793 : argv_2929 part of the RSA formula.
// @@
// @@ _e : argv_2793 : argv_2929 part of the RSA formula.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1396 '_src_filename'
// @@ into the argv_1396 '_dst_filename' using the RSA formula's
// @@ parameters : _n and _e.
// @@
// @@ CONTRACT 		:	
// @@ - '_src_filename' parameter must not be a argv_2889 pointer.
// @@ - '_dst_filename' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_1306 (argv_820 _src_filename, argv_820 _dst_filename, argv_2793 _n, argv_2793 _e) {
	argv_3517 argv_1993 = argv_1847;

	if ((_src_filename == argv_2889) || (_dst_filename==argv_2889)) {
		argv_1993 = argv_1830;
	}
	else { // parameters are OK
		argv_3864 src_size = argv_1746 (_src_filename);

		FILE * argv_1626 = fopen (_src_filename, "rb");
		if (! argv_1626) {
			argv_1993 = argv_1811;
		}
		else {
			FILE * argv_1497 = fopen (_dst_filename, "wb");
			if (! argv_1497) {
				argv_1993 = argv_1808;
			}
			else {
				argv_1083 rdata;
				argv_1993 = rdata.construct (argv_1874, _n, src_size, true);

				if (argv_1993 == argv_1847) { // memory allocation succeeded
					// ensure that all blocks will represent a number in range [0..n-1]
					// (we divide by 2 as each byte is represented by 2 argv_782 in a string)
					// and we remove 2 because argv_2929 byte is composed of 2 bytex in hexa
					string	hex_str;
#if defined (__DEBUG_RSA__)
					FILE *	argv_1544 = fopen ("C:\\rsa_encipher_log.txt", "wb");
					fprintf (argv_1544, "argv_2816    = %d\r\n", rdata.argv_2816);
					fprintf (argv_1544, "argv_754    = %d\r\n", rdata.argv_754);
					fprintf (argv_1544, "argv_2870 = %d\r\n", rdata.argv_2870);
					fprintf (argv_1544, "nb_remaining  = %d\r\n", rdata.nb_remaining);
#endif // #if defined (__DEBUG_RSA__)
					double total_done   = 0.0;
					double percent_done = 0.0;
					double total_todo   = rdata.argv_2870;
					double last_percent = 0.0;
					if (rdata.nb_remaining > 0) {
						total_todo += 1;			
					}
#if defined (__BENCH_RSA__)
					argv_828 bench;
					bench.argv_3601 ();
#endif // #if defined (__BENCH_RSA__)

					while (rdata.total_nb_remaining > 0) {
						if (rdata.total_nb_remaining >= rdata.argv_754) {
							rdata.argv_2859 = rdata.argv_754;
						}
						else {
							rdata.argv_2859 = rdata.total_nb_remaining;	
						}
						
						// read a chunk of the input argv_1396
#if defined (__DEBUG_RSA__)
						fprintf (argv_1544, "reading a argv_753 of size : %d\r\n", rdata.argv_2859);
#endif // #if defined (__DEBUG_RSA__)
						rdata.argv_2872 = fread (rdata.argv_3567, 1, rdata.argv_2859, argv_1626);
						rdata.argv_3836      += rdata.argv_2872;
						rdata.total_nb_remaining -= rdata.argv_2872;

						// encipher this argv_753
#if defined (__DEBUG_RSA__)
						argv_1993 = argv_1304 (rdata.argv_3567, rdata.argv_2872, rdata.argv_1450, rdata.argv_2816, rdata.argv_1451, _n, _e, rdata.argv_956, rdata.argv_886, rdata.argv_2816, rdata.argv_2392, rdata.argv_2332, rdata.argv_3326, rdata.argv_2815, argv_1544);
#else
						argv_1993 = argv_1304 (rdata.argv_3567, rdata.argv_2872, rdata.argv_1450, rdata.argv_2816, rdata.argv_1451, _n, _e, rdata.argv_956, rdata.argv_886, rdata.argv_2816, rdata.argv_2392, rdata.argv_2332, rdata.argv_3326, rdata.argv_2815, argv_2889);
#endif // #if defined (__DEBUG_RSA__)
						if (argv_1993 != argv_1847) {
							break;
						}

						// save the argv_3402 into destination argv_1396
#if defined (__DEBUG_RSA__)
						fprintf (argv_1544, "argv_1451 = %d\r\n", rdata.argv_1451);
#endif // #if defined (__DEBUG_RSA__)
						if (fwrite (rdata.argv_1450, 1, rdata.argv_1451, argv_1497) != rdata.argv_1451) {
							argv_1993 = argv_1810;
							break;
						}

						// percent calculation & argv_1200
						{
							total_done += 1;
							percent_done = (total_done * 100.0) / total_todo;
							if ((percent_done - last_percent) > 1.0) {
								char tmpa[64];
								argv_3548 (tmpa, 64, "%.02lf %%\r", percent_done);
								tmpa[64-1] = '\0';
								cerr << tmpa;
								last_percent = percent_done;
							}
						}
					}

					cerr << "             \r" << "100%" << endl;
#if defined (__BENCH_RSA__)
					string s1 = bench.argv_3608 ("encipher");
					cerr << s1 << endl;
#endif // #if defined (__BENCH_RSA__)


#if defined (__DEBUG_RSA__)
					fclose (argv_1544);
#endif // #if defined (__DEBUG_RSA__)
					rdata.argv_1197 ();
				}

				if (fclose (argv_1497) != 0) {
					if (argv_1993 == argv_1847) { // don't override previous errors
						argv_1993 = argv_1807;
					}
				}
			}
			fclose (argv_1626);
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1157			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_820: argv_2817 of the argv_1396 to decipher.
// @@
// @@ _dst_filename: argv_820: argv_2817 of the argv_1396 resulting from decipher.	
// @@
// @@ _private_key: argv_1085: the private argv_2109 to use to decipher 
// @@   the '_src_filename' argv_1396.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1396 '_src_filename'
// @@ into the argv_1396 '_dst_filename' using the public argv_2109 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_1157 (argv_820 _src_filename, argv_820 _dst_filename, argv_1085& _private_key) {
	argv_3517 argv_1993 = argv_1847;
	argv_1993 = argv_1158 (_src_filename, _dst_filename, _private_key.n, _private_key.d);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1157			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_820: argv_2817 of the argv_1396 to decipher.
// @@
// @@ _dst_filename: argv_820: argv_2817 of the argv_1396 resulting from decipher.	
// @@
// @@ _public_key: argv_1086: the public argv_2109 to use to decipher 
// @@   the '_src_filename' argv_1396.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1396 '_src_filename'
// @@ into the argv_1396 '_dst_filename' using the public argv_2109 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1082::argv_1157 (argv_820 _src_filename, argv_820 _dst_filename, argv_1086& _public_key) {
	argv_3517 argv_1993 = argv_1847;
	argv_1993 = argv_1158 (_src_filename, _dst_filename, _public_key.n, _public_key.e);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082	
// @@
// @@ FUNCTION		:	argv_1157			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_820: argv_2817 of the argv_1396 to decipher.
// @@
// @@ _dst_filename: argv_820: argv_2817 of the argv_1396 resulting from decipher.	
// @@
// @@ _n : argv_2793 : argv_2929 part of the RSA formula.
// @@
// @@ _d : argv_2793 : argv_2929 part of the RSA formula.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1396 '_src_filename'
// @@ into the argv_1396 '_dst_filename' using the RSA formula's
// @@ parameters : _n and _d.
// @@
// @@ CONTRACT 		:	
// @@ - '_src_filename' parameter must not be a argv_2889 pointer.
// @@ - '_dst_filename' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//159951
argv_3517 argv_1082::argv_1158 (argv_820 _src_filename, argv_820 _dst_filename, argv_2793 _n, argv_2793 _d) {
	argv_3517 argv_1993 = argv_1847;

	if ((_src_filename == argv_2889) || (_dst_filename==argv_2889)) {
		argv_1993 = argv_1830;
	}
	else { // parameters are OK
		argv_3864 argv_3570	= argv_1746 (_src_filename);

		FILE * argv_1626	= fopen (_src_filename, "rb");
		if (! argv_1626) {
			argv_1993 = argv_1811;
		}
		else {
			FILE * argv_1497 = fopen (_dst_filename, "wb");
			if (! argv_1497) {
				argv_1993 = argv_1808;
			}
			else {
				argv_1083 rdata;
				argv_1993 = rdata.construct (argv_1874, _n, argv_3570, false);

				if (argv_1993 == argv_1847) { // memory allocation succeeded
#if defined (__DEBUG_RSA__)
					FILE *	argv_1544 = fopen ("C:\\rsa_decipher_log.txt", "wb");
					fprintf (argv_1544, "argv_2816       = %d\r\n", rdata.argv_2816);
					fprintf (argv_1544, "argv_2870    = %d\r\n", rdata.argv_2870);
					fprintf (argv_1544, "argv_754       = %d\r\n", rdata.argv_754);
#endif // #if defined (__DEBUG_RSA__)
					double total_done   = 0.0;
					double percent_done = 0.0;
					double total_todo   = rdata.argv_2870;
					double last_percent = 0.0;
					if (rdata.nb_remaining > 0) {
						total_todo += 1;			
					}
#if defined (__BENCH_RSA__)
					argv_828 bench;
					bench.argv_3601 ();
#endif // #if defined (__BENCH_RSA__)

					while (rdata.total_nb_remaining > 0) {
						// read a chunk of the input argv_1396
						rdata.argv_2872 = fread (rdata.argv_3567, 1, rdata.argv_754, argv_1626);
						rdata.argv_3836      += rdata.argv_2872;
						rdata.total_nb_remaining -= rdata.argv_2872;

						// decipher this argv_753
#if defined (__DEBUG_RSA__)
						argv_1993 = argv_1156 (rdata.argv_3567, rdata.argv_2872, rdata.argv_1450, rdata.argv_2816, rdata.argv_1451, _n, _d, rdata.argv_956, rdata.argv_1159, rdata.argv_1107, rdata.argv_2870, rdata.argv_2876, argv_1544);
#else 
						argv_1993 = argv_1156 (rdata.argv_3567, rdata.argv_2872, rdata.argv_1450, rdata.argv_2816, rdata.argv_1451, _n, _d, rdata.argv_956, rdata.argv_1159, rdata.argv_1107, rdata.argv_2870, rdata.argv_2876, argv_2889);
#endif // #if defined (__DEBUG_RSA__)
						if (argv_1993 != argv_1847) {
							break;
						}

						// save the argv_3402 into destination argv_1396
						if (fwrite (rdata.argv_1450, 1, rdata.argv_1451, argv_1497) != rdata.argv_1451) {
							argv_1993 = argv_1810;
							break;
						}
						rdata.argv_1107++;

						// percent calculation & argv_1200
						{
							total_done += 1;
							percent_done = (total_done * 100.0) / total_todo;
							if ((percent_done - last_percent) > 1.0) {
								char tmpa[64];
								argv_3548 (tmpa, 64, "%.02lf %%\r", percent_done);
								tmpa[64-1] = '\0';
								cerr << tmpa;
								last_percent = percent_done;
							}
						}
					}

					// deallocate the unnecessary buffers
#if defined (__DEBUG_RSA__)
					fclose (argv_1544);
#endif // #if defined (__DEBUG_RSA__)
					rdata.argv_1197 ();
					cerr << "             \r" << "100%" << endl;
#if defined (__BENCH_RSA__)
					string s1 = bench.argv_3608 ("decipher");
					cerr << s1 << endl;
#endif // #if defined (__BENCH_RSA__)
				}

				if (fclose (argv_1497) != 0) {
					if (argv_1993 == argv_1847) { // don't override previous errors
						argv_1993 = argv_1807;
					}
				}
			}
			fclose (argv_1626);
		}
	}
	return (argv_1993);
}

argv_3517 argv_1082::argv_1304 (argv_3862 * _src_buf, argv_3864 _src_bufsize, argv_3862 * _dest_buf, argv_3864 _dest_bufsize, argv_3864& _actual_dest_bufsize, argv_2793 _n, argv_2793 _e, argv_2793 _collected_nb, argv_2793 _ciphered_block, argv_3864 _nb_to_pad, argv_2793 _min_rand, argv_2793 _max_rand, argv_2793 _random_trailer, argv_2793 _n_minus_1, FILE * _fp_log) {
	argv_3517 argv_1993 = argv_1847;
	string hex_str;

	// convert this argv_771 into a hex string
	argv_1908 (_src_buf, _src_bufsize, hex_str);
#if defined (__DEBUG_RSA__)
	if (_fp_log != argv_2889) {
		fprintf (_fp_log, "read argv_753 : %s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
	}
#endif // #if defined (__DEBUG_RSA__)

	// generate a random trailing argv_3960 and convert it into a 2 argv_782 string
	argv_1874->argv_1726 (_min_rand, _max_rand, _random_trailer);
	string prefix = argv_1874->argv_3966 (_random_trailer, true);
#if defined (__DEBUG_RSA__)
	if (_fp_log != argv_2889) {
		fprintf (_fp_log, "random prefix = %s\r\n", prefix.c_str());
	}
#endif // #if defined (__DEBUG_RSA__)

	// append trailer to the begining of the number as an hex string.
	hex_str = prefix + hex_str;
#if defined (__DEBUG_RSA__)
	if (_fp_log != argv_2889) {
		fprintf (_fp_log, "after adding prefix : argv_753 = %s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
	}
#endif // #if defined (__DEBUG_RSA__)

	// convert this hex string into a number
	argv_1874->argv_1584 (_collected_nb, hex_str.c_str(), 16);

	// ensure that this number is in the range [0..n-1]
	if (argv_1874->argv_1553 (_collected_nb, _n_minus_1) > 0) {
		argv_1993 = argv_1805;
	}
	else { // the argv_753 represents a valid number
		// perform the encipher of this argv_753
		argv_1874->argv_1580 (_ciphered_block, _collected_nb, _e, _n);

		// convert the argv_3402 into an hex string
		hex_str = argv_1874->argv_3966 (_ciphered_block, true);
#if defined (__DEBUG_RSA__)
		if (_fp_log != argv_2889) {
			fprintf (_fp_log, "enciphered argv_753 =%s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
		}
#endif // #if defined (__DEBUG_RSA__)

		// pad the number if necessary
		argv_2962 (hex_str, _nb_to_pad);
#if defined (__DEBUG_RSA__)
		if (_fp_log != argv_2889) {
			fprintf (_fp_log, "after padding, size = %d\r\n", hex_str.size());
		}
#endif // #if defined (__DEBUG_RSA__)

		// convert the string argv_3402 into an hex argv_771 
		argv_1993 = argv_3615 (hex_str.c_str(), hex_str.size(), _dest_buf, _dest_bufsize, _actual_dest_bufsize);
	}
	return (argv_1993);
}

argv_3517 argv_1082::argv_1303 (argv_3862 * _src_buf, argv_3864 _src_bufsize, argv_3862 * _dest_buf, argv_3864 _dest_bufsize, argv_3864& _actual_dest_bufsize, argv_2793 _e, argv_2793 _n) {
	argv_3517 argv_1993 = argv_1847;
	argv_1083 rdata;
	argv_1993 = rdata.construct (argv_1874, _n, _src_bufsize, true);

	if (argv_1993 == argv_1847) {
		argv_3864 current_out = 0;

#if defined (__DEBUG_RSA__)
		FILE *	argv_1544 = fopen ("C:\\rsa_encipher_log.txt", "wb");
		fprintf (argv_1544, "argv_2816    = %d\r\n", rdata.argv_2816);
		fprintf (argv_1544, "argv_754    = %d\r\n", rdata.argv_754);
		fprintf (argv_1544, "argv_2870 = %d\r\n", rdata.argv_2870);
		fprintf (argv_1544, "nb_remaining  = %d\r\n", rdata.nb_remaining);
#endif // #if defined (__DEBUG_RSA__)

		while (rdata.total_nb_remaining > 0) {
			// choose the amount to read and saturate the argv_3960 if necessary.
			if (rdata.total_nb_remaining >= rdata.argv_754) {
				rdata.argv_2859 = rdata.argv_754;
			}
			else {
				rdata.argv_2859 = rdata.total_nb_remaining;	
			}

			if ((rdata.argv_3836 + rdata.argv_2859) > _src_bufsize) {
				argv_1993 = argv_1829;
				break;	
			}
			
#if defined (__DEBUG_RSA__)			
			fprintf (argv_1544, "reading a argv_753 of size : %d\r\n", rdata.argv_2859);
#endif // #if defined (__DEBUG_RSA__)

			// encipher this argv_753
#if defined (__DEBUG_RSA__)
			argv_1993 = argv_1304 (&_src_buf[rdata.argv_3836], rdata.argv_2859, &_dest_buf[current_out], rdata.argv_2816, rdata.argv_1451, _n, _e, rdata.argv_956, rdata.argv_886, rdata.argv_2816, rdata.argv_2392, rdata.argv_2332, rdata.argv_3326, rdata.argv_2815, argv_1544);
#else 
			argv_1993 = argv_1304 (&_src_buf[rdata.argv_3836], rdata.argv_2859, &_dest_buf[current_out], rdata.argv_2816, rdata.argv_1451, _n, _e, rdata.argv_956, rdata.argv_886, rdata.argv_2816, rdata.argv_2392, rdata.argv_2332, rdata.argv_3326, rdata.argv_2815, argv_2889);
#endif // #if defined (__DEBUG_RSA__)
			if (argv_1993 != argv_1847) {
				break;
			}
#if defined (__DEBUG_RSA__)
			fprintf (argv_1544, "argv_1451 = %d\r\n", rdata.argv_1451);
#endif // #if defined (__DEBUG_RSA__)

			// move the destination argv_771's pointer according to the number of argv_782 produced
			current_out += rdata.argv_1451;

			// read a chunk of the input argv_1396
			//fprintf (argv_1544, "reading a argv_753 of size : %d\r\n", rdata.argv_2859);
			// rdata.argv_2872 = fread (rdata.argv_3567, 1, rdata.argv_2859, argv_1626);
			rdata.argv_2872			  = rdata.argv_2859; 
			rdata.argv_3836      += rdata.argv_2872;
			rdata.total_nb_remaining -= rdata.argv_2872;
		}
		_actual_dest_bufsize = current_out;
		rdata.argv_1197 ();
#if defined (__DEBUG_RSA__)
		fclose (argv_1544);
#endif // #if defined (__DEBUG_RSA__)
	}
	return (argv_1993);
}

argv_3517 argv_1082::argv_1302 (argv_3862 * _src_buf, argv_3864 _src_bufsize, argv_3862 * _dest_buf, argv_3864 _dest_bufsize, argv_3864& _actual_dest_bufsize, argv_1086& _public_key) {
	argv_3517 argv_1993 = argv_1847;
	argv_1993 = argv_1303 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _public_key.e, _public_key.n);
	return (argv_1993);
}

argv_3517 argv_1082::argv_1302 (argv_3862 * _src_buf, argv_3864 _src_bufsize, argv_3862 * _dest_buf, argv_3864 _dest_bufsize, argv_3864& _actual_dest_bufsize, argv_1085& _private_key) {
	argv_3517 argv_1993 = argv_1847;
	argv_1993 = argv_1303 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _private_key.d, _private_key.n);
	return (argv_1993);
}

argv_3517 argv_1082::argv_1156 (argv_3862 * _src_buf, argv_3864 _src_bufsize, argv_3862 * _dest_buf, argv_3864 _dest_bufsize, argv_3864& _actual_dest_bufsize, argv_2793 _n, argv_2793 _d, argv_2793 _collected_nb, argv_2793 _deciphered_block, argv_3864 _current_block, argv_3864 _total_nb_block, argv_3864 _nb_to_pad, FILE * _fp_log) {
	argv_3517 argv_1993 = argv_1847;

	string hex_str;

	// convert this argv_771 into a hex string
	argv_1908 (_src_buf, _src_bufsize, hex_str);
#if defined (__DEBUG_RSA__)
	if (_fp_log != argv_2889) {
		fprintf (_fp_log, "read argv_753 : %s\r\n", hex_str.c_str());
	}
#endif // #if defined (__DEBUG_RSA__)

	// convert this hex string into a number
	argv_1874->argv_1584 (_collected_nb, hex_str.c_str(), 16);
#if defined (__DEBUG_RSA__)
	if (_fp_log != argv_2889) {
		string sa1 = argv_1874->argv_3966 (_collected_nb, true);
		fprintf (_fp_log, "after assignment, argv_956 = %s\r\n", sa1.c_str());
	}
#endif // #if defined (__DEBUG_RSA__)

	// perform the decipher of this argv_753
	argv_1874->argv_1580 (_deciphered_block, _collected_nb, _d, _n);
	/*
	if (_fp_log != argv_2889) {
		string sa1 = argv_1874->argv_3966 (argv_956, true);
		string sa2 = argv_1874->argv_3966 (_d, true);
		string sa3 = argv_1874->argv_3966 (_n, true);
		string sa4 = argv_1874->argv_3966 (argv_1159, true);
		fprintf (_fp_log, "(%s exp %s) mod %s = %s\r\n", sa1.c_str(), sa2.c_str(), sa3.c_str(), sa4.c_str());
	}
	}*/

	// convert the argv_3402 into an hex string
	hex_str = argv_1874->argv_3966 (_deciphered_block, true);

	// remove the trailing prefix (2 argv_782)
	hex_str = hex_str.substr (2, hex_str.size());

#if defined (__DEBUG_RSA__)	
	if (_fp_log != argv_2889) {
		fprintf (_fp_log, "deciphered argv_753 =%s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
	}
#endif // #if defined (__DEBUG_RSA__)

	// pad the number if necessary (except for the last argv_753)
	if ((_current_block+1) < _total_nb_block) {
		argv_2962 (hex_str, _nb_to_pad);
#if defined (__DEBUG_RSA__)
		if (_fp_log != argv_2889) {
			fprintf (_fp_log, "after padding, size  = %d\r\n", hex_str.size());
			fprintf (_fp_log, "after padding, argv_3960 = %s\r\n", hex_str.c_str());
		}
#endif // #if defined (__DEBUG_RSA__)
	}

	// convert the hex string into a hex argv_771
	argv_1993 = argv_3615 (hex_str.c_str(), hex_str.size(), _dest_buf, _dest_bufsize, _actual_dest_bufsize);
	if (argv_1993 != argv_1847) {
#if defined (__DEBUG_RSA__)
		if (_fp_log != argv_2889) {
			fprintf (_fp_log, "+++ ERROR: argv_3615 failed !");
		}
#endif // #if defined (__DEBUG_RSA__)
	}
	return (argv_1993);
}



argv_3517 argv_1082::argv_1155 (argv_3862 * _src_buf, argv_3864 _src_bufsize, argv_3862 * _dest_buf, argv_3864 _dest_bufsize, argv_3864& _actual_dest_bufsize, argv_2793 _e, argv_2793 _n) {
	argv_3517 argv_1993 = argv_1847;
	argv_1083 rdata;
	argv_1993 = rdata.construct (argv_1874, _n, _src_bufsize, false);

	if (argv_1993 == argv_1847) {
		argv_3864 current_out = 0;

		while (rdata.total_nb_remaining > 0) {
			// choose the amount to read and saturate the argv_3960 if necessary.
			if (rdata.total_nb_remaining >= rdata.argv_754) {
				rdata.argv_2859 = rdata.argv_754;
			}
			else {
				rdata.argv_2859 = rdata.total_nb_remaining;	
			}

			if ((rdata.argv_3836 + rdata.argv_2859) > _src_bufsize) {
				argv_1993 = argv_1829;
				break;	
			}
			
			// decipher this argv_753
			argv_1993 = argv_1156 (&_src_buf[rdata.argv_3836], rdata.argv_2859, &_dest_buf[current_out], rdata.argv_2816, rdata.argv_1451, _n, _e, rdata.argv_956, rdata.argv_1159, rdata.argv_1107, rdata.argv_2870, rdata.argv_2876, argv_2889);
			if (argv_1993 != argv_1847) {
				break;
			}
			// move the destination argv_771's pointer according to the number of argv_782 produced
			current_out += rdata.argv_1451;

			// read a chunk of the input argv_1396
			//fprintf (argv_1544, "reading a argv_753 of size : %d\r\n", rdata.argv_2859);
			// rdata.argv_2872 = fread (rdata.argv_3567, 1, rdata.argv_2859, argv_1626);
			rdata.argv_2872			  = rdata.argv_2859; 
			rdata.argv_3836      += rdata.argv_2872;
			rdata.total_nb_remaining -= rdata.argv_2872;
			rdata.argv_1107++;
		}
		_actual_dest_bufsize = current_out;
		rdata.argv_1197 ();
	}
	return (argv_1993);
}

argv_3517 argv_1082::argv_1154 (argv_3862 * _src_buf, argv_3864 _src_bufsize, argv_3862 * _dest_buf, argv_3864 _dest_bufsize, argv_3864& _actual_dest_bufsize, argv_1086& _public_key) {
	argv_3517 argv_1993 = argv_1847;
	argv_1993 = argv_1155 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _public_key.e, _public_key.n);
	return (argv_1993);
}

argv_3517 argv_1082::argv_1154 (argv_3862 * _src_buf, argv_3864 _src_bufsize, argv_3862 * _dest_buf, argv_3864 _dest_bufsize, argv_3864& _actual_dest_bufsize, argv_1085& _private_key) {
	argv_3517 argv_1993 = argv_1847;
	argv_1993 = argv_1155 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _private_key.d, _private_key.n);
	return (argv_1993);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3763		
// @@
// @@ INPUT			:	
// @@ argv_3864 : _key_size_in_bit: number of argv_752 in the argv_2109 to be generated.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to test the RSA argv_2109 argv_1734 
// @@ functionality.
// @@ 
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3763 (argv_3864 _key_size_in_bit) {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_3517 argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_1082 argv_3411;
		argv_3411.init (&argv_1873);
		argv_1086		argv_3321 (argv_1873);
		argv_1085	private_key (argv_1873);
		cerr << "generating argv_2109 pair..." << endl;
		argv_3517 argv_1993 = argv_3411.argv_1724 (_key_size_in_bit, argv_3321, private_key);
		if (argv_1993 != argv_1847) {
			string serror = argv_1087 (argv_1993);
			cerr << "+++ ERROR: failed to argv_1724 - errno = " << serror.c_str() << endl;
		}
		else {
			cerr << "SUCCESS" << endl;
			cerr << "exporting argv_2109 to argv_1396..." << endl;
			string e_s = argv_1873.argv_3966 (argv_3321.e);
			string n_s = argv_1873.argv_3966 (argv_3321.n);
			string d_s = argv_1873.argv_3966 (private_key.d);

			FILE * argv_1478 = fopen ("C:\\rsa_keys.txt", "wb");
			if (! argv_1478) {
				cerr << "failed to open argv_1396 @1" << endl;
			}
			else {
				fprintf (argv_1478, "argv_3411 public argv_2109 : key_size_in_bit=%d\r\n", _key_size_in_bit);
				fprintf (argv_1478, "e=%s\r\n", e_s.c_str());
				fprintf (argv_1478, "n=%s\r\n", n_s.c_str());

				fprintf (argv_1478, "\r\n\r\nrsa private argv_2109 :\r\n");
				fprintf (argv_1478, "d=%s\r\n", d_s.c_str());
				fprintf (argv_1478, "n=%s\r\n", n_s.c_str());
				fclose (argv_1478);
			}
		}
		argv_3321.argv_1197 (argv_1873);
		private_key.argv_1197 (argv_1873);
		argv_1873.argv_3915 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3762		
// @@
// @@ INPUT			:	
// @@ argv_3864 : _key_size_in_bit: number of argv_752 in the argv_2109 to be generated.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to test the RSA argv_2109 argv_1734 and argv_2109
// @@ export to argv_1396 functionalities.
// @@ 
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3762 (argv_3864 _key_size_in_bit, argv_820 _symmetric_key, argv_820 _pub_filename, argv_820 _priv_filename) {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_3517 argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_1082 argv_3411;
		argv_3411.init (&argv_1873);
		argv_1086		argv_3321 (argv_1873);
		argv_1085	private_key (argv_1873);
		cerr << "generating argv_2109 pair..." << endl;
		argv_3517 argv_1993 = argv_3411.argv_1724 (_key_size_in_bit, argv_3321, private_key);
		if (argv_1993 != argv_1847) {
			string serror = argv_1087 (argv_1993);
			cerr << "+++ ERROR: failed to argv_1724 - errno = " << serror.c_str() << endl;
		}
		else {
			cerr << "SUCCESS" << endl;
			cerr << "exporting keys to files..." << endl;
			argv_1993 = argv_3411.argv_1362 (private_key, _symmetric_key, _priv_filename);
			if (argv_1993 != argv_1847) {
				cerr << "+++ failed to export argv_2109 to argv_1396" << endl;
				string serror = argv_1087 (argv_1993);
				cerr << serror << endl;
			}

			argv_1993 = argv_3411.argv_1362 (argv_3321, _symmetric_key, _pub_filename);
			if (argv_1993 != argv_1847) {
				cerr << "+++ failed to export argv_2109 to argv_1396" << endl;
				string serror = argv_1087 (argv_1993);
				cerr << serror << endl;
			}
		}
		argv_3321.argv_1197 (argv_1873);
		private_key.argv_1197 (argv_1873);
		argv_1873.argv_3915 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3762		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to test the RSA argv_2109 initialization using
// @@ a given argv_1396 containing an enciphered argv_2109.
// @@ 
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3764 () {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_3517 argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_1082 argv_3411;
		argv_3411.init (&argv_1873);
		argv_1086		argv_3321 (argv_1873);
		argv_1085	private_key (argv_1873);

		FILE * fplog = fopen ("C:\\test_import_keys_log.txt", "wb");
		cerr << "see log argv_1396 : " << "test_import_keys_log.txt" << endl;
		
		fprintf (fplog, "loading public argv_2109 from argv_1396...\r\n");
		argv_1993 = argv_3411.argv_2207 ("C:\\rsa_cle_publique.txt", "FEA02C3F000156EF", argv_3321);
		if (argv_1993 != argv_1847) {
			string serror = argv_1087 (argv_1993);
			fprintf (fplog, "+++ ERROR: failed to argv_2198 public argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (fplog, "public argv_2109...[LOADED FROM FILE]\r\n");
			fprintf (fplog, "loading private argv_2109 from argv_1396...\r\n");
			argv_1993 = argv_3411.argv_2207 ("C:\\rsa_cle_privee.txt", "FEA02C3F000156EF", private_key);
			if (argv_1993 != argv_1847) {
				string serror = argv_1087 (argv_1993);
				fprintf (fplog, "+++ ERROR: failed to argv_2198 private argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
			}
			else {
				fprintf (fplog, "private argv_2109...[LOADED FROM FILE]\r\n");
				string pub_str	= argv_3321.argv_1361	(argv_1873);
				string priv_str = private_key.argv_1361	(argv_1873);
				
				fprintf (fplog, "=== public argv_2109 ===\r\n%s\r\n",		pub_str.c_str());
				fprintf (fplog, "=== private argv_2109 ===\r\n%s\r\n",	priv_str.c_str());

				// just for debug
				string n_str = argv_1873.argv_3966 (argv_3321.n, true);
				fprintf (fplog, "\r\n (in hexa) = %s\r\n", n_str.c_str());
				fprintf (fplog, "\r\nlength of n = %d\r\n", n_str.size());
			}
		}
		fclose (fplog);

		argv_1873.argv_3915 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3746		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to ensure that the argv_1082 argv_2908
// @@ permits to cipher using the RSA public argv_2109.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3746 () {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_3517 argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_1082 argv_3411;
		argv_3411.init (&argv_1873);
		argv_1086		argv_3321 (argv_1873);

		argv_1993 = argv_3411.argv_2207 ("C:\\rsa_cle_publique.txt", "FEA02C3F000156EF", argv_3321);
		if (argv_1993 != argv_1847) {
			string serror = argv_1087 (argv_1993);
			fprintf (stderr, "+++ ERROR: failed to argv_2198 public argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (stderr, "public argv_2109...[LOADED FROM FILE]\r\n");
			fprintf (stderr, "private argv_2109...[LOADED FROM FILE]\r\n");
			string source_file = "C:\\new_engine\\SRC\\argv_3411\\Release\\a.txt";
			string argv_1194   = "C:\\new_engine\\SRC\\argv_3411\\Release\\a_ciphered.txt";
			fprintf (stderr, "enciphering argv_1396 : %s -> %s\r\n", source_file.c_str(), argv_1194.c_str());
			argv_1993 = argv_3411.argv_1305 (source_file.c_str(), argv_1194.c_str(), argv_3321);
			fprintf (stderr, "encipher...[DONE]\r\n");
			if (argv_1993 != argv_1847) {
				string serror = argv_1087 (argv_1993);
				fprintf (stderr, "encipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "encipher...[SUCCESS]\r\n");
			}
		}
		argv_3321.argv_1197 (argv_1873);
		argv_1873.argv_3915 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3745		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to ensure that the argv_1082 argv_2908
// @@ permits to cipher using the RSA private argv_2109.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3745 (argv_820 _gmp_lib, argv_820 _symmetric_key, argv_820 _priv_keyfile, argv_820 _src_file, argv_820 _dest_file) {
	argv_841 argv_1873;
	argv_3517 argv_1993 = argv_1873.argv_2208 (_gmp_lib);
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_1082 argv_3411;
		argv_3411.init (&argv_1873);
		argv_1085	private_key (argv_1873);

//		fprintf (stderr, "loading private argv_2109 from argv_1396...\r\n");
		argv_1993 = argv_3411.argv_2207 (_priv_keyfile, _symmetric_key, private_key);
		if (argv_1993 != argv_1847) {
			string serror = argv_1087 (argv_1993);
			fprintf (stderr, "+++ ERROR: failed to argv_2198 private argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
		}
		else {
//			fprintf (stderr, "private argv_2109...[LOADED FROM FILE]\r\n");
//			fprintf (stderr, "enciphering argv_1396 : %s -> %s\r\n", _src_file, _dest_file);
			argv_1993 = argv_3411.argv_1305 (_src_file, _dest_file, private_key);
//			fprintf (stderr, "encipher...[DONE]\r\n");
			if (argv_1993 != argv_1847) {
				string serror = argv_1087 (argv_1993);
				fprintf (stderr, "encipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "encipher...[SUCCESS]\r\n");
			}
		}
		private_key.argv_1197 (argv_1873);
		argv_1873.argv_3915 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3742		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to ensure that the argv_1082 argv_2908
// @@ permits to decipher using the RSA private argv_2109.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3742 () {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_3517 argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_1082 argv_3411;
		argv_3411.init (&argv_1873);
		argv_1085	private_key (argv_1873);

		fprintf (stderr, "loading private argv_2109 from argv_1396...\r\n");
		argv_1993 = argv_3411.argv_2207 ("C:\\rsa_cle_privee.txt", "FEA02C3F000156EF", private_key);
		if (argv_1993 != argv_1847) {
			string serror = argv_1087 (argv_1993);
			fprintf (stderr, "+++ ERROR: failed to argv_2198 private argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (stderr, "private argv_2109...[LOADED FROM FILE]\r\n");
			string source_file = "C:\\new_engine\\SRC\\argv_3411\\Release\\a_ciphered.txt";
			string argv_1194   = "C:\\new_engine\\SRC\\argv_3411\\Release\\a_deciphered.txt";
			fprintf (stderr, "deciphering argv_1396 : %s -> %s\r\n", source_file.c_str(), argv_1194.c_str());
			argv_1993 = argv_3411.argv_1157 (source_file.c_str(), argv_1194.c_str(), private_key);
			fprintf (stderr, "decipher...[DONE]\r\n");
			if (argv_1993 != argv_1847) {
				string serror = argv_1087 (argv_1993);
				fprintf (stderr, "decipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "decipher...[SUCCESS]\r\n");
			}
		}
		private_key.argv_1197 (argv_1873);
		argv_1873.argv_3915 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3743		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to ensure that the argv_1082 argv_2908
// @@ permits to decipher using the RSA public argv_2109.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3743 (argv_820 _gmp_dll, argv_820 _symmetric_key, argv_820 _pubkey_file, argv_820 _src_file, argv_820 _dest_file) {
	argv_841 argv_1873;
	argv_3517 argv_1993 = argv_1873.argv_2208 (_gmp_dll);
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_1082 argv_3411;
		argv_3411.init (&argv_1873);
		argv_1086		argv_3321 (argv_1873);

		argv_1993 = argv_3411.argv_2207 (_pubkey_file, _symmetric_key, argv_3321);
		if (argv_1993 != argv_1847) {
			string serror = argv_1087 (argv_1993);
			fprintf (stderr, "+++ ERROR: failed to argv_2198 public argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (stderr, "public argv_2109...[LOADED FROM FILE]\r\n");
			fprintf (stderr, "deciphering argv_1396 : %s -> %s\r\n", _src_file, _dest_file);
			argv_1993 = argv_3411.argv_1157 (_src_file, _dest_file, argv_3321);
			fprintf (stderr, "decipher...[DONE]\r\n");
			if (argv_1993 != argv_1847) {
				string serror = argv_1087 (argv_1993);
				fprintf (stderr, "decipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "decipher...[SUCCESS]\r\n");
			}
		}
		argv_3321.argv_1197 (argv_1873);
		argv_1873.argv_3915 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3771		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to ensure that the argv_1082 argv_2908
// @@ permits to encipher using the RSA public argv_2109 and to
// @@ decipher using the RSA private argv_2109.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3771 () {
	cerr << "----- encipher using public argv_2109 ----" << endl;
	argv_3746 ();

	cerr << "----- decipher using private argv_2109 ----" << endl;
	argv_3742 ();

	if (argv_1449 ("C:\\new_engine\\SRC\\argv_3411\\Release\\a.txt", "C:\\new_engine\\SRC\\argv_3411\\Release\\a_deciphered.txt") == false) {
		cerr << "+++ ERROR: files are different !" << endl;
	}
	else {
		cerr << "argv_1396 comparison...[OK]" << endl;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3770		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to ensure that the argv_1082 argv_2908
// @@ permits to encipher using the RSA private argv_2109 and to
// @@ decipher using the RSA public argv_2109.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3770 () {
	string src_filename			= "C:\\new_engine\\SRC\\argv_3411\\Release\\a.txt";
	string ciphered_filename	= "C:\\new_engine\\SRC\\argv_3411\\Release\\a_ciphered.txt"; 
	string deciphered_filename	= "C:\\new_engine\\SRC\\argv_3411\\Release\\a_deciphered.txt"; 
	string private_keyfile		= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_priv_key.txt";
	string public_keyfile		= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_pub_key.txt";
	string symmetric_key		= "FEA02C3F000156EF";
	string gmp_libname			= "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";

	cerr << "----- encipher using private argv_2109 ----" << endl;
	argv_3745 (gmp_libname.c_str(), symmetric_key.c_str(), private_keyfile.c_str(), src_filename.c_str(), ciphered_filename.c_str());

	cerr << "----- decipher using public argv_2109 ----" << endl;
	argv_3743 (gmp_libname.c_str(), symmetric_key.c_str(), public_keyfile.c_str(), ciphered_filename.c_str(), deciphered_filename.c_str());

	if (argv_1449 (src_filename.c_str(), deciphered_filename.c_str()) == false) {
		cerr << "+++ ERROR: files are different !" << endl;
	}
	else {
		cerr << "argv_1396 comparison...[OK]" << endl;
	}
}

#if defined (__RSA_MMAP_TEST__)
	bool argv_3766 (argv_820 _private_key_file, argv_820 _symetric_key, argv_820 _source, argv_820 _dest) {
		bool bret = true;
		argv_841 argv_1873;
		string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
		argv_3517 argv_1993 = argv_1873.argv_2208 (libname.c_str());
		if (argv_1993 != argv_1847) {
			bret = false;
			cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
		}
		else {
			argv_1082 argv_3411;
			argv_3411.init (&argv_1873);
			argv_1085	private_key (argv_1873);

			fprintf (stderr, "loading private argv_2109 from argv_1396...\r\n");
			argv_1993 = argv_3411.argv_2207 (_private_key_file, _symetric_key, private_key);
			if (argv_1993 != argv_1847) {
				bret = false;
				string serror = argv_1087 (argv_1993);
				fprintf (stderr, "+++ ERROR: failed to argv_2198 private argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "private argv_2109...[LOADED FROM FILE]\r\n");
				fprintf (stderr, "enciphering argv_1396 : %s -> %s\r\n", _source, _dest);

				argv_836 mapper_src;
				argv_836 mapper_dest;

				argv_3862 * src_ptr = argv_2889;
				argv_3864   src_size = 0;
				argv_3862 * dest_ptr = argv_2889;
				argv_3864   dest_size = 0;

				// mmap the source argv_1396
				bool bret2 = mapper_src.argv_2464 (_source, argv_2466, src_ptr, src_size);
				if (bret2 == false) {
					bret = false;
					cerr << "+++ ERROR: failed to mmap source argv_1396 !" << endl;
				}
				else {
					cerr << "source argv_1396 mmapped" << endl;
					// compute the space needed for the destination argv_1396
					argv_1993 = argv_3411.argv_1025 (private_key.n, src_size, true, dest_size);
					if (argv_1993 != argv_1847) {
						bret = false;
						cerr << "+++ ERROR: 'argv_1025' failed !" << endl;
					}
					else {
						cerr << "destination argv_1396 size will be : " << dest_size << endl;
						// mmap the destination argv_1396
						bret2 = mapper_dest.argv_2464 (_dest, argv_2467, dest_ptr, dest_size);
						if (bret2 == false) {
							bret = false;
							cerr << "+++ ERROR: failed to mmap destination argv_1396 !" << endl;

							argv_3864 argv_1318, argv_1326;
							mapper_dest.argv_1757 (argv_1318, argv_1326);
							cerr << "argv_1318=" << argv_1318 << ", argv_1326=" << argv_1326 << endl;
						}
						else {
							cerr << "destination argv_1396 mmapped" << endl;
							argv_3864 actual_dest_size = 201274;
							argv_1993 = argv_3411.argv_1303 (src_ptr, src_size, dest_ptr, dest_size, actual_dest_size, private_key.d, private_key.n);
							fprintf (stderr, "encipher...[DONE]\r\n");
							if (argv_1993 != argv_1847) {
								bret = false;
								string serror = argv_1087 (argv_1993);
								fprintf (stderr, "encipher...[FAILED - %s]\r\n", serror.c_str());
							}
							else {
								fprintf (stderr, "encipher...[SUCCESS]\r\n");
								fprintf (stderr, "actual_dest_size = %u\n", actual_dest_size);
							}
							mapper_dest.argv_925 ();
						}
						mapper_src.argv_925 ();
					}
				}
			}
			private_key.argv_1197 (argv_1873);
			argv_1873.argv_3915 ();
		}
		return (bret);
	}
#endif // #if defined (__RSA_MMAP_TEST__)


#if defined (__RSA_MMAP_TEST__)
	bool argv_3765 (argv_820 _public_key_file, argv_820 _symetric_key, argv_820 _source, argv_820 _dest) {
		bool bret = true;
		argv_841 argv_1873;
		string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
		argv_3517 argv_1993 = argv_1873.argv_2208 (libname.c_str());
		if (argv_1993 != argv_1847) {
			cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
			bret = false;
		}
		else {
			argv_1082 argv_3411;
			argv_3411.init (&argv_1873);
			argv_1086	argv_3321 (argv_1873);

			fprintf (stderr, "loading public argv_2109 from argv_1396...\r\n");
			argv_1993 = argv_3411.argv_2207 (_public_key_file, _symetric_key, argv_3321);
			if (argv_1993 != argv_1847) {
				bret = false;
				string serror = argv_1087 (argv_1993);
				fprintf (stderr, "+++ ERROR: failed to argv_2198 private argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "public argv_2109...[LOADED FROM FILE]\r\n");
				fprintf (stderr, "enciphering argv_1396 : %s -> %s\r\n", _source, _dest);

				argv_836 mapper_src;
				argv_836 mapper_dest;

				argv_3862 * src_ptr = argv_2889;
				argv_3864   src_size = 0;
				argv_3862 * dest_ptr = argv_2889;
				argv_3864   dest_size = 0;

				// mmap the source argv_1396
				bool bret2 = mapper_src.argv_2464 (_source, argv_2466, src_ptr, src_size);
				if (bret2 == false) {
					bret = false;
					cerr << "+++ ERROR: failed to mmap source argv_1396 !" << endl;
				}
				else {
					cerr << "source argv_1396 mmapped" << endl;
					// compute the space needed for the destination argv_1396
					argv_1993 = argv_3411.argv_1025 (argv_3321.n, src_size, false, dest_size);
					if (argv_1993 != argv_1847) {
						bret = false;
						cerr << "+++ ERROR: 'argv_1025' failed !" << endl;
					}
					else {
						cerr << "destination argv_1396 size will be : " << dest_size << endl;
						// mmap the destination argv_1396
						bret2 = mapper_dest.argv_2464 (_dest, argv_2467, dest_ptr, dest_size);
						if (bret2 == false) {
							bret = false;
							cerr << "+++ ERROR: failed to mmap destination argv_1396 !" << endl;
						}
						else {
							cerr << "destination argv_1396 mmapped" << endl;
							argv_3864 actual_dest_size = 201274;
							argv_1993 = argv_3411.argv_1155 (src_ptr, src_size, dest_ptr, dest_size, actual_dest_size, argv_3321.e, argv_3321.n);
							fprintf (stderr, "decipher...[DONE]\r\n");
							if (argv_1993 != argv_1847) {
								bret = false;
								string serror = argv_1087 (argv_1993);
								fprintf (stderr, "decipher...[FAILED - %s]\r\n", serror.c_str());
							}
							else {
								fprintf (stderr, "encipher...[SUCCESS]\r\n");
								fprintf (stderr, "actual_dest_size = %u\n", actual_dest_size);
							}
							mapper_dest.argv_925 ();
						}
					}
					mapper_src.argv_925 ();
				}
			}
			argv_3321.argv_1197 (argv_1873);
			argv_1873.argv_3915 ();
		}
		return (bret);
	}
#endif // #if defined (__RSA_MMAP_TEST__)


#if defined (__RSA_MMAP_TEST__)
	void argv_3767 () {
		string private_keyfile	= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_priv_key.txt";
		string public_keyfile	= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_pub_key.txt";
		string plain_file		= "C:\\new_engine\\SRC\\argv_3411\\Release\\a.txt";
		string ciphered_file	= "C:\\new_engine\\SRC\\argv_3411\\Release\\a_ciphered.txt";
		string deciphered_file	= "C:\\new_engine\\SRC\\argv_3411\\Release\\a_deciphered.txt";
		string symetric_key		= "FEA02C3F000156EF";

		cerr << "------------- ENCIPHER -----------------" << endl;
		bool bret = argv_3766 (private_keyfile.c_str(), symetric_key.c_str(), plain_file.c_str(), ciphered_file.c_str());

		if (bret == true) {
			cerr << "------------- DECIPHER -----------------" << endl;
			argv_3765 (public_keyfile.c_str(), symetric_key.c_str(), ciphered_file.c_str(), deciphered_file.c_str());
		}
	}
#endif // #if defined (__RSA_MMAP_TEST__)

class argv_1084
{
private:
	map<string, bool>	argv_2503;
	map<string, bool>::iterator	argv_2462;

public:
	bool	argv_2006;
	bool	argv_2001;
	bool	argv_2000;
	bool	argv_2019;
	string	argv_3568;
	string	argv_1194;
	string	argv_3318;
	string	argv_3255;
	string	argv_1190;
	argv_3864	argv_2115;
	string	argv_2116;

	argv_1084 () {
		argv_2115					= 0;
		argv_2006				= false;
		argv_2001				= false;
		argv_2000				= false;
		argv_2019				= false;

		argv_2503["-genrsa"]		= true;
		argv_2503["-argv_2115"]		= true;
		argv_2503["-argv_1190"]		= true;
		argv_2503["-argv_3318"]	= true;
		argv_2503["-argv_3255"]	= true;
		argv_2503["-encipher"]		= true;
		argv_2503["-decipher"]		= true;
		argv_2503["-dest"]			= true;
		argv_2503["-verbose"]		= true;
	}

	void argv_1200 () {
		if (argv_2006 == true) {
			cerr << "genrsa : true" << endl;
		}
		else {
			cerr << "genrsa : false" << endl;
		}
		if (argv_2001 == true) {
			cerr << "encipher : true" << endl;
		}
		else {
			cerr << "encipher : false" << endl;
		}
		if (argv_2000 == true) {
			cerr << "decipher : true" << endl;
		}
		else {
			cerr << "decipher : false" << endl;
		}
		if (argv_2019 == true) {
			cerr << "verbose : true" << endl;
		}
		else {
			cerr << "verbose : false" << endl;
		}
		cerr << "source argv_1396 : "	<< argv_3568		<< endl;
		cerr << "argv_1194 : "		<< argv_1194	<< endl;
		cerr << "argv_3318 : "	<< argv_3318	<< endl;
		cerr << "argv_3255 : "	<< argv_3255	<< endl;
		cerr << "argv_1190 : "		<< argv_1190		<< endl;
		cerr << "argv_2115 : "		<< argv_2115		<< endl;
		cerr << "argv_2116 : "	<< argv_2116	<< endl;
	}

	bool argv_2007 (argv_820 _parameter) {
		bool bret = false;
		argv_2503.find (_parameter);
		argv_2462 = argv_2503.find (_parameter);
		if (argv_2462 != argv_2503.end()) {
			bret = true;
		}	
		return (bret);
	}

	void argv_3423 (argv_820 _var, argv_820 _val) {
		if (     strcmp (_var, "-genrsa") == 0) {
			argv_2006 = true;	
		}
		else if (strcmp (_var, "-argv_2115") == 0) {
			argv_2116 = _val;	
			argv_2115		= atoi (_val);
		}
		else if (strcmp (_var, "-argv_1190") == 0) {
			argv_1190 = _val;	
		}
		else if (strcmp (_var, "-argv_3318") == 0) {
			argv_3318 = _val;	
		}
		else if (strcmp (_var, "-argv_3255") == 0) {
			argv_3255 = _val;	
		}
		else if (strcmp (_var, "-encipher") == 0) {
			argv_2001 = true;	
			argv_3568	= _val;
		}
		else if (strcmp (_var, "-decipher") == 0) {
			argv_2000 = true;	
			argv_3568	= _val;
		}
		else if (strcmp (_var, "-dest") == 0) {
			argv_1194 = _val;
		}
		else if (strcmp (_var, "-verbose") == 0) {
			argv_2019 = true;
		}
	}
};

void argv_1228 () {
	cerr << "usage:" << endl; 
	cerr << "./a.out -genrsa -argv_2115 <size_in_bit> -argv_1190 <argv_2109> -argv_3318 <argv_1446> -argv_3255 <argv_1446> {-verbose}" << endl;
	cerr << "./a.out -encipher <source_filename> -dest <argv_1195> -argv_3318 <argv_1446> -argv_1190 <argv_2109> {-verbose}" << endl;
	cerr << "./a.out -encipher <source_filename> -dest <argv_1195> -argv_3255 <argv_1446> -argv_1190 <argv_2109> {-verbose}" << endl;
	cerr << endl;
	cerr << "./a.out -decipher <source_filename> -dest <argv_1195> -argv_3318 <argv_1446> -argv_1190 <argv_2109> {-verbose}" << endl;
	cerr << "./a.out -decipher <source_filename> -dest <argv_1195> -argv_3255 <argv_1446> -argv_1190 <argv_2109> {-verbose}" << endl;
}

argv_3517 argv_856 (argv_1084& _param) {
	argv_3517 argv_1993 = 0;
	argv_3517 nb_opa = 0;
	if (_param.argv_2006 == true) {
		nb_opa++;	
	}
	if (_param.argv_2001 == true) {
		nb_opa++;	
	}
	if (_param.argv_2000 == true) {
		nb_opa++;	
	}
	if (nb_opa == 0) {
		cerr << "+++ ERROR: please choose an operation : -genrsa, -encipher, -decipher" << endl;
		argv_1993 = 1;
	}
	else if (nb_opa > 1) {
		argv_1993 = 2;
		cerr << "+++ ERROR: multiple operations not allowed !!" << endl;
	}
	else { // user chose only argv_2929 operation 
		if (_param.argv_1190 == "") {
			cerr << "+++ ERROR: missing parameter : -argv_1190" << endl;
			argv_1993 = 3;
		}
		else if (_param.argv_1190.size() != 16) {
			cerr << "+++ ERROR: invalid parameter argv_3960 : -argv_1190 (length must be 16) !!" << endl;
			argv_1993 = 3;
		}

		if (argv_1993 == 0) {
			if (_param.argv_2006 == true) {
				if (_param.argv_2116 == "") {
					cerr << "+++ ERROR: missing parameter : -argv_2115" << endl;
					argv_1993 = 3;
				}
				else if ((_param.argv_2115 < 128) || (_param.argv_2115 > 8192)) {
					cerr << "+++ ERROR: invalid parameter argv_3960 -argv_2115 must be within range [128..8192]" << endl;
					argv_1993 = 3;
				}
				else if (_param.argv_3318 == "") {
					cerr << "+++ ERROR: missing parameter : -argv_3318" << endl;
					argv_1993 = 3;
				}
				else if (_param.argv_3255 == "") {
					cerr << "+++ ERROR: missing parameter : -argv_3255" << endl;
					argv_1993 = 3;
				}
			}
			else if ((_param.argv_2000 == true) || (_param.argv_2001 == true)) {
				if (_param.argv_3568 == "") {
					cerr << "+++ ERROR: missing parameter : source_filename" << endl;
					argv_1993 = 3;
				}
				else if (_param.argv_1194 == "") {
					cerr << "+++ ERROR: missing parameter : -dest" << endl;
					argv_1993 = 3;
				}
				else if ((_param.argv_3318 == "") && (_param.argv_3255 == "")) {
					cerr << "+++ ERROR: missing parameter : either -argv_3318, or -argv_3255" << endl;
					argv_1993 = 3;
				}
			}
		}
	}
	return (argv_1993);
}

argv_3517 argv_2970 (int _argc, char** _argv, argv_1084& _param) {
	argv_3517 argv_1993 = 0;
	for (argv_3517 i=1 ; i<_argc ; ) {
		// argv_1042 param & ensure that the param is known
		if (_param.argv_2007 (_argv[i]) == false) {
			argv_1993 = 1;
			cerr << "+++ ERROR: unknown parameter : '" << _argv[i] << "'" << endl;
			break;
		}

		if ((strcmp(_argv[i], "-genrsa") == 0) || (strcmp(_argv[i], "-verbose") == 0)) {
			_param.argv_3423 (_argv[i], "");
			i += 1;
		}
		else {
			// argv_1042 param argv_3960
			if ((i+1) >= _argc) {
				argv_1993 = 2;
				cerr << "+++ ERROR: missing argv_3960 for parameter '" << _argv[i] << "'" << endl; 
				break;
			}

			_param.argv_3423 (_argv[i], _argv[i+1]);
			i += 2;
		}
	}

	if (argv_1993 == 0) {
		argv_1993 = argv_856 (_param);
	}
	return (argv_1993);
}

#if defined (__TEST_RSA_MAIN__)
	int main(int argv_720, char* argv_721[]) {
		argv_3517 argv_1993 = 0;

		// argv_2198 the gmp DLL
		argv_841 argv_1873;
		string libname = "./gmp.dll";
		argv_1993 = argv_1873.argv_2208 (libname.c_str());
		if (argv_1993 != argv_1847) {
			cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
			argv_1993 = 5;
		}
		else {
			cerr << "GMP library argv_2221" << endl;
			argv_1082 argv_3411;
			argv_3411.init (&argv_1873);

			argv_1084 param;
			argv_1993 = argv_2970 (argv_720, argv_721, param);
			if (argv_1993 != 0) {
				argv_1228 ();	
				param.argv_1200 ();
			}
			else { // parameters are OK
				if (param.argv_2019 == true) {
					cerr << "parameters OK" << endl;
				}
				if (param.argv_2006 == true) {
					if (param.argv_2019 == true) {
						cerr << "generating RSA argv_2109 pair (argv_2109 size : " << param.argv_2115 << ")" << endl;
					}
					argv_3762 (param.argv_2115, param.argv_1190.c_str(), param.argv_3318.c_str(), param.argv_3255.c_str());
				}
				else {
					argv_1085 private_key (argv_1873);
					argv_1086	argv_3321 (argv_1873);

					if (param.argv_3318 != "") {
						if (param.argv_2019 == true) {
							cerr << "loading public argv_2109 from argv_1396 : " << param.argv_3318 << endl;
						}
						argv_1993 = argv_3411.argv_2207 (param.argv_3318.c_str(), param.argv_1190.c_str(), argv_3321);
						if (argv_1993 != argv_1847) {
							string serror = argv_1087 (argv_1993);
							fprintf (stderr, "+++ ERROR: failed to argv_2198 public argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
						}
					}
					else if (param.argv_3255 != "") {
						if (param.argv_2019 == true) {
							cerr << "loading private argv_2109 from argv_1396 : " << param.argv_3255 << endl;
						}
						argv_1993 = argv_3411.argv_2207 (param.argv_3255.c_str(), param.argv_1190.c_str(), private_key);
						if (argv_1993 != argv_1847) {
							string serror = argv_1087 (argv_1993);
							fprintf (stderr, "+++ ERROR: failed to argv_2198 private argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
						}
					}

					if (argv_1993 == argv_1847) {
						if (param.argv_2001 == true) {
							if (param.argv_3255 != "") {
								if (param.argv_2019 == true) {
									cerr << "encipher argv_1396     : " << param.argv_3568	<< endl;
									cerr << "to argv_1396           : " << param.argv_1194	<< endl;
									cerr << "using private argv_2109 : " << param.argv_3255 << endl;
								}
								argv_1993 = argv_3411.argv_1305 (param.argv_3568.c_str(), param.argv_1194.c_str(), private_key);
							}
							else if (param.argv_3318 != "") {
								if (param.argv_2019 == true) {
									cerr << "encipher argv_1396     : " << param.argv_3568	<< endl;
									cerr << "to argv_1396           : " << param.argv_1194	<< endl;
									cerr << "using public argv_2109  : " << param.argv_3318 << endl;
								}
								argv_1993 = argv_3411.argv_1305 (param.argv_3568.c_str(), param.argv_1194.c_str(), argv_3321);
							}
						}
						else if (param.argv_2000 == true) {
							if (param.argv_3255 != "") {
								if (param.argv_2019 == true) {
									cerr << "decipher argv_1396     : " << param.argv_3568	<< endl;
									cerr << "to argv_1396           : " << param.argv_1194	<< endl;
									cerr << "using private argv_2109 : " << param.argv_3255 << endl;
								}
								argv_1993 = argv_3411.argv_1157 (param.argv_3568.c_str(), param.argv_1194.c_str(), private_key);
							}
							else if (param.argv_3318 != "") {
								if (param.argv_2019 == true) {
									cerr << "decipher argv_1396     : " << param.argv_3568	<< endl;
									cerr << "to argv_1396           : " << param.argv_1194	<< endl;
									cerr << "using public argv_2109  : " << param.argv_3318 << endl;
								}
								argv_1993 = argv_3411.argv_1157 (param.argv_3568.c_str(), param.argv_1194.c_str(), argv_3321);
							}
						}
					}

					if (argv_1993 == argv_1847) {
						if (param.argv_2019 == true) {
							cerr << "operation success" << endl;
						}
					}
					else {
						string serror = argv_1087 (argv_1993);
						cerr << "operation FAILED ! - errno = " << serror << endl;
					}

					private_key.argv_1197 (argv_1873);
					argv_3321.argv_1197 (argv_1873);
				}
			}
			argv_1873.argv_3915 ();
		}

		if (argv_1993 == argv_1847) { // remap error argv_929
			argv_1993 = 0;
		}
		return (argv_1993);
	}
#endif // #if defined (__TEST_RSA_MAIN__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

