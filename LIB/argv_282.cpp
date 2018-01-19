// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_282.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all argv_1139 structure and
// @@ functions necessary for the coff loader
// @@ argv_2908 to work properly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/obj_loader_OLD.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_824
// @@
// @@ FUNCTION		:	argv_824		
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
// @@ Normal constructor of the 'argv_824' argv_2908.
// @@ It resets the argv_824 argv_2908 to it's original argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_824::argv_824 () {
	reset ();
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_824
// @@
// @@ FUNCTION		:	~argv_824		
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
// @@ destructor of the 'argv_824' argv_2908.
// @@ It resets the argv_824 argv_2908 to it's original argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_824::~argv_824 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_824
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
// @@ This function permits to bring the argv_824
// @@ argv_2908 back to it's original argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_824::reset () {
	section_index			= 0;
	argv_3538			= 0;
	argv_3218		= 0;
	argv_3219	= 0;
	argv_2898		= 0;
	real_start_addr			= 0;
	argv_3842					= 0;
	argv_3960					= 0;
	storage_class			= 0;

	v_relocation.clear ();
	// force the vector to free it's memory
	vector<Crich_reloc_unit>().swap (v_relocation);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_810		
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
// @@ Normal constructor of the 'argv_810' argv_2908.
// @@ It resets the argv_810 argv_2908 to it's original argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_810::argv_810 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	~argv_810		
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
// @@ destructor of the 'argv_810' argv_2908.
// @@ It resets the argv_810 argv_2908 to it's original argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_810::~argv_810 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
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
// @@ This function permits to bring the argv_810
// @@ argv_2908 back to it's original argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_810::reset () {
	init_done				= false;
	argv_2221					= false;
	argv_3731				= argv_2889;
	argv_1021		= argv_2889;
	argv_1136			= argv_2889;
	argv_1788			= argv_2889;
	argv_1417			= argv_2889;
	argv_3462	= argv_2889;
	argv_3464		= argv_2889;
	argv_3616		= argv_2889;
	argv_3633		= argv_2889;
	argv_1416				= 0;
	argv_1313				= argv_2889;
	argv_4003			= argv_2889;

	map<string, argv_824>::iterator iter_local;
	for (iter_local=m_name_data.begin() ; iter_local != m_name_data.end() ; ++iter_local) {
		iter_local->second.reset ();	
	}
	m_name_data.clear ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_1217		
// @@
// @@ INPUT			:	none
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
// @@ This function permits to argv_1200 to log argv_1396 all the 
// @@ important argv_1139 contained into the argv_810 argv_2908.
// @@ It is useful for debug purpose only.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_810::argv_1217 () {
#if defined (DEBUG_COFF_LOADER)
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "argv_1417 = %X", argv_1417);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);

	argv_3548 (argv_3828, MAX_PATH, "argv_3462 = %X (%X)", argv_3462, argv_3462 - argv_1417);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);

	argv_3548 (argv_3828, MAX_PATH, "argv_3464 = %X (%X)", argv_3464, argv_3464 - argv_1417);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);

	argv_3548 (argv_3828, MAX_PATH, "argv_3616 = %X (%X)", argv_3616, argv_3616 - argv_1417);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);

	argv_3548 (argv_3828, MAX_PATH, "argv_3633 = %X (%X)", argv_3633, argv_3633 - argv_1417);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
	
	argv_3548 (argv_3828, MAX_PATH, "argv_1313 = %X (%X)", argv_1313, argv_1313 - argv_1417);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_1221		
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
// @@ This function permits to argv_1200 to log argv_1396 all
// @@ the symbols that are defined into the argv_1106 module. 
// @@ It is useful for debug purpose only.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_810::argv_1221 () {
	map<string, argv_824>::iterator iter_local;	
	argv_1788->argv_2251.argv_2247 (argv_1152, "=== symbols defined in this argv_2810 module ===");
	for (iter_local=m_name_data.begin() ; iter_local != m_name_data.end() ; ++iter_local) {
		argv_1788->argv_2251.argv_2247 (argv_1152, "=> ", iter_local->first.c_str());
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
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
// @@ _file_start_addr: argv_3862 *: argv_635 of the first byte in 
// @@    virtual memory of the COFF argv_1396 that was mmapped for loading.
// @@
// @@ _file_size: argv_3864: size of the mmapped COFF argv_1396 in virtual memory.
// @@
// @@ _xmem_mgr_ptr: argv_1127 *:  pointer on an argv_2908 that permits
// @@ to obtain an aligned argv_753 of virtual memory and release it.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_947 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 the argv_810
// @@ argv_2908 by giving it the argv_635 of all necessary
// @@ objects.
// @@
// @@ CONTRACT 		: 
// @@ - '_systool_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_glob_data_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_compress_tool_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_cypher_tool_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_file_start_addr' parameter must not be a argv_2889 pointer.
// @@ - '_xmem_mgr_ptr' parameter must not be a argv_2889 pointer.
// @@ - init must not have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::init (argv_839 * _glob_data_ptr, argv_3593 * _systool_ptr, argv_814 * _compress_tool_ptr, argv_821 * _cypher_tool_ptr, argv_3862 * _file_start_addr, argv_3864 _file_size, argv_1127 * _xmem_mgr_ptr) {
	argv_3517 argv_1993 = argv_947;

	if ((_systool_ptr==argv_2889) || (_compress_tool_ptr==argv_2889) || (_cypher_tool_ptr==argv_2889) || (_glob_data_ptr == argv_2889) || (_file_start_addr == argv_2889) || (_xmem_mgr_ptr == argv_2889)) {
		argv_1993 = argv_940;
	}
	else if (init_done == true) {
		argv_1993 = argv_936;
	}
	else {
		argv_1788			= _glob_data_ptr;
		argv_3731				= _systool_ptr;
		argv_1021		= _compress_tool_ptr;
		argv_1136			= _cypher_tool_ptr;
		argv_1417			= _file_start_addr;
		argv_1416				= _file_size;
		argv_1313				= argv_1417 + argv_1416;
		argv_4003			= _xmem_mgr_ptr;		
		init_done				= true;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_2825		
// @@
// @@ INPUT			:
// @@ _cptr: argv_3862 *: pointer on the 'argv_2817' field of a given entry
// @@   of the symbol table of the argv_1106 COFF argv_1396.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the argv_2817 of this entry of the symbol table
// @@   is a short argv_2817 (0..8 characters),
// @@   false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ In the COFF format, an important part is the symbol table.
// @@ Each entry of this symbol table has a 'argv_2817' field
// @@ This field has a fixed size of 8 argv_782 and may
// @@ contain either a argv_2817 (if it can be contained within 8 argv_782)
// @@ or it contains an offset in the string table.
// @@ To determine whether the argv_2817 is a short argv_2817, or an offset,
// @@ we must consider the first 4 argv_782 of the 'argv_2817' field :
// @@ - if the 4 first argv_782 are zero, then we have an offset,
// @@ - otherwise we have a short argv_2817.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_810::argv_2825 (argv_3862 * _cptr) {
	bool bret = false;
	if ((_cptr[0] != 0) || (_cptr[1] != 0) || (_cptr[2] != 0) || (_cptr[3] != 0)) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_671		
// @@
// @@ INPUT			:
// @@ _cptr: argv_3862 *: argv_635 of the 'argv_2817' field of the
// @@   argv_1106 entry of the symbol table of the argv_1106 COFF
// @@   argv_1396.
// @@
// @@ OUTPUT		:	
// @@ _offset: argv_3864&: if the 'argv_2817' field is actually a long argv_2817, 
// @@   this field contains the offset where the actual argv_2817 of the 
// @@   symbol can be found from the string table of the COFF argv_1396.
// @@    Notice that in that case, the parameter '_name' is undefined.
// @@ 
// @@ _name: string&: if the 'argv_2817' field is actually a short argv_2817,
// @@    this field contains the extracted argv_2817 of the symbol.
// @@    Notice that in that case, the parameter '_offset' is undefined.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517: SYMBOL_OFFSET_IN_STRING_TABLE if the 'argv_2817' field does
// @@   not contain a argv_2817, but contains an offset in the string table
// @@   instead.
// @@       SYMBOL_SHORT_NAME if the 'argv_2817' field contains directly a 
// @@       argv_2817, not an offset. 
// @@       SYMBOL_UNKNOWN_NAME_TYPE in case of failure.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ In the COFF format, an important part is the symbol table.
// @@ Each entry of this symbol table has a 'argv_2817' field
// @@ This field has a fixed size of 8 argv_782 and may
// @@ contain either a argv_2817 (if it can be contained within 8 argv_782)
// @@ or it contains an offset in the string table.
// @@ To determine whether the argv_2817 is a short argv_2817, or an offset,
// @@ we must consider the first 4 argv_782 of the 'argv_2817' field :
// @@ - if the 4 first argv_782 are zero, then we have an offset,
// @@ - otherwise we have a short argv_2817.
// @@ This function permits to determine the argv_2817 argv_3842 
// @@ (either short argv_2817, or offset) :
// @@ - if argv_2817 is a short argv_2817, then the argv_2817 is returned 
// @@   to the caller via the '_name' parameter, in that case
// @@   the '_offset' parameter is undefined.
// @@ - if the argv_2817 is an offset in the string table, then
// @@   this offset is returned to the caller via the '_offset'
// @@   parameter, and the '_name' parameter is undefined. 
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_671 (argv_3862 * _cptr, argv_3864& _offset, string& _name) {
	argv_3517 argv_1993 = SYMBOL_UNKNOWN_NAME_TYPE;
	if ((_cptr[0]==0) && (_cptr[1]==0) && (_cptr[2]==0) && (_cptr[3]==0)) { // long argv_2817 => index in the string table
		argv_1993 = SYMBOL_OFFSET_IN_STRING_TABLE;
		argv_729 atyp;
		atyp.argv_726[0]	= _cptr[4];
		atyp.argv_726[1]	= _cptr[5];
		atyp.argv_726[2]	= _cptr[6];
		atyp.argv_726[3]	= _cptr[7];
		_offset			= atyp.argv_732;
	}
	else { // short argv_2817
		argv_1993			= SYMBOL_SHORT_NAME;
		_name			= "";
		for (argv_3864 i=0 ; i<8 ; i++) {
			if (_cptr[i] != 0) {
				_name += _cptr[i];	
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	internal_2_real_name		
// @@
// @@ INPUT			:
// @@ _internal_name_ptr: argv_3862 *: pointer on the argv_2817 to convert
// @@   from it's internal shape to it's real shape.
// @@
// @@ OUTPUT		:	
// @@ _real_name: string&: the real argv_2817 associated with the
// @@   '_internal_name_ptr' parameter obtained after argv_2253.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_947 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1371 the real argv_2817 of a given
// @@ entry of the symbol table of the argv_1106 COFF argv_1396.
// @@ 
// @@ In the COFF format, an important part is the symbol table.
// @@ Each entry of this symbol table has a 'argv_2817' field
// @@ This field has a fixed size of 8 argv_782 and may
// @@ contain either a argv_2817 (if it can be contained within 8 argv_782)
// @@ or it contains an offset in the string table.
// @@
// @@ This function retrieves the symbol argv_2817, whatever it is a short
// @@ easily retrieveable from the 'argv_2817' field itself, or whether
// @@ it is a argv_2817 that can be found using the offset contained in the
// @@ 'argv_2817' field.
// @@ 
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::internal_2_real_name (argv_3862 * _internal_name_ptr, string& _real_name) {
	argv_3517 argv_1993	= argv_947;
	_real_name	= "";
	argv_3864 his_offset;

	argv_3517 name_type = argv_671 (&_internal_name_ptr[0], his_offset, _real_name);

	if (name_type == SYMBOL_UNKNOWN_NAME_TYPE) {
		argv_1993 = argv_948;
	}
	else if (name_type == SYMBOL_OFFSET_IN_STRING_TABLE) {
		his_offset = his_offset + (argv_3864) argv_3616;
		argv_3862 * cptr = (argv_3862 *) his_offset;

		his_offset = 0;
		while (cptr[his_offset] != '\0') {
			_real_name += cptr[his_offset];
			his_offset++;	
		}	

#if defined (DEBUG_COFF_LOADER)
		argv_1788->argv_2251.argv_2247 (argv_1152, "long argv_2817 extracted : ", _real_name.c_str());	
#endif // #if defined (DEBUG_COFF_LOADER)
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_3628		
// @@
// @@ INPUT			:
// @@ _s: argv_820: symbol argv_2817 to analyze.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the symbol contained in the '_s' parameter
// @@   is actually a string,
// @@   false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to know if a given mangled 
// @@ symbol is actually a string or not.
// @@ C++, in order to be able to have multiple functions
// @@ with the same argv_2817 but behaving differently only by
// @@ using parameter differences, need to use a mechanism
// @@ called mangling to avoid ambiguities.
// @@
// @@ Notice that this function mimic the behaviour of the
// @@ win32 'UnDecorateSymbolName' function to some extent.
// @@ but the function 'UnDecorateSymbolName' can not be used
// @@ because of portability issued (Linux).
// @@
// @@ Here follows an example of the non portable win32 version :
// @@ 
// @@ bool argv_810::argv_3628 (argv_820 _symb) {
// @@ bool bret = false;
// @@ 	char und[MAX_PATH]; 
// @@ 
// @@ 	if (UnDecorateSymbolName(_symb,und,sizeof(undec),argv_3897)) 
// @@   {
// @@ 		if (strncmp (und, "`string'", 8) == 0) {
// @@ 			bret = true;
// @@ 		}
// @@ 	}
// @@ 	return (bret);
// @@ }
// @@ 
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_810::argv_3628 (argv_820 _s) {
	argv_3864 size = strlen (_s);
	argv_3864 i=0;
	bool bret = false;
	bool eaten_digit = false;
	// smallest size is 9, so let's ensure that the supposed string is not too short
	if (size >= 9) {
		// ??_C@_
		if ((_s[0]=='?') && (_s[1]=='?') && (_s[2]=='_') && (_s[3]=='C') && (_s[4]=='@') && (_s[5]=='_')) {
			i=6;
			// eat the next character whatever it is (except if we reached the argv_3739)
			if (_s[i] != '@') {
				i++;
			}
			
			// eat possible digit
			if ((_s[i] >= '0') && (_s[i] <= '9')) {
				eaten_digit = true;
				i++;
			}
			// eat all possible upper characters between [A..P]
			while ((i < size) && (_s[i] >= 'A') && (_s[i]<='P')) {
				i++;
			}

			if ((i < size) && (_s[i]=='@')) {
				// jump the '@'
				i++;
				// eat all except '@'
				argv_3864 k=0;
				while ((i < size) && (_s[i] != '@')) {
					k++;
					i++;
				}

				// if second digit consumed => argv_757 may be empty
				if (i < size) {
					if (eaten_digit == false) {
						if ((k>0) && (_s[i] == '@')) {
							bret = true; // succesfully determined that is a string
						}
					}
					else { 
						if (_s[i] == '@') {
							bret = true; // succesfully determined that is a string
						}
					}
				}
			}
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_1728		
// @@
// @@ INPUT			:	
// @@ _name: argv_820: argv_2817 to convert to simple argv_2817.
// @@
// @@ OUTPUT		:	
// @@ _simple_name: string&: generated simplified argv_2817
// @@    using the '_name' parameter.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if the simple argv_2817 was generated succesfully,
// @@       false otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a mangled argv_2817 to a simpler
// @@ argv_2817.
// @@ There may be two different argv_2817 scheme :
// @@ shape argv_2929 : ?symbol@.....
// @@ shape two : _symbol
// @@
// @@ CONTRACT 		: 
// @@ - '_name' parameter must not be an empty string.
// @@ - '_name' parameter must contain a argv_2817 in either in
// @@   shape argv_2929, or shape two.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_810::argv_1728 (argv_820 _name, string& _simple_name) {
	bool bret = false;
	_simple_name = "";
	if (argv_3628 (_name) == false) {
		argv_3864 size = strlen (_name);
		if ((size > 0) && (_name[0] == '?')) { // first scheme
			for (argv_3864 i=0 ; i<size ; i++) {
				if (_name[i] == '@') {
					break;
				}

				if (_name[i] != '?') {
					_simple_name += _name[i];
				}
			}
		}
		else if ((size > 0) && (_name[0] == '_')) { // second scheme
			for (argv_3864 i=1 ; i<size ; i++) {
				_simple_name += _name[i];
			}
		}
	}

	if (_simple_name != "") {
#if defined (DEBUG_COFF_LOADER)
		{
			char argv_3828[65536];
			argv_3548 (argv_3828, 65536, "generated simple argv_2817 from '%s' => '%s'", _name, _simple_name.c_str());
			argv_3828[65536 - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
		}
#endif // #if defined (DEBUG_COFF_LOADER)
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	insert_symbol_in_map		
// @@
// @@ INPUT			:
// @@ _name: string: argv_2817 of the symbol to insert into the map.
// @@ 
// @@ _data: argv_824: argv_1139 to be associated with the symbol whose
// @@   argv_2817 is contained into the '_name' parameter. 
// @@
// @@ _index: argv_3864: the order of the symbol in the symbol table.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_947 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to save up the association between
// @@ a given symbol argv_2817 and it's associated argv_1139 into a map
// @@ that has a log(n) retrieval speed.
// @@
// @@ Notice that the symbol argv_2817 is converted into a simple
// @@ argv_2817 (if the symbol is not a string argv_2908) and it is
// @@ this simple symbol argv_2817 that is saved and associated to
// @@ the argv_1139 contained in the '_data' parameter.
// @@
// @@ There exists 2 different symbol mangling scheme :
// @@ ?argv_3632@@.....
// @@ _symbol_name
// @@ that would be both transformed into :
// @@ argv_3632
// @@
// @@ The reason why the mangled named are not used is that 
// @@ it would then be too complicated, and also the plugins
// @@ are not allowed to export C++ symbols, thus we don't
// @@ need to deal with the mangled names in general. 
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::insert_symbol_in_map (string& _name, argv_824& _data, argv_3864 _index) {
	argv_3517 argv_1993 = argv_947;

	if (_name.size () > 0) {
		map<string, argv_824>::iterator local_iter;
		local_iter = m_name_data.find (_name);
		if (local_iter == m_name_data.end()) {
			m_name_data[_name] = _data;

			string second_name;
			bool bret = argv_1728 (_name.c_str(), second_name);
			if (bret == true) {
				m_name_data[second_name] = _data;	
			}
#if defined (DEBUG_COFF_LOADER)
			/*
			// log the demangled argv_2817 (just for info)
			{
				char argv_3828[argv_1913];
				char szUndName[argv_1913];
				if (UnDecorateSymbolName (_name.c_str(), szUndName, 
					sizeof(szUndName), argv_3897))
				{
					// UnDecorateSymbolName returned success
					argv_3548 (argv_3828, argv_1913, "mangled argv_2817: '%s', demangled argv_2817 : '%s'", _name.c_str(), szUndName);
				}
				else {// failed to demangle the argv_2817
					argv_3548 (argv_3828, argv_1913, "mangled argv_2817: '%s', demangled argv_2817 : (FAILED)", _name.c_str());
				}
				argv_3828[argv_1913 - 1] = '\0';
				argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
			}*/
#endif // #if defined (DEBUG_COFF_LOADER)
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_2219		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to go to the symbol table of the
// @@ argv_1106 COFF argv_1396 and to argv_2198 all symbols of this table.
// @@ By loading we mean argv_1371 all relevant argv_1139 so that
// @@ all argv_1139 concerning a given symbol can be accessed in 
// @@ O(1) argv_3825 complexity.
// @@
// @@ An association between the simple version of the symbol
// @@ argv_2817 and it's associated argv_1139 is created.
// @@
// @@ The reason why the mangled named are not used is that 
// @@ it would then be too complicated, and also the plugins
// @@ are not allowed to export C++ symbols, thus we don't
// @@ need to deal with the mangled names in general. 
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_2219 () {
	argv_3517 argv_1993 =			argv_947;
	argv_3634	entry;
	argv_3864				local_offset = 0;
	string				his_name;
	argv_3862 *				his_start;
	argv_824				argv_1139;

	for (argv_3864 i=0 ; i<argv_1920.argv_2902 ; ) {
		argv_1139.reset ();
#if defined (DEBUG_COFF_LOADER)
		argv_1788->argv_2251.argv_2247 (argv_1152, "--> loading symbol : ", i);
#endif // #if defined (DEBUG_COFF_LOADER)

		if ((&argv_3633[local_offset + argv_3635]) >= argv_1313) {
			argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2219 - overflow @1");
			argv_1993 = argv_944;
			break;
		}

		memcpy (&entry, &argv_3633[local_offset], argv_3635);

#if defined (DEBUG_COFF_LOADER)
		{
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "argv_633=%X, entry.argv_2890=%d, entry.argv_3466=%d", &argv_3633[local_offset], entry.argv_2890, entry.argv_3466, entry);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
		}
#endif // #if defined (DEBUG_COFF_LOADER)

		argv_1993 = internal_2_real_name (&entry.argv_2818[0], his_name);
		
		if (argv_1993 != argv_947) {
			break;
		}
	
		// retrieve the meaningful fields for this symbol
		if (entry.argv_3466 > 0) {
			his_start = argv_3462 + ((entry.argv_3466 - 1) * sizeof(argv_1930));	
			argv_1930 section_hdr;

			if ((his_start + sizeof(argv_1930)) >= argv_1313) {
				argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2219 - overflow @2");
				argv_1993 = argv_944;
				break;
			}

			
			memcpy (&section_hdr, his_start, sizeof(argv_1930));

			argv_1139.argv_3218		= section_hdr.argv_3218 + (argv_3864) argv_1417;
			argv_1139.argv_3538			= section_hdr.argv_3538;
			argv_1139.argv_2898	= section_hdr.argv_2898;
			argv_1139.argv_3219	= section_hdr.argv_3219 + (argv_3864) argv_1417;

			if ((argv_1139.argv_3842 != argv_1266) && (argv_1139.argv_3842 != argv_1265)) {
				argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2219 - unknown symbol argv_3842 : ", (argv_3864) argv_1139.argv_3842);
				argv_1993 = argv_951;
				break;
			}
		}

		argv_1139.section_index			= entry.argv_3466;
		argv_1139.argv_3842					= entry.argv_3843; // to know whether it's a function or not
		argv_1139.argv_3960					= entry.argv_3961;
		argv_1139.storage_class			= entry.argv_3612; // for the LABEL argv_3842 (switch)
		// if it is a label, then the relocations are the parent's relocations, thus
		// they must be ignored (the label is not an actual argv_753)
		if (argv_1139.storage_class == argv_1933) {
#if defined (DEBUG_COFF_LOADER)
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "symbol '%s' is a label (reset it's number of relocations to zero)", his_name.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1139.argv_2898 = 0;		
		}

		// try to argv_616 this new symbol and it's associated argv_1139
		insert_symbol_in_map (his_name, argv_1139, i);

		// always argv_1042 what we have read
		local_offset += argv_3635;
		i++;

		// then we may have to argv_1042 auxiliaries as well
		if (entry.argv_2890 > 0) {
			i += entry.argv_2890;
			local_offset += (entry.argv_2890 * argv_3635);
#if defined (DEBUG_COFF_LOADER)
			argv_1788->argv_2251.argv_2247 (argv_1152, "jumping n entries : ", entry.argv_2890);
#endif // #if defined (DEBUG_COFF_LOADER)
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_2205		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function seek toward the COFF argv_1907 and retrieve
// @@ the important and relevant argv_1139 about it and save it into
// @@ argv_810 argv_2908 for further use. 
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' should have been called prior to this call
// @@ - the function 'argv_2205' should not have already been called.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_2205 () {
	argv_3517 argv_1993 = argv_947;
	if (init_done == false) {
		argv_1993 = argv_937;
	}
	else if (argv_2221 == true) {
		argv_1993 = argv_938;
	}
	else {
		memcpy (&argv_1920, &argv_1417[0], sizeof(argv_1921));
		// patch some fields to be able to have a direct access 
		argv_3633		= argv_1417 + argv_1920.argv_3220;
		argv_3462	= argv_1417 + sizeof(argv_1921);
/*		{
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "number of sections = %X (%u)", argv_1920.argv_2900, argv_1920.argv_2900);
			MessageBox (argv_2889, argv_3828, "", MB_OK);
		}*/
		argv_3464		= argv_3462;
		argv_3464		= argv_3464 + (argv_1920.argv_2900 * sizeof(argv_1930));
		argv_3616		= argv_1417 + argv_1920.argv_3220 + (argv_1920.argv_2902 * argv_3635);

		if ((argv_3633 >= argv_1313)) {
			argv_1993 = argv_944;
		}
		else if (argv_3462 >= argv_1313) {
			argv_1993 = argv_944;
		}
		else if (argv_3464 >= argv_1313) {
			argv_1993 = argv_944;
		}
		else if (argv_3616 >= argv_1313) {
			argv_1993 = argv_944;
		}
		else {
			argv_2221	= true;
		}
	}
	return (argv_1993);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_2215		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_824>::iterator&: the iterator
// @@   containing both the argv_1106 symbol and it's associated argv_1139.
// @@
// @@ _index: argv_3864: the index of the argv_1106 relocation, if we are 
// @@   processing the nth relocation, then '_index' will be equal to n.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2198 argv_2929 relocation associated with 
// @@ the argv_1106 symbol, the argv_1106 symbol's argv_2817 and associated
// @@ argv_1139 being available via the '_iter' parameter.
// @@ the steps performed are then :
// @@ - goto the relocation whose index is given by the '_index'
// @@   parameter.
// @@ - argv_2198 this relocation (a fixed size argv_1139 structure)
// @@ - convert the table index into an offset
// @@ - argv_2198 the associated symbol table entry
// @@ - argv_1371 the argv_2817 associated with this symbol table entry
// @@ - ensure that this symbol exists (all symbols have been
// @@   collected by another function prior to this call).
// @@ - argv_616 this argv_2817 to the relocation list for this symbol
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_2215 (map<string, argv_824>::iterator& _iter, argv_3864 _index) {
	argv_3517 argv_1993 = argv_947;

	// goto this relocation
	argv_3862 * his_start = (argv_3862 *) _iter->second.argv_3219 + (_index * argv_1923);
	if ((his_start + argv_1923) >= argv_1313) {
		argv_1993 = argv_944;
	}
	else {
		// argv_2198 this relocation
		Crich_reloc_unit rich_reloc_unit;
		memcpy (&rich_reloc_unit.reloc, his_start, argv_1923);
		
		// convert the table index into an offset
		his_start = argv_3633 + (rich_reloc_unit.reloc.argv_3643 * argv_3635);

		// argv_2198 the associated symbol table entry
		argv_3634	entry;
		if ((his_start + argv_3635) >= argv_1313) {
			argv_1993 = argv_944;
		}
		else {
			memcpy (&entry, his_start, argv_3635);

			// argv_1371 the argv_2817 associated with this symbol table entry
			argv_1993 = internal_2_real_name (&entry.argv_2818[0], rich_reloc_unit.argv_2817);
			if (argv_1993 == argv_947) {
				// ensure that this symbol exists
				map<string, argv_824>::iterator iter_2;
				iter_2 = m_name_data.find (rich_reloc_unit.argv_2817);
				if (iter_2 == m_name_data.end()) {
					argv_1993 = argv_939;
				}
				else {
					// argv_616 this argv_2817 to the relocation list for this symbol
					_iter->second.v_relocation.push_back (rich_reloc_unit);
#if defined (DEBUG_COFF_LOADER)
					{
						char argv_3828[65536];
						argv_3548 (argv_3828, 65536, "   argv_616 reloc '%s'", rich_reloc_unit.argv_2817.c_str());
						argv_3828[65536 - 1] = '\0';
						argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
					}
#endif
				}
			}
		}
	}
	return (argv_1993);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_2218		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is called after all symbols are argv_2221 and
// @@ contained into a map that associates each symbol's names
// @@ with it's argv_1139.
// @@ This function considers all possible symbol and loads 
// @@ all relocations for each of these symbols.
// @@ Notice that by loading we mean that each relocation
// @@ is actually a symbol, whose argv_2817 is retrieved, and saved
// @@ into a list of symbols that are related to the argv_1106 symbol.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_2218 () {
	argv_3517 argv_1993 = argv_947;
	map<string, argv_824>::iterator argv_2020; 
	argv_3864 nb_reloc;

#if defined (DEBUG_COFF_LOADER)
	argv_1788->argv_2251.argv_2247 (argv_1152, "--------- LOADING RELOCATIONS -----------");
#endif // #if defined (DEBUG_COFF_LOADER)
	for (argv_2020=m_name_data.begin() ; argv_2020 != m_name_data.end() ; ++argv_2020) {
		nb_reloc = argv_2020->second.argv_2898;
#if defined (DEBUG_COFF_LOADER)
		{
			char argv_3828[65536];
			argv_3548 (argv_3828, 65536, "%d relocations for symbol '%s'", nb_reloc, argv_2020->first.c_str());
			argv_3828[65536 - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
		}
#endif // #if defined (DEBUG_COFF_LOADER)
		for (argv_3864 i=0 ; i<nb_reloc ; i++) {
			argv_2215 (argv_2020, i);
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_2198		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2198 a given COFF argv_1396.
// @@ The necessary steps are then :
// @@ - argv_2198 the COFF argv_1907
// @@ - argv_2198 the symbol table of this COFF argv_1396.
// @@ - argv_2198 the relocations for all symbols.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must have been called prior to this call.
// @@ - the 'argv_2198' function must not have been called yet.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_2198 () {
	argv_3517 argv_1993 = argv_947;
	if (init_done == false) {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2198 - argv_937");
		argv_1993 = argv_937;
	}
	else if (argv_2221 == true) {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2198 - argv_938");
		argv_1993 = argv_938;
	}
	else {
#if defined (DEBUG_COFF_LOADER)
		argv_1788->argv_2251.argv_2247 (argv_1152, "loading COFF argv_1907...");
#endif // #if defined (DEBUG_COFF_LOADER)
		argv_1993 = argv_2205 ();
		if (argv_1993 != argv_947) {
			string serror = argv_1319 (argv_1993);
			argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2198 - error while loading argv_1907 : ", serror.c_str());
		}
		else {
#if defined (DEBUG_COFF_LOADER)
			argv_1788->argv_2251.argv_2247 (argv_1152, "COFF argv_1907 argv_2221 succesfully");
			argv_1788->argv_2251.argv_2247 (argv_1152, "loading COFF symbol table...");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1993 = argv_2219 ();

			if (argv_1993 != argv_947) {
				string serror = argv_1319 (argv_1993);
				argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2198 - error while loading symbol table : ", serror.c_str());
			}
			else {
#if defined (DEBUG_COFF_LOADER)
				argv_1788->argv_2251.argv_2247 (argv_1152, "COFF symbol table argv_2221 succesfully");
#endif // #if defined (DEBUG_COFF_LOADER)
				argv_1993 = argv_2218 ();
				if (argv_1993 != argv_947) {
					string serror = argv_1319 (argv_1993);
					argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2198 - error while loading relocations : ", serror.c_str());
				}
				else {
#if defined (DEBUG_COFF_LOADER)
					argv_1788->argv_2251.argv_2247 (argv_1152,  "COFF relocations argv_2221 succesfully");
#endif // #if defined (DEBUG_COFF_LOADER)					
				}
			}
		}
	}
	
	if (argv_1993 == argv_947) {
#if defined (DEBUG_COFF_LOADER)
		argv_1788->argv_2251.argv_2247 (argv_1152, "COFF argv_1396 argv_2221 succesfully");
#endif // #if defined (DEBUG_COFF_LOADER)					
	}
	else {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: COFF argv_1396 argv_2198 failed !");
	}
	argv_1217 ();
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_3631		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_820: symbol whose presence must be checked.
// @@
// @@ OUTPUT		:	
// @@ _presence_flag: bool&: set to true if the symbol contained in
// @@   '_symbol_name' is present into the map,
// @@   set to false otherwise.
// @@
// @@ _iter: map<string, argv_824>::iterator&: iterator containing the 
// @@   argv_1139 concerning the symbol '_symbol_name', to be more precise,
// @@   the first part of the iterator contains the symbol's argv_2817, and
// @@   the second part contains the argv_1139 associated with this symbol.
// @@   Notice that it is undefined if the '_presence_flag' is false.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given symbol is present
// @@ in the map that associates a symbol's argv_2817 to it's associated argv_1139.
// @@ If the symbol is present, then the parameter '_presence_flag' is 
// @@ set to true, otherwise it set to false.
// @@ If symbol is present in map, then an iterator pointing on the
// @@ corresponding entry from the map is returned to the caller via
// @@ the '_iter' parameter.  
// @@
// @@ CONTRACT 		: 
// @@ - '_symbol_name' parameter must not be a argv_2889 pointer.
// @@ - '_symbol_name' parameter must not be an empty string. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_3631 (argv_820 _symbol_name, bool& _presence_flag, map<string, argv_824>::iterator& _iter) {
	argv_3517 argv_1993		= argv_947;
	_presence_flag	= false;

	if ((_symbol_name == argv_2889) || (strlen(_symbol_name) == 0)) {
		argv_1993 = argv_940;		
	}
	else {
		_iter = m_name_data.find (_symbol_name);
		if (_iter != m_name_data.end()) {
			_presence_flag = true;
		}
	}
	return (argv_1993);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_3630		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_824>::iterator: iterator that points to
// @@ the symbol to check and it's associated argv_1139. 
// @@
// @@ OUTPUT		:
// @@ _answer_flag: bool&: set to true if the symbol is local, 
// @@                      set to false otherwise.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1396 contains a symbol table, 
// @@ This symbol table contains several fields,
// @@ and each symbol may either be
// @@ - internal : defined into this COFF argv_1396.
// @@ - external : defined in another COFF argv_1396.
// @@ - neither internal, nor external.
// @@ To determine whether a given symbol is internal or
// @@ external, we must consider the 'section_index' field,
// @@ If this field is set to zero, then the symbol is external,
// @@ If this field is set to a argv_3960 greater than the number of 
// @@   symbols contained in this COFF argv_1396, the symbol is neither
// @@   internal, nor external (negative argv_3461).
// @@ If this field is greater than zero, and lower or equal to
// @@ the number of symbols into the COFF argv_1396, then it is an
// @@ internal symbol.
// @@
// @@ This function permits to determine whether the symbol whose
// @@ argv_1139 are pointed to by the parameter '_iter' is a local symbol
// @@ or not. A local symbol is defined within the argv_1106 COFF argv_1396.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_3630 (map<string, argv_824>::iterator& _iter, bool& _answer_flag) {
	argv_3517 argv_1993 = argv_947;
	if (_iter->second.section_index > 0) {
		_answer_flag = true;	
	}
	else {
		_answer_flag = false;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_3629		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_824>::iterator: iterator that points to
// @@ the symbol to check and it's associated argv_1139. 
// @@
// @@ OUTPUT		:
// @@ _answer_flag: bool&: set to true if the symbol is external, 
// @@                      set to false otherwise.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1396 contains a symbol table, 
// @@ This symbol table contains several fields,
// @@ and each symbol may either be
// @@ - internal : defined into this COFF argv_1396.
// @@ - external : defined in another COFF argv_1396.
// @@ - neither internal, nor external.
// @@ To determine whether a given symbol is internal or
// @@ external, we must consider the 'section_index' field,
// @@ If this field is set to zero, then the symbol is external,
// @@ If this field is set to a argv_3960 greater than the number of 
// @@   symbols contained in this COFF argv_1396, the symbol is neither
// @@   internal, nor external (negative argv_3461).
// @@ If this field is greater than zero, and lower or equal to
// @@ the number of symbols into the COFF argv_1396, then it is an
// @@ internal symbol.
// @@
// @@ This function permits to determine whether the symbol whose
// @@ argv_1139 are pointed to by the parameter '_iter' is an external symbol
// @@ or not. An external symbol is not defined within the argv_1106 
// @@ COFF argv_1396.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_3629 (map<string, argv_824>::iterator& _iter, bool& _answer_flag) {
	argv_3517 argv_1993 = argv_947;
	if (_iter->second.section_index == 0) {
		_answer_flag = true;	
	}
	else {
		_answer_flag = false;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_2316		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_824>::iterator: iterator that points to
// @@ the symbol to check and it's associated argv_1139. 
// @@
// @@ _symbol_name: argv_820: argv_2817 of the symbol to map to virtual memory.
// @@
// @@ OUTPUT		:	
// @@ _xmapped_addr: argv_3862 *&: argv_635 of the symbol after it was mapped
// @@   to virtual memory (meaningful only in case of success).
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to request and allocate an aligned
// @@ argv_753 of virtual memory for the symbol whose argv_2817 is contained
// @@ in the '_symbol_name' parameter, and whose argv_1139 are contained 
// @@ into the '_iter' iterator.
// @@ In case of success, the argv_635 of the first byte of the allocated
// @@ argv_753 is returned to the caller via the '_xmapped_addr' parameter.
// @@
// @@ Notice that if the symbol has already been mapped to xmemory 
// @@ before, then no allocation occurs and the argv_635 of the argv_753
// @@ of virtual memory that was allocated the first argv_3825 the symbol
// @@ was mapped is returned via the '_xmapped_addr' parameter.
// @@
// @@ As this function uses an iterator given by the caller, the caller
// @@ is supposed to have performed a argv_2253 of the symbol
// @@ in some way prior to this call.
// @@ 
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_2316 (map<string, argv_824>::iterator& _iter, argv_820 _symbol_name, argv_3862 *& _xmapped_addr) {
	argv_3517 argv_1993              = argv_947;
	void * symbol_ptr      = argv_2889;
	bool found_from_cache  = false;
	char argv_3828[MAX_PATH];

	// create a xmemory argv_753 for this symbol
	argv_1993 = argv_4003->argv_3350 (_symbol_name, (argv_3862 *) _iter->second.argv_3218, _iter->second.argv_3538, found_from_cache, &symbol_ptr);
	if (argv_1993 != argv_4007) {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2316: xmem alloc failed !");
		argv_1993 = argv_2925;
	}
	else if (found_from_cache == true) {
		_xmapped_addr = (argv_3862 *) symbol_ptr;
		argv_3548 (argv_3828, MAX_PATH, "argv_2316: symbol '%s' found from argv_784 at argv_635 0x%X", _symbol_name, (argv_3864) _xmapped_addr);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
	}
	else { // argv_753 not found from xmem argv_784
		// now copy the content of the function to xmemory
#if defined (DEBUG_COFF_LOADER)
		argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_2316...[xmemory argv_753 allocated]");
#endif // #if defined (DEBUG_COFF_LOADER)
		_iter->second.real_start_addr = _iter->second.argv_3218;
#if defined (DEBUG_COFF_LOADER)
		argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_2316...[copying symbol argv_1139]");
		argv_3548 (argv_3828, MAX_PATH, "argv_1417=0x%X, argv_3218=0x%X, real_start_addr=0x%X, xmem argv_753 :0x%X", argv_1417, _iter->second.argv_3218, _iter->second.real_start_addr, symbol_ptr);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);

		argv_3548 (argv_3828, MAX_PATH, "memcpy (%X, %X, %u)", symbol_ptr, _iter->second.real_start_addr, _iter->second.argv_3538);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
		argv_3548 (argv_3828, MAX_PATH, "argv_2316: symbol '%s' xmapped at argv_635 0x%X", _symbol_name, symbol_ptr);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)

		argv_3731->argv_2852 (symbol_ptr, (argv_2263) _iter->second.real_start_addr, _iter->second.argv_3538);
		if (strcmp (_symbol_name, "?argv_1419@@YAXIPAD@Z") == 0) {
#if defined (DEBUG_COFF_LOADER)
			argv_1788->argv_2251.argv_2233 (argv_1152, (argv_3862 *) symbol_ptr, _iter->second.argv_3538, "file_type_2_string_VIRGIN");
#endif // #if defined (DEBUG_COFF_LOADER)
		}

#if defined (DEBUG_COFF_LOADER)
		argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_2316...[symbol argv_1139 copied]");
#endif // #if defined (DEBUG_COFF_LOADER)
		argv_3731->argv_2839();
		_xmapped_addr = (argv_3862 *) symbol_ptr;

		// beware: relocations are not solved at this point
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_2316		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_820: argv_2817 of the symbol to map to virtual memory.
// @@
// @@ OUTPUT		:
// @@ _xmapped_addr: argv_3862 *&: argv_635 of the symbol after it was mapped
// @@   to virtual memory (meaningful only in case of success).
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to request and allocate an aligned
// @@ argv_753 of virtual memory for the symbol whose argv_2817 is contained
// @@ in the '_symbol_name' parameter.
// @@ In case of success, the argv_635 of the first byte of the allocated
// @@ argv_753 is returned to the caller via the '_xmapped_addr' parameter.
// @@
// @@ Notice that if the symbol has already been mapped to xmemory 
// @@ before, then no allocation occurs and the argv_635 of the argv_753
// @@ of virtual memory that was allocated the first argv_3825 the symbol
// @@ was mapped is returned via the '_xmapped_addr' parameter.
// @@
// @@ CONTRACT 		:	
// @@ - the symbol '_symbol_name' must exists in the argv_1106 COFF argv_1396.
// @@ - the symbol '_symbol_name' must not be an external symbol.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_2316 (argv_820 _symbol_name, argv_3862 *& _xmapped_addr) {
	argv_3517 argv_1993		= argv_947;

	bool presence_flag = false;
	map<string, argv_824>::iterator iter_local;
	argv_1993 = argv_3631 (_symbol_name, presence_flag, iter_local);
	if (argv_1993 != argv_947) {
		argv_1993 = argv_949;
	}
	else if (presence_flag == false) {
		argv_1993 = argv_939;
	}
	else if (iter_local->second.section_index == 0) { // external symbol
		argv_1993 = argv_933;
	}
	else {
		argv_1993 = argv_2316 (iter_local, _symbol_name, _xmapped_addr);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_2975		
// @@
// @@ INPUT			:
// @@ _reloc_unit: Crich_reloc_unit: the argv_1139 structure containing
// @@ information about the relocation to be performed.
// @@
// @@ _local_base_addr: argv_3862 *: The argv_635 of the first byte of the
// @@  argv_753 in which relocation must be performed (argv_742 argv_635).
// @@
// @@ _solved_adress: argv_3862 *: argv_635 of the first byte of the solved
// @@   symbol to use for patching. In other words it is where we 
// @@   can find the argv_635 to use for patch.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1396 contains a symbol table which is a list
// @@ of symbols.
// @@ Each symbol may have zero to n relocations associated with it.
// @@ you can see each relocation as a 4 argv_782 hole where the argv_635
// @@ of the missing symbol must be filled in in order for the symbol
// @@ to be completed and useable.
// @@ Notice that there is a argv_3842 field associated with each relocation.
// @@ This argv_3842 determines how the relocation should be patched.
// @@ Notice that the only admitted types are :
// @@ - argv_1929: to patch, we must compute the 32 bit
// @@   relative displacement to the target.
// @@ - argv_1927: to patch, we just have to use the argv_3960 as
// @@   a virtual argv_635 (kind of absolute addressing).
// @@ The argv_1928 argv_3842 is not supported for the argv_3825 being.
// @@
// @@ This function uses the argv_1139 related to the relocation '_reloc_unit'
// @@ and the argv_742 argv_635 '_local_base_addr', and also the resolved
// @@ argv_635 '_solved_adress' to perform the relocation patch using also
// @@ the relocation argv_3842 which is a field of the _reloc_unit argv_1139 
// @@ structure.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_2975 (Crich_reloc_unit& _reloc_unit, argv_3862 * _local_base_addr, argv_3862 * _solved_adress) {
	argv_3517 argv_1993 = argv_947;
#if defined (DEBUG_COFF_LOADER)
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "patching the following relocation : '%s'", _reloc_unit.argv_2817.c_str());
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)

	argv_3864 his_size	  = argv_1710;
	argv_729 atyp;
	argv_3862 * from_addr  = argv_2889;
	argv_3862 * to_addr    = argv_2889;

	// ensure that the symbol argv_3842 is coherent
	argv_3864 argv_3842 = _reloc_unit.reloc.argv_3843;
	if ((argv_3842 != argv_1929) && (argv_3842 != argv_1927) && (argv_3842 != argv_1928)) {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2975 - unknown argv_1139 argv_3842 : ", argv_3842);
		argv_1993 = argv_951;
	}
	else if (argv_3842 == argv_1929) { // compute the delta and patch
		to_addr          = (argv_3862 *) _local_base_addr + _reloc_unit.reloc.argv_3978;
#if defined (DEBUG_COFF_LOADER)
		{
			argv_3548 (argv_3828, MAX_PATH, "BEFORE DELTA : _solved_adress = 0x%X, to_addr=0x%X, argv_1710=%d", _solved_adress, to_addr, argv_1710);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
		}
#endif // #if defined (DEBUG_COFF_LOADER)

		// compute delta between the argv_1139 to patch and it's location in xmem
		atyp.argv_725 = (argv_3864) _solved_adress - (argv_3864) (to_addr + argv_1710);
		from_addr  = &atyp.argv_726[0];
#if defined (DEBUG_COFF_LOADER)
		argv_3548 (argv_3828, MAX_PATH, "patching [FUNCTION] relocation : (delta=%d) from=%X, to=%X, size=%X", atyp.argv_725, from_addr, to_addr, his_size);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)
	}
	else if (argv_3842 == argv_1927) { // just use the argv_3416 + argv_753 argv_3601 and patch
		atyp.argv_732	 = (argv_3864) _solved_adress;
		to_addr      = (argv_3862 *) _local_base_addr + _reloc_unit.reloc.argv_3978;
#if defined (DEBUG_COFF_LOADER)
		argv_3548 (argv_3828, MAX_PATH, "patching [DATA] relocation : from=%X, to=%X, size=%X", from_addr, to_addr, his_size);
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)
		from_addr    = &atyp.argv_726[0];
	}
	else if (argv_3842 == argv_1928) {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_810::argv_2975 - relocation argv_3842 not supported : ", argv_3842);
		argv_1993 = argv_945;
	}

	if (argv_1993 == argv_947) {
		if (his_size == 0) {
			argv_1993 = argv_941;
		}
		else {
			argv_729 atyp_2;
			
			// read the argv_1139 contained at the destination argv_635
			memcpy (&atyp_2.argv_726[0], to_addr, argv_1710);
#if defined (DEBUG_COFF_LOADER)
			argv_3548 (argv_3828, MAX_PATH, "compiler prior argv_3960 was : %X (will be added to solved argv_635)", atyp_2.argv_732);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)

			// argv_616 the retrieved argv_1139 to the argv_635 to patch
			atyp.argv_732   = atyp_2.argv_732 + atyp.argv_732;
			
			// perform the actual patch
			// notice that we always patch an argv_635, nothing else => 4 argv_782
			memcpy (to_addr, from_addr, his_size);
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_3388		
// @@
// @@ INPUT			:
// @@ _root_plugin_name: argv_820: argv_2817 of the argv_1106 root plugin.
// @@
// @@ _plugin_name: argv_820: argv_2817 of the argv_1106 plugin.
// @@
// @@ _symbol_name: argv_820: argv_2817 of the symbol to argv_3385.
// @@
// @@ _iter: map<string, argv_824>::iterator&: 
// @@  iterator that associates the argv_1106 symbol's argv_2817
// @@  with it's argv_1139. these argv_1139 have been collected during
// @@  the COFF loading process.
// @@
// @@ _msc: map<string, argv_810 *>& : the map containing the 
// @@   dependancy list for the argv_1106 coff loader.
// @@
// @2 _father_addr: argv_3862 *: argv_635 of the father argv_753.
// @@   it may be argv_2889 if we are at the root of the memory tree.
// @@   This father argv_635 is especially necessary if the symbol
// @@   to argv_3385 is a label, because in that case we have to
// @@   argv_3385 the symbol using it's father's argv_753 argv_3601 argv_635.
// @@
// @@ OUTPUT		:	
// @@ _addr: argv_3862 *& : this parameter contains the argv_3402 of the
// @@   resolution. In other words it contains the argv_635 of the
// @@   resolved symbol.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3385 a symbol that is defined 
// @@ locally, in other word that is defined into the argv_1106 plugin.
// @@ to argv_3385 a given symbol, we must create a virtual memory chunk 
// @@ for it and also argv_3385 all possible relocations for this symbol.
// @@ A relocation being a reference (an argv_635) to another symbol
// @@ that may be defined in the same plugin, or in another plugin.
// @@ This function is recursive in nature and we can see the plugin
// @@ with it's dependancies as a tree with it's childs.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_3388 (argv_820 _root_plugin_name, argv_820 _plugin_name, argv_820 _symbol_name, map<string, argv_824>::iterator& _iter, map<string, argv_810 *>& _msc, argv_3862 *& _addr, argv_3862 * _father_addr) {
	argv_3517 argv_1993 = argv_947;
	char argv_3828[MAX_PATH];
#if defined (DEBUG_COFF_LOADER)
	argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_3388...[IN]");
#endif // #if defined (DEBUG_COFF_LOADER)

	// if symbol is a label, then it's location is within it's father argv_753's argv_635 space
	if (_iter->second.storage_class == argv_1933) {
		_addr = _father_addr + _iter->second.argv_3960;
#if defined (DEBUG_COFF_LOADER)
		argv_3548 (argv_3828, MAX_PATH, "symbol '%s' is a label => it's location in father argv_753 (at offset 0x%X + father_addr: 0x%X = 0x%X)", _symbol_name, _iter->second.argv_3960, _father_addr, _addr);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)

		// the labels are supposed to have no relocations
		if (_iter->second.argv_2898 != 0) {
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_810::argv_3388 - symbol '%s' is a label but it has %d relocations (expected zero relocation) !", _symbol_name, _iter->second.argv_2898);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
			argv_1993 = argv_942;
		}
	}
	else { // the symbol is an actual symbol, not a label.
		// xmap the symbol as it is defined internally (size is contained in the iterator)
		argv_1993 = argv_2316 (_iter, _symbol_name, _addr);
		if (argv_1993 != argv_4007) {
			string serror = argv_1319 (argv_1993);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : 'argv_3388' failed while looking for symbol '%s' - argv_2316 failed - %s", _symbol_name, serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
		}
		else { // symbol succesfully xmapped to memory
#if defined (DEBUG_COFF_LOADER)
			argv_1788->argv_2251.argv_2247 (argv_1152, "symbol succesfully xmapped to memory");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1993 = argv_947;
			argv_3864 nb_relocation = _iter->second.v_relocation.size ();
			argv_3862 * solved_address = argv_2889;
			// argv_3554 all relocations for this symbol and patch their argv_635
#if defined (DEBUG_COFF_LOADER)
			argv_1788->argv_2251.argv_2247 (argv_1152, "Solve all relocations for this symbol");
			argv_1788->argv_2251.argv_2247 (argv_1152, "number of relocations : ", nb_relocation);
#endif // #if defined (DEBUG_COFF_LOADER)
			for (argv_3864 i=0 ; i<nb_relocation ; i++) {
#if defined (DEBUG_COFF_LOADER)
				{
					argv_3548 (argv_3828, MAX_PATH, "solving relocation (%d/%d) of '%s'", i+1, nb_relocation, _symbol_name);
					argv_3828[MAX_PATH - 1] = '\0';
					argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
				}
#endif // #if defined (DEBUG_COFF_LOADER)

				argv_1993 = argv_3385 (_root_plugin_name, _plugin_name, _iter->second.v_relocation[i].argv_2817.c_str(), _msc, solved_address, _addr);
#if defined (DEBUG_COFF_LOADER)
				argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_3388...[RESOLVE_RETURNED]");
#endif // #if defined (DEBUG_COFF_LOADER)
				if (argv_1993 != argv_947) {
					argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : failed while resolving relocation '%s' for symbol '%s'", _iter->second.v_relocation[i].argv_2817.c_str(), _symbol_name);
					argv_3828[MAX_PATH - 1] = '\0';
					argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
					break;
				}
				else {
					argv_1993 = argv_2975 (_iter->second.v_relocation[i], _addr, solved_address);
					if (argv_1993 != argv_947) {
						argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : failed while patching relocation '%s' for symbol '%s'", _iter->second.v_relocation[i].argv_2817.c_str(), _symbol_name);
						argv_3828[MAX_PATH - 1] = '\0';
						argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
						break;
					} 
				} 
			}
		}
	}
#if defined (DEBUG_COFF_LOADER)
	argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_3388...[OUT]");
#endif // #if defined (DEBUG_COFF_LOADER)
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_3387		
// @@
// @@ INPUT			:
// @@ _root_plugin_name: argv_820: argv_2817 of the argv_1106 root plugin.
// @@
// @@ _plugin_name: argv_820: argv_2817 of the argv_1106 plugin.
// @@
// @@ _symbol_name: argv_820: argv_2817 of the symbol to argv_3385.
// @@
// @@ _iter: map<string, argv_824>::iterator&:
// @@  iterator that associates the argv_1106 symbol's argv_2817
// @@  with it's argv_1139. these argv_1139 have been collected during
// @@  the COFF loading process.
// @@
// @@ _msc: map<string, argv_810 *>& : the map containing the 
// @@   dependancy list for the argv_1106 coff loader.
// @@
// @2 _father_addr: argv_3862 *: argv_635 of the father argv_753.
// @@   it may be argv_2889 if we are at the root of the memory tree.
// @@   This father argv_635 is especially necessary if the symbol
// @@   to argv_3385 is a label, because in that case we have to
// @@   argv_3385 the symbol using it's father's argv_753 argv_3601 argv_635.
// @@
// @@ OUTPUT		:	
// @@ _addr: argv_3862 *& : this parameter contains the argv_3402 of the
// @@   resolution. In other words it contains the argv_635 of the
// @@   resolved symbol.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1396 contains a part that is called the symbol table.
// @@ This symbol table is a list of symbols.
// @@ Each symbol appearing in the symbol table may be defined
// @@ in the argv_1106 COFF argv_1396, or defined in another COFF argv_1396.
// @@ This function performs the resolution of a given symbol
// @@ that is located in another COFF argv_1396 (in another plugin).
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_3387 (argv_820 _root_plugin_name, argv_820 _plugin_name, argv_820 _symbol_name, map<string, argv_824>::iterator& _iter, map<string, argv_810 *>& _msc, argv_3862 *& _addr, argv_3862 * _father_addr) {
	argv_3517 argv_1993 = argv_947;
	map<string, argv_810 *>::iterator msc_iter;
	map<string, argv_810 *>::iterator found_iter;
	map<string, argv_824>::iterator local_iter;
	char argv_3828[MAX_PATH];
#if defined (DEBUG_COFF_LOADER)
	argv_3548 (argv_3828, MAX_PATH, "argv_3387: must argv_3385 '%s'", _symbol_name);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)
	
	// try to locate the module where this external symbol is defined
	bool presence_flag = false;
	argv_3864 nb_found      = 0;

	for (msc_iter=_msc.begin() ; msc_iter != _msc.end() ; ++msc_iter) {
		argv_1993 = msc_iter->second->argv_3631 (_symbol_name, presence_flag, local_iter);
		if (argv_1993 != argv_947) {
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3387 : 'argv_3387' failed while looking for symbol '%s'", _symbol_name);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
			break;
		}
		else if (presence_flag == true) { 
			argv_1993 = msc_iter->second->argv_3630 (local_iter, presence_flag);
			if (argv_1993 != argv_947) {
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3387 : 'argv_3630' failed while looking for symbol '%s'", _symbol_name);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
				break;
			}
			else {
				if (presence_flag == true) { // symbol is present, and local to the module
#if defined (DEBUG_COFF_LOADER)
					argv_3548 (argv_3828, MAX_PATH, "=> external symbol '%s' located in module '%s'", _symbol_name, msc_iter->first.c_str());
					argv_3828[MAX_PATH - 1] = '\0';
					argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)

					nb_found++; // go on however to check for duplicates
					if (nb_found == 1) {
						found_iter = msc_iter;
					}
				}
			}
		}
	}

	if (argv_1993 == argv_947) {
		// check whether it was found or not
		if (nb_found == 0) {
			argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: 0 definition found for this symbol !");
			argv_1993 = argv_953;
		}
		else if (nb_found > 1) {
			argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: this symbol is defined several times : ", nb_found);
			argv_1993 = argv_952;
		}
		else if (nb_found == 1) { // ok, we found the unique module where this symbol is defined
#if defined (DEBUG_COFF_LOADER)
			argv_1788->argv_2251.argv_2247 (argv_1152, "symbol definition found !");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1993 = found_iter->second->argv_3385 (_plugin_name, found_iter->first.c_str(), _symbol_name, _msc, _addr, _father_addr);
#if defined (DEBUG_COFF_LOADER)
			argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_3387...[RESOLVE_RETURNED]");
#endif // #if defined (DEBUG_COFF_LOADER)

			if (argv_1993 != argv_947) {
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 failed for external symbol '%s' located in module '%s'", _symbol_name, found_iter->first.c_str());
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
			}
			else {
#if defined (DEBUG_COFF_LOADER)
				argv_3548 (argv_3828, MAX_PATH, "resolved external symbol '%s' located in module '%s' at argv_635 %X", _symbol_name, found_iter->first.c_str(), _addr);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_810
// @@
// @@ FUNCTION		:	argv_3385		
// @@
// @@ INPUT			:
// @@ _root_plugin_name: argv_820: argv_2817 of the argv_1106 root plugin.
// @@
// @@ _plugin_name: argv_820: argv_2817 of the argv_1106 plugin.
// @@
// @@ _symbol_name: argv_820: argv_2817 of the symbol to argv_3385.
// @@
// @@ _msc: map<string, argv_810 *>& : the map containing the 
// @@   dependancy list for the argv_1106 coff loader
// @@
// @2 _father_addr: argv_3862 *: argv_635 of the father argv_753.
// @@   it may be argv_2889 if we are at the root of the memory tree.
// @@   This father argv_635 is especially necessary if the symbol
// @@   to argv_3385 is a label, because in that case we have to
// @@   argv_3385 the symbol using it's father's argv_753 argv_3601 argv_635.
// @@
// @@ OUTPUT		:
// @@ _addr: argv_3862 *& : this parameter contains the argv_3402 of the
// @@   resolution. In other words it contains the argv_635 of the
// @@   resolved symbol.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_947 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3385 the symbol whose argv_2817
// @@ is contained into the '_symbol_name' parameter.
// @@ the symbol is supposed to be defined in the plugin whose argv_2817
// @@ is contained in the '_symbol_name' parameter.
// @@ As this function is recursive in nature, we also keep track
// @@ of the root plugin via the '_root_plugin_name' parameter.
// @@ The resolved argv_635 is then returned via the '_addr' parameter.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must have been called prior to this call
// @@ - the COFF argv_1396 associated with the argv_1106 argv_810 argv_2908
// @@   must have been argv_2221 succesfully prior to this call.
// @@ - '_symbol_name' parameter must not be a argv_2889 pointer.
// @@ - '_symbol_name' parameter must not be an empty string.
// @@ - the symbol whose argv_2817 is contained in the '_symbol_name'
// @@   variable must be present in the COFF argv_1396 associated with 
// @@   the argv_1106 argv_810 argv_2908.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_810::argv_3385 (argv_820 _root_plugin_name, argv_820 _plugin_name, argv_820 _symbol_name, map<string, argv_810 *>& _msc, argv_3862 *& _addr, argv_3862 * _father_addr) {
	argv_3517 argv_1993 = argv_947;
	char argv_3828[MAX_PATH];
#if defined (DEBUG_COFF_LOADER)
	argv_3548 (argv_3828, MAX_PATH, "must argv_3385 =====[ROOT_PLUGIN:%s]===[PLUGIN:%s]===[%s]==[father_addr=0x%X]=====", _root_plugin_name, _plugin_name, _symbol_name, _father_addr);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)

	if (init_done == false) {
		argv_1993 = argv_937;
	}
	else if (argv_2221 == false) {
		argv_1993 = argv_935;
	}
	else {
#if defined (DEBUG_COFF_LOADER)
		argv_1788->argv_2251.argv_2247 (argv_1321, "argv_810::argv_3385...[PRE-CONDITIONS OK]");
#endif // #if defined (DEBUG_COFF_LOADER)
		// check parameters validity
		if ((_symbol_name == argv_2889) || (strlen(_symbol_name) == 0)) {
			argv_1993 = argv_940;
		}
		else { // parameters are correct
			bool presence_flag = false;
#if defined (DEBUG_COFF_LOADER)
			argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_3385...[PARAMETERS OK]");
#endif // #if defined (DEBUG_COFF_LOADER)
			map<string, argv_824>::iterator iter_local;

			// notice that even if symbol is external it should be present
#if defined (DEBUG_COFF_LOADER)
			argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_3385...[CHECK SYMBOL PRESENCE]");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1993 = argv_3631 (_symbol_name, presence_flag, iter_local); 
			if (argv_1993 != argv_947) {
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : 'argv_3631' failed while looking for symbol '%s'", _symbol_name);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
			}
			else if (presence_flag == false) { 
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : symbol not found in argv_1106 module : '%s'", _symbol_name);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
				argv_1993 = argv_943;
			}
			else { // symbol is present, it can be either external, internal, or none of them
#if defined (DEBUG_COFF_LOADER)
				argv_1788->argv_2251.argv_2247 (argv_1321, "argv_810::argv_3385...[SYMBOL PRESENT IN MODULE]");
#endif // #if defined (DEBUG_COFF_LOADER)
				// check whether symbol was already xmapped or not
				argv_3864 unused_size;
				argv_1993 = argv_4003->argv_3625 (_symbol_name, (argv_3862 *) iter_local->second.argv_3218, iter_local->second.argv_3538, presence_flag, _addr, unused_size);
				if (argv_1993 != argv_4007) {
					string serror = argv_1319 (argv_1993);
					argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3624 failed while processing symbol '%s' (errno=%s)", _symbol_name, serror.c_str());
					argv_3828[MAX_PATH - 1] = '\0';
					argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
				}
				else { 
					argv_1993 = argv_947;
					if (presence_flag == true) {
#if defined (DEBUG_COFF_LOADER)
						argv_3548 (argv_3828, MAX_PATH, "symbol '%s' was already xmapped at argv_635 0x%X", _symbol_name, _addr);
						argv_3828[MAX_PATH - 1] = '\0';
						argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
#endif // #if defined (DEBUG_COFF_LOADER)
					}
					else {
#if defined (DEBUG_COFF_LOADER)
						argv_1788->argv_2251.argv_2247 (argv_1152, "symbol was not xmapped yet");
#endif // #if defined (DEBUG_COFF_LOADER)
						argv_1993 = argv_3630 (iter_local, presence_flag);
						if (argv_1993 != argv_947) {
							argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : 'argv_3630' failed while looking for symbol '%s'", _symbol_name);
							argv_3828[MAX_PATH - 1] = '\0';
							argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
						}
						else if (presence_flag == true) { // symbol is locally defined
#if defined (DEBUG_COFF_LOADER)
							argv_1788->argv_2251.argv_2247 (argv_1321, "argv_810::argv_3385...[SYMBOL IS LOCALLY DEFINED]");
#endif // #if defined (DEBUG_COFF_LOADER)
							argv_1993 = argv_3388 (_root_plugin_name, _plugin_name, _symbol_name, iter_local, _msc, _addr, _father_addr);
							if (argv_1993 == argv_947) {
#if defined (DEBUG_COFF_LOADER)
								argv_1788->argv_2251.argv_2233 (argv_1152, _addr, iter_local->second.argv_3538, _symbol_name);
#endif // #if defined (DEBUG_COFF_LOADER)
							}
						}
						else { // symbol is either external, or none
#if defined (DEBUG_COFF_LOADER)
							argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_3385...[SYMBOL IS EITHER EXTERNAL, OR UNKNOWN]");
#endif // #if defined (DEBUG_COFF_LOADER)
							argv_1993 = argv_3629 (iter_local, presence_flag);
							if (argv_1993 != argv_947) {
								argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : 'argv_3629' failed while looking for symbol '%s'", _symbol_name);
								argv_3828[MAX_PATH - 1] = '\0';
								argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
							}
							else if (presence_flag == false) { // symbol exists, but it is meaningless
								argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : symbol '%s' is neither internal, nor external !", _symbol_name);
								argv_3828[MAX_PATH - 1] = '\0';
								argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
								argv_1993 = argv_946;
							}
							else { // symbol exists, and it is defined externally
#if defined (DEBUG_COFF_LOADER)
								argv_1788->argv_2251.argv_2247 (argv_1152, "symbol is defined externally");
#endif // #if defined (DEBUG_COFF_LOADER)
								argv_1993 = argv_3387 (_root_plugin_name, _plugin_name, _symbol_name, iter_local, _msc, _addr, _father_addr);
							}
						}
					}
				}
			}
		}
	}
#if defined (DEBUG_COFF_LOADER)
	argv_1788->argv_2251.argv_2247 (argv_1152, "argv_810::argv_3385...[OUT]");
#endif // #if defined (DEBUG_COFF_LOADER)
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
