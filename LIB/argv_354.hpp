// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_354.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures and
// @@ functions declarations necessary for other
// @@ parts to use the system tool argv_2908 that
// @@ permits to perform platform independant
// @@ system calls.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_486
#define argv_486



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ necessary function pointers definition
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void *  (* argv_1546) (size_t);
typedef void    (* argv_1513) (void *);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ just a test
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void * (* argv_1492)	();
typedef void   (* argv_1501)		(void *);
typedef void   (* argv_1479)			(void *, argv_3864, argv_3864);
typedef bool   (* argv_1521)	(void *, argv_3864);
typedef argv_3864   (* argv_1545)		(void *, argv_3864);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ simple list
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3517	(* argv_1539)	(argv_2263 *);
typedef void	(* argv_1540)	(argv_2263);
typedef void	(* fp_list_reset)		(argv_2263);
typedef argv_3864	(* argv_1543)	(argv_2263);
typedef argv_3517	(* argv_1538)			(argv_2263, argv_2263, bool);
typedef argv_3517	(* argv_1541)	(argv_2263, argv_2263 *);
typedef argv_3517	(* argv_1542)	(argv_2263, argv_2263 *);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ complex list
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3517 (* argv_1493)					(argv_2263 *);
typedef argv_3517 (* argv_1499)				(argv_2263);
typedef argv_3517 (* argv_1488)		(argv_2263, argv_3864, argv_820, argv_2263&);
typedef argv_3517 (* argv_1486)				(argv_2263, argv_3864, argv_3864& _nb_elem);
typedef argv_3517 (* argv_1485)		(argv_2263, argv_3864, argv_820, argv_2263&, argv_3864&);
typedef argv_3517 (* argv_1484)	(argv_2263, argv_3864, argv_820, argv_2263&, argv_2263 *);
typedef argv_3517 (* argv_1487)	(argv_2263, argv_3864, argv_820, argv_2263&, argv_2263 *);
typedef argv_3517 (* argv_1483)					(argv_2263, argv_3864, argv_820);
typedef argv_3517 (* argv_1482)			(argv_2263, argv_2263&, argv_3864, argv_820, argv_2263);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1396 memory mapper function pointers definition
// @@ These functions pointers permit to create/argv_1197 and use
// @@ a C argv_1396 mapper.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3517 (* argv_1509)				(argv_2263 *, argv_2263, argv_2263);
typedef argv_3517 (* argv_1510)			(argv_2263);
typedef argv_3517 (* argv_1512)			(argv_2263, argv_820, argv_3864, argv_3862 *&, argv_3864&);
typedef argv_3517 (* argv_1508)	(argv_2263);
typedef argv_3517 (* argv_1511) (argv_2263, argv_3864&, argv_3864&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ group of system NATIVE functions imported
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3864	(* argv_1609)	(argv_1063, argv_3864);
typedef FILE *	(* argv_1601)					(const char *, const char *);
typedef int		(* argv_1598)				(FILE *);
typedef int		(* argv_1605)					(FILE *, long, int);
typedef long	(* argv_1606)					(FILE *);
typedef size_t  (* argv_1602)					(void *, size_t, size_t, FILE *);
typedef size_t  (* argv_1607)				(const void *, size_t, size_t, FILE *);
typedef size_t	(* argv_1615)				(const char *);
typedef void *  (* argv_1594)	(int);
typedef void    (* argv_1604)		(void *, argv_3864);
typedef void    (* argv_1600)			();
typedef char *  (* argv_1599)					(char *, int, FILE *);
typedef char *  (* argv_1619)				(argv_820, argv_820);
typedef void *	(* argv_1613)				(void *, const void *, size_t);
typedef void *  (* fp_NATIVE_memset)				(void *, int, size_t);
typedef int		(* argv_1612)				(const void *, const void *, size_t);
typedef void *  (* argv_1611)				(size_t);
typedef void    (* argv_1603)					(void *);
typedef char *  (* argv_1618)				(char *, argv_820, size_t);
typedef char *	(* argv_1616)				(char *, argv_820, size_t);
typedef char *	(* argv_1617)				(argv_820, argv_820, size_t);
typedef argv_3864    (* argv_1610)				(argv_3864);		
typedef char *  (* argv_1619)				(argv_820, argv_820);
typedef argv_3517	(* argv_1534)					(argv_2263 *, argv_820);
typedef argv_3517	(* argv_1535)				(argv_2263);
typedef void	(* argv_1537)					(argv_2263, argv_3864, argv_820);
typedef void	(* argv_1532)						(argv_2263, argv_3864, argv_820, argv_820);
typedef void	(* argv_1533)						(argv_2263, argv_3864, argv_820, argv_3864);
typedef void	(* argv_1536)						(argv_2263, argv_3864, argv_820, argv_3864);
typedef bool	(* argv_1595)	(argv_820);
typedef argv_3517	(* argv_1596)				(argv_820, argv_820);
typedef argv_3517	(* argv_1608)		(argv_820, argv_820, argv_820, argv_820, argv_1063);
typedef argv_3517	(* argv_1597)			(argv_820);
typedef argv_3517	(* argv_1614)		(argv_820, argv_3864);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ plugin debug log facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void	(* fp_kdbg_reset)					(argv_820);
typedef void	(* argv_1523)				(argv_820, argv_820);
typedef void	(* argv_1522)					(argv_820, argv_820, argv_3864);
typedef void	(* argv_1524)				(argv_820, argv_820, argv_3864);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ STRUCTURE NAME: argv_3593
// @@
// @@ DESCRIPTION:
// @@ This argv_1139 structure contains all native functions
// @@ that are system dependant.
// @@ These system dependant functions, after being collected, permit
// @@ to create a platform independant program.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_601 {
	argv_1609		argv_2848;
	argv_1601						argv_2840;
	argv_1598					argv_2837;
	argv_1605						argv_2844;
	argv_1606						argv_2845;
	argv_1602						argv_2841;
	argv_1607					argv_2846;
	argv_1615					argv_2854;
	argv_1594		argv_2830;
	argv_1604			argv_2843;
	argv_1600				argv_2839;
	argv_1599						argv_2838;	
	argv_1619					argv_2858;	
	argv_1613					argv_2852;
	fp_NATIVE_memset					NATIVE_memset;
	argv_1612					argv_2851;
	argv_1611					argv_2850;
	argv_1603						argv_2842;
	argv_1618					argv_2857;
//	fp_NATIVE_strcpy					NATIVE_strcpy;
//	fp_NATIVE_strcat					NATIVE_strcat;
	argv_1616					argv_2855;
	argv_1617					argv_2856;
	argv_1610					argv_2849;
	argv_1595		argv_2834;
	argv_1596					argv_2835;
	argv_1608			argv_2847;
	argv_1597				argv_2836;
	argv_1614			argv_2853;

	argv_1509					argv_2320;	
	argv_1510					argv_2321;
	argv_1512				argv_2323;	
	argv_1508		argv_2319;
	argv_1511		argv_2322;

	argv_1534						argv_2124;
	argv_1535					argv_2125;
	argv_1537						argv_2127;
	argv_1532							argv_2122;
	argv_1533							argv_2123;
	argv_1536							argv_2126;

	// plugin debug facility
	fp_kdbg_reset						kdbg_reset;
	argv_1523					argv_2029;
	argv_1522						argv_2028;
	argv_1524					argv_2030;

	// list
	argv_1539					argv_2184;
	argv_1540					argv_2186;
	fp_list_reset						list_reset;	
	argv_1543					argv_2190;
	argv_1538							argv_2183;
	argv_1541					argv_2188;
	argv_1542					argv_2189;

	// complex list
	argv_1493				argv_1073;
	argv_1499			argv_1198;
	argv_1488		argv_1015;
	argv_1486			argv_1005;
	argv_1485		argv_1004;
	argv_1484 argv_1003;
	argv_1487  argv_1006;
	argv_1483				argv_1002;
	argv_1482		argv_1001;

} argv_3593;



#endif // argv_486



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
