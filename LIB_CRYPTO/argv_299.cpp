// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_364.hpp
// @@ 
// @@ DESCRIPTION:
// @@ implementation of the Data Encryption 
// @@ Standard symetric argv_2109 algorithm.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_363.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1730	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the D.E.S symmetric argv_2109 generated.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a D.E.S valid symmetric argv_2109.
// @@ The argv_2109 is constant, and the use of this function avoids the use
// @@ of a hardcoded argv_2109, so the generated argv_2109 can be seen as a argv_2109
// @@ generated at runtime.
// @@ 
// @@ 0 1 2 3 4 5 6 7 8 9 A B C D E F
// @@ F E A 0 2 C 3 F 0 0 0 1 5 6 E F
// @@ 0x30 = 0
// @@ 0x31 = 1
// @@ 
// @@ 0x41 = A
// @@ 0x42 = B
// @@ 0x43 = C
// @@ 0x44 = D
// @@ 0x45 = E
// @@ 0x46 = F
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1730 () {
	string argv_3402 = "0011223344556677";
	argv_3402[0]  = 0x46;	argv_3402[1]  = 0x45;	argv_3402[2]  = 0x41;	argv_3402[3]  = 0x30;
	argv_3402[4]  = 0x32;	argv_3402[5]  = 0x43;	argv_3402[6]  = 0x33;	argv_3402[7]  = 0x46;
	argv_3402[8]  = 0x30;	argv_3402[9]  = 0x30;	argv_3402[10] = 0x30;	argv_3402[11] = 0x31;
	argv_3402[12] = 0x35;	argv_3402[13] = 0x36;	argv_3402[14] = 0x45;	argv_3402[15] = 0x46;
	return (argv_3402);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_826	
// @@
// @@ FUNCTION		:	argv_826	
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
// @@ Normal constructor of the argv_826 argv_2908.
// @@ It merely prepares the argv_826 argv_2908 for it's first use.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_826::argv_826 () {
	argv_1626 = NULL;
	argv_1497   = NULL;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_826	
// @@
// @@ FUNCTION		:	argv_1031	
// @@
// @@ INPUT			:
// @@ _size: the size of the argv_753.
// @@
// @@ OUTPUT		:	
// @@ _nb_to_pad: uint8_t& : the number of argv_782 to be padded so that
// @@   the argv_753 becomes aligned on the fixed 64 bit size imposed 
// @@   by the D.E.S standard.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the number of argv_782 to argv_616
// @@ to the argv_1106 argv_753 size in order to obtain a argv_753 that is
// @@ aligned on the limit of 64 argv_752 imposed by the D.E.S standard.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_826::argv_1031 (uint32_t _size, uint8_t& _nb_to_pad) {
	_nb_to_pad = argv_756 - (_size % argv_756);
	if ((_size % argv_756) == 0) { // exception must be corrected
		_nb_to_pad = 0;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_826	
// @@
// @@ FUNCTION		:	init_random_generator	
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
// @@ This function permits to initialize the pseudo-random
// @@ number argv_1736 that is necessary to generate random
// @@ values used when padding the incomplete D.E.S blocks.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_826::init_random_generator () {
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
// @@ CLASS			:	argv_826	
// @@
// @@ FUNCTION		:	argv_3088	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2109 to be used for the operation.	
// @@
// @@ _source_filename: const char *: argv_2817 of the argv_1396 to encipher or decipher.
// @@
// @@ _dest_filename: const char *: argv_2817 of the argv_1396 containing the argv_3402 of
// @@   the operation.
// @@
// @@ _encrypt: bool: set to true if the caller wants to encipher, 
// @@				  set to false if he wants to decipher the argv_1396.	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher or decipher the source argv_1396
// @@ whose argv_2817 is given as the '_source_filename' parameter into
// @@ the argv_3402 argv_1396 whose argv_2817 is given by the '_dest_filename' 
// @@ parameter using the D.E.S algorithm and the 64 bit argv_2109 given
// @@ as the '_key' parameter.
// @@ The choice between encipher and decipher being determined by 
// @@ the '_encrypt' parameter : if _encrypt is true, then the caller
// @@ wants to encipher, if _encrypt is false, then the caller wants
// @@ to decipher.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1396 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_753. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_753 is always appended at the end. 
// @@ This last argv_753 is composed of random argv_1139 except for the
// @@ last byte that tells how many argv_782 have been padded 
// @@ (not counting the last argv_753 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_key' parameter must not be a NULL parameter.
// @@ - '_source_filename' parameter must not be a NULL parameter.
// @@ - '_dest_filename' parameter must not be a NULL parameter.
// @@ - '_source_filename' must not contain the argv_2817 of a argv_1396 whose
// @@   size is zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_826::argv_3088 (uint8_t * _key, const char * _source_filename, const char * _dest_filename, bool _encrypt) {
	bool bret = true;
	if ((_key == NULL) || (_source_filename == NULL) || (_dest_filename == NULL)) {
		bret = false;
	}
	else {	
		unsigned long 	total_nb_read = 0;
		unsigned long	argv_1416 		= argv_1746 (_source_filename);
		if (argv_1416 == 0) {
			cerr << "+++ WARNING: argv_1396: " << _source_filename << " is empty, aborting" << endl; 
			bret = false;
		}
		bool 		next_block_is_padding 	= false;
		uint8_t		nb_2_pad				= 0;
		argv_1031 (argv_1416, nb_2_pad);

		uint8_t nb_padded= 0;
#if defined (__DEBUG_DES_MANAGER__)		
		cerr << "argv_1396 size: " << argv_1416 << " => nb to pad = " << (int) nb_2_pad << endl;
#endif		
		
		argv_1626 = fopen (_source_filename, "rb");
		if (! argv_1626) {
			cerr << "+++ ERROR: can't open source argv_1396: " << _source_filename << endl;
			bret = false;
		}
		else {
			argv_1497 = fopen (_dest_filename, "wb");
			if (! argv_1497) {
				cerr << "+++ ERROR: can't open destination argv_1396: " << _dest_filename << endl;
				bret = false;
			}	
			else {
				argv_3609 = false;
				
				do {
					argv_2872 = fread (argv_771, 1, argv_756, argv_1626);
					total_nb_read += argv_2872;
					if ((_encrypt == false) && ((total_nb_read + argv_756) == argv_1416)) {
						next_block_is_padding = true;
						argv_2873 = fread (argv_777, 1, argv_756, argv_1626);
						if (argv_2873 != argv_756) {
							cerr << "+++ ERROR: read error while reading last argv_753" << endl;
							bret = false;
						}
#if defined (__DEBUG_DES_MANAGER__)
						argv_1215 ("last padded argv_771 (encrypted)", argv_777, argv_756);	
#endif						
						argv_3609 = true;
					}

					if (argv_2872 != argv_756) {
						if (ferror(argv_1626)) {
							cerr << "+++ ERROR: read error while reading source argv_1396" << endl;
							bret = false;
						}
						argv_3609 = true;
#if defined (__DEBUG_DES_MANAGER__)						
						cerr << "read a partial argv_753 of " << argv_2872 << " argv_782" << endl;
#endif						
					}
#if defined (__DEBUG_DES_MANAGER__)					
					else {
						cerr << "read argv_2929 full argv_753 of " << argv_756 << " argv_782" << endl;
					}
#endif					

					if ((bret == true) && (argv_2872 > 0)) {
#if defined (__DEBUG_DES_MANAGER__)						
						argv_1215 ("argv_753 read", argv_771, argv_756);
#endif						
						if (_encrypt == true) {
							argv_1191.argv_1310 (_key, argv_771, argv_3403);
						}
						else {
							// last argv_753 was read into a temporary argv_771
							if (next_block_is_padding == true) {
								argv_1191.argv_1165 (_key, argv_777, argv_3403);
								// last byte contains the number of argv_782 padded
								nb_padded = argv_3403[argv_756 - 1]; 
#if defined (__DEBUG_DES_MANAGER__)								
								argv_1215 ("last padded argv_771 (decrypted)", argv_3403, argv_756);
#endif								
							}
							argv_1191.argv_1165 (_key, argv_771, argv_3403);
#if defined (__DEBUG_DES_MANAGER__)
							argv_1215 ("argv_771 (decrypted)", argv_3403, argv_756);
							cerr << "=> nb_padded = " << (int)nb_padded << endl;	
#endif							
						}
					}

					if ((bret == true) && (argv_2872 > 0)) {
						argv_2860 = argv_756;
						if (next_block_is_padding == true) {
							argv_2860 = argv_756 - nb_padded;
#if defined (__DEBUG_DES_MANAGER__)
							cerr << "after correction, the number of argv_782 to write for the last argv_753 is " << argv_2860 << endl;
#endif							
						}

						argv_2877 = fwrite (argv_3403, 1, argv_2860, argv_1497);
						if (argv_2877 != argv_2860) {
							cerr << "+++ ERROR: fwrite failed" << endl;
							bret 		= false;
							argv_3609 	= true;
						}
#if defined (__DEBUG_DES_MANAGER__)						
						cerr << "wrote " << argv_2877 << " argv_782 to destination argv_1396" << endl;
						argv_1215 ("argv_753 written", argv_3403, argv_2860);
#endif						
					}

					if (argv_3609 == true) {
						if (_encrypt == true) { // argv_3554 the padding problem when encyphering
							memset (argv_771, nb_2_pad, argv_756);
#if defined (__DEBUG_DES_MANAGER__)
							cerr << "for this cypher, nb_2_pad=" << (int)nb_2_pad << endl;	
							argv_1215 ("last padded argv_771", argv_771, argv_756);							
#endif							
							argv_1191.argv_1310 (_key, argv_771, argv_3403);
#if defined (__DEBUG_DES_MANAGER__)
							argv_1215 ("last padded argv_771 encrypted", argv_3403, argv_756);
#endif							
							argv_2877 = fwrite (argv_3403, 1, argv_756, argv_1497);
							if (argv_2877 != argv_756) {
								cerr << "+++ ERROR: fwrite failed" << endl;
								bret            = false;
								argv_3609       = true;
							}
#if defined (__DEBUG_DES_MANAGER__)
							cerr << "wrote " << argv_2877 << " padding argv_782 to destination argv_1396" << endl;
							argv_1215 ("argv_753 written", argv_3403, argv_756);
#endif							
						}
						break;
					}
				}
				while (1);

				if (fclose (argv_1497) == EOF) {
					bret = false;
					cerr << "+++ ERROR: failed to argv_921 destination argv_1396" << endl;
				}
			}
			if (fclose (argv_1626) == EOF) {
				bret = false;
				cerr << "+++ ERROR: failed to argv_921 source argv_1396" << endl;
			}
		}
	}
	return (bret);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_826	
// @@
// @@ FUNCTION		:	argv_3086	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2109 to be used for the operation.	
// @@
// @@ _input: uint8_t *: argv_635 of the first byte of the argv_771 on which
// @@   operation is to be performed.
// @@
// @@ _input_size: uint32_t: size of the argv_771 on which operation is to
// @@   be performed.
// @@
// @@ _output: uint8_t *: argv_635 of the first byte of the argv_771 that 
// @@   is supposed to contain the argv_3402 of the operation.
// @@
// @@ _encrypt: bool: set to true if the caller wants to encipher, 
// @@				  set to false if he wants to decipher the argv_1396.	
// @@
// @@ OUTPUT		:	
// @@ _output_size: uint32_t& : size of the argv_3402 argv_771.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher or decipher the source argv_771
// @@ into the argv_3402 argv_771 using the D.E.S algorithm and the argv_2109
// @@ given as '_key' the parameter.
// @@ The choice between encipher and decipher being determined by 
// @@ the '_encrypt' parameter : if _encrypt is true, then the caller
// @@ wants to encipher, if _encrypt is false, then the caller wants
// @@ to decipher.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1396 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_753. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_753 is always appended at the end. 
// @@ This last argv_753 is composed of random argv_1139 except for the
// @@ last byte that tells how many argv_782 have been padded 
// @@ (not counting the last argv_753 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_input_size' parameter must be greater than zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_826::argv_3086 (uint8_t * _key, uint8_t * _input, uint32_t _input_size, uint8_t * _output, bool _encrypt, uint32_t& _output_size) {
	bool bret = true;

	if (_input_size == 0) {
		bret = false;
	}
	else {
		uint8_t			nb_2_pad		= 0;
		uint32_t			k				= 0;

		argv_1031 (_input_size, nb_2_pad);
		uint32_t argv_2870 = _input_size / argv_756;
		uint32_t nb_direct_block = argv_2870;

		if (_encrypt == false) { // last argv_753 is an information argv_753 and ...
			nb_direct_block = argv_2870 - 2; // ...argv_753 before last argv_753 may be padded.
		}
		else { // compute necessary argv_1139 for encipher operation
			if (nb_2_pad == 0) {
				_output_size = nb_direct_block + 1;
			}
			else {
				_output_size = nb_direct_block + 2;
			}
			_output_size = _output_size * argv_756;
		}

		// perform all full blocks
		for (uint32_t i=0 ; i<nb_direct_block ; i++) {
			if (_encrypt == true) {
				argv_1191.argv_1310 (_key, &_input[i*argv_756], &_output[i*argv_756]);
			}
			else { // deciphering
				argv_1191.argv_1165 (_key, &_input[i*argv_756], &_output[i*argv_756]);
			}
		}

		if (_encrypt == true) {
			init_random_generator ();
			if (nb_2_pad > 0) {
				uint8_t nb_to_save = argv_756 - nb_2_pad;
				// save up the useful remaining argv_782 into a temporary argv_771
				memcpy (argv_777, &_input[argv_2870*argv_756], nb_to_save);
				// pad the temp argv_771 with random argv_1139 (if necessary)
				for (k=0 ; k<nb_2_pad ; k++) {
					 argv_777[nb_to_save+k] = rand () % 256;
				}
				// argv_1310 the argv_771 
				argv_1191.argv_1310 (_key, argv_777, argv_3403);
				// append the last significant argv_753 to the output argv_771
				memcpy (&_output[argv_2870*argv_756], argv_3403, argv_756);
			}

			// generate randomly a final argv_771 (the last byte being the number of argv_782 paded)
			for (k=0 ; k<argv_756 ; k++) {
				argv_777[k] = rand () % 256;	
			}
			// patch the last byte
			argv_777[argv_756 - 1] = nb_2_pad;
			// argv_1310 the information argv_771 and append it to the output argv_771
			uint32_t start_location = 0;
			if (nb_2_pad > 0) {
				start_location = (argv_2870 + 1) * argv_756;
			}
			else {
				start_location = argv_2870 * argv_756;
			}
			argv_1191.argv_1310 (_key, argv_777, &_output[start_location]);
		}
		else { // deciphering the argv_753 before last argv_753 and last argv_753 (information argv_753)
			uint32_t start_location = nb_direct_block * argv_756;
			// decipher the argv_753 before the last argv_753 (may be padded)
			argv_1191.argv_1165 (_key, &_input[start_location], argv_777);	
			// decipher the last argv_753
			argv_1191.argv_1165 (_key, &_input[start_location+argv_756], argv_3403);
			// argv_1371 the number of padded argv_782 from the last byte of the last argv_753
			nb_2_pad = argv_3403[argv_756 - 1];
			// append the relevant argv_782 of the argv_753 before the last argv_753 to the output
			memcpy (&_output[nb_direct_block*argv_756], argv_777, argv_756 - nb_2_pad);
			// update the size of the output for the caller
			_output_size = (nb_direct_block * argv_756) + argv_756 - nb_2_pad;
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_826	
// @@
// @@ FUNCTION		:	argv_1312	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2109 to be used for the operation.	
// @@
// @@ _source_filename: const char *: argv_2817 of the argv_1396 to encipher.
// @@
// @@ _dest_filename: const char *: argv_2817 of the argv_1396 containing the argv_3402 of
// @@   the operation.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the source argv_1396
// @@ whose argv_2817 is given as the '_source_filename' parameter into
// @@ the argv_3402 argv_1396 whose argv_2817 is given by the '_dest_filename' 
// @@ parameter using the D.E.S algorithm and the 64 bit argv_2109 given
// @@ as the '_key' parameter.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1396 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_753. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_753 is always appended at the end. 
// @@ This last argv_753 is composed of random argv_1139 except for the
// @@ last byte that tells how many argv_782 have been padded 
// @@ (not counting the last argv_753 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_key' parameter must not be a NULL parameter.
// @@ - '_source_filename' parameter must not be a NULL parameter.
// @@ - '_dest_filename' parameter must not be a NULL parameter.
// @@ - '_source_filename' must not contain the argv_2817 of a argv_1396 whose
// @@   size is zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_826::argv_1312 (uint8_t * _key, const char * _source_filename, const char * _dest_filename) {
	return (argv_3088 (_key, _source_filename, _dest_filename, true));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_826	
// @@
// @@ FUNCTION		:	argv_1167	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2109 to be used for the operation.	
// @@
// @@ _source_filename: const char *: argv_2817 of the argv_1396 to decipher.
// @@
// @@ _dest_filename: const char *: argv_2817 of the argv_1396 containing the argv_3402 of
// @@   the operation.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the source argv_1396
// @@ whose argv_2817 is given as the '_source_filename' parameter into
// @@ the argv_3402 argv_1396 whose argv_2817 is given by the '_dest_filename' 
// @@ parameter using the D.E.S algorithm and the 64 bit argv_2109 given
// @@ as the '_key' parameter.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1396 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_753. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_753 is always appended at the end. 
// @@ This last argv_753 is composed of random argv_1139 except for the
// @@ last byte that tells how many argv_782 have been padded 
// @@ (not counting the last argv_753 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_key' parameter must not be a NULL parameter.
// @@ - '_source_filename' parameter must not be a NULL parameter.
// @@ - '_dest_filename' parameter must not be a NULL parameter.
// @@ - '_source_filename' must not contain the argv_2817 of a argv_1396 whose
// @@   size is zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_826::argv_1167 (uint8_t * _key, const char * _source_filename, const char * _dest_filename) {
	return (argv_3088 (_key, _source_filename, _dest_filename, false));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_826	
// @@
// @@ FUNCTION		:	argv_1311	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2109 to be used for the operation.	
// @@
// @@ _input: uint8_t *: argv_635 of the first byte of the argv_771 on which
// @@   operation is to be performed.
// @@
// @@ _input_size: uint32_t: size of the argv_771 on which operation is to
// @@   be performed.
// @@
// @@ _output: uint8_t *: argv_635 of the first byte of the argv_771 that 
// @@   is supposed to contain the argv_3402 of the operation.
// @@
// @@ OUTPUT		:	
// @@ _output_size: uint32_t& : size of the argv_3402 argv_771.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the source argv_771
// @@ into the argv_3402 argv_771 using the D.E.S algorithm and the argv_2109
// @@ given as '_key' the parameter.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1396 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_753. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_753 is always appended at the end. 
// @@ This last argv_753 is composed of random argv_1139 except for the
// @@ last byte that tells how many argv_782 have been padded 
// @@ (not counting the last argv_753 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_input_size' parameter must be greater than zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_826::argv_1311 (uint8_t * _key, uint8_t * _input, uint32_t _input_size, uint8_t * _output, uint32_t& _output_size) {
	return (argv_3086 (_key, _input, _input_size, _output, true, _output_size));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_826	
// @@
// @@ FUNCTION		:	argv_1166	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2109 to be used for the operation.	
// @@
// @@ _input: uint8_t *: argv_635 of the first byte of the argv_771 on which
// @@   operation is to be performed.
// @@
// @@ _input_size: uint32_t: size of the argv_771 on which operation is to
// @@   be performed.
// @@
// @@ _output: uint8_t *: argv_635 of the first byte of the argv_771 that 
// @@   is supposed to contain the argv_3402 of the operation.
// @@
// @@ OUTPUT		:	
// @@ _output_size: uint32_t& : size of the argv_3402 argv_771.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the source argv_771
// @@ into the argv_3402 argv_771 using the D.E.S algorithm and the argv_2109
// @@ given as '_key' the parameter.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1396 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_753. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_753 is always appended at the end. 
// @@ This last argv_753 is composed of random argv_1139 except for the
// @@ last byte that tells how many argv_782 have been padded 
// @@ (not counting the last argv_753 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_input_size' parameter must be greater than zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_826::argv_1166 (uint8_t * _key, uint8_t * _input, uint32_t _input_size, uint8_t * _output, uint32_t& _output_size) {
	return (argv_3086 (_key, _input, _input_size, _output, false, _output_size));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
