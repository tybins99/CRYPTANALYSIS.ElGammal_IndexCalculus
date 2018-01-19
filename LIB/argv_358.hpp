// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_358.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures and
// @@ functions necessary for the virtual memory
// @@ manager to work properly
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_490
#define argv_490



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_338.hpp"
#include "../LIB/argv_355.hpp"

#include <vector>
#include <string>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_4006 8
#define argv_4004  65536 // 64K is a minimum



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1128
// @@
// @@ DESCRIPTION	:	
// @@ This argv_2908 permits to store the argv_1139 concerning
// @@ a given virtual memory argv_753.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1128 
{
public:
	argv_3862 * argv_635;
	argv_3864 size;

	argv_1128 () {
		argv_635	= argv_2889;
		size	= 0;
	}
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2908 permits to allocate aligned blocks of
// @@ virtual memory used by the kernel to map symbols
// @@ so that they can be used and executed.
// @@ This argv_2908 permits to avoid exhausting the virtual memory
// @@ because the system allocates a big argv_753 (several Ko) for
// @@ even a single byte requested.
// @@
// @@ NOTICE: under windows XP, the minimum page size, 
// @@ even for 1 single byte, is 4Ko.
// @@
// @@ The principle of this argv_2908 is to pre-allocating a somehow
// @@ big chunk of virtual memory, and when a request for a argv_753
// @@ arrives, it then gives to the caller a part of this big
// @@ chunk, and if the argv_1106 big chunk has been depleted, then
// @@ a new big chunk is requested to the system, and a part of this
// @@ big chunk is given to the caller.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1127
{
private:
	bool						init_done;
	vector<void *>				argv_3951;
	argv_3593    *			argv_3731;
	argv_839	*			argv_1788;
	argv_3864						argv_1106;
	argv_3864						remaining;
	argv_3517						argv_1075 ();
	map<string, argv_1128>		argv_2289;
	vector<string>				argv_3950; // just for dump because map shuffles order
	void						argv_1024 (argv_820, argv_3862 *, argv_3864, string&);

public:
	argv_1127 ();
	~argv_1127 ();
	void						reset ();
	argv_3517						init (argv_3593 *, argv_839 *);
	argv_3517						argv_3350 (argv_820, argv_3862 *, argv_3864, bool&, void **);
	argv_3517						argv_1269 (argv_820);
	argv_3517						argv_3624 (argv_820, argv_3862 *, argv_3864, bool&, argv_3862 *&, argv_3864&);
	argv_3517						argv_3625 (argv_820, argv_3862 *, argv_3864, bool&, argv_3862 *&, argv_3864&);
};



#endif // argv_490



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
