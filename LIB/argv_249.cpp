// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_249.cpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_316.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variable
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_812 * argv_988 = argv_2889;



argv_3517 argv_2879 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_988->argv_2878 (_cli_tab, _index, _trigger_write);
	return (argv_1993);
}

argv_3517 argv_3012 (argv_807 * _cli_tab, argv_3864 _index, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_988->argv_3011 (_cli_tab, _index, _v_index_2_trigger_write);
	return (argv_1993);
}

argv_3517 argv_3016 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_988->argv_3015 (_cli_tab, _index, _trigger_write);
	return (argv_1993);
}


argv_3517 argv_2361 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_988->argv_2360 (_cli_tab, _index, _trigger_write);
	return (argv_1993);
}

argv_812::argv_812 () {
	argv_891 = argv_2889;
	reset ();
}

void argv_812::argv_1224 (argv_3517 _success_result, argv_3517 _result, argv_820 _opa) {
	char argv_3828[MAX_PATH];
	if (_result == _success_result) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3548 (argv_3828, MAX_PATH, "%s...[SUCCESS]", _opa);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	}
	else {
		if (_result == argv_1342) {
			argv_3548 (argv_3828, MAX_PATH, "*** WARNING : %s...[received order to argv_3607]", _opa);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_3989, argv_3828);
		}
		else {
			string serror = argv_1319 (_result);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: %s...[FAILED] - argv_1318=%s", _opa, serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1321, argv_3828);
		}
	}
}


void argv_812::reset () {
	argv_1347.reset ();
	argv_892						= 0;
	argv_2240								= argv_2889;

	argv_684					= argv_2889;
	argv_699				= argv_2889;
	argv_3562					= argv_2889;

	argv_1348.argv_1695	= argv_2879;
	argv_1348.argv_1697	= argv_3012;
	argv_1348.argv_1698		= argv_3016;
	argv_1348.argv_1629		= argv_2361;

	index_inner_archive_creator			= -1;	
	index_inner_archive_extractor		= -1;	
	index_inner_spyware_manager			= -1;	
	index_inner_scan_gateway			= -1;
	index_inner_update					= -1;
	index_inner_admin					= -1;

	if (argv_891 != argv_2889) {
		delete [] argv_891;
		argv_891 = argv_2889;
	}
}

// save the index of the concerned client to avoid argv_2253 at runtime.
argv_3517 argv_812::argv_3495 (argv_807 * _cli_tab, argv_3517 _index, argv_3517& _cache, argv_820 _name) {
	argv_3517 argv_1993 = argv_992;
	if (_cache >= 0) {
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_812::argv_3495 - for inner client '%s': illegal when connection established (new_index=%d,previous_index=%d)", _name, _index, _cache);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1321, argv_3828);
		argv_1993 = argv_983;
	}
	else { // the argv_784 is virgin => ok to set it
		_cache = _index;
	}
	return (argv_1993);
}

argv_3517 argv_812::argv_2878 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_992;
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3828[MAX_PATH];
	argv_3548 (argv_3828, MAX_PATH, "argv_812::argv_2878 - new client at box %u (sockfd=%u)", _index, _cli_tab[_index].argv_3549);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_2886, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	// update the argv_784 if necessary
	if (_cli_tab[_index].argv_900 == argv_905) {
		argv_1993 = argv_3495 (_cli_tab, _index, index_inner_archive_extractor, "argv_905");
	}
	else if (_cli_tab[_index].argv_900 == argv_904) {
		argv_1993 = argv_3495 (_cli_tab, _index, index_inner_archive_creator, "argv_904");
	}
	else if (_cli_tab[_index].argv_900 == argv_907) {
		argv_1993 = argv_3495 (_cli_tab, _index, index_inner_spyware_manager, "argv_907");
	}
	else if (_cli_tab[_index].argv_900 == argv_906) {
		argv_1993 = argv_3495 (_cli_tab, _index, index_inner_scan_gateway, "argv_906");
	}
	else if (_cli_tab[_index].argv_900 == argv_903) {
		argv_1993 = argv_3495 (_cli_tab, _index, index_inner_admin, "argv_903");
	} 
	else if (_cli_tab[_index].argv_900 == argv_908) {
		argv_1993 = argv_3495 (_cli_tab, _index, index_inner_update, "argv_908");
	}

	if (argv_1993 == argv_992) { // remap error argv_929
		argv_1993 = argv_1343;
	}
	return (argv_1993);
}

argv_3517 argv_812::argv_2360 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_992;
	if (argv_1993 == argv_992) { // remap argv_1318 for the caller
		argv_1993 = argv_1343;
	}
	return (argv_1993);
}

argv_3517 argv_812::argv_3015 (argv_807 * _cli_tab, argv_3864 _index, bool& _trigger_write) {
	argv_3517 argv_1993 = argv_992;
	if (argv_1993 == argv_992) { // remap argv_1318 for the caller
		argv_1993 = argv_1343;
	}
	return (argv_1993);
}

bool argv_812::argv_897 (argv_807 * _cli_tab, argv_3864 _index) {
	bool bret = false;
	if ((_cli_tab[_index].argv_900 == argv_910) ||
		(_cli_tab[_index].argv_900 == argv_911) ||
		(_cli_tab[_index].argv_900 == argv_902)) {
		bret = true;
	}
	return (bret);
}

argv_3517 argv_812::argv_1170 (argv_807 * _cli_tab, argv_3864 _index, argv_3862& _outer_type) {
	argv_3517 argv_1993 = argv_992;
	switch (_cli_tab[_index].argv_900) {
		case argv_910: 
			_outer_type = argv_3042;
			break;

		case argv_911:
			_outer_type = argv_3043;
			break;

		case argv_902:
			_outer_type = argv_3039;
			break;

		default:
			argv_1993 = argv_987;
	}
	return (argv_1993);	
}

argv_3517 argv_812::argv_1475 (argv_807 * _cli_tab, argv_3864 _src_index, argv_3864 _dest_index, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_992;
	argv_1057 * argv_3480 = new (std::nothrow) argv_1057;
	if (argv_3480 == argv_2889) { // allocate a new packet for the destination's argv_3472 argv_3324
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1475 - memory allocation failed !");
		argv_1993 = argv_986;
	}
	else {
		argv_3862 outer_type;
		argv_1993 = argv_1170 (_cli_tab, _src_index, outer_type);
		if (argv_1993 != argv_992) {
			string serror = argv_1319 (argv_1993);	
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1475 - argv_1170 failed ! - argv_1318 = ", serror.c_str());
		}
		else { 
#if defined (__DEBUG_COM_MANAGER__)
			string client_type_str = argv_901 (_cli_tab[_src_index].argv_900);
			string outer_type_str = argv_3942 (outer_type);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "received a naked packet from client argv_3842 %s => outer packet argv_3842 will be %s", client_type_str.c_str(), outer_type_str.c_str ());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1152, argv_3828);
			argv_3548 (argv_3828, MAX_PATH, "forging a rich packet [src_index=%d|src_gen=%u|dest_index=%d|dest_gen=%u]", _src_index, _cli_tab[_src_index].argv_1734, _dest_index, _cli_tab[_dest_index].argv_1734);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
			argv_1993 = _cli_tab[_src_index].argv_3010.argv_1465 (argv_3480, outer_type, _src_index, _cli_tab[_src_index].argv_1734, _dest_index, _cli_tab[_dest_index].argv_1734);
			if (argv_1993 != argv_3026) {
				string serror = argv_1319 (argv_1993);	
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1475 - argv_1465 failed ! - argv_1318 = ", serror.c_str());
			}
			else { // argv_616 the outer packet to the destination argv_3472 argv_3324
				argv_1993 = _cli_tab[_dest_index].push_back (argv_3480); 
				if (argv_1993 != argv_896) { // the addition to the argv_3472 argv_3324 failed
					string serror = argv_1319 (argv_1993);
					argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1475 - push_back failed ! - errno = ", serror.c_str());
				}
				else { // schedule a write event for the target client 
					_v_index_2_trigger_write.push_back (_dest_index);
				}
			}
		}
	}
	return (argv_1993);
}

argv_3517 argv_812::argv_1471 (argv_807 * _cli_tab, argv_3864 _src_index, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_992;

	// check whether the argv_1106 operation should be stopped or not
	argv_3862 packet_type;
	_cli_tab[_src_index].argv_3010.argv_1784 (packet_type);
	argv_853 (_cli_tab, _src_index, index_inner_archive_creator, packet_type);

	// the packet is forwarded anyway
#if defined (__DEBUG_COM_MANAGER__)
	argv_2240->argv_2247 (argv_1152, "forwarding packet to archive creator");
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_1993 = argv_1475 (_cli_tab, _src_index, index_inner_archive_creator, _v_index_2_trigger_write);
	return (argv_1993);
}

argv_3517 argv_812::argv_1472 (argv_807 * _cli_tab, argv_3864 _src_index, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_992;

	// check whether the argv_1106 operation should be stopped or not
	argv_3862 packet_type;
	_cli_tab[_src_index].argv_3010.argv_1784 (packet_type);
	argv_853 (_cli_tab, _src_index, index_inner_archive_extractor, packet_type);

#if defined (__DEBUG_COM_MANAGER__)
	argv_2240->argv_2247 (argv_1152, "forwarding packet to archive extractor");
#endif // #if defined (__DEBUG_COM_MANAGER__)

	argv_1993 = argv_1475 (_cli_tab, _src_index, index_inner_archive_extractor, _v_index_2_trigger_write);
	return (argv_1993);
}

argv_3517 argv_812::argv_1474 (argv_807 * _cli_tab, argv_3864 _src_index, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_992;

	// check whether the argv_1106 operation should be stopped or not
	argv_3862 packet_type;
	_cli_tab[_src_index].argv_3010.argv_1784 (packet_type);
	argv_853 (_cli_tab, _src_index, index_inner_spyware_manager, packet_type);

#if defined (__DEBUG_COM_MANAGER__)
	argv_2240->argv_2247 (argv_1152, "forwarding packet to spyware manager");
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_1993 = argv_1475 (_cli_tab, _src_index, index_inner_spyware_manager, _v_index_2_trigger_write);
	return (argv_1993);
}

argv_3517 argv_812::argv_1473 (argv_807 * _cli_tab, argv_3864 _src_index, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_992;
#if defined (__DEBUG_COM_MANAGER__)
	argv_2240->argv_2247 (argv_1152, "forwarding packet to scan gateway");
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_1993 = argv_1475 (_cli_tab, _src_index, index_inner_scan_gateway, _v_index_2_trigger_write);
	return (argv_1993);
}

bool argv_812::argv_2002 (argv_3862 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_3033) ||
		(_payload_type == argv_3031)) {
		bret = true;
	}
	return (bret);
}

bool argv_812::argv_2003 (argv_3862 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_3036) ||
		(_payload_type == argv_3032)) {
		bret = true;
	}
	return (bret);
}

bool argv_812::argv_2005 (argv_3862 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_3060) ||
		(_payload_type == argv_3062)) {
		bret = true;
	}
	return (bret);
}

bool argv_812::argv_2004 (argv_3862 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_3053) ||
		(_payload_type == argv_3049) ||
		(_payload_type == argv_3055) ||
		(_payload_type == argv_3051)) {
		bret = true;
	}
	return (bret);
}

// with a naked packet, we have to use the packet argv_3842 for routing
// but for rich packet, we don't need to use the packet argv_3842, instead
// we use the src/dest information, and the destination client's argv_3842
// to determine which shape to choose for the destination packet.
argv_3517 argv_812::argv_3269 (argv_807 * _cli_tab, argv_3864 _src_index, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_992;

	// argv_1371 the packet argv_3842 to determine where to route it
	argv_3862 argv_3941 = argv_3065;
	_cli_tab[_src_index].argv_3010.argv_1784 (argv_3941);
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3828[MAX_PATH];
	string user_type_str = argv_3942 (argv_3941);
	argv_3548 (argv_3828, MAX_PATH, "received naked packet argv_3842 '%s'", user_type_str.c_str());
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if (argv_2002 (argv_3941) == true) {
		argv_1993 = argv_1471 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else if (argv_2003 (argv_3941) == true) {
		argv_1993 = argv_1472 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else if (argv_2005 (argv_3941) == true) {
		argv_1993 = argv_1474 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else if (argv_2004 (argv_3941) == true) {
		argv_1993 = argv_1473 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else { // unhandled naked packet received
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_3269 - received unhandled packet : argv_3842 was : ", (argv_3864) argv_3941);
		argv_1993 = argv_994;
	}

	if (argv_1993 == argv_896) { // remap error argv_929
		argv_1993 = argv_992;
	}
	return (argv_1993); 
}

argv_3517 argv_812::argv_863 (argv_807 * _cli_tab, argv_3864 _src_index, argv_3864 _src_generation, argv_3864 _dest_index, argv_3864 _dest_generation) {
	argv_3517 argv_1993 = argv_992;
	if (_src_index >= argv_892) {
		argv_1993 = argv_991;
	}
	else if (_dest_index >= argv_892) {
		argv_1993 = argv_982;
	}
	else if (_cli_tab[_src_index].argv_3976 == true) {
		argv_1993 = argv_989;
	}
	else if (_cli_tab[_dest_index].argv_3976 == true) {
		argv_1993 = argv_980;
	}
	else if (_src_generation != _cli_tab[_src_index].argv_1734) {
		argv_1993 = argv_990;	
	}
	else if (_dest_generation != _cli_tab[_dest_index].argv_1734) {
		argv_1993 = argv_981;
	}
	return (argv_1993);
}

argv_3517 argv_812::argv_1376 (argv_807 * _cli_tab, argv_3864 _index, argv_3862& _outer_type, argv_3864& _src_index, argv_3864& _src_generation, argv_3864& _dest_index, argv_3864& _dest_generation, argv_3862& _payload_type) {
	argv_3517 argv_1993 = argv_992;

	// read the outer packet argv_3842.
	_cli_tab[_index].argv_3010.argv_1784 (_outer_type);

	// argv_1371 the source index
	argv_1993 = _cli_tab[_index].argv_3010.argv_1371 (_src_index);
	if (argv_1993 != argv_3026) {	
		string serror = argv_1319 (argv_1993);
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1376 - field 1 extraction failed ! - argv_1318 = ", serror.c_str());	
	}
	else { // argv_1371 the source argv_1734
		argv_1993 = _cli_tab[_index].argv_3010.argv_1371 (_src_generation);
		if (argv_1993 != argv_3026) {	
			string serror = argv_1319 (argv_1993);
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1376 - field 2 extraction failed ! - argv_1318 = ", serror.c_str());	
		}
		else { // argv_1371 the dest index
			argv_1993 = _cli_tab[_index].argv_3010.argv_1371 (_dest_index);
			if (argv_1993 != argv_3026) {	
				string serror = argv_1319 (argv_1993);
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1376 - field 3 extraction failed ! - argv_1318 = ", serror.c_str());
			}
			else { // argv_1371 the dest argv_1734
				argv_1993 = _cli_tab[_index].argv_3010.argv_1371 (_dest_generation);
				if (argv_1993 != argv_3026) {	
					string serror = argv_1319 (argv_1993);
					argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1376 - field 3 extraction failed ! - argv_1318 = ", serror.c_str());
				}
				else { // argv_1371 the payload argv_635
					argv_1993 = _cli_tab[_index].argv_3010.argv_1371 (_payload_type);
					if (argv_1993 != argv_3026) {	
						string serror = argv_1319 (argv_1993);
						argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1376 - field 4 extraction failed ! - argv_1318 = ", serror.c_str());
					}
				}
			}
		}
	}

	if (argv_1993 == argv_3026) { // remap error argv_929
#if defined (__DEBUG_COM_MANAGER__)
		string outer_type_str	= argv_3942 (_outer_type);
		string payload_type_str	= argv_3942 (_payload_type);
		char argv_3828[MAX_PATH];
		argv_3548 (argv_3828, MAX_PATH, "parsed rich packet : [outer_type=%s|src_index=%u|src_gen:%u|dest_index=%u|dest_gen=%u|payload_type=%s]", outer_type_str.c_str(), _src_index, _src_generation, _dest_index, _dest_generation, payload_type_str.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		argv_1993 = argv_992;
	}
	return (argv_1993);
}

argv_3517 argv_812::argv_1476 (argv_807 * _cli_tab, argv_3864 _src_index, argv_3864 _dest_index, argv_3862 _payload_type, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_992;
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3828[MAX_PATH];
	string payload_type_str = argv_3942 (_payload_type);
	string src_cli_type     = argv_901 (_cli_tab[_src_index].argv_900);
	string dest_cli_type    = argv_901 (_cli_tab[_dest_index].argv_900);
	argv_3548 (argv_3828, MAX_PATH, "forwarding rich packet received : from index %d (argv_900=%s) to index %d (argv_900=%s) (payload_type=%s)", _src_index, src_cli_type.c_str(), _dest_index, dest_cli_type.c_str(), payload_type_str.c_str());
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_1057 * naked_pck_ptr = new (std::nothrow) argv_1057;
	if (naked_pck_ptr == argv_2889) {
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1476 - memory allocation failed !");
		argv_1993 = argv_986;
	}
	else { // argv_919 the payload packet 
		argv_1993 = _cli_tab[_src_index].argv_3010.argv_1467 (naked_pck_ptr, _payload_type);
		if (argv_1993 != argv_3026) {
			string serror = argv_1319 (argv_1993);
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1476 - argv_1467 failed ! - errno = ", serror.c_str());
		}
		else { // argv_616 the naked packet to the destination argv_3472 argv_3324
#if defined (__DEBUG_COM_MANAGER__)
			argv_2240->argv_2247 (argv_1152, "forged naked packet from rich packet");
#endif // #if defined (__DEBUG_COM_MANAGER__)
			argv_1993 = _cli_tab[_dest_index].push_back (naked_pck_ptr); // deallocated by the event loop  
			if (argv_1993 != argv_896) { // the addition to the argv_3472 argv_3324 failed
				string serror = argv_1319 (argv_1993);
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1476 - push_back failed ! - errno = ", serror.c_str());
			}
			else { // schedule a write event for the target client 
				_v_index_2_trigger_write.push_back (_dest_index);
			}
		}
	}

	if (argv_1993 == argv_896) {
		argv_1993 = argv_992; // remap error argv_929
	}
	return (argv_1993);
}

argv_3517 argv_812::argv_1477 (argv_807 * _cli_tab, argv_3862 _outer_type, argv_3864 _src_index, argv_3864 _dest_index, argv_3862 _payload_type, vector<argv_3864>& _v_index_2_trigger_write, bool _is_broadcast) {
	argv_3517 argv_1993 = argv_992;
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3828[MAX_PATH];
	string payload_type_str = argv_3942 (_payload_type);
	string outer_type_str	= argv_3942 (_outer_type);
	string is_broadcast_str	= "false";
	if (_is_broadcast == true) {
		is_broadcast_str = "true";		
	}
	argv_3548 (argv_3828, MAX_PATH, "forward rich packet to internal destination : [src_index=%d|_dest_index=%d|outer_type=%s|payload_type=%s|is_broadcast=%s]", _src_index, _dest_index, outer_type_str.c_str(), payload_type_str.c_str(), is_broadcast_str.c_str());
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	// trigger an interrupt if necessary
	argv_853 (_cli_tab, _src_index, _dest_index, _payload_type);

	// allocate a new rich packet for the target destination
	argv_1057 * rich_pck_ptr = new (std::nothrow) argv_1057;
	if (rich_pck_ptr == argv_2889) {
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_1477 - memory allocation failed !");
		argv_1993 = argv_986;
	}
	else { // argv_919 the received rich packet and mute it's argv_3604
		if (_is_broadcast == false) { // src and dest are contained in the packet 
			_cli_tab[_src_index].argv_3010.argv_919 ((*rich_pck_ptr), (argv_3862) argv_3017);
		}
		else { // src,dest must be inserted by hand
			argv_1993 = _cli_tab[_src_index].argv_3010.argv_1466 (rich_pck_ptr, _outer_type, _payload_type, _src_index, _cli_tab[_src_index].argv_1734, _dest_index, _cli_tab[_dest_index].argv_1734);
			if (argv_1993 != argv_3026) {
				argv_1224 (argv_3026, argv_1993, "argv_812::argv_1477 - argv_1466");
			}
			else { // remap error argv_929
				argv_1993 = argv_992;
			}
		}

		if (argv_1993 == argv_992) {
			// argv_616 the argv_919 packet to the destination argv_3472 argv_3324
			argv_1993 = _cli_tab[_dest_index].push_back (rich_pck_ptr); // deallocated by the event loop  
			if (argv_1993 != argv_896) { // the addition to the argv_3472 argv_3324 failed
				argv_1224 (argv_896, argv_1993, "argv_812::argv_1477 - push_back");
			}
			else { // schedule a write event for the target client 
				_v_index_2_trigger_write.push_back (_dest_index);
#if defined (__DEBUG_COM_MANAGER__)
				argv_2240->argv_2247 (argv_1152, "rich packet added to argv_3472 argv_3324 of client located at index ", _dest_index);
				string type_str = argv_901 (_cli_tab[_dest_index].argv_900);
				argv_3548 (argv_3828, MAX_PATH, "schedule a write event for client at index %u (argv_900: %s)", _dest_index, type_str.c_str());
				argv_3828[MAX_PATH - 1] = '\0';
				argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
			}
		}
	}

	if (argv_1993 == argv_896) {
		argv_1993 = argv_992;
	}
	return (argv_1993);
}


bool argv_812::argv_1997 (argv_807 * _cli_tab, argv_3864 _src_index) {
	bool bret = false;
	if ((_cli_tab[_src_index].argv_900 == argv_908) ||
		(_cli_tab[_src_index].argv_900 == argv_903)) {
		bret = true;
	}

#if defined (__DEBUG_COM_MANAGER__)
	char argv_3828[MAX_PATH];
	string client_type_str = argv_901 (_cli_tab[_src_index].argv_900);
	
	if (bret == true) {
		argv_3548 (argv_3828, MAX_PATH, "client located at index %u is a broadcast inner client (argv_3842=%s)", _src_index, client_type_str.c_str());
	}
	else {
		argv_3548 (argv_3828, MAX_PATH, "client located at index %u is NOT a broadcast inner client (argv_3842=%s)", _src_index, client_type_str.c_str());
	}
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	return (bret);
}

void argv_812::argv_1216 (argv_820 _msg) {
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3828[MAX_PATH];
	argv_2240->argv_2247 (argv_1152, "=== argv_812: inner_cache (%s) ===", _msg);
	argv_3548 (argv_3828, MAX_PATH, "index_inner_archive_creator    = %d", index_inner_archive_creator);    argv_3828[MAX_PATH - 1] = '\0';  argv_2240->argv_2247 (argv_1152, argv_3828);
	argv_3548 (argv_3828, MAX_PATH, "index_inner_archive_extractor  = %d", index_inner_archive_extractor);  argv_3828[MAX_PATH - 1] = '\0';  argv_2240->argv_2247 (argv_1152, argv_3828);
	argv_3548 (argv_3828, MAX_PATH, "index_inner_spyware_manager    = %d", index_inner_spyware_manager);    argv_3828[MAX_PATH - 1] = '\0';  argv_2240->argv_2247 (argv_1152, argv_3828);
	argv_3548 (argv_3828, MAX_PATH, "index_inner_scan_gateway       = %d", index_inner_scan_gateway);       argv_3828[MAX_PATH - 1] = '\0';  argv_2240->argv_2247 (argv_1152, argv_3828);
	argv_3548 (argv_3828, MAX_PATH, "index_inner_admin              = %d", index_inner_admin);              argv_3828[MAX_PATH - 1] = '\0';  argv_2240->argv_2247 (argv_1152, argv_3828);
	argv_3548 (argv_3828, MAX_PATH, "index_inner_update             = %d", index_inner_update);             argv_3828[MAX_PATH - 1] = '\0';  argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
}

// BEWARE: there is an exception for the admin part : the admin part is able to
// emit broadcast requests, but we should never forward broadcast requests
// to admin part.
argv_3517 argv_812::argv_766 (argv_807 * _cli_tab, argv_3864 _src_index, argv_3862 _outer_type, argv_3862 _payload_type, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993		= argv_992;
	argv_3517 iret1		= argv_992;
	argv_3517 iret2		= argv_992;
	argv_3517 iret3		= argv_992;
	argv_3517 iret4		= argv_992;
	argv_3517 iret5		= argv_992;
	argv_3864 argv_2865	= 0;
	argv_3864 nb_failed	= 0;

#if defined (__DEBUG_COM_MANAGER__)
	char argv_3828[MAX_PATH];
	argv_2240->argv_2247 (argv_1152, "=== argv_812::argv_766 ===");
	argv_3548 (argv_3828, MAX_PATH, "_src_index=%u, index_inner_archive_creator    = %d", _src_index, index_inner_archive_creator);	argv_3828[MAX_PATH - 1] = '\0'; argv_2240->argv_2247 (argv_1152, argv_3828);
	argv_3548 (argv_3828, MAX_PATH, "_src_index=%u, index_inner_archive_extractor  = %d", _src_index, index_inner_archive_extractor);	argv_3828[MAX_PATH - 1] = '\0'; argv_2240->argv_2247 (argv_1152, argv_3828);
	argv_3548 (argv_3828, MAX_PATH, "_src_index=%u, index_inner_spyware_manager    = %d", _src_index, index_inner_spyware_manager);	argv_3828[MAX_PATH - 1] = '\0'; argv_2240->argv_2247 (argv_1152, argv_3828);
	argv_3548 (argv_3828, MAX_PATH, "_src_index=%u, index_inner_scan_gateway       = %d", _src_index, index_inner_scan_gateway);		argv_3828[MAX_PATH - 1] = '\0'; argv_2240->argv_2247 (argv_1152, argv_3828);
	argv_3548 (argv_3828, MAX_PATH, "_src_index=%u, index_inner_update             = %d", _src_index, index_inner_update);				argv_3828[MAX_PATH - 1] = '\0'; argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if ((_src_index != index_inner_archive_creator) && (index_inner_archive_creator >= 0)) {
		iret1 = argv_1477 (_cli_tab, _outer_type, _src_index, index_inner_archive_creator, _payload_type, _v_index_2_trigger_write, true);
		if (iret1 != argv_992) {
			nb_failed++;
			argv_1224 (argv_992, iret1, "argv_812::argv_766 - forward to argv_676");
		}
		argv_2865++;
	}
	if ((_src_index != index_inner_archive_extractor) && (index_inner_archive_extractor >= 0)) {
		iret2 = argv_1477 (_cli_tab, _outer_type, _src_index, index_inner_archive_extractor, _payload_type, _v_index_2_trigger_write, true);
		if (iret2 != argv_992) {
			nb_failed++;
			argv_1224 (argv_992, iret2, "argv_812::argv_766 - forward to argv_689");
		}
		argv_2865++;
	}
	if ((_src_index != index_inner_spyware_manager) && (index_inner_spyware_manager >= 0)) {
		iret3 = argv_1477 (_cli_tab, _outer_type, _src_index, index_inner_spyware_manager, _payload_type, _v_index_2_trigger_write, true);
		if (iret3 != argv_992) {
			nb_failed++;
			argv_1224 (argv_992, iret3, "argv_812::argv_766 - forward to argv_3561");
		}
		argv_2865++;
	}
	if ((_src_index != index_inner_scan_gateway) && (index_inner_scan_gateway >= 0)) {
		iret4 = argv_1477 (_cli_tab, _outer_type, _src_index, index_inner_scan_gateway, _payload_type, _v_index_2_trigger_write, true);
		if (iret4 != argv_992) {
			nb_failed++;
			argv_1224 (argv_992, iret4, "argv_812::argv_766 - forward to argv_3443");
		}
		argv_2865++;
	}
	if ((_src_index != index_inner_update) && (index_inner_update >= 0)) {
		iret5 = argv_1477 (_cli_tab, _outer_type, _src_index, index_inner_update, _payload_type, _v_index_2_trigger_write, true);
		if (iret5 != argv_992) {
			nb_failed++;
			argv_1224 (argv_992, argv_1993, "argv_812::argv_766 - forward to argv_3921");
		}
		argv_2865++;
	}

#if defined (__DEBUG_COM_MANAGER__)
	argv_3548 (argv_3828, MAX_PATH, "broadcasted the argv_2389 to %u inner entities (%u failed)", argv_2865, nb_failed);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	if ((iret1 != argv_992) || 
		(iret2 != argv_992) || 
		(iret3 != argv_992) || 
		(iret4 != argv_992) || 
		(iret5 != argv_992)) {
		argv_1993 = argv_979;	
	}	
	return (argv_1993);
}

argv_3517 argv_812::argv_3229 (argv_3862 _payload_type) {
	argv_3517 argv_1993 = argv_992;
	// argv_1371 the inner argv_3842 of the payload
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3828[MAX_PATH];
	string payload_type_str = argv_3942 (_payload_type);
	argv_3548 (argv_3828, MAX_PATH, "received a '%s' request from admin part", payload_type_str.c_str());
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	if (_payload_type == argv_3064) {
		argv_2240->argv_2247 (argv_660, "*** argv_812: << RECEIVED A STOP REQUEST (FINALIZE) FROM ADMIN PART >>");
		// we ask the event loop to argv_3607 so that we can return from the infinite loop
		argv_1993 = argv_1342; 
	}
	return (argv_1993);
}

// This function warns the concerned argv_753 by accessing specific argv_2908 functions
// (out of band chanel) because we can't rely on the argv_3549 chanel for the
// interrupts.
// this function permits to interrupt a given argv_753.
// Notice that the packet must be forwarded however so that the argv_753 can
// process this argv_2389 after being interrupted.
void argv_812::argv_3840 (argv_820 _from, argv_807 * _cli_tab, argv_3864 _src_index, argv_3862 _packet_type, argv_806 * _unit) {
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3828[MAX_PATH];
	string pck_type_str = argv_3942 (_packet_type);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if ((_packet_type == argv_3032) || 
		(_packet_type == argv_3031)) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3548 (argv_3828, MAX_PATH, "triggering interrupt argv_3842 'argv_789' for unit '%s' (packet argv_3842 was %s)", _from, pck_type_str.c_str());	
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		_unit->argv_789 (_src_index, _cli_tab[_src_index].argv_1734);
	}
	else if (_packet_type == argv_3063) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3548 (argv_3828, MAX_PATH, "triggering interrupt argv_3842 'stop_service' for unit '%s' (packet argv_3842 was %s)", _from, pck_type_str.c_str());	
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		_unit->argv_3351 ();
	}
	else {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3548 (argv_3828, MAX_PATH, "no need to trigger interrupt (packet argv_3842 was %s)", pck_type_str.c_str());	
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	}
}

argv_3517 argv_812::argv_853 (argv_807 * _cli_tab, argv_3864 _src_index, argv_3864 _dest_index, argv_3862 _packet_type) {
	argv_3517 argv_1993 = argv_992;

#if defined (__DEBUG_COM_MANAGER__)
	char argv_3828[MAX_PATH];	
	string pck_type_str = argv_3942 (_packet_type);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	// only interruptible units are concerned about the interrupts
	if (_cli_tab[_dest_index].argv_900 == argv_905) {
		argv_3840 ("argv_689", _cli_tab, _src_index, _packet_type, argv_699);
	}
	else if (_cli_tab[_dest_index].argv_900 == argv_904) {
		argv_3840 ("argv_676", _cli_tab, _src_index, _packet_type, argv_684);
	}
	else if (_cli_tab[_dest_index].argv_900 == argv_907) {
		argv_3840 ("argv_3561", _cli_tab, _src_index, _packet_type, argv_3562);
	}
	else {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3548 (argv_3828, MAX_PATH, "argv_853 : packet_type=%s => no need to warn any interruptible unit [src_index=%u|dest_index=%u]", pck_type_str.c_str(), _src_index, _dest_index);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	}
	return (argv_1993);
}

// use the interrupt mechanism to warn the concerned inner source argv_753 
// that the destination was unreacheable.
argv_3517 argv_812::argv_3988 (argv_807 * _cli_tab, argv_3864 _src_index, argv_3864 _dest_index) {
	argv_3517 argv_1993 = argv_992;
	char argv_3828[MAX_PATH];

#if defined (__DEBUG_COM_MANAGER__)
	string dest_type_str = argv_901 (_cli_tab[_src_index].argv_900);
	argv_3548 (argv_3828, MAX_PATH, "warn inner argv_753 '%s' about unreacheable client at index=%u", dest_type_str.c_str(), _dest_index);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if (_cli_tab[_src_index].argv_900 == argv_905) {
		argv_699->argv_3502 (_dest_index);
	}
	else if (_cli_tab[_src_index].argv_900 == argv_904) {
		argv_684->argv_3502 (_dest_index);
	}
	else if (_cli_tab[_src_index].argv_900 == argv_907) {
		argv_3562->argv_3502 (_dest_index);
	}
	else {
		string dest_type_str = argv_901 (_cli_tab[_src_index].argv_900);
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: failed to warn inner argv_753 '%s' about unreacheable client at index=%u (not an interruptible unit)", dest_type_str.c_str(), _dest_index);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1321, argv_3828);
	}
	return (argv_1993);
}

// with a naked packet, we have to use the packet argv_3842 for routing
// but for rich packet, we don't need to use the packet argv_3842, instead
// we use the src/dest information, and the destination client's argv_3842
// to determine which shape to choose for the destination packet.
argv_3517 argv_812::argv_3277 (argv_807 * _cli_tab, argv_3864 _src_index, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_992;
	argv_3864 source_index;
	argv_3864 source_generation;
	argv_3864 dest_index;
	argv_3864 dest_generation;
	argv_3862 outer_type;
	argv_3862 payload_type;

	// argv_1371 the source/dest and payload pointer from the received packet
	argv_1993 = argv_1376 (_cli_tab, _src_index, outer_type, source_index, source_generation, dest_index, dest_generation, payload_type);
	if (argv_1993 != argv_992) {
		string serror = argv_1319 (argv_1993);
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_3277 - argv_1376 failed ! - argv_1318 = ", serror.c_str());
	}
	else { // in case of ADMIN, or UPDATE, destination is irrelevant (broadcast)
		if (argv_1997 (_cli_tab, _src_index) == true) {
			// retrieve the payload argv_3842 (because some types are not broadcasted).
			if (payload_type != argv_3064) {
				argv_1993 = argv_766 (_cli_tab, _src_index, outer_type, payload_type, _v_index_2_trigger_write);
				if (argv_1993 != argv_992) {
					argv_1224 (argv_992, argv_1993, "argv_812::argv_3277 - argv_766");
				}
			}
			else {
				argv_1993 = argv_3229 (payload_type);
			}
		}
		else { // ensure that generations are coherent
			argv_1993 = argv_863 (_cli_tab, source_index, source_generation, dest_index, dest_generation);	
			if (argv_1993 != argv_992) {
				string serror = argv_1319 (argv_1993);
				argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_3277 - argv_863 failed ! - argv_1318 = ", serror.c_str());
				// destination is unreacheable
				argv_1993 = argv_3988 (_cli_tab, source_index, dest_index);
			}
			else if (argv_897 (_cli_tab, dest_index) == true) {
				argv_1993 = argv_1476 (_cli_tab, source_index, dest_index, payload_type, _v_index_2_trigger_write);
			}
			else { // destination is an internal client
				argv_1993 = argv_1477 (_cli_tab, outer_type, source_index, dest_index, payload_type, _v_index_2_trigger_write, false);
			}
		}
	}

	if (argv_1993 == argv_3026) { // remap error argv_929
		argv_1993 = argv_992; 
	}
	return (argv_1993);
}

// the received packet is either "naked" or "rich" :
// - if client is external, then the packet is naked
// - if client is internal, then the packet is rich
// a naked packet contains directly the payload.
// a rich packet contains the following things in it's argv_757 :
//   - source index
//   - source argv_1734
//   - dest index
//   - dest argv_1734
//   - argv_635 of the payload packet (4 argv_782 as argv_3864).
argv_3517 argv_812::argv_3011 (argv_807 * _cli_tab, argv_3864 _index, vector<argv_3864>& _v_index_2_trigger_write) {
	argv_3517 argv_1993 = argv_992;
	char argv_3828[MAX_PATH];

	if (argv_897 (_cli_tab, _index) == true) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3548 (argv_3828, MAX_PATH, "argv_812::argv_3011 - received a packet from external client located at index %u", _index);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		
		argv_1993 = argv_3269 (_cli_tab, _index, _v_index_2_trigger_write);
		if (argv_1993 != argv_992) {
			argv_1224 (argv_992, argv_1993, "argv_812::argv_3011 - argv_3269");
		}
	}
	else {
#if defined (__DEBUG_COM_MANAGER__)
		string client_type_str = argv_901 (_cli_tab[_index].argv_900);
		argv_3548 (argv_3828, MAX_PATH, "received a packet from internal client located at index %u (argv_900=%s)", _index, client_type_str.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		argv_1993 = argv_3277 (_cli_tab, _index, _v_index_2_trigger_write);
		if (argv_1993 != argv_992) {
			argv_1224 (argv_992, argv_1993, "argv_812::argv_3011 - argv_3277");
		}
	}

	// reset the receive packet for this client so that it can be reused
	if (argv_1993 == argv_992) {
		argv_1993 = _cli_tab[_index].argv_3010.reset ();
	}

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_1343; // remap error argv_929
	}
	return (argv_1993);
}

argv_3517 argv_812::argv_3414 (argv_917 * _log_ptr, argv_3864 _max_nb_client, vector<argv_916>& _v_listener, argv_806 * _archive_creator_ptr, argv_806 * _archive_extractor_ptr, argv_806 * _spyware_manager_ptr) {
	argv_3517 argv_1993 = argv_992;

	if ((_log_ptr == argv_2889) || (_max_nb_client == 0) || (_archive_creator_ptr==argv_2889) || (_archive_extractor_ptr==argv_2889) || (_spyware_manager_ptr==argv_2889)) {
		argv_1993 = argv_985;
	}
	else {
		argv_892			= _max_nb_client;
		argv_988			= this; // will permit C functions to call C++ argv_2908
		argv_2240					= _log_ptr;
		argv_684		= _archive_creator_ptr;		// necessary for operation cancel
		argv_699	= _archive_extractor_ptr;	// necessary for operation cancel
		argv_3562		= _spyware_manager_ptr;		// necessary for operation cancel
#if defined (__DEBUG_COM_MANAGER__)
		argv_2240->argv_2247 (argv_1152, "argv_978...[STARTING]");
#endif // #if defined (__DEBUG_COM_MANAGER__)
		// argv_3237 the client array
		argv_891 = new (std::nothrow) argv_807[_max_nb_client];
		if (argv_891 == argv_2889) {
			argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_978 : failed to allocate client argv_3734 !");
			argv_1993 = argv_986;
		}
		else { // memory allocation succeeded
#if defined (__DEBUG_COM_MANAGER__)
			argv_2240->argv_2247 (argv_2886, "argv_978 - launching event loop");
#endif // #if defined (__DEBUG_COM_MANAGER__)
			argv_1993 = argv_1347.argv_3414 (argv_2240, _v_listener, &argv_891[0], _max_nb_client, argv_1348);
			if (argv_1993 == argv_1343) {
				argv_1993 = argv_992; // remap error argv_929
			}
			else { // event loop returned.
				if (argv_1993 == argv_1342) {
					argv_2240->argv_2247 (argv_660, "*** WARNING : argv_812::argv_3414 - << RECEIVED ORDER TO STOP >>");
				}
				else { // real error occured
					string serror = argv_1319 (argv_1993);
					argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_812::argv_3414 - event loop argv_3414 failed ! - errno = ", serror.c_str());
				}
			}
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

