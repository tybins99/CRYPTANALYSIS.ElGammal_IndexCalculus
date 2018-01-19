// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_325.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the argv_1139 structure
// @@ and functions that are not project specific
// @@ and that may be used by any argv_2908/function
// @@ acrosss a project.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_397
#define argv_397 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4503)
	#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 

	#include <iostream>
	#include <string>
	#include <vector>
	#include <cassert>
	#include <cstdio>
	#include <stack>
	#include <list>
	#include <map>
	#include <exception>

#if defined (__WIN32_OS__) 
	#include <winsock.h>
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
	#include <Commdlg.h>
	#include <commctrl.h>
	#include <Commdlg.h>
	#include <shellapi.h>
	#include <fcntl.h>
	#include <shlobj.h>
	#include <Mmsystem.h>

	#include <io.h>
	#include <aclapi.h>
	#include <lmerr.h>
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	#include <sys/stat.h>
	#include <sys/types.h>
	#include <sys/argv_3549.h>
	#include <sys/argv_3825.h>
	#include <fcntl.h>
	#include <unistd.h>
	#include <sys/mman.h>
	#include <dirent.h>             // readdir(), etc.
	#include <sys/stat.h>           // stat(), etc.
	#include <cstring>             // strstr(), etc.
	#include <netinet/tcp.h>
	#include <linux/argv_1992.h>
	//#include <linux/tcp.h>
	#include <netdb.h>
	#include <errno.h>
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_320.hpp"
#include "../LIB_CRYPTO/argv_365.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all error codes
// @@ The reason why each part has a starting argv_3960 is to remove
// @@ the impact of the addition of a new error argv_929.
// @@ Each category can save up to 1000 different error codes
// @@ (error codes being coded on argv_3517, it is not a problem).
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2099 {

	// test related error codes
	argv_3775 = 0,
	argv_3774,
	argv_3751,
	argv_3750,
	argv_3756,
	argv_3748,
	argv_3749,
	argv_3753,
	argv_3752,
	argv_3757,
	argv_3755,
	argv_3754,

	// kernel related errors
	argv_2103 = 1000,
	argv_2060,
	argv_2053,
	argv_2051,
	argv_2057,
	argv_2058,
	argv_2092,
	argv_2088,
	argv_2089,
	argv_2090,
	argv_2087,
	argv_2061,
	argv_2065,
	argv_2094,
	argv_2098,
	argv_2036,
	argv_2052,
	argv_2055,
	argv_2056,
	argv_2043,
	argv_2044,
	argv_2085,
	argv_2049,
	argv_2086,
	argv_2037,
	argv_2106,
	argv_2035,
	argv_2102,
	argv_2101, 
	argv_2050,
	argv_2100,
	argv_2054,
	argv_2042,
	argv_2047,
	argv_2040,
	argv_2105,
	argv_2048,
	argv_2091,
	argv_2046,
	argv_2097,
	argv_2107,
	argv_2104,
	argv_2045,
	argv_2095,
	argv_2059,

	// library loader related errors
	argv_2168=2000,
	argv_2159,
	argv_2165,
	argv_2164,
	argv_2166,
	argv_2160,
	argv_2169,
	argv_2161,
	argv_2167,
	argv_2163,
	argv_2162,

	// plugin loader related errors
	argv_3168=3000,
	argv_3148,
	argv_3147,
	argv_3145,
	argv_3157,
	argv_3137,
	argv_3158,
	argv_3166,
	argv_3167,
	argv_3169,
	argv_3177,
	argv_3156,
	argv_3142,
	argv_3140,
	argv_3143,
	argv_3165,
	argv_3160,
	argv_3161,
	argv_3162,
	argv_3159,
	argv_3163,
	argv_3164,
	argv_3136,
	argv_3144,
	argv_3146,
	argv_3139,

	// compressor/decompressor related errors
	argv_2131=4000,
	argv_2130,
	argv_2132,
	argv_2129,
	argv_2133,
	argv_2134,

	// cypher/decypher related errors
	argv_1134=5000,
	argv_1132,
	argv_1137,
	argv_1133,

	// xmemroy related errors
	argv_4007=6000,
	argv_4005,
	argv_3999,
	argv_3998,
	argv_4000,

	// coff argv_1396 loader related errors
	argv_2923=7000,
	argv_2914,
	argv_2921,
	argv_2913,
	argv_2922,
	argv_2909,
	argv_2917,
	argv_2912,
	argv_2920,
	argv_2919,
	argv_2915,
	argv_2916,
	argv_2925,
	argv_2910,
	argv_2924,
	argv_2918,
	argv_2911,

	// list related errors
	argv_2196=8000,
	argv_2195,
	argv_2194,
	argv_2193,
	argv_2187,
	argv_2192,
	argv_2185,

	// argv_1396 argv_3842 detection argv_3402 related errors
	argv_3857=9000,
	argv_3854,
	argv_3855,
	argv_3853,
	argv_3856,

	// kernel related errors
	argv_3135=10000,
	argv_3132,
	argv_3130,
	argv_3129,
	argv_3131,
	argv_3127,
	argv_3133,
	argv_3125,
	argv_3128,
	argv_3126,
	argv_3134,

	// scanner related errors
	argv_1413=11000,
	argv_1410,
	argv_1404,
	argv_1412,
	argv_1403,
	argv_1409,
	argv_1415,
	argv_1414,
	argv_1411,
	argv_1405,
	argv_1406,
	argv_1408,
	argv_1407,

	// symbol table related errors
	argv_3640=12000,
	argv_3638,
	argv_3641,
	argv_3639,
	argv_3637,
	argv_3636,

	// plugin manager related errors
	argv_3155=13000,
	argv_3152,
	argv_3150,
	argv_3151,
	argv_3154,
	argv_3153,

	// COFF loader related errors
	argv_947=14000,
	argv_940,
	argv_936,
	argv_937,
	argv_938,
	argv_948,
	argv_935,
	argv_934,
	argv_944,
	argv_950,
	argv_932,
	argv_939,
	argv_949,
	argv_933,
	argv_943,
	argv_946,
	argv_953,
	argv_952,
	argv_941,
	argv_951,
	argv_945,
	argv_942,

	// complex list related errors
	argv_1014=15000,
	argv_1011,
	argv_1010,
	argv_1009,
	argv_1012,
	argv_1013,
	argv_1008,
	argv_1007,

	// argv_1396 mapper related errors
	argv_1462=16000,
	argv_1461,
	argv_1459,
	argv_1457,
	argv_1460,
	argv_1458,
	argv_1456,

	// PE extractor related error
	argv_3079=17000,
	argv_3076,
	argv_3075,
	argv_3078,
	argv_3077,
	argv_3074,

	// argv_2352 related errors
	argv_2380=18000,
	argv_2366,
	argv_2364,
	argv_2365,
	argv_2363,
	argv_2355,
	argv_2367,
	argv_2379,
	argv_2378,
	argv_2354,
	argv_2368,
	argv_2353,
	argv_2356,
	argv_2358,
	argv_2357,
	argv_2359,
	argv_2362,
	argv_2371,
	argv_2372,
	argv_2374,
	argv_2375,
	argv_2373,
	argv_2370,

	// packet coder related errors
	argv_2988=19000,
	argv_2985,
	argv_2984,
	argv_2987,
	argv_2986,
	argv_2983,

	// packet related errors
	argv_3026=20000,
	argv_2998,
	argv_3002,
	argv_3005,
	argv_2999,
	argv_3008,
	argv_3003,
	argv_2982,
	argv_3000,
	argv_2991,
	argv_2990,
	argv_3013,
	argv_2994,
	argv_2992,
	argv_2995,
	argv_2996,
	argv_2993,
	argv_2989,
	argv_3006,
	argv_3030,
	argv_3004,
	PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET,
	argv_2997,
	argv_3007,
	argv_3001,
	PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET,

	// test related error codes (internal test errors)
	argv_3761=21000,
	argv_3760,

	// event loop related events
	argv_1343=22000,
	argv_1333,
	argv_1328,
	argv_1344,
	argv_1329,
	argv_1338,
	argv_1346,
	argv_1330,
	argv_1339,
	argv_1336,
	argv_1340,
	argv_1334,
	argv_1331,
	argv_1335,
	argv_1332,
	argv_1345,
	argv_1337,
	argv_1342,
	argv_1341,

	// client argv_1139 related errors
	argv_896=23000,
	argv_894,
	argv_895,

	// scanning daemon related errors
	argv_3439=24000,
	argv_3438,
	argv_3437,
	argv_3427,
	argv_3433,
	argv_3428,
	argv_3436,
	argv_3431,
	argv_3432,
	argv_3429,
	argv_3434,
	argv_3435,
	argv_3430,
	argv_3441,
	argv_3440,

	// com client related errors
	argv_976=25000,
	argv_970,
	argv_968,
	argv_971,
	argv_972,
	argv_969, 
	argv_977,
	argv_975,

	// gateway related errors
	argv_1716=26000,
	argv_1713,
	argv_1714,
	argv_1712,

	// kernel manager related errors
	argv_2083=27000,
	argv_2073,
	argv_2078,
	argv_2075,
	argv_2071,
	argv_2072,
	argv_2076,
	argv_2070,
	argv_2068,
	argv_2074,
	argv_2067,
	argv_2069,
	argv_2066,
	argv_2077,

	// admin related errors
	argv_3934=28000,
	argv_3927,
	argv_3923,
	argv_3931,
	argv_3922,
	argv_3924,
	argv_3925,
	argv_3926,
	argv_3932,
	argv_3929,
	argv_3935,
	argv_3930,
	argv_3928,
	argv_3936,
	argv_3933,
	argv_3937,
	argv_3938,

	// resolved shelf related errors
	argv_3400=29000,
	argv_3397,
	argv_3394,
	argv_3395,
	argv_3396,
	argv_3399,
	argv_3398,

	// spyware manager related errors
	argv_3566=30000,
	argv_3564,
	argv_3565,
	argv_3563,

	// inner argv_3221 related errors
	argv_1988=31000,
	argv_1987,
	argv_1984,
	argv_1983,
	argv_1986,
	argv_1985,

	// inner client related errors
	argv_1981=32000,
	argv_1978,
	argv_1976,
	argv_1979,
	argv_1982,
	argv_1975,
	argv_1980,
	argv_1977,

	// admin client related errors
	argv_659=33000,
	argv_654,
	argv_652,
	argv_656,
	argv_653,
	argv_658,
	argv_657,
	argv_655,

	// archive extractor related errors
	argv_701=34000,
	argv_703,
	argv_695,
	argv_696,
	argv_697,
	argv_702,
	argv_698,
	argv_694,
	argv_700,
	argv_690,
	argv_691,
	argv_692,
	argv_693,

	// archive creator related errors
	argv_685=35000,
	argv_688,
	argv_681,
	argv_680,
	argv_682,
	argv_678,
	argv_686,
	argv_687,
	argv_679,
	argv_677,
	argv_683,

	// argv_1396 argv_3842 analyzer related errors
	argv_3849=36000,
	argv_3848,
	argv_3845,
	argv_3846,
	argv_3847,

	// com manager related errors
	argv_992=37000,
	argv_985,
	argv_986,
	argv_989,
	argv_980,
	argv_983,
	argv_984,
	argv_990,
	argv_981,
	argv_991,
	argv_982,
	argv_987,
	argv_994,
	argv_979,

	// scan gateway related errors
	argv_3449=38000,
	argv_3450,
	argv_3447,
	argv_3444,
	argv_3448,
	argv_3451,
	argv_3445,
	argv_3446,

	// archive facility related errors
	argv_718=39000,
	argv_712,
	argv_710,
	argv_711,
	argv_716,
	argv_713,
	argv_714,
	argv_715,
	argv_708,
	argv_706,
	argv_707,
	argv_717,
	argv_709,
	argv_705,
	argv_704,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ All possible argv_1396 types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3852 {
	argv_1440 = 0,
	argv_1425,
	argv_1423,
	argv_1428,
	argv_1430,
	argv_1420,
	argv_1442,
	argv_1438,
	argv_1436,
	argv_1437,
	argv_1443,
	argv_1427,
	argv_1426,
	argv_1421,
	argv_1431,
	argv_1429,
	argv_1433,
};



#if defined (__WIN32_OS__) 
	#if !defined (argv_1991)
		#define argv_1991 ((DWORD)-1)
	#endif // #if !defined (argv_1991)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants and aliases definitions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__LINUX_OS__)
	#define argv_1932		8
#endif // #if defined (__LINUX_OS__)


#define argv_1923		10
const argv_3864 argv_3635 =	18;
#define argv_1710			4
#define argv_2331		256
#define argv_2330		512
#define argv_1913					65536

#if defined (__WIN32_OS__) 
	#define argv_613 0x00008000
	#define argv_750 0x00004000
	#define argv_3548 _snprintf
#endif // #if ! defined (__WIN32_OS__) 


union argv_729 {
	argv_3864 argv_732;
	argv_3517 argv_725;
	argv_3862 argv_726[4];
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ These types are found in the COFF symbol table and permits
// @@ to know whether the argv_2908 is a function or not
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_1265 0x20
#define argv_1266  0x00



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible plugins types 
// @@ Notice that the plugin argv_3842 is a field of the plugin
// @@ itself.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3227 {
	argv_3173=0,
	argv_3175,
	argv_3172,	
	argv_3171,
	argv_3174, // just to know how many plugin types we have	
	argv_3176, 
};



#define argv_3291			4096
#define argv_1053		8192




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ kernel log related argv_1139 structures and functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_596 {
		argv_3862		argv_3739[3];
		FILE *		argv_1478;
		argv_3864		argv_1117;
		bool		argv_2238;
		char		argv_3734[MAX_PATH];
#if defined (__LINUX_OS__)
        time_t      argv_1121;
        struct tm * argv_3827;
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__)
		SYSTEMTIME	argv_3824;
#endif // #if defined (__WIN32_OS__)
} argv_3544;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible relocation types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_1929	0x0014
#define argv_1927	0x0006
#define argv_1928	0x0007



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all relevant storage types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (__WIN32_OS__)
	#define argv_1933  0x06 // a symbol within a argv_753 (a label)   
#endif // __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ COFF argv_1907 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (__WIN32_OS__)
	typedef struct argv_499 {  
	argv_3863 argv_2305;  
	argv_3863 argv_2900;  
	argv_3864 argv_3826;  
	argv_3864 argv_3220;  
	argv_3864 argv_2902;  
	argv_3863 argv_3537;  
	argv_3863 argv_845;
	} argv_1921;
#endif // #if ! defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_2929 COFF argv_3461 argv_1907
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (__WIN32_OS__)
	typedef struct argv_503 {  
	argv_3862 argv_2818[argv_1932];  
	union {    
		argv_3864 argv_3099;    
		argv_3864 argv_3979;  
	} argv_2459;  
	argv_3864 argv_3978;  
	argv_3864 argv_3538;  
	argv_3864 argv_3218;  
	argv_3864 argv_3219;  
	argv_3864 argv_3217;  
	argv_3863 argv_2898;  
	argv_3863 argv_2894;  
	argv_3864 argv_845;
	} argv_1930; 
#endif // #if ! defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_2929 COFF relocation entry
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_500 {  
	argv_3864 argv_3978;
	argv_3864 argv_3643;
	argv_3863  argv_3843;
} argv_1922;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_2929 symbol table entry
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_604 {
	argv_3862  argv_2818[8];
	argv_3864  argv_3961;
	argv_3516  argv_3466;
	argv_3863  argv_3843;
	argv_3862  argv_3612;
	argv_3862  argv_2890;
} argv_3634;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ general functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void *			allocate_code_buffer	(int);
void			free_code_buffer		(void *);
void			flush_icache			();
std::string		argv_1319			(argv_3864);
extern "C"
{
	void argv_1319 (argv_3864, char *);
}
typedef void (* argv_1621) (argv_3864, char *);

std::string		argv_3170	(argv_3864);
bool			argv_1182 (argv_820, argv_820);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ windows specific structures
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
	#define argv_1925 16
#endif // #ifndef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1917 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
typedef struct argv_496 {  
	argv_3864 argv_3978;  
	argv_3864 argv_3519;
} argv_1917;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1926 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
typedef struct argv_502 {  
	argv_3516 argv_2306;  
	argv_3862 argv_2308;  
	argv_3862 argv_2455;  
	argv_3864 argv_3521;  
	argv_3864 argv_3534;  
	argv_3864 argv_3542;  
	argv_3864 argv_642;  
	argv_3864 argv_745;  
	argv_3864 argv_746;  
	argv_3864 argv_1935;  
	argv_3864 argv_3465;  
	argv_3864 argv_1444;  
	argv_3516 argv_2309;  
	argv_3516 argv_2456;  
	argv_3516 argv_2307;  argv_3516 argv_2454;  
	argv_3516 argv_2310;  
	argv_3516 argv_2457;  
	argv_3864 argv_3992;  
	argv_3864 argv_3532;  
	argv_3864 argv_3529;  
	argv_3864 argv_865;  
	argv_3516 argv_3617;  
	argv_3516 argv_1248;  
	argv_3864 argv_3540;  
	argv_3864 argv_3539;  
	argv_3864 argv_3531;  
	argv_3864 argv_3530;  
	argv_3864 argv_2225;  
	argv_3864 argv_2899;  
	argv_1917 argv_1141[argv_1925];
} argv_1926,  *argv_3101;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1919 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
	typedef struct argv_498 {      // DOS .EXE argv_1907
		argv_3516   argv_1287;                     // argv_2306 number
		argv_3516   argv_1278;                      // Bytes on last page of argv_1396
		argv_3516   argv_1279;                        // Pages in argv_1396
		argv_3516   argv_1281;                      // Relocations
		argv_3516   argv_1280;                   // argv_3519 of argv_1907 in paragraphs
		argv_3516   argv_1289;                  // Minimum argv_1368 paragraphs needed
		argv_3516   argv_1288;                  // Maximum argv_1368 paragraphs needed
		argv_3516   argv_1296;                        // Initial (relative) SS argv_3960
		argv_3516   argv_1295;                        // Initial SP argv_3960
		argv_3516   argv_1283;                      // Checksum
		argv_3516   argv_1284;                        // Initial IP argv_3960
		argv_3516   argv_1282;                        // Initial (relative) CS argv_3960
		argv_3516   argv_1286;                    // File argv_635 of relocation table
		argv_3516   argv_1292;                      // Overlay number
		argv_3516   argv_1293[4];                    // argv_3353 words
		argv_3516   argv_1290;                     // OEM identifier (for argv_1291)
		argv_3516   argv_1291;                   // OEM information; argv_1290 specific
		argv_3516   argv_1294[10];                  // argv_3353 words
		argv_3864   argv_1285;                    // File argv_635 of new exe argv_1907
	  } argv_1919;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1924 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
typedef struct argv_501 {
  argv_3864 argv_3518;  
  argv_1921 argv_1445;  
  argv_1926 argv_2942;
} argv_1924;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ general functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	bool argv_3251 ();
	bool argv_3738 ();
#endif // #if defined (__WIN32_OS__) 


#if defined (__WIN32_OS__) 
class argv_828
{
protected:
	LARGE_INTEGER argv_2279;
	LARGE_INTEGER argv_2280;

	LONGLONG argv_2282;
	LONGLONG argv_2281;

public:
	argv_828(void);

	void argv_3601(void);
	void argv_3607(void);
	double argv_1743(void) const;
	string argv_3608 (argv_820);
};

inline argv_828::argv_828(void) {
	LARGE_INTEGER liFrequency;

	QueryPerformanceFrequency(&liFrequency);
	argv_2282 = liFrequency.QuadPart;

	// Calibration
	argv_3601();
	argv_3607();

	argv_2281 = argv_2280.QuadPart-argv_2279.QuadPart;
}

inline void argv_828::argv_3601(void) {
	// Ensure we will not be interrupted by any other thread for a while
//	Sleep(0);
	QueryPerformanceCounter(&argv_2279);
}

inline void argv_828::argv_3607(void) {
	QueryPerformanceCounter(&argv_2280);
}

inline double argv_828::argv_1743(void) const {
	return (double)(argv_2280.QuadPart-argv_2279.QuadPart-argv_2281)*1000000.0 / argv_2282;
}

inline string argv_828::argv_3608 (argv_820 _msg) {
	argv_3607 ();
	double elapsed = argv_1743 ();
	char argv_3828[MAX_PATH];
	if (elapsed < 1000000.0) {
		argv_3548 (argv_3828, 1024, "%s : %lf microseconds", _msg, elapsed);
	}
	else if ((elapsed >= 1000000.0) && (elapsed < 60000000.0)) {
		elapsed = elapsed / 1000000.0;
		argv_3548 (argv_3828, 1024, "%s : %lf seconds", _msg, elapsed);
	}
	else {
		elapsed = elapsed / 60000000.0;
		argv_3548 (argv_3828, 1024, "%s : %lf minutes", _msg, elapsed);
	}
	argv_3828[1024 - 1] = '\0';
	return argv_3828;
}
#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_802
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 is a platform independant argv_2230 that
// @@ permits to avoid race conditions in threaded applications.
// @@ It works for both win32 and Linux platforms.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_802
{
private:
#if defined (__LINUX_OS__)
	pthread_mutex_t argv_2813;
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	CRITICAL_SECTION argv_1088;
#endif // #if defined (__WIN32_OS__) 

public:
	argv_802 ();
	void argv_2230 ();
	void argv_3917 ();
	~argv_802 ();
};


enum argv_2957 {
	argv_1046 = 0,
	argv_1047,
	argv_1045,
};

class argv_819
{
public:
	argv_3864	argv_3842;

	argv_3862	argv_3963;
	argv_3864	argv_3964;
	string	argv_3962;
};

void argv_617 (argv_3862, vector<argv_819>&);
void argv_617 (argv_3864, vector<argv_819>&);
void argv_617 (argv_820, vector<argv_819>&);
void argv_617 (const string&, vector<argv_819>&);


template <class T>
class argv_1089
{
private:
	CRITICAL_SECTION argv_1088;   // Windows' basic argv_2813 argv_2908.
	list<T>	argv_3324;

public:
	argv_1089 ();
	~argv_1089 ();
	bool argv_3289 (T);
	bool argv_1042 (T&);
};

template <class T>
argv_1089<T>::argv_1089 () {
	InitializeCriticalSection(&argv_1088);		
}

template <class T>
argv_1089<T>::~argv_1089 () {
	DeleteCriticalSection(&argv_1088);
}

template <class T>
bool argv_1089<T>::argv_3289 (T _elem) {
	bool bret = true;
	EnterCriticalSection (&argv_1088);
		argv_3324.push_back (_elem);
	LeaveCriticalSection(&argv_1088);	
	return (bret);
}

template <class T>
bool argv_1089<T>::argv_1042 (T& _elem) {
	bool bret = false;
	EnterCriticalSection (&argv_1088);
		if (! argv_3324.empty()) {
			_elem = argv_3324.argv_1704 ();
			argv_3324.pop_front();
			bret = true;
		}
	LeaveCriticalSection(&argv_1088);	
	return (bret);
}


bool argv_851 (argv_820);
bool argv_852 (argv_820);

//void dump_buffer_2_file (argv_820, argv_820, argv_3862 *, argv_3864);
argv_3864 argv_1027 (argv_820 _filename);
bool argv_1184 (argv_820);
argv_3517 argv_1054 (argv_820, argv_820);
argv_3517 argv_1731 (argv_820, argv_820, argv_820, argv_820, string&, bool _do_copy=true);

#if defined (__WIN32_OS__) 
	argv_3517 disable_nagle_algorithm (argv_3550& _socket);
	argv_3517 argv_842 (argv_3550& _socket);
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_3517 disable_nagle_algorithm (argv_3517 _socket);
	argv_3517 argv_842 (argv_3517 _socket);
	void argv_736 (argv_3517 sockfd);
#endif // #if defined (__LINUX_OS__)

#if defined (__WIN32_OS__) 
	argv_3517 argv_2973 (argv_820, string&);
	argv_3517 parse_handle_file (argv_820, string&);
#endif // #if defined (__WIN32_OS__) 
bool argv_1374 (argv_820, string&, string&);
void argv_3483 (argv_3862, argv_820, vector<string>&);
bool argv_1373 (argv_820, vector<string>&);	
bool empty_directory (argv_820);
argv_3517 empty_and_remove_directory (argv_820);
bool argv_1399 (argv_820);
bool argv_3348 (argv_820);
bool argv_625 (argv_820);


#endif // argv_397



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
