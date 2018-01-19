// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_331.hpp"


argv_888::argv_888 () {
	reset ();
}

void argv_888::reset () {
	argv_2833		= false;
	argv_3892	= false;
	argv_1130		= false;
	argv_763					= false;
	argv_3642			= false;
	argv_3322			= false;
	argv_1833				= false;

	argv_2831	= "";
	argv_1017	= "";
	argv_884	= "";
	argv_3141		= "";

	argv_3732		= argv_2889;

	argv_3726.reset ();
	argv_1020.reset ();
	argv_1135.reset ();
	argv_4001.reset ();

//	m_resolve_query.clear ();
//	m_unique_resolve_query.clear ();
	argv_3954.clear ();
	vector<string>().swap (argv_3954); // force vector to free it's memory	
	argv_3952.clear ();
	vector<string>().swap (argv_3952); // force vector to free it's memory	

	argv_2314.clear ();
	argv_3393.reset ();
	argv_1873.reset ();
	argv_3411.reset ();
	// the public argv_2109 can't be reseted as simply, see 'argv_3881'
}

// @@===========================================@@
argv_887::argv_887 () {
	reset ();
}

void argv_887::reset () {
	argv_1914.reset ();
}

argv_887::~argv_887 () {
	;
}
/*
void argv_887::remove_remaining_tmp_files (argv_820 _dll_directory, argv_820 _plugin_root_dir, argv_820 _log_directory) {
*/
argv_3517 argv_887::argv_762 (argv_820 _conf_filename, argv_820 _log_directory, argv_820 _dll_directory, argv_820 _plugin_root_dir, argv_2263& _kernel_data_ptr) {
	argv_3517 argv_1993 = argv_2103;

	argv_1213 ("argv_887::argv_762 - STARTING", argv_2103, argv_1993);

	remove_remaining_tmp_files (_dll_directory, _plugin_root_dir, _log_directory);
	argv_1993 = argv_2935 (_conf_filename, _log_directory);

	if (argv_1993 == argv_2103) { 
		argv_1213 ("log files open", argv_2103, argv_1993);
		argv_1993 = argv_1733 (_dll_directory, _plugin_root_dir);
		argv_1213 ("temporary files argv_1734", argv_2103, argv_1993);
	}
	
	if (argv_1993 == argv_2103) {
		argv_1993 = argv_2209 (_dll_directory);
		argv_1213 ("native API argv_2198", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) {
		argv_1993 = argv_1914.argv_4001.init (argv_1914.argv_3732, &argv_1914.argv_1787);
		argv_1213 ("xmem manager init", argv_4007, argv_1993);
	}

	if (argv_1993 == argv_4007) {
		argv_1993 = argv_2220 (_dll_directory);
		argv_1213 ("argv_1016 API argv_2198", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) {
		argv_1993 = argv_2200 (_dll_directory);
		argv_1213 ("cipher API argv_2198", argv_2103, argv_1993);
	}
	
	if (argv_1993 == argv_2103) {
		argv_1993 = argv_2204 (_dll_directory);
		argv_1213 ("GMP library argv_2198", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) {
		argv_1993 = argv_2217 (_dll_directory);
		argv_1213 ("public argv_2109 argv_2198", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_2886, "all APIs argv_2221...[SUCCESS]");	
		argv_1993 = argv_2216 (_plugin_root_dir);
		argv_1213 ("plugin list argv_2198", argv_2103, argv_1993);
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3872 () {
	argv_3517 argv_1993 = argv_2103;

	argv_1993 = argv_3871 ();
	argv_1213 ("argv_3871", argv_2103, argv_1993);

	if (argv_1993 == argv_2103) {
		argv_1993 = argv_3885 ();
		argv_1213 ("argv_3885", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) {
		argv_1993 = argv_3889 ();
		argv_1213 ("argv_3889", argv_2103, argv_1993);
	}
/*
	if (argv_1993 == argv_2103) {
		argv_1993 =  un_prepare_symbols_2_resolve ();
		argv_1213 ("un_prepare_symbols_2_resolve", argv_2103, argv_1993);
	}
*/
	if (argv_1993 == argv_2103) {
		argv_1993 =  argv_3886 ();
		argv_1213 ("argv_3886", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) {
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_765 (argv_820 _conf_filename, argv_820 _log_directory, argv_820 _dll_directory, argv_820 _plugin_root_dir, argv_2263& _kernel_data_ptr) {
	argv_3517 argv_1993 = argv_2103;

	argv_1993 = argv_2199 ();
	argv_1213 ("argv_2198 all plugins", argv_2103, argv_1993);

	if (argv_1993 == argv_2103) {
		argv_1993 = argv_3241 ();
		argv_1213 ("argv_3237 dependancies", argv_2103, argv_1993);
	}
/*
	if (argv_1993 == argv_2103) { // argv_3237 symbols that require resolution
		argv_1993 = prepare_symbols_2_resolve ();
		argv_1213 ("preparation of symbols to argv_3385", argv_2103, argv_1993);
	}
*/
	if (argv_1993 == argv_2103) { // for each plugin argv_3842, argv_3385 all their symbols
		argv_1993 = argv_3392 ();
		argv_1213 ("symbols resolution", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) { // for each plugin argv_3842, argv_3385 all their symbols
		argv_1993 = argv_3231 ();
		argv_1213 ("post process symbols resolution", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) { // argv_760 the application dependant kernel
		argv_1993 = argv_761 (_conf_filename, _log_directory, _dll_directory, _plugin_root_dir, _kernel_data_ptr);
		argv_1213 ("argv_760 derivated kernel", argv_2103, argv_1993);
	}


	if (argv_1993 == argv_2196) {
		argv_1993 = argv_2103; // remap error argv_929 
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3873 () {
	argv_3517 argv_1993 = argv_2103;

	argv_1993 = argv_3875 ();
	argv_1213 ("un_load all plugins", argv_2103, argv_1993);

	if (argv_1993 == argv_2103) { 
		argv_1993 = argv_3880 ();
		argv_1213 ("argv_3880", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) { 
		argv_1993 = argv_3881 ();
		argv_1213 ("argv_3881", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) { 
		argv_1993 = argv_3877 ();
		argv_1213 ("argv_3877", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) { 
		argv_1993 = argv_3876 ();
		argv_1213 ("argv_3876", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) { 
		argv_1993 = argv_3882 ();
		argv_1213 ("argv_3882", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) {
		argv_1914.argv_4001.reset ();
		argv_1213 ("xmem manager", argv_2103, argv_1993);
	} 

	if (argv_1993 == argv_2103) {
		argv_1993 = argv_3878 ();
		argv_1213 ("argv_3878", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) {
		argv_1993 = argv_3874 ();
		argv_1213 ("argv_3874", argv_2103, argv_1993);
	}

	if (argv_1993 == argv_2103) {
		argv_1993 = argv_3883 ();
		argv_1213 ("argv_3883", argv_2103, argv_1993);
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_760 (argv_820 _conf_filename, argv_820 _log_directory, argv_820 _dll_directory, argv_820 _plugin_root_dir, argv_2263& _kernel_data_ptr) {
	argv_3517 argv_1993 = argv_2103;

	if (argv_1914.argv_763 == true) {
		argv_1993 = argv_2051;		
	}
	else { // argv_3604 is OK for the operation
		argv_1993 = argv_762 (_conf_filename, _log_directory, _dll_directory, _plugin_root_dir, _kernel_data_ptr);
		argv_1213 ("argv_760 (first half)", argv_2103, argv_1993);

		if (argv_1993 == argv_2103) {
			argv_1993 = argv_765 (_conf_filename, _log_directory, _dll_directory, _plugin_root_dir, _kernel_data_ptr);
			argv_1213 ("argv_760 (second half)", argv_2103, argv_1993);
		}
	} 
	argv_1213 ("argv_760", argv_2103, argv_1993);

	if (argv_1993 == argv_2103) {
		argv_1914.argv_763 = true;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3512 () {
	argv_3517 argv_1993 = argv_2103;
	if (argv_1914.argv_763 == false) {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_3512 : argv_2053");
		argv_1993 = argv_2053;
	}
	else { // argv_3604 is OK for the operation
		argv_1993 = argv_3872 ();
		argv_1213 ("argv_3512 (first half)", argv_2103, argv_1993);

		if (argv_1993 == argv_2103) {
			argv_1993 = argv_3873 ();
			argv_1213 ("argv_3512 (second half)", argv_2103, argv_1993);
		}
	}
	argv_1213 ("argv_3512", argv_2103, argv_1993);
	return (argv_1993);
}

argv_3517 argv_887::argv_1785 (argv_3864& _major, argv_3864& _minor) {
	argv_3517 argv_1993 = argv_2103;
	if (argv_1914.argv_763 == true) {
		_major = 20;
		_minor = 12;
	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_1785 : argv_2053");
		argv_1993 = argv_2053;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_1755 (argv_3864&, argv_3864&) {
	argv_3517 argv_1993 = argv_2103;
	if (argv_1914.argv_763 == true) {

	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_1755 : argv_2053");
		argv_1993 = argv_2053;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_1773 (argv_820 _symbol_name, argv_2263& _retrieved_address) {
	argv_3517 argv_1993 = argv_2103;
	argv_1993 = argv_1914.argv_3393.argv_2257 (argv_3173, _symbol_name, _retrieved_address);
	if (argv_1993 != argv_3400) {
		char argv_3828[MAX_PATH];
		string serror = argv_1319 (argv_1993);
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::argv_1773 - argv_2257 failed for symbol '%s' (argv_1318=%s)", _symbol_name, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
	}

	if (argv_1993 == argv_3400) {
		argv_1993 = argv_2103; // remap error argv_929
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_2209 (argv_820 _dll_directory) {
	argv_3517 argv_1993 = argv_2103;
#if defined (__DEBUG_KERNEL__)
	argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "argv_887::argv_2209 - dll argv_2817 : ", argv_1914.argv_2831.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

	if (argv_1914.argv_2833 == false) {
		argv_1993 = argv_1914.argv_3726.init (&argv_1914.argv_1787, argv_1914.argv_2831.c_str());
		if (argv_1993 != argv_2168) {
			string serror = argv_1319 (argv_1993);
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2209 - argv_3726::init failed ! - errno = ", serror.c_str());
		}
		else {
			argv_1914.argv_3732 = &argv_1914.argv_3726.toolset;
		}
	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2209 - argv_2057");
		argv_1993 = argv_2057;
	}

	// remap error argv_929
	if (argv_1993 == argv_2168) {
		argv_1993						= argv_2103;
		argv_1914.argv_2833	= true;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3878 () {
	argv_3517 argv_1993	= argv_2103;
	argv_1993		= argv_1914.argv_3726.reset ();
	if (argv_1993 == argv_2168) {
		argv_1993 = argv_2103; // remap error argv_929
	}
	argv_1914.argv_2833 = false;
	return (argv_1993);
}

argv_3517 argv_887::argv_2220 (argv_820 _dll_directory) {
	argv_3517 argv_1993 = argv_2103;
#if defined (__DEBUG_KERNEL__)
	argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "argv_887::argv_2220 - dll argv_2817 : ", argv_1914.argv_1017.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

	if (argv_1914.argv_3892 == false) {
		argv_1993 = argv_1914.argv_1020.init (&argv_1914.argv_1787, argv_1914.argv_1017.c_str());
		if (argv_1993 != argv_2168) {
			string serror = argv_1319 (argv_1993);
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2220 - argv_1020::init failed ! - errno = ", serror.c_str());
		}
		else {
			argv_1993							= argv_2103;
			argv_1914.argv_3892	= true;	
		}
	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2220 - argv_2057");
		argv_1993 = argv_2057;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3882 () {
	argv_3517 argv_1993	= argv_2103;
	argv_1993		= argv_1914.argv_1020.reset ();
	if (argv_1993 == argv_2168) {
		argv_1993 = argv_2103; // remap error argv_929
	}
	argv_1914.argv_3892 = false;
	return (argv_1993);
}

argv_3517 argv_887::argv_2200 (argv_820 _dll_directory) {
	argv_3517 argv_1993 = argv_2103;
#if defined (__DEBUG_KERNEL__)
	argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "argv_887::argv_2209 - dll argv_2817 : ", argv_1914.argv_884.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

	if (argv_1914.argv_1130 == false) {
		argv_1993 = argv_1914.argv_1135.init (&argv_1914.argv_1787, argv_1914.argv_884.c_str());
		if (argv_1993 != argv_2168) {
			string serror = argv_1319 (argv_1993);
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2200 - argv_1135::init failed ! - errno=", serror.c_str());
		}
		else {
			argv_1993						= argv_2103;
			argv_1914.argv_1130	= true;
		}
	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2200 - argv_2057");
		argv_1993 = argv_2057;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3876 () {
	argv_3517 argv_1993	= argv_2103;
	argv_1993		= argv_1914.argv_1135.reset ();
	if (argv_1993 == argv_2168) {
		argv_1993 = argv_2103; // remap error argv_929
	}
	argv_1914.argv_1130 = false;
	return (argv_1993);
}

argv_3517 argv_887::argv_2204 (argv_820 _dll_directory) {
	argv_3517 argv_1993 = argv_2103;

	if (argv_1914.argv_1833 == false) {
		string gmp_dll_name = _dll_directory;
#if defined (__WIN32_OS__)
		gmp_dll_name		= gmp_dll_name + argv_1914.argv_1787.argv_2976 + "gmp.dll";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		gmp_dll_name		= gmp_dll_name + argv_1914.argv_1787.argv_2976 + "libgmp.so";
#endif // #if defined (__LINUX_OS__)
		argv_1993 = argv_1914.argv_1873.argv_2208 (gmp_dll_name.c_str());

		if (argv_1993 == argv_1847) { // remap error argv_929
			argv_1914.argv_3411.init (&argv_1914.argv_1873);
			argv_1914.argv_1833	= true;
			argv_1993					= argv_2103;	
		}
		else {
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: failed to argv_2198 dll : ", gmp_dll_name.c_str());
		}
	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2204 - argv_2057");
		argv_1993 = argv_2057;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3877 () {
	argv_3517 argv_1993 = argv_2103;
	argv_1914.argv_1873.argv_3915 ();
	return (argv_1993);
}

argv_3517 argv_887::argv_2217 (argv_820 _dll_directory) {
	argv_3517 argv_1993 = argv_2103;

	if (argv_1914.argv_3322 == false) {
		string pub_key_filename = _dll_directory;
		pub_key_filename = pub_key_filename + argv_1914.argv_1787.argv_2976 + "rsa_pub_key.txt";
		argv_1914.argv_3321.construct (argv_1914.argv_1873);

		// generate the symmetric argv_2109
		string symetric_key = argv_1730 ();

		// argv_2198 the public argv_2109 using the symmetric argv_2109
		argv_1993 = argv_1914.argv_3411.argv_2207 (pub_key_filename.c_str(), symetric_key.c_str(), argv_1914.argv_3321);

		// erase the symmetric argv_2109
		symetric_key = "AABBCCDDEEFF";

		argv_1914.argv_3322 = true;
	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2217 - argv_2057");
		argv_1993 = argv_2057;
	}

	if (argv_1993 == argv_1847) { // remap error argv_929
		argv_1993 = argv_2103;	
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3881 () {
	argv_3517 argv_1993 = argv_2103;
	if (argv_1914.argv_3322 == false) {
		argv_1993 = argv_2058;
	}
	else {
		argv_1914.argv_3321.argv_1197 (argv_1914.argv_1873);
		argv_1914.argv_3322 = false;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_2216 (argv_820 _plugin_directory) {
	argv_3517 argv_1993 = argv_2103;
	string full_filename = _plugin_directory + argv_1914.argv_1787.argv_2976 + argv_1914.argv_1787.argv_3149;
	if (argv_1398 (&argv_1914.argv_1787, argv_1914.argv_3732, full_filename.c_str()) == false) {

		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: could not find plugin list argv_1396 ! - argv_1396 was : ", full_filename.c_str());
		argv_1993 = argv_2088;		
	}
	else { // the plugin list argv_1396 exists
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "loading plugin list argv_1396 : ", full_filename.c_str());

		// mmap the plugin list argv_1396
		argv_836 mapper_tmp;
		argv_3862 * ciphered_ptr		= argv_2889;
		argv_3864 deciphered_ptr		= (argv_3864) argv_2889;
		argv_3864 ciphered_size		= 0;
		argv_3864 deciphered_size	= 0;

		bool bret = mapper_tmp.argv_2464 (full_filename.c_str(), argv_2466, ciphered_ptr, ciphered_size);
		if (bret == false) {
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2216 - mmap failed for argv_1396 : ", full_filename.c_str());
			argv_1993 = argv_2091;
		}
		else { // plugin list argv_1396 mmapped succesfully
			// decipher the plugin list argv_1396 using the public argv_2109
			argv_1993 = argv_1914.argv_1135.argv_1168 (argv_1914.argv_3732, &argv_1914.argv_1873, argv_1914.argv_3321, (argv_3864) ciphered_ptr, ciphered_size, deciphered_ptr, deciphered_size);
			if (argv_1993 != argv_1134) {
				char argv_3828[MAX_PATH];
				string serror = argv_1319 (argv_1993);
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::argv_2216: decypher_file failed for argv_1396 : %s (errno: %s)", full_filename.c_str(), serror.c_str());
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
			}
			else { // argv_1396 deciphered succesfully
				// parse the deciphered plugin list
				argv_1993 = argv_2972 ((argv_3862 *) deciphered_ptr, deciphered_size, _plugin_directory);

				// free the argv_771 associated with the deciphered plugin list argv_1396
				argv_1914.argv_3732->argv_2843 ((argv_2263) deciphered_ptr, deciphered_size);
			}

			// argv_921 the mmapped ciphered plugin list argv_1396.
			mapper_tmp.argv_925 ();
		}
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3880 () {
	argv_3517 argv_1993	= argv_2103;
	
	argv_1914.argv_3952.clear ();
	vector<string>().swap (argv_1914.argv_3952);

	argv_1914.argv_3954.clear ();
	vector<string>().swap (argv_1914.argv_3954);
	return (argv_1993);
}
/*
argv_3517 argv_887::argv_3391 (map<string, argv_1034 *>::iterator& _iter_loaded, argv_820 _symbol_name, bool _duplicate_allowed) {
	argv_3517 argv_1993 = argv_2103;
	if (strlen(_symbol_name) == 0) {
		argv_1993 = argv_2036;
	}
	else { // parameters are ok
		argv_3864 plugin_type = _iter_loaded->second->argv_3842;
		argv_3864 argv_3736 = _iter_loaded->second->argv_3736;
		argv_809 *	loader_ptr		= argv_2889;
		argv_3862 *			solved_address	= argv_2889;

		// retrieve the COFF loader associated with the argv_1106 plugin
		loader_ptr = _iter_loaded->second->argv_1737 ();
		// argv_3385 this symbol using the argv_2810 (dependancy list)
		map<string, argv_809 *> dependancy_list_ptr = _iter_loaded->second->argv_2810;
		argv_1993 = loader_ptr->argv_3385 (_iter_loaded->first.c_str(), _iter_loaded->first.c_str(), _symbol_name, dependancy_list_ptr, solved_address);
		if (argv_1993 != argv_947) {
			char argv_3828[MAX_PATH];
			string serror = argv_1319 (argv_1993);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::argv_3391 - argv_3385 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_3736=%u] (argv_1318=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_3736, serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
		}
		else { // symbol resolved succesfully
			// argv_616 this resolved symbol to the shelf
#if defined (__DEBUG_KERNEL__)
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "argv_626: plugin_type=%d, argv_3736=%d, _symbol_name=%s, solved_address=0x%X, duplicate_allowed=%d", plugin_type, argv_3736, _symbol_name, solved_address, _duplicate_allowed);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_KERNEL__)
			argv_1993 = argv_1914.argv_3393.argv_626 (&argv_1914.argv_1787, plugin_type, argv_3736, _symbol_name, solved_address, _duplicate_allowed);
			if (argv_1993 != argv_3400) {
				char argv_3828[MAX_PATH];
				string serror = argv_1319 (argv_1993);
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::argv_3391 - argv_626 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_3736=%u] (argv_1318=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_3736, serror.c_str());
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
			}
		}
	}

	if ((argv_1993 == argv_947) || (argv_1993 == argv_3400)) {
		argv_1993 = argv_2103; // remap error argv_929
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3888 () {
	argv_3517 argv_1993 = argv_2103;
	return (argv_1993);
}
*/

/*
argv_3517 argv_887::resolve_all_symbols_of_profile (map<string, argv_1034 *>::iterator& _iter_loaded, argv_1079& _resolve_query) {
	argv_3517 argv_1993 = argv_2103;
	bool duplicate_allowed;
	argv_3864 unused;	
	_resolve_query.argv_1780 (unused, duplicate_allowed);
	// iterate through all symbols that are to be resolved for this plugin
	string symbol_2_resolve;
	bool bret = _resolve_query.argv_1753 (symbol_2_resolve);
	while (bret == true) { // argv_3385 argv_2929 symbol for this plugin
		argv_1993 = argv_3391 (_iter_loaded, symbol_2_resolve.c_str(), duplicate_allowed);
		if (argv_1993 != argv_2103) {
			char argv_3828[MAX_PATH];
			string serror = argv_1319 (argv_1993);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::resolve_all_symbols_of_profile - argv_3391 failed for plugin '%s' and symbol '%s' [plugin_type=%u|argv_3736=%u] (argv_1318=%s)", _iter_loaded->first.c_str(), symbol_2_resolve.c_str(), _iter_loaded->second->argv_3842, _iter_loaded->second->argv_3736, serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
			break;
		}
#if defined (__DEBUG_KERNEL__)
		else {
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "resolved symbol '%s' for plugin '%s'", symbol_2_resolve.c_str(), _iter_loaded->first.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "");
		}
#endif // #if defined (__DEBUG_KERNEL__)
		bret = _resolve_query.argv_1772 (symbol_2_resolve);
	}
	return (argv_1993);
}*/

// NOTICE: we argv_2253 the profile "by argv_2817" for unique plugins.
/*
argv_3517 argv_887::resolve_one_unique_plugin_symbols (map<string, argv_1034 *>::iterator& _iter_loaded) {
	argv_3517 argv_1993 = argv_2103;
	map<string, argv_1079>::iterator query_iter;
	query_iter = argv_1914.m_unique_resolve_query.find (_iter_loaded->first); // argv_2253 by argv_2817
	if (query_iter == argv_1914.m_unique_resolve_query.end()) {
		char argv_3828[MAX_PATH]; 
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::resolve_one_unique_plugin_symbols - argv_2253 argv_3385 profile failed for plugin '%s' (plugin argv_3842: %u, argv_3736: %u)", _iter_loaded->first.c_str(), _iter_loaded->second->argv_3842, _iter_loaded->second->argv_3736);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
		argv_1993 = argv_2097;
	}
	else {
		argv_1993 = resolve_all_symbols_of_profile (_iter_loaded, query_iter->second);
	}
	return (argv_1993);
}*/

/*
argv_3517 argv_887::resolve_one_multiple_plugin_symbols (map<string, argv_1034 *>::iterator& _iter_loaded) {
	argv_3517 argv_1993 = argv_2103;
	map<argv_3864, argv_1079>::iterator query_iter;
	// argv_2253 the argv_3385 profile associated with this plugin argv_3842
	query_iter = argv_1914.m_resolve_query.find (_iter_loaded->second->argv_3842); // argv_2253 by argv_3842
	if (query_iter == argv_1914.m_resolve_query.end()) {
		char argv_3828[MAX_PATH]; 
		argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::resolve_one_multiple_plugin_symbols - argv_2253 argv_3385 profile failed for plugin '%s' (plugin argv_3842: %u, argv_3736: %u)", _iter_loaded->first.c_str(), _iter_loaded->second->argv_3842, _iter_loaded->second->argv_3736);
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
		argv_1993 = argv_2097;
	} 
	else { // found the corresponding argv_3385 profile
		argv_1993 = resolve_all_symbols_of_profile (_iter_loaded, query_iter->second);
	}
	return (argv_1993);
}*/

// we use 2 different structures :
// - argv_2929 used only when loading : it is a structure that permits to locate rapidly
//   the plugin by target argv_3842 because the argv_2198 needs to fill in different fields
//   asynchronously.
// - argv_2929 used by the kernel plugin : it is a simple linked list that is generated
//   after all symbols are resolved.
/*
	argv_3173=0,
	argv_3175,
	argv_3172,	
	argv_3171,
	argv_3174, // just to know how many plugin types we have	
	argv_3176, 
*/
/*
argv_3517 argv_887::argv_3390 (map<string, argv_1034 *>::iterator& _iter_loaded) {
	argv_3517 argv_1993 = argv_2103;
	argv_3864 argv_3842 = _iter_loaded->second->argv_3842;
	if ((argv_3842==argv_3172) || 
		(argv_3842==argv_3171)) { 
		argv_1993 = resolve_one_multiple_plugin_symbols (_iter_loaded);
	}
	else {
		argv_1993 = resolve_one_unique_plugin_symbols (_iter_loaded);
	}
	return (argv_1993);
}*/

argv_3517 argv_887::argv_3391 (map<string, argv_1034 *>::iterator& _iter_loaded, argv_820 _symbol_name, bool _duplicate_allowed) {
	argv_3517 argv_1993 = argv_2103;
	if (strlen(_symbol_name) == 0) {
		argv_1993 = argv_2036;
	}
	else { // parameters are ok
		argv_3864 plugin_type = _iter_loaded->second->argv_3842;
		argv_3864 argv_3736 = _iter_loaded->second->argv_3736;
		argv_809 *	loader_ptr		= argv_2889;
		argv_3862 *			solved_address	= argv_2889;

		// retrieve the COFF loader associated with the argv_1106 plugin
		loader_ptr = _iter_loaded->second->argv_1737 ();
		// argv_3385 this symbol using the argv_2810 (dependancy list)
		map<string, argv_809 *> dependancy_list_ptr = _iter_loaded->second->argv_2810;
		argv_1993 = loader_ptr->argv_3385 (_iter_loaded->first.c_str(), _iter_loaded->first.c_str(), _symbol_name, dependancy_list_ptr, solved_address);
		if (argv_1993 != argv_947) {
			char argv_3828[MAX_PATH];
			string serror = argv_1319 (argv_1993);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::argv_3391 - argv_3385 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_3736=%u] (argv_1318=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_3736, serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
		}
		else { // symbol resolved succesfully
			// argv_616 this resolved symbol to the shelf
#if defined (__DEBUG_KERNEL__)
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "argv_626: plugin_type=%d, argv_3736=%d, _symbol_name=%s, solved_address=0x%X, duplicate_allowed=%d", plugin_type, argv_3736, _symbol_name, solved_address, _duplicate_allowed);
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, argv_3828);
#endif // #if defined (__DEBUG_KERNEL__)
			argv_1993 = argv_1914.argv_3393.argv_626 (&argv_1914.argv_1787, plugin_type, argv_3736, _symbol_name, solved_address, _duplicate_allowed);
			if (argv_1993 != argv_3400) {
				char argv_3828[MAX_PATH];
				string serror = argv_1319 (argv_1993);
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::argv_3391 - argv_626 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_3736=%u] (argv_1318=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_3736, serror.c_str());
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
			}
		}
	}

	if ((argv_1993 == argv_947) || (argv_1993 == argv_3400)) {
		argv_1993 = argv_2103; // remap error argv_929
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3888 () {
	argv_3517 argv_1993 = argv_2103;
	return (argv_1993);
}

argv_3517 argv_887::argv_3390 (map<string, argv_1034 *>::iterator& _iter_loaded) {
	argv_3517 argv_1993 = argv_2103;
	string exported_symbol;
	argv_3864 argv_3842 = _iter_loaded->second->argv_3842;
	bool duplicate_allowed	= false;
	if ((argv_3842 == argv_3172) || (argv_3842 == argv_3171)) {
		duplicate_allowed = true;
	}

	bool bret = _iter_loaded->second->argv_1749 (exported_symbol);
	while (bret == true) {
		argv_1993 = argv_3391 (_iter_loaded, exported_symbol.c_str(), duplicate_allowed);
		if (argv_1993 != argv_2103) {
			string serror = argv_1319 (argv_1993);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: failed to argv_3385 symbol '%s' for plugin '%s' ! - argv_1318 = %s", exported_symbol.c_str(), _iter_loaded->first.c_str(), serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
			break;
		}
		bret = _iter_loaded->second->argv_1768 (exported_symbol);
	}
	return (argv_1993);
}

// iterate through all exported symbols for argv_1106 plugin and argv_3385 them
argv_3517 argv_887::argv_3887 () {
	argv_3517 argv_1993 = argv_2103;
	return (argv_1993);
}

argv_3517 argv_887::argv_3392 () {
	argv_3517 argv_1993 = argv_2103;
	map<string, argv_1034 *>::iterator iter_loaded;
#if defined (__DEBUG_KERNEL__)
	argv_1914.argv_1787.argv_2251.argv_2247 (argv_2886, "resolving symbols : number of argv_2221 plugins : ", argv_1914.argv_2314.size ());
#endif // #if defined (__DEBUG_KERNEL__)

	// iterate through all possible plugins and argv_3554 their respective symbols
	for (iter_loaded=argv_1914.argv_2314.begin() ; iter_loaded != argv_1914.argv_2314.end() ; ++iter_loaded) {
#if defined (__DEBUG_KERNEL__)
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_2886, "resolving symbols for plugin : ", iter_loaded->first.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

		argv_1993 = argv_3390 (iter_loaded);
		if (argv_1993 != argv_2103) {
			char argv_3828[MAX_PATH];
			string serror = argv_1319 (argv_1993);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::argv_3392 - argv_3390 failed for plugin '%s' (argv_1318=%s)", iter_loaded->first.c_str(), serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
			break;
		}
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3889 () {
	argv_3517 argv_1993 = argv_2103;
	return (argv_1993);
}

/*
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ Plugin list example
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
general_plugin.plugin
argv_2038.plugin
fake_detect.plugin
fake_detect_2.plugin
fake_scan.plugin
fake_scan_2.plugin
file_type_result.plugin
*/
argv_3517 argv_887::argv_2972 (argv_3862 * _buf_ptr, argv_3864 _size, argv_820 _plugin_directory) {
	argv_3517 argv_1993 = argv_2103;
	if ((_buf_ptr == argv_2889) || (_size == 0) || (_plugin_directory == argv_2889)) {
		argv_1993 = argv_2060;
	}
	else { // parameters are OK
		string argv_1446;
		argv_3864 i			= 0;
		bool commented	= false;

		while (i < _size) {
			commented = false;

			// argv_1042 white spaces
			while ((i< _size) && ((_buf_ptr[i]==' ') || (_buf_ptr[i]=='\n') || (_buf_ptr[i]=='\t') || (_buf_ptr[i]=='\r') || (_buf_ptr[i]=='\n'))) {
				i++;
			}

			if (i >=_size) {
				break;
			}

			// check whether the argv_2173 was commented
			if (((i+1) < _size) && (_buf_ptr[i]=='/') && (_buf_ptr[i+1]=='/')) {
				commented = true;
			}

			argv_1446 = "";
			// argv_1042 the rest of the argv_2173
			while ((i< _size) && (_buf_ptr[i] != '\r') && (_buf_ptr[i] != '\n')) {
				argv_1446 += _buf_ptr[i];
				i++;
			}

			if (argv_1446.size() > 0) {
				if (commented == true) {
					argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "ignoring commented plugin : ", argv_1446.c_str());	
				}
				else {
					argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "==>", argv_1446.c_str(), "<==");
					// build and save the absolute argv_1446 from relative argv_1446
					string full_filename = _plugin_directory;
					full_filename = full_filename + argv_1914.argv_1787.argv_2976 + argv_1446;
					argv_1914.argv_3952.push_back (full_filename);

					// also save the relative argv_2817 as it is necessary for further use
					argv_1914.argv_3954.push_back (argv_1446);
				}
			}
		}
	}
	return (argv_1993);
}

argv_3517 argv_3884 () {
	argv_3517 argv_1993 = argv_2103;
	return (argv_1993);
}

argv_3517 argv_887::argv_2214 (argv_820 _relat_name, argv_820 _abs_name, argv_1034 * _plugin_ptr) {
	argv_3517 argv_1993 = argv_2103;
	char argv_3828[MAX_PATH];

	// ensure that this plugin was not already argv_2221
	map<string, argv_1034 *>::iterator iter_local;
	iter_local = argv_1914.argv_2314.find (_relat_name);
	if (iter_local != argv_1914.argv_2314.end()) {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2214: plugin already argv_2221 ! - argv_2817 : ", _relat_name);
		argv_1993 = argv_2094;
	}
	else { // the plugin was not argv_2221 yet
		argv_1993 = _plugin_ptr->init (&argv_1914.argv_1787, argv_1914.argv_3732, &argv_1914.argv_1020, &argv_1914.argv_1135, &argv_1914.argv_4001);
		if (argv_1993 != argv_3168) {
			string erstring = argv_1319 (argv_1993);
			argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::argv_2214 - plugin init failed for plugin '%s' - argv_1318=%s", _relat_name, erstring.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
			argv_1993 = argv_2092;
		}
		else { // plugin was succesfully initialized
			argv_1993 = _plugin_ptr->argv_2202 (&argv_1914.argv_1873, argv_1914.argv_3321, _abs_name);
			if (argv_1993 != argv_3168) {
				string erstring = argv_1319 (argv_1993);
				argv_3548 (argv_3828, MAX_PATH, "+++ ERROR: argv_887::argv_2214 - plugin argv_2198 from argv_1396 failed for plugin '%s' - argv_1318=%s", _relat_name, erstring.c_str());
				argv_3828[MAX_PATH - 1] = '\0';
				argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
				argv_1993 = argv_2092;
			}
			else { // plugin was succesfully argv_2221 from it's corresponding argv_1396
				argv_1993 = argv_2103;
#if defined (__DEBUG_KERNEL__)
				argv_1914.argv_1787.argv_2251.argv_2247 (argv_2886, "plugin argv_2221 successfully : ", _abs_name);
#endif // #if defined (__DEBUG_KERNEL__)
				// save up the coff loader into the map for the "argv_3385 symbol" step
				argv_1914.argv_2314[_relat_name] = _plugin_ptr;
			}
		}
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3879 () {
	argv_3517 argv_1993 = argv_2103;
	return (argv_1993);
}

argv_3517 argv_887::argv_2199 () {
	argv_3517 argv_1993 = argv_2103;
	argv_3864 nb_plugin = argv_1914.argv_3952.size ();
	argv_1034 * plugin_ptr = argv_2889;

	for (argv_3864 i=0 ; i<nb_plugin ; i++) {
		// allocate a new plugin
		plugin_ptr = new (std::nothrow) argv_1034;
		if (plugin_ptr == argv_2889) {
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2199 - memory allocation failed !");
			argv_1993 = argv_2065;
			break;
		}

		argv_1993 = argv_2214 (argv_1914.argv_3954[i].c_str(), argv_1914.argv_3952[i].c_str(), plugin_ptr);
		if (argv_1993 != argv_2103) {
			string serror = argv_1319 (argv_1993);
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "argv_887::argv_2199 - failed to argv_2198 plugin '%s' - errno = %s", argv_1914.argv_3952[i].c_str(), serror.c_str());
			argv_3828[MAX_PATH - 1] = '\0';
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
			break;
		}
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3875 () {
	argv_3517 argv_1993 = argv_2103;
	return (argv_1993);
}

void argv_887::argv_1213 (argv_820 _msg, argv_3517 _success_code, argv_3517 _actual_code) {
	if (_actual_code != _success_code) {
		char argv_3828[MAX_PATH];
		string serror = argv_1319 (_actual_code);
		argv_3548 (argv_3828, MAX_PATH, "%s...[FAILED] - errno = %s", _msg, serror.c_str());
		argv_3828[MAX_PATH - 1] = '\0';
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, argv_3828);
		//log_stat (argv_3828, argv_1914.nb_kb_debug, argv_1914.nb_handle_debug);
	}
	else { // operation succeeded 
#if defined (__DEBUG_KERNEL__)
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, _msg, "...[SUCCESS]");
		{
			char argv_3828[MAX_PATH];
			argv_3548 (argv_3828, MAX_PATH, "%s...[SUCCESS]", _msg);
			argv_3828[MAX_PATH - 1] = '\0';
			//log_stat (argv_3828, argv_1914.nb_kb_debug, argv_1914.nb_handle_debug);
		}
#endif // #if defined (__DEBUG_KERNEL__)
	}
}


argv_3517 argv_887::argv_2935 (argv_820 _conf_filename, argv_820 _log_directory) {
	argv_3517 argv_1993 = argv_2103;

	if (argv_1914.argv_763 == false) {
		// open the log argv_1396 that contains general messages
		string full_filename;
		argv_1731 (_log_directory, "", "log", "txt", full_filename, false);
		#if defined (__LINUX_OS__)
		cerr << "opening log : " << full_filename.c_str() << endl;
		#endif // #if defined (__LINUX_OS__)
		argv_1914.argv_1787.argv_2251.argv_2937 (full_filename.c_str(), &argv_1914.argv_1787.argv_2251, "[log] ");
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_2886, "booting kernel");
	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_2935 : argv_2051");
		argv_1993 = argv_2051;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3883 () {
	argv_3517 argv_1993	= argv_2103;
#if defined (__DEBUG_KERNEL__)
	argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "closing all log files");
#endif // #if defined (__DEBUG_KERNEL__)
	argv_1914.argv_1787.argv_2251.argv_2247			(argv_660, "<<< SHUTDOWN KERNEL >>>");

	// delete all log files (DEBUG PURPOSE ONLY)
	string file_2_delete;
	file_2_delete = argv_1914.argv_1787.argv_2251.argv_1747 ();
	argv_1914.argv_1787.argv_2251.argv_924 ();
	argv_1184 (file_2_delete.c_str());

	return (argv_1993);
}


void argv_887::remove_remaining_tmp_files (argv_820 _dll_directory, argv_820 _plugin_root_dir, argv_820 _log_directory) {
	argv_1182 (_dll_directory,		"*.delme");
	argv_1182 (_plugin_root_dir,	"*.delme");
	argv_1182 (_log_directory,		"*.txt");
} 


// because we are not allowed to use original files (hot update)
argv_3517 argv_887::argv_1733 (argv_820 _dll_directory, argv_820 _plugin_root_dir) {
	argv_3517 argv_1993							= argv_2103;
	string dll_name						= _dll_directory;
	string argv_1247				= _dll_directory;
	string native_api_dll_orig_name		= argv_1247 + argv_1914.argv_1787.argv_2976 + argv_1914.argv_1787.argv_2832;
	string compress_api_dll_orig_name	= argv_1247 + argv_1914.argv_1787.argv_2976 + argv_1914.argv_1787.argv_1018;
	string cipher_api_dll_orig_name		= argv_1247 + argv_1914.argv_1787.argv_2976 + argv_1914.argv_1787.argv_885;
#if defined (__WIN32_OS__)
	string suffix						= "dll.delme";
#endif
#if defined (__LINUX_OS__)
	string suffix						= "so.delme";
#endif // #if defined (__LINUX_OS__)

	// generate the NATIVE API's temp DLL argv_2817
	argv_1993 = argv_1731 (_dll_directory, native_api_dll_orig_name.c_str(), "native_api", suffix.c_str(), argv_1914.argv_2831);
	if (argv_1993 != 0) {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_1733 - failed to generate NATIVE API DLL argv_3828 argv_1396 : ", native_api_dll_orig_name.c_str());
		argv_1993 = argv_2047;
	}
	else {
		argv_1993 = argv_2103;
#if defined (__DEBUG_KERNEL__)
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "native_api_dll_orig_name = ", native_api_dll_orig_name.c_str());
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "argv_2831 = ", argv_1914.argv_2831.c_str());
#endif // #if defined (__DEBUG_KERNEL__)
		if (argv_851 (argv_1914.argv_2831.c_str()) == false) {
			argv_1993 = argv_2048;
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_1733 - native API argv_1396 not found after creation !");
		}
	}

	// generate the COMPRESS API's temp DLL argv_2817
	if (argv_1993 == argv_2103) {
		argv_1993 = argv_1731 (_dll_directory, compress_api_dll_orig_name.c_str(), "compress_api", suffix.c_str(), argv_1914.argv_1017);
		if (argv_1993 != 0) {
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_1733 - failed to generate COMPRESS API DLL argv_3828 argv_1396 : ", compress_api_dll_orig_name.c_str());
			argv_1993 = argv_2047;
		}
		else {
			argv_1993 = argv_2103;
#if defined (__DEBUG_KERNEL__)
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "compress_api_dll_orig_name = ", compress_api_dll_orig_name.c_str());
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "argv_1017 = ", argv_1914.argv_1017.c_str());
#endif // #if defined (__DEBUG_KERNEL__)
			if (argv_851 (argv_1914.argv_1017.c_str()) == false) {
				argv_1993 = argv_2048;
				argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_1733 - argv_1016 API argv_1396 not found after creation !");
			}
		}
	}

	// generate the CIPHER API's temp DLL argv_2817
	if (argv_1993 == argv_2103) {
		argv_1993 = argv_1731 (_dll_directory, cipher_api_dll_orig_name.c_str(), "cipher_api", suffix.c_str(), argv_1914.argv_884);
		if (argv_1993 != 0) {
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_1733 - failed to generate CIPHER API DLL argv_3828 argv_1396 : ", cipher_api_dll_orig_name.c_str());
			argv_1993 = argv_2047;
		}
		else {
			argv_1993 = argv_2103;
#if defined (__DEBUG_KERNEL__)
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "cipher_api_dll_orig_name = ", cipher_api_dll_orig_name.c_str());
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "argv_884 = ", argv_1914.argv_884.c_str());
#endif // #if defined (__DEBUG_KERNEL__)
			if (argv_851 (argv_1914.argv_884.c_str()) == false) {
				argv_1993 = argv_2048;
				argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_1733 - cipher API argv_1396 not found after creation !");
			}
		}
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3874 () {
	argv_3517 argv_1993	= argv_2103;
#if defined (__DEBUG_KERNEL__)
	argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "deleting temp files");
#endif // #if defined (__DEBUG_KERNEL__)

	bool bret1 = argv_1184 (argv_1914.argv_2831.c_str());
	if (bret1 == true) {
#if defined (__DEBUG_KERNEL__)
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "deletion of temp argv_1396 : ", argv_1914.argv_2831.c_str(), "...[SUCCESS]");
#endif // #if defined (__DEBUG_KERNEL__)
	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: deletion of temp argv_1396 : ", argv_1914.argv_2831.c_str(), "...[FAILED]");
	}

	bool bret2 = argv_1184 (argv_1914.argv_1017.c_str());
	if (bret2 == true) {
#if defined (__DEBUG_KERNEL__)
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "deletion of temp argv_1396 : ", argv_1914.argv_1017.c_str(), "...[SUCCESS]");
#endif // #if defined (__DEBUG_KERNEL__)
	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: deletion of temp argv_1396 : ", argv_1914.argv_1017.c_str(), "...[FAILED]");
	}
	
	bool bret3 = argv_1184 (argv_1914.argv_884.c_str());
	if (bret3 == true) {
#if defined (__DEBUG_KERNEL__)
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1152, "deletion of temp argv_1396 : ", argv_1914.argv_884.c_str(), "...[SUCCESS]");
#endif // #if defined (__DEBUG_KERNEL__)
	}
	else {
		argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: deletion of temp argv_1396 : ", argv_1914.argv_884.c_str(), "...[FAILED]");
	}

	if ((bret1 == false) || (bret2 == false) || (bret3 == false)) {
		argv_1993 = argv_2105;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3241 () {
	argv_3517 argv_1993 = argv_2103;
	map<string, argv_1034 *>::iterator it_loc;

	for (it_loc=argv_1914.argv_2314.begin() ; it_loc != argv_1914.argv_2314.end() ; ++it_loc) {
		argv_1993 = it_loc->second->argv_1721 (argv_1914.argv_2314);
		if (argv_1993 != argv_3168) {
			argv_1914.argv_1787.argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_887::argv_3241 failed with plugin : ", it_loc->first.c_str());
			break;
		}
	}

	if (argv_1993 == argv_3168) {
		argv_1993 = argv_2103;
	}
	return (argv_1993);
}

argv_3517 argv_887::argv_3886 () {
	argv_3517 argv_1993 = argv_2103;
	return (argv_1993);
}
/*
argv_3517 argv_887::prepare_symbols_2_resolve () {
	// should never be called (argv_742 class function is meaningless)
	argv_3517 argv_1993 = argv_2056;
	return (argv_1993);	
}

argv_3517 argv_887::un_prepare_symbols_2_resolve () {
	// should never be called (argv_742 class function is meaningless)
	argv_3517 argv_1993 = argv_2056;
	return (argv_1993);	
}*/

argv_3517 argv_887::argv_3231 () {
	// should never be called (argv_742 class function is meaningless)
	argv_3517 argv_1993 = argv_2056;
	return (argv_1993);	
}

argv_3517 argv_887::argv_3885 () {
	// should never be called (argv_742 class function is meaningless)
	argv_3517 argv_1993 = argv_2056;
	return (argv_1993);	
}

argv_3517 argv_887::argv_761 (argv_820 _conf_filename, argv_820 _log_directory, argv_820 _dll_directory, argv_820 _plugin_root_dir, argv_2263& _kernel_data_ptr) {
	// should never be called (argv_742 class function is meaningless)
	argv_3517 argv_1993 = argv_2056;
	return (argv_1993);	
}

argv_3517 argv_887::argv_3871 () {
	// should never be called (argv_742 class function is meaningless)
	argv_3517 argv_1993 = argv_2056;
	return (argv_1993);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
