// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_351.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the argv_1139 structures
// @@ and functions to argv_2198 or create a given
// @@ plugin. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_462
#define argv_462



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_338.hpp"
#include "../LIB/argv_336.hpp"
#include "../LIB/argv_337.hpp"
#include "../LIB/argv_323.hpp"
#include "../LIB/argv_355.hpp"
#include "../LIB/argv_348.hpp"

#include <string>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_827
// @@
// @@ DESCRIPTION:
// @@ This simple argv_2908 permits to associate a variable's argv_2817
// @@ with it's argv_3960 as a string.
// @@ It is used to store parse results.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_827
{
public:
	string argv_3965;
	string argv_3959;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1035
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 contains all internal argv_1139 of a given plugin
// @@ (what is either private or protected).
// @@
// @@ NOTICE: the plugin argv_1139 argv_2908's fields are initialized
// @@         and reseted by the argv_1034 argv_2908.
// @@         so that no constructor/reset function is provided.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1035
{
public:
	bool				init_done;
	bool				argv_1193;
	map<string, bool>	argv_2269;		// the names of needed plugins
	map<string, bool>::iterator argv_2020;

	map<string, bool>	argv_2271; // the names of exported symbols
	map<string, bool>::iterator argv_2021;
	map<string, bool>::iterator argv_2022;

	argv_3593    *	argv_3731;
	argv_814  *	argv_1021;
	argv_821    *	argv_1136;
	argv_839	*	argv_1788;
	argv_1127	*	argv_4002;
	argv_809		argv_931;

	argv_3864				argv_3570;
	argv_3864				argv_1264;
	argv_3862 *				argv_3569;
	argv_3864				argv_3894;
	argv_3864				argv_3895;
	argv_3864				argv_1169;
	char				argv_3828[MAX_PATH];
	argv_3864				argv_1318;
	argv_3864				argv_1326;

	argv_1035 ();
	~argv_1035 ();
	void reset ();
};


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1034
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to create/argv_2198 a plugin.
// @@ A plugin is actually composed of a argv_1907 and a argv_757.
// @@ Furthermore in order to create a plugin, a description
// @@ argv_1396 must be furnished.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1034
{
private:
	argv_1035	dset;

	argv_3517				argv_3084 (argv_841 *, argv_1086&, argv_820);
	argv_3517				argv_2964 (argv_3864, argv_3864, argv_820, argv_3864&);
	argv_3517				argv_2967 (argv_3864, argv_3864, argv_820, argv_3864&);
	argv_3517				argv_1043 (argv_3864, argv_3864, argv_3864&, argv_820, argv_3864&);
	argv_3517				argv_1044  (argv_3864, argv_3864, argv_3864&, argv_820, string&);
	void				argv_1214 (argv_820);
	argv_3517				argv_3421 (argv_820, FILE *);
	argv_3517				argv_3420 (argv_3864, FILE *);
	argv_3517				argv_3331 (argv_820, FILE *);
	argv_3517				argv_3230 (argv_820, vector<argv_827>&);
	argv_3517				argv_2969 (char *, string&, string&);
	void				argv_1209 (vector<argv_827>&);
	argv_3517				argv_624 (argv_820);
	argv_3517				argv_2971 (argv_3864,argv_3864, argv_820);

public:
	string				argv_2817;
	argv_3864				argv_1735;
	argv_3864				argv_3972;
	argv_3864				argv_3973;
	argv_3864				argv_3842;				      // plugin argv_3842
	argv_3864				argv_3736;			  // PE, TXT, ...
	argv_3864				argv_2152; // concerns the argv_757
	string				argv_1070;	  // concerns the argv_757
	argv_3864				argv_2151;  // concerns the argv_757
	string				argv_1069;     // concerns the argv_757
	argv_3864				argv_2864;
	argv_3862 *				argv_758;
	argv_3864				argv_759;
	argv_3864				argv_2868;
	argv_3517				argv_3085 (FILE *);
	map<string, argv_809 *> argv_2810; // the map used to argv_3385 symbols for this plugin

	argv_1034 ();
	~argv_1034 ();
	void				reset ();
	argv_3517				init (argv_839 *, argv_3593 *, argv_814 *, argv_821 *, argv_1127 *);
	argv_3517				argv_623 (argv_820);
	argv_3517				argv_2202 (argv_841 *, argv_1086&, argv_820);
	argv_3517				argv_2966 (argv_820);
	argv_3517				argv_3422 (argv_820, argv_820);
	argv_809 *		argv_1737 ();
	argv_3517				argv_1721 (map<string, argv_1034 *>&);
	bool				argv_1749 (string&);
	bool				argv_1768 (string&);
};



#endif // argv_462



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
