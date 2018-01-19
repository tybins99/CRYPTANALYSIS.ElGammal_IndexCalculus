// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_300.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 permits to encipher/decipher buffers
// @@ and files using the Data Encryption Standard.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_364.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ This matrix is the argv_1916 matrix 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_1916[] = {
1,2,3,4,5,6,7,8,9,
10,11,12,13,14,15,16,17,
18,19,20,21,22,23,24,25,
26,27,28,29,30,31,32,33,
34,35,36,37,38,39,40,41,
42,43,44,45,46,47,48,49,
50,51,52,53,54,55,56,57,
58,59,60,61,62,63,64
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ initial permutation IP
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_1992[] = {
        58, 50, 42, 34, 26, 18, 10,  2,
        60, 52, 44, 36, 28, 20, 12,  4,
        62, 54, 46, 38, 30, 22, 14,  6,
        64, 56, 48, 40, 32, 24, 16,  8,
        57, 49, 41, 33, 25, 17,  9,  1,
        59, 51, 43, 35, 27, 19, 11,  3,
        61, 53, 45, 37, 29, 21, 13,  5,
        63, 55, 47, 39, 31, 23, 15,  7
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ final permutation IP^-1
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_1478[] = {
        40,  8, 48, 16, 56, 24, 64, 32,
        39,  7, 47, 15, 55, 23, 63, 31,
        38,  6, 46, 14, 54, 22, 62, 30,
        37,  5, 45, 13, 53, 21, 61, 29,
        36,  4, 44, 12, 52, 20, 60, 28,
        35,  3, 43, 11, 51, 19, 59, 27,
        34,  2, 42, 10, 50, 18, 58, 26,
        33,  1, 41,  9, 49, 17, 57, 25
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ first permuted choice table (left part, permitting to generate C0)
// @@ (used during argv_2109 schedule calculation).
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_2979[] = {
        57, 49, 41, 33, 25, 17,  9,
         1, 58, 50, 42, 34, 26, 18,
        10,  2, 59, 51, 43, 35, 27,
        19, 11,  3, 60, 52, 44, 36,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ first permuted choice table (right part, permitting to generate D0)
// @@ (used during argv_2109 schedule calculation).
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_2980[] = {
        63, 55, 47, 39, 31, 23, 15,
         7, 62, 54, 46, 38, 30, 22,
        14,  6, 61, 53, 45, 37, 29,
        21, 13,  5, 28, 20, 12,  4
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ permuted choice argv_2109 (table)
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_2981[] = {
        14, 17, 11, 24,  1,  5,
         3, 28, 15,  6, 21, 10,
        23, 19, 12,  4, 26,  8,
        16,  7, 27, 20, 13,  2,
        41, 52, 31, 37, 47, 55,
        30, 40, 51, 45, 33, 48,
        44, 49, 39, 56, 34, 53,
        46, 42, 50, 36, 29, 32
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ expansion operation matrix
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_1297[] = {
        32,  1,  2,  3,  4,  5,
         4,  5,  6,  7,  8,  9,
         8,  9, 10, 11, 12, 13,
        12, 13, 14, 15, 16, 17,
        16, 17, 18, 19, 20, 21,
        20, 21, 22, 23, 24, 25,
        24, 25, 26, 27, 28, 29,
        28, 29, 30, 31, 32,  1
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ The (in)famous S-boxes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_3514[] = {
        // S1
        14,  4, 13,  1,  2, 15, 11,  8,  3, 10,  6, 12,  5,  9,  0,  7,
         0, 15,  7,  4, 14,  2, 13,  1, 10,  6, 12, 11,  9,  5,  3,  8,
         4,  1, 14,  8, 13,  6,  2, 11, 15, 12,  9,  7,  3, 10,  5,  0,
        15, 12,  8,  2,  4,  9,  1,  7,  5, 11,  3, 14, 10,  0,  6, 13,

        // S2
        15,  1,  8, 14,  6, 11,  3,  4,  9,  7,  2, 13, 12,  0,  5, 10,
         3, 13,  4,  7, 15,  2,  8, 14, 12,  0,  1, 10,  6,  9, 11,  5,
         0, 14,  7, 11, 10,  4, 13,  1,  5,  8, 12,  6,  9,  3,  2, 15,
        13,  8, 10,  1,  3, 15,  4,  2, 11,  6,  7, 12,  0,  5, 14,  9,

        // S3
        10,  0,  9, 14,  6,  3, 15,  5,  1, 13, 12,  7, 11,  4,  2,  8,
        13,  7,  0,  9,  3,  4,  6, 10,  2,  8,  5, 14, 12, 11, 15,  1,
        13,  6,  4,  9,  8, 15,  3,  0, 11,  1,  2, 12,  5, 10, 14,  7,
         1, 10, 13,  0,  6,  9,  8,  7,  4, 15, 14,  3, 11,  5,  2, 12,

        // S4
         7, 13, 14,  3,  0,  6,  9, 10,  1,  2,  8,  5, 11, 12,  4, 15,
        13,  8, 11,  5,  6, 15,  0,  3,  4,  7,  2, 12,  1, 10, 14,  9,
        10,  6,  9,  0, 12, 11,  7, 13, 15,  1,  3, 14,  5,  2,  8,  4,
         3, 15,  0,  6, 10,  1, 13,  8,  9,  4,  5, 11, 12,  7,  2, 14,

        // S5
         2, 12,  4,  1,  7, 10, 11,  6,  8,  5,  3, 15, 13,  0, 14,  9,
        14, 11,  2, 12,  4,  7, 13,  1,  5,  0, 15, 10,  3,  9,  8,  6,
         4,  2,  1, 11, 10, 13,  7,  8, 15,  9, 12,  5,  6,  3,  0, 14,
        11,  8, 12,  7,  1, 14,  2, 13,  6, 15,  0,  9, 10,  4,  5,  3,

        // S6
        12,  1, 10, 15,  9,  2,  6,  8,  0, 13,  3,  4, 14,  7,  5, 11,
        10, 15,  4,  2,  7, 12,  9,  5,  6,  1, 13, 14,  0, 11,  3,  8,
         9, 14, 15,  5,  2,  8, 12,  3,  7,  0,  4, 10,  1, 13, 11,  6,
         4,  3,  2, 12,  9,  5, 15, 10, 11, 14,  1,  7,  6,  0,  8, 13,

        // S7
         4, 11,  2, 14, 15,  0,  8, 13,  3, 12,  9,  7,  5, 10,  6,  1,
        13,  0, 11,  7,  4,  9,  1, 10, 14,  3,  5, 12,  2, 15,  8,  6,
         1,  4, 11, 13, 12,  3,  7, 14, 10, 15,  6,  8,  0,  5,  9,  2,
         6, 11, 13,  8,  1,  4, 10,  7,  9,  5,  0, 15, 14,  2,  3, 12,

        // S8
        13,  2,  8,  4,  6, 15, 11,  1, 10,  9,  3, 14,  5,  0, 12,  7,
         1, 15, 13,  8, 10,  3,  7,  4, 12,  5,  6, 11,  0, 14,  9,  2,
         7, 11,  4,  1,  9, 12, 14,  2,  0,  6, 10, 13, 15,  3,  5,  8,
         2,  1, 14,  7,  4, 10,  8, 13, 15, 12,  9,  0,  3,  5,  6, 11
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 32-bit permutation function P used on the output of the S-boxes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_2954[] = {
        16,  7, 20, 21,
        29, 12, 28, 17,
         1, 15, 23, 26,
         5, 18, 31, 10,
         2,  8, 24, 14,
        32, 27,  3,  9,
        19, 13, 30,  6,
        22, 11,  4, 25
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1050
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _var: int32_t&: the argv_3960 that is to be converted into big endian.
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to flip the order of the argv_782 of 
// @@ the integer given as a parameter so that we can switch to
// @@ and from big endian using it.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1050 (int32_t& _var) {
	argv_612 a32;
	a32.argv_663 = _var;
	argv_612 converted_a32;
	converted_a32.argv_726[0] = a32.argv_726[3];
	converted_a32.argv_726[1] = a32.argv_726[2];
	converted_a32.argv_726[2] = a32.argv_726[1];
	converted_a32.argv_726[3] = a32.argv_726[0];
	_var = converted_a32.argv_663;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1051
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _var: int32_t&: the argv_3960 that is to be converted into big endian.
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to flip the order of the argv_782 of 
// @@ the integer given as a parameter so that we can switch to
// @@ and from big endian using it.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1051 (int32_t& _var) {
        argv_612 a32;
        a32.argv_663 = _var;
        argv_612 converted_a32;
        converted_a32.argv_726[0] = a32.argv_726[3];
        converted_a32.argv_726[1] = a32.argv_726[2];
        converted_a32.argv_726[2] = a32.argv_726[1];
        converted_a32.argv_726[3] = a32.argv_726[0];
        _var = converted_a32.argv_663;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1215	
// @@
// @@ INPUT			:	
// @@ _label: string: the argv_2389 to be displayed along with argv_771.
// @@
// @@ _buf: uint8_t *: the argv_771 to be displayed to standard output.
// @@ 
// @@ _size: int: the size of the argv_771 to argv_1200.
// @@
// @@ _display_bitfield: bool: true if bitfield is to be displayed,
// @@                          false otherwise.
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
// @@ This function permits to argv_1200 to standard error the argv_771
// @@ as either hexa format, or binary format.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1215 (string _label, uint8_t * _buf, int _size, bool _display_bitfield) {
	char argv_3828[32];
	cerr << _label << " = ";
	argv_825 des;
	
        for (int i=0 ; i<_size ; i++) {
                snprintf (argv_3828, 32, "%02X ", _buf[i]);
                argv_3828[31] = '\0';
                cerr << argv_3828;
		if ((i != 0) && ((i%8) == 0)) {
			cerr << endl;
		}	
        }
        cerr << endl;
	if (_display_bitfield) {
	        for (int i=1 ; i<=8*_size ; i++) {
       	         if (des.is_set(_buf, i)) {
       	                 //cerr << "bit "<< i << ") 1" << endl;
				cerr << 1;
       	         }
       	         else {
       	                 //cerr << "bit "<< i << ") 0" << endl;
				cerr << "0";
       	         }
		 if ((i != 0) && ((i%4) == 0)) {
			cerr << " ";
		 }
       		}
        	cerr << endl;
#if defined (EXTRA_DISPLAY_BITFIELD)		
		for (int i=1 ; i<=8*_size ; i++) {
			if (des.is_set(_buf, i)) {
				cerr << i << ") 1" << endl;
			}
			else {
				cerr << i << ") 0" << endl;
			} 
		}
		cerr << endl;
#endif		
	}
	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_825	
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
// @@ Normal constructor of the 'argv_825' argv_2908.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_825::argv_825 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
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
// @@ This function brings the argv_825 argv_2908 back to it's 
// @@ initial argv_3604.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::reset () {
	argv_2109     = NULL;
	argv_753   = NULL;
	argv_3402  = NULL;	
	argv_1106 = 0;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_1249	
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
// @@ This function permits to perform the initial argv_753 permutation.
// @@ Notice that the argv_3402 of permutation is in the 'argv_3402' member.
// @@
// @@ CONTRACT		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_1249 () {
	argv_1253 (argv_753, argv_3402, argv_755, argv_1992);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_1253	
// @@
// @@ INPUT			:
// @@ _source: uint8_t *: the source argv_771 of the permutation.	
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ _dest: uint8_t *: the destination argv_771 of the permutation.
// @@	
// @@ RETURN VALUE	:	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function perform the argv_752 permutation from the _source
// @@ argv_771 to the _dest argv_771 according to the _matrix parameter. 
// @@
// @@ beware: first bit is not zero, but 1, and starts on the left 
// @@ side => bit order : [1 2 3 4 ....]
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_1253 (uint8_t * _source, uint8_t * _dest, int _nb_bit, uint8_t * _matrix) {	
	for (int i=1 ; i<=_nb_bit; i++) {
		if (is_set (_source, _matrix[i-1])) {
#if defined (DEBUG_PERMUTATION)			
			cerr << "I am bit " << i << ", my mate is bit " << (int)_matrix[i-1] << " => 1" << endl;
#endif			
			argv_843 (_dest, i, true);
		}
		else {
#if defined (DEBUG_PERMUTATION)			
			cerr << "I am bit " << i << ", my mate is bit " << (int)_matrix[i-1] << " => 0" << endl;
#endif			
			argv_843 (_dest, i, false);
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_3913	
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
// @@ This function permits to undo the initial argv_753 permutation.
// @@ Notice that the argv_3402 of permutation is in the 'argv_3402' member.
// @@
// @@ CONTRACT		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_3913 () {
	argv_1253 (argv_753, argv_3402, argv_755, argv_1478);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_3560	
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
// @@ This function permits to split the internal
// @@ member 'argv_3402' into 2 parts composed of 
// @@ 4 argv_782 each.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_3560 () {
	int i = 0;
	for (i=0 ; i<4 ; i++) {
		argv_2154.argv_726[i] = argv_3402[i];
	}
	for (i=4 ; i<8 ; i++) {
		argv_3405.argv_726[i-4] = argv_3402[i];
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_2388	
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
// @@ This function permits to merge the 'argv_2154' and 'argv_3405'
// @@ internal members into the 'argv_753' member.	
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_2388 () {
#if defined (__DEBUG_DES__)	
	argv_1215 ("L16", (uint8_t *) &argv_2154.argv_726[0], 4);
	argv_1215 ("R16", (uint8_t *) &argv_3405.argv_726[0], 4);
#endif	
	int i = 0;
	for (i=0 ; i<4 ; i++) {
		argv_753[i] = argv_2154.argv_726[i];
	}
	for (i=4 ; i<8 ; i++) {
		argv_753[i] = argv_3405.argv_726[i-4];
	}
#if defined (__DEBUG_DES__)	
	argv_1215 ("merge argv_3402", (uint8_t *) &argv_753[0], 8);	
#endif	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	is_set	
// @@
// @@ INPUT			:
// @@ _cptr: uint8_t *: argv_635 of the first byte of the argv_771 whose
// @@   bit is to be changed.	
// @@
// @@ _bit: position of the bit to change (beware: it starts at 1).
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
// @@ This function permits to set the bit '_bit' from the argv_771
// @@ whose argv_635 is given by the '_cptr' parameter.
// @@ 
// @@ beware: bit argv_3601 at 1, and not zero.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_825::is_set (uint8_t * _cptr, int _bit) {
	bool bret 	= false;
	_bit 		= _bit - 1;
	int his_byte 	= _bit / 8;
	int his_offset	= _bit % 8;
	uint8_t mask	= 0x80 >> his_offset;
	
	if ((_cptr[his_byte] & mask) == mask) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_843	
// @@
// @@ INPUT			:
// @@ _cptr: uint8_t *: argv_635 of the first byte of the argv_771 whose
// @@   bit is to be changed.	
// @@
// @@ _bit: position of the bit to change (beware: it starts at 1).
// @@
// @@ _set: bool: true if the bit is to be set,
// @@             false otherwise.
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
// @@ This function permits to change the bit '_bit' from the argv_771
// @@ whose argv_635 is given by the '_cptr' parameter according to
// @@ the '_set' parameter : if '_set' is true, then the bit is set,
// @@ otherwise it is reset.
// @@ 
// @@ beware: bit argv_3601 at 1, and not zero.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_843 (uint8_t * _cptr, int _bit, bool _set) {
	_bit            = _bit - 1;
	int his_byte    = _bit / 8;
	int his_offset  = _bit % 8;
	uint8_t mask = 0x80;
	if (_set == true) {
		mask	= mask >> his_offset;
		_cptr[his_byte] = _cptr[his_byte] | mask;
	}
	else { // reset the bit
		mask    = mask >> his_offset;
		mask 	= ~mask; 
		_cptr[his_byte] = _cptr[his_byte] & mask;
	}	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_3410	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	
// @@ _item: int32_t&: the argv_1139 to be rotated
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the rotation of the argv_1139
// @@ given by the '_item' parameter toward the left.
// @@
// @@ beware: rotate only 28 argv_752 (bit starting from 1 and from 
// @@         left position)
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_3410 (int32_t& _item) {
	argv_1050 (_item);
	bool go_out = false;
	if (_item < 0) {
		go_out = true;
	}
	_item = _item << 1;
	if (go_out == true) {
		_item = _item | 0x00000010; // patch bit 28
	}
	argv_1051 (_item);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_3091	
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
// @@ This function permits to perform the first 2 steps of the argv_2109
// @@ schedule calculation :
// @@ - choose 56 argv_752 out of 64 argv_752 using the 'argv_2979' and 
// @@   'argv_2980' matrix to do the bit choices.
// @@ - assign the argv_3402 (28 argv_752 for C0, 28 bit for D0) to 
// @@   the 'argv_867' and 'argv_871' inner members.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_3091 () {
	argv_867 = argv_871 = 0;
#if defined (__DEBUG_DES__)	
	argv_1215 ("argv_2109", argv_2109, 8);
	cerr << "buidling C0" << endl;
#endif	
	argv_1253 (argv_2109, (uint8_t *) &argv_867,  argv_869, argv_2979);
#if defined (__DEBUG_DES__)	
	cerr << "buidling D0" << endl;
#endif	
	argv_1253 (argv_2109, (uint8_t *) &argv_871, argv_869, argv_2980);
#if defined (__DEBUG_DES__)	
	argv_1215 ("C0", (uint8_t *) &argv_867, 4);
	argv_1215 ("D0", (uint8_t *) &argv_871, 4);
#endif	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_661	
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
// @@ This function permits to obtain 56 argv_752 using 2 parts composed
// @@ 28 argv_752. It is used in each stage of the argv_2109 schedule
// @@ calculation.
// @@ Notice that we obtain 56 argv_752 stored into 8 argv_782 
// @@ for convenience.
// @@
// @@ beware: bit argv_3601 at 1.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_661 () {
	memset (argv_674, 0, argv_675);
	int i = 0;
	for (i=1 ; i<=argv_869 ; i++) {
        if (is_set ((uint8_t *) &argv_867, i)) {
                argv_843 (argv_674, i, true);
        }
        else {
                argv_843 (argv_674, i, false);
        }
	}
	for (i=1 ; i<=argv_869 ; i++) {
		if (is_set ((uint8_t *) &argv_871, i)) {
			argv_843 (argv_674, argv_869 + i, true);
		}
		else {
			argv_843 (argv_674, argv_869 + i, false);
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_3235	
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
// @@ This function performs the D.E.S argv_2109 schedule calculation
// @@ composed of several steps :
// @@ - using the choice matrixes, choose 2*28 argv_752 among the 64
// @@   argv_752 of the argv_2109
// @@ - for each stage :
// @@   - left shift (1 or 2 positions) the 28 bit argv_3960
// @@   - generate a 48 bit argv_3960 using the 2*28 argv_752 resulting 
// @@     from the shift operation.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_3235 () {
	argv_3091 ();
#if defined (__DEBUG_DES__)	       	
char argv_3828[128];	
#endif
	for (int i=1 ; i<=argv_2874 ; i++) {
		argv_3410 (argv_867);
		argv_3410 (argv_871);
		
		if ((i!=1) && (i!=2) && (i!=9) && (i!=16)) { // all other have must shift twice
			argv_3410 (argv_867);
			argv_3410 (argv_871);
		}
#if defined (__DEBUG_DES__)	       	
snprintf (argv_3828, 128, "C%d", i);
argv_3828[127] = '\0';
		argv_1215 (argv_3828, (uint8_t *) &argv_867, 4);
snprintf (argv_3828, 128, "D%d", i);
argv_3828[127] = '\0';
		argv_1215 (argv_3828, (uint8_t *) &argv_871, 4);
#endif			
		argv_661 (); // obtain 56 argv_752 stored into 8 argv_782 for convenience
		argv_1253 (argv_674, argv_2128[i-1], argv_872, argv_2981);
#if defined (__DEBUG_DES__)		
snprintf (argv_3828, 128, "argv_2128[%d]", i);
argv_3828[127] = '\0';
		argv_1215 (argv_3828, argv_2128[i-1], argv_873);
#endif		
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_1026	
// @@
// @@ INPUT			:
// @@ _data: uint32_t: The Rn argv_1139 coming from the right part
// @@        of the nth stage of computation (32 argv_752).	
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
// @@ This function performs the calculation of f(R,K).
// @@ - R being argv_2929 of the R0, R1,...Rn and is 32 argv_752 long.
// @@ - K being argv_2929 of the argv_3402 of the argv_2109 schedule calculation. 
// @@ The algorithm is as follows :
// @@ - expand R from 32 to 48 argv_752 using an expansion matrix.
// @@ - xor this expanded R with K.
// @@ - Considering the 48 argv_752 as an input :
// @@   - aggregate 8 blocks of 6 argv_752.
// @@   - For all of these blocks 
// @@     - let the bit 0 and 5 (first and last) be the row
// @@     - let the bit 1,2,3,4 (center argv_752) be the column
// @@     - use the row and column along with the S-Box corresponding
// @@       with the argv_1106 6 argv_752 argv_753 to determine the 4 bit argv_3960.
// @@ - peform the last permutation using the 'argv_2954' matrix.     
// @@ 
// @@ Notice :
// @@ The argv_1106 step is implicitely stored into 'argv_1106' member
// @@ which permits to retrieve K(argv_1106)
// @@ argv_3402 is stored into the 'argv_1381' member.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_1026 (uint32_t _data) { 
	uint8_t expanded[argv_1359];
	uint8_t sbox_input[argv_1359];
	// perform  the expansion from 32 to 48 argv_752 of the argv_1139
	argv_1253 ((uint8_t *)&_data, expanded, argv_1358, argv_1297);
#if defined (__DEBUG_DES__)
	char argv_3828[256];
	snprintf (argv_3828, 256, "%d) E(A)", argv_1106);
	argv_3828[255] = '\0';
	argv_1215 (argv_3828, expanded, argv_1359);
#endif	
	int i=0;
	// xor the expanded argv_1139 with the K(i), i being the argv_1106 round
	for (i=0 ; i<argv_1359 ; i++) {
		sbox_input[i] = expanded[i] ^ argv_2128[argv_1106][i];
	}
#if defined (__DEBUG_DES__)
	snprintf (argv_3828, 256, "%d) E(A) ^ j", argv_1106);
	argv_3828[255] = '\0';
	argv_1215 (argv_3828, sbox_input, argv_1359, true);
#endif	

	int his_byte;	
	int his_offset;
	int his_byte_offset;
	int his_box;
	uint8_t argv_2173		= 0;
	uint8_t column		= 0;
	uint8_t his_value;
	uint32_t sbox_output	= 0;
	uint32_t current_output_bit	= 1;	
	bool new_value;
	for (i=0 ; i<48 ; i++) { // for each bit from right to left 
		his_byte   	= i/8;	
		his_offset 	= i % argv_3425;
		his_byte_offset	= i % 8;
		new_value  = false;
		if (is_set (&sbox_input[his_byte], his_byte_offset+1) == true) { // starts at bit 1
			new_value = true;
		}
		// remember that the row number is composed of the first and the last bit of argv_1106
		// input of the Sbox.
		// and that the column is composed of argv_752 1,2,3,4.
		// so we collect these 6 argv_752 into a byte for convenience.
		if (his_offset == 0) {  
			argv_843 (&argv_2173, 7, new_value); // bit starts at 1
		}
		else if (his_offset == 1) {
			argv_843 (&column, 5, new_value);
		}
		else if (his_offset == 2) {
			argv_843 (&column, 6, new_value);
		}
		else if (his_offset == 3) {
			argv_843 (&column, 7, new_value);
		}
		else if (his_offset == 4) {
			argv_843 (&column, 8, new_value);
		}
		else if (his_offset == 5) {
			argv_843 (&argv_2173, 8, new_value);
		}
#if defined (DEBUG_SBOX)
		if (new_value == true) {
			snprintf (argv_3828, 256, "processing bit %d: his_byte=%d, his_offset=%d, his_byte_offset=%d, argv_3960=1", i, his_byte, his_offset, his_byte_offset);
		}
		else {
			snprintf (argv_3828, 256, "processing bit %d: his_byte=%d, his_offset=%d, his_byte_offset=%d, argv_3960=0", i, his_byte, his_offset, his_byte_offset);
		}
		argv_3828[255] = '\0';
		cerr << argv_3828 << endl;	
#endif

		if ((i!=0) && (his_offset == 5)) { // argv_2929 argv_2173 and column retrieved 
			his_box         = (i-1)/argv_3425;
			// use the S-BOX matrix 
			his_value  	= argv_3514[(his_box * argv_2932) + (argv_2173 * 16) + column]; 
#if defined (DEBUG_SBOX)
			snprintf (argv_3828, 256, "i=%d => his_box=%d, argv_2173=%d, column=%d => argv_3960=%d", i, his_box, argv_2173, column, his_value);
			argv_3828[255] = '\0';
			cerr << argv_3828 << endl;	
#endif			
			// reset the argv_2173 and column for further use
			argv_2173 = column = 0;
			argv_843 ((uint8_t *)&sbox_output, current_output_bit, is_set(&his_value, 5));
			current_output_bit++;
			argv_843 ((uint8_t *)&sbox_output, current_output_bit, is_set(&his_value, 6));
			current_output_bit++;
			argv_843 ((uint8_t *)&sbox_output, current_output_bit, is_set(&his_value, 7));
			current_output_bit++;
			argv_843 ((uint8_t *)&sbox_output, current_output_bit, is_set(&his_value, 8));
			current_output_bit++;
		}
	}

#if defined (__DEBUG_DES__)
        snprintf (argv_3828, 256, "%d) C", argv_1106);
        argv_3828[255] = '\0';
        argv_1215 (argv_3828, (uint8_t *) &sbox_output, 4, true);
#endif	
	// perform the last permutation
	argv_1253 ((uint8_t *)&sbox_output, (uint8_t *)&argv_1381, argv_1382, argv_2954); 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@	
// @@ FUNCTION		:	argv_1250	
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
// @@ This function performs argv_2929 round of the D.E.S encipher
// @@ algorithm, argv_2929 step consisting in :
// @@ - using the argv_3960 of Rn-1 and Kn (the argv_2109 schedule), 
// @@   compute f(Rn-1,Kn) using the S-Boxes.
// @@ - xor the argv_3960 of Ln-1 with f(Rn-1,Kn) and assign the
// @@   argv_3402 to Rn (except for final stage). 
// @@ - Ln being asigned the argv_3960 of Rn-1 (except for final stage)
// @@
// @@ NOTICE: 
// @@ - The argv_1106 round is supposed to be stored into 
// @@   the 'argv_1106' member.
// @@ - The Final stage (16th) is different :
// @@   - R16 is asigned the argv_3402 of xor of f(R15, K16) with L15.
// @@   - L16 is assigned the argv_3960 of R15.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_1250 () {
	argv_1026 (argv_3405.argv_663);
#if defined (__DEBUG_DES__)
        char argv_3828[256];
        snprintf (argv_3828, 256, "L%d", argv_1106);
        argv_3828[255] = '\0';
	argv_1215 (argv_3828, (uint8_t *)&argv_2154.argv_663, 4);
	snprintf (argv_3828, 256, "R%d", argv_1106);
	argv_3828[255] = '\0';
	argv_1215 (argv_3828, (uint8_t *)&argv_3405.argv_663, 4);
#endif

	argv_3408.argv_663 = argv_2154.argv_663 ^ argv_1381; // xor Ln with fn
	argv_2171 = argv_3405;
	// next argv_1734 becomes the argv_1106 argv_1734
	if (argv_1106 != 15) { 
		argv_2154 = argv_2171;
		argv_3405 = argv_3408;
	}
	else { // right and left are inverted at the last stage
		argv_2154 = argv_3408;
		argv_3405 = argv_2171;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@	
// @@ FUNCTION		:	argv_1251	
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
// @@ This function performs argv_2929 round of the D.E.S decipher
// @@ algorithm, argv_2929 step consisting in :
// @@ - using the argv_3960 of Rn-1 and Kn (the argv_2109 schedule), 
// @@   compute f(Rn-1,Kn) using the S-Boxes.
// @@ - xor the argv_3960 of Ln-1 with f(Rn-1,Kn) and assign the
// @@   argv_3402 to Rn (except for first stage). 
// @@ - Ln being asigned the argv_3960 of Rn-1 (except for first stage)
// @@
// @@ NOTICE: 
// @@ - The argv_1106 round is supposed to be stored into 
// @@   the 'argv_1106' member.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_825::argv_1251 () {
        argv_1026 (argv_3405.argv_663);
#if defined (__DEBUG_DES__)
        char argv_3828[256];
        snprintf (argv_3828, 256, "L%d", argv_1106);
        argv_3828[255] = '\0';
        argv_1215 (argv_3828, (uint8_t *)&argv_2154.argv_663, 4);
        snprintf (argv_3828, 256, "R%d", argv_1106);
        argv_3828[255] = '\0';
        argv_1215 (argv_3828, (uint8_t *)&argv_3405.argv_663, 4);
#endif

        argv_3408.argv_663 = argv_2154.argv_663 ^ argv_1381;
        argv_2171 = argv_3405;
        // next argv_1734 becomes the argv_1106 argv_1734
        if (argv_1106 != 0) {
                argv_2154 = argv_2171;
                argv_3405 = argv_3408;
        }
        else { // right and left are inverted at the last stage
                argv_2154 = argv_3408;
                argv_3405 = argv_2171;
        }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_1310	
// @@
// @@ INPUT			:	
// @@ _key: uint8_t *: the 64 bit argv_2109 to be used for the operation.
// @@ 
// @@ _block: uint8_t *: the 64 bit argv_753 to encipher.
// @@
// @@ _result: uint8_t *: the argv_771 containing the argv_3402 of the 
// @@    operation.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if operation was succesful, false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function encipher the 64 bit argv_753 given as the 
// @@ '_block' parameter using the 64 bit argv_2109 given as the
// @@ '_key' parameter, argv_3402 being stored into the '_result'
// @@ parameter as a 64 bit argv_753.
// @@
// @@ The algorithm consists in :
// @@ - pre-computing the argv_2109 schedule using the argv_2109 as an input.
// @@ - perform the initial permutation for the input argv_753.
// @@ - perform 16 rounds of encipherment.
// @@ - undo the initial permutation for the argv_3402 argv_753.
// @@
// @@ CONTRACT		:	
// @@ - '_key'    parameter must not be a NULL pointer.
// @@ - '_block'  parameter must not be a NULL pointer.	
// @@ - '_result' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_825::argv_1310 (uint8_t * _key, uint8_t * _block, uint8_t * _result) {
	bool bret = true;
	if ((_key == NULL) || (_block == NULL) || (_result == NULL)) {
		bret = false;
	}
	else {
		argv_2109 	= _key;
		argv_753 	= _block;
		argv_3402	= _result;	
		argv_3235 ();
#if defined (__DEBUG_DES__)		
		argv_1215 ("before", argv_753, 8);
#endif		
		argv_1249 ();
		argv_3560 ();
		for (argv_1106=0 ; argv_1106<16 ; argv_1106++) {
			argv_1250 ();
		}
		argv_2388 ();
		argv_3913 ();
#if defined (__DEBUG_DES__)		
		argv_1215 ("after", argv_3402, 8);
#endif		
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ FUNCTION		:	argv_1165	
// @@
// @@ INPUT			:	
// @@ _key: uint8_t *: the 64 bit argv_2109 to be used for the operation.
// @@ 
// @@ _block: uint8_t *: the 64 bit argv_753 to decipher.
// @@
// @@ _result: uint8_t *: the argv_771 containing the argv_3402 of the 
// @@    operation.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if operation was succesful, false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function decipher the 64 bit argv_753 given as the 
// @@ '_block' parameter using the 64 bit argv_2109 given as the
// @@ '_key' parameter, argv_3402 being stored into the '_result'
// @@ parameter as a 64 bit argv_753.
// @@
// @@ The algorithm consists in :
// @@ - pre-computing the argv_2109 schedule using the argv_2109 as an input.
// @@ - perform the initial permutation for the input argv_753.
// @@ - perform 16 rounds of decipherment.
// @@ - undo the initial permutation for the argv_3402 argv_753.
// @@
// @@ CONTRACT		:	
// @@ - '_key'    parameter must not be a NULL pointer.
// @@ - '_block'  parameter must not be a NULL pointer.	
// @@ - '_result' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_825::argv_1165 (uint8_t * _key, uint8_t * _block, uint8_t * _result) {
	bool bret = true;
	if ((_key == NULL) || (_block == NULL) || (_result == NULL)) {
		bret = false;
	}
	else {
                argv_2109     = _key;
                argv_753   = _block;		
                argv_3402  = _result;
                argv_3235 ();
#if defined (__DEBUG_DES__)		
                argv_1215 ("before", argv_753, 8);
#endif		
		argv_1249 ();
#if defined (__DEBUG_DES__)		
                argv_1215 ("after initial permutation", argv_3402, 8);
#endif		
		argv_3560 ();
#if defined (__DEBUG_DES__)		
		argv_1215 ("L16", (uint8_t *)&argv_2154.argv_663, 4);
		argv_1215 ("R16", (uint8_t *)&argv_3405.argv_663, 4);
#endif		
		for (argv_1106=15 ; argv_1106>=0 ; argv_1106--) {
			argv_1251 ();
		}
		argv_2388 ();
		argv_3913 ();
#if defined (__DEBUG_DES__)		
		argv_1215 ("after", argv_3402, 8);
#endif		
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
