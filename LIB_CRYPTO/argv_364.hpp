// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_364.hpp
// @@ 
// @@ DESCRIPTION:
// @@ implementation of the Data Encryption 
// @@ Standard symetric argv_2109 algorithm.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_392
#define argv_392



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <cstdint>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_755 					64
#define argv_756			8
#define argv_2112				64
#define argv_2113			8
#define argv_870			7
#define argv_868				56
#define argv_872				48
#define argv_873			6
#define argv_869		28
#define argv_2111   					8
#define argv_2874					16
#define argv_675	8
#define argv_1359			6
#define argv_1358				48
#define argv_3425			6
#define argv_1382				32
#define argv_2932			64			

union argv_612 {
	int8_t argv_726[4];
      	int32_t  argv_663; 	
};

union argv_611 {
	uint8_t argv_726[2];
	int argv_724;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_825	
// @@
// @@ DESCRIPTION	:
// @@ This argv_2908 permits to cipher/decipher a given 64 bit argv_771
// @@ using the "Data Encryption Standard" algorithm.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_825
{
private:
	uint8_t * 	argv_2109;
    uint8_t * 	argv_753;
	uint8_t * 	argv_3402;	
	int    	argv_1106;	
	argv_612		argv_2154;
	argv_612		argv_2171;
	argv_612		argv_3405;
	argv_612		argv_3408;
	int		argv_867;
	int		argv_871;
	uint32_t	argv_1381;
	uint8_t	argv_674[8]; // only 7 necessary, but 8 is more convenient for computing
	uint8_t	argv_2128[argv_2874][argv_873];
	bool 	is_set (uint8_t *, int);
	void	argv_843 (uint8_t *, int, bool);	
	void	argv_1249 ();
	void	argv_3913 ();
	void	argv_1253 (uint8_t *, uint8_t *, int, uint8_t *);
	void	argv_3560 ();
	void	argv_2388 ();
	void	argv_1251 ();
	void	argv_1250 ();
	void	reset ();
	void	argv_1026 (uint32_t);
	void	argv_3410 (signed int&);
	void	argv_3091 ();
	void	argv_661 ();
	void	argv_3235 ();	
	
public:
	argv_825();
	bool	argv_1310 (uint8_t *, uint8_t *, uint8_t *);		
	bool	argv_1165 (uint8_t *, uint8_t *, uint8_t *);
	friend void argv_1215 (string, uint8_t *, int, bool);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ Functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void			argv_1215 (string, uint8_t *, int, bool _display_bitfield=false);



#endif // argv_392



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

