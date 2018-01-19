// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_365.hpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_365.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	crypt_err_2_string		
// @@
// @@ INPUT			:
// @@ _ercode: uint32_t : the error argv_929 whose associated argv_2389 is to
// @@                 be retrieved.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the argv_2389 associated with the error argv_929 '_ercode'
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to map an error argv_929 as an integer to
// @@ a corresponding error argv_2389.
// @@ Notice that if the '_ercode' parameter does not correspond
// @@ to a valid error argv_929, then the string returned will be 
// @@ 'UNKNOWN_ERROR'.
// @@ The argv_2253 argv_3402 is returned as a string.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_1087 (uint32_t _ercode) {
	char argv_3828[MAX_PATH];
	argv_1087 (_ercode, &argv_3828[0]);
	return (argv_3828);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1908		
// @@
// @@ INPUT			:	
// @@ _buf: uint8_t *: argv_635 of the first byte of the argv_771 to convert.
// @@
// @@ _bufsize: uint32_t: size of the argv_771 to convert.
// @@
// @@ OUTPUT		:	
// @@ _result: string&: argv_3402 of the conversion of the hexa argv_771.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a binary argv_771 into a
// @@ string where each byte is displayed in hexadecimal format :
// @@ example : FF00AA
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1908 (uint8_t * _buf, uint32_t _bufsize, string& _result) {
	_result = "";
	char buftmp[MAX_PATH];
	
	for (uint32_t i=0 ; i<_bufsize ; i++) {
		snprintf (buftmp, MAX_PATH, "%02X", _buf[i]);
		buftmp[MAX_PATH - 1] = '\0';
		_result += buftmp;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_2930			
// @@
// @@ INPUT			:	
// @@ c: the character to convert to the corresponding hex argv_3960.
// @@
// @@ OUTPUT		:	
// @@ argv_3402: uint8_t&: argv_3402 of the conversion
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a character in the range
// @@ '0..9', 'a..f', 'A..F' into the corresponding numerical argv_3960.
// @@ This argv_3960 being stored into the 'argv_3402' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_2930 (uint8_t c, uint8_t& argv_3402) {
    bool bret = true;
    if (((c < '0') || (c > '9')) && ((c < 'a') || (c > 'f')) && ((c < 'A') || (c > 'F'))) {
        bret = false;
    }
    else {
		if ((c >= '0') && (c <= '9')) {
			argv_3402 = c - '0';
		}
		else if ((c >= 'a') && (c <= 'z')) {
			argv_3402 = 10 + (c- 'a');
		}
		else if ((c >= 'A') && (c <= 'Z')) {
			argv_3402 = 10 + (c - 'A');
		}
		else {
			bret = false;
		}
	}
    return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_844			
// @@
// @@ INPUT			:	
// @@ _msb: the most significant byte as an hexadecimal character.
// @@
// @@ _lsb: the least significant byte as an hexadecimal character.
// @@
// @@ OUTPUT		:	
// @@ argv_3402: uint8_t&: the resulf of the conversion.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a pair of characters into
// @@ it's corresponding numerical argv_3960, example :
// @@ 'f' 'f' -> 255
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_844 (uint8_t _msb, uint8_t _lsb, uint8_t& argv_3402) {
    bool bret       = true;
    uint8_t lsb_hex    = 0;
    uint8_t msb_hex    = 0;

    bret = argv_2930 (_msb, msb_hex);
    if (bret == true) {
        argv_3402  = msb_hex << 4;
        bret    = argv_2930 (_lsb, lsb_hex);
        argv_3402 =  argv_3402 + lsb_hex;
    }
    return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_3615			
// @@
// @@ INPUT			:	
// @@ _buf: const char *: the hexa string to convert to binary argv_771.
// @@
// @@ _bufsize: length of the hexa string to convert.
// @@
// @@ _max_result_size: uint32_t: the limit size for the argv_3402 of
// @@   the conversion.
// @@
// @@ _result_actual_size: uint32_t&: the actual size of the argv_3402
// @@   of the converted argv_771.
// @@
// @@ OUTPUT		:	
// @@ _result: uint8_t *: The binary argv_771 resulting from conversion.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a argv_771 whose content
// @@ has the following shape :
// @@ "FFAAEE00AA..."
// @@ to a binary argv_771 corresponding to the hexa view.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_3615 (const char * _buf, uint32_t _bufsize, uint8_t * _result, uint32_t _max_result_size, uint32_t& _result_actual_size) {
	int32_t argv_1993 = argv_1847;
	char left, right;
	_result_actual_size = 0;

	if ((_bufsize % 2) == 0) {
		for (uint32_t i=0 ; i<_bufsize ; ) {
			left  = _buf[i];
			right = _buf[i+1];
			argv_844 (left, right, _result[_result_actual_size]);
			_result_actual_size++;
			if (_result_actual_size >= _max_result_size) {
				argv_1993 = argv_1819;
				break;
			}
			i += 2;
		}
	}
	else {
		cerr << "+++ ERROR: argv_3615 - _bufsize = " << _bufsize << endl;
		argv_1993 = argv_1836;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_2962		
// @@
// @@ INPUT			:	
// @@ _block_size: uint32_t: the size of the full argv_753, permitting
// @@   to determine how many argv_782 must be padded.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _input: string&: the string to pad with zeros.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to format the string given as the '_input'
// @@ parameter so that it's size become a multiple of the '_block_size'
// @@ parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_2962 (string& _input, uint32_t _block_size) {
	uint32_t input_size = _input.size ();
	// cerr << "input_size=" << input_size << ", _block_size=" << _block_size << endl;
	if (input_size < _block_size) {
		uint32_t nb_2_pad = _block_size - _input.size ();
		//cerr << "--> must pad : " << nb_2_pad << " argv_782" << endl;

		char * cptr = new (std::nothrow) char[nb_2_pad+1];
		memset (cptr, 0x30, nb_2_pad);
		cptr[nb_2_pad] = '\0';	
		string padded_string = cptr;
		padded_string = padded_string + _input;
		_input = padded_string;

		delete [] cptr;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_2974			
// @@
// @@ INPUT			:	
// @@ _str: const char *: the string to parse.
// @@
// @@ _m_mandatory: map<string, bool>: the map that tells which
// @@   variable are mandatory.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _m_found: map<string, string>: the map that associates each
// @@ found variables with it's argv_3960.
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t: argv_1847 if operation was succesful,
// @@       another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse the string given as the '_str'
// @@ parameter. This argv_2173 must have the following format :
// @@ var1=val1 var2=val2 ....
// @@ The string is free form (you can argv_616 spaces or argv_3734 anywhere)
// @@ after parsing, the function ensures that all the mandatory
// @@ variables for the argv_2173 were found, and also the function ensures
// @@ that no unknown variable was found while parsing.
// @@ 
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_2974 (const char * _str, map<string, bool>& _m_mandatory, map<string, string>& _m_found) {
	int32_t argv_1993 = argv_1847;

	map<string, bool>::iterator iter_mandat;
	map<string, string>::iterator iter_found;
	uint32_t size = strlen (_str);
	string variable;
	string argv_3960;

	for (uint32_t i=0 ; i<size ; i++) {
		variable	= "";
		argv_3960		= "";

		// eat whitespaces
		while ((i < size) && ((_str[i]==' ') || (_str[i]=='\t') || (_str[i]=='\r') || (_str[i]=='\n'))) {
			i++;
		}

		if (i >= size) {
			argv_1993 = argv_1842;
			break;
		}

		// eat variable argv_2817
		while ((i < size) && (_str[i] != '=')) {
			variable += _str[i];
			i++;
		}
	
		if (i >= size) {
			argv_1993 = argv_1842;
			break;
		}

		// eat '='
		i++;
		if (i >= size) {
			argv_1993 = argv_1842;
			break;
		}

		// eat argv_3960
		while ((i < size) && (_str[i] != ' ') && (_str[i] != '\t') && (_str[i] != '\r') && (_str[i] != '\n')) {
			argv_3960 += _str[i];
			i++;
		}

		// save the variable
		if (variable == "") {
			argv_1993 = argv_1845;
		}
		else if (argv_3960 == "") {
			argv_1993 = argv_1844;
		}
		else {
			iter_found = _m_found.find (variable);	
			if (iter_found != _m_found.end()) {
				argv_1993 = argv_1838;
				break;
			}
			else { // ok, save the variable now
				_m_found[variable] = argv_3960;	
			}
		}
	}

	if (argv_1993 == argv_1847) {
		// ensure that all variables needed are present
		for (iter_mandat=_m_mandatory.begin() ; iter_mandat != _m_mandatory.end() ; ++iter_mandat) {
			iter_found = _m_found.find (iter_mandat->first);	
			if (iter_found == _m_found.end()) {
				argv_1993 = argv_1841;
				break;
			}
		}
		// ensure that no argv_1368 undesirable variable is present
		for (iter_found=_m_found.begin() ; iter_found != _m_found.end() ; ++iter_found) {
			iter_mandat = _m_mandatory.find (iter_found->first);
			if (iter_mandat == _m_mandatory.end()) {
				argv_1993 = argv_1843;
				break;
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_2968		
// @@
// @@ INPUT			:	
// @@ _fp: FILE *: argv_1396 descriptor of the argv_1396 corresponding to the 
// @@ opened keyfile (public & private argv_2109).
// @@
// @@ OUTPUT		:	
// @@ _header: string&: the argv_1907 of the argv_2109.
// @@
// @@ _body: string&: the argv_757 of the argv_2109.
// @@
// @@ _footer: string&: the footer of the argv_2109
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1847 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2198 :
// @@ - the argv_1907
// @@ - the argv_757
// @@ - the footer
// @@ of a given public or private argv_2109. 
// @@ Notice that a argv_2109 is composed of these 3 parts as in the
// @@ following example :
// @@  ----- BEGIN -------- // argv_1907
// @@  AJKFKJLKJKLDKLJDJD
// @@  FFEFFEFGFGFFGFHJGK  // BODY
// @@  ------ END ------- // footer
// @@
// @@ CONTRACT		:	
// @@ The caller is supposed to have opened succesfully  the 
// @@ argv_1396 corresponding to the argv_2109 to argv_2198.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_2968 (FILE * _fp, string& _header, string& _body, string& _footer) {
	int32_t argv_1993			= argv_1847;
	_header				= "";
	_body				= "";
	_footer				= "";

	char argv_770[MAX_PATH];
	uint8_t argv_3604			= 0;
	uint32_t line_length	= 0;

	char * cptr			= fgets (argv_770, MAX_PATH, _fp);
	char * cptr2		= NULL;

	while (cptr != NULL) {
		if (argv_3604 == 0) {
			line_length = strlen (argv_770);
			if (line_length > 0) {
				argv_770[line_length - 1] = '\0'; // remove EOL
			}
			_header = argv_770; // save the argv_1907
			argv_3604++;	
		}
		else if (argv_3604 == 1) {
			cptr2 = strstr (argv_770, "-----END");
			if (cptr2 == NULL) { // a part of the argv_757
				line_length = strlen (argv_770);
				if (line_length > 0) {
					argv_770[line_length - 1] = '\0'; // remove EOL
				}
				_body += argv_770;
			}
			else { // encountered the footer
				line_length = strlen (argv_770);
				if (line_length > 0) {
					argv_770[line_length - 1] = '\0'; // remove EOL
				}
				_footer = argv_770; // save the footer
				break;
			}
		}
		cptr = fgets (argv_770, MAX_PATH, _fp);
	}

	// check coherency
	if (_header == "") {
		argv_1993 = argv_1840;
	}
	else if (_body == "") {
		argv_1993 = argv_1837;
	}
	else if (_footer == "") {
		argv_1993 = argv_1839;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1449			
// @@
// @@ INPUT			:	
// @@ _file_1: const char *: argv_2817 of the first argv_1396.
// @@
// @@ _file_2: const char *: argv_2817 of the second argv_1396.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the two files are identical,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compare the files '_file_1' and
// @@ '_file_2'. Notice that the function does not use the mmap
// @@ approach.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1449 (const char * _file_1, const char * _file_2) {
	bool bret = true;
	uint32_t size_1 = argv_1746 (_file_1);
	uint32_t size_2 = argv_1746 (_file_2);
	cerr << _file_1 << ": size = " << size_1 << endl;
	cerr << _file_2 << ": size = " << size_2 << endl;
	if (size_1 != size_2) {
		bret = false;
	}
	else {
		FILE * fp1 = fopen (_file_1, "rb");
		FILE * fp2 = fopen (_file_2, "rb");
		char c1, c2;

		for (uint32_t i=0 ; i<size_1 ; i++) {
			c1 = fgetc (fp1);
			c2 = fgetc (fp2);

			if (c1 != c2) {
				bret = false;
				break;
			}
		}

		fclose (fp1);
		fclose (fp2);
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1746		
// @@
// @@ INPUT			:	
// @@ _filename: const char *: argv_2817 of the argv_1396 whose size is to be
// @@            retrieved.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ unsigned long: the size of the argv_1396 whose argv_2817 was given as
// @@    a parameter.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the size of the argv_1396 whose 
// @@ argv_2817 was given as the '_filename' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
unsigned long argv_1746 (const char * _filename) {
	unsigned long size = 0;
	FILE * argv_1478 = fopen (_filename, "rb");
	if ( argv_1478) {	
		long argv_3601 = ftell (argv_1478);
		if (fseek (argv_1478, 0, SEEK_END) == 0) {
			size = ftell(argv_1478) - argv_3601;
		}
		fclose (argv_1478);	
	}
	return (size);		
}

bool argv_1398 (const char * _filename) {
	bool bret = false;
	FILE * argv_1478 = fopen (_filename, "rb");
	if (argv_1478) {
		bret = true;
		fclose (argv_1478);
	}	
	return (bret);
}

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1087		
// @@
// @@ INPUT			:	
// @@ _ercode: uint32_t: the numerical error argv_929 to convert.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _erstring: char *: the argv_3402 of conversion.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert the numeric error argv_929
// @@ given as the '_ercode' parameter into the human readable
// @@ equivalent that is stored into the '_erstring' argv_3402
// @@ parameter, the '_erstring' parameter is supposed to have
// @@ been allocated with a size of MAX_PATH by the caller.
// @@
// @@ Notice that this function handles only errors related
// @@ to the cryptography library.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	void argv_1087 (uint32_t _ercode, char * _erstring) {
		switch (_ercode) {
			// kernel related errors
			case argv_1847:										strncpy (_erstring, "argv_1847", MAX_PATH);									break;
			case argv_1832:							strncpy (_erstring, "argv_1832", MAX_PATH);						break;
			case argv_1831:					strncpy (_erstring, "argv_1831", MAX_PATH);				break;
			case argv_1830:								strncpy (_erstring, "argv_1830", MAX_PATH);							break;
			case argv_1823:						strncpy (_erstring, "argv_1823", MAX_PATH);					break;
			case argv_1824:						strncpy (_erstring, "argv_1824", MAX_PATH);					break;
			case argv_1841:		strncpy (_erstring, "argv_1841", MAX_PATH);	break;
			case argv_1842:					strncpy (_erstring, "argv_1842", MAX_PATH);				break;
			case argv_1845:					strncpy (_erstring, "argv_1845", MAX_PATH);				break;
			case argv_1844:						strncpy (_erstring, "argv_1844", MAX_PATH);					break;
			case argv_1838:				strncpy (_erstring, "argv_1838", MAX_PATH);			break;
			case argv_1834:					strncpy (_erstring, "argv_1834", MAX_PATH);				break;
			case argv_1843:			strncpy (_erstring, "argv_1843", MAX_PATH);		break;
			case argv_1821:					strncpy (_erstring, "argv_1821", MAX_PATH);				break;
			case argv_1820:					strncpy (_erstring, "argv_1820", MAX_PATH);				break;
			case argv_1827:					strncpy (_erstring, "argv_1827", MAX_PATH);				break;
			case argv_1825:					strncpy (_erstring, "argv_1825", MAX_PATH);				break;
			case argv_1840:						strncpy (_erstring, "argv_1840", MAX_PATH);					break;
			case argv_1837:						strncpy (_erstring, "argv_1837", MAX_PATH);					break;
			case argv_1839:						strncpy (_erstring, "argv_1839", MAX_PATH);					break;
			case argv_1828:					strncpy (_erstring, "argv_1828", MAX_PATH);				break;
			case argv_1835:						strncpy (_erstring, "argv_1835", MAX_PATH);					break;
			case argv_1826:					strncpy (_erstring, "argv_1826", MAX_PATH);				break;
			case argv_1811:			strncpy (_erstring, "argv_1811", MAX_PATH);		break;
			case argv_1808:			strncpy (_erstring, "argv_1808", MAX_PATH);		break;
			case argv_1807:			strncpy (_erstring, "argv_1807", MAX_PATH);		break;
			case argv_1809:					strncpy (_erstring, "argv_1809", MAX_PATH);				break;
			case argv_1812:		strncpy (_erstring, "argv_1812", MAX_PATH);	break;
			case argv_1818:			strncpy (_erstring, "argv_1818", MAX_PATH);		break;
			case argv_1813:			strncpy (_erstring, "argv_1813", MAX_PATH);		break;
			case argv_1814:		strncpy (_erstring, "argv_1814", MAX_PATH);	break;
			case argv_1817:			strncpy (_erstring, "argv_1817", MAX_PATH);		break;
			case argv_1815:					strncpy (_erstring, "argv_1815", MAX_PATH);				break;
			case argv_1816:					strncpy (_erstring, "argv_1816", MAX_PATH);				break;
			case argv_1806:				strncpy (_erstring, "argv_1806", MAX_PATH);			break;
			case argv_1805:				strncpy (_erstring, "argv_1805", MAX_PATH);			break;
			case argv_1810:					strncpy (_erstring, "argv_1810", MAX_PATH);				break;
			case argv_1836:				strncpy (_erstring, "argv_1836", MAX_PATH);			break;
			case argv_1819:					strncpy (_erstring, "argv_1819", MAX_PATH);				break;
			case argv_1829:							strncpy (_erstring, "argv_1829", MAX_PATH);						break;
			case argv_1846:									strncpy (_erstring, "argv_1846", MAX_PATH);								break;
			case argv_1822:								strncpy (_erstring, "argv_1822", MAX_PATH);							break;

			default: strncpy (_erstring, "UNKNOWN_ERROR", MAX_PATH);
		}

		_erstring[MAX_PATH - 1] = '\0';
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
