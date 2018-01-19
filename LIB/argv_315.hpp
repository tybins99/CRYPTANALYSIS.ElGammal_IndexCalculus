// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_315.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the functions that permit
// @@ to communicate with the service scanner either
// @@ from remote, or from a local client 
// @@ independantly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_386
#define argv_386



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_345.hpp"
#include "../LIB/argv_349.hpp"
#include "../LIB/argv_352.hpp"
#include "../LIB_AVX/general_avx.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



#if defined (__WIN32_OS__)
	#ifdef SYSTEM_DLL_EXPORTS
		#define argv_3725 __declspec(dllexport)
	#else
		#define argv_3725 __declspec(dllimport)
	#endif
#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C version of the stateful com client 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
typedef struct argv_592 {
	argv_928	*	argv_2369;
	argv_1057			*	argv_3009;	
	argv_3517				argv_2135;
} argv_3457;
*/


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ com client functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
extern "C" {
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_995 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_996 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_964 (argv_2263 *, bool&);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_965 (argv_2263);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_963 (argv_2263, argv_820, argv_3864);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_973 (argv_2263, argv_820, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_974 (argv_2263, argv_820, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_local_result (argv_2263, argv_3517, bool&, bool&, bool&, argv_1063, bool&, bool&);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_remote_result (argv_2263, argv_3517, argv_820, bool&, bool&, bool&, argv_1063, bool&, bool&);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_966 (argv_2263);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 com_client_get_last_error (argv_2263, argv_1063);
}
*/
// =============================================================
// =============================================================
// =============================================================
// =============================================================
// =============================================================
// =============================================================

// argv_2929 client connected to the service.
typedef struct argv_594 {
	argv_928		argv_2352;
	argv_1057				argv_3010;
	argv_1057				argv_3014;
	argv_3550 				argv_3549;
} argv_3459;

typedef struct argv_600 {
	fd_set			readfds;
	fd_set			readfds_dirty;
	argv_3517			argv_2339;
} argv_3573;

// 3 connections (argv_1371, argv_1016, scan).
typedef struct argv_592 {
	string				argv_3831;
	argv_3864				argv_3832; // for the temporary argv_1396 argv_1734
	argv_3517				argv_3551;
	argv_3459	argv_719;
	argv_3459	argv_3455;
	argv_3573		argv_3469;
} argv_3457;


typedef struct argv_593 {
	argv_3862	argv_3842;			// answer argv_3842
	argv_3517	argv_1993;

	// general operation related argv_1139
	argv_3862	argv_2933;

	// argv_1371 list argv_3402
	argv_3864	argv_2869;
	argv_3864	argv_2866;
	argv_3864	argv_1110;
	string	argv_1380;

	// scan related argv_1139
	bool 	argv_3454;
	bool	infected;
	bool	argv_1275;
	char	argv_3980[MAX_PATH];
	bool	argv_1274;
	bool	argv_1276;
	argv_3517	argv_1277;
	char	argv_1195[MAX_PATH];
	char	argv_1113[MAX_PATH];
} argv_3458;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ Internal tool functions (not exported by the DLL).
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 internal_connect_unit (argv_3459&,  argv_820, argv_3864);
argv_3517 internal_prepare_packet (argv_1057&, vector<argv_819>&, argv_3862);
argv_3517 internal_update_maxfd (argv_2263);
argv_3517 internal_check_select_return_code (argv_3517, bool&);
argv_3517 internal_process_ready_descriptors (argv_2263, argv_3517, argv_3458 *);
argv_3517 internal_process_received_packet (argv_1057&, argv_3458 *);

argv_3517 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_LIST_RESULT		(argv_2263, argv_3459&, argv_3458 *);
argv_3517 internal_process_packet_PCK_TYPE_SCAN_REMOTE_RESULT				(argv_2263, argv_3459&, argv_3458 *);
argv_3517 internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT					(argv_2263, argv_3459&, argv_3458 *);
argv_3517 internal_process_packet_PCK_TYPE_SCAN_AND_DYSINFECT_LOCAL_RESULT	(argv_2263, argv_3459&, argv_3458 *);
argv_3517 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_RESULT			(argv_2263, argv_3459&, argv_3458 *);
argv_3517 internal_process_packet_PCK_TYPE_ARCHIVE_CREATE_RESULT				(argv_2263, argv_3459&, argv_3458 *);
void internal_generate_unique_tmp_filename (argv_820, argv_3864&, argv_1063);
void internal_reset_result (argv_3458&);

extern "C" {
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_995 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_996 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_964 (argv_2263 *, argv_820);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_965 (argv_2263);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_963 (argv_2263, argv_820, argv_3864, argv_3864);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_973 (argv_2263, argv_820, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_974 (argv_2263, argv_820, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_967 (argv_2263, argv_820, argv_820);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_962 (argv_2263, argv_820, argv_820);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_961 (argv_2263);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_960 (argv_2263);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_3323 (argv_2263, argv_3458 *);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3517 argv_966 (argv_2263);
}



#endif // argv_386



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
