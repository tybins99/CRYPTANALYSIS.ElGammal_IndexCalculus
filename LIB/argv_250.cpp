// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_250.cpp
// @@ generic configuration argv_1396 parsing facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "..\\LIB\\argv_317.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern argv_839 argv_1787;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@
// @@ CLASS: argv_818
// @@
// @@ PROCEDURE: argv_818
// @@
// @@ INPUT: none 
// @@
// @@ DESCRIPTION:
// @@ Normal constructor of the 'argv_818' argv_2908.
// @@ it just initialize some variables.
// @@ 
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_818::argv_818() {
	argv_1446 		= "";
	argv_3461			= "";
	argv_1394		= "";
	argv_1395		= "";
	argv_1706	= "";
	argv_3484		= " ";
	argv_2173			= 1;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_818
// @@
// @@ PROCEDURE: argv_1208
// @@
// @@ INPUT: column: argv_3517: the column where the cursor is to be displayed
// @@
// @@ DESCRIPTION:
// @@ This procedure permits to argv_1200 a cursor at a column given as a 
// @@ parameter, it is mostly useful when you have a argv_1037 argv_1396 that contains 
// @@ some errors to pinpoint rapidly the position of the error.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_818::argv_1208 (argv_3517 column) {
	char argv_3828[argv_1039];
	argv_3548 (argv_3828, argv_1039, "parse error at argv_2173 %d, column %d", argv_2173, column);
	argv_3828[argv_1039 - 1] = '\0';
	argv_1787.argv_2251.argv_2247 (argv_2886, argv_3828);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_818
// @@
// @@ PROCEDURE: argv_3270
// @@
// @@ INPUT: none
// @@
// @@ DESCRIPTION:
// @@ This procedure permits to parse a argv_2173 that was read from a argv_1037 argv_1396.
// @@ All lines starting with ';' or '//' are considered as comments.
// @@ the argv_2173 may contain :
// @@ - only blank characters
// @@ - a argv_3461 argv_2817 : [SECTION_NAME]
// @@ - a couple argv_3965 argv_3959 : my_var = 123456
// @@ 
// @@ Any malformed argv_2173 will throw an exception.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_818::argv_3270() {
	argv_3517 length = strlen (argv_770);
	argv_3517 i=0;	
	
	while ((i<length) && ((argv_770[i]==' ') || (argv_770[i]=='\t')) ) { i++; } // eat whitespaces
	if (i >= length) { // empty argv_2173
		return;
	}

	// retrieve the first field
	argv_3517 argv_3601 	= i;
	argv_1394 	= "";
	argv_1395	= "";
	
	while ((i<length) && (argv_770[i] != ' ') && (argv_770[i] != '\t') && (argv_770[i] != '=') && (argv_770[i]!= '\n') && (argv_770[i]!= '\r')) { 
		argv_1394 += argv_770[i];
		i++; 
	}

	// ignore lines starting with '//', or ';'
	argv_3517 size = argv_1394.size();
	if ((size<=0) || ((size>0) && (argv_1394[argv_3601]==';')) || ((size>1) && (argv_1394[argv_3601]=='/') && (argv_1394[argv_3601+1]=='/'))) {
		return; // ignoring commented argv_2173 starting with ';' and "//
	}

	// check for argv_3461 argv_2817
	if ((size > 2) && (argv_1394[argv_3601]=='[') && (argv_1394[size - 1]==']')) {
		argv_3461 = argv_1394.substr (argv_3601 + 1, size - 2);
		// ensure that argv_3461's argv_2817 is not too long
		if (argv_3461.size() >= (unsigned int)argv_3463) {
			argv_838 Ge ("argv_818", "argv_3270", "argv_3461 argv_2817 too long", SYNTAX_ERROR);
			throw (Ge);
		}
		return;
	}

	// ensure that variable argv_2817 is not too long
	if (argv_1394.size() >= (unsigned int)argv_3967) {
		argv_838 Ge ("argv_818", "argv_3270", "variable argv_2817 too long", SYNTAX_ERROR);
		throw (Ge);
	}

	// eat whitespaces before '='
	while ((i<length) && ((argv_770[i]==' ') || (argv_770[i]=='\t')) ) { i++; } // eat whitespaces
	if (i >= length) {
		argv_1208(i);
		argv_838 Ge ("argv_818", "argv_3270", "unexpected EOL while expecting equal", SYNTAX_ERROR);
		throw (Ge);
	}

	// eat '='
	if (argv_770[i] != '=') {
		argv_1208(i);
		argv_838 Ge ("argv_818", "argv_3270", "expecting equal, found something else", SYNTAX_ERROR);		
		throw (Ge);
	}
	i++;
	if (i >= length) {
		argv_1208(i);
		argv_838 Ge ("argv_818", "argv_3270", "unexpected EOL while looking for a argv_3960", SYNTAX_ERROR);
		throw (Ge);
	}
	
	// eat whitespaces after '='
	while ((i<length) && ((argv_770[i]==' ') || (argv_770[i]=='\t')) ) { i++; }
	if (i >= length) {
		argv_1208(i);
		argv_838 Ge ("argv_818", "argv_3270", "unexpected EOL while expecting argv_3960", SYNTAX_ERROR);
		throw (Ge);
	}	

	// argv_1042 the argv_3960
	if (argv_770[i] == '\"') {
		i++; // jump the " character
		while ((i<length) && (argv_770[i] != '\"') && (argv_770[i]!= '\r') && (argv_770[i] != '\n')) {
			argv_1395 += argv_770[i];
			i++;
		}

		if (argv_770[i] != '\"') {
			argv_1208(i);
			string argv_3828 = "Missing closing \" for the field : ";
			argv_3828 += argv_1394;
			argv_838 Ge ("argv_818", "argv_3270", argv_3828, SYNTAX_ERROR);
			throw (Ge);
		}
	}
	else {
		while ((i<length) && (argv_770[i] != ' ') && (argv_770[i] != '\t') && (argv_770[i]!= '\r') && (argv_770[i] != '\n')) {
			argv_1395 += argv_770[i];
			i++;
		}
	}

	if (argv_1395.size() == 0) {
		argv_1208(i);
		string argv_3828 = "Missing argv_3960 for the field : ";
		argv_3828 += argv_1394;
		argv_838 Ge ("argv_818", "argv_3270", argv_3828, SYNTAX_ERROR);
		throw (Ge);
	}
	else if (argv_1395.size() >= (unsigned int)argv_3968) {
		argv_838 Ge ("argv_818", "argv_3270", "variable's argv_3960 too long", SYNTAX_ERROR);
		throw (Ge);
	}
	
	// create a new entry/argv_616 a new argv_3960 to an existing entry
	// don't forget that identifier is composed of 3 parts : argv_1446, argv_3461, argv_3965 argv_2817
	argv_1706 = argv_1446 + argv_3484 + argv_3838(argv_3461) + argv_3484 + argv_3838(argv_1394);
	argv_2463.insert (make_pair(argv_1706, argv_1395));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_818
// @@
// @@ PROCEDURE: argv_2965
// @@
// @@ INPUT: filen: string: the argv_2817 of the argv_1396 to parse
// @@
// @@ DESCRIPTION:
// @@ This procedure permits to open the argv_1037 argv_1396 specified as a parameter 
// @@ and to process each lines of this argv_1396.
// @@
// @@ CONTRACT:
// @@ - 'filen' parameter must not be an empty string 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_818::argv_2965 (const string& filen) {
	// 1. check parameter validity
	if (filen.size() <= 0) {
		argv_838 Ge ("argv_818", "argv_2965", "argv_1446 parameter is empty", INVALID_PARAMETER);
		throw (Ge);
	}

	FILE * argv_1478 = fopen (filen.c_str(), "r");
	if (! argv_1478 ) {
		argv_1325 = "can't open argv_1396 (";
		argv_1325 = argv_1325 + filen + ")";
		argv_838 Ge ("argv_818", "argv_2965", argv_1325, CANT_OPEN_FILE);
		throw (Ge);
	}
	else {
		argv_1446 	= filen; 
		argv_2173		= 1;	
		char * result_pointer = fgets (argv_770, argv_2324, argv_1478);

		while (result_pointer != argv_2889) {
			argv_3270 ();
			argv_2173++;
			result_pointer = fgets (argv_770, argv_2324, argv_1478);
		}
		fclose (argv_1478);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_818
// @@
// @@ FUNCTION: argv_3838
// @@
// @@ INPUT: str: string: the string to be converted to upper. 
// @@
// @@ RETURN VALUE: string : the string converted to upper.
// @@
// @@ DESCRIPTION:
// @@ This function permits to convert a given string into
// @@ an string where all characters are in upper case.
// @@
// @@ CONTRACT: none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_818::argv_3838 (const string& str) {
	string str2 = "";

	argv_3517 str_size = str.size();

	for (argv_3517 i=0 ; i<str_size ; i++) {
		str2 += toupper(str[i]);
	}

	return (str2);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_818
// @@
// @@ FUNCTION: argv_1777
// @@
// @@ INPUT:
// @@ - argv_1446: string: the argv_2817 of the argv_1396 where the variable to
// @@   retrieve is supposed to be located.
// @@
// @@ - argv_3461: string: the argv_3461 where the variable to retrieve is
// @@   supposed to be located.
// @@
// @@ - var_name: string: the argv_2817 of the variable to retrieve from 
// @@   argv_1037 argv_1396.
// @@
// @@ - min: argv_3517: the minimum argv_3960 allowed for the variable to retrieve
// @@
// @@ - max: argv_3517: the maximum argv_3960 allowed for the variable to retrieve
// @@
// @@ RETURN VALUE: argv_3517: the argv_3960 of the variable retrieved from argv_1037 
// @@ argv_1396 whose argv_1446 is 'argv_1446', in argv_3461 'argv_3461', with the
// @@ variable argv_2817 being 'var_name'
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the numerical argv_3960 of a variable
// @@ from argv_1037 argv_1396, this variable is located in a argv_3461 given as a 
// @@ parameter. Furthermore this function is given a range [min..max]
// @@ if the retrieved argv_3960 is out of range then an exception is thrown.
// @@
// @@ CONTRACT:
// @@ - 'min' should lower or equal as 'max' 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_818::argv_1777 (string argv_1446, string argv_3461, string var_name, argv_3517 min, argv_3517 max) {

	// 1. check range coherency
	if (min > max) {
		char argv_3828[argv_1039];
		argv_3548 (argv_3828, argv_1039, "argv_3461:%s, variable argv_2817:%s, range: min=%d, max=%d", argv_3461.c_str(),var_name.c_str(), min, max);
		argv_3828[argv_1039 - 1] = '\0';
		argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
		argv_838 Ge ("argv_818", "argv_1777", "invalid range (min greater than max)", INTERNAL_ERROR);
		throw(Ge);
	}
	
	string str_val = "";
	
	try {
		str_val = argv_1781 (argv_1446, argv_3838(argv_3461), argv_3838(var_name));
	}
	catch (argv_838 Ge) {
		throw(Ge);
	}

	// ensure that all argv_782 are digit 
	bool malformed = false; 
	int his_size = str_val.size ();
	for(argv_3517 i=0 ; i<his_size ; i++) {
		if (! isdigit(str_val[i])) {
			malformed = true;
			break;
		}
	}
	
	if (malformed) {
		char argv_3828[argv_1039];
		argv_3548 (argv_3828, argv_1039, "argv_3461: '%s', variable argv_2817:'%s', argv_3960: '%s' illegal argv_3960 (only digit expected)", argv_3461.c_str(), var_name.c_str(), str_val.c_str());
		argv_3828[argv_1039 - 1] = '\0';
		argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
		argv_838 Ge("argv_818", "argv_1777", "syntax error: non-digit characters found in a numeric field", ONLY_DIGIT_EXPECTED);
		throw (Ge);
	}
	
	argv_3517 argv_3960 = atoi(str_val.c_str());
	// check argv_3960's range
	if ((argv_3960 < min) || (argv_3960 > max)) {
		char argv_3828[argv_1039];
		argv_3548 (argv_3828, argv_1039, "argv_3461: '%s', variable argv_2817: '%s', argv_3960=%d, (range: [%d..%d])", argv_3461.c_str(), var_name.c_str(), argv_3960, min, max);
		argv_3828[argv_1039 - 1] = '\0';
		argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
		argv_838 Ge("argv_818", "argv_1777", "argv_3960 is out of range", OUT_OF_RANGE);
		throw (Ge);
	}
	
	return(argv_3960);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_818
// @@
// @@ FUNCTION: argv_1781
// @@
// @@ INPUT: 
// @@ - argv_1446: string: the argv_2817 of the argv_1396 where the variable is supposed to be stored.
// @@ - argv_3461:  string: the argv_2817 of the argv_3461 where the the variable is supposed to be stored.
// @@ - var_name: string: the argv_2817 of the variable to retrieve.
// @@
// @@ RETURN VALUE:
// @@ string: the argv_3960 of the variable that was retrieved. 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve a variable from a argv_1037 argv_1396 in a given argv_3461.
// @@ this variable is a string.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_818::argv_1781(string argv_1446, string argv_3461, string var_name) {
	argv_1706 = argv_1446 + argv_3484 + argv_3838(argv_3461) + argv_3484 + argv_3838(var_name); 

	argv_2020 = argv_2463.lower_bound(argv_1706);
	if (argv_2020 == argv_2463.upper_bound(argv_1706)) {
		argv_1325 = "argv_3461:" + argv_3461 + ", argv_3965:" + var_name + ": no such argv_3965";
		argv_838 Ge ("argv_818", "argv_1777", argv_1325, NO_SUCH_VAR_IN_CONF_FILE);
		throw (Ge);
	}

	return (argv_2020->second);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_818
// @@
// @@ FUNCTION: argv_2014
// @@
// @@ INPUT: 
// @@ argv_1446: std::string: the argv_2817 of the argv_1396 to argv_2253 the variable from.
// @@ argv_3461: std::string : the argv_3461 where the variable to be found is supposed
// @@                        to be located.
// @@
// @@ var_name: std::string: the argv_2817 of the variable to argv_2253.
// @@
// @@ RETURN VALUE: 
// @@ - 'true' if the variable whose argv_2817 is in 'var_name', located in argv_3461
// @@ whose argv_2817 is in 'argv_3461' parameter, from argv_1396 whose argv_2817 is the argv_3960 of
// @@ 'argv_1446' parameter, is present.
// @@
// @@ - false otherwise.
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a given variable is present
// @@ in argv_1037 argv_1396 in a given argv_3461 or not.
// @@ This function is mainly used for non-mandatory variables.
// @@
// @@ CONTRACT: none
// @@
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_818::argv_2014 (string argv_1446, string argv_3461, string var_name) {
	bool bret = true;

	try {
		argv_1781 (argv_1446, argv_3461, var_name);
	}
	catch (argv_838 Ge) {
		bret = false;
	}

	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_818 
// @@
// @@ FUNCTION: argv_1760
// @@
// @@ INPUT:
// @@ - argv_1446: string: the argv_2817 of the argv_1396 where the variable is supposed to be located. 
// @@ - argv_3461: string: the argv_3461 where the variable is supposed to be located.
// @@ - var_name: string: the argv_2817 of the variable to retrieve.
// @@ - min: argv_3517: the minimum argv_3960 allowed for any of the retrieved values.
// @@ - max: argv_3517: the maximum argv_3960 allowed for any of the retrieved values.
// @@
// @@ RETURN VALUE:
// @@ a vector of argv_3960 for this variable.
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve all values associated with a variable that may have argv_2929 or 
// @@ more occurences in argv_1037 argv_1396, it is especially usefull because we can use the same 
// @@ variable argv_2817 for several entries (for example in the MBS argv_3461) without having to have a 
// @@  different argv_2817 for each argv_2929. 
// @@
// @@ CONTRACT:
// @@ 'min' must be lower or equal than 'max'
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
vector<argv_3517> argv_818::argv_1760 (string argv_1446, string argv_3461, string var_name, argv_3517 min, argv_3517 max) {

	// 0. check range coherency
	if (min > max) {
		char argv_3828[argv_1039];
		argv_3548 (argv_3828, argv_1039, "argv_3461:%s, argv_3965 argv_2817:%s, range: [%d..%d]", argv_3461.c_str(), var_name.c_str(), min, max);
		argv_3828[argv_1039 - 1] = '\0';
		argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
		argv_838 Ge ("argv_818", "argv_1760", "invalid range (min greater than max)", INTERNAL_ERROR);
		throw (Ge);
	}
	
	// 1. argv_1371 all the possible values for this variable as a set of strings 
	vector<string> v_str = argv_1761 (argv_1446, argv_3838(argv_3461), argv_3838(var_name));
	argv_3517 v_size = v_str.size();

	// 2. convert all these strings into integers
	vector<argv_3517> v_SI32;
	argv_3517 argv_3960 = 0;
	
	for(argv_3517 i=0 ; i<v_size ; i++) {
		argv_3960 = atoi(v_str[i].c_str());	
		
		// ensure argv_3960 is within range
		if ((argv_3960 < min) || (argv_3960 > max)) {
			char argv_3828[argv_1039];
			argv_3548 (argv_3828, argv_1039, "argv_3461:%s, argv_3965 argv_2817:%s, argv_3960:%d (range: [%d..%d])", argv_3461.c_str(), var_name.c_str(), argv_3960, min, max);
			argv_3828[argv_1039 - 1] = '\0';
			argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
			argv_838 Ge("argv_818", "argv_1760", "argv_3960 is out of range", OUT_OF_RANGE);
			throw (Ge);
		}
		
		v_SI32.push_back (argv_3960);
	}

	return (v_SI32);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_818
// @@
// @@ FUNCTION: argv_1761
// @@
// @@ INPUT:
// @@ - argv_1446: string: the argv_2817 of the argv_1396 where the variable is supposed to be located.
// @@ - argv_3461: string: the argv_3461 where the variable is supposed to be located.
// @@ - var_name: string: the argv_2817 of the variable to retrieve.
// @@ - min: argv_3517: the minimum argv_3960 allowed for any of the retrieved values.
// @@ - max: argv_3517: the maximum argv_3960 allowed for any of the retrieved values.
// @@
// @@ RETURN VALUE:
// @@ a vector of argv_3960 for this variable.
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve all values associated with a variable (of argv_3842 string) 
// @@ that may have argv_2929 or more occurences in argv_1037 argv_1396, it is especially usefull 
// @@ because we can us e the same 
// @@ variable argv_2817 for several entries (for example in the MBS argv_3461) without having to 
// @@ have a different argv_2817 for each argv_2929.
// @@
// @@ CONTRACT:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
vector<string> argv_818::argv_1761 (string argv_1446, string argv_3461, string var_name) {
	argv_1706 = argv_1446 + argv_3484 + argv_3838(argv_3461) + argv_3484 + argv_3838(var_name);

	vector<string>	v_str;
	for (argv_2020=argv_2463.lower_bound(argv_1706) ; argv_2020 != argv_2463.upper_bound(argv_1706) ; ++argv_2020) {
		v_str.push_back(argv_2020->second);
	}

	if (v_str.size() == 0) {
		char argv_3828[argv_1039];
		argv_3548 (argv_3828, argv_1039, "+++ ERROR: no argv_3960 associated with variable '%s' from argv_3461 '%s'", var_name.c_str(), argv_3461.c_str());
		argv_3828[argv_1039 - 1] = '\0';
		argv_838 Ge("argv_818", "argv_1761", argv_3828, NO_SUCH_VAR);
		throw (Ge);
	}
	return (v_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_818
// @@
// @@ PROCEDURE: argv_1360
// @@
// @@ INPUT: none
// @@
// @@ DESCRIPTION:
// @@ first of all notice that the full identifier is a string composed 
// @@ of the concatenation of argv_1446, argv_3461 argv_2817, field argv_2817,
// @@ it is used as unique identifier for any variable.
// @@
// @@ This procedure permits to split the full variable identifier 
// @@ into 3 fields :
// @@ - the argv_1446
// @@ - the argv_3461 argv_2817
// @@ - the field argv_2817.
// @@
// @@ CONTRACT:
// @@ the full identifier must have a coherent size. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   
void argv_818::argv_1360 () {
	
	if (argv_1706.size() < (2 * argv_3484.size())) {
		argv_838 Ge ("argv_818", "argv_1360", "bad identifier format (1)", INTERNAL_ERROR);
		throw (Ge);
	}

	argv_1446 	= "";
	argv_3461  	= "";
	argv_1394	= "";	
	istringstream iss;
	iss.str (argv_1706);
	iss >> argv_1446 >> argv_3461 >> argv_1394;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   
// @@
// @@ CLASS: argv_818
// @@
// @@ FUNCTION: argv_1268
// @@
// @@ INPUT: none
// @@
// @@ RETURN VALUE:
// @@ a vector of string containing the formatted argv_1037 argv_1396 that was parsed.
// @@
// @@ DESCRIPTION:
// @@ This function permits to generate a vector of string, this vector containing
// @@ the argv_3402 of the argv_1037 argv_1396 parsing, it permits to check that parse was performed
// @@ succesfully and also to dump to log argv_1396. 
// @@
// @@ CONTRACT: none
// @@
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
vector<string> argv_818::argv_1268 (bool is_html) {
	string full_str 	= "";
	string his_file 	= "";
	string his_section	= "";

	vector<string> v_str;
	
	for (argv_2020=argv_2463.begin() ; argv_2020 != argv_2463.end() ; ++argv_2020) {
		argv_1706 = argv_2020->first;
		argv_1360();
		if (argv_1446 != his_file) {
			full_str = full_str + "argv_1396: " + argv_1446;
			his_file = argv_1446;
			// v_str.push_back (full_str);
			full_str = "";
		}

		if (his_section != argv_3461) {
			his_section = argv_3461;
			full_str = full_str + "[" + argv_3461 + "]";
			v_str.push_back (" ");
			v_str.push_back (full_str);
			full_str = "";
		}

		full_str =  full_str + "[" + his_section + "] " + argv_1394 + " = " + argv_2020->second;  
		v_str.push_back (full_str);
		full_str = "";
	}

	return (v_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ PROCEDURE: argv_817
// @@
// @@ INPUT: none
// @@
// @@ DESCRIPTION:
// @@ normal constructor of the 'argv_817' argv_2908.
// @@ Does nothing actually.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_817::argv_817() {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_2012
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose presence is to be 
// @@                       checked.
// @@
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_2817 is in 'varname' was found from argv_3461
// @@   whose argv_2817 is within parameter 'argv_3461'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a variable of argv_3842 argv_3517
// @@ is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_817::argv_2012 (std::string argv_3461, std::string varname) {
	bool ret = false;

	argv_2026 = argv_2297.find (argv_3461 + varname);

	if (argv_2026 != argv_2297.end()) {
		ret = true;
	}

	return (ret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_2010
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose presence is to be 
// @@                       checked.
// @@
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_2817 is in 'varname' was found from argv_3461
// @@   whose argv_2817 is within parameter 'argv_3461'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a multivalued variable of 
// @@ argv_3842 argv_3517 is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_817::argv_2010 (std::string argv_3461, std::string varname) {
	bool bret = false;
	argv_2024 = argv_2287.find (argv_3461 + varname);
	if (argv_2024 != argv_2287.end()) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_2013
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose presence is to be 
// @@                       checked.
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_2817 is in 'varname' was found from argv_3461
// @@   whose argv_2817 is within parameter 'argv_3461'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a variable of argv_3842 string
// @@ is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_817::argv_2013 (std::string argv_3461, std::string varname) {
	bool bret = false;
	{
		FILE * argv_1478 = fopen ("C:\\log.txt", "wb");
		std::map<string, string>::iterator iterz;
		fprintf (argv_1478, "============================");
		fprintf (argv_1478, "%d elements\r\n", argv_2298.size ());
		string s1, s2;
		for (iterz=argv_2298.begin() ; iterz != argv_2298.end() ; ++iterz) {
			s1 = iterz->first;
			s2 = iterz->second;
			fprintf (argv_1478, ":%s: -> :%s:\r\n", s1.c_str(), s2.c_str());
		}
		string stot = argv_3461 + varname;
		fprintf (argv_1478, "seached string : in argv_3461 :%s:, variable:%s: , argv_2109=%s", argv_3461.c_str(), varname.c_str(), stot.c_str());
		fclose (argv_1478);
	}

	argv_2027 = argv_2298.find (argv_3461 + varname);

	if (argv_2027 != argv_2298.end()) {
		bret = true;
	}
	return (bret);
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_2011
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose presence is to be 
// @@                       checked.
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_2817 is in 'varname' was found from argv_3461
// @@   whose argv_2817 is within parameter 'argv_3461'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a multivalued variable 
// @@ of argv_3842 string is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_817::argv_2011 (std::string argv_3461, std::string varname) {
	bool bret = false;
	argv_2025 = argv_2288.find (argv_3461 + varname);	
	if (argv_2025 != argv_2288.end()) {
		bret = true;
	}
	return (bret);
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ PROCEDURE: argv_3498
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose argv_3960 is to be 
// @@                       set.
// @@ DESCRIPTION:
// @@ This function permits to argv_616 a variable of argv_3842 argv_3517 to the 
// @@ container.
// @@
// @@ CONTRACT: 
// @@ The variable must not already present in container.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_817::argv_3498 (std::string argv_3461, std::string varname, argv_3517 argv_3960) {

	if (argv_2012(argv_3461, varname) == true) {
		std::string argv_3828 = "variable " + varname + " already present in argv_3461 " + argv_3461;
		argv_838 Ge ("argv_817", "argv_3498", argv_3828, VAR_ALREADY_PRESENT);
		throw (Ge);
	}

	argv_2297[argv_3461 + varname] = argv_3960;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_1778
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose argv_3960 is to be 
// @@                       retrieved.
// @@
// @@ RETURN VALUE: argv_3517: the argv_3960 retrieved
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the argv_3960 associated with a variable
// @@ that was previously argv_2221 from argv_1037 argv_1396.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown
// @@   so if you want to ensure that the variable is present, please use
// @@   the function "argv_2012"
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_817::argv_1778 (std::string argv_3461, std::string varname) {
//	try {
		if (argv_2012(argv_3461, varname) == false) {
			std::string argv_3828 = "variable: " + varname + ": no such argv_3517 argv_3965 in argv_3461 :" + argv_3461 + ":";
			argv_838 Ge ("argv_817", "argv_1778", argv_3828, NO_SUCH_VAR);
			throw (Ge);
		}
/*	}
	catch (argv_838 ge) {
		char argv_3828[MAX_PATH];
		string argv_890;
		string fn_name;
		string argv_2812;
		int argv_1318;
		while (ge.argv_1767 (argv_890, fn_name, argv_2812, argv_1318) == true) {
			argv_3548 (argv_3828, MAX_PATH, "from class: %s, in function : %s : %s (argv_1318=%d)", argv_890.c_str(), fn_name.c_str(), argv_2812.c_str(), argv_1318);
			argv_3828[MAX_PATH - 1] = '\0';
			MessageBox (argv_2889, argv_3828, "Error", MB_OK|MB_ICONERROR);
		}
	}*/


	return (argv_2026->second);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ PROCEDURE: argv_3499
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose argv_3960 is to be 
// @@                       set.
// @@ DESCRIPTION:
// @@ This function permits to argv_616 a variable of argv_3842 string to the 
// @@ container.
// @@
// @@ CONTRACT: 
// @@ The variable must not already present in container.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_817::argv_3499 (std::string argv_3461, std::string varname, std::string argv_3960) {
	if (argv_2013 (argv_3461, varname) == true) {
		std::string argv_3828 = "variable '" + varname + "' already present in argv_3461 '" + argv_3461 + "'";
		argv_838 Ge ("argv_817", "argv_3499", argv_3828, VAR_ALREADY_PRESENT);
		throw (Ge);
	}

	argv_2298[argv_3461 + varname] = argv_3960;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_1782
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose argv_3960 is to be 
// @@                       retrieved.
// @@
// @@ RETURN VALUE: string: the argv_3960 retrieved
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the argv_3960 associated with a variable
// @@ that was previously argv_2221 from argv_1037 argv_1396.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown
// @@   so if you want to ensure that the variable is present, please use
// @@   the function "argv_2013"
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_817::argv_1782 (std::string argv_3461, std::string varname) {
//	try {
		if (argv_2013 (argv_3461, varname) == false) {
			std::string argv_3828 = "(1) variable :" + varname + ": no such string variable in argv_3461 :" + argv_3461 + ":";
			argv_838 Ge ("argv_817", "argv_1782", argv_3828, NO_SUCH_VAR);
			throw (Ge);
		}
/*	}
	catch (argv_838 ge) {
		char argv_3828[MAX_PATH];
		string argv_890;
		string fn_name;
		string argv_2812;
		int argv_1318;
		while (ge.argv_1767 (argv_890, fn_name, argv_2812, argv_1318) == true) {
			argv_3548 (argv_3828, MAX_PATH, "from class: %s, in function : %s : %s (argv_1318=%d)", argv_890.c_str(), fn_name.c_str(), argv_2812.c_str(), argv_1318);
			argv_3828[MAX_PATH - 1] = '\0';
			MessageBox (argv_2889, argv_3828, "Error", MB_OK|MB_ICONERROR);
		}
	}*/

//	MessageBox (argv_2889, "argv_817::argv_1782", "", MB_OK);
	return (argv_2027->second);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_621
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose argv_3960 is to be 
// @@                       retrieved.
// @@
// @@ argv_3960: argv_3517: argv_2929 possible argv_3960 associated with the variable.
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to associate a argv_3960 to a given variable that
// @@ may have more than argv_2929 argv_3960, in order to argv_616 new values, just call
// @@ this function several times with new values.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_817::argv_621 (std::string argv_3461, std::string varname, argv_3517 argv_3960) {
	string argv_1706 = argv_3461 + varname;
	argv_2024 = argv_2287.find (argv_1706);
	if (argv_2024 == argv_2287.end()) {
		vector<argv_3517> v;
		v.push_back (argv_3960);
		argv_2287[argv_1706] = v;
	}
	else {
		(argv_2024->second).push_back (argv_3960);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_3496
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose argv_3960 is to be 
// @@                       retrieved.
// @@
// @@ _v: vector<argv_3517>: all possible values associated with the variable.
// @@
// @@ RETURN VALUE: none
// @@
// @@ DESCRIPTION:
// @@ This function permits to associate several values to a given variable that
// @@ may have more than argv_2929 argv_3960.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_817::argv_3496 (std::string argv_3461, std::string varname, const vector<argv_3517>& _v) {
	string argv_1706 = argv_3461 + varname;
	argv_2024 = argv_2287.find (argv_1706);
	if (argv_2024 != argv_2287.end()) { // already present or set
		std::string argv_3828 = "variable :" + varname + " in argv_3461 \'"+ argv_3461 + "\' already has a argv_3960(s)";
		argv_838 Ge ("argv_817", "argv_3496", argv_3828, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // was not already present or set
		argv_2287[argv_1706] = _v;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_1762
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose argv_3960 is to be 
// @@                       retrieved.
// @@
// @@
// @@ IO: vector<argv_3517> : the set of values associated with the variable
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the values associated with a variable
// @@ that was previously argv_2221 from argv_1037 argv_1396.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_817::argv_1762 (std::string argv_3461, std::string varname, vector<argv_3517>& _v_result) {
	_v_result.clear ();
	string argv_1706 = argv_3461 + varname;
	argv_2024 = argv_2287.find (argv_1706);
	if (argv_2024 == argv_2287.end()) {
		std::string argv_3828 = "(2) variable :" + varname + ": no such string variable in argv_3461 :" + argv_3461 + ":";
		argv_838 Ge ("argv_817", "argv_1762", argv_3828, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // was found from container
		_v_result = argv_2024->second;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_622
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose argv_3960 is to be 
// @@                       retrieved.
// @@
// @@ argv_3960: argv_3517: the values associated with the variable.
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to associate a argv_3960 to a given variable that
// @@ may have more than argv_2929 argv_3960, in order to argv_616 new values, just call
// @@ this function several times with new values.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_817::argv_622 (std::string argv_3461, std::string varname, std::string argv_3960) {
	string argv_1706 = argv_3461 + varname;
	argv_2025 = argv_2288.find (argv_1706);
	if (argv_2025 == argv_2288.end()) {
		vector<string> v;
		v.push_back (argv_3960);
		argv_2288[argv_1706] = v;
	}
	else {
		(argv_2025->second).push_back (argv_3960);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_3497
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose argv_3960 is to be 
// @@                       retrieved.
// @@
// @@ _v: vector<string> : the set of values to be associated with the 
// @@                      variable.
// @@
// @@ RETURN VALUE: none
// @@ 
// @@ DESCRIPTION:
// @@ This function permits to associate a set of values to a given variable 
// @@ that may have more than argv_2929 argv_3960.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_817::argv_3497 (std::string argv_3461, std::string varname, const vector<string>& _v) {
	string argv_1706 = argv_3461 + varname;
	argv_2025 = argv_2288.find (argv_1706);
	if (argv_2025 != argv_2288.end()) {
		std::string argv_3828 = "variable :" + varname + " in argv_3461 \'"+ argv_3461 + "\' already has a argv_3960(s)";
		argv_838 Ge ("argv_817", "argv_3497", argv_3828, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // ok, values not already assigned
		argv_2288[argv_1706] = _v;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ FUNCTION: argv_1763
// @@
// @@ INPUT: 
// @@ argv_3461: std::string: the argv_2817 of the argv_3461 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2817 of the variable whose argv_3960 is to be 
// @@                       retrieved.
// @@
// @@
// @@ IO: vector<string> : the set of values associated with the variable
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the values associated with a variable
// @@ that was previously argv_2221 from argv_1037 argv_1396.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_817::argv_1763 (std::string argv_3461, std::string varname, vector<string>& _v_result) {
	_v_result.clear ();
	string argv_1706 = argv_3461 + varname;
	argv_2025 = argv_2288.find (argv_1706);
	if (argv_2025 == argv_2288.end()) {
		std::string argv_3828 = "(3) variable :" + varname + ": no such string variable in argv_3461 :" + argv_3461 + ":";
		argv_838 Ge ("argv_817", "argv_1763", argv_3828, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // was found from container
		_v_result = argv_2025->second;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_815 
// @@
// @@ FUNCTION: argv_815 
// @@
// @@ INPUT: none
// @@
// @@ OUTPUT: none
// @@
// @@ IO: none
// @@
// @@ RETURN VALUE: none
// @@
// @@ DESCRIPTION:
// @@ Normal constructor of the argv_815 argv_2908.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_815::argv_815 () {
	argv_2201 = false;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_815
// @@
// @@ FUNCTION: argv_2198
// @@
// @@ INPUT: 
// @@ _filename: string: the argv_2817 of the configuration argv_1396 to argv_2198.
// @@
// @@ OUTPUT: none
// @@
// @@ IO: none
// @@
// @@ RETURN VALUE: 
// @@ bool: true if configuration argv_1396 parsing was succesful.
// @@       false otherwise.
// @@
// @@ DESCRIPTION:
// @@ This function permits to argv_2198 the configuration argv_1396 given as 
// @@ a parameter.
// @@
// @@ CONTRACT: 
// @@ - the configuration argv_1396 must not have been already argv_2221. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_815::argv_2198 (string _filename) {
	bool bret = true;
	if (argv_2201 == true) {
		argv_1787.argv_2251.argv_2247 (argv_1321, "argv_815::argv_2198 - illegal call when argv_1037 argv_1396 already argv_2221 !");
		bret = false;
	}
	else { // not already argv_2221 
		try {
			argv_1446 = _filename;
			argv_1787.argv_2251.argv_2247 (argv_2886, "============ parsing argv_1037 argv_1396 ============");
			argv_1787.argv_2251.argv_2247 (argv_2886, "argv_1396 : ", argv_1446.c_str());
			argv_1040.argv_2965 (argv_1446);
			vector<string> v_str;
			v_str = argv_1040.argv_1268 ();
			argv_3517 argv_2866 = v_str.size();
			for (argv_3517 i=0 ; i<argv_2866 ; i++) {	
				argv_1787.argv_2251.argv_2247 (argv_2886, v_str[i].c_str());
			}
			argv_1787.argv_2251.argv_2247 (argv_2886, " ");
			bret 	 = argv_3090 ();
		}
		catch (argv_838 Ge) {
			string argv_890="";
			string fn_name   = "";
			string argv_2812       = "";
			argv_3517 argv_1318;	
			char argv_3828[argv_1039];
			while (Ge.argv_1767 (argv_890, fn_name, argv_2812, argv_1318) == true) {
				argv_3548 (argv_3828, argv_1039, "+++ ERROR: parse error: %s (argv_1318=%d)", argv_2812.c_str(), argv_1318);
				argv_3828[argv_1039 - 1]='\0';
				argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
			}
			bret = false;
		}
	}
	if (bret == true) {
		argv_2201 = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


