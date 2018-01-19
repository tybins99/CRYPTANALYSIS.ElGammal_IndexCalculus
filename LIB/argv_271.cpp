// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_271.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures and
// @@ functions that permits the loader system
// @@ argv_2908 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_338.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1099
// @@
// @@ FUNCTION		:	argv_1099		
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
// @@ Normal constructor of the 'argv_1099' argv_2908.
// @@ It merely prepares the argv_2908 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1099::argv_1099 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1099
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
// @@ This function permits to reset the 'argv_821'
// @@ argv_2908 to it's initial argv_3604.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1099::reset () {
	argv_3517 argv_1993 = argv_2168;

	init_done								= false;
	toolset.argv_2848		= argv_2889;
	toolset.argv_2840					= argv_2889;
	toolset.argv_2837					= argv_2889;	
	toolset.argv_2844					= argv_2889;
	toolset.argv_2845					= argv_2889;
	toolset.argv_2841					= argv_2889;
	toolset.argv_2846					= argv_2889;
	toolset.argv_2854					= argv_2889;
	toolset.argv_2830		= argv_2889;
	toolset.argv_2843			= argv_2889;
	toolset.argv_2839				= argv_2889;
	toolset.argv_2838					= argv_2889;	
	toolset.argv_2858					= argv_2889;	
	toolset.argv_2856					= argv_2889;
	toolset.argv_2852					= argv_2889;
	toolset.NATIVE_memset					= argv_2889;
	toolset.argv_2851					= argv_2889;
	toolset.argv_2850					= argv_2889;
	toolset.argv_2842						= argv_2889;
	toolset.argv_2857					= argv_2889;
	toolset.argv_2855					= argv_2889;
	toolset.argv_2849					= argv_2889;
	toolset.argv_2834		= argv_2889;
	toolset.argv_2835				= argv_2889;
	toolset.argv_2847		= argv_2889;
	toolset.argv_2836				= argv_2889;
	toolset.argv_2853			= argv_2889;

	toolset.argv_2320					= argv_2889;	
	toolset.argv_2321					= argv_2889;
	toolset.argv_2323				= argv_2889;
	toolset.argv_2319		= argv_2889;	
	toolset.argv_2322		= argv_2889;

	toolset.argv_2124						= argv_2889;
	toolset.argv_2127						= argv_2889;
	toolset.argv_2122							= argv_2889;
	toolset.argv_2123							= argv_2889;
	toolset.argv_2126						= argv_2889;
	toolset.argv_2125					= argv_2889;			

	toolset.argv_2184					= argv_2889;
	toolset.argv_2186					= argv_2889;
	toolset.list_reset						= argv_2889;
	toolset.argv_2190					= argv_2889;	
	toolset.argv_2183						= argv_2889;
	toolset.argv_2188					= argv_2889;
	toolset.argv_2189					= argv_2889;

	toolset.kdbg_reset						= argv_2889;
	toolset.argv_2029					= argv_2889;
	toolset.argv_2028					= argv_2889;
	toolset.argv_2030					= argv_2889;
	
	toolset.argv_1073				= argv_2889;
	toolset.argv_1198			= argv_2889;
	toolset.argv_1015	= argv_2889;
	toolset.argv_1005			= argv_2889;	
	toolset.argv_1004	= argv_2889;
	toolset.argv_1003	= argv_2889;
	toolset.argv_1006		= argv_2889;
	toolset.argv_1002				= argv_2889;
	toolset.argv_1001		= argv_2889;

	// unload all argv_2221 libraries
	argv_1993 = argv_1129::reset ();
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1099
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_839 *: pointer on the argv_2908 containing
// @@     all the global argv_1139.
// @@
// @@ _dll_name: argv_820: argv_2817 of the DLL containing the system dependant
// @@     routines.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : argv_2168 if success,
// @@        another argv_3960 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to :
// @@ - argv_2198 the DLL containing the system dependant routines.
// @@ - argv_2198 all the system dependant routines exported by
// @@   the DLL.
// @@
// @@ CONTRACT 		: 
// @@ - 'init' must not have already been argv_1261.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_1099::init (argv_839 * _glob_data_ptr, const char * _dll_name) {
	argv_3517 argv_1993 = argv_2168;
	if (init_done == true) {
		_glob_data_ptr->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1099::init - illegal to call init twice or more !");
		argv_1993 = argv_2163;
	}
	else {
		argv_1993 = argv_2158.argv_2208 (_dll_name, argv_2157);
		if (argv_1993 != argv_2168) {
			_glob_data_ptr->argv_2251.argv_2247 (argv_1321, "+++ ERROR: argv_1099::init - argv_2208 failed !");
		}
		else {
			argv_2263 void_ptr = argv_2889;

			// registry related functions
			init_one_function (_glob_data_ptr, "argv_2848",		(argv_2263 *) &void_ptr,	argv_1993);
			toolset.argv_2848 = (argv_1609) void_ptr;

			init_one_function (_glob_data_ptr, "argv_2840",					(argv_2263 *) &void_ptr,	argv_1993);
			toolset.argv_2840 = (argv_1601) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2837",					(argv_2263 *) &void_ptr,	argv_1993);
			toolset.argv_2837 = (argv_1598) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2844",					(argv_2263 *) &void_ptr,	argv_1993);
			toolset.argv_2844 = (argv_1605) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2845",					(argv_2263 *) &void_ptr,	argv_1993);
			toolset.argv_2845 = (argv_1606) void_ptr; 
			init_one_function (_glob_data_ptr, "argv_2841",					(argv_2263 *) &void_ptr,	argv_1993);
			toolset.argv_2841 = (argv_1602) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2846",					(argv_2263 *) &void_ptr,  argv_1993);
			toolset.argv_2846 = (argv_1607) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2854",					(argv_2263 *) &void_ptr,	argv_1993);
			toolset.argv_2854 = (argv_1615) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2830",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2830 = (argv_1594) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2843",		(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2843 = (argv_1604) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2839",			(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2839 = (argv_1600) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2838",					(argv_2263 *) &void_ptr,   argv_1993);
			toolset.argv_2838 = (argv_1599) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2858",					(argv_2263 *) &void_ptr,  argv_1993);
			toolset.argv_2858 = (argv_1619) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2856",				(argv_2263 *) &void_ptr,  argv_1993);
			toolset.argv_2856 = (argv_1617) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2852",					(argv_2263 *) &void_ptr,  argv_1993);
			toolset.argv_2852 = (argv_1613) void_ptr;
			init_one_function (_glob_data_ptr, "NATIVE_memset",					(argv_2263 *) &void_ptr,  argv_1993);
			toolset.NATIVE_memset = (fp_NATIVE_memset) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2851",					(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2851 = (argv_1612) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2850",					(argv_2263 *) &void_ptr,  argv_1993);
			toolset.argv_2850 = (argv_1611) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2842",					(argv_2263 *) &void_ptr,    argv_1993);
			toolset.argv_2842 = (argv_1603) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2857",				(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2857 = (argv_1618) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2855",				(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2855 = (argv_1616) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2849",				(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2849 = (argv_1610) void_ptr;

			init_one_function (_glob_data_ptr, "argv_2834",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2834 = (argv_1595) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2835",				(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2835 = (argv_1596) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2847",		(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2847 = (argv_1608) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2836",		(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2836 = (argv_1597) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2853",		(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2853 = (argv_1614) void_ptr;

			init_one_function (_glob_data_ptr, "argv_2320",					(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2320 = (argv_1509) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2321",				(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2321 = (argv_1510) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2323",				(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2323 = (argv_1512) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2319",		(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2319 = (argv_1508) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2322",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2322 = (argv_1511) void_ptr;

			init_one_function (_glob_data_ptr, "argv_2124",					(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2124 = (argv_1534) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2125",					(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2125 = (argv_1535) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2127",						(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2127 = (argv_1537) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2122",						(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2122 = (argv_1532) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2123",						(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2123 = (argv_1533) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2126",						(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2126 = (argv_1536) void_ptr;

			// plugin debug facility
			init_one_function (_glob_data_ptr, "kdbg_reset",					(argv_2263 *) &void_ptr, argv_1993);
			toolset.kdbg_reset = (fp_kdbg_reset) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2029",					(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2029 = (argv_1523) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2028",					(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2028 = (argv_1522) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2030",					(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2030 = (argv_1524) void_ptr;

			// simple list
			init_one_function (_glob_data_ptr, "argv_2184",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2184 = (argv_1539) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2186",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2186 = (argv_1540) void_ptr;
			init_one_function (_glob_data_ptr, "list_reset",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.list_reset = (fp_list_reset) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2190",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2190 = (argv_1543) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2183",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2183 = (argv_1538) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2188",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2188 = (argv_1541) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2189",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_2189 = (argv_1542) void_ptr;

			// complex list
			init_one_function (_glob_data_ptr, "argv_1073",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_1073 = (argv_1493) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1198",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_1198 = (argv_1499) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1015",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_1015 = (argv_1488) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1005",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_1005 = (argv_1486) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1004",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_1004 = (argv_1485) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1003",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_1003 = (argv_1484) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1006",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_1006 = (argv_1487) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1002",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_1002 = (argv_1483) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1001",	(argv_2263 *) &void_ptr, argv_1993);
			toolset.argv_1001 = (argv_1482) void_ptr;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
