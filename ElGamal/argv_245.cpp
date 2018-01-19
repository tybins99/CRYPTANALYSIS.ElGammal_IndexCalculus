// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: elgamal.cpp
// @@ 
// @@ DESCRIPTION:
// @@ public argv_2109 encipher/decipher algorithms
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_312.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_831	
// @@
// @@ FUNCTION		:	argv_831			
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
// @@ Normal constructor of the 'argv_831' argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_831::argv_831 (argv_841& _gmp_tool) {
	construct (_gmp_tool);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_831	
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
// @@ This function permits to argv_3237 the 'argv_831'
// @@ argv_2908 before first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_831::construct (argv_841& _gmp_tool) {
	_gmp_tool.argv_1568 (p);
	_gmp_tool.argv_1568 (g);
	_gmp_tool.argv_1568 (argv_665);

	_gmp_tool.argv_1568 (argv_2953);	// just a argv_784 for speed optimisation
	_gmp_tool.argv_1568 (argv_2952);	// just a argv_784 for speed optimisation
	_gmp_tool.argv_1568 (argv_2929);			// just a argv_784 for speed optimisation
	_gmp_tool.argv_1568 (k);				// just a argv_784 for speed optimisation
	_gmp_tool.argv_1568 (argv_1717);			// just a argv_784 for speed optimisation
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_831	
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
// @@ This function permits to release the argv_1139 and memory
// @@ that were allocated and initialized by the 'construct'
// @@ function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_831::argv_1197 (argv_841& _gmp_tool) {
	_gmp_tool.argv_1551 (argv_665);
	_gmp_tool.argv_1551 (g);
	_gmp_tool.argv_1551 (p);

	_gmp_tool.argv_1551 (argv_2953);	// just a argv_784 for speed optimisation
	_gmp_tool.argv_1551 (argv_2952);	// just a argv_784 for speed optimisation
	_gmp_tool.argv_1551 (argv_2929);			// just a argv_784 for speed optimisation
	_gmp_tool.argv_1551 (k);				// just a argv_784 for speed optimisation
	_gmp_tool.argv_1551 (argv_1717);			// just a argv_784 for speed optimisation
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_831	
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
// @@ that contains 3 fields, each field being separated by
// @@ a space character. Each field being as follows :
// @@ variable=argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_831::argv_1361 (argv_841& _gmp_tool) {
	string p_s		= _gmp_tool.argv_3966 (p);
	string g_s		= _gmp_tool.argv_3966 (g);
	string alpha_s	= _gmp_tool.argv_3966 (argv_665);

	string total = "p=";
	total += p_s;
	total += " g=";
	total += g_s;
	total += " argv_665=";
	total += alpha_s;
	return (total);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_831	
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
// @@ int32_t : argv_1847 if success, 
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
int32_t argv_831::argv_2203 (argv_841& _gmp_tool, const char * _str) {
	int32_t argv_1993 = argv_1847;
	map<string, bool> m_mandatory;
	m_mandatory["p"]		= true;	
	m_mandatory["g"]		= true;	
	m_mandatory["argv_665"]	= true;	

	map<string, string> m_found;
	map<string, string>::iterator iter1, iter2, iter3;

	argv_1993 = argv_2974 (_str, m_mandatory, m_found);
	if (argv_1993 == argv_1847) {
		iter1 = m_found.find ("p");
		iter2 = m_found.find ("g");
		iter3 = m_found.find ("argv_665");
		if ((iter1==m_found.end()) || (iter2 == m_found.end()) || (iter3 == m_found.end())) {
			argv_1993 = argv_1834;
		}
		else {
			_gmp_tool.argv_1584 (p,		iter1->second.c_str(), 10);
			_gmp_tool.argv_1584 (g,		iter2->second.c_str(), 10);
			_gmp_tool.argv_1584 (argv_665,	iter3->second.c_str(), 10);
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_830	
// @@
// @@ FUNCTION		:	argv_830		
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
// @@ Normal constructor of the 'argv_830' argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_830::argv_830 (argv_841& _gmp_tool) {
	construct (_gmp_tool);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_830	
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
// @@ This function permits to argv_3237 the 'argv_830'
// @@ before first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_830::construct (argv_841& _gmp_tool) {
	_gmp_tool.argv_1568 (p);
	_gmp_tool.argv_1568 (g);
	_gmp_tool.argv_1568 (argv_665);
	_gmp_tool.argv_1568 (a);

	_gmp_tool.argv_1568 (argv_1189);	// just a argv_784 for speed optimisation
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_830	
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
// @@ This function permits to release all memory that was
// @@ allocated when calling the 'construct' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_830::argv_1197 (argv_841& _gmp_tool) {
	_gmp_tool.argv_1551 (argv_665);
	_gmp_tool.argv_1551 (g);
	_gmp_tool.argv_1551 (p);
	_gmp_tool.argv_1551 (a);

	_gmp_tool.argv_1551 (argv_1189);	// just a argv_784 for speed optimisation
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_830	
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
// @@ that contains 4 fields, each field being separated by
// @@ a space character. Each field being as follows :
// @@ variable=argv_3960.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_830::argv_1361 (argv_841& _gmp_tool) {
	string a_s		= _gmp_tool.argv_3966 (a);
	string p_s		= _gmp_tool.argv_3966 (p);
	string g_s		= _gmp_tool.argv_3966 (g);
	string alpha_s	= _gmp_tool.argv_3966 (argv_665);

	string total = "a=";
	total += a_s;
	total += " p=";
	total += p_s;
	total += " g=";
	total += g_s;
	total += " argv_665=";
	total += alpha_s;
	return (total);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_830	
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
// @@ int32_t : argv_1847 if success, 
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
int32_t argv_830::argv_2203 (argv_841& _gmp_tool, const char * _str) {
	int32_t argv_1993 = argv_1847;
	map<string, bool> m_mandatory;
	m_mandatory["a"]		= true;	
	m_mandatory["p"]		= true;	
	m_mandatory["g"]		= true;	
	m_mandatory["argv_665"]	= true;	

	map<string, string> m_found;
	map<string, string>::iterator iter1, iter2, iter3, iter4;

	argv_1993 = argv_2974 (_str, m_mandatory, m_found);
	if (argv_1993 == argv_1847) {
		iter1 = m_found.find ("p");
		iter2 = m_found.find ("g");
		iter3 = m_found.find ("argv_665");
		iter4 = m_found.find ("a");
		if ((iter1==m_found.end()) || (iter2 == m_found.end()) || (iter3 == m_found.end()) || (iter4 == m_found.end())) {
			argv_1993 = argv_1834;
		}
		else {
			_gmp_tool.argv_1584 (p,		iter1->second.c_str(), 10);
			_gmp_tool.argv_1584 (g,		iter2->second.c_str(), 10);
			_gmp_tool.argv_1584 (argv_665,	iter3->second.c_str(), 10);
			_gmp_tool.argv_1584 (a,		iter4->second.c_str(), 10);
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	argv_829			
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
// @@ Normal constructor of the 'argv_829' argv_2908.
// @@ It prepares the pseudo-random argv_1736 before
// @@ it's first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_829::argv_829 () {
	init_done		= false;
	argv_1874	= NULL;
	argv_3320	= "-----BEGIN ELGAMAL PUBLIC KEY-----";
	argv_3319	= "-----END ELGAMAL PUBLIC KEY-----";
	argv_3262	= "-----BEGIN ELGAMAL PRIVATE KEY-----";
	argv_3261	= "-----END ELGAMAL PRIVATE KEY-----";
	argv_2175	= "\n"; // newline is the UNIX newline !

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_3824;
	GetLocalTime (&argv_3824);
	srand (argv_3824.wMilliseconds);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct timeval argv_3733;
	gettimeofday (&argv_3733, NULL);
	srand (argv_3733.tv_usec);
#endif // #if defined (__LINUX_OS__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	~argv_829			
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
// @@ Destructor of the 'argv_829' argv_2908.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_829::~argv_829 () {
	if (init_done == true) {
		argv_1874	= NULL;
		init_done		= false;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	init			
// @@
// @@ INPUT			:
// @@ _gmp_tool_ptr: argv_841 *: pointer on an argv_2908 containing
// @@ all the function pointers of the GMP library.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 the 'argv_829'
// @@ argv_2908 before it's first use.
// @@
// @@ CONTRACT 		:	
// @@ - 'init' must not have been called prior to this call.
// @@ - '_gmp_tool_ptr' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_829::init (argv_841 * _gmp_tool_ptr) {
	int32_t argv_1993 = argv_1847;
	if (init_done == true) {
		argv_1993 = argv_1823;
	}
	else if (_gmp_tool_ptr == NULL) {
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
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	argv_1724			
// @@
// @@ INPUT			:
// @@ _key_size_in_bit: int32_t: the size of the argv_2109 in bit.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _public_key: argv_831: the public argv_2109 that must 
// @@  be generated.
// @@	
// @@ _private_key: argv_830: the public argv_2109 that must 
// @@  be generated.
// @@
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1847 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a argv_2109 pair composed of :
// @@ - a public argv_2109
// @@ - a private argv_2109.
// @@ Notice that the inner GMP variables of the public and private
// @@ argv_2109 must have been initialized by the caller prior to this call.
// @@
// @@ CONTRACT 		:	
// @@ - 'init' function must have been called prior to this call.
// @@ - the inner GMP variables of the public and private argv_2109 must 
// @@   have been initialized by the caller prior to this call.
// @@ - '_key_size_in_bit' parameter must not be smaller than 
// @@   the minimum argv_3960 argv_1298.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_829::argv_1724 (int32_t _key_size_in_bit, argv_831& _public_key, argv_830& _private_key) {
	int32_t argv_1993 = argv_1847;
	
	if (init_done == false) {
		argv_1993 = argv_1824;
	}
	else if (_key_size_in_bit < argv_1298) {
		argv_1993 = argv_1830;
	}
	else { // parameters are correct
		argv_2793 q, argv_2953, argv_2929;

		argv_1874->argv_1568 (q);
		argv_1874->argv_1568 (argv_2953);
		argv_1874->argv_1568 (argv_2929);
		argv_1874->argv_1585 (argv_2929, 1);

		// generate a huge strong prime number
		// (notice that we save the argv_3960 of (p-1)/2 in the 'q' parameter for
		// convenience).
		cerr << "argv_2109 size in bit : " << _key_size_in_bit << endl;
		cerr << "step 1...";
		argv_1874->argv_1729 (_key_size_in_bit, _private_key.p, q);
		cerr << "step 1...[DONE]";

		// choose a primitive root of this strong prime (the argv_1736 of the multiplicative group)
		cerr << "step 2...";
		argv_1874->argv_1452 (q, _private_key.p, _private_key.g);

		// compute p-2 and use it to generate a random number in [1..p-2]
		argv_1874->argv_1590 (argv_2953, _private_key.p, 2); 
		argv_1874->argv_1726 (argv_2929, argv_2953, _private_key.a);

		// compute argv_665 = g^a mod p
		argv_1874->argv_1580 (_private_key.argv_665, _private_key.g, _private_key.a, _private_key.p);

		// copy the common part of the private argv_2109 to the public argv_2109
		argv_1874->fp_mpz_set (_public_key.p, _private_key.p);
		argv_1874->fp_mpz_set (_public_key.g, _private_key.g);
		argv_1874->fp_mpz_set (_public_key.argv_665, _private_key.argv_665);
		cerr << "[DONE]" << endl;

		argv_1874->argv_1551 (argv_2929);
		argv_1874->argv_1551 (argv_2953);
		argv_1874->argv_1551 (q);		
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	argv_1362			
// @@
// @@ INPUT			:
// @@ _public_key: argv_831: the public argv_2109 to export.	
// @@
// @@ _symetric_key: the symetric argv_2109 to be used in order to argv_616
// @@  more security to the exported argv_2109. 
// @@
// @@ _filename: const char *: argv_2817 of the destination argv_1396 that must receive
// @@  the export argv_3402.
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
// @@ This function permits to export a given public argv_2109 to the 
// @@ argv_1396 whose argv_2817 is given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_829::argv_1362 (argv_831& _public_key, const char * _symetric_key, const char * _filename) {
	int32_t argv_1993 = argv_1847;
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
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	argv_1362			
// @@
// @@ INPUT			:
// @@ _private_key: argv_830: the private argv_2109 to export.	
// @@
// @@ _symetric_key: the symetric argv_2109 to be used in order to argv_616
// @@  more security to the exported argv_2109.
// @@
// @@ _filename: const char *: argv_2817 of the destination argv_1396 that must receive
// @@  the export argv_3402.
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
// @@ This function permits to export a given private argv_2109 to the 
// @@ argv_1396 whose argv_2817 is given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_829::argv_1362 (argv_830& _private_key, const char * _symetric_key, const char * _filename) {
	int32_t argv_1993 = argv_1847;
	if (init_done == false) {
		argv_1993 = argv_1824;
	}
	else {
		string plain = _private_key.argv_1361 (*argv_1874);
		int32_t argv_1993 = argv_4008 (plain.c_str(), _symetric_key, _filename, false, argv_3320.c_str(), argv_3262.c_str(), argv_3319.c_str(), argv_3261.c_str(), argv_2175.c_str());
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	argv_2207			
// @@
// @@ INPUT			:
// @@ _filename: const char *: argv_2817 of the argv_1396 where the argv_2109 is to be argv_2221
// @@   from.
// @@ _symetric_key: const char *: symetric argv_2109 to be used to argv_1371 the plain
// @@   argv_3776 content that represents the public argv_2109.	
// @@
// @@ _public_key : argv_831: the destination argv_2109 where the argv_2198
// @@   argv_3402 is to be saved to.
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
// @@ This function permits to initialize a public argv_2109 using a
// @@ argv_1396 that contains the enciphered argv_3402 of argv_2109 exportation.
// @@
// @@ CONTRACT 		:	
// @@ - 'init' must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_829::argv_2207 (const char * _filename, const char * _symetric_key, argv_831& _public_key) {
	int32_t argv_1993 = argv_1847;
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
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	argv_2207			
// @@
// @@ INPUT			:
// @@ _filename: const char *: argv_2817 of the argv_1396 where the argv_2109 is to be argv_2221
// @@   from.
// @@ _symetric_key: const char *: symetric argv_2109 to be used to argv_1371 the plain
// @@   argv_3776 content that represents the public argv_2109.	
// @@
// @@ _private_key : argv_830: the destination argv_2109 where the argv_2198
// @@   argv_3402 is to be saved to.
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
// @@ This function permits to initialize a private argv_2109 using a
// @@ argv_1396 that contains the enciphered argv_3402 of argv_2109 exportation.
// @@
// @@ CONTRACT 		:	
// @@ - 'init' must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_829::argv_2207 (const char * _filename, const char * _symetric_key, argv_830& _private_key) {
	int32_t argv_1993 = argv_1847;
	string load_result;
	argv_1993 = argv_4009 (_filename, _symetric_key, false, load_result, argv_3320.c_str(), argv_3319.c_str(), argv_3262.c_str(), argv_3261.c_str());
	if (argv_1993 == argv_1847) {
		argv_1993 = _private_key.argv_2203 (*argv_1874, load_result.c_str());
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	argv_1301		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _input: argv_2793: the argv_1139 to encipher.
// @@
// @@ _lambda: argv_2793: argv_2929 part of the elgamal formula.
// @@ 
// @@ _sigma: argv_2793: argv_2929 part of the elgamal formula.
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1847
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher a given input number
// @@ using the el gamal equations, to be precise, the following
// @@ numbers are generated :
// @@ - lambda = argv_665^k mod p
// @@ - sigma  = (input * (argv_665^k)) mod p
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_829::argv_1301 (argv_831& _public_key, argv_2793 _input, argv_2793 _lambda, argv_2793 _sigma) {
	int32_t argv_1993 = argv_1847;

	// choose a random number k that has the following
	// property : Choose a secret random number k in [1..p-2] with argv_1717(k, p - 1) = 1 
	bool argv_1261 = false;
	do {
		argv_1874->argv_1726 (_public_key.argv_2929, _public_key.argv_2953, _public_key.k);
		argv_1874->argv_1564 (_public_key.argv_1717, _public_key.k, _public_key.argv_2952);	
		if (argv_1874->argv_1554 (_public_key.argv_1717, 1) == 0) {
			argv_1261 = true;	
        }
	}
	while (argv_1261 == false);

	// compute lambda = argv_665^k mod p
	argv_1874->argv_1580 (_lambda, _public_key.g, _public_key.k, _public_key.p);

	// compute sigma = (input * (argv_665^k)) mod p
	argv_1874->argv_1580	(_sigma, _public_key.argv_665, _public_key.k, _public_key.p);
	argv_1874->argv_1574	(_sigma, _input, _sigma);
	argv_1874->argv_1573	(_sigma, _sigma, _public_key.p);

	return (argv_1993);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	argv_1153			
// @@
// @@ INPUT			:
// @@ _private_key: argv_830& : the private argv_2109 to use
// @@  for decipher.	
// @@
// @@ _lambda: argv_2793 : argv_2929 part of the el gamal formula.
// @@
// @@ _sigma: argv_2793 : argv_2929 part of the el gamal formula.
// @@
// @@ _plain : argv_2793 : the retrieved plain argv_1139.
// @@ 
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the plain from
// @@ the couple '_lambda' and '_sigma' using the private
// @@ argv_2109 given as a parameter.
// @@
// @@ NOTICE: the caller is supposed to have pre-computed the 
// @@         argv_3960 of (p-1-a).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_829::argv_1153 (argv_830& _private_key, argv_2793 _lambda, argv_2793 _sigma, argv_2793 _plain) {
	int32_t argv_1993 = argv_1847;

	argv_1874->argv_1580	(_plain, _lambda, _private_key.a, _private_key.p);
	argv_1874->argv_1571 (_plain, _plain, _private_key.p);
	argv_1874->argv_1574	(_plain, _plain, _sigma);
	argv_1874->argv_1573 (_plain, _plain, _private_key.p);
	string stmp = argv_1874->argv_3966 (_plain);

	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	argv_1305			
// @@
// @@ INPUT			:
// @@ _src_filename: const char *: argv_2817 of the plain argv_1396 to encipher.
// @@
// @@ _dst_filename: const char *: argv_2817 of the ciphered destination argv_1396.	
// @@
// @@ _public_key: argv_831&: public argv_2109 to use for encipher. 
// @@
// @@ _key_size_in_bit: uint32_t: size in bit of the public argv_2109.  
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1847 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1396 whose argv_2817 is
// @@ given as the '_src_filename' parameter into the destination
// @@ argv_1396 whose argv_2817 is given as the '_dst_filename' parameter using
// @@ the public argv_2109 '_public_key' whose length is given by the
// @@ '_key_size_in_bit' parameter.
// @@ 
// @@ NOTICE : the Elgamal scheme does not permit to encipher using the 
// @@ private argv_2109 so we must encipher using the public argv_2109 and decipher 
// @@ using the private argv_2109.
// @@
// @@ CONTRACT 		:	
// @@ - '_src_filename' parameter must not be a NULL pointer.
// @@ - '_dst_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_829::argv_1305 (const char * _src_filename, const char * _dst_filename, argv_831& _public_key, uint32_t _key_size_in_bit) {
	int32_t argv_1993 = argv_1847;

	if ((_src_filename == NULL) || (_dst_filename==NULL)) {
		argv_1993 = argv_1830;
	}
	else { // parameters are OK
		// determine the source argv_1396 size
		uint32_t argv_3570 = argv_1746 (_src_filename);
		// determine the maximum argv_753 size
		string p_as_string = argv_1874->argv_3966 (_public_key.p);
		// ensure that each argv_753 length will be in the range [1..p-1]
		// as we remove argv_2929 figure, the argv_753 will represent an integer smaller than p
		// and we also argv_616 argv_2929 byte per argv_753 to avoid zero problem => need to do minus 1
		size_t p_size		= p_as_string.size ();
		uint32_t argv_754 = (_key_size_in_bit / 8) - 2;

		uint32_t argv_2870	= argv_3570 / argv_754;
		uint32_t nb_remaining	= argv_3570 - (argv_2870 * argv_754);

		cerr << "========== argv_1305 =============" << endl;
		cerr << "argv_3570 = " << argv_3570 << endl;
		cerr << "size of p     = " << p_size << endl;
		cerr << "argv_754    = " << argv_754 << endl;
		cerr << "argv_2870 = " << argv_2870 << endl;
		cerr << "nb_remaining  = " << nb_remaining << endl;

		// open the source argv_1396 
		cerr << "opening source argv_1396" << endl;
		FILE * argv_1626 = fopen (_src_filename, "rb");
		if (! argv_1626) {
			argv_1993 = argv_1811;
		}
		else { // source argv_1396 opened succesfully
			// open the destination argv_1396
			cerr << "opening destination argv_1396 : "<< _dst_filename << endl;
			FILE * argv_1497 = fopen (_dst_filename, "wb");
			if (! argv_1497) {
				argv_1993 = argv_1808;
			}
			else { // destination argv_1396 opened succesfully
				cerr << "all necessary files opened" << endl;
				string	hex_str;
				string	input_str;
				string	lambda_str;
				string	sigma_str;

				argv_2793 vartmp, lambda, sigma;

				argv_1874->argv_1568 (vartmp);
				argv_1874->argv_1568 (lambda);
				argv_1874->argv_1568 (sigma);

				// compute necessary constants
				argv_1874->argv_1590 (_public_key.argv_2953, _public_key.p, 2); 
				argv_1874->argv_1590 (_public_key.argv_2952, _public_key.p, 1); 
				argv_1874->argv_1585 (_public_key.argv_2929, 1);

				uint8_t * argv_3567 = new (std::nothrow) uint8_t[argv_754];
				if (argv_3567 == NULL) {
					argv_1993 = argv_1835;
				}
				else { // memory allocation success
					//FILE * argv_1544 = fopen ("C:\\log_cipher.txt", "wb");
/*
					fprintf (argv_1544, "argv_3570 = %u\r\n", argv_3570);
					fprintf (argv_1544, "size of p     = %u\r\n", p_size);
					fprintf (argv_1544, "argv_754    = %u\r\n", argv_754);
					fprintf (argv_1544, "argv_2870 = %u\r\n", argv_2870);
					fprintf (argv_1544, "nb_remaining  = %u\r\n", nb_remaining);
					fprintf (argv_1544, "p = %s (p.size = %d)\r\n", p_as_string.c_str(), p_as_string.size());
					fprintf (argv_1544, "key_size_in_bits = %d\r\n", _key_size_in_bit);
*/
					// read all full blocks and encipher them
					for (uint32_t i=0 ; i<argv_2870 ; i++) {
						if (fread (argv_3567, 1, argv_754, argv_1626) != argv_754) {
							argv_1993 = argv_1809;
							break;
						}
						else {
							argv_1908 (argv_3567, argv_754, hex_str);
							//fprintf (argv_1544, "hex_str = %s (hex_str.size = %u)\r\n", hex_str.c_str(), hex_str.size ());
							hex_str = "F" + hex_str; // to avoid "zero" problem
							//fprintf (argv_1544, "modified hex_str = %s (hex_str.size = %u)\r\n", hex_str.c_str(), hex_str.size ());

							argv_1874->argv_1584 (vartmp, hex_str.c_str(), 16);
							argv_1301 (_public_key, vartmp, lambda, sigma);
							input_str	= argv_1874->argv_3966 (vartmp);
/*
							{
								argv_2793 argv_2952;
								argv_1874->argv_1568 (argv_2952);
								argv_1874->fp_mpz_set (argv_2952, _public_key.p);
								argv_1874->argv_1590 (argv_2952, argv_2952, 1);  

								if (argv_1874->argv_1553 (vartmp, argv_2952) >= 0) {
									//fprintf (argv_1544, "argv_753 argv_3960 = %s\r\n", input_str.c_str());
									cerr << "+++ ERROR: argv_753 greater or equal to p !!" << endl;
									//fclose (argv_1544);
									ExitProcess (0);
								}
								argv_1874->argv_1551 (argv_2952);
							}*/

							lambda_str	= argv_1874->argv_3966 (lambda); 
							sigma_str	= argv_1874->argv_3966 (sigma); 
							
							argv_2962 (lambda_str,	p_size);
							argv_2962 (sigma_str,	p_size);
							fprintf (argv_1497, "%s%s", lambda_str.c_str(), sigma_str.c_str());

							//fprintf (argv_1544, "input_size=%d, lambda_size=%d, sigma_size=%d\r\n", input_str.size (), lambda_str.size(), sigma_str.size());
							//fprintf (argv_1544, "[%s] => [%s]===[%s]\r\n", input_str.c_str(), lambda_str.c_str(), sigma_str.c_str());

							//fclose (argv_1544);
							//argv_1544 = fopen ("C:\\log_cipher.txt", "ab");
						}
					}

					// process remaining part of the argv_1396 (if any)
					if (nb_remaining > 0) {
						if (fread (argv_3567, 1, nb_remaining, argv_1626) != nb_remaining) {
							argv_1993 = argv_1809;
						}
						else {
							argv_1908 (argv_3567, nb_remaining, hex_str);
							//fprintf (argv_1544, "hex_str = %s\r\n", hex_str.c_str());
							hex_str = "F" + hex_str; // to avoid "zero" problem

							argv_1874->argv_1584 (vartmp, hex_str.c_str(), 16);
							argv_1301 (_public_key, vartmp, lambda, sigma);
							//input_str	= argv_1874->argv_3966 (vartmp);
							lambda_str	= argv_1874->argv_3966 (lambda); 
							sigma_str	= argv_1874->argv_3966 (sigma); 

							argv_2962 (lambda_str,	p_size);
							argv_2962 (sigma_str,	p_size);
							fprintf (argv_1497, "%s%s", lambda_str.c_str(), sigma_str.c_str());
/*
							fprintf (argv_1544, "input_size=%d, lambda_size=%d, sigma_size=%d\r\n", input_str.size (), lambda_str.size(), sigma_str.size());
							fprintf (argv_1544, "[%s] => [%s]===[%s]\r\n", input_str.c_str(), lambda_str.c_str(), sigma_str.c_str());
							*/
						}
					}
					//fclose (argv_1544);
					delete [] argv_3567;
				}

				argv_1874->argv_1551 (vartmp);
				argv_1874->argv_1551 (lambda);
				argv_1874->argv_1551 (sigma);

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
// @@ CLASS			:	argv_829	
// @@
// @@ FUNCTION		:	argv_1305			
// @@
// @@ INPUT			:
// @@ _src_filename: const char *: argv_2817 of the plain argv_1396 to encipher.
// @@
// @@ _dst_filename: const char *: argv_2817 of the ciphered destination argv_1396.	
// @@
// @@ _private_key: argv_830&: public argv_2109 to use for encipher. 
// @@
// @@ _key_size_in_bit: uint32_t: size in bit of the private argv_2109.  
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1847 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1396 whose argv_2817 is
// @@ given as the '_src_filename' parameter into the destination
// @@ argv_1396 whose argv_2817 is given as the '_dst_filename' parameter using
// @@ the private argv_2109 '_private_key' whose length is given by the
// @@ '_key_size_in_bit' parameter.
// @@ 
// @@ NOTICE : the Elgamal scheme does not permit to encipher using the 
// @@ private argv_2109 so we must encipher using the public argv_2109 and decipher 
// @@ using the private argv_2109.
// @@
// @@ CONTRACT 		:	
// @@ - '_src_filename' parameter must not be a NULL pointer.
// @@ - '_dst_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_829::argv_1157 (const char * _src_filename, const char * _dst_filename, argv_830& _private_key, uint32_t _key_size_in_bit) {
	cerr << "decipher...[START]" << endl;
	int32_t argv_1993 = argv_1847;
	if ((_src_filename == NULL) || (_dst_filename==NULL)) {
		argv_1993 = argv_1830;
	}
	else { // parameters are OK
		// determine the source argv_1396 size
		uint32_t argv_3570 = argv_1746 (_src_filename);
		//cerr << "argv_3570 = " << argv_3570 << endl;

		// open the source argv_1396 
		FILE * argv_1626 = fopen (_src_filename, "rb");
		if (! argv_1626) {
			argv_1993 = argv_1811;
		}
		else { // source argv_1396 opened succesfully
			// open the destination argv_1396
			FILE * argv_1497 = fopen (_dst_filename, "wb");
			if (! argv_1497) {
				argv_1993 = argv_1813;
			}
			else { // destination argv_1396 opened succesfully
				// determine the maximum argv_753 size
				string p_as_string	= argv_1874->argv_3966 (_private_key.p);
				size_t p_size			= p_as_string.size ();
				uint32_t argv_754		= p_size * 2; // because of lambda and sigma
				uint32_t plain_size		= 0;

				uint32_t argv_2870	= argv_3570 / argv_754;
				uint32_t nb_remaining	= argv_3570 - (argv_2870 * argv_754);
				cerr << "===== decipher ======" << endl;
				cerr << "argv_3570 = " << argv_3570 << endl;
				cerr << "size of p     = " << p_size << endl;
				cerr << "argv_754    = " << argv_754 << endl;
				cerr << "argv_2870 = " << argv_2870 << endl;
				cerr << "nb_remaining  = " << nb_remaining << endl;

				// we must always have entire blocks
				if (nb_remaining > 0) {
					argv_1993 = argv_1814;
				}
				else if ((argv_2870 % 2) != 0) {
					argv_1993 = argv_1817;
				}
				else { // we have only complete blocks => ok to proceed
					uint32_t output_size = 0;
					argv_2793 lambda, sigma, plain;
					string plain_str;
					argv_1874->argv_1568 (lambda);
					argv_1874->argv_1568 (sigma);
					argv_1874->argv_1568 (plain);

					char * lambda_buf			= new (std::nothrow) char[p_size+1]; // for '\0'
					char * sigma_buf			= new (std::nothrow) char[p_size+1]; // for '\0'
					uint8_t * hex_buf				= new (std::nothrow) uint8_t[p_size]; 
					uint32_t   actual_output_size	= 0;

					if ((lambda_buf == NULL) || (sigma_buf == NULL) || (hex_buf==NULL)) {
						argv_1993 = argv_1835;
					}
					else {
						for (uint32_t i=0 ; i<argv_2870 ; i++) {
							// read lambda
							if (fread (lambda_buf, 1, p_size, argv_1626) != p_size) {
								argv_1993 = argv_1815; 
								break;
							}
							
							// read sigma
							if (fread (sigma_buf, 1, p_size, argv_1626) != p_size) {
								argv_1993 = argv_1815; 
								break;
							}

							// decipher using lambda and sigma
							lambda_buf[p_size]	= '\0';
							sigma_buf[p_size]	= '\0';
							argv_1874->argv_1584 (lambda, lambda_buf, 10);
							argv_1874->argv_1584 (sigma,  sigma_buf,  10);

							argv_1153 (_private_key, lambda, sigma, plain);
							
							// convert the argv_3402 to string
							plain_str = argv_1874->argv_3966 (plain, true);

							// remove the trailing 'F'
							plain_str = plain_str.substr (1, plain_str.size());
							argv_3615 (plain_str.c_str(), plain_str.size (), hex_buf, output_size, actual_output_size);
							if (fwrite (hex_buf, 1, output_size, argv_1497) != output_size) {
								argv_1993 = argv_1816;
								break;
							}
						}

						delete [] lambda_buf;
						delete [] sigma_buf;
						delete [] hex_buf;
					}

					argv_1874->argv_1551 (plain);
					argv_1874->argv_1551 (sigma);
					argv_1874->argv_1551 (lambda);
				}

				if (fclose (argv_1497) != 0) {
					if (argv_1993 == argv_1847) { // don't override previous errors
						argv_1993 = argv_1812;
					}
				}
			}
			fclose (argv_1626);
		}
	}
	cerr << "decipher...[DONE]" << endl;
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3747		
// @@
// @@ INPUT			:	
// @@ uint32_t : _key_size_in_bits: the length of the argv_2109 to be
// @@   generated.
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
// @@ This function permits to test the el gamal argv_2109 argv_1734 
// @@ and the argv_2109 export features.
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3747 (uint32_t _key_size_in_bits) {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_829 elgamal;
		elgamal.init (&argv_1873);

		argv_830	private_key (argv_1873);
		argv_831		argv_3321 (argv_1873);

		cerr << "generating argv_2109 pair..." << endl;
		argv_1993 = elgamal.argv_1724 (_key_size_in_bits, argv_3321, private_key);
		if (argv_1993 != argv_1847) {
			cerr << "+++ ERROR: argv_1724 failed !" << endl;
		}
		else {
			cerr << "exporting argv_2109 to argv_1396..." << endl;
			string a_s		= argv_1873.argv_3966 (private_key.a);
			string p_s		= argv_1873.argv_3966 (private_key.p);
			string g_s		= argv_1873.argv_3966 (private_key.g);
			string alpha_s	= argv_1873.argv_3966 (private_key.argv_665);
			{
				FILE * fplog = fopen ("C:\\key_clear.txt", "wb");
				if (fplog) {
					fprintf (fplog, "==== PLAIN: private argv_2109 ===\r\n");
					fprintf (fplog, "p=%s\r\n", p_s.c_str());
					fprintf (fplog, "g=%s\r\n", g_s.c_str());
					fprintf (fplog, "argv_665=%s\r\n", alpha_s.c_str());
					fprintf (fplog, "a=%s\r\n", a_s.c_str());
					fprintf (fplog, "\r\n==== PLAIN: public argv_2109 ===\r\n");
					p_s			= argv_1873.argv_3966 (argv_3321.p);
					g_s			= argv_1873.argv_3966 (argv_3321.g);
					alpha_s		= argv_1873.argv_3966 (argv_3321.argv_665);
					fprintf (fplog, "p=%s\r\n", p_s.c_str());
					fprintf (fplog, "g=%s\r\n", g_s.c_str());
					fprintf (fplog, "argv_665=%s\r\n", alpha_s.c_str());
					fclose (fplog);
				}
			}

			argv_1993 = elgamal.argv_1362 (private_key, "FEA02C3F000156EF", "C:\\cle_privee.txt");
			if (argv_1993 != argv_1847) {
				cerr << "+++ failed to export argv_2109 to argv_1396" << endl;
				string serror = argv_1087 (argv_1993);
				cerr << serror << endl;
			}
//			else {
//				cerr << "private argv_2109 export success" << endl;
//			}

			argv_1993 = elgamal.argv_1362 (argv_3321, "FEA02C3F000156EF", "C:\\cle_publique.txt");
			if (argv_1993 != argv_1847) {
				cerr << "+++ failed to export argv_2109 to argv_1396" << endl;
				string serror = argv_1087 (argv_1993);
				cerr << serror << endl;
			}
//			else {
//				cerr << "public argv_2109 export success" << endl;
//			}
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3758		
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
// @@ This function permits to test the loading feature that
// @@ imports keys from files that were generated during an export.
// @@
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3758 () {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_829 elgamal;
		elgamal.init (&argv_1873);
		FILE * fplog = fopen ("C:\\test_import_keys_log.txt", "wb");
		cerr << "see log argv_1396 : " << "test_import_keys_log.txt" << endl;

		argv_830	private_key (argv_1873);
		argv_831		argv_3321	(argv_1873);

		//fprintf (fplog, "loading public argv_2109 from argv_1396...\r\n");
		argv_1993 = elgamal.argv_2207 ("C:\\cle_publique.txt", "FEA02C3F000156EF", argv_3321);
		if (argv_1993 != argv_1847) {
			string serror = argv_1087 (argv_1993);
			//fprintf (fplog, "+++ ERROR: failed to argv_2198 public argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
		}
		else {
			//fprintf (fplog, "public argv_2109...[LOADED FROM FILE]\r\n");
			//fprintf (fplog, "loading private argv_2109 from argv_1396...\r\n");
			argv_1993 = elgamal.argv_2207 ("C:\\cle_privee.txt", "FEA02C3F000156EF", private_key);
			if (argv_1993 != argv_1847) {
				string serror = argv_1087 (argv_1993);
				//fprintf (fplog, "+++ ERROR: failed to argv_2198 private argv_2109 from argv_1396 (%s)\r\n", serror.c_str());
			}
			else {
				//fprintf (fplog, "private argv_2109...[LOADED FROM FILE]\r\n");
				string pub_str	= argv_3321.argv_1361 (argv_1873);
				string priv_str = private_key.argv_1361 (argv_1873);
				
				//fprintf (fplog, "=== public argv_2109 ===\r\n%s\r\n", pub_str.c_str());
				//fprintf (fplog, "=== private argv_2109 ===\r\n%s\r\n", priv_str.c_str());
			}
		}
		fclose (fplog);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3744		
// @@
// @@ INPUT			:	
// @@ uint32_t : _key_size_in_bits: length of the argv_2109 in argv_752.
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
// @@ This function permits to test the argv_1396 enciphering
// @@ feature.
// @@
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3744 (uint32_t _key_size_in_bits) {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_829 elgamal;
		elgamal.init (&argv_1873);
		argv_831		argv_3321	(argv_1873);
		string source_file	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a.txt";
		string argv_1194	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a_ciphered.txt";

		argv_1993 = elgamal.argv_2207 ("C:\\cle_publique.txt", "FEA02C3F000156EF", argv_3321);
		if (argv_1993 != argv_1847) {
			string serror = argv_1087 (argv_1993);
			cerr << "+++ ERROR: failed to argv_2198 public argv_2109 from argv_1396 - errno = " << serror.c_str() << endl;
		}
		else {
			string source_file	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a.txt";
			string argv_1194	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a_ciphered.txt";

			cerr << "encipher...[START]" << endl;
			argv_1993 = elgamal.argv_1305 (source_file.c_str(), argv_1194.c_str(), argv_3321, _key_size_in_bits);
			cerr << "encipher...[DONE]" << endl;
			if (argv_1993 != argv_1847) {
				string serror = argv_1087 (argv_1993);
				cerr << "+++ ERROR: failed to encipher argv_1396 - errno = " << serror.c_str() << endl;
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
// @@ FUNCTION		:	argv_3741		
// @@
// @@ INPUT			:	
// @@ uint32_t : _key_size_in_bits: length of the argv_2109 in argv_752.
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
// @@ This function permits to test the argv_1396 deciphering
// @@ feature.
// @@
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3741 (uint32_t _key_size_in_bits) {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_829 elgamal;
		elgamal.init (&argv_1873);
		argv_830	private_key (argv_1873);
		argv_1993 = elgamal.argv_2207 ("C:\\cle_privee.txt", "FEA02C3F000156EF", private_key);
		if (argv_1993 != argv_1847) {
			string serror = argv_1087 (argv_1993);
			cerr << "+++ ERROR: failed to argv_2198 private argv_2109 from argv_1396 - errno = " << serror.c_str() << endl;
		}
		else {
			string source_file	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a_ciphered.txt";
			string argv_1194	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a_deciphered.txt";

			argv_1993 = elgamal.argv_1157 (source_file.c_str(), argv_1194.c_str(), private_key, _key_size_in_bits);
			if (argv_1993 != argv_1847) {
				string serror = argv_1087 (argv_1993);
				cerr << "+++ ERROR: failed to decipher argv_1396 - errno = " << serror.c_str() << endl;
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
// @@ FUNCTION		:	argv_3768		
// @@
// @@ INPUT			:	
// @@ uint32_t : _key_size_in_bits: length of the argv_2109 in argv_752.
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
// @@ This function permits to test the prime random argv_1734
// @@ that is provided by the argv_841 argv_2908.
// @@
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3768 (uint32_t _size_in_bit) {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_2793 p, q;
		argv_1873.argv_1568 (p);
		argv_1873.argv_1568 (q);
		
		argv_1873.argv_1727 (_size_in_bit, p);
		argv_1873.argv_1727 (_size_in_bit, q);

		string p_str = argv_1873.argv_3966 (p);
		string q_str = argv_1873.argv_3966 (q);
		cerr << "p = " << p_str << endl;
		cerr << "q = " << q_str << endl;

		argv_1873.argv_1551 (p);
		argv_1873.argv_1551 (q);

		argv_1873.argv_3915 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3769		
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
// @@ This function permits to test the primitive root argv_1736
// @@ that is provided by the argv_841 argv_2908.
// @@
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3769 () {
	argv_841 argv_1873;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1993 = argv_1873.argv_2208 (libname.c_str());
	if (argv_1993 != argv_1847) {
		cerr << "+++ ERROR: failed to argv_2198 gmp library" << endl;
	}
	else {
		argv_2793 p, q, argv_1736;
		argv_1873.argv_1568 (p);
		argv_1873.argv_1568 (q);
		argv_1873.argv_1568 (argv_1736);

		//----------------------------------------- 
		argv_1873.argv_1584 (p,	"0", 10);
		//----------------------------------------- 
//void argv_1908 (uint8_t * _buf, uint32_t _bufsize, string& _result) {
		string s1;
		for (uint32_t i=0 ; i<10 ; i++) {
			argv_1908 ((uint8_t *) &p, sizeof(argv_2793), s1);
			fprintf (stderr, "p = %s\n", s1.c_str());
			argv_1873.argv_1549 (p, p, 1);
		}

/*
		argv_1873.argv_1584 (p,	"5", 10);
		argv_1873.argv_1584 (q,	"2", 10);
		argv_1873.argv_1452 (q, p, argv_1736);
		*/
// 1: exp
// 2: argv_2488
// 3: argv_3402
		argv_1873.argv_1584 (q,	"2326547", 10);
		argv_1873.argv_1584 (p,	"3", 10);
		argv_1873.argv_1452 (q, p, argv_1736);
		
		string p_str	= argv_1873.argv_3966 (p);
		string q_str	= argv_1873.argv_3966 (q);
		string gen_str	= argv_1873.argv_3966 (argv_1736);
		cerr << "p = " << p_str << endl;
		cerr << "q = " << q_str << endl;
		cerr << "argv_1736 = " << gen_str << endl;

		argv_1873.argv_1551 (p);
		argv_1873.argv_1551 (q);
		argv_1873.argv_1551 (argv_1736);

		argv_1873.argv_3915 ();
	}
}

bool argv_2227 (string& _full_name) {
	bool bret = false;
	string full_libname = ".\\gmp_v4.2.dll";
	if (argv_1398 (full_libname.c_str()) == true) {
		_full_name = full_libname;
		bret = true;
	}
	else { // try the second possible location
		full_libname = ".\\Release\\gmp.dll";
		if (argv_1398 (full_libname.c_str()) == true) {
			_full_name = full_libname;
			bret = true;
		}
	}
	return (bret);
}


void argv_3740 () {
	argv_841 argv_1873;
	string full_libname;
	argv_2227 (full_libname);
	int32_t argv_1993 = argv_1873.argv_2208 (full_libname.c_str());
	if (argv_1993 != argv_1847) {
		string serror = argv_1087 (argv_1993);
		fprintf (stderr, "+++ ERROR: failed to argv_2198 gmp library (argv_1318=%s)", serror.c_str());
	}
	else { // open log argv_1396
		FILE * argv_1544 = fopen ("C:\\log.txt", "wb");
		if (! argv_1544) {
			fprintf (stderr, "+++ ERROR: failed to open log argv_1396 !\n");
		}
		else {
			argv_1094 shanks;
			shanks.init (&argv_1873, argv_1544);

			argv_828 bench;
			bench.argv_3601 ();
				shanks.argv_876 ();
			string elapsed_str = bench.argv_3608 ("argv_3385");	
			fprintf (argv_1544, "%s\r\n", elapsed_str.c_str());
			fclose (argv_1544);
		}
	}
}

void argv_3772 () {
	argv_841 argv_1873;
	string full_libname;
	argv_2227 (full_libname);
	int32_t argv_1993 = argv_1873.argv_2208 (full_libname.c_str());
	if (argv_1993 != argv_1847) {
		string serror = argv_1087 (argv_1993);
		fprintf (stderr, "+++ ERROR: failed to argv_2198 gmp library (argv_1318=%s)", serror.c_str());
	}
	else { // open log argv_1396
		FILE * argv_1544 = fopen ("C:\\log.txt", "wb");
		if (! argv_1544) {
			fprintf (stderr, "+++ ERROR: failed to open log argv_1396 !\n");
		}
		else {/*
			argv_2793 input, prime;
			argv_1873.argv_1568 (input);
			argv_1873.argv_1568 (prime);

			argv_1873.argv_1585 (input, 24961);
			argv_1873.argv_1585 (prime, 7);
			int retcode = argv_1873.argv_1572 (input, prime);
			fprintf (argv_1544, "retcode = %d\r\n", retcode);*/
			//----------------
			argv_1067 quad_sieve;
			quad_sieve.init (&argv_1873, argv_1544);

			argv_828 bench;
			bench.argv_3601 ();
				quad_sieve.argv_876 ();
			string elapsed_str = bench.argv_3608 ("index calculus argv_3385");	
			fprintf (argv_1544, "%s\r\n", elapsed_str.c_str());
			fclose (argv_1544);
		}
	}
}

void argv_3247 (FILE * _fp_log, argv_841 * _gmp_tool_ptr, argv_2793 _modulo, vector<vector<argv_2793 *> >& _vv_equation, vector<argv_2793 *>& _v_solution, vector<argv_2793 *>& _v_result, vector<argv_2793 *>& _v_base_factor) {
	_gmp_tool_ptr->argv_1568 (_modulo);
	uint32_t i, k;
	vector<argv_2793 *> v;
	uint32_t nb_line			= 6;
	uint32_t argv_2863			= 5;
	uint32_t base_factor_size	= argv_2863; // unused anyway (only size matters).

	v.resize (argv_2863);
	for (i=0 ; i<nb_line ; i++) {
		for (k=0 ; k<argv_2863 ; k++) {
			v[k] = (argv_2793*) malloc(sizeof(argv_2793));
			_gmp_tool_ptr->argv_1568 (*v[k]);
		}
		_vv_equation.push_back (v);
	}
	_v_solution.resize (nb_line);
	for (i=0 ; i<nb_line ; i++) {
		_v_solution[i] = (argv_2793*) malloc(sizeof(argv_2793));
		_gmp_tool_ptr->argv_1568 (*_v_solution[i]);
	}
	_v_result.resize (argv_2863);
	for (i=0 ; i<argv_2863 ; i++) {
		_v_result[i] = (argv_2793*) malloc(sizeof(argv_2793));
		_gmp_tool_ptr->argv_1568 (*_v_result[i]);
	}
	_v_base_factor.resize (base_factor_size);
	for (i=0 ; i<base_factor_size ; i++) {
		_v_base_factor[i] = (argv_2793*) malloc(sizeof(argv_2793));
		_gmp_tool_ptr->argv_1568 (*_v_base_factor[i]);
	}
	// ---- argv_1139 setting ---------
	_gmp_tool_ptr->argv_1585 (_modulo, 229);

	_gmp_tool_ptr->argv_1585 (*_vv_equation[0][0], 2);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[0][1], 2);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[0][2], 1);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[0][3], 0);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[0][4], 0);

	_gmp_tool_ptr->argv_1585 (*_vv_equation[1][0], 4);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[1][1], 0);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[1][2], 0);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[1][3], 0);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[1][4], 1);

	_gmp_tool_ptr->argv_1585 (*_vv_equation[2][0], 0);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[2][1], 1);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[2][2], 1);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[2][3], 0);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[2][4], 1);

	_gmp_tool_ptr->argv_1585 (*_vv_equation[3][0], 1);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[3][1], 0);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[3][2], 0);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[3][3], 1);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[3][4], 1);

	_gmp_tool_ptr->argv_1585 (*_vv_equation[4][0], 1);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[4][1], 2);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[4][2], 0);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[4][3], 0);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[4][4], 1);

	_gmp_tool_ptr->argv_1585 (*_vv_equation[5][0], 1);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[5][1], 1);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[5][2], 1);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[5][3], 1);
	_gmp_tool_ptr->argv_1585 (*_vv_equation[5][4], 0);
	//-----------------------------------------
	_gmp_tool_ptr->argv_1585 (*_v_solution[0], 100);
	_gmp_tool_ptr->argv_1585 (*_v_solution[1], 18);
	_gmp_tool_ptr->argv_1585 (*_v_solution[2], 12);
	_gmp_tool_ptr->argv_1585 (*_v_solution[3], 62);
	_gmp_tool_ptr->argv_1585 (*_v_solution[4], 143);
	_gmp_tool_ptr->argv_1585 (*_v_solution[5], 206);

	fprintf (_fp_log, "@FIN\r\n");	fflush (_fp_log);
}

void argv_3773 () {
	argv_1095 mat;
	mat[3][2] = 2;		mat[3][3] = 2;
	mat[2][1] = 1;		mat[2][4] = 5;
	mat[0][2] = 3;		mat[0][4] = 4;

	mat.argv_1203 (false);

	fprintf (stderr, "after column deletion\n");
	mat.argv_1183 (4);
	mat.argv_1203 (false);

	mat.argv_1186 (3);
	mat.argv_1203 (false);
}

void argv_3759 () {
	argv_841 argv_1873;
	string full_libname;
	argv_2227 (full_libname);
	int32_t argv_1993 = argv_1873.argv_2208 (full_libname.c_str());
	if (argv_1993 != argv_1847) {
		string serror = argv_1087 (argv_1993);
		fprintf (stderr, "+++ ERROR: failed to argv_2198 gmp library (argv_1318=%s)", serror.c_str());
	}
	else { // open log argv_1396
		FILE * argv_1544 = fopen ("C:\\log.txt", "wb");
		if (! argv_1544) {
			fprintf (stderr, "+++ ERROR: failed to open log argv_1396 !\n");
		}
		else {
			argv_3773 ();
			/*
			argv_2793 big_result;
			argv_1873.argv_1568 (big_result);
			string stmp;

			argv_1873.argv_1591 (big_result, 2, 4294967295);

			stmp = argv_1873.argv_3966 (big_result);
			fprintf (stderr, "big number: %s\n", stmp.c_str());
			*/
			//-------------------------------
			argv_881 index_calc;
			index_calc.init (&argv_1873, argv_1544);
			index_calc.argv_876 ();
			//-------------------------------
			/*
			argv_2793 argv_2488;
			vector<vector <argv_2793 *> > vv_test_equations;
			vector<argv_2793 *> argv_3957;
			vector<argv_2793 *> v_small_result;
			vector<argv_2793 *> v_base_factor;
			argv_3247 (argv_1544, &argv_1873, argv_2488, vv_test_equations, argv_3957, v_small_result, v_base_factor);
			argv_914 lin_sys;
			lin_sys.init (&argv_1873, argv_1544);
			bool bret = lin_sys.argv_3554 (argv_2488, v_base_factor, vv_test_equations, argv_3957, v_small_result);
			*/
			//-----------------------------
			fclose (argv_1544);
		}
	}
}

#if defined (__TEST_ELGAMAL_MAIN__)
	int main(int argv_720, char* argv_721[]) {
		argv_3759 ();
		return 0;
	}
#endif // #if defined (__TEST_ELGAMAL_MAIN__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

