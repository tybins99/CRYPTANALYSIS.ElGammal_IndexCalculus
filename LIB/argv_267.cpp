#include "../LIB/argv_334.hpp"

void argv_1080::set (argv_3864 _type, argv_3864 _target, argv_820 _symbol_name, argv_2263 _symbol_addr) {
	argv_3842			= _type;
	argv_3736		= _target;
	argv_3632		= _symbol_name;
	argv_3623	= _symbol_addr;
}

// --------------------------------
argv_1079::argv_1079 () {
	reset ();
}

void argv_1079::reset () {
	argv_2295			= 0;	
	argv_2270		= false;
	argv_2300.clear ();
	argv_2268			= argv_2300.begin ();
}

void argv_1079::init (argv_3864 _plugin_type, bool _duplicate_allowed) {
	argv_2295			= _plugin_type;
	argv_2270		= _duplicate_allowed;
}

bool argv_1079::argv_631 (argv_820 _symbol) {
	bool bret = true;
	map<string, bool>::iterator argv_2020;
	argv_2020 = argv_2300.find (_symbol);
	if (argv_2020 != argv_2300.end()) {
		bret = false;
	}
	else {
		argv_2300[_symbol] = true;	
	}
	return (bret);
}	

void argv_1079::argv_1780 (argv_3864& _plugin_type, bool& _duplicate_allowed) {
	_plugin_type			= argv_2295;
	_duplicate_allowed		= argv_2270;
}	

bool argv_1079::argv_1753 (string& _symbol) {
	bool bret = true;
	argv_2268 = argv_2300.begin ();
	if (argv_2268 == argv_2300.end()) {
		bret = false;
	}
	else {
		_symbol = argv_2268->first;
	}
	return (bret);
}

bool argv_1079::argv_1772 (string& _symbol) {
	bool bret = true;
	++argv_2268;
	if (argv_2268 == argv_2300.end()) {
		bret = false;
	}
	else {
		_symbol = argv_2268->first;
	}
	return (bret);
}
//-------------------------------------
argv_1081::argv_1081 () {
	reset ();
}

void argv_1081::reset () {
	argv_2285.clear ();
	argv_2284.clear ();
	argv_2275			= argv_2284.end ();
}

// in this case, the target argv_3842 is not relevant, and we only use the argv_3842
// to differenciate.
argv_3517 argv_1081::argv_628 (argv_839 * _glob_data_ptr, argv_3864 _type, argv_3864 _target, argv_820 _symbol_name, argv_2263 _symbol_addr) {
	argv_3517 argv_1993 = argv_3400;
	// create a new entry
	argv_1080 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	map<argv_3864, map<string, argv_1080> >::iterator iter_local_out;
	iter_local_out = argv_2285.find (_type); // indexed by argv_3842
	if (iter_local_out == argv_2285.end()) { // this plugin argv_3842 has no symbol yet
		map<string, argv_1080> local_map;
		local_map[_symbol_name] = entry;
		argv_2285[_type] = local_map;
	}
	else { // this plugin argv_3842 has already some symbols defined
		map<string, argv_1080>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in != iter_local_out->second.end()) { // duplicate found
			argv_1993 = argv_3394;
		}
		else { // ok to argv_616 this symbol for this argv_3842
			iter_local_out->second[_symbol_name] = entry;
		}
	}
	return (argv_1993);
}

argv_3517 argv_1081::argv_627 (argv_839 * _glob_data_ptr, argv_3864 _type, argv_3864 _target, argv_820 _symbol_name, argv_2263 _symbol_addr) {
	argv_3517 argv_1993 = argv_3400;
#if defined (DEBUG_KERNEL)
	char argv_3828[MAX_PATH];
#endif // #if defined (DEBUG_KERNEL)
	// create a new entry
	argv_1080 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	map<argv_3864, map<string, argv_1080> >::iterator iter_local_out;
	iter_local_out = argv_2284.find (_target); // indexed by target
	if (iter_local_out == argv_2284.end()) { // this target argv_3842 has no symbol yet
#if defined (DEBUG_KERNEL)
		argv_3548 (argv_3828, MAX_PATH, "[new_target] argv_627: argv_3632:%s, argv_3842:%d, argv_3736:%d, argv_3623=0x%X", _symbol_name, _type, _target, _symbol_addr);
		argv_3828[MAX_PATH - 1] = '\0';
		_glob_data_ptr->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_KERNEL)

		map<string, argv_1080> local_map;
		local_map[_symbol_name] = entry;
		argv_2284[_target] = local_map;
	}
	else { // this target argv_3842 has already some symbols defined
		map<string, argv_1080>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in != iter_local_out->second.end()) { // duplicate found
			argv_1993 = argv_3394;
		}
		else { // ok to argv_616 this symbol for this target argv_3842
			iter_local_out->second[_symbol_name] = entry;
#if defined (DEBUG_KERNEL)
			argv_3548 (argv_3828, MAX_PATH, "[existing target] argv_627: argv_3632:%s, argv_3842:%d, argv_3736:%d, argv_3623=0x%X", _symbol_name, _type, _target, _symbol_addr);
			argv_3828[MAX_PATH - 1] = '\0';
			_glob_data_ptr->argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (DEBUG_KERNEL)
		}
	}
	return (argv_1993);
}

// - single symbols are indexed by argv_3842
// - multiple symbols are indexed by target
argv_3517 argv_1081::argv_626 (argv_839 * _glob_data_ptr, argv_3864 _type, argv_3864 _target, argv_820 _symbol_name, argv_2263 _symbol_addr, bool _duplicate_allowed) {
	argv_3517 argv_1993 = argv_3400;
	if ((_symbol_name == argv_2889) || (_symbol_addr == argv_2889) || (strlen(_symbol_name) == 0)) {
		argv_1993 = argv_3397;
	}
	else { // parameters are correct
		
		if (_duplicate_allowed == false) {
			argv_1993 = argv_628 (_glob_data_ptr, _type, _target, _symbol_name, _symbol_addr);
		}
		else {
			argv_1993 = argv_627 (_glob_data_ptr, _type, _target, _symbol_name, _symbol_addr);
		}
	}
	return (argv_1993);	
}

// the internal iterator is changed, thus we don't need any parameter
argv_3517 argv_1081::argv_2491 () {
	argv_3517 argv_1993	= argv_3400;
	argv_2275	= argv_2284.begin ();
	if (argv_2275 == argv_2284.end()) {
		argv_1993 = argv_3395;	
	}
	return (argv_1993);
}

// the internal iterator is changed, thus we don't need any parameter
argv_3517 argv_1081::argv_2492 () {
	argv_3517 argv_1993 = argv_3400;
	++argv_2275;
	if (argv_2275 == argv_2284.end()) {
		argv_1993 = argv_3395;	
	}
	return (argv_1993);
}

// we just ask for the next resolved symbol of the argv_1106 group until exhaustion
// of the argv_1106 group, then we ask for the 
argv_3517 argv_1081::argv_1750 (argv_1080& _entry) {
	argv_3517 argv_1993 = argv_3400;
	argv_2274 = argv_2275->second.begin ();
	if (argv_2274 == argv_2275->second.end()) {
		argv_1993 = argv_3395;	
	}
	else {
		_entry.argv_3623	= argv_2274->second.argv_3623;
		_entry.argv_3632		= argv_2274->second.argv_3632;
		_entry.argv_3842				= argv_2274->second.argv_3842;
		_entry.argv_3736		= argv_2274->second.argv_3736;
	}
	return (argv_1993);
}

argv_3517 argv_1081::argv_1769 (argv_1080& _entry) {
	argv_3517 argv_1993 = argv_3400;
	++argv_2274;
	if (argv_2274 == argv_2275->second.end()) {
		argv_1993 = argv_3395;	
	}
	else {
		_entry.argv_3623	= argv_2274->second.argv_3623;
		_entry.argv_3632		= argv_2274->second.argv_3632;
		_entry.argv_3842				= argv_2274->second.argv_3842;
		_entry.argv_3736		= argv_2274->second.argv_3736;
	}
	return (argv_1993);
}

argv_3517 argv_1081::argv_2257 (argv_3864 _type, argv_820 _symbol_name, argv_2263& _symbol_addr) {
	argv_3517 argv_1993 = argv_3400;
	map<argv_3864, map<string, argv_1080> >::iterator iter_local_out;
	iter_local_out = argv_2285.find (_type);
	if (iter_local_out == argv_2285.end()) {
		argv_1993 = argv_3399;
	}
	else { // symbol argv_3842 exists
		map<string, argv_1080>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in == iter_local_out->second.end()) {
			argv_1993 = argv_3398;
		}
		else { // found the argv_635 of the symbol
			_symbol_addr = iter_local_in->second.argv_3623;
		}
	}
	return (argv_1993);
}

//-------------------------------------
/*
argv_1081::argv_1081 () {
	reset ();
}

void argv_1081::reset () {
	m_v_resolved_entry.clear ();
	m_v_by_type.clear ();
	m_v_by_target.clear ();
	argv_2285.clear ();

	m_iter_by_type		= m_v_by_type.begin ();
	m_iter_by_target	= m_v_by_target.begin ();
}

argv_3517 argv_1081::get_first_group_by_type (vector<argv_3864>& _v_result) {
	argv_3517 argv_1993 = argv_3400;
	_v_result.clear ();
	m_iter_by_type = m_v_by_type.begin();
	if (m_iter_by_type == m_v_by_type.end()) {
		argv_1993 = argv_3395;
	}
	else {
		_v_result = m_iter_by_type->second;		
	}
	return (argv_1993);
}

argv_3517 argv_1081::get_next_group_by_type (vector<argv_3864>& _v_result) {
	argv_3517 argv_1993 = argv_3400;
	_v_result.clear ();
	++m_iter_by_type;
	if (m_iter_by_type == m_v_by_type.end()) {
		argv_1993 = argv_3395;
	}
	else {
		_v_result = m_iter_by_type->second;		
	}
	return (argv_1993);
}

argv_3517 argv_1081::get_first_group_by_target (vector<argv_3864>& _v_result) {
	argv_3517 argv_1993 = argv_3400;
	_v_result.clear ();
	m_iter_by_target = m_v_by_target.begin();
	if (m_iter_by_target == m_v_by_target.end()) {
		argv_1993 = argv_3395;
	}
	else {
		_v_result = m_iter_by_target->second;		
	}
	return (argv_1993);
}

argv_3517 argv_1081::get_next_group_by_target (vector<argv_3864>& _v_result) {
	argv_3517 argv_1993 = argv_3400;
	_v_result.clear ();
	++m_iter_by_target;
	if (m_iter_by_target == m_v_by_target.end()) {
		argv_1993 = argv_3395;
	}
	else {
		_v_result = m_iter_by_target->second;		
	}
	return (argv_1993);
}

argv_3517 argv_1081::lookup_one_grouped_symbol (argv_3864 _index, argv_3864& _type, argv_3864& _target, string& _symbol_name, argv_2263& _symbol_addr) {
	argv_3517 argv_1993 = argv_3400;
	argv_3864 argv_2866 = m_v_resolved_entry.size ();
	if (_index >= argv_2866) {
		argv_1993 = argv_3396;
	}
	else { // index parameter is correct
		_type			= m_v_resolved_entry[_index].argv_3842;
		_target			= m_v_resolved_entry[_index].argv_3736;
		_symbol_name	= m_v_resolved_entry[_index].argv_3632;
		_symbol_addr	= m_v_resolved_entry[_index].argv_3623;
	}
	return (argv_1993);
}

argv_3517 argv_1081::argv_2257 (argv_3864 _type, argv_820 _symbol_name, argv_2263& _symbol_addr) {
	argv_3517 argv_1993 = argv_3400;
	map<argv_3864, map<string, argv_1080> >::iterator iter_local_out;
	iter_local_out = argv_2285.find (_type);
	if (iter_local_out == argv_2285.end()) {
		argv_1993 = argv_3399;
	}
	else { // symbol argv_3842 exists
		map<string, argv_1080>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in == iter_local_out->second.end()) {
			argv_1993 = argv_3398;
		}
		else { // found the argv_635 of the symbol
			_symbol_addr = iter_local_in->second.argv_3623;
		}
	}
	return (argv_1993);
}

// - single symbols are indexed by argv_3842
// - multiple symbols are indexed by target
argv_3517 argv_1081::argv_626 (argv_3864 _type, argv_3864 _target, argv_820 _symbol_name, argv_2263 _symbol_addr, bool _duplicate_allowed) {
	argv_3517 argv_1993 = argv_3400;
	if ((_symbol_name == argv_2889) || (_symbol_addr == argv_2889) || (strlen(_symbol_name) == 0)) {
		argv_1993 = argv_3397;
	}
	else { // parameters are correct
		
		if (_duplicate_allowed == false) {
			argv_1993 = argv_628 (_type, _target, _symbol_name, _symbol_addr);
		}
		else {
			argv_1993 = argv_627 (_type, _target, _symbol_name, _symbol_addr);
		}
	}
	return (argv_1993);	
}

// in this case, the target argv_3842 is not relevant, and we only use the argv_3842
// to differenciate.
argv_3517 argv_1081::argv_628 (argv_3864 _type, argv_3864 _target, argv_820 _symbol_name, argv_2263 _symbol_addr) {
	argv_3517 argv_1993 = argv_3400;
	// create a new entry
	argv_1080 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	map<argv_3864, map<string, argv_1080> >::iterator iter_local_out;
	iter_local_out = argv_2285.find (_type);
	if (iter_local_out == argv_2285.end()) { // this plugin argv_3842 has no symbol yet
		map<string, argv_1080> local_map;
		local_map[_symbol_name] = entry;
		argv_2285[_type] = local_map;
	}
	else { // this plugin argv_3842 has already some symbols defined
		map<string, argv_1080>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in != iter_local_out->second.end()) { // duplicate found
			argv_1993 = argv_3394;
		}
		else { // ok to argv_616 this symbol for this argv_3842
			iter_local_out->second[_symbol_name] = entry;
		}
	}
	return (argv_1993);
}

argv_3517 argv_1081::argv_627 (argv_3864 _type, argv_3864 _target, argv_820 _symbol_name, argv_2263 _symbol_addr) {
	argv_3517 argv_1993 = argv_3400;
	// create a new entry
	argv_1080 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	// argv_616 this new entry to the vector that contains ALL MULTIPLE resolved symbols
	m_v_resolved_entry.push_back (entry);
	argv_3864 new_index = m_v_resolved_entry.size () - 1;

	// argv_616 this entry to the groups by argv_3842
	map<argv_3864, vector<argv_3864> >::iterator iter_local_type;
	iter_local_type = m_v_by_type.find (_type); 
	if (iter_local_type == m_v_by_type.end()) {
		vector<argv_3864> v_tmp;
		v_tmp.push_back (new_index);
		m_v_by_type[_type] = v_tmp;
	}
	else { // this argv_3842's set already exists => just argv_616 to it
		iter_local_type->second.push_back (new_index);	
	}

	// argv_616 this entry to the groups by target
	map<argv_3864, vector<argv_3864> >::iterator iter_local_target;
	iter_local_target = m_v_by_target.find (_target);
	if (iter_local_target == m_v_by_target.end()) {
		vector<argv_3864> v_tmp;
		v_tmp.push_back (new_index);
		m_v_by_target[_target] = v_tmp;
	}
	else { // this target's set already exists => just argv_616 to it
		iter_local_target->second.push_back (new_index);
	}
	return (argv_1993);
}
*/