// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_324.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all argv_1139 structures and
// @@ objects that permits to have an event-driven
// @@ TCP/IP based loop to create an application.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_395
#define argv_395



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_349.hpp"
#include "../LIB/argv_345.hpp"
#include "../LIB/argv_321.hpp"
#include "../LIB/argv_333.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C functions called by the event loop
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3517 argv_2879		(argv_807 *, argv_3864, bool&);
argv_3517 argv_3012	(argv_807 *, argv_3864, bool&);
argv_3517 argv_3016	(argv_807 *, argv_3864, bool&);
argv_3517 argv_2361		(argv_807 *, argv_3864, bool&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_837
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 embeds the event loop that reacts to
// @@ all possible events on sockets.
// @@ It implements the functions that are called by the
// @@ event loop when an event occurs on a given argv_3549.
// @@
// @@ it uses a kernel manager to hide the mechanisms and
// @@ create an abstraction layer.
// @@ The first kernel manager is allocated and argv_3254 by the
// @@ gateway itself, but when an update is argv_1261, the admin thread
// @@ creates and argv_3237 a new kernel manager, and sends the argv_635
// @@ of this new kernel to the gateway.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_837
{
private:
	argv_834	argv_1348;
	argv_917 *				argv_2240;
	argv_833			argv_1347;
	vector<argv_3550 *>	argv_3948;
	argv_807 *		argv_891;
	char				argv_3828[MAX_PATH];
	bool				argv_1402;
	argv_3862				argv_3941;
	string				argv_3830;
	string				argv_1379;

	string				argv_3409;
	string				argv_2041;
	argv_889	*	argv_2064;

	argv_1057	*			argv_3009;

	bool				argv_3454;
	bool				infected;
	argv_1063				argv_3980;
	bool				argv_1272;
	bool				argv_1270;
	bool				argv_1273;

	argv_3517				argv_3273 (argv_807 *, argv_3864, bool&);
	argv_3517				argv_3274 (argv_807 *, argv_3864, bool&);
	argv_3517				argv_3263 (argv_807 *, argv_3864, bool&);
	argv_3517				argv_3268 (argv_807 *, argv_3864, bool&);
	argv_3517				argv_3276 (argv_807 *, argv_3864, bool&);
	argv_3517				argv_3275 (argv_807 *, argv_3864, bool&);
	argv_3517				argv_1468 (argv_807 *, argv_3864, bool&);
	argv_3517				argv_1470 (argv_807 *, argv_3864, bool&, argv_3517);
	argv_3517				argv_860 (argv_807 *, argv_3864);
	argv_3517				argv_3442 (argv_820, bool);
	argv_3517				argv_3493 (argv_3864&);
	argv_3517				argv_3475 (argv_807 *, argv_3864, argv_820);
	argv_3517				argv_1229 ();
	argv_3517				argv_3271 (argv_820, argv_807 *, argv_3864, argv_3517);

public:
	argv_837 ();
	void				reset ();
	argv_3517				argv_3414 (argv_917 *, argv_3864, vector<argv_916>&, argv_820, argv_820);

	argv_3517				argv_2878	(argv_807 *, argv_3864, bool&);
	argv_3517				argv_3011	(argv_807 *, argv_3864, bool&);
	argv_3517				argv_3015	(argv_807 *, argv_3864, bool&);
	argv_3517				argv_2360		(argv_807 *, argv_3864, bool&);
};



#endif // argv_395



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
