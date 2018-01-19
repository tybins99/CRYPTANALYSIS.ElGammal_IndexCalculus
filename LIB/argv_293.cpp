// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_293.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures and
// @@ functions necessary for the virtual memory
// @@ manager to work properly
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_358.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127
// @@
// @@ FUNCTION		:	argv_1127		
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
// @@ Normal constructor of the argv_1127 argv_2908.
// @@ It just reset important fields to an initial argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1127::argv_1127 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127
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
// @@ This function deallocates all the previously allocated virtual 
// @@ memory blocks.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1127::reset () {
	argv_3864 nb_page = argv_3951.size ();
	for (argv_3864 i=0 ; i<nb_page ; i++) {
		argv_3731->argv_2843 (argv_3951[i], argv_4004);	
	}

	init_done	  = false;
	argv_1106		  = (argv_3864) argv_2889;
	remaining	  = 0;
	argv_1788 = argv_2889;
	argv_3731   = argv_2889;

	argv_3951.clear ();
	vector<void *>().swap (argv_3951);

	argv_3950.clear ();
	vector<string>().swap (argv_3950);

	argv_2289.clear ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127
// @@
// @@ FUNCTION		:	~argv_1127		
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
// @@ Normal destructor of the argv_1127 argv_2908.
// @@ it deallocates all the previously allocated virtual memory
// @@ blocks.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1127::~argv_1127 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127
// @@
// @@ FUNCTION		:	argv_1075		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_4007 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@
// @@ CONTRACT 		:
// @@ - the 'init' function must have been called prior to this call.	 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1127::argv_1075 () {
	argv_3517 argv_1993 = argv_4007;
	argv_2263 block_ptr = argv_3731->argv_2830 (argv_4004);
	if (block_ptr == argv_2889) {
		argv_1993 = argv_4005;
	}
	else {
		memset (block_ptr, 0x90, argv_4004);
		argv_3951.push_back (block_ptr);
		argv_1106		= (argv_3864) block_ptr;
		remaining	= argv_4004;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _systool_ptr: argv_3593 *: pointer on the argv_2908 containing
// @@   all the system dependant functions.
// @@
// @@ _glob_data_ptr: argv_839 *: pointer on the argv_2908 containing
// @@     all the global argv_1139.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_4007 in case of success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 the argv_1127
// @@ for use by performing the following steps :
// @@ - save up the '_systool_ptr' argv_635
// @@ - save up the '_glob_data_ptr' argv_635
// @@ - allocate a first big chunk of virtual memory.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must not have been called yet.
// @@ - '_systool_ptr' parameter must not be a argv_2889 pointer.
// @@ - '_glob_data_ptr' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1127::init (argv_3593 * _systool_ptr, argv_839 * _glob_data_ptr) {
	argv_3517 argv_1993 = argv_4007;

	if (init_done == true) {
		argv_1993 = argv_3998;	
	}
	else if ((_systool_ptr == argv_2889) || (_glob_data_ptr == argv_2889)) {
		argv_1993 = argv_4000;
	}
	else {
		argv_3731	  = _systool_ptr;
		argv_1788 = _glob_data_ptr;
		init_done	  = true;

		// allocate the first page
		argv_1993 = argv_1075 ();
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127
// @@
// @@ FUNCTION		:	argv_1024		
// @@
// @@ INPUT			:
// @@ _name: argv_820 : argv_2817 of the symbol whose crc is to be computed.
// @@
// @@ _buf_ptr: argv_635 of the first byte of the argv_771 whose crc
// @@   is to be computed.
// @@
// @@ _buf_size: size of the argv_771 whose crc is to be computed.
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
// @@ This function permits to generate the CRC associated with a
// @@ argv_771 corresponding to the symbol whose argv_2817 is given
// @@ as a parameter and to return the argv_3402 via the '_crc
// @@ parameter.
// @@ Notice that the final CRC is actually a string.
// @@ This string is composed of 
// @@ - the argv_3632
// @@ - the size of the argv_771 whose numeric CRC was computed
// @@ - the numeric CRC itself
// @@ These 3 fields are then arranged as follows :
// @@ <argv_3632>_<buffer_size>_<buffer_numeric_crc>
// @@ example: 
// @@ symbol argv_2817="toto", argv_771 size=32, argv_771 crc = 4585
// @@ => final crc = "toto_32_4585"
// @@
// @@ This scheme permits to ensure that the CRC is dependant
// @@ of the symbol's argv_2817, the argv_771's size, and the argv_771's
// @@ content.
// @@ 
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1127::argv_1024 (argv_820 _name, argv_3862 * _buf_ptr, argv_3864 _buf_size, string& _crc) {
	char argv_3828[MAX_PATH];
	argv_3864 ircr = 0;

	for (argv_3864 i=0 ; i<_buf_size ; i++) {
		ircr += _buf_ptr[i];
	}

	argv_3548 (argv_3828, MAX_PATH, "%s_%u_%u", _name, _buf_size, ircr);
	argv_3828[MAX_PATH - 1] = '\0';
	_crc = argv_3828;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127
// @@
// @@ FUNCTION		:	argv_3350		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_820: argv_2817 of the symbol for which a virtual
// @@   memory argv_753 is requested.
// @@
// @@ _data_2_copy: argv_3862 *: argv_635 of the first byte of the symbol's
// @@   argv_1139, these argv_1139 are used to compute the CRC.
// @@
// @@ _requested_size: argv_3864 : size of the '_data_2_copy' argv_771, 
// @@   necessary to compute the CRC.
// @@
// @@ OUTPUT		:
// @@ _found_from_cache: bool&: set to true if the same symbol was
// @@   already mapped to virtual memory,
// @@   set to false otherwise.
// @@	
// @@ _block_ptr_ptr: void **: contains the argv_635 of the argv_753
// @@   of virtual memory that was allocated or retrieved from
// @@   argv_784 if it was already previously allocated before.
// @@
// @@ IO			:	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_4007 in case of success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to allocate/obtain a argv_753 of
// @@ virtual memory for the symbol whose argv_2817 is contained
// @@ into the '_symbol_name' parameter, whose content is 
// @@ contained in the argv_771 pointed to '_data_2_copy' and
// @@ whose size is contained in the '_requested_size' parameter.
// @@ Notice that the allocated argv_753 is aligned.
// @@ Also notice that if the same symbol with the same content
// @@ was already mapped to virtual memory, then no memory
// @@ is allocated and the argv_635 of the argv_753 previously
// @@ allocated for this symbol is returned via the '_block_ptr_ptr'
// @@ parameter.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must have been called prior to this call.
// @@ - the '_requested_size' parameter must be within the  
// @@   range ]0..argv_4004[
// @@ - '_data_2_copy' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1127::argv_3350 (argv_820 _symbol_name, argv_3862 * _data_2_copy, argv_3864 _requested_size, bool& _found_from_cache, void ** _block_ptr_ptr) {
	argv_3517 argv_1993		  = argv_4007;
	_found_from_cache = false;
#if defined (DEBUG_XMEM_MANAGER)
	argv_1788->argv_2251.argv_2247 (argv_1152, "xmem: argv_3632 : '", _symbol_name, "'");
	argv_1788->argv_2251.argv_2247 (argv_1152, "xmem: requested argv_753 size : ", _requested_size);
#endif // #if defined (DEBUG_XMEM_MANAGER)

	if (init_done == false) {
		argv_1993 = argv_3999;
	}
	else if ((_requested_size == 0) || (_requested_size > argv_4004) || (_data_2_copy == argv_2889)) { 
		argv_1993 = argv_4000;
	}
	else if ((_symbol_name == argv_2889) || (strlen(_symbol_name) == 0)) {
		argv_1993 = argv_4000;
	}
	else {
		*_block_ptr_ptr = argv_2889;
		string crc;
		map<string, argv_1128>::iterator iter_local;
		// check whether this symbol was already xmapped or not
		argv_1024 (_symbol_name, _data_2_copy, _requested_size, crc);
		iter_local = argv_2289.find (crc);
#if defined (DEBUG_XMEM_MANAGER)
		argv_1788->argv_2251.argv_2247 (argv_1152, "xmem: crc for this symbol : '", crc.c_str());
#endif // #if defined (DEBUG_XMEM_MANAGER)
		
		if (iter_local != argv_2289.end()) {
			*_block_ptr_ptr = iter_local->second.argv_635; // found from argv_784
#if defined (DEBUG_XMEM_MANAGER)
			{
				char argv_3828[MAX_PATH];
				argv_3548 (argv_3828, MAX_PATH, "xmem: argv_753 [FOUND FROM CACHE] argv_3601 at argv_635 : 0x%X", iter_local->second.argv_635);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
			}
#endif // #if defined (DEBUG_XMEM_MANAGER)
			_found_from_cache = true;
		}
		else { // symbol not xmapped yet
			// check whether the required argv_753 will fit into the argv_1106 page
			if (_requested_size > remaining) {
#if defined (DEBUG_XMEM_MANAGER)
				argv_1788->argv_2251.argv_2247 (argv_1152, "argv_1127::argv_3350 - page fault => allocating a new page");
#endif // #if defined (DEBUG_XMEM_MANAGER)
				argv_1993 = argv_1075 ();
			}

			if (argv_1993 == argv_4007) {
				// correct the size so that it will be a multiple of argv_4006
				argv_3517 corrected_size = ((_requested_size / argv_4006) + 1) * argv_4006;
#if defined (DEBUG_XMEM_MANAGER)
				argv_1788->argv_2251.argv_2247 (argv_1152, "xmem: argv_753 corrected size = ", corrected_size);
#endif // #if defined (DEBUG_XMEM_MANAGER)
				*_block_ptr_ptr = (argv_2263) argv_1106;
				argv_1128 xmem_unit;
				xmem_unit.argv_635 = (argv_3862 *) argv_1106;
				xmem_unit.size    = corrected_size;
#if defined (DEBUG_XMEM_MANAGER)
				{
					char argv_3828[MAX_PATH];
					argv_3548 (argv_3828, MAX_PATH, "xmem: argv_753 will argv_3601 at argv_635 : 0x%X", xmem_unit.argv_635);
					argv_3828[MAX_PATH - 1] = '\0';
					argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
				}
#endif // #if defined (DEBUG_XMEM_MANAGER)
				argv_2289[crc] = xmem_unit;
				argv_3950.push_back (crc);
				argv_1106   += corrected_size;
				remaining -= corrected_size;
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127
// @@
// @@ FUNCTION		:	argv_3625		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_820: argv_2817 of the symbol for which a virtual
// @@   memory argv_753 is requested.
// @@
// @@ _buf_ptr: argv_3862 *: argv_635 of the first byte of the symbol's
// @@   argv_1139, these argv_1139 are used to compute the CRC.
// @@
// @@ _buf_size: argv_3864 : size of the '_data_2_copy' argv_771, 
// @@   necessary to compute the CRC.
// @@
// @@ OUTPUT		:
// @@ _presence_flag: bool&: set to true if the same symbol was
// @@   already mapped to virtual memory,
// @@   set to false otherwise.
// @@	
// @@ _start_addr: argv_3862 *: if the symbol was already xmapped, then
// @@   it's starting argv_635 is returned via this parameter.
// @@
// @@ _size: argv_3864: if the symbol was already xmapped, then it's 
// @@   aligned size is returned via this parameter.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_4007 in case of success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given
// @@ symbol was already mapped to virtual memory or not.
// @@ If symbol was already mapped, then the parameter 
// @@ '_presence_flag' is set to true, and the aligned size
// @@ of the mapped argv_753 is returned via the '_start_addr'
// @@ parameter, and the argv_635 of the mapped argv_753 is returned
// @@ via the '_start_addr' parameter.
// @@ If the symbol was not already mapped to virtual memory yet,
// @@ then the parameter '_presence_flag' is set to false, and
// @@ the parameter '_start_addr' is set to argv_2889, and the
// @@ '_size' parameter is set to zero.
// @@
// @@ CONTRACT 		: 
// @@ - '_buf_ptr' parameter must be a argv_2889 pointer.
// @@ - '_buf_size' must be greater than zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1127::argv_3625 (argv_820 _name, argv_3862 * _buf_ptr, argv_3864 _buf_size, bool& _presence_flag, argv_3862 *& _start_addr, argv_3864& _size) {
	argv_3517 argv_1993		= argv_4007;
	_presence_flag  = false;
	_start_addr		= argv_2889;
	_size			= 0;

	if ((_buf_ptr != argv_2889) && (_buf_size > 0)) {
		string crc;
		argv_1024 (_name, _buf_ptr, _buf_size, crc);
		map<string, argv_1128>::iterator local_iter;
		local_iter = argv_2289.find (crc);
		if (local_iter != argv_2289.end()) {
			_presence_flag = true;
			_start_addr = local_iter->second.argv_635;
			// aligned size may be different than requested size
			_size		= local_iter->second.size; 
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127
// @@
// @@ FUNCTION		:	argv_3624		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_820: argv_2817 of the symbol for which a virtual
// @@   memory argv_753 is requested.
// @@
// @@ _buf_ptr: argv_3862 *: argv_635 of the first byte of the symbol's
// @@   argv_1139, these argv_1139 are used to compute the CRC.
// @@
// @@ _buf_size: argv_3864 : size of the '_data_2_copy' argv_771, 
// @@   necessary to compute the CRC.
// @@
// @@ OUTPUT		:
// @@ _presence_flag: bool&: set to true if the same symbol was
// @@   already mapped to virtual memory,
// @@   set to false otherwise.
// @@	
// @@ _start_addr: argv_3862 *: if the symbol was already xmapped, then
// @@   it's starting argv_635 is returned via this parameter.
// @@
// @@ _size: argv_3864: if the symbol was already xmapped, then it's 
// @@   aligned size is returned via this parameter.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_4007 in case of success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given
// @@ symbol was already mapped to virtual memory or not.
// @@ If symbol was already mapped, then the parameter 
// @@ '_presence_flag' is set to true, and the aligned size
// @@ of the mapped argv_753 is returned via the '_start_addr'
// @@ parameter, and the argv_635 of the mapped argv_753 is returned
// @@ via the '_start_addr' parameter.
// @@ If the symbol was not already mapped to virtual memory yet,
// @@ then the parameter '_presence_flag' is set to false, and
// @@ the parameter '_start_addr' is set to argv_2889, and the
// @@ '_size' parameter is set to zero.
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - '_buf_ptr' parameter must be a argv_2889 pointer.
// @@ - '_buf_size' must be greater than zero.
// @@ - '_name' parameter must not be a argv_2889 pointer.
// @@ - '_name' parameter must not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1127::argv_3624 (argv_820 _name, argv_3862 * _buf_ptr, argv_3864 _buf_size, bool& _presence_flag, argv_3862 *& _start_addr, argv_3864& _size) {
	argv_3517 argv_1993		= argv_4007;
#if defined (DEBUG_XMEM_MANAGER)
	{
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "argv_1127::argv_3624(%s,%X,%d)", _name, _buf_ptr, _buf_size);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
	}
#endif // #if defined (DEBUG_XMEM_MANAGER)
	if (init_done == false) {
		argv_1993 = argv_3999;
	}
	else if ((_name == argv_2889) || (strlen(_name) == 0) || (_buf_ptr==argv_2889) || (_buf_size==0)) { 
		argv_1993 = argv_4000;
	}
	else {
		argv_1993 = argv_3625 (_name, _buf_ptr, _buf_size, _presence_flag, _start_addr, _size);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127
// @@
// @@ FUNCTION		:	argv_1269		
// @@
// @@ INPUT			:
// @@ _filename: argv_820: argv_2817 of the argv_1396 where to log the
// @@   content of the virtual memory manager.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_4007 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to dump the content of the 
// @@ virtual memory manager to the log argv_1396 whose argv_2817
// @@ is contained in the '_filename' parameter.
// @@ the content of the log argv_1396 being a serie of lines,
// @@ each argv_2173 containing :
// @@ - the symbol's size.
// @@ - the symbol's argv_753's starting argv_635.
// @@ - the symbol's argv_2817.
// @@ Notice that the symbols are displayed in ascending order
// @@ of argv_753 argv_635, to be able to do that, we use a vector
// @@ because the map argv_2908 changes the order in which the
// @@ argv_1139 are stored (automatic sorting).
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1127::argv_1269 (argv_820 _filename) {
	argv_3517 argv_1993		= argv_4007;
#if defined (DEBUG_XMEM_MANAGER)
	if (init_done == false) {
		argv_1993 = argv_3999;
	}
	else {
		// we need a vector because the map does not respect the order
		FILE * argv_1478 = fopen (_filename, "wb");

		if (argv_1478) {
			argv_3864 argv_2866 = argv_3950.size ();
			map<string, argv_1128>::iterator iter_local;
			string corrected;
			fprintf (argv_1478, "%d items to argv_1200\r\n", argv_2866);

			for (argv_3864 i=0 ; i<argv_2866 ; i++) {
				iter_local = argv_2289.find (argv_3950[i]);
				if (iter_local == argv_2289.end()) {
					MessageBox (argv_2889, "argv_1269 failed : incoherency @1", "", MB_ICONERROR);
					break;
				}
				fprintf (argv_1478, "%d - (%u) - 0x%X - [%s]\r\n", i, iter_local->second.size, (argv_3864) iter_local->second.argv_635, argv_3950[i].c_str());
			}
			fclose (argv_1478);
		}
	}
#endif // #if defined (DEBUG_XMEM_MANAGER)
	return (argv_1993);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
