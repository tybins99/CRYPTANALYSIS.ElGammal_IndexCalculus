#include "../LIB/argv_357.hpp"


Ccallback_set::Ccallback_set () {
	argv_1490					= argv_2889;
	argv_1498						= argv_2889;	
	argv_1494		= argv_2889;
	argv_1502	= argv_2889;
	argv_1547					= argv_2889;
	argv_1623					= argv_2889;
	argv_1517				= argv_2889;
	argv_1503					= argv_2889;
}

void Ccallback_set::argv_855 (argv_917 * _log_ptr, argv_2263 _fn_ptr, argv_820 _name, bool& _bret) {
	if (_fn_ptr == argv_2889) {
		_log_ptr->argv_2247 (argv_1321, "+++ ERROR: function pointer is argv_2889 for callback : ", _name);
		_bret = false;
	}
}

bool Ccallback_set::argv_849 (argv_917 * _log_ptr) {
	bool bret = true;
	argv_855 (_log_ptr, argv_1490,					"argv_1490", bret);
	argv_855 (_log_ptr, argv_1498,						"argv_1498", bret);
	argv_855 (_log_ptr, argv_1494,		"argv_1494", bret);
	argv_855 (_log_ptr, argv_1502,	"argv_1502", bret);
	argv_855 (_log_ptr, argv_1547,					"argv_1547", bret);
	argv_855 (_log_ptr, argv_1623,					"argv_1623", bret);
	argv_855 (_log_ptr, argv_1517,				"argv_1517",bret);
	argv_855 (_log_ptr, argv_1503,					"argv_1503", bret);
	return (bret);
}

argv_1105::argv_1105 () {
	init_done = false;
}

bool argv_1105::init (argv_820 _native_dll_file, argv_820 _log_filename, argv_2263& _kernel_data) {
	bool bret = true;
	if (init_done == true) {
		fprintf (stderr, "+++ ERROR: illegal to call init twice or more !\n");
		bret = false;
	}
	else { // open the log argv_1396
		if (argv_1787.argv_2251.argv_2937 (_log_filename, argv_2889, "") == false) {
			fprintf (stderr, "+++ ERROR: failed to open log argv_1396 : '%s'\n", _log_filename);
			bret = false;
		}
		else {
			argv_3517 argv_1993 = argv_3726.init (&argv_1787, _native_dll_file);
			if (argv_1993 != argv_2168) {
				string serror = argv_1319 (argv_1993);
				fprintf (stderr, "native API init failed ! (%s)\n", serror.c_str());
				bret = false;
			}
			else {
				bret = argv_3250 ();
				if (bret == false) {
					fprintf (stderr, "+++ ERROR: argv_3250...[FAILED]\n");	
				}
				else {
					init_done = true;	
					fprintf (stderr, "(see log argv_1396 : %s)\n", _log_filename);
					argv_1787.argv_2251.argv_2247 (argv_1152, "native API argv_2221 : ", _native_dll_file);
				}
			}
		}
	}
	return (bret);
}

bool argv_1105::argv_3250 () {
	bool bret = true;
	argv_2038.argv_3727			= &argv_3726.toolset;
	argv_2038.argv_3858	= argv_2889;

	argv_3517 argv_1993 = type_matcher_create (&argv_2038.argv_3858, argv_2038.argv_3727);
	if (argv_1993 != argv_3857) {
		string serror = argv_1319 (argv_1993);
		argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: type_matcher_create failed ! - argv_1318 = ", serror.c_str());
		bret = false;
	}
	else {
		argv_1787.argv_2251.argv_2247 (argv_1152, "type_matcher_create...[OK]");
	}
	return (bret);
}

argv_1105::~argv_1105 () {
	if (init_done == true) {
		argv_1787.argv_2251.argv_924 ();
		init_done = false;
	}
}

void argv_1105::init_callback__construct (argv_1630 _fp_construct) {
	callback_set.argv_1490 = _fp_construct;
}

void argv_1105::init_callback__destruct (argv_1633 _fp_destruct) {
	callback_set.argv_1498 = _fp_destruct;	
}

void argv_1105::init_callback__create_scan_result_atom (argv_1632 _fp_create_scan_result_atom) {
	callback_set.argv_1494 = _fp_create_scan_result_atom;
}

void argv_1105::init_callback__destruct_scan_result_atom (argv_1635 _fp_destruct_scan_result_atom) {
	callback_set.argv_1502 = _fp_destruct_scan_result_atom;
}

void argv_1105::init_callback__match_type (argv_1648 _fp_match_type) {
	callback_set.argv_1547 = _fp_match_type;
}

void argv_1105::init_callback__scan_buffer (argv_1699 _fp_scan_buffer) {
	callback_set.argv_1623 = _fp_scan_buffer;
}

void argv_1105::init_callback__get_scan_report (argv_1640 _fp_get_scan_report) {
	callback_set.argv_1517 = _fp_get_scan_report;
}

void argv_1105::init_callback__dysinfect (argv_1636 _fp_dysinfect) {
	callback_set.argv_1503 = _fp_dysinfect;
}

bool argv_1105::argv_3252 (argv_820 _signature_db_path, argv_820 _filename, argv_820 _plugin_log_filename) {
	bool bret = true;
	bret = callback_set.argv_849 (&argv_1787.argv_2251);
	if (bret == false) {
		fprintf (stderr, "+++ ERROR: Callbacks incoherency detected !\n");
	}
	else if (argv_851 (_filename) == false) {
		argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1396 to scan does not exists !");
		fprintf (stderr, "+++ ERROR: argv_1396 to scan not found !\n");
		bret = false;
	}
	else {
		argv_2038.argv_3727->argv_2124 (&argv_2038.argv_2062, _plugin_log_filename);
		argv_1787.argv_2251.argv_2247 (argv_1152, "plugin log argv_1396 : ", _plugin_log_filename);

		argv_2038.argv_3452 = argv_2038.argv_3727->argv_2850 (argv_1434 * sizeof(argv_3572));
		argv_2263 mapper_addr						= argv_2889;
		argv_3572 * argv_3452	= argv_2889;
		argv_3572 * data_ptr			= argv_2889;

		for (argv_3864 i=argv_1435 ; i<argv_1434 ; i++) {
			mapper_addr = argv_2889;
			argv_2038.argv_3727->argv_2320 (&mapper_addr, (argv_2263) argv_2038.argv_3727->argv_2850, (argv_2263) argv_2038.argv_3727->argv_2842);
			argv_3452						= (argv_3572 *) argv_2038.argv_3452;
			data_ptr								= &argv_3452[i];
			data_ptr->argv_1400					= mapper_addr;
		}

		argv_2038.argv_1122 = argv_1439;
		argv_3517 argv_1993 = callback_set.argv_1490 ((argv_2263) &argv_2038, _signature_db_path);
		if (argv_1993 != argv_1413) {
			string serror = argv_1319 (argv_1993);
			argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: 'construct' callback failed ! - argv_1318 = ", serror.c_str());
			bret = false;
		}
		else {
			if (argv_2038.argv_1122 == argv_1439) {
				argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: 'construct' function did not fill his argv_3842 !");	
				bret = false;
			}
			else {
				argv_1787.argv_2251.argv_2247 (argv_1152, "construct...[SUCCESS]");
			}
		}
	}
	return (bret);
}

bool argv_1105::argv_3228 () {
	bool bret = true;
	argv_1787.argv_2251.argv_2247 (argv_1152, "calling 'argv_1197' callback");
	argv_3517 argv_1993 = callback_set.argv_1498 ((argv_2263) &argv_2038);
	if (argv_1993 != argv_1413) {
		string serror = argv_1319 (argv_1993);
		argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: 'argv_1197' callback failed ! - argv_1318 = ", serror.c_str());
		bret = false;
	}
	else {
		argv_1787.argv_2251.argv_2247 (argv_1152, "argv_1197...[SUCCESS]");
	}
	return (bret);
}

bool argv_1105::argv_3089 (argv_820 _filename, argv_2263& _atom_ptr, bool _do_dysinfect) {
	bool bret = true;
	char argv_3828[MAX_PATH];
	bool infection_flag	= false;
	argv_1787.argv_2251.argv_2247 (argv_2886, "argv_1396 matches the argv_1106 argv_3842");
	argv_2038.argv_1122 = argv_1439;
	argv_3517 argv_1993 = callback_set.argv_1623 ((argv_2263) &argv_2038, argv_1401, argv_1416, infection_flag, _atom_ptr);
	if (argv_1993 != argv_1413) {
		string serror = argv_1319 (argv_1993);
		argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1623 failed ! - argv_1318 = ", serror.c_str());
	}
	else if (argv_2038.argv_1122 == argv_1439) {
		argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: 'scan_buffer' function did not fill his argv_3842 !");
		bret = false;
	}
	else if (infection_flag == false) {
		argv_3548 (argv_3828, MAX_PATH, "[not_infected|argv_1396=%s]", _filename);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1787.argv_2251.argv_2247 (argv_2886, argv_3828);
	}
	else { // argv_1396 is infected, let's get a scan report
		char * virus_name_ptr = argv_2889;
		argv_3864 dysinfection_flag;
		argv_2038.argv_1122 = argv_1439;
		argv_1993 = callback_set.argv_1517 ((argv_2263) &argv_2038, _atom_ptr, (char *&) virus_name_ptr, dysinfection_flag);
		if (argv_1993 != argv_1413) {
			string serror = argv_1319 (argv_1993);
			argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1517 failed ! - argv_1318 = ", serror.c_str());
		}
		else if (argv_2038.argv_1122 == argv_1439) {
			bret = false;
			argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: 'get_scan_report' function did not fill it's argv_3842 !");	
		}
		else { // scan report was retrieved succesfully
			string flag_str = dysinfection_possibility_2_string (dysinfection_flag);
			if (virus_name_ptr != argv_2889) {
				argv_3548 (argv_3828, MAX_PATH, "[infected|dysinfection_flag=%s|argv_3980=%s|argv_1396=%s]", flag_str.c_str(), virus_name_ptr, _filename);
			}
			else {
				argv_3548 (argv_3828, MAX_PATH, "[infected|dysinfection_flag=%s|argv_3980=<null>|argv_1396=%s]", flag_str.c_str(), _filename);
			}
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1787.argv_2251.argv_2247 (argv_1152, argv_3828);
			if (_do_dysinfect == false) {
				argv_1787.argv_2251.argv_2247 (argv_1152, "*** skip dysinfection (dysinfection is disabled by the caller)");
			}
			else { // the caller wants us to try a dysinfection
				argv_1787.argv_2251.argv_2247 (argv_1152, "performing a desynfection");
				argv_3517 dys_success_code;
				argv_2038.argv_1122 = argv_1439;
				argv_3864 saved_file_size = argv_1416;
				argv_1993 = callback_set.argv_1503 ((argv_2263) &argv_2038, argv_1401, argv_1416, _atom_ptr, dys_success_code);
				if (argv_1993 != argv_1413) {
					string serror = argv_1319 (argv_1993);
					argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1503 failed ! - argv_1318 = ", serror.c_str());
				}
				else if (argv_2038.argv_1122 == argv_1439) {
					argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: 'dysinfect' function did not fill his argv_3842 !");
					bret = false;
				}
				else {
					argv_1400.argv_925 ();

					string dys_str = dysinfect_success_2_string (dys_success_code);	
					argv_1787.argv_2251.argv_2247 (argv_2886, "dysinfection argv_1261 - argv_3402 : ", dys_str.c_str());
					if (argv_1416 != saved_file_size) {
						if (argv_1416 == 0) {
							argv_1787.argv_2251.argv_2247 (argv_3989, "*** WARNING: 'dysinfect' function asked for argv_1396 deletion (delete not performed for test purpose)");	
						}
						else {
							argv_1993 = argv_2038.argv_3727->argv_2853 (_filename, argv_1416);
							if (argv_1993 != 0) {
								argv_3548 (argv_3828, MAX_PATH, "*** ERROR: failed to modified argv_1396 size : old size = %u, new_size = %u", saved_file_size, argv_1416);
								argv_3828[MAX_PATH - 1] = '\0';
								argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
							}
							else {
								argv_3548 (argv_3828, MAX_PATH, "modified argv_1396 size : old size = %u, new_size = %u", saved_file_size, argv_1416);
								argv_3828[MAX_PATH - 1] = '\0';
								argv_1787.argv_2251.argv_2247 (argv_1152, argv_3828);
							}
						}
					}
				}
			}
		}
	}
	return (bret);
}

bool argv_1105::argv_3442 (argv_820 _signature_db_path, argv_820 _filename, argv_820 _plugin_log_filename, bool _do_dysinfect) {
	bool bret = true;
	char argv_3828[MAX_PATH];
	strncpy (argv_2038.argv_1112, _filename, MAX_PATH);
	argv_2038.argv_1112[MAX_PATH - 1] = '\0';

	argv_1787.argv_2251.argv_2247 (argv_1152, "argv_1396 to scan : ", _filename);

	bret = argv_3252 (_signature_db_path, _filename, _plugin_log_filename);
	if (bret == false) {
		argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: scan preparation...[FAILED]");
	}
	else {
		if (argv_1399 (_filename) == true) {
			bret = argv_3348 (_filename);
			if (bret == false) {
				argv_1787.argv_2251.argv_2247 (argv_3989, "*** WARNING: failed to remove READ-ONLY flag for argv_1396");
				bret = true;
			}
			else {
				argv_1787.argv_2251.argv_2247 (argv_2886, "removed read-only protection for argv_1396 : ", _filename);
			}
		}

		// mmap the argv_1396 to scan
		bret = argv_1400.argv_2464 (_filename, argv_2467, argv_1401, argv_1416);
		if (bret == false) {
			argv_3864 argv_1318, argv_1326;
			argv_1400.argv_1757 (argv_1318, argv_1326);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: failed to mmap argv_1396 : '%s' (argv_1318=%u,argv_1326=%u)", _filename, argv_1318, argv_1326);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
		}
		else {
			argv_1787.argv_2251.argv_2247 (argv_1152, "mmapped the argv_1396 : argv_1396 size = ", argv_1416);	
			bool	match_flag = false;
			argv_2263	argv_727;
			// check whether the argv_1396 matches argv_1106 argv_3842 or not
			argv_3517 argv_1993 = callback_set.argv_1547 ((argv_2263) &argv_2038, argv_1401, argv_1416, match_flag, argv_727);
			if (argv_1993 != argv_3857) {
				string serror = argv_1319 (argv_1993);
				argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1547 failed ! - argv_1318 = ", serror.c_str());
			}
			else if (match_flag == false) { 
				argv_1787.argv_2251.argv_2247 (argv_2886, "argv_1396 does not match the argv_1106 argv_3842");
			}
			else { // argv_1396 matches the argv_1106 argv_3842
				argv_1993 = type_matcher_link_atom (argv_2038.argv_3858, argv_1441, argv_727);
				if (argv_1993 != argv_3857) {
					string serror = argv_1319 (argv_1993);
					argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: type_matcher_link_atom failed ! - argv_1318 = ", serror.c_str());
				}
				else { // perform a scan of the argv_1396
					bret = argv_3089 (_filename, argv_727, _do_dysinfect);
				}
			}
		}
	}

	if (bret == true) {
		argv_3228 ();
	}
	return (bret);
}

