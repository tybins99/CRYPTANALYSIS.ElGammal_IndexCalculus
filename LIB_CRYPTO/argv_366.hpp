// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_366.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all argv_1139 structures and
// @@ functions necessary to use the gmp library
// @@ as a dynamic library.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_426
#define argv_426



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
#endif // #if defined (__WIN32_OS__) 
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include <map>

#if defined (__WIN32_OS__) 
	#include "../LIB_CRYPTO/argv_241.h"
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	#include <dlfcn.h>
	#include <sys/argv_3825.h>
	#include <unistd.h>
	#include "../LIB_CRYPTO/argv_242.h"
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_320.hpp"
#include "../LIB_CRYPTO/argv_360.hpp"
#include "../LIB_CRYPTO/argv_365.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2325	 4096



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ gmp function pointers
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void				(* argv_1669)			(argv_2793 integer);
typedef void				(* argv_1652)			(argv_2793 integer);
typedef void				(* argv_1686)			(argv_2793, unsigned long int);
typedef char *				(* argv_1667)		(char *, int, argv_2793);
typedef int					(* argv_1654)			(argv_2793, argv_2793);
typedef size_t				(* argv_1680)		(FILE *, int, argv_2793);
typedef int					(* argv_1656)	(argv_2793, argv_2793, argv_2793);
typedef	void				(* argv_1681)			(argv_2793, argv_2793, argv_2793, argv_2793);
typedef void				(* argv_1676)		(argv_2793, argv_2793, unsigned long int);
typedef int					(* argv_1655)			(argv_2793, unsigned long int);
typedef void				(* argv_1650)			(argv_2793 rop, argv_2793, unsigned long int op2);
typedef void				(* argv_1665)			(argv_2793 rop, argv_2793, argv_2793);
typedef void				(* argv_1690)			(argv_2793 rop, argv_2793, argv_2793);
typedef void				(* argv_1651)	(argv_2793 q, argv_2793, unsigned long int b);
typedef size_t				(* argv_1671)		(argv_2793, FILE *, int);
typedef void				(* argv_1641) (argv_1868);
typedef void				(* argv_1642)	(argv_1868, unsigned long int);
typedef void				(* argv_1694)		(argv_2793 rop, argv_1868, argv_2793);
typedef void				(* argv_1674)			(argv_2793, argv_2793, argv_2793);
typedef void				(* argv_1675)			(argv_2793, argv_2793, argv_2793);
typedef void				(* argv_1691)			(argv_2793, argv_2793, unsigned long int);
typedef void				(* fptr_mpz_set)			(argv_2793, argv_2793);
typedef unsigned long int	(* argv_1664)		(argv_2793, unsigned long int);
typedef void				(* fptr_mpz_init_set)		(argv_2793, argv_2793);
typedef void				(* argv_1659)			(argv_2793, argv_2793, argv_2793);
typedef void				(* argv_1663)			(argv_2793, argv_2793, argv_2793);
typedef void				(* argv_1693)		(argv_2793, argv_1868, unsigned long int);
typedef void				(* argv_1660)	(argv_2793, argv_2793, unsigned long int);
typedef int					(* argv_1683) (argv_2793, int);
typedef void				(* argv_1649)			(argv_2793, argv_2793, argv_2793);
typedef int					(* argv_1685)		(argv_2793, const char *, int);
typedef int					(* argv_1670)	(argv_2793, const char *, int);
typedef int					(* argv_1672)			(argv_2793, argv_2793, argv_2793);
typedef void				(* argv_1679)		(argv_2793, argv_2793);
typedef void				(* argv_1692)		(argv_2793, unsigned long int, unsigned long int);
typedef void				(* argv_1687)			(argv_2793, unsigned long int);
typedef void				(* argv_1653)			(argv_2793, unsigned long int);
typedef unsigned long int	(* argv_1666)			(argv_2793, argv_2793, unsigned long int);
typedef void				(* argv_1689)			(argv_2793, argv_2793);
typedef	void				(* argv_1678)			(argv_2793, argv_2793);
typedef unsigned long int	(* argv_1668)			(argv_2793);
typedef size_t				(* argv_1688)		(argv_2793, int);
typedef void				(* argv_1661)		(argv_2793, argv_2793, argv_2793, argv_2793);
typedef void				(* argv_1677)			(argv_2793, argv_2793, unsigned long int);
typedef void				(* argv_1661)		(argv_2793, argv_2793, argv_2793, argv_2793);
typedef	int					(* argv_1684)			(argv_2793, argv_2793, unsigned long int);
typedef int					(* argv_1673)		(argv_2793, argv_2793);
typedef unsigned long int	(* argv_1662)		(argv_2793, argv_2793, argv_2793, unsigned long int);
typedef void				(* argv_1682)		(argv_2793, argv_2793, unsigned long int, argv_2793);
typedef int					(* argv_1658)	(argv_2793, argv_2793);
typedef void				(* argv_1657)		(argv_2793, argv_2793, argv_2793);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_841
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 contains all the necessary function pointers
// @@ to work with the GMP library necessary for El-Gamal and
// @@ RSA algorithms.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_841
{
private:
#if defined (__WIN32_OS__) 
	HINSTANCE argv_1892;
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	LPVOID argv_1892;
#endif // #if defined (__LINUX_OS__)

	int32_t argv_2211  ();
	int32_t argv_2212 ();

	int32_t argv_2210 ();
	int32_t argv_2213 (const char *, void *&);
	int32_t init_random_generator ();

	argv_1868			argv_3325;

	string					argv_2136;

	bool					argv_2391			(argv_2793, argv_2793);
	bool					argv_2390			(argv_2793, uint32_t);
	void					argv_1245				(const char * , argv_2793);
	bool					argv_2018			(argv_2793, argv_2793);
	bool					argv_2015				(argv_2793);
	void					argv_1723	(uint32_t);

public:
	argv_1655					argv_1554;
	argv_1669					argv_1568;
	argv_1652					argv_1551;
	argv_1686					argv_1585;
	argv_1667				argv_1566;
	argv_1654					argv_1553;
	argv_1680				argv_1579;
	argv_1656			argv_1555;
	argv_1681					argv_1580;
	argv_1676				argv_1575;
	argv_1650					argv_1549;
	argv_1665					argv_1564;
	argv_1690					argv_1589;
	argv_1651			argv_1550;
	argv_1671				argv_1570;
	argv_1641		argv_1519;
	argv_1642			argv_1520;
	argv_1694				argv_1593;
	argv_1674					argv_1573;
	argv_1675					argv_1574;
	argv_1691					argv_1590;
	fptr_mpz_set					fp_mpz_set;
	argv_1664				argv_1563;
	fptr_mpz_init_set				fp_mpz_init_set;
	argv_1659					argv_1558;
	argv_1663					argv_1562;
	argv_1693				argv_1592;	
	argv_1660			argv_1559;
	argv_1683			argv_1582;
	argv_1649					argv_1548;
	argv_1685				argv_1584;
	argv_1670			argv_1569;
	argv_1672					argv_1571;
	argv_1679				argv_1578;
	argv_1692				argv_1591;
	argv_1687					argv_1586;
	argv_1653					argv_1552;
	argv_1666					argv_1565;
	argv_1689					argv_1588;
	argv_1678					argv_1577;
	argv_1668					argv_1567;
	argv_1688				argv_1587;
	argv_1661				argv_1560;
	argv_1677					argv_1576;
	argv_1684					argv_1583;
	argv_1673				argv_1572;
	argv_1662				argv_1561;
	argv_1682				argv_1581;
	argv_1658			argv_1557;
	argv_1657				argv_1556;

	argv_841 ();
	int32_t	argv_2208			(const char *);
	int32_t	argv_3915			();
	string	argv_1756			();
	void	argv_1729	(uint32_t, argv_2793, argv_2793);
	bool	argv_1452		(argv_2793, argv_2793, argv_2793);
	void	argv_1726  (argv_2793, argv_2793, argv_2793);
	void	argv_1727	(uint32_t, argv_2793);
	bool	argv_3087			(argv_2793, argv_2793, argv_2793, argv_2793);

	string	argv_3966 (argv_2793 _var, bool _display_in_hexa=false);
	string  argv_1319 (int32_t);
	void	reset ();
};

class Crandom_data_set
{
public:
	argv_841 *		argv_1874;

	argv_2793 argv_2488;
	argv_2793 argv_1736;
	argv_2793 argv_879;
	argv_2793 argv_751;
	argv_2793 argv_2489;
	argv_2793 argv_2929;
	argv_2793 argv_2951;

	Crandom_data_set (argv_841 *);
	~Crandom_data_set ();
};


#endif // #define argv_426



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
