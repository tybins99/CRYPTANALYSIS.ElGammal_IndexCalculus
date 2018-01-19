// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_353.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the functions and argv_1139
// @@ structures necessary for the scan daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_484
#define argv_484



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#include "../LIB/argv_325.hpp"
#include "../LIB/argv_319.hpp"
#include "../LIB/argv_329.hpp"
#include "../LIB/argv_316.hpp"
#include "../LIB_ARCHIVE/argv_676.hpp"
#include "../LIB_ARCHIVE/argv_689.hpp"
#include "../LIB_AVX/argv_3561.hpp"
#include "../LIB_AVX/argv_3443.hpp"
#include "../LIB_AVX/argv_3921.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2335  5000 


// at thread creation argv_3825, these argv_1139 are saved up so that we can monitor
// the thread's death later.
class argv_1102
{
public:
	string		argv_2817;
	DWORD		argv_3781;
	HANDLE		argv_3780;
};


class Cscan_dameon_log_set
{
public:
	argv_917					argv_2235;
	argv_917					argv_2231;
	argv_917					argv_2232;
	argv_917					argv_2244;
	argv_917					argv_2243;
	argv_917					argv_2250;
};

class argv_1092
{
public:
	argv_812			argv_978;
	Carchive_creator		argv_676;
	Carchive_extractor		argv_689;
	Cspyware_manager		argv_3561;
	Cscan_gateway			argv_3443;
	Cupdate_manager			argv_3921;
};


class Cscan_daemon_data_set
{
public:
	string	internal_servname;
	string	argv_1366;

	argv_3864	argv_1364;
	argv_3864	argv_1365;
	argv_3864	argv_1363;
	argv_3864	argv_1367;

	argv_3864	internal_archive_creator_port;
	argv_3864	internal_archive_extractor_port;
	argv_3864	internal_spyware_manager_port;
	argv_3864	internal_scan_gateway_port;
	argv_3864	internal_update_manager_port;
	argv_3864	internal_admin_port;

	argv_3864	argv_2327;

	string	argv_3409;
	string	argv_2041;
	string	argv_667;
	string	argv_666;
};


class argv_1091
{
public:
	Cscan_daemon_data_set		data_set;
	argv_1092	inner_objects;
	Cscan_dameon_log_set		log_set;
	vector<argv_916>			argv_3948;
};


class argv_1090 : public argv_823
{
private:
	argv_1091			argv_1316;
		
	vector<argv_928>		argv_3949;
	vector<argv_1102>	argv_3958;
	argv_1102			argv_993; 

	argv_3517						argv_2147 (argv_820 _name, argv_2263 _callback_ptr, argv_2263 _param_ptr, bool _is_com_manager=false);
	argv_3517						argv_2143 ();
	argv_3517						argv_2141 ();
	argv_3517						argv_2142 ();
	argv_3517						argv_2145 ();
	argv_3517						argv_2144 ();
	argv_3517						argv_2148 ();

	argv_3517						argv_2140 ();
	argv_3517						argv_3238 ();
	argv_3517						argv_3245 (argv_820, argv_820, argv_3864, argv_3862);
	void						argv_1224 (argv_820, argv_3517, argv_3517);

	argv_3517						argv_1375 ();
	void						argv_1230 ();
	argv_3517						argv_1077 ();
	argv_3517						argv_2120 ();
	argv_3517						argv_3987 (argv_820, HANDLE, argv_3517);
	argv_3517						argv_3986 ();
	argv_3517						argv_2936 ();
	argv_3517						argv_2118 (argv_882&);

public:
	void						reset ();
	argv_1090 ();
	~argv_1090 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ necessary functions forward declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#if defined (__WIN32_OS__) 
	typedef unsigned long					(__stdcall * argv_1701)	(void *);
	void	WINAPI	service_main			(DWORD argv_720, LPTSTR argv_721[]);
	void			argv_3488	(DWORD);
#endif // #if defined (__WIN32_OS__) 



#endif // argv_484



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
