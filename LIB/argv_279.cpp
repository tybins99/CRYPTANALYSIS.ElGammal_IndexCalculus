// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: complex_list.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the declaration of the
// @@ functions related to the complex list argv_2908.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_346.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1124		
// @@
// @@ FUNCTION		:	argv_1124	
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
// @@ Normal constructor of the 'argv_1124' argv_2908.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1124::argv_1124 () {
	reset ();
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1124		
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
// @@ This function brings the 'argv_1124' argv_2908 to
// @@ it's original argv_3604.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1124::reset () {
	// free all allocated horizontal lists
	for (argv_2273=argv_2283.begin() ; argv_2273 != argv_2283.end() ; ++argv_2273) {	 
		delete argv_2273->second;
	}
	argv_2283.clear ();
	argv_2273		= argv_2283.end();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1124		
// @@
// @@ FUNCTION		:	argv_1765	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _nb_elem: argv_3864&: the size of the vertical list. 
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_1014 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the number of symbols
// @@ contained in the argv_1124 argv_2908.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1124::argv_1765 (argv_3864& _nb_elem) {
	argv_3517 argv_1993 = argv_1014;
	_nb_elem = argv_2283.size ();
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1124		
// @@
// @@ FUNCTION		:	argv_2228	
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_820: the argv_2817 of the symbol to argv_2253.
// @@
// @@ OUTPUT		:
// @@ _cell_ptr: argv_2263&: the argv_635 of the cell corresponding to
// @@   the parameter '_symbol_name' if found.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_1014 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 the cell associated with the
// @@ symbol whose argv_2817 is given as the '_symbol_name' parameter.
// @@
// @@ It is unsafe because it does not check for parameters validity.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1124::argv_2228 (argv_820 _symbol_name, argv_2263& _cell_ptr) {
	argv_3517 argv_1993 = argv_1014;
	argv_2273 = argv_2283.find (_symbol_name);
	if (argv_2273 == argv_2283.end()) {
		argv_1993 = argv_1013;
	}
	else { // symbol was found from map => save it's corresponding iterator.
		_cell_ptr = (argv_2263&) argv_2273;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1124		
// @@
// @@ FUNCTION		:	argv_1764	
// @@
// @@ INPUT			:
// @@ _symbol: argv_820: the argv_2817 of the symbol whose number of 
// @@   resolution is to be found.
// @@
// @@ OUTPUT		:
// @@ _size: argv_3864&: the number of solved symbols for the symbol
// @@ whose argv_2817 is given as the '_symbol' parameter.	
// @@
// @@ IO			:	
// @@ _prev_iter: if a argv_2253 already succeeded before, the caller
// @@   may provide this parameter in order to avoid argv_2253, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517: argv_1014 if operation was succesful,
// @@       another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the number of instances
// @@ of the symbol '_symbol' that were solved.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1124::argv_1764 (argv_820 _symbol, argv_2263& _prev_iter, argv_3864& _size) {
	argv_3517 argv_1993 = argv_1014;
	if (_symbol==argv_2889) {
		argv_1993 = argv_1011;
	}
	else { // if an iterator is given, then use it, otherwise perform a argv_2253
		if (_prev_iter == argv_2889) {
			argv_1993 = argv_2228 (_symbol, _prev_iter);
		}

		if (argv_1993 == argv_1014) {
			argv_3841 * iter_ptr = (argv_3841 *)  &_prev_iter;
			argv_2273 = (*iter_ptr);
			_size = argv_2273->second->argv_1779 ();
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1124		
// @@
// @@ FUNCTION		:	argv_1752	
// @@
// @@ INPUT			:
// @@ _symbol: argv_820: the argv_2817 of the symbol whose first instance
// @@   is to be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2263 *: the argv_635 of the first
// @@   resolved instance of the symbol whose argv_2817 is given as
// @@   the '_symbol' parameter.	
// @@
// @@ IO			:	
// @@ _prev_iter: if a argv_2253 already succeeded before, the caller
// @@   may provide this parameter in order to avoid argv_2253, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517: argv_1014 if operation was succesful,
// @@       another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the first instance
// @@ of the symbol whose argv_2817 is given as the '_symbol'
// @@ parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1124::argv_1752 (argv_820 _symbol, argv_2263& _prev_iter, argv_2263 * _extracted_resolved) {
	argv_3517 argv_1993 = argv_1014;

	if (_prev_iter == argv_2889) {
		argv_1993 = argv_2228 (_symbol, _prev_iter);
	}
	
	if (argv_1993 == argv_1014) {
		argv_3841 * iter_ptr = (argv_3841 *)  &_prev_iter;
		argv_2273 = (*iter_ptr);
		argv_1993 = argv_2273->second->argv_1748 (_extracted_resolved);
	}

	// remap error codes
	if (argv_1993 == argv_2187) {
		argv_1993 = argv_1008;
	}
	if (argv_1993 == argv_2196) {
		argv_1993 = argv_1014;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1124		
// @@
// @@ FUNCTION		:	argv_1771	
// @@
// @@ INPUT			:
// @@ _symbol: argv_820: the argv_2817 of the symbol whose first instance
// @@   is to be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2263 *: the argv_635 of the next
// @@   resolved instance of the symbol whose argv_2817 is given as
// @@   the '_symbol' parameter.	
// @@
// @@ IO			:	
// @@ _prev_iter: if a argv_2253 already succeeded before, the caller
// @@   may provide this parameter in order to avoid argv_2253, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517: argv_1014 if operation was succesful,
// @@       another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the next instance
// @@ of the symbol whose argv_2817 is given as the '_symbol'
// @@ parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1124::argv_1771 (argv_820 _symbol, argv_2263& _prev_iter, argv_2263 * _extracted_resolved) {
	argv_3517 argv_1993 = argv_1014;

	if (_prev_iter == argv_2889) {
		argv_1993 = argv_2228 (_symbol, _prev_iter);
	}
	
	if (argv_1993 == argv_1014) {
		argv_3841 * iter_ptr = (argv_3841 *)  &_prev_iter;
		argv_2273 = (*iter_ptr);
		argv_1993 = argv_2273->second->argv_1766 (_extracted_resolved);
	}

	// remap error codes
	if (argv_1993 == argv_2187) {
		argv_1993 = argv_1008;
	}
	if (argv_1993 == argv_2196) {
		argv_1993 = argv_1014;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1124		
// @@
// @@ FUNCTION		:	argv_630	
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_820: argv_2817 of the symbol to argv_616.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517: argv_1014 if operation was succesful,
// @@       another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_616 a new symbol to the
// @@ vertical list. Notice that after insertion, there
// @@ is no instance of this symbol yet.
// @@
// @@ CONTRACT		:	
// @@ - '_symbol_name' parameter must not be a argv_2889 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1124::argv_630 (argv_820 _symbol_name) {
	argv_3517 argv_1993 = argv_1014;
	if (_symbol_name==argv_2889) {
		argv_1993 = argv_1011;		
	}
	else { // parameters are OK
		argv_2263 cell_ptr_tmp = argv_2889;
		argv_1993 = argv_2228 (_symbol_name, cell_ptr_tmp);

		if (argv_1993 == argv_1014) { 
			argv_1993 = argv_1007;
		}
		else if (argv_1993 == argv_1013) {
			argv_1993 = argv_1014;
			argv_878 * hlist_ptr = new (std::nothrow) argv_878;
			argv_2283[_symbol_name] = hlist_ptr;
		}
	}

	argv_2273 = argv_2283.find (_symbol_name);
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1124		
// @@
// @@ FUNCTION		:	argv_629	
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_820: argv_2817 of the symbol whose instance is to
// @@   be added.
// @@
// @@ _resolved_symbol: argv_2263: the argv_635 of the instance of the
// @@   symbol to be added.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	
// @@ _prev_iter: if a argv_2253 already succeeded before, the caller
// @@   may provide this parameter in order to avoid argv_2253, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517: argv_1014 if operation was succesful,
// @@       another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_616 an instance of the symbol 
// @@ whose argv_2817 is given as the '_symbol_name' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1124::argv_629 (argv_2263& _prev_iter, argv_820 _symbol_name, argv_2263 _resolved_symbol) {
	argv_3517 argv_1993 = argv_1014;
	if (_symbol_name==argv_2889) {
		argv_1993 = argv_1011;
	}
	else { // parameters are OK
		// if user gave a valid iterator, then use it
		if (_prev_iter == argv_2889) {
			argv_1993 = argv_2228 (_symbol_name, _prev_iter);
		}

		if (argv_1993 == argv_1014) { // if entry was found
			// insert this resolved symbol
			argv_3841 * iter_ptr = (argv_3841 *)  &_prev_iter;
			argv_2273 = (*iter_ptr);
			argv_1993 = argv_2273->second->argv_616 (_resolved_symbol, true);
		}
	}
	
	// remap error codes
	if (argv_1993 == argv_2196) {
		argv_1993 = argv_1014;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_813		
// @@
// @@ FUNCTION		:	argv_813	
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
// @@ Normal constructor of the 'argv_813' argv_2908.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_813::argv_813 () {
	argv_2277 = argv_2889;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_813		
// @@
// @@ FUNCTION		:	init	
// @@
// @@ INPUT			:
// @@ _size: argv_3864: the number of vertical lists to argv_3237.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_1014 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 the argv_813 argv_2908
// @@ prior to first use by giving the size of the vertical list.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_813::init (argv_3864 _size) {
	argv_3517 argv_1993 = argv_1014;
	if (_size == 0) {
		argv_1993 = argv_1011;
	}
	else { // parameters are OK
		// allocate the array of vertical list
		argv_2277 = new (std::nothrow) argv_1124[argv_3174];
		if (argv_2277 == argv_2889) {
			argv_1993 = argv_1012;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_813		
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
// @@ This function permits to reset the argv_813 argv_2908
// @@ to it's initial argv_3604.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_813::reset () {
	if (argv_2277 != argv_2889) {
		// free all boxes
		for (argv_3864 i=0 ; i<argv_3174 ; i++) {
			argv_2277[i].reset ();	
		}

		// free the array of vertical lists
		delete [] argv_2277;
		argv_2277 =  argv_2889;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_813		
// @@
// @@ FUNCTION		:	argv_2228	
// @@
// @@ INPUT			:
// @@ argv_3864: _plugin_type: the argv_3842 of plugin for which the symbol
// @@   is to be retrieved.
// @@
// @@ _symbol_name: argv_820: argv_2817 of the symbol whose location is to
// @@   be determined.
// @@
// @@ OUTPUT		:
// @@ _cell_ptr: argv_2263&: the argv_635 of the symbol '_symbol_name' 
// @@ of the plugin	'_plugin_type' 
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517: argv_1014 if operation was succesful,
// @@       another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to find the location (the argv_635) of
// @@ the symbol '_symbol_name' of the plugin '_plugin_type' in
// @@ the complex list.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_813::argv_2228 (argv_3864 _plugin_type, argv_820 _symbol_name, argv_2263& _cell_ptr) {
	argv_3517 argv_1993 = argv_1014;
	if (argv_2277 == argv_2889) {
		argv_1993 = argv_1010;
	}
	else if (_plugin_type >= argv_3174) {
		argv_1993 = argv_1011;	
	}
	else { // parameters are OK
		argv_1993 = argv_2277[_plugin_type].argv_2228 (_symbol_name, _cell_ptr);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_813		
// @@
// @@ FUNCTION		:	argv_1765	
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3864: the argv_3842 of plugin whose number of symbol
// @@   is to be determined.
// @@
// @@ OUTPUT		:
// @@ _nb_elem: argv_3864&: the retrieved number of symbols for this
// @@   plugin argv_3842.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_1014 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the number of symbols
// @@ associated with the plugin whose argv_3842 is given as the
// @@ '_plugin_type' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_813::argv_1765 (argv_3864 _plugin_type, argv_3864& _nb_elem) {
	argv_3517 argv_1993 = argv_1014;
	if (argv_2277 == argv_2889) {
		argv_1993 = argv_1010;
	}
	else if (_plugin_type >= argv_3174) {
		argv_1993 = argv_1011;	
	}
	else { // parameters are OK
		argv_1993 = argv_2277[_plugin_type].argv_1765 (_nb_elem);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_813		
// @@
// @@ FUNCTION		:	argv_1764			
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3864: the plugin argv_3842 concerned.
// @@
// @@ _symbol: argv_820: the symbol whose number of resolution is to
// @@    be retrieved.
// @@
// @@ OUTPUT		:
// @@ _size: argv_3864&: the number of instances for the symbol 
// @@   corresponding to the plugin argv_3842 '_plugin_type' whose
// @@   argv_2817 is given as the '_symbol' parameter.
// @@
// @@ IO			:	
// @@ _cell_ptr: argv_2263&: the argv_635 of this symbol's cell if
// @@   a previous call was performed (argv_784).	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_1014 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the number of resolved
// @@ instances of the symbol of the plugin argv_3842 '_plugin_type'
// @@ whose argv_2817 is given as the '_symbol' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_813::argv_1764 (argv_3864 _plugin_type, argv_820 _symbol, argv_2263& _cell_ptr, argv_3864& _size) {
	argv_3517 argv_1993 = argv_1014;
	if (argv_2277 == argv_2889) {
		argv_1993 = argv_1010;
	}
	else if (_plugin_type >= argv_3174) {
		argv_1993 = argv_1011;	
	}
	else { // parameters are OK
		argv_1993 = argv_2277[_plugin_type].argv_1764 (_symbol, _cell_ptr, _size);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_813		
// @@
// @@ FUNCTION		:	argv_1752		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3864: the plugin argv_3842 concerned.
// @@
// @@ _symbol: argv_820: the symbol whose resolved instance is to
// @@   be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2263 *: argv_635 of the first resolved
// @@   symbol for the plugin whose argv_3842 is _plugin_type, and whose
// @@   argv_2817 is _symbol.
// @@
// @@ IO			:	
// @@ _cell_ptr: argv_2263&: may be furnished by the caller to
// @@    boost performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_1014 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the argv_635 of the first
// @@ instance of the symbol _symbol of the plugin _plugin_type.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_813::argv_1752 (argv_3864 _plugin_type, argv_820 _symbol, argv_2263& _cell_ptr, argv_2263 * _extracted_resolved) {
	argv_3517 argv_1993 = argv_1014;
	if (argv_2277 == argv_2889) {
		argv_1993 = argv_1010;
	}
	else if (_plugin_type >= argv_3174) {
		argv_1993 = argv_1011;	
	}
	else { // parameters are OK
		argv_1993 = argv_2277[_plugin_type].argv_1752 (_symbol, _cell_ptr, _extracted_resolved);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_813		
// @@
// @@ FUNCTION		:	argv_1771		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3864: the plugin argv_3842 concerned.
// @@
// @@ _symbol: argv_820: the symbol whose resolved instance is to
// @@   be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2263 *: argv_635 of the next resolved
// @@   symbol for the plugin whose argv_3842 is _plugin_type, and whose
// @@   argv_2817 is _symbol.
// @@
// @@ IO			:	
// @@ _cell_ptr: argv_2263&: may be furnished by the caller to
// @@    boost performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_1014 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the argv_635 of the next
// @@ instance of the symbol _symbol of the plugin _plugin_type.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_813::argv_1771 (argv_3864 _plugin_type, argv_820 _symbol, argv_2263& _cell_ptr, argv_2263 * _extracted_resolved) {
	argv_3517 argv_1993 = argv_1014;
	if (argv_2277 == argv_2889) {
		argv_1993 = argv_1010;
	}
	else if (_plugin_type >= argv_3174) {
		argv_1993 = argv_1011;	
	}
	else { // parameters are OK
		argv_1993 = argv_2277[_plugin_type].argv_1771 (_symbol, _cell_ptr, _extracted_resolved);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_813		
// @@
// @@ FUNCTION		:	argv_630		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3864: the plugin argv_3842 concerned.
// @@
// @@ _symbol_name: argv_820: argv_2817 of the symbol to argv_616.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_1014 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_616 a new symbol associated with
// @@ the plugin whose argv_3842 is given by the '_plugin_type' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_813::argv_630 (argv_3864 _plugin_type, argv_820 _symbol_name) {
	argv_3517 argv_1993 = argv_1014;
	if (argv_2277 == argv_2889) {
		argv_1993 = argv_1010;
	}
	else if (_plugin_type >= argv_3174) {
		argv_1993 = argv_1011;	
	}
	else { // parameters are OK
		argv_1993 = argv_2277[_plugin_type].argv_630 (_symbol_name);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_813		
// @@
// @@ FUNCTION		:	argv_629		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3864: the plugin argv_3842 concerned.
// @@
// @@ _symbol_name: argv_820: argv_2817 of the symbol whose solved
// @@   instance is to be added.
// @@
// @@ OUTPUT		:
// @@
// @@ IO			:	
// @@ _prev_iter: argv_2263&: the argv_784 iterator to provide if 
// @@    performance is to be improved.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3517 : argv_1014 if operation was succesful,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_616 the instance of the symbol
// @@ whose argv_2817 is given as the '_symbol_name' parameter, 
// @@ pertaining to the plugin argv_3842 '_plugin_type', the instance
// @@ argv_635 being given by the '_resolved_symbol' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_813::argv_629 (argv_2263& _prev_iter, argv_3864 _plugin_type, argv_820 _symbol_name, argv_2263 _resolved_symbol) {
	argv_3517 argv_1993 = argv_1014;
	if (argv_2277 == argv_2889) {
		argv_1993 = argv_1010;
	}
	else if (_plugin_type >= argv_3174) {
		argv_1993 = argv_1011;	
	}
	else { // parameters are OK
		argv_1993 = argv_2277[_plugin_type].argv_629 (_prev_iter, _symbol_name, _resolved_symbol);
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
