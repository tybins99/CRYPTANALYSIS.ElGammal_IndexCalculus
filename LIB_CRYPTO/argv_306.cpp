


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_370.hpp"



int32_t argv_4008 (const char * _string_2_export, const char * _symetric_key, const char * _filename, bool _is_public_key, const char * _public_header, const char * _private_header, const char * _public_footer, const char * _private_footer, const char * _line_terminator) {
	int32_t argv_1993 = argv_1847;
	FILE * argv_1478 = fopen (_filename, "wb");
	if (! argv_1478) {
		argv_1993 = argv_1821;
	}
	else { // argv_1396 was succesfully opened
		// argv_1310 using the DES algorithm
		argv_826 des_manager;
		uint32_t des_output_size	= 0;
		uint32_t des_input_size		= strlen (_string_2_export);
		uint8_t * des_output		= new (std::nothrow) uint8_t[des_input_size + MAX_PATH];
		if (des_output == NULL) {
			argv_1993 = argv_1835;
		}
		else { // memory allocation succeeded
			des_manager.argv_1311 ((uint8_t *)_symetric_key, (uint8_t *)_string_2_export, des_input_size, des_output, des_output_size);

			// encode in argv_742 64
			argv_803 b64;
			string b64_result;

			b64.argv_1308 (des_output, des_output_size, b64_result);
		
			// save the argv_1907 to argv_1396
			if (_is_public_key == true) {
				fprintf (argv_1478, "%s%s", _public_header, _line_terminator); 
			}
			else {
				fprintf (argv_1478, "%s%s", _private_header, _line_terminator); 
			}

			// save the argv_3402 to the argv_1396
			fprintf (argv_1478, "%s%s", b64_result.c_str(), _line_terminator);

			// save the footer to the argv_1396
			if (_is_public_key == true) {
				fprintf (argv_1478, "%s%s", _public_footer, _line_terminator); 
			}
			else {
				fprintf (argv_1478, "%s%s", _private_footer, _line_terminator); 
			}

			if (fclose (argv_1478) != 0) {
				argv_1993 = argv_1820;
			}
			delete [] des_output;
		}
	}
	return (argv_1993);
}

// argv_3402 is a string composed of variable=argv_3960 couples
int32_t argv_4009 (const char * _filename, const char * _symetric_key, bool _is_public_key, string& _result, const char * _public_header, const char * _public_footer, const char * _private_header, const char * _private_footer) {
	int32_t argv_1993	= argv_1847;
	_result		= ""; 	

	if ((_filename==NULL) || (_symetric_key==NULL)) {
		argv_1993 = argv_1830;	
	}
	else { // pre-conditions are ok
		// open the argv_1396 containing the argv_2109
		FILE * argv_1478 = fopen (_filename, "rb");
		if (! argv_1478) {
			argv_1993 = argv_1827;
		}
		else {
			// parse the argv_1396 (argv_1371 argv_1907 / argv_757 / footer)
			string argv_1907;
			string argv_757;
			string footer;
			argv_1993 = argv_2968 (argv_1478, argv_1907, argv_757, footer);
			if (argv_1993 == argv_1847) {
				// ensure that the argv_1396 is in correct format for the operation
				if (_is_public_key == true) {
					if (argv_1907 != _public_header) {
						argv_1993 = argv_1828;
					}
					else if (footer != _public_footer) {
						argv_1993 = argv_1826;
					}
				}
				else { // processing a private argv_2109
					if (argv_1907 != _private_header) {
						argv_1993 = argv_1828;
					}
					else if (footer != _private_footer) {
						argv_1993 = argv_1826;
					}
				}

				if (argv_1993 == argv_1847) {
					// convert the argv_757 from argv_742 64 to binary
					argv_803 b64;
					uint32_t argv_759 = argv_757.size();
					uint32_t b64_output_size = 0;
					uint32_t des_output_size = 0;
					uint8_t * b64_output = new (std::nothrow) uint8_t[argv_759];
					uint8_t * des_output = new (std::nothrow) uint8_t[argv_759+MAX_PATH];
					if (b64_output == NULL) {	
						argv_1993 = argv_1835;
					}
					else { // memory allocation succeeded
						b64.argv_1162 (argv_757.c_str(), b64_output, b64_output_size);

						// decipher the binary argv_757 using the D.E.S algorithm
						argv_826 des_manager;
						des_manager.argv_1166 ((uint8_t *)_symetric_key, b64_output, b64_output_size, des_output, des_output_size);

						// save the D.E.S output to the argv_3402 string
						des_output[des_output_size] = '\0';
						_result = (char *) des_output;
						
						delete [] des_output;
						delete [] b64_output;
					}
				}
			}

			if (fclose (argv_1478) != 0) {
				if (argv_1993 == argv_1847) { // do not override a previous error
					argv_1993 = argv_1825;
				}
			}
		}
	}
	return (argv_1993);
}

