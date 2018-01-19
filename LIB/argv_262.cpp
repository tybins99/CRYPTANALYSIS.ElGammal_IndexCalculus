// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_262.cpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_329.hpp"

argv_806::argv_806 () {
	reset ();
}

void argv_806::reset () {
	argv_3384 ();
}

argv_806::~argv_806 () {
	;
}

// when a destination client is unreacheable, we notify the unit
// by adding the client's index to a vector.
void argv_806::argv_3502 (argv_3864 _index) {
	argv_741.argv_2230 ();
		if (argv_3918 == false) {
			argv_3919				= _index;
			argv_3918	= true;
		}
	argv_741.argv_3917 ();
}

void argv_806::argv_3351 () {
	argv_741.argv_2230 ();
		argv_3610	= true;
		interrupt_flag		= true;
	argv_741.argv_3917 ();
}

void argv_806::argv_789 (argv_3864 _src_index, argv_3864 _src_generation) {
	argv_741.argv_2230 ();
		if (argv_788 == false) {
			if ((_src_index == argv_1120) && (_src_generation == argv_1119)) {
				argv_788		= true;	
				interrupt_flag	= true;
			}
		}
	argv_741.argv_3917 ();
}

// argv_1453 are reseted by this function (if it was set of course)
void argv_806::argv_1754 (bool& _cancel_flag, bool& _stop_service_flag, bool& _dest_unreach_flag, argv_3864& _unreach_index) {
	argv_741.argv_2230 ();
		if (argv_788 == true) { 
			_cancel_flag		= true;
			argv_788			= false; // reset the flag
		}

		if (argv_3610 == true) { 
			_stop_service_flag	= true;
			argv_3610	= false; // reset the flag
		}

		if (argv_3918 == true) { // reset the flag
			_dest_unreach_flag				= true;
			_unreach_index					= argv_3919;
			argv_3918	= false;
		}
		interrupt_flag = false;
	argv_741.argv_3917 ();
}

void argv_806::argv_3384 () {
	argv_741.argv_2230 ();
		argv_788						= false;
		argv_3610				= false;
		interrupt_flag					= false;
		argv_3918	= false;
		argv_3919				= 0;
	argv_741.argv_3917 ();
}

//-----------------------------------
argv_882::argv_882 () {
	reset ();
}

argv_882::~argv_882 () {
}

void argv_882::reset () {
	argv_2240						= argv_2889;
	argv_1120			= 0;
	argv_1119		= 0;
	argv_1109			= 0;
	argv_1108		= 0;
	argv_3254					= false;
	inner_port.reset ();
	argv_806::reset ();
}


void argv_882::argv_1224 (argv_3517 _success_result, argv_3517 _result, argv_820 _opa) {
	char argv_3828[MAX_PATH];
	if (_result == _success_result) {
#if defined (__DEBUG_INNER_CLIENT__)
		argv_3548 (argv_3828, MAX_PATH, "%s...[SUCCESS]", _opa);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_INNER_CLIENT__)
	}
	else {
		string serror = argv_1319 (_result);
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: %s...[FAILED] - argv_1318=%s", _opa, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_2240->argv_2247 (argv_1152, argv_3828);
	}
}

argv_3517 argv_882::argv_3275 (argv_3862 _user_type) {
	// should never be called (argv_742 class function is meaningless)
	argv_3517 argv_1993 = argv_1976;
	return (argv_1993);	
}

argv_3517 argv_882::argv_1252 () {
	// should never be called (argv_742 class function is meaningless)
	argv_3517 argv_1993 = argv_1976;
	return (argv_1993);
}

argv_3517 argv_882::argv_3478 () {
	argv_3517 argv_1993 = argv_1981;
	argv_1993 = inner_port.argv_3478 ();

	if (argv_1993 == argv_1988) { // remap error argv_929
		argv_1993 = argv_1981;
	}
	return (argv_1993);
}

// when an operation is cancelled, the argv_1106 client must be sent a specific 
// argv_2389.
argv_3517 argv_882::argv_3265 (bool _cancel_flag, bool _stop_service_flag, argv_3862 _outer_type, argv_820 _from) {
	argv_3517 argv_1993 = argv_1981;
	vector<argv_819> v_atom;
	argv_3864 unused_UI32 = 0;

	// argv_616 a unused argv_3960 to the packet (empty packets are illegal).
	argv_617 (unused_UI32, v_atom);
	argv_3862 inner_type;
	if (_cancel_flag == true) {
#if defined (__DEBUG_INNER_CLIENT__)
		argv_2240->argv_2247 (argv_1152, "*** <interrupt> received an order to CANCEL argv_1106 operation");	
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		inner_type = argv_3047;	
	}
	else if (_stop_service_flag == true) {
#if defined (__DEBUG_INNER_CLIENT__)
		argv_2240->argv_2247 (argv_1152, "*** <interrupt> received an order to STOP service");	
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		inner_type = argv_3048;
	}

#if defined (__DEBUG_INNER_CLIENT__)
	char argv_3828[MAX_PATH];
	string inner_type_str = argv_3942 (inner_type);
	string outer_type_str = argv_3942 (_outer_type);
	argv_3548 (argv_3828, MAX_PATH, "processing cancellation from '%s' [argv_788=%u|argv_3610=%u|inner_type=%s|outer_type=%s]", _from, _cancel_flag, _stop_service_flag, inner_type_str.c_str(), outer_type_str.c_str());
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
	argv_2240->argv_2247 (argv_1152, "sending a cancellation argv_2389 to argv_1106 client");
#endif // #if defined (__DEBUG_INNER_CLIENT__)

	argv_1993 = argv_1464 (inner_type, v_atom, _from, _outer_type);
	if (argv_1993 != argv_1981) { // remap error argv_929
		argv_1224 (argv_1981, argv_1993, "argv_882::argv_3265 - argv_1464");
	}
	return (argv_1993);
}


argv_3517 argv_882::insert_atom_vector (vector<argv_819>& _v_atom) {
	argv_3517 argv_1993 = argv_1981;
	argv_3864 nb_atom = _v_atom.size ();
	if (nb_atom == 0) {
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_882::insert_atom_vector - atom vector is empty !");
		argv_1993 = argv_1975;
	}
	else {
		for (argv_3864 i=0 ; i<nb_atom ; i++) {
			switch (_v_atom[i].argv_3842) {
				case argv_1046:
					argv_1993 = argv_3479.insert (_v_atom[i].argv_3963);
					if (argv_1993 != argv_3026) {
						argv_1224 (argv_3026, argv_1993, "argv_882::insert_atom_vector - insert argv_3862");
					}
					break;

				case argv_1047:
					argv_1993 = argv_3479.insert (_v_atom[i].argv_3964);
					if (argv_1993 != argv_3026) {
						argv_1224 (argv_3026, argv_1993, "argv_882::insert_atom_vector - insert argv_3864");
					}
					break;

				case argv_1045:
					argv_1993 = argv_3479.insert (_v_atom[i].argv_3962);
					if (argv_1993 != argv_3026) {
						argv_1224 (argv_3026, argv_1993, "argv_882::insert_atom_vector - insert string");
					}
					break;

				default:
					argv_1993 = argv_1982;
					argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_882::insert_atom_vector - unknown atom argv_3842 : ", (argv_3864) _v_atom[i].argv_3842);
			}
		}
	}

	if (argv_1993 == argv_3026) {
		argv_1993 = argv_1981;
	}
	return (argv_1993);
}

// the rich packet is composed of 
// - src, src_generation
// - dest, dest_generation
// then a fake packet as a payload is present :
// - payload's argv_3842
// - payload's content
argv_3517 argv_882::argv_1464 (argv_3862 _payload_type, vector<argv_819>& _v_atom, argv_820 _source_name, argv_3862 _outer_pck_type) {
	argv_3517 argv_1993 = argv_1981;
	argv_3479.reset ();
	argv_1993 = argv_3479.argv_3501 (_outer_pck_type);
	if (argv_1993 != argv_3026) {
		argv_1224 (argv_3026, argv_1993, "argv_1464 - forge_payload");
		argv_2240->argv_2247 (argv_1321, "+++ ERROR: argv_882::argv_1464 - argv_3501 failed !");
	}
	else { 
		argv_1993 = argv_3479.insert (argv_1109);
		if (argv_1993 != argv_3026) { // <revert> and insert source argv_1734
			argv_1224 (argv_3026, argv_1993, "format_and_send_result: insert #1");
		}
		else {
			argv_1993 = argv_3479.insert (argv_1108);	
			if (argv_1993 != argv_3026) { 
				argv_1224 (argv_3026, argv_1993, "format_and_send_result: insert #2");	
			}
			else {
				argv_1993 = argv_3479.insert (argv_1120);
				if (argv_1993 != argv_3026) { // <revert> and insert destination argv_1734
					argv_1224 (argv_3026, argv_1993, "format_and_send_result: insert #3");
				}
				else {
					argv_1993 = argv_3479.insert (argv_1119);
					if (argv_1993 != argv_3026) { 
						argv_1224 (argv_3026, argv_1993, "format_and_send_result: insert #4");
					}
					else {
						argv_1993 = argv_3479.insert (_payload_type);
						if (argv_1993 != argv_3026) { 
							argv_1224 (argv_3026, argv_1993, "format_and_send_result: insert #5");
						}
						else { // beware: here the source and dest are inverted on purpose !
#if defined (__DEBUG_INNER_CLIENT__)
							char argv_3828[MAX_PATH];
							string payload_type_str = argv_3942 (_payload_type);
							argv_3548 (argv_3828, MAX_PATH, "forging payload : [src_index=%u|src_gen=%u|dest_index=%u|dest_gen=%u|payload_type=%s]", argv_1109, argv_1108, argv_1120, argv_1119, payload_type_str.c_str());
							argv_3828[MAX_PATH - 1] = '\0';
							argv_2240->argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_INNER_CLIENT__)
							argv_1993 = insert_atom_vector (_v_atom);
							if (argv_1993 != argv_1981) {
								argv_1224 (argv_1981, argv_1993, "format_and_send_result: insert_atom_vector");
							}
							else {
								argv_1993 = argv_3479.argv_2955 ();
								if (argv_1993 !=  argv_3026) {
									argv_1224 (argv_3026, argv_1993, "format_and_send_result: argv_2955");
								}
								else { // argv_3472 the packet to the COM manager
									argv_1993 = argv_3478 ();
									if (argv_1993 != argv_1981) {
										char argv_3828[MAX_PATH];
										argv_3548 (argv_3828, MAX_PATH, "from:%s (argv_3472)", _source_name);
										argv_3828[MAX_PATH - 1] = '\0';
										argv_1224 (argv_1981, argv_1993, argv_3828);	
									}
									else {
#if defined (__DEBUG_INNER_CLIENT__)
										argv_2240->argv_2247 (argv_1152, "packet succesfully sent to the COM manager");
#endif // #if defined (__DEBUG_INNER_CLIENT__)
									}
								}
							}
						} 
					}
				}
			}
		}
	}
	return (argv_1993);
}

void argv_882::argv_1226 () {
	char argv_3828[MAX_PATH];
	string inner_type_str = argv_3942 (inner_type);
	string outer_type_str = argv_3942 (outer_type);
	argv_3548 (argv_3828, MAX_PATH, "received a rich packet (argv_2949:%s) [inner_type=%s|outer_type=%s|src_index=%d|src_gen=%u|dest_index=%u|dest_gen=%d]", argv_2949.c_str(), inner_type_str.c_str(), outer_type_str.c_str(), argv_1120, argv_1119, argv_1109, argv_1108);
	argv_3828[MAX_PATH - 1] = '\0';
	argv_2240->argv_2247 (argv_1152, argv_3828);
}

argv_3517 argv_882::argv_1377 () {
	argv_3517 argv_1993 = argv_1981;

	// argv_1371 the packet argv_3842
	argv_3338.argv_1784 (outer_type); 

	// argv_1371 the source index
	argv_1993 = argv_3338.argv_1371 (argv_1120);
	if (argv_1993 != argv_3026) {
		argv_1224 (argv_3026, argv_1993, "argv_1377: argv_1371 #1");	
	}
	else { // argv_1371 the source argv_1734
		argv_1993 = argv_3338.argv_1371 (argv_1119);
		if (argv_1993 != argv_3026) {
			argv_1224 (argv_3026, argv_1993, "argv_1377: argv_1371 #2");	
		}
		else { // argv_1371 the destination index
			argv_1993 = argv_3338.argv_1371 (argv_1109);
			if (argv_1993 != argv_3026) {
				argv_1224 (argv_3026, argv_1993, "argv_1377: argv_1371 #3");	
			}
			else { // argv_1371 the destination argv_1734
				argv_1993 = argv_3338.argv_1371 (argv_1108);
				if (argv_1993 != argv_3026) {
					argv_1224 (argv_3026, argv_1993, "argv_1377: argv_1371 #4");
				}
				else { // argv_1371 the payload's argv_3842
					argv_1993 = argv_3338.argv_1371 (inner_type);
					if (argv_1993 != argv_3026) {
						argv_1224 (argv_3026, argv_1993, "argv_1377: argv_1371 #5");
					}
				}
			}
		}
	}

	if (argv_1993 == argv_3026) { // remap error argv_929
#if defined (__DEBUG_INNER_CLIENT__)
		argv_1226 ();
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		argv_1993 = argv_1981;
	}
	return (argv_1993);
}

argv_3517 argv_882::argv_3328 () {
	argv_3517 argv_1993 = argv_1981;
	// read a packet
	argv_1993 = inner_port.argv_3330 ();	
	if (argv_1993 != argv_1988) {
		argv_1224 (argv_1988, argv_1993, "argv_3330");
	}
	else { 
		// all inner packets are supposed to be "rich" => argv_1371 src/dest + payload argv_635	
		argv_1993 = argv_1377 ();
		if (argv_1993 != argv_1981) {
			string serror = argv_1319 (argv_1993);
			argv_2240->argv_2247 (argv_3989, "*** WARNING: argv_882::argv_3328 - argv_1377 failed ! - argv_1318 = ", serror.c_str());
		}
	}
	return (argv_1993);
}

argv_3517 argv_882::argv_3332 () {
	argv_3517	argv_1993 = argv_1981;
	char	argv_3828[MAX_PATH];

	for ( ; ; ) {
		argv_1993 = argv_3328 ();
		if (argv_1993 != argv_1981) {
			argv_1224 (argv_1981, argv_1993, "argv_3328");
		}

		if (inner_type == argv_3063) { 
			argv_3548 (argv_3828, MAX_PATH, "<<< RECEIVED ORDER TO STOP (from inner_client owned by %s) >>>", argv_2949.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_3989, argv_3828);
			argv_1993 = argv_1980;
			break;
		}
		else if (inner_type == argv_3066) {
			argv_3548 (argv_3828, MAX_PATH, "*** received order to update (from inner_client owned by %s)", argv_2949.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_2240->argv_2247 (argv_660, argv_3828);

			argv_1993 = argv_1252 ();
			if (argv_1993 != argv_1981) {
				argv_1224 (argv_1981, argv_1993, "argv_1252");
			}
		}
		else { // child class dependant packet => leave it to the child
			argv_1993 = argv_3275 (inner_type);
			if (argv_1993 != argv_1981) {
				argv_1224 (argv_1981, argv_1993, "argv_3275");
			}
		}
	}
	return (argv_1993);
}

argv_3517 argv_882::argv_3237 (argv_820 _owner, argv_3864 _port, argv_917 * _log_ptr) {
	argv_3517 argv_1993 = argv_1981;
	if (_log_ptr == argv_2889) {
		argv_1993 = argv_1978;
	}
	else if (argv_3254 == true) {
		argv_1993 = argv_1977;
	}
	else {
		argv_2949	= _owner;
		argv_2240	= _log_ptr;
#if defined (__DEBUG_INNER_CLIENT__)
		argv_2240->argv_2247 (argv_1152, "preparing inner client for argv_2949 : ", argv_2949.c_str());
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		argv_1993 = inner_port.argv_3237 (_owner, _port, _log_ptr, &argv_3338, &argv_3479);
	}
	if (argv_1993 == argv_1988) { // remap error argv_929
		argv_3254 = true;
		argv_1993 = argv_1981;
	}
	return (argv_1993);
}

argv_3517 argv_882::argv_3414 (argv_820 _owner, argv_3864 _port, argv_917 * _log_ptr) {
	argv_3517 argv_1993 = argv_1981;
	argv_1993 = argv_3237 (_owner, _port, _log_ptr);
	if (argv_1993 == argv_1981) {
		argv_1993 = argv_3332 ();
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
