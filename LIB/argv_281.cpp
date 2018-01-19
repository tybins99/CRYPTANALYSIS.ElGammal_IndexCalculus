#include "../LIB/argv_348.hpp"
//#include "Dbghelp.h"


string argv_808::argv_3611 (argv_3862 _storage_class) {
	string argv_3402 = "";
	switch (_storage_class) {
		case IMAGE_SYM_CLASS_END_OF_FUNCTION:	argv_3402 = "IMAGE_SYM_CLASS_END_OF_FUNCTION"; break;
		case IMAGE_SYM_CLASS_NULL:				argv_3402 = "IMAGE_SYM_CLASS_NULL";			break;
		case IMAGE_SYM_CLASS_AUTOMATIC:			argv_3402 = "IMAGE_SYM_CLASS_AUTOMATIC";		break;
		case IMAGE_SYM_CLASS_EXTERNAL:			argv_3402 = "IMAGE_SYM_CLASS_EXTERNAL";		break;
		case IMAGE_SYM_CLASS_STATIC:			argv_3402 = "IMAGE_SYM_CLASS_STATIC";			break;
		case IMAGE_SYM_CLASS_REGISTER:			argv_3402 = "IMAGE_SYM_CLASS_REGISTER";		break;
		case IMAGE_SYM_CLASS_EXTERNAL_DEF:		argv_3402 = "IMAGE_SYM_CLASS_EXTERNAL_DEF";	break;
		case argv_1933:				argv_3402 = "argv_1933";			break;
		case IMAGE_SYM_CLASS_UNDEFINED_LABEL:	argv_3402 = "IMAGE_SYM_CLASS_UNDEFINED_LABEL"; break;
		case IMAGE_SYM_CLASS_MEMBER_OF_STRUCT:	argv_3402 = "IMAGE_SYM_CLASS_MEMBER_OF_STRUCT";break;
		case IMAGE_SYM_CLASS_ARGUMENT:			argv_3402 = "IMAGE_SYM_CLASS_ARGUMENT";		break;
		case IMAGE_SYM_CLASS_STRUCT_TAG:		argv_3402 = "IMAGE_SYM_CLASS_STRUCT_TAG";		break;
		case IMAGE_SYM_CLASS_MEMBER_OF_UNION:	argv_3402 = "IMAGE_SYM_CLASS_MEMBER_OF_UNION"; break;
		case IMAGE_SYM_CLASS_UNION_TAG:			argv_3402 = "IMAGE_SYM_CLASS_UNION_TAG";		break;
		case IMAGE_SYM_CLASS_TYPE_DEFINITION:	argv_3402 = "IMAGE_SYM_CLASS_TYPE_DEFINITION"; break;
		case IMAGE_SYM_CLASS_UNDEFINED_STATIC:	argv_3402 = "IMAGE_SYM_CLASS_UNDEFINED_STATIC";break;
		case IMAGE_SYM_CLASS_ENUM_TAG:			argv_3402 = "IMAGE_SYM_CLASS_ENUM_TAG";		break;
		case IMAGE_SYM_CLASS_MEMBER_OF_ENUM:	argv_3402 = "IMAGE_SYM_CLASS_MEMBER_OF_ENUM";	break;
		case IMAGE_SYM_CLASS_REGISTER_PARAM:	argv_3402 = "IMAGE_SYM_CLASS_REGISTER_PARAM";	break;
		case IMAGE_SYM_CLASS_BIT_FIELD:			argv_3402 = "IMAGE_SYM_CLASS_BIT_FIELD";		break;
		case IMAGE_SYM_CLASS_BLOCK:				argv_3402 = "IMAGE_SYM_CLASS_BLOCK";			break;
		case IMAGE_SYM_CLASS_FUNCTION:			argv_3402 = "IMAGE_SYM_CLASS_FUNCTION";		break;
		case IMAGE_SYM_CLASS_END_OF_STRUCT:		argv_3402 = "IMAGE_SYM_CLASS_END_OF_STRUCT";	break;
		case IMAGE_SYM_CLASS_FILE:				argv_3402 = "IMAGE_SYM_CLASS_FILE";			break;
		case IMAGE_SYM_CLASS_SECTION:			argv_3402 = "IMAGE_SYM_CLASS_SECTION";			break;
		case IMAGE_SYM_CLASS_WEAK_EXTERNAL:		argv_3402 = "IMAGE_SYM_CLASS_WEAK_EXTERNAL";	break;
		case 107:								argv_3402 = "IMAGE_SYM_CLASS_CLR_TOKEN";		break;

		default: argv_3402 = "<unknown>";
	}
	return (argv_3402);
}

string argv_808::invalid_section_2_string (argv_3516 _invalid_section_index) {
	string argv_3402 = "";
	switch (_invalid_section_index) {
		case IMAGE_SYM_UNDEFINED:	argv_3402 = "(IMAGE_SYM_UNDEFINED)"; break;
		case IMAGE_SYM_ABSOLUTE:	argv_3402 = "(IMAGE_SYM_ABSOLUTE)"; break;
		case IMAGE_SYM_DEBUG:		argv_3402 = "(IMAGE_SYM_DEBUG)"; break;	
	}
	return (argv_3402);
}

void argv_1098::argv_1200 (argv_839 *	_glob_data_ptr, argv_820 _symbol_name, bool _verbose_name) {
	char argv_3828[MAX_PATH];
	argv_808 coff_dns;
	if (_verbose_name == true) {
		string storage_str = coff_dns.argv_3611 (argv_3612);
		string invalid_section_str;
		if (argv_3466 > 0) {
			invalid_section_str = "(argv_3601 at 1)";
			argv_3548 (argv_3828, MAX_PATH, "=> %-25s: argv_3961 = 0x%-5X, argv_3466 = %-2d %-21s, argv_3612 = 0x%02X (%s)", _symbol_name, argv_3961, argv_3466, invalid_section_str.c_str(), argv_3612, storage_str.c_str());
		}
		else {
			invalid_section_str = coff_dns.invalid_section_2_string (argv_3466);
			argv_3548 (argv_3828, MAX_PATH, "=> %-25s: argv_3961 = 0x%-5X, argv_3466 = %-2d %-21s, argv_3612 = 0x%02X (%s)", _symbol_name, argv_3961, argv_3466, invalid_section_str.c_str(), argv_3612, storage_str.c_str());
		}
	}
	else {
		argv_3548 (argv_3828, MAX_PATH, "=> %s", _symbol_name);
	}
	argv_3828[MAX_PATH - 1] = '\0';
	_glob_data_ptr->argv_2251.argv_2247 (argv_1152, argv_3828);
}

argv_809::argv_809 () {
	reset ();
}

argv_809::~argv_809() {
	reset ();
}

void argv_809::reset () {
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

	if (argv_2299.size() > 0) {
		argv_2299.clear ();
	}
}

argv_3517 argv_809::init (argv_839 * _glob_data_ptr, argv_3593 * _systool_ptr, argv_814 * _compress_tool_ptr, argv_821 * _cypher_tool_ptr, argv_3862 * _file_start_addr, argv_3864 _file_size, argv_1127 * _xmem_mgr_ptr) {
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
// @@ CLASS			:	argv_809
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
// @@ bool argv_809::argv_3628 (argv_820 _symb) {
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
bool argv_809::argv_3628 (argv_820 _s, argv_3864& _size) {
	_size = strlen (_s);
	argv_3864 i=0;
	bool bret = false;
	bool eaten_digit = false;
	// smallest size is 9, so let's ensure that the supposed string is not too short
	if (_size >= 9) {
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
			while ((i < _size) && (_s[i] >= 'A') && (_s[i]<='P')) {
				i++;
			}

			if ((i < _size) && (_s[i]=='@')) {
				// jump the '@'
				i++;
				// eat all except '@'
				argv_3864 k=0;
				while ((i < _size) && (_s[i] != '@')) {
					k++;
					i++;
				}

				// if second digit consumed => argv_757 may be empty
				if (i < _size) {
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
// @@ CLASS			:	argv_809
// @@
// @@ FUNCTION		:	generate_demangled_name		
// @@
// @@ INPUT			:	
// @@ _name: argv_820: argv_2817 to convert to simple argv_2817.
// @@
// @@ OUTPUT		:	
// @@ _simple_name: string&: generated simplified argv_2817
// @@    using the '_name' parameter.
// @@
// @@ _is_string: bool&: set to true if the mangled argv_2817 is a string
// @@             set to false otherwise.
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
bool argv_809::argv_1728 (argv_820 _name, string& _simple_name, bool& _is_string) {
	bool bret = false;
	_simple_name = ""; 
	argv_3864 size;
	_is_string = argv_3628 (_name, size);
	if (_is_string == false) {
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
		bret = true;
	}

	// log the demangled argv_2817 (just for info)
	/*{
		char argv_3828[argv_1913];
		char szUndName[argv_1913];
		if (UnDecorateSymbolName (_name, szUndName, 
			sizeof(szUndName), argv_3897))
		{
			// UnDecorateSymbolName returned success
			argv_3548 (argv_3828, argv_1913, "mangled argv_2817: '%s', demangled argv_2817 : '%s'", _name, szUndName);
		}
		else {// failed to demangle the argv_2817
			argv_3548 (argv_3828, argv_1913, "mangled argv_2817: '%s', demangled argv_2817 : (FAILED)", _name);
		}
		argv_3828[argv_1913 - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
	}*/
	return (bret);
}

argv_3517 argv_809::argv_2205 () {
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
// @@ CLASS			:	argv_809
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
bool argv_809::argv_2825 (argv_3862 * _cptr) {
	bool bret = false;
	if ((_cptr[0] != 0) || (_cptr[1] != 0) || (_cptr[2] != 0) || (_cptr[3] != 0)) {
		bret = true;
	}
	return (bret);
}

argv_3862 * argv_809::argv_1378 (argv_3864 _symbol_table_index, argv_3634 *& _entry_ptr, bool& _is_short) {
	argv_3862 * name_ptr	= argv_2889;
	argv_3511[8]	= '\0';
	argv_729 atyp;
	argv_3864 itmp;

	itmp = (argv_3864) argv_3633 + (argv_3635 * _symbol_table_index);	
	_entry_ptr = (argv_3634 *) itmp;
	if (argv_2825 (_entry_ptr->argv_2818) == true) {
		memcpy (&argv_3511[0], _entry_ptr->argv_2818, 8);
		name_ptr = &argv_3511[0];
		_is_short = true;
	}
	else {
		_is_short = false;
		memcpy (&atyp.argv_726[0], &_entry_ptr->argv_2818[4], 4);
		name_ptr = argv_3616 + atyp.argv_732;
	}
	return (name_ptr);
}

void argv_809::argv_1222 (argv_820 _symbol_name, argv_820 _simplified_name, bool _is_short, bool _is_string, bool _was_simplified) {
	char argv_3828[MAX_PATH];	
	if (_is_short == true) {
		if (_is_string == true) {
			if (_was_simplified == true) {
				argv_3548 (argv_3828, MAX_PATH, "%-25s [argv_3511|string=true|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_3548 (argv_3828, MAX_PATH, "%-25s [argv_3511|string=true]", _symbol_name);
			}
		}
		else {
			if (_was_simplified == true) {
				argv_3548 (argv_3828, MAX_PATH, "%-25s [argv_3511|string=false|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_3548 (argv_3828, MAX_PATH, "%-25s [argv_3511|string=false]", _symbol_name);
			}
		}
	}
	else {
		if (_is_string == true) {
			if (_was_simplified == true) {
				argv_3548 (argv_3828, MAX_PATH, "%-25s [long_name|string=true|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_3548 (argv_3828, MAX_PATH, "%-25s [long_name|string=true]", _symbol_name);
			}
		}
		else {
			if (_was_simplified == true) {
				argv_3548 (argv_3828, MAX_PATH, "%-25s [long_name|string=false|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_3548 (argv_3828, MAX_PATH, "%-25s [long_name|string=false]", _symbol_name);
			}
		}
	}
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
}

argv_3517 argv_809::argv_2219 () {
	argv_3517 argv_1993 = argv_947;
	if (init_done == false) {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_809::argv_2219 - argv_937");
		argv_1993 = argv_937;
	}
	else {
		argv_3634 * entry_ptr	= argv_2889;
		argv_3862 * name_ptr					= argv_2889;
		string demangled_name;
		argv_1098	thumbnail;
		bool bret = true;
		bool is_short;
		bool is_string;
		
		for (argv_3864 i=0 ; i<argv_1920.argv_2902 ; ) {
			name_ptr = argv_1378 (i, entry_ptr, is_short);

			thumbnail.argv_3466					= entry_ptr->argv_3466;
			thumbnail.argv_3612					= entry_ptr->argv_3612;
			thumbnail.argv_3843							= entry_ptr->argv_3843;
			thumbnail.argv_3961							= entry_ptr->argv_3961;
			// save the original argv_2817
			argv_2299[(argv_820)name_ptr]	= thumbnail;
			bret = argv_1728 ((argv_820) name_ptr, demangled_name, is_string);

#if defined (__DEBUG_COFF_LOADER__)
			argv_1222 ((argv_820) name_ptr, demangled_name.c_str(), is_short, is_string, bret);
#endif // #if defined (__DEBUG_COFF_LOADER__)

			if (bret == true) {
				// save the simple argv_2817 as well (redundancy)
				argv_2299[demangled_name]= thumbnail;
			}

			i++;
			if (entry_ptr->argv_2890 > 0) {
				i += entry_ptr->argv_2890;
			}
		}
	}
	return (argv_1993);
}

argv_3517 argv_809::argv_2198 () {
	argv_3517 argv_1993 = argv_947;
	if (init_done == false) {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_809::argv_2198 - argv_937");
		argv_1993 = argv_937;
	}
	else if (argv_2221 == true) {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_809::argv_2198 - argv_938");
		argv_1993 = argv_938;
	}
	else {
		argv_1993 = argv_2205 ();
		if (argv_1993 == argv_947) {
			argv_1993 = argv_2219 ();		
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_809
// @@
// @@ FUNCTION		:	argv_1221		
// @@
// @@ INPUT			:	
// @@ bool: _verbose_mode: more details are displayed if set to true.
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
void argv_809::argv_1221 (bool _verbose_mode) {
	map<string, argv_1098>::iterator iter_local;	
	argv_1788->argv_2251.argv_2247 (argv_1152, "=== symbols defined in this argv_2810 module ===");
	for (iter_local=argv_2299.begin() ; iter_local != argv_2299.end() ; ++iter_local) {
		iter_local->second.argv_1200 (argv_1788, iter_local->first.c_str(), _verbose_mode);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_809
// @@
// @@ FUNCTION		:	argv_3631		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_820: symbol whose presence must be checked.
// @@
// @@ OUTPUT		:	
// @@
// @@ _iter: map<string, argv_1098>&: iterator containing the 
// @@   argv_1139 concerning the symbol '_symbol_name', to be more precise,
// @@   the first part of the iterator contains the symbol's argv_2817, and
// @@   the second part contains the argv_1139 associated with this symbol.
// @@   Notice that it is undefined if the symbol is not present.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the symbol whose argv_2817 was given as a parameter 
// @@       is present,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given symbol is present
// @@ in the map that associates a symbol's argv_2817 to it's associated argv_1139.
// @@ If symbol is present in map, then an iterator pointing on the
// @@ corresponding entry from the map is returned to the caller via
// @@ the '_iter' parameter.  
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_809::argv_3631 (argv_820 _symbol_name, map<string, argv_1098>::iterator& _iter) {
	bool bret = false;
	_iter = argv_2299.find (_symbol_name);
	if (_iter != argv_2299.end()) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_809
// @@
// @@ FUNCTION		:	argv_3630		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_1098>::iterator: iterator that 
// @@ points to the symbol to check and it's associated argv_1139. 
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if the symbol is local,
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
bool argv_809::argv_3630 (map<string, argv_1098>::iterator& _iter) {
	bool bret = false;
	if (_iter->second.argv_3466 > 0) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_809
// @@
// @@ FUNCTION		:	argv_3629		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_1098>::iterator: iterator that 
// @@ points to the symbol to check and it's associated argv_1139. 
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if symbol is external,
// @@       false otherwise.	
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
bool argv_809::argv_3629 (map<string, argv_1098>::iterator& _iter) {
	bool bret = false;
	if (_iter->second.argv_3466 == 0) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_809
// @@
// @@ FUNCTION		:	argv_2316		
// @@
// @@ INPUT			:
// @@ _section_hdr_ptr: argv_1930 *: pointer on the 
// @@  argv_1907 of the argv_3461 where the symbol is defined (permits
// @@  to retrieve it's content).
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
argv_3517 argv_809::argv_2316 (argv_1930 * _section_hdr_ptr, argv_820 _symbol_name, argv_3862 *& _xmapped_addr) {
	argv_3517 argv_1993              = argv_947;
	void * symbol_ptr      = argv_2889;
	bool found_from_cache  = false;
	char argv_3828[MAX_PATH];

	// create a xmemory argv_753 for this symbol
	argv_3862 * pointer_2_raw_data_real = _section_hdr_ptr->argv_3218 + argv_1417;
	argv_1993 = argv_4003->argv_3350 (_symbol_name, pointer_2_raw_data_real, _section_hdr_ptr->argv_3538, found_from_cache, &symbol_ptr);
	if (argv_1993 != argv_4007) {
		string serror = argv_1319 (argv_1993);
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: xmem argv_753 allocation request failed for symbol '%s' (errno = %s)", _symbol_name, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
		argv_1993 = argv_2925;
	}
	else if (found_from_cache == true) {
		_xmapped_addr = (argv_3862 *) symbol_ptr;
		argv_3548 (argv_3828, MAX_PATH, "symbol '%s' found from xmem argv_784 at argv_635 0x%X", _symbol_name, (argv_3864) _xmapped_addr);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
	}
	else { // argv_753 not found from xmem argv_784
		// now copy the content of the function to xmemory

		argv_3731->argv_2852 (symbol_ptr, (argv_2263) pointer_2_raw_data_real, _section_hdr_ptr->argv_3538);

#if defined (__DEBUG_COFF_LOADER__)
		argv_3548 (argv_3828, MAX_PATH, "symbol '%s' xmapped at argv_635 0x%X (content copied : %u argv_782)", _symbol_name, symbol_ptr, _section_hdr_ptr->argv_3538);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		argv_3731->argv_2839 ();
		_xmapped_addr = (argv_3862 *) symbol_ptr;
		// beware: relocations are not solved at this point
	}

	if (argv_1993 == argv_4007) { // remap error argv_929
		argv_1993 = argv_947;
	}
	return (argv_1993);
}

argv_3517 argv_809::argv_3387 (map<string, argv_1098>::iterator& _iter, argv_820 _root_plugin_name, argv_820 _plugin_name, argv_820 _symbol_name, map<string, argv_809 *>& _msc, argv_3862 *& _resolved_addr, argv_3862 * _father_addr) {
	argv_3517 argv_1993 = argv_947;
	map<string, argv_809 *>::iterator		msc_iter;
	map<string, argv_809 *>::iterator		found_iter;
	map<string, argv_1098>::iterator	thumbnail_iter;
	argv_3864 nb_found = 0;
	char argv_3828[MAX_PATH];

#if defined (__DEBUG_COFF_LOADER__)
	argv_3548 (argv_3828, MAX_PATH, "solving external symbol '%s' (searching from dependancy list containing %u elements)", _symbol_name, _msc.size());
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	// try to locate the module where this external symbol is defined
	for (msc_iter=_msc.begin() ; msc_iter != _msc.end() ; ++msc_iter) {
		if ((msc_iter->second->argv_3631 (_symbol_name, thumbnail_iter) == true) && (msc_iter->second->argv_3630 (thumbnail_iter) == true)) {
			if (nb_found == 0) { // save up the first instance of the symbol found
				found_iter = msc_iter;
			}
			else { // multiple instances found => log this error
				if (nb_found == 1) {
					argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: found multiple instance of symbol '%s' (firts instance found in module '%s')", _symbol_name, found_iter->first.c_str());
					argv_3828[MAX_PATH - 1] = '\0';
					argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
				}
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: symbol '%s' already defined in module '%s'", _symbol_name, msc_iter->first.c_str());
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
				argv_1993 = argv_952;
			}
			nb_found++;
		}
#if defined (__DEBUG_COFF_LOADER__)
		else {
			argv_3548 (argv_3828, MAX_PATH, "symbol '%s' not defined in module '%s'", _symbol_name, msc_iter->first.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
		}
#endif // #if defined (__DEBUG_COFF_LOADER__)
	}

	if (argv_1993 == argv_947) {
		if (nb_found == 0) {
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: undefined symbol '%s'", _symbol_name);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
			argv_1993 = argv_953;
		}
		else if (nb_found == 1) {
#if defined (__DEBUG_COFF_LOADER__)
			argv_3548 (argv_3828, MAX_PATH, "definition of external symbol '%s' found in module '%s'", _symbol_name, found_iter->first.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)
			argv_1993 = found_iter->second->argv_3385 (_plugin_name, found_iter->first.c_str(), _symbol_name, _msc, _resolved_addr, _father_addr);
		}
	}
	return (argv_1993);
}



argv_3517 argv_809::argv_2975 (argv_3864 _reloc_id, argv_820 _symbol_name, argv_1922 * _reloc_ptr, argv_3862 * _local_base_addr, argv_3862 * _reloc_solved_adress) {
	argv_3517 argv_1993 = argv_947;

#if defined (__DEBUG_COFF_LOADER__)
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "patching relocation %u of symbol '%s' (father argv_753 located at 0x%X)", _reloc_id, _symbol_name, _local_base_addr);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	// ensure that the symbol argv_3842 is coherent
	argv_3864 argv_3842 = _reloc_ptr->argv_3843;
	if ((argv_3842 != argv_1929) && (argv_3842 != argv_1927) && (argv_3842 != argv_1928)) {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: while patching relocation - unknown argv_1139 argv_3842 : ", argv_3842);
		argv_1993 = argv_951;
	}
	else if (argv_3842 == argv_1928) {
		argv_1788->argv_2251.argv_2247 (argv_1321, "+++ ERROR: while patching relocation - relocation argv_3842 not supported : ", argv_3842);
		argv_1993 = argv_945;
	}
	else { // relocation argv_3842 is valid and can be handled.
		argv_729 atyp, atyp_2;
		argv_3862 * to_addr = (argv_3862 *) _local_base_addr + _reloc_ptr->argv_3978;
#if defined (__DEBUG_COFF_LOADER__)
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "must patch adress : 0x%X", to_addr);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)

		if (argv_3842 == argv_1929) {
			// compute delta between the argv_1139 to patch and it's location in xmem
			atyp.argv_725 = (argv_3864) _reloc_solved_adress - (argv_3864) (to_addr + argv_1710);
#if defined (__DEBUG_COFF_LOADER__)
			if (atyp.argv_725 > 0) {
				argv_3548 (argv_3828, MAX_PATH, "relocation is relative to father argv_753 : delta = +%d", atyp.argv_725);
			}
			else {
				argv_3548 (argv_3828, MAX_PATH, "relocation is relative to father argv_753 : delta = %d", atyp.argv_725);
			}
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		}
		else if (argv_3842 == argv_1927) {
			// just use the (argv_3416 + block_start) to patch
			atyp.argv_732 = (argv_3864) _reloc_solved_adress;
#if defined (__DEBUG_COFF_LOADER__)
			argv_3548 (argv_3828, MAX_PATH, "relocation is direct : 0x%X", atyp.argv_732);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		}

		argv_3862 * from_addr  = &atyp.argv_726[0];
		// we must consider the argv_1106 argv_3960, and argv_616 it to the argv_3960 we computed.
		// read the argv_1139 contained at the destination argv_635
		memcpy (&atyp_2.argv_726[0], to_addr, argv_1710);
		// argv_616 the retrieved argv_1139 to the argv_635 to patch
		atyp.argv_732 = atyp_2.argv_732 + atyp.argv_732;
		// perform the actual patch (notice that we always patch an argv_635, nothing else => 4 argv_782)
		memcpy (to_addr, from_addr, argv_1710);
	}
	return (argv_1993);
}



argv_3517 argv_809::argv_3386 (map<string, argv_1098>::iterator& _iter, argv_1930 * _section_hdr_ptr, argv_820 _root_plugin_name, argv_820 _plugin_name, argv_820 _symbol_name, map<string, argv_809 *>& _msc, argv_3862 *& _symb_resolved_addr, argv_3862 * _father_addr) {
	argv_3517 argv_1993 = argv_947;
	char argv_3828[MAX_PATH];
	argv_1922 * reloc_ptr				= argv_2889;
	argv_3862 *                  reloc_ptr_UI08			= argv_2889;
	argv_3634 *	entry_ptr				= argv_2889;
	argv_3862 *					name_ptr				= argv_2889;
	argv_3862 *					reloc_solved_address	= argv_2889;
	argv_3864					itmp, itmp1;
	bool					is_short;

#if defined (__DEBUG_COFF_LOADER__)
	argv_3548 (argv_3828, MAX_PATH, "resolving relocations for symbol '%s' (number of relocations : %u)", _symbol_name, _section_hdr_ptr->argv_2898);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	for (argv_3864 i=0 ; i<_section_hdr_ptr->argv_2898 ; i++) {
		// goto this relocation
		itmp  = (argv_3864) _section_hdr_ptr->argv_3219;
		itmp1 = (argv_3864) argv_1417;
		itmp = itmp + itmp1;
		itmp = itmp + (i * argv_1923);
		reloc_ptr = (argv_1922 *) itmp;
		reloc_ptr_UI08 = (argv_3862 *) reloc_ptr;
/*
#if defined (__DEBUG_COFF_LOADER__)
		argv_3548 (argv_3828, MAX_PATH, "argv_3219=0x%X, argv_1417=0x%X, argv_635 of the reloc %u = 0x%X", _section_hdr_ptr->argv_3219, argv_1417, i, reloc_ptr);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)
*/
		if ((reloc_ptr_UI08 + argv_1923) >= argv_1313) {
			argv_1993 = argv_944;
			break;
		}
		else { // argv_1371 the symbol argv_2817 associated with this relocation 
			name_ptr = argv_1378 (reloc_ptr->argv_3643, entry_ptr, is_short);
#if defined (__DEBUG_COFF_LOADER__)
			if (is_short == true) {
				argv_3548 (argv_3828, MAX_PATH, "symbol argv_2817 of the relocation %u : '%s' (short argv_2817)", i, (argv_820) name_ptr);
			}
			else {
				argv_3548 (argv_3828, MAX_PATH, "symbol argv_2817 of the relocation %u : '%s' (long argv_2817)", i, (argv_820) name_ptr);
			}
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)

			// argv_3385 this relocation
			argv_1993 = argv_3385 (_root_plugin_name, _plugin_name, (argv_820) name_ptr, _msc, reloc_solved_address, _symb_resolved_addr);
			if (argv_1993 != argv_947) {
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : failed while resolving relocation '%s' for symbol '%s'", name_ptr, _symbol_name);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
				break;
			}
			else { // patch this relocation using the resolved argv_635
				argv_1993 = argv_2975 (i, _symbol_name, reloc_ptr, _symb_resolved_addr, reloc_solved_address);
				if (argv_1993 != argv_947) {
					argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : failed while patching relocation '%s' for symbol '%s'", name_ptr, _symbol_name);
					argv_3828[MAX_PATH - 1] = '\0';
					argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
					break;
				}
			}
		}	
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_809
// @@
// @@ FUNCTION		:	argv_3389		
// @@
// @@ INPUT			:
// @@ _section_hdr_ptr : argv_1930 *: pointer on the
// @@  the argv_1907 of the argv_3461 where the symbol is defined.
// @@  (it's content actually).
// @@
// @@ _root_plugin_name: argv_820: argv_2817 of the argv_1106 root plugin.
// @@
// @@ _plugin_name: argv_820: argv_2817 of the argv_1106 plugin.
// @@
// @@ _symbol_name: argv_820: argv_2817 of the symbol to argv_3385.
// @@
// @@ _iter: map<string, argv_1098>::iterator&: 
// @@  iterator that associates the argv_1106 symbol's argv_2817
// @@  with it's argv_1139. these argv_1139 have been collected during
// @@  the COFF loading process.
// @@
// @@ _msc: map<string, argv_809 *>& : the map containing the 
// @@   dependancy list for the argv_1106 coff loader.
// @@
// @2 _father_addr: argv_3862 *: argv_635 of the father argv_753.
// @@   it may be argv_2889 if we are at the root of the memory tree.
// @@   This father argv_635 is especially necessary if the symbol
// @@   to argv_3385 is a label, because in that case we have to
// @@   argv_3385 the symbol using it's father's argv_753 argv_3601 argv_635.
// @@
// @@ OUTPUT		:	
// @@ _resolved_symbol_addr: argv_3862 *& : this parameter contains the 
// @@ argv_3402 of the resolution. In other words it contains the argv_635 of 
// @@ the resolved symbol.
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
argv_3517 argv_809::argv_3389 (map<string, argv_1098>::iterator& _iter, argv_1930 * _section_hdr_ptr, argv_820 _root_plugin_name, argv_820 _plugin_name, argv_820 _symbol_name, map<string, argv_809 *>& _msc, argv_3862 *& _resolved_symbol_addr, argv_3862 * _father_addr) {
	argv_3517 argv_1993 = argv_947;
	char argv_3828[MAX_PATH];
	// if symbol is a label, then it's location is within it's father argv_753's argv_635 space
	if (_iter->second.argv_3612 == argv_1933) {
		_resolved_symbol_addr = _father_addr + _iter->second.argv_3961;
#if defined (__DEBUG_COFF_LOADER__)
		argv_3548 (argv_3828, MAX_PATH, "symbol '%s' is a label => it's location in father argv_753 (at offset 0x%X + father_addr: 0x%X = 0x%X)", _symbol_name, _iter->second.argv_3961, _father_addr, _resolved_symbol_addr);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)
/*
		// the labels are supposed to have no relocations (just ensure that)
		if (_section_hdr_ptr->argv_2898 != 0) { 
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: symbol '%s' is a label but it has %d relocations (expected zero relocation) !", _symbol_name, _section_hdr_ptr->argv_2898);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
			argv_1993 = argv_942;
		}*/
	}
	else { // the symbol is an actual symbol, not a label.
		// xmap the symbol as it is defined internally
		argv_1993 = argv_2316 (_section_hdr_ptr, _symbol_name, _resolved_symbol_addr);
		if (argv_1993 != argv_947) {
			string serror = argv_1319 (argv_1993);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : 'argv_3388' failed while looking for symbol '%s' - argv_2316 failed - %s", _symbol_name, serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
		}
		else { // symbol succesfully xmapped to memory
			// argv_3385 and patch all relocations for this symbol
			argv_1993 = argv_3386 (_iter, _section_hdr_ptr, _root_plugin_name, _plugin_name, _symbol_name, _msc, _resolved_symbol_addr, _father_addr);
		} 
	}
	return (argv_1993);
}

argv_3517 argv_809::argv_3388 (map<string, argv_1098>::iterator& _iter, argv_820 _root_plugin_name, argv_820 _plugin_name, argv_820 _symbol_name, map<string, argv_809 *>& _msc, argv_3862 *& _addr, argv_3862 * _father_addr) {
	argv_3517 argv_1993 = argv_947;
	char argv_3828[MAX_PATH];
	// check whether this symbol was already xmapped or not.
	// BEWARE: argv_3461 are numbered from 1 to n
	argv_3864 itmp = (argv_3864) argv_3462 + (sizeof(argv_1930) * (_iter->second.argv_3466-1));
	argv_1930 * section_hdr_ptr = (argv_1930 *) itmp;
	argv_3864 real_PointerToRawData = section_hdr_ptr->argv_3218 + (argv_3864) argv_1417;
	argv_3864 unused_size;
	bool presence_flag = false;
	// ensure that this symbol was not already allocated to xmem
#if defined (__DEBUG_COFF_LOADER__)
	argv_3548 (argv_3828, MAX_PATH, "argv_3385 local symbol: '%s' located at index %u in symbol table, real_PointerToRawData=0x%X, argv_3538=0x%X", _symbol_name, _iter->second.argv_3466, real_PointerToRawData, section_hdr_ptr->argv_3538);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)
	
	argv_1993 = argv_4003->argv_3625 (_symbol_name, (argv_3862 *) real_PointerToRawData, section_hdr_ptr->argv_3538, presence_flag, _addr, unused_size);
	if (argv_1993 != argv_4007) {
		string serror = argv_1319 (argv_1993);
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3624 failed while processing symbol '%s' (errno=%s)", _symbol_name, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
	}
	else { // this local symbol was not allocated yet to xmem
		argv_1993 = argv_947;
		if (presence_flag == true) {
#if defined (__DEBUG_COFF_LOADER__)
			argv_3548 (argv_3828, MAX_PATH, "local symbol '%s' already xmapped at argv_635 0x%X", _symbol_name, _addr);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		}
		else {
#if defined (__DEBUG_COFF_LOADER__)
			argv_1788->argv_2251.argv_2247 (argv_1152, "symbol was not xmapped yet");
#endif // #if defined (__DEBUG_COFF_LOADER__)
			argv_1993 = argv_3389 (_iter, section_hdr_ptr, _root_plugin_name, _plugin_name, _symbol_name, _msc, _addr, _father_addr);
		}
	}
	return (argv_1993);
}

void argv_809::argv_1219 (argv_3862 * _ptr, argv_820 _name, argv_820 _comment="") {
	char argv_3828[MAX_PATH];
	if (_ptr == argv_2889) { 
		argv_3548 (argv_3828, MAX_PATH, "%s = <argv_2889> %s", _name, _comment);
	}
	else {
		argv_3548 (argv_3828, MAX_PATH, "%s = 0x%X %s", _name, _ptr, _comment);
	}
	argv_3828[MAX_PATH - 1] = '\0';	
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
}

void argv_809::argv_1218 () {
	argv_1788->argv_2251.argv_2247 (argv_1152, "==== internal content of the coff loader ====");
	argv_1219 (argv_1417,			"argv_1417", "(argv_635 of the mmapped COFF argv_1396)");
	argv_1219 (argv_3462,		"argv_3462");
	argv_1219 (argv_3464,			"argv_3464");
	argv_1219 (argv_3616,			"argv_3616");
	argv_1219 (argv_3633,			"argv_3633");
	argv_1219 (argv_1313,				"argv_1313");
	argv_1788->argv_2251.argv_2247 (argv_1152, "==========================================");
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_809
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
// @@ _msc: map<string, argv_809 *>& : the map containing the 
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
// @@ - the COFF argv_1396 associated with the argv_1106 argv_809 argv_2908
// @@   must have been argv_2221 succesfully prior to this call.
// @@ - '_symbol_name' parameter must not be a argv_2889 pointer.
// @@ - '_symbol_name' parameter must not be an empty string.
// @@ - the symbol whose argv_2817 is contained in the '_symbol_name'
// @@   variable must be present in the COFF argv_1396 associated with 
// @@   the argv_1106 argv_809 argv_2908.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_809::argv_3385 (argv_820 _root_plugin_name, argv_820 _plugin_name, argv_820 _symbol_name, map<string, argv_809 *>& _msc, argv_3862 *& _addr, argv_3862 * _father_addr) {
	char argv_3828[MAX_PATH];
#if defined (__DEBUG_COFF_LOADER__)
	argv_3548 (argv_3828, MAX_PATH, "resolving symbol '%s' of plugin '%s' (root_plugin=%s)", _symbol_name, _plugin_name, _root_plugin_name);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_1788->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	argv_3517 argv_1993 = argv_947;
	if (init_done == false) {
		argv_1993 = argv_937;
	}
	else if (argv_2221 == false) {
		argv_1993 = argv_935;
	}
	else if ((_symbol_name == argv_2889) || (strlen(_symbol_name) == 0)) {
		argv_1993 = argv_940;
	}
	else { // parameters are correct
		// notice that even if symbol is external it should be present
		map<string, argv_1098>::iterator iter_local;
		if (argv_3631 (_symbol_name, iter_local) == false) {
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : symbol '%s' not found in module '%s' (root_plugin was '%s')", _symbol_name, _plugin_name, _root_plugin_name);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
			argv_1993 = argv_943;	
		}
		else { // symbol is present, it can be either external, internal, or none of them
			if (argv_3630 (iter_local) == true) { 
#if defined (__DEBUG_COFF_LOADER__)
				argv_1788->argv_2251.argv_2247 (argv_1152, "symbol is present in module (symbol is local)");
#endif // #if defined (__DEBUG_COFF_LOADER__)
				argv_1993 = argv_3388 (iter_local, _root_plugin_name, _plugin_name, _symbol_name, _msc, _addr, _father_addr);
			}
			else if (argv_3629 (iter_local) == true) {
#if defined (__DEBUG_COFF_LOADER__)
				argv_1788->argv_2251.argv_2247 (argv_1152, "symbol is present in module (symbol is external)");
#endif // #if defined (__DEBUG_COFF_LOADER__)
				argv_1993 = argv_3387 (iter_local, _root_plugin_name, _plugin_name, _symbol_name, _msc, _addr, _father_addr);
			}
			else { // symbol is neither local, nor external (must not try to argv_3385 it)
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_3385 : symbol '%s' is neither internal, nor external !", _symbol_name);
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
				argv_1993 = argv_946;
			}
		}
	}

	if (argv_1993 != argv_947) {
		string serror = argv_1319 (argv_1993);
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: could not argv_3385 symbol '%s' of plugin '%s' (root_plugin=%s) - errno = %s", _symbol_name, _plugin_name, _root_plugin_name, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1788->argv_2251.argv_2247 (argv_1321, argv_3828);
	}
	return (argv_1993);
}