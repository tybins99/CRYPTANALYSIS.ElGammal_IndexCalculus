#ifndef argv_2345
#define argv_2345



#include <string>
#include <string.h>		
#include <iostream>
#include <cstdio>
#include <cstdlib>


#define argv_3548 _snprintf



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;

#ifdef __alpha
typedef unsigned int argv_3867;
#else
typedef unsigned long argv_3867;
#endif

#define argv_3517			signed int
#define argv_1718	-1
#define argv_1071	32

const argv_3517	argv_2338		= 65536;

struct argv_2346 {
	argv_3867 argv_770[4];
	argv_3867 argv_752[2];
	unsigned char in[64];
};

void argv_2348(struct argv_2346 *context);
void argv_2351(struct argv_2346 *context, unsigned char const *argv_770,
	       unsigned len);
void argv_2347(unsigned char digest[16], struct argv_2346 *context);
void argv_2350(argv_3867 argv_770[4], argv_3867 const in[16]);

typedef struct argv_2346 argv_2344;


string argv_1029 (const char *);


#endif /* !argv_2345 */



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

