// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_285.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the argv_1139 structures
// @@ and functions to argv_2198 or create a given
// @@ plugin. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_351.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1035
// @@
// @@ FUNCTION		:	argv_1035		
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
// @@ normal constructor of the 'argv_1035' argv_2908.
// @@ it prepares the 'argv_1035' argv_2908 for first use.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1035::argv_1035 () {
	// avoid having these fields deleted by the reset function
	argv_3894		= (argv_3864) argv_2889;
	argv_3895		= 0;
	argv_3731				= argv_2889;	
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1035
// @@
// @@ FUNCTION		:	argv_1035		
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
// @@ destructor of the 'argv_1035' argv_2908.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1035::~argv_1035 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1035
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
// @@ This function permits to bring the 'argv_1035'
// @@ argv_2908 to it's initial argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1035::reset () {
	init_done						= false;
	argv_1193				= false;
	argv_2269.clear ();
	argv_2271.clear ();
	argv_1021				= argv_2889;
	argv_1136					= argv_2889;
	argv_1788					= argv_2889;
	argv_4002				= argv_2889;
	argv_931.reset ();
	argv_3570					= 0;
	argv_1264					= 0;
	argv_3569					= argv_2889;

	if (argv_3731 != argv_2889) {
		argv_3731->argv_2843 ((argv_2263) argv_3894, argv_3895);
		argv_3894			= (argv_3864) argv_2889;
		argv_3895			= 0;
	}
	argv_3731						= argv_2889;

	argv_1169					= (argv_3864) argv_2889;
	argv_1318							= 0;
	argv_1326						= 0;
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_1034		
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
// @@ normal constructor of the 'argv_1034' argv_2908.
// @@ it prepares the 'argv_1034' argv_2908 for first use.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1034::argv_1034 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	~argv_1034		
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
// @@ destructor of the 'argv_1034' argv_2908.
// @@ it prepares the 'argv_1034' argv_2908 for first use.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1034::~argv_1034 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
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
// @@ This function permits to bring the 'argv_1034'
// @@ argv_2908 to it's initial argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1034::reset () {
	dset.reset ();
	argv_758						= argv_2889;
	argv_2864					= 0;
	argv_759						= 0;

	argv_2817							= "";
	argv_1735					= 0;
	argv_3972					= 0;
	argv_3973					= 0;
	argv_3842							= argv_3176;
	argv_3736						= 0;
	argv_2152		= 0;
	argv_1070			= "";
	argv_2151			= 0;
	argv_1069			= "";
	argv_2810.clear ();
	argv_2868				= 0;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_839 *: pointer on the argv_2908 containing
// @@     all the global argv_1139.
// @@
// @@ _systool_ptr: argv_3593 *: pointer on an argv_2908 that contains
// @@    all the system dependant routines.
// @@
// @@ _compress_tool_ptr: argv_814 *: pointer on an argv_2908 that
// @@    contains the routines that permit to argv_1016/argv_3891
// @@    a given argv_771.
// @@
// @@ _cypher_tool_ptr: argv_821 *: pointer on an argv_2908 that
// @@    contains the routines that permit to cipher/decipher
// @@    a given argv_771.
// @@
// @@ _xmem_manager_ptr: argv_1127 *: pointer on an argv_2908 that
// @@ contains the routines to obtain aligned blocks of virtual memory.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 the argv_1034
// @@ argv_2908 by giving it the argv_635 of all necessary
// @@ objects.
// @@ Notice that this function must be called only once
// @@ prior to first use.
// @@
// @@ CONTRACT 		: 
// @@ - '_systool_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_glob_data_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_compress_tool_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_cypher_tool_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_xmem_mgr_ptr' parameter must not be a argv_2889 pointer.
// @@ - init must not have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::init (argv_839 * _glob_data_ptr, argv_3593 * _systool_ptr, argv_814 * _compress_tool_ptr, argv_821 * _cypher_tool_ptr, argv_1127 * _xmem_manager_ptr) {
	argv_3517 argv_1993 = argv_3168;
	if ((_systool_ptr==argv_2889) || (_compress_tool_ptr==argv_2889) || (_cypher_tool_ptr==argv_2889) || (_glob_data_ptr == argv_2889) || (_xmem_manager_ptr==argv_2889)) {
		argv_1993 = argv_3148;
	}
	else if (dset.init_done == true) {
		argv_1993 = argv_3145;
	}
	else {
		dset.argv_1788			= _glob_data_ptr;
		dset.argv_3731			= _systool_ptr;
		dset.argv_1021		= _compress_tool_ptr;
		dset.argv_1136		= _cypher_tool_ptr;
		dset.argv_4002		= _xmem_manager_ptr;	
		dset.init_done				= true;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_3420		
// @@
// @@ INPUT			:
// @@ _value: argv_3864: the integer argv_3960 to save to plugin argv_1396.
// @@
// @@ _fp_dest: FILE *: argv_1396 pointer of the destination argv_1396
// @@   containing the generated plugin.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function save a given integer into the plugin
// @@ argv_1396 that was opened and accessible via the '_fp_dest'
// @@ parameter.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_3420 (argv_3864 _value, FILE * _fp_dest) {
	argv_3517 argv_1993 = argv_3168;
	argv_729 atyp;
	atyp.argv_732	= _value;
	argv_3864 argv_2865 = fwrite (&atyp.argv_726[0], 1, dset.argv_1788->int_size, _fp_dest);
	if (argv_2865 != dset.argv_1788->int_size) {
		argv_1993 = argv_3165;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_3421		
// @@
// @@ INPUT			:
// @@ _str: argv_820: the string to save to the plugin argv_1396.
// @@
// @@ _fp_dest: FILE *: argv_1396 pointer of the destination argv_1396
// @@   containing the generated plugin.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to save a given string to
// @@ the plugin argv_1396.
// @@ Notice that the string is saved along with it's size
// @@ for a fastest retrieval and also without the trailing '\0'
// @@ character. So the actual steps are :
// @@ - save the string's length
// @@ - save the string itself (without the \0)
// @@
// @@ CONTRACT 		:	
// @@ - '_str' parameter must not be an empty string.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_3421 (argv_820 _str, FILE * _fp_dest) {
	argv_3517 argv_1993 = argv_3168;
	argv_3864 his_size = strlen(_str);
	if (his_size == 0) {
		argv_1993 = argv_3167;
	}
	else {
		argv_1993 = argv_3420 (his_size, _fp_dest);
		if (argv_1993 == argv_3168) {
			argv_3864 argv_2865 = fwrite (&_str[0], 1, his_size, _fp_dest);
			if (argv_2865 != his_size) {
				argv_1993 = argv_3143;
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_1043		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_3864: 32 bit pointer on the mmaped argv_1396 where to
// @@   find argv_1139.
// @@
// @@ _file_size: argv_3864: size of the mmaped argv_1396 where to find argv_1139.
// @@
// @@ _msg: argv_820: argv_2389 that must be displayed to log argv_1396 in 
// @@   of error.
// @@
// @@ OUTPUT		:	
// @@ _extracted_value: argv_3864&: the integer argv_3960 extracted from
// @@   mmapped argv_1396 whose first byte is denoted by the '_file_ptr'
// @@   parameter.
// @@
// @@ IO			:	
// @@ _current_offset: argv_3864&: argv_3960/argv_3402 argument that permits to
// @@   use the argv_1106 offset of the argv_1396 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function just consumes 4 argv_782 from the mmaped argv_1396 
// @@ whose first byte is denoted by the parameter '_file_ptr'
// @@ and then maps these 4 argv_782 into an integer argv_3960 that
// @@ is returned to the caller via the '_extracted_value' 
// @@ parameter.
// @@
// @@ CONTRACT 		: 
// @@ - the sum of _current_offset + int size must not exceed
// @@   the limit of the mmapped argv_1396 '_file_size'.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_1043 (argv_3864 _file_ptr, argv_3864 _file_size, argv_3864& _current_offset, argv_820 _msg, argv_3864& _extracted_value) {
	argv_3517 argv_1993 = argv_3168;
	if ((_current_offset + dset.argv_1788->int_size) >= _file_size) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: overflow while parsing integer");
		argv_1993 = argv_3158;	
	}
	else {
		argv_729 atyp;
		argv_3862 * cptr = (argv_3862 *) _file_ptr;
		memcpy (&atyp.argv_726[0], (argv_3862 *) &cptr[_current_offset], dset.argv_1788->int_size);
		_current_offset += dset.argv_1788->int_size;
		_extracted_value = atyp.argv_732;
	}

	if (argv_1993 != argv_3168) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parse error while consuming '", _msg, "'");
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_1044		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_3864: 32 bit pointer on the mmaped argv_1396 where to
// @@   find argv_1139.
// @@
// @@ _file_size: argv_3864: size of the mmaped argv_1396 where to find argv_1139.
// @@
// @@ _msg: argv_820: argv_2389 that must be displayed to log argv_1396 in 
// @@   of error.
// @@
// @@ OUTPUT		:	
// @@ _extracted_str: string&: string extracted from the plugin argv_1396.	
// @@
// @@ IO			:
// @@ _current_offset: argv_3864&: argv_3960/argv_3402 argument that permits to
// @@   use the argv_1106 offset of the argv_1396 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 a string from the plugin
// @@ argv_1396, the argv_1106 offset in the plugin argv_1396 '_current_offset'
// @@ is used and then changed accordingly.
// @@ Notice that a string is not like a C string : it is 
// @@ composed of 2 fields :
// @@ - the string's length (4 argv_782, i.e an integer)
// @@ - the string itself, not terminated by '\0' character.
// @@ thus to argv_2198 a string, the steps are :
// @@ - argv_1042 an integer (the string's length)
// @@ - argv_1042 the string itself
// @@
// @@ CONTRACT 		: 
// @@ - the sum of _current_offset + int size + string size 
// @@   must not exceed the limit of the mmapped argv_1396 '_file_size'.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_1044  (argv_3864 _file_ptr, argv_3864 _file_size, argv_3864& _current_offset, argv_820 _msg, string& _extracted_str) {
	argv_3517 argv_1993 = argv_3168;
	// parse the string's length
	argv_3864 string_size;
	_extracted_str = "";
	argv_1993 = argv_1043 (_file_ptr, _file_size, _current_offset, "string's length field", string_size);
	if (argv_1993 != argv_3168) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parse error while consuming string's length");
	}
	else if (string_size >= argv_2331) { 
		argv_1993 = argv_3166;
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parse error : string length is too long : ", string_size);
	}
	else if (string_size == 0) {
		argv_1993 = argv_3167;
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parse error : string length is too short : ", string_size);
	}
	else if ((_current_offset + string_size) >= _file_size) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parsing string would overflow the argv_1396 !");
		argv_1993 = argv_3158;
	}
	else { // ok to argv_1042 the string
		char tabtmp[argv_2331 + 1];
		argv_3862 * cptr = (argv_3862 *) _file_ptr;
		memcpy (&tabtmp[0], &cptr[_current_offset], string_size);
		tabtmp[string_size] = '\0';
		_current_offset += string_size; 
		_extracted_str = tabtmp;
	}

	if (argv_1993 != argv_3168) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parse error while consuming '", _msg, "'");
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_2967		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_3864: 32 bit pointer on the mmaped argv_1396 where to
// @@   find argv_1139.
// @@
// @@ _file_size: argv_3864: size of the mmaped argv_1396 where to find argv_1139.
// @@
// @@ _filename: argv_820: argv_2817 of the plugin argv_1396 being parsed.
// @@
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ _current_offset: argv_3864&: argv_3960/argv_3402 argument that permits to
// @@   use the argv_1106 offset of the argv_1396 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse the argv_1907 of a given plugin
// @@ argv_1396. the argv_1907's fields are :
// @@ - the plugin argv_2817 (string)
// @@ - the argv_1734 date (argv_3864)
// @@ - the plugin major version (argv_3864)
// @@ - the plugin minor version (argv_3864)
// @@ - the plugin argv_3842 (argv_3864).
// @@ - the plugin target argv_3842 (argv_3864)
// @@ - the length before uncompressing the argv_757 (argv_3864)
// @@ - the crc of the argv_757 before argv_3891 (string)
// @@ - the length after argv_3891 the argv_757 (argv_3864)
// @@ - the crc of the argv_757 after argv_3891 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_2817 (a plugin argv_2817 as a string)
// @@ }
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_2967 (argv_3864 _file_ptr, argv_3864 _file_size, argv_820 _filename, argv_3864& _current_offset) {
	argv_3517 argv_1993 = argv_3168;
	// argv_2817
	argv_1993 = argv_1044 (_file_ptr, _file_size, _current_offset, "plugin argv_2817", argv_2817);
	if (argv_1993 == argv_3168) { // argv_1734 date
		argv_1993 = argv_1043 (_file_ptr, _file_size, _current_offset, "argv_1734 date", argv_1735);
	}
	if (argv_1993 == argv_3168) { // version Major
		argv_1993 = argv_1043 (_file_ptr, _file_size, _current_offset, "version Major", argv_3972);
	}
	if (argv_1993 == argv_3168) { // version Minor
		argv_1993 = argv_1043 (_file_ptr, _file_size, _current_offset, "version Minor", argv_3973);
	}
	if (argv_1993 == argv_3168) { // plugin argv_3842 
		argv_1993 = argv_1043 (_file_ptr, _file_size, _current_offset, "plugin argv_3842", argv_3842);
	}
	if (argv_1993 == argv_3168) { // plugin target argv_3842
		argv_1993 = argv_1043 (_file_ptr, _file_size, _current_offset, "plugin target argv_3842", argv_3736);
	}
	if (argv_1993 == argv_3168) { // length before argv_3891 
		argv_1993 = argv_1043 (_file_ptr, _file_size, _current_offset, "length before argv_3891", argv_2152);
	}
	if (argv_1993 == argv_3168) { // crc before argv_3891
		argv_1993 = argv_1044 (_file_ptr, _file_size, _current_offset, "CRC before argv_3891", argv_1070);
	}
	if (argv_1993 == argv_3168) { // length after argv_3891
		argv_1993 = argv_1043 (_file_ptr, _file_size, _current_offset, "length after argv_3891", argv_2151);
	}
	if (argv_1993 == argv_3168) { // crc after argv_3891
		argv_1993 = argv_1044 (_file_ptr, _file_size, _current_offset, "CRC after argv_3891", argv_1069);
	}
	if (argv_1993 == argv_3168) { // number of dependancy
		argv_1993 = argv_1043 (_file_ptr, _file_size, _current_offset, "number of dependancy", argv_2864);
	} 
	if (argv_1993 == argv_3168) {
		if (argv_2864 >= argv_2330) {
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: too many dependancies : ", argv_2864);
			argv_1993 = argv_3169;
		}
		else {
			// argv_2198 all dependancies
			string nametmp;
			for (argv_3864 i=0 ; i<argv_2864 ; i++) {
				argv_1993 = argv_1044 (_file_ptr, _file_size, _current_offset, "nth dependancy", nametmp);
				if (argv_1993 != argv_3168) {
					dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: failed to parse dependancy ", i);
					break;
				}
				else {
					dset.argv_2020 = dset.argv_2269.find (nametmp);
					if (dset.argv_2020 != dset.argv_2269.end()) {
						argv_1993 = argv_3137;
						dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: dependancy already defined : ", nametmp.c_str());
						break;
					}
					else { // ok to argv_616 this new dependancy
						dset.argv_2269[nametmp] = true;
					}
				}
			}
		}
	}

	if (argv_1993 == argv_3168) { /// argv_2198 the list of exported symbols
		// argv_1042 the list size (as a argv_3864)
		argv_1993 = argv_1043 (_file_ptr, _file_size, _current_offset, "number of exported symbol", argv_2868);
		if (argv_1993 == argv_3168) { // argv_1042 the list itself
			string exported_symbol_name;
			for (argv_3864 i=0 ; i<argv_2868 ; i++) {
				argv_1993 = argv_1044 (_file_ptr, _file_size, _current_offset, "exported symbol argv_2817", exported_symbol_name);
				if (argv_1993 != argv_3168) {
					break;
				}
				else { 
					dset.argv_2021 = dset.argv_2271.find (exported_symbol_name);
					if (dset.argv_2021 != dset.argv_2271.end()) {
						dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: exported symbol already defined : ", exported_symbol_name.c_str());
						argv_1993 = argv_3139;	
						break;
					}
					else {
						dset.argv_2271[exported_symbol_name] = true;
					}
				}
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_1214		
// @@
// @@ INPUT			:
// @@ _filename: argv_820: argv_2817 of the plugin argv_1396 whose argv_1907
// @@   is to be displayed.
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
// @@ This function permits to argv_1200 to log argv_1396
// @@ the informations contained in the argv_1907 of
// @@ the argv_2221 plugin.
// @@ This function is for debug purpose only.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1034::argv_1214 (argv_820 _filename) {
#if defined (DEBUG_PLUGIN_LOADER)
	string type_str;
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "===== plugin argv_1907 of argv_1396 : ", _filename, " ========");
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "argv_2817                       : ", argv_2817.c_str());
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "argv_1734 date            : ", argv_1735);
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "version Major              : ", argv_3972);
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "version Minor              : ", argv_3973);
	type_str = argv_3170 (argv_3842);
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "argv_3842                       : ", type_str.c_str());
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "target argv_3842                : ", argv_3736);
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "length before argv_3891   : ", argv_2152);
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "CRC before argv_3891      : ", argv_1070.c_str());
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "length after argv_3891    : ", argv_2151);
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "CRC after argv_3891       : ", argv_1069.c_str());
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "number of dependancies     : ", argv_2864);
	
	for (dset.argv_2020=dset.argv_2269.begin() ; dset.argv_2020 != dset.argv_2269.end() ; ++dset.argv_2020) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1152, "   - ", dset.argv_2020->first.c_str());
	}

	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "number of exported symbols : ", dset.argv_2271.size());
	for (dset.argv_2021 = dset.argv_2271.begin() ; dset.argv_2021 != dset.argv_2271.end() ; ++dset.argv_2021) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1152, "   - ", dset.argv_2021->first.c_str());
	}
#endif // #if defined (DEBUG_PLUGIN_LOADER)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_2964		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_3864: 32 bit pointer on the mmaped argv_1396 where to
// @@   find argv_1139.
// @@
// @@ _file_size: argv_3864: size of the mmaped argv_1396 where to find argv_1139.
// @@
// @@ _filename: argv_820: argv_2817 of the plugin argv_1396 being parsed.
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ _current_offset: argv_3864&: argv_3960/argv_3402 argument that permits to
// @@   use the argv_1106 offset of the argv_1396 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2198 a given COFF argv_1396 which can
// @@ be found right after the argv_1907 of the plugin.
// @@ The COFF argv_1396 itself is the argv_757 of the plugin.
// @@
// @@ CONTRACT 		: 
// @@ - '_current_offset' + argv_759 must be lower 
// @@   or equal to '_file_size'
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_2964 (argv_3864 _file_ptr, argv_3864 _file_size, argv_820 _filename, argv_3864& _current_offset) {
	argv_3517 argv_1993   = argv_3168;
	argv_758	= (argv_3862 *) _file_ptr;
	argv_759	= argv_2151;

	if ((_current_offset + argv_759) >= _file_size) {
		argv_1993 = argv_3158; 
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: overflow while parsing argv_757 of plugin : ", argv_2817.c_str());	
	}
	else {
		argv_3862 * true_file_ptr   = (argv_3862 *) _file_ptr;
		argv_3862 * body_start_addr = &true_file_ptr[_current_offset];
		argv_3862 * argv_1313     = &true_file_ptr[_file_size];	
		argv_3864   argv_759       = (argv_3864) argv_1313 - (argv_3864) body_start_addr; 

		argv_1993 = dset.argv_931.init (dset.argv_1788, dset.argv_3731, dset.argv_1021, dset.argv_1136, body_start_addr, argv_759, dset.argv_4002);
		if (argv_1993 != argv_947) {
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_2964 - argv_809::init failed ! - plugin was : ", argv_2817.c_str());
		}
		else {
			argv_1993 = dset.argv_931.argv_2198 ();
			if (argv_1993 == argv_947) {
				argv_1993 = argv_3168;
			}
			else {
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_2964 - failed to argv_2198 COFF argv_1396, plugin was : ", argv_2817.c_str());
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_2971		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_3864: 32 bit pointer on the mmaped argv_1396 where to
// @@   find argv_1139.
// @@
// @@ _file_size: argv_3864: size of the mmaped argv_1396 where to find argv_1139.
// @@
// @@ _filename: argv_820: argv_2817 of the plugin argv_1396 being parsed.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse a given plugin argv_1396.
// @@ a plugin argv_1396 is composed of two parts :
// @@ - a argv_1907
// @@ - a argv_757
// @@ The argv_1907 contains several fields :
// @@ - the plugin argv_2817 (string)
// @@ - the argv_1734 date (argv_3864)
// @@ - the plugin major version (argv_3864)
// @@ - the plugin minor version (argv_3864)
// @@ - the plugin argv_3842 (argv_3864).
// @@ - the length before uncompressing the argv_757 (argv_3864)
// @@ - the crc of the argv_757 before argv_3891 (string)
// @@ - the length after argv_3891 the argv_757 (argv_3864)
// @@ - the crc of the argv_757 after argv_3891 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_2817 (a plugin argv_2817 as a string)
// @@ }
// @@
// @@ The argv_757 can be found right after the argv_1907.
// @@ The argv_757 is actually a COFF argv_1396 appended to the argv_757.
// @@ (see www.microsoft.com/whdc/system/platform/firmware/PECOFF.mspx)
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_2971 (argv_3864 _file_ptr, argv_3864 _file_size, argv_820 _filename) {
	argv_3517 argv_1993 = argv_3168;

	argv_3864 body_offset = 0;
	argv_1993 = argv_2967 (_file_ptr, _file_size, _filename, body_offset);
	if (argv_1993 != argv_3168) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: failed to parse argv_1907 of plugin : ", _filename);
	}
	else {
#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1788->argv_2251.argv_2247 (argv_1152, "parsed argv_1907 succesfully");
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		argv_1214 (_filename);

#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1788->argv_2251.argv_2247 (argv_1152, "parsing COFF argv_757 of argv_1396 : ", _filename);
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		argv_1993 = argv_2964 (_file_ptr, _file_size, _filename, body_offset);
		if (argv_1993 != argv_3168) {
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: failed to parse argv_757 of plugin : ", _filename);
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_3084		
// @@
// @@ INPUT			:
// @@ _filename: argv_820: argv_2817 of the plugin argv_1396 to argv_2198.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2198 the plugin argv_1396 whose argv_2817
// @@ is stored into the parameter '_filename'.
// @@ Notice that as plugins are encrypted and compressed, the
// @@ following steps are performed :
// @@ - decipher the plugin argv_1396 into memory
// @@ - argv_3891 the deciphered argv_1396 into memory as well
// @@ - parse the plugin argv_1396 :
// @@   - argv_2198 the argv_1907
// @@   - argv_2198 and parse the argv_757
// @@
// @@ Notice that the argv_1396 to argv_2198 is supposed to have been
// @@ mapped into memory by another function prior to this call.
// @@
// @@ CONTRACT 		:	none 
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_3084 (argv_841 * _gmp_ptr, argv_1086& _public_key, argv_820 _filename) {
	argv_3517 argv_1993 = argv_3168;

	// 2. decypher the argv_1396 into virtual memory
	{ 
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "argv_3084: argv_3731=0x%X, argv_3569=0x%X, argv_3570=%u, argv_1169=0x%X, argv_1264=%u", (argv_3864)dset.argv_3731, (argv_3864)dset.argv_3569, dset.argv_3570, (argv_3864) dset.argv_1169, dset.argv_1264);
		argv_3828[MAX_PATH - 1] = '\0';
		dset.argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);	
	}

	argv_1993 = dset.argv_1136->argv_1168 (dset.argv_3731, _gmp_ptr, _public_key, (argv_3864) dset.argv_3569, dset.argv_3570, dset.argv_1169, dset.argv_1264);
	if (argv_1993 != argv_1134) {
		string serror = argv_1319 (argv_1993);
		argv_3548 (dset.argv_3828, MAX_PATH, "+++ ERROR: argv_1034::argv_3084: decypher_file failed for argv_1396 : %s (errno: %s)", _filename, serror.c_str());
		dset.argv_3828[MAX_PATH - 1] = '\0';
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, dset.argv_3828);
	}
	else {
#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1788->argv_2251.argv_2247 (argv_1152, "plugin deciphered succesfully");
#endif // #if defined (DEBUG_PLUGIN_LOADER)

		// 3. argv_3891 the argv_1396 into virtual memory
		argv_1993 = dset.argv_1021->argv_3893 (dset.argv_3731, (argv_3864) dset.argv_1169, dset.argv_3570, dset.argv_3894, dset.argv_3895);
		if (argv_1993 != argv_2131) {
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3084: uncompress_file failed for argv_1396 : ", _filename);	
		}
		else {
#if defined (DEBUG_PLUGIN_LOADER)
			dset.argv_1788->argv_2251.argv_2247 (argv_1152, "plugin uncompressed succesfully");
#endif // #if defined (DEBUG_PLUGIN_LOADER)
			// 4. parse and argv_2198 the argv_1139 into a container
			argv_1993 = argv_2971 (dset.argv_3894, dset.argv_3895, _filename);
			if (argv_1993 != argv_3168) {
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3084: argv_2971 failed for argv_1396 : ", _filename);
			}
			dset.argv_3731->argv_2839 ();
			//argv_758				= (argv_3862 *) dset.argv_1169;
			argv_2151 = dset.argv_3895;
			// dset.argv_3731->argv_2843 ((argv_2263) dset.argv_3894);
		}

#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1788->argv_2251.argv_2247 (argv_1152, "freeing the decyphered argv_1396 from virtual memory...");
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_3731->argv_2843 ((argv_2263) dset.argv_1169, dset.argv_1264);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_3085		
// @@
// @@ INPUT			:
// @@ _fp_dest: FILE *: descriptor on a argv_1396 opened
// @@   with write access to save the plugin.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a given plugin
// @@ using the argv_1139 contained in the argv_1034 itself.
// @@ a plugin argv_1396 is composed of two parts :
// @@ - a argv_1907
// @@ - a argv_757
// @@ The argv_1907 contains several fields :
// @@ - the plugin argv_2817 (string)
// @@ - the argv_1734 date (argv_3864)
// @@ - the plugin major version (argv_3864)
// @@ - the plugin minor version (argv_3864)
// @@ - the plugin argv_3842 (argv_3864).
// @@ - the plugin target argv_3842 (argv_3864) , i.e: PE, TXT, BIN
// @@ - the length before uncompressing the argv_757 (argv_3864)
// @@ - the crc of the argv_757 before argv_3891 (string)
// @@ - the length after argv_3891 the argv_757 (argv_3864)
// @@ - the crc of the argv_757 after argv_3891 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_2817 (a plugin argv_2817 as a string)
// @@ }
// @@ - the number of exported symbols (argv_3864)
// @@ {
// @@	- the exported symbol argv_2817 (as a string)
// @@ }
// @@
// @@ The argv_757 must be appended right after the argv_1907.
// @@ The argv_757 is actually a COFF argv_1396 appended to the argv_757.
// @@ (see www.microsoft.com/whdc/system/platform/firmware/PECOFF.mspx)
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_3085 (FILE * _fp_dest) {
	argv_3517 argv_1993 = argv_3168;

	// === save the argv_1907 =====
	// argv_2817 (string)
	argv_1993 = argv_3421 (argv_2817.c_str(), _fp_dest); 	
	if (argv_1993 == argv_3168) { // argv_1734 date (int)
		argv_1993 = argv_3420 (argv_1735, _fp_dest);
	}
	if (argv_1993 == argv_3168) { // version Major (int)
		argv_1993 = argv_3420 (argv_3972, _fp_dest);
	}
	if (argv_1993 == argv_3168) { // version Minor (int)
		argv_1993 = argv_3420 (argv_3973, _fp_dest);
	}
	if (argv_1993 == argv_3168) { // plugin argv_3842 (int)
		argv_1993 = argv_3420 (argv_3842, _fp_dest);
	}
	if (argv_1993 == argv_3168) { // plugin target argv_3842 (int)	 
		argv_1993 = argv_3420 (argv_3736, _fp_dest);
	}
	if (argv_1993 == argv_3168) { // argv_2152 (int)
		argv_1993 = argv_3420 (argv_2152, _fp_dest);
	}
	if (argv_1993 == argv_3168) { // argv_1070 (string)
		argv_1993 = argv_3421 (argv_1070.c_str(), _fp_dest);
	}
	if (argv_1993 == argv_3168) { // argv_2151 (int)
		argv_1993 = argv_3420 (argv_2151, _fp_dest);
	}
	if (argv_1993 == argv_3168) { // argv_1069 (string)
		argv_1993 = argv_3421 (argv_1069.c_str(), _fp_dest);
	}
	if (argv_1993 == argv_3168) { // number of dependancy (int)
		argv_1993 = argv_3420 (dset.argv_2269.size(), _fp_dest);
	}
	if (argv_1993 == argv_3168) { // all dependancies (string)
		map<string, bool>::iterator iter_local;
		for (iter_local=dset.argv_2269.begin() ; iter_local != dset.argv_2269.end() ; ++iter_local) {
			argv_1993 = argv_3421 (iter_local->first.c_str(), _fp_dest);
			if (argv_1993 != argv_3168) {
				break;	
			}
		}
	}

	if (argv_1993 == argv_3168) { // all exported symbols
		argv_3864 argv_2866 = dset.argv_2271.size ();
		argv_1993 = argv_3420 (argv_2866, _fp_dest);
		if (argv_1993 == argv_3168) {
			for (dset.argv_2021 = dset.argv_2271.begin() ; dset.argv_2021 != dset.argv_2271.end() ; ++dset.argv_2021) {
				argv_1993 = argv_3421 (dset.argv_2021->first.c_str(), _fp_dest);
				if (argv_1993 != argv_3168) {
					break;	
				}
			}
		}
	}

	// === save the argv_757 ===
	if (argv_1993 != argv_3168) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3085 - failed to save plugin argv_1907 !");
	}
	else {
		argv_3864 argv_2865 = fwrite (dset.argv_3569, 1, dset.argv_3570, _fp_dest);
		if (argv_2865 != dset.argv_3570) {
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3085 - failed to write argv_757 to argv_1396 !");
			argv_1993 = argv_3136;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_1721		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:
// @@ - map<string, argv_1034 *>&: _map_plugin_name: each plugin, with 
// @@   it's associated argv_2817
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a map that associates 
// @@ plugin names with their associated argv_809 using 
// @@ as an input a plugin dependancy list, that is stored
// @@ into a map.
// @@ The container that associates each plugin argv_2817 with
// @@ their coff loader is called the argv_2810 map.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_1721 (map<string, argv_1034 *>&	_map_plugin_name) {
	argv_3517 argv_1993 = argv_3168;
	map<string, bool>::iterator				iter_depend;
	map<string, argv_1034 *>::iterator	iter_name;

	argv_2810.clear ();
	// argv_2253 the argv_809 associated with each dependancy of the argv_1106 plugin and argv_616 them
	// into the argv_2810 map for symbol resolution.
	for (iter_depend=dset.argv_2269.begin() ; iter_depend != dset.argv_2269.end() ; ++iter_depend) {
		iter_name = _map_plugin_name.find (iter_depend->first);	
		if (iter_name == _map_plugin_name.end()) {
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_1721 -  plugin not found ! - argv_2817 was : ", iter_depend->first.c_str());
			argv_1993 = argv_3177;
			break;
		}
		else {
			// associate the plugin argv_2817 and it's argv_809
			argv_2810[iter_depend->first] = iter_name->second->argv_1737 ();
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_2202		
// @@
// @@ INPUT			:
// @@ _filename: argv_820: argv_2817 of the plugin argv_1396 to argv_2198.
// @@
// @@ _gmp_ptr: argv_841 * : pointer on an argv_2908 containing
// @@   all necessary functions to work with the GMP.
// @@ 
// @@ _public_key: argv_1086&: the public argv_2109 to use for
// @@   plugin decipher.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2198 a given plugin argv_1396.
// @@ This plugin argv_1396's argv_2817 is contained in the '_filename'
// @@ parameter.
// @@ Notice that as plugins are encrypted and compressed, the
// @@ to argv_2198 a plugin argv_1396, the following steps are argv_1261 :
// @@ - mmap the plugin argv_1396
// @@ - decipher the plugin argv_1396 into memory
// @@ - argv_3891 the deciphered argv_1396 into memory as well
// @@ - parse the plugin argv_1396 :
// @@   - argv_2198 the argv_1907
// @@   - argv_2198 and parse the argv_757
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a argv_2889 pointer
// @@ - '_filename' parameter must not be an empty string
// @@ - '_filename' parameter must contains the argv_2817 of an
// @@   existing and accessible argv_1396 (read access).
// @@ - the 'init' function must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_2202 (argv_841 * _gmp_ptr, argv_1086& _public_key, argv_820 _filename) {
	argv_3517 argv_1993 = argv_3168;
#if defined (DEBUG_PLUGIN_LOADER)
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "processing plugin : ", _filename);
#endif // #if defined (DEBUG_PLUGIN_LOADER)

	if (dset.init_done == false) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_2202 - illegal call before init !");
		argv_1993 = argv_3147;
	}
	else { // argv_3604 is OK for the operation
		if ((_filename == argv_2889) || (strlen(_filename)==0) || (_gmp_ptr==argv_2889)) {
			dset.argv_1788->argv_2251.argv_2247 (argv_1152, "argv_1034::argv_2202 - @4");
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_2202 - invalid parameter !");
			argv_1993 = argv_3148;		
		}
		else if (argv_1398 (dset.argv_1788, dset.argv_3731, _filename) == false) {
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_2202 - no such plugin : ", _filename);
			argv_1993 = argv_3157;
		}
		else { // parameters are ok, and the argv_1396 to argv_2198 exists
			argv_836	mmap_src;

			// 1. mmap the argv_1396 to argv_2198 to memory
			bool bret = mmap_src.argv_2464 (_filename, argv_2466, dset.argv_3569, dset.argv_3570);
			if (bret == false) {
				mmap_src.argv_1757 (dset.argv_1318, dset.argv_1326);
				argv_3548 (dset.argv_3828, MAX_PATH, "argv_1034::argv_2202(%s) failed ! - dset.argv_1326=%d, dset.argv_1318=%d", _filename, dset.argv_1326, dset.argv_1318);
				dset.argv_3828[MAX_PATH - 1] = '\0';
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, dset.argv_3828);
				argv_1993 = argv_3156;
			}
			else {
#if defined (DEBUG_PLUGIN_LOADER)
				argv_3548 (dset.argv_3828, MAX_PATH, "plugin mmapped succesfully @0x%X (argv_1396 size : %d)", dset.argv_3569, dset.argv_3570);
				dset.argv_1788->argv_2251.argv_2247 (argv_1152, dset.argv_3828);
#endif // #if defined (DEBUG_PLUGIN_LOADER)
				argv_1993 = argv_3084 (_gmp_ptr, _public_key, _filename);
				mmap_src.argv_925 ();
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_3422		
// @@
// @@ INPUT			:
// @@ _coff_filename: argv_820: argv_2817 of the COFF argv_1396 use
// @@   when generating the plugin.
// @@
// @@ _dst_filename: argv_820: argv_2817 of the destination argv_1396
// @@   where the generated plugin is to be saved.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a plugin argv_1396 
// @@ and save the argv_3402 into the argv_1396 whose argv_2817 is
// @@ into the '_dst_filename' parameter.
// @@ To generate a plugin, a plugin description argv_1396
// @@ must have been given and argv_2221 prior to this call. 
// @@
// @@ a plugin argv_1396 is composed of two parts :
// @@ - a argv_1907
// @@ - a argv_757
// @@ The argv_1907 contains several fields :
// @@ - the plugin argv_2817 (string)
// @@ - the argv_1734 date (argv_3864)
// @@ - the plugin major version (argv_3864)
// @@ - the plugin minor version (argv_3864)
// @@ - the plugin argv_3842 (argv_3864).
// @@ - the plugin target argv_3842 (argv_3864), i.e: PE, TXT,...
// @@ - the length before uncompressing the argv_757 (argv_3864)
// @@ - the crc of the argv_757 before argv_3891 (string)
// @@ - the length after argv_3891 the argv_757 (argv_3864)
// @@ - the crc of the argv_757 after argv_3891 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_2817 (a plugin argv_2817 as a string)
// @@ }
// @@ - the number of exported symbols (argv_3864)
// @@ {
// @@	- the exported symbol argv_2817 (as a string)
// @@ }
// @@
// @@ The argv_757 must be appended right after the argv_1907.
// @@ The argv_757 is actually a COFF argv_1396 appended to the argv_757.
// @@ (see www.microsoft.com/whdc/system/platform/firmware/PECOFF.mspx)
// @@
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - the plugin description argv_1396 must have been argv_2221 prior 
// @@   to this call.
// @@ - '_coff_filename' parameter must not be a argv_2889 pointer.
// @@ - '_coff_filename' parameter must not be an empty string.
// @@ - '_coff_filename' must be an existing and accessible
// @@   argv_1396 (read access).
// @@ - '_dst_filename' parameter must not be a argv_2889 pointer.
// @@ - '_dst_filename' parameter must not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_3422 (argv_820 _coff_filename, argv_820 _dst_filename) {
	argv_3517 argv_1993 = argv_3168;
	if (dset.init_done == false) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3422 - illegal call before init !");
		argv_1993 = argv_3147;
	}
	else if (dset.argv_1193 == false) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3422 - illegal call before loading description argv_1396 !");
		argv_1993 = argv_3146;
	}
	else if ((_coff_filename == argv_2889) || (strlen(_coff_filename)==0) || (_dst_filename==0) || (strlen(_dst_filename)==0)) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3422 - invalid parameter !");
		argv_1993 = argv_3148;		
	}
	else if (argv_1398 (dset.argv_1788, dset.argv_3731, _coff_filename) == false) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3422 - no such argv_1396 : ", _coff_filename);
		argv_1993 = argv_3157;
	}
	else {
#if defined (DEBUG_PLUGIN_LOADER)
		{
			argv_3548 (dset.argv_3828, MAX_PATH, "argv_1034::argv_3422 - coff argv_1396 : %s, destination argv_1396 : %s", _coff_filename, _dst_filename);
			dset.argv_3828[MAX_PATH - 1] = '\0';
			dset.argv_1788->argv_2251.argv_2247 (argv_1152, dset.argv_3828);
		}
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		FILE * argv_1497 = fopen (_dst_filename, "wb");
		if (! argv_1497) {
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3422 - fopen failed for destination argv_1396 : ", _dst_filename);
			argv_1993 = argv_3142;
		}
		else {
			argv_836	mmap_src;

			// 1. mmap the coff argv_1396 (the argv_757 actually)
			bool bret = mmap_src.argv_2464 (_coff_filename, argv_2466, dset.argv_3569, dset.argv_3570);
			if (bret == false) {
				mmap_src.argv_1757 (dset.argv_1318, dset.argv_1326);
				argv_3548 (dset.argv_3828, MAX_PATH, "argv_1034::argv_2202(%s) failed ! - dset.argv_1326=%d, dset.argv_1318=%d", _coff_filename, dset.argv_1326, dset.argv_1318);
				dset.argv_3828[MAX_PATH - 1] = '\0';
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, dset.argv_3828);
				argv_1993 = argv_3156;
			}
			else {
#if defined (DEBUG_PLUGIN_LOADER)
				argv_3548 (dset.argv_3828, MAX_PATH, "plugin mmapped succesfully @0x%X (argv_1396 size : %d)", dset.argv_3569, dset.argv_3570);
				dset.argv_1788->argv_2251.argv_2247 (argv_1152, dset.argv_3828);
#endif // #if defined (DEBUG_PLUGIN_LOADER)
				argv_1993 = argv_3085 (argv_1497);
				mmap_src.argv_925 ();
			}

			if (fclose (argv_1497) != 0) {
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: fclose failed ! - argv_1396 was : ", _dst_filename);
				argv_1993 = argv_3140;
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@	
// @@ FUNCTION		:	argv_623		
// @@
// @@ INPUT			:
// @@ _dep_name: argv_820: argv_2817 of the plugin to be added as a 
// @@   dependancy of the argv_1106 plugin.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Each plugin may depend on zero or more other plugins
// @@ where necessary symbols are defined.
// @@ This function permits to argv_616 the argv_2817 of another plugin
// @@ into a container to create a list of dependancies.
// @@ The list of dependancies is very important when
// @@ performing the symbol resolution step.
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - '_dep_name' parameter must not be a argv_2889 pointer.
// @@ - '_dep_name' parameter must not be an empty string.
// @@ - '_dep_name' must not be the argv_2817 of a dependancy already added
// @@   to the argv_1106 plugin.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_623 (argv_820 _dep_name) {
	argv_3517 argv_1993 = argv_3168;
	if (dset.init_done == false) {
		argv_1993 = argv_3147;
	}
	else if (_dep_name == argv_2889) {
		argv_1993 = argv_3148;
	}
	else if (strlen(_dep_name) == 0) {
		argv_1993 = argv_3148;
	}
	else {
		dset.argv_2020 = dset.argv_2269.find (_dep_name);
		if (dset.argv_2020 != dset.argv_2269.end()) {
			argv_1993 = argv_3137;
		}
		else { // dependancy not already defined => ok to argv_616 it
			dset.argv_2269[_dep_name] = true;	
		}
	}
	return (argv_1993);
}


argv_3517 argv_1034::argv_624 (argv_820 _symbol_name) {
	argv_3517 argv_1993 = argv_3168;
	if (dset.init_done == false) {
		argv_1993 = argv_3147;
	}
	else if (_symbol_name == argv_2889) {
		argv_1993 = argv_3148;
	}
	else if (strlen(_symbol_name) == 0) {
		argv_1993 = argv_3148;
	}
	else {
		dset.argv_2021 = dset.argv_2271.find (_symbol_name);
		if (dset.argv_2021 != dset.argv_2271.end()) {
			argv_1993 = argv_3139;
		}
		else { // exported symbol not added yet => ok to argv_616 it
			dset.argv_2271[_symbol_name] = true;
		}
	}
	return (argv_1993);
}

bool argv_1034::argv_1749 (string& _exported_symbol) {
	bool bret = true;
	dset.argv_2022 = dset.argv_2271.begin ();
	if (dset.argv_2022 == dset.argv_2271.end()) {
		bret = false;
	}
	else {
		_exported_symbol = dset.argv_2022->first;	
	}
	return (bret);
}

bool argv_1034::argv_1768 (string& _exported_symbol) {
	bool bret = true;
	++dset.argv_2022;
	if (dset.argv_2022 == dset.argv_2271.end()) {
		bret = false;
	}
	else {
		_exported_symbol = dset.argv_2022->first;	
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_2969		
// @@
// @@ INPUT			:
// @@ _buf: char *: argv_771 containing the argv_2173 to parse.
// @@
// @@ OUTPUT		:
// @@ _var: string&: argv_2817 of the variable returned to the caller.
// @@
// @@ _val: string&: argv_3960 of the variable returned to the caller.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse argv_2929 argv_2173 of the plugin 
// @@ description argv_1396 that is used when generating a new plugin.
// @@ The plugin description argv_1396 is a serie of lines.
// @@ Each argv_2173 as a <variable> = <argv_3960> scheme.
// @@ The fields to be present are :
// @@ argv_3842			= <integer>
// @@ argv_3736	= <integer> , i.e: PE, TXT, BIN...
// @@ argv_2817			= <plugin argv_2817>
// @@ argv_3972 = <integer>
// @@ argv_3973 = <integer>
// @@ dependancy	= <first plugin argv_2817>
// @@ dependancy	= <second plugin argv_2817>
// @@ 
// @@ Notice that the 'dependancy' field is optional and can
// @@ be absent if the plugin is fully cohesive.
// @@
// @@ NOTICE that argv_2929 or more argv_2173 may be commented using 
// @@ the C++ syntax (double slash).
// @@ Also notice that the lines are free form, which means that
// @@ you can argv_616 spaces and tabs as necessary.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_2969 (char * _buf, string& _var, string& _val) {
	argv_3517 argv_1993 = argv_3168;

	_var = "";
	_val = "";
	argv_3864 size = strlen (_buf);
	argv_3864 i=0;

	// eat first white spaces
	while ((i < size) && ((_buf[i]==' ') || (_buf[i]=='\t') || (_buf[i]=='\r') || (_buf[i]=='\n'))) {
		i++;
	}

	if (i < size) {
		if ((_buf[i]=='/') && ((i+1) < size) && (_buf[i+1]=='/')) {
			;
		}
		else { // argv_1042 variable
			while ((i < size) && (_buf[i]!=' ') && (_buf[i]!='\t') && (_buf[i]!='\r') && (_buf[i]!='\n') && (_buf[i]!='=')) {
				_var += _buf[i];
				i++;
			}

			if (i >= size) {
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parse error while consuming variable's argv_2817");
				argv_1993 = argv_3162;
			}
			else {
				// argv_1042 the space before the '='
				while ((i < size) && ((_buf[i]==' ') || (_buf[i]=='\t') || (_buf[i]=='\r') || (_buf[i]=='\n'))) {
					i++;
				}

				if (i >= size) { 
					dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parse error while consuming spaces before '='"); 
					argv_1993 = argv_3162;
				}
				else { // comsume the '='
					if (_buf[i] != '=') {
						dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parse error: '=' expected");
						argv_1993 = argv_3161;
					}
					else { // argv_1042 the spaces after the '='
						i++;
						
						while ((i < size) && ((_buf[i]==' ') || (_buf[i]=='\t') || (_buf[i]=='\r') || (_buf[i]=='\n'))) {
							i++;
						}

						if (i >= size) { 
							dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parse error: unexpected end of argv_2173 while parsing spaces before variable's argv_3960");
							argv_1993 = argv_3162;
						}
						else { // argv_1042 the argv_3960
							while ((i < size) && (_buf[i]!=' ') && (_buf[i]!='\t') && (_buf[i]!='\r') && (_buf[i]!='\n')) {
								_val += _buf[i];
								i++;
							}

							if (_val == "") {
								argv_1993 = argv_3162;
								dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: parse error: empty argv_3960 !");
							}
						}
					}
				}
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_3230		
// @@
// @@ INPUT			:
// @@ _desc_filename: argv_820: argv_2817 of the plugin description argv_1396.
// @@
// @@ _v_couple: vector<argv_827>&: a vector containing
// @@   all the <variable,argv_3960> couples resulting from the parsing
// @@   of the plugin description argv_1396.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform a deep checking of the
// @@ semantic of the plugin description argv_1396 after this argv_1396
// @@ was parsed succesfully :
// @@ - ensure that no variable are missing.
// @@ - ensure that variables have coherent values.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_3230 (argv_820 _desc_filename, vector<argv_827>& _v_couple) {
	argv_3517 argv_1993   = argv_3168;
	argv_3864 nb_var = _v_couple.size ();
	dset.argv_2269.clear ();
	bool name_defined			= false;
	bool type_defined			= false;
	bool target_type_defined	= false;
	bool version_minor_defined	= false;	
	bool version_major_defined	= false;
	argv_3864 argv_2864 = 0;
	argv_3864 nb_exported   = 0;

	for (argv_3864 i=0 ; i<nb_var ; i++) {
		if (_v_couple[i].argv_3965 == "argv_3972") {
			if (version_major_defined == true) {
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - multiple definition of variable : ", _v_couple[i].argv_3965.c_str());
				argv_1993 = argv_3164;
				break;
			}
			else {
				argv_3972			= atoi (_v_couple[i].argv_3959.c_str());
				version_major_defined	= true;
			}
		}
		else if (_v_couple[i].argv_3965 == "argv_3973") {
			if (version_minor_defined == true) {
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - multiple definition of variable : ", _v_couple[i].argv_3965.c_str());
				argv_1993 = argv_3164;
				break;
			}
			else {
				argv_3973			= atoi (_v_couple[i].argv_3959.c_str());
				version_minor_defined	= true;
			}
		}
		else if (_v_couple[i].argv_3965 == "argv_3842") {
			if (type_defined == true) {
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - multiple definition of variable : ", _v_couple[i].argv_3965.c_str());
				argv_1993 = argv_3164;
				break;
			}
			else { // no coherency check for this field (avoid dependancy of kernel to changes)
				argv_3842 = atoi (_v_couple[i].argv_3959.c_str());
				type_defined = true;
			}
		}
		else if (_v_couple[i].argv_3965 == "argv_3736") {
			if (target_type_defined == true) {
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - multiple definition of variable : ", _v_couple[i].argv_3965.c_str());
				argv_1993 = argv_3164;
				break;
			}
			else { // no coherency check for this field (avoid dependancy of kernel to changes)
				argv_3736 = atoi (_v_couple[i].argv_3959.c_str());
				target_type_defined = true;
			}
		}
		else if (_v_couple[i].argv_3965 == "argv_2817") {
			if (name_defined == true) {
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - multiple definition of variable : ", _v_couple[i].argv_3965.c_str());
				argv_1993 = argv_3164;
				break;
			}
			else {
				argv_2817			= _v_couple[i].argv_3959;
				name_defined	= true;
			}
		} 
		else if (_v_couple[i].argv_3965 == "dependancy") {
			argv_1993 = argv_623 (_v_couple[i].argv_3959.c_str());
			if (argv_1993 != argv_3168) {
				string serror = argv_1319 (argv_1993);
				argv_3548 (dset.argv_3828, MAX_PATH, "+++ ERROR: argv_1034::argv_3230 - failed to argv_616 dependancy : '%s' (errno=%s)", _v_couple[i].argv_3959.c_str(), serror.c_str());
				dset.argv_3828[MAX_PATH - 1] = '\0';
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, dset.argv_3828);
				break;
			}
			else {
				argv_2864++;
			}
		} 
		else if (_v_couple[i].argv_3965 == "exported") {
			argv_1993 = argv_624 (_v_couple[i].argv_3959.c_str());
			if (argv_1993 != argv_3168) {
				string serror = argv_1319 (argv_1993);
				argv_3548 (dset.argv_3828, MAX_PATH, "+++ ERROR: argv_1034::argv_3230 - failed to argv_616 exported symbol : '%s' (errno=%s)", _v_couple[i].argv_3959.c_str(), serror.c_str());
				dset.argv_3828[MAX_PATH - 1] = '\0';
				dset.argv_1788->argv_2251.argv_2247 (argv_1321, dset.argv_3828);
				break;
			}
			else {
				nb_exported++;
			}
		}
	}

	// now ensure that all necessary variables have been argv_2221
	if (argv_1993 == argv_3168) {
		if (name_defined == false) {
			argv_1993 = argv_3163;
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - missing variable 'argv_2817'");
		}
		if (type_defined == false) {
			argv_1993 = argv_3163;
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - missing variable 'argv_3842'");
		}
		if (target_type_defined == false) {
			argv_1993 = argv_3163;
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - missing variable 'argv_3736'");
		}
		if (version_minor_defined == false) {
			argv_1993 = argv_3163;
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - missing variable 'version_minor_defined'");
		}
		if (version_major_defined == false) {
			argv_1993 = argv_3163;
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - missing variable 'version_major_defined'");
		}
		if (nb_exported == 0) {
			argv_1993 = argv_3163;
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3230 - missing variable 'exported'");
		}
		if (argv_2864 == 0) {
			dset.argv_1788->argv_2251.argv_2247 (argv_3989, "*** WARNING: the plugin have no dependancy defined !");
		}
	}

	// set default values for unused sizes and CRCs
	argv_2152 = 0;
	argv_1070    = "no_crc";
	argv_2151  = 0;
	argv_1069     = "no_crc";
	argv_1735			 = 0;
	argv_2864			 = dset.argv_2269.size ();
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_1209		
// @@
// @@ INPUT			:
// @@ _v_couple: vector<argv_827>&: a vector containing
// @@   all the <variable,argv_3960> couples resulting from the parsing
// @@   of the plugin description argv_1396.
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
// @@ This function permits to argv_1200 to log argv_1396
// @@ the argv_3402 of the parsing of the plugin
// @@ description argv_1396.
// @@ 
// @@ This function is here for debug purpose only.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1034::argv_1209 (vector<argv_827>& _v_couple) {
#if defined (DEBUG_PLUGIN_LOADER)
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "=========== parse argv_3402 ================");
	argv_3864 argv_2866 = _v_couple.size ();
	for (argv_3864 i=0 ; i<argv_2866 ; i++) {
		argv_3548 (dset.argv_3828, MAX_PATH, "%s = %s", _v_couple[i].argv_3965.c_str(), _v_couple[i].argv_3959.c_str());
		dset.argv_3828[MAX_PATH - 1] = '\0';
		dset.argv_1788->argv_2251.argv_2247 (argv_1152, dset.argv_3828);
	}
#endif // #if defined (DEBUG_PLUGIN_LOADER)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_3331		
// @@
// @@ INPUT			:
// @@ _desc_filename: argv_820: argv_2817 of the plugin description argv_1396
// @@   to be parsed.
// @@
// @@ _fp_desc: FILE *: descriptor on the plugin description argv_1396
// @@   to be parsed, notice that it must have been opened with
// @@   read access by another function prior to this call. 
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function uses the opened FILE pointer given as the
// @@ '_fp_desc' parameter to argv_2198 and parse each argv_2173 of the
// @@ plugin description argv_1396 whose argv_2817 is contained into the
// @@ '_desc_filename' parameter.
// @@
// @@ The plugin description argv_1396 is a serie of lines.
// @@ Each argv_2173 as a <variable> = <argv_3960> scheme.
// @@ The fields to be present are :
// @@ argv_3842				= <integer>
// @@ argv_3736		= <integer>
// @@ argv_2817				= <plugin argv_2817>
// @@ argv_3972		= <integer>
// @@ argv_3973		= <integer>
// @@ dependancy		= <first plugin argv_2817>
// @@ dependancy		= <second plugin argv_2817>
// @@ exported			= <first exported symbol>
// @@ exported			= <second exported symbol>
// @@ 
// @@ Notice that the 'dependancy' field is optional and can
// @@ be absent if the plugin is fully cohesive.
// @@
// @@ NOTICE that argv_2929 or more argv_2173 may be commented using 
// @@ the C++ syntax (double slash).
// @@ Also notice that the lines are free form, which means that
// @@ you can argv_616 spaces and tabs as necessary.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_3331 (argv_820 _desc_filename, FILE * _fp_desc) {
	argv_3517 argv_1993 = argv_3168;
	char argv_771[MAX_PATH];
	argv_827 couple;
	vector<argv_827> v_couple;
	argv_3864 argv_1117 = 1;
	dset.argv_1788->argv_2251.argv_2247 (argv_1152, "parsing plugin description argv_1396 : ", _desc_filename);

	char * cptr = fgets (argv_771, MAX_PATH, _fp_desc);

	while (cptr != argv_2889) {
		argv_1993 = argv_2969 (argv_771, couple.argv_3965, couple.argv_3959);
#if defined (DEBUG_PLUGIN_LOADER)
		{
			argv_3548 (dset.argv_3828, MAX_PATH, "argv_2969 => argv_3965='%s', argv_3959='%s'", couple.argv_3965.c_str(), couple.argv_3959.c_str());
			dset.argv_3828[MAX_PATH - 1] = '\0';
			dset.argv_1788->argv_2251.argv_2247 (argv_1152, dset.argv_3828);
		}
#endif

		if (argv_1993 != argv_3168) {
			string serror = argv_1319 (argv_1993);
			argv_3548 (dset.argv_3828, MAX_PATH, "+++ ERROR: parse error at argv_2173 %d : %s", argv_1117, serror.c_str());
			dset.argv_3828[MAX_PATH - 1] = '\0';
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, dset.argv_3828);
			argv_1993 = argv_3160;
			break;
		}
		else if ((couple.argv_3959 != "") && (couple.argv_3965 == "")) {
			argv_3548 (dset.argv_3828, MAX_PATH, "+++ ERROR: parse error at argv_2173 %d : empty variable !", argv_1117);
			dset.argv_3828[MAX_PATH - 1] = '\0';
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, dset.argv_3828);
			argv_1993 = argv_3160;
			break;
		}
		else if ((couple.argv_3965 != "") && (couple.argv_3959 == "")) {
			argv_3548 (dset.argv_3828, MAX_PATH, "+++ ERROR: parse error at argv_2173 %d : empty argv_3960 !", argv_1117);
			dset.argv_3828[MAX_PATH - 1] = '\0';
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, dset.argv_3828);
			argv_1993 = argv_3160;
			break;
		}
		else if ((couple.argv_3965 != "") && (couple.argv_3959 != "")) {
			v_couple.push_back (couple);
		}
		cptr = fgets (argv_771, MAX_PATH, _fp_desc);
		argv_1117++;
	}

	argv_1209 (v_couple);

	if (argv_1993 == argv_3168) {
		argv_1993 = argv_3230 (_desc_filename, v_couple);
		if (argv_1993 != argv_3168) {
			dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: plugin description argv_1396 post process failed ! - argv_1396 was : ", _desc_filename);
		}
	}
	else {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_3331 - parse failed !");
	}
	return (argv_1993);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_2966		
// @@
// @@ INPUT			:
// @@ _desc_filename: argv_820: argv_2817 of the plugin description argv_1396
// @@   to be argv_2221 and parsed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_3168 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - no plugin description argv_1396 must have been argv_2221 yet.
// @@ - '_desc_filename' parameter must not be a argv_2889 pointer.
// @@ - '_desc_filename' parameter must not be an empty string.
// @@ - '_desc_filename' parameter must be the argv_2817 of an existing
// @@   and accessible argv_1396 (read access).
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1034::argv_2966 (argv_820 _desc_filename) {
	argv_3517 argv_1993 = argv_3168;

	if (dset.init_done == false) {
		argv_1993 = argv_3147;
	}
	else if (dset.argv_1193 == true) {
		argv_1993 = argv_3144;
	}
	else if ((_desc_filename == argv_2889) || (strlen(_desc_filename)==0)) {
		argv_1993 = argv_3148;
	}
	else if (argv_1398 (dset.argv_1788, dset.argv_3731, _desc_filename) == false) {
		dset.argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1034::argv_2966 - argv_1396 not found ! - argv_1396:", _desc_filename);
		argv_1993 = argv_3157;
	}
	else { // now try and open the argv_1396
#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1788->argv_2251.argv_2247 (argv_1152, "about to parse plugin description argv_1396 : ", _desc_filename);
#endif // #if defined (DEBUG_PLUGIN_LOADER)

		FILE * fp_desc = fopen (_desc_filename, "rb");
		if (! fp_desc) {
			argv_1993 = argv_3142;
		}
		else {
			argv_1993 = argv_3331 (_desc_filename, fp_desc);
			fclose (fp_desc);

			if (argv_1993 == argv_3168) {
				dset.argv_1193 = true;
			}
		}
	}

	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1034
// @@
// @@ FUNCTION		:	argv_1737		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_809 *: the argv_635 of the argv_809
// @@ argv_2908 associated with the argv_1106 argv_1034 argv_2908.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ A plugin is composed of a argv_1907 and a argv_757.
// @@ the argv_757 is a COFF argv_1396 that is argv_2221 and parsed
// @@ by a argv_809 that is embedded into the argv_1034
// @@ argv_2908.	
// @@	
// @@ This function permits to retrieve the argv_635 of the 
// @@ argv_809 argv_2908 associated with the argv_1106 argv_1034
// @@ argv_2908.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_809 * argv_1034::argv_1737 () {
	return (&dset.argv_931);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
