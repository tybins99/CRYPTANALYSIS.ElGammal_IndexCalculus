// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_260.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the constants
// @@ and functions, argv_1139 structures that are
// @@ common to each possible test.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_327.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global argv_2908 that contains all test related global variables
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_840  argv_1791;


argv_840::argv_840 () {
	argv_2240					= argv_2889;
	argv_721					= argv_2889;
	argv_720					= 0;
	argv_1994	= argv_3774;
	argv_1995	= argv_3774;
	argv_2865					= 0;
	argv_749				= 0;
}


argv_1101::argv_1101 () {
	argv_2237	= "";
	argv_3485		= "";
	argv_3486		= 0;	
	argv_1696	= argv_2889;
	argv_1993			= argv_3774;
	argv_2241		= argv_2889;
}

argv_1101::~argv_1101 () {
	argv_2251.argv_924 (); // ok if it fails
}

argv_1100::argv_1100 () {
	reset ();
}

void argv_1100::reset () {
	argv_2272.clear ();
}

void argv_2246 (FILE * _fp, argv_820 _msg, bool _echo_on, bool _add_eol) {
	fprintf (_fp, "%s", _msg);
	if (_add_eol == true) {
		fprintf (_fp, "\r\n");
	}
	fflush (_fp);
	if (_echo_on == true) {
		cerr << _msg;
		if (_add_eol == true) {
			cerr << endl;
		}
	}
}

void argv_2245 (FILE * _fp, argv_3517 _iret, argv_3864 _errno, bool _echo_on, bool _add_eol) {
	string serror = argv_1319 (_iret);
	fprintf (_fp, "+++ ERROR: error argv_929 = %s (errno=%u)", serror.c_str(), _errno);
	if (_add_eol == true) {
		fprintf (_fp, "\r\n");
	}
	fflush (_fp);
	if (_echo_on == true) {
		cerr << "+++ ERROR: error argv_929 = " << serror << " (errno=" << _errno << ")";
		if (_add_eol == true) {
			cerr << endl;
		}
	}
}

void argv_2242 (FILE * _fp, argv_3517 _iret, argv_820 _msg, bool _add_eol) {
	string serror = argv_1319 (_iret);
	fprintf (_fp, "%s - argv_1318=%s", _msg, serror.c_str());
	if (_add_eol == true) {
		fprintf (_fp, "\r\n");
	}
	fflush (_fp);
}

argv_3517 argv_1100::argv_632 (argv_3864 _test_id, argv_1620 _fptr_one_test) {
	argv_3517 argv_1993 = argv_3761;
	argv_2020 = argv_2272.find (_test_id);
	if (argv_2020 != argv_2272.end()) {
		argv_1993 = argv_3760;
	}
	else { // this test ID was not added yet
		argv_2272[_test_id] = _fptr_one_test;	 
	}
	return (argv_1993);
}


// param 0 : argv_2817 of the EXE
// param 1 : argv_2817 of the log argv_1396 to open for the test
// param 2 : test argv_1915
argv_3517 argv_1100::argv_3414 (int _argc, char ** _argv) {
	argv_3517 argv_1993 = argv_3774;
	cerr << "nb param = " << _argc << endl;
	if (_argc < 3) {
		cerr << "Usage : ./a.out <argv_2237> <test_id> {test specific parameters}" << endl;
		argv_1993 = argv_3750;
	}
	else { // number of parameters is OK
		// argv_3237 the log argv_1446
		char argv_1446[MAX_PATH];
		argv_3548 (argv_1446, MAX_PATH, "%s", _argv[1]);
		argv_1446[MAX_PATH - 1] = '\0';

		// open the log argv_1446
		argv_917 argv_2251;
		bool bret = argv_2251.argv_2937 (argv_1446, argv_2889, "");
		if (bret == false) {
			argv_1993 = argv_3753;
		}
		else { // log argv_1396 opened succesfully
			argv_3864 test_id = atoi (_argv[2]);
			argv_3864 nb_test = argv_2272.size ();
			map<argv_3864, argv_1620>::iterator argv_2020;

			argv_2020 = argv_2272.find (test_id);
			if (argv_2020 == argv_2272.end()) { // test ID is out of range
				argv_1993 = argv_3757;
			}
			else { // ok, the ID of the test is in range => let's launch it
				argv_1620 argv_1696 = argv_2020->second;
				argv_1993 = argv_1696 (&argv_2251, _argc, _argv);
			}

			argv_2251.argv_924 ();
		}
	}
	return (argv_1993);
}

DWORD WINAPI argv_2146 (argv_2263 lParam) {
	argv_3517 argv_1993 = argv_3774;
	argv_1101 * param_ptr = (argv_1101 *) lParam;
	param_ptr->argv_1993 = param_ptr->argv_1696 (&param_ptr->argv_2251, param_ptr->argv_720, param_ptr->argv_721);
	/*
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "argv_2146 : return argv_3960 = %u", param_ptr->argv_1993);
	argv_3828[MAX_PATH - 1] = '\0';
	MessageBox (argv_2889, argv_3828, "", MB_OK);*/
	return (param_ptr->argv_1993);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1397		
// @@
// @@ INPUT			:
// @@ _filename_1: argv_820 : argv_2817 of the argv_1396 whose existence is to
// @@   be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	
// @@ _result: bool&: true if the content of both argv_1396 are identical,
// @@       false otherwise.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : 0 if function succeeded.
// @@        1 if the first argv_1396 can't be opened.
// @@        2 if the second argv_1396 can't be opened.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compare the content of 2 files
// @@ to determine if they are equal or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1397 (argv_917 * _log_ptr, argv_820 _filename_1, argv_820 _filename_2, bool& _result) {
	argv_3517 argv_1993		= 0;
	_result			= false;

	_log_ptr->argv_2247 (argv_2886, "computing md5sum for argv_1396 : ", _filename_1);
	string hash_1 = argv_1029 (_filename_1);
	_log_ptr->argv_2247 (argv_2886, "md5sum for argv_1396 1 = ", hash_1.c_str());

	_log_ptr->argv_2247 (argv_2886, "computing md5sum for argv_1396 : ", _filename_2);
	string hash_2 = argv_1029 (_filename_2);
	_log_ptr->argv_2247 (argv_2886, "md5sum for argv_1396 2 = ", hash_2.c_str());

	if (hash_1 == hash_2) {
		_result = true;	
	}
	/*
	argv_836 map_1;
	argv_836 map_2;
	argv_3862 *	buf_1	= argv_2889;
	argv_3862 *	buf_2	= argv_2889;
	argv_3864	size_1	= 0;
	argv_3864	size_2	= 0;

	if (map_1.argv_2464 (_filename_1, argv_2466, buf_1, size_1) == true) {
		if (map_2.argv_2464 (_filename_2, argv_2466, buf_2, size_2) == true) {
			if (size_1 == size_2) {
				bool different = false;
				for (argv_3864 i=0 ; i<size_1 ; i++) {
					if (buf_1[i] != buf_2[i]) {
						different = true;
						break;
					}
				}

				if (different == false) {
					_result = true;
				}
			}
			map_2.argv_925 ();	
		}
		else {
			argv_1993 = 2;
		}
		map_1.argv_925 ();
	}
	else {
		argv_1993 = 1;
		argv_3864 argv_1318, argv_1326;
		map_1.argv_1757 (argv_1318, argv_1326);
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "argv_1318=%d, argv_1326=%d", argv_1318, argv_1326);
		argv_3828[MAX_PATH - 1] = '\0';
		MessageBox (argv_2889, argv_3828, "", MB_OK);
	}*/
	return (argv_1993);
}

void argv_1204 (argv_820 _msg, argv_3864 _amount) {
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "%s : %u", _msg, _amount);
	argv_3828[MAX_PATH - 1] = '\0';
	MessageBox (argv_2889, argv_3828, "", MB_OK);
}


void argv_1233 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 0 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
}

void argv_1234 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 1 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
}

void argv_1237 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 2 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
	_log_ptr->argv_2247 (argv_2886, "- param 5 : number of packets to be echoed.");
}

void argv_1238 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 3 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
}

void argv_1239 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 4 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
	_log_ptr->argv_2247 (argv_2886, "- param 5 : original argv_1446");
}

void argv_1240 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 5 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
	_log_ptr->argv_2247 (argv_2886, "- param 5 : number of packets to be echoed.");
}

void argv_1241 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 6 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
	_log_ptr->argv_2247 (argv_2886, "- param 5 : original argv_1446");
}

void argv_1242 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 7 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
	_log_ptr->argv_2247 (argv_2886, "- param 5 : number of packets to be echoed.");
	_log_ptr->argv_2247 (argv_2886, "- param 6 : number of loop laps.");
}

void argv_1243 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 8 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
}

void argv_1244 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 9 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
	_log_ptr->argv_2247 (argv_2886, "- param 5 : number of packets to be echoed.");
	_log_ptr->argv_2247 (argv_2886, "- param 6 : number of clients to create.");
}

void argv_1235 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 9 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
	_log_ptr->argv_2247 (argv_2886, "- param 5 : number of packets to be echoed.");
	_log_ptr->argv_2247 (argv_2886, "- param 6 : number of clients to create.");
	_log_ptr->argv_2247 (argv_2886, "- param 7 : size of the duplication beam.");
}

void argv_1236 (argv_917 * _log_ptr) {
	_log_ptr->argv_2247 (argv_2886, " ");
	_log_ptr->argv_2247 (argv_2886, "Test 11 : Usage : ");	
	_log_ptr->argv_2247 (argv_2886, "- param 0 : argv_2817 of the EXE");
	_log_ptr->argv_2247 (argv_2886, "- param 1 : argv_2817 of the log argv_1396 to open for the test");
	_log_ptr->argv_2247 (argv_2886, "- param 2 : test argv_1915");
	_log_ptr->argv_2247 (argv_2886, "- param 3 : server's IP argv_635");
	_log_ptr->argv_2247 (argv_2886, "- param 4 : server's argv_3221");
	_log_ptr->argv_2247 (argv_2886, "- param 5 : original argv_1446");
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

