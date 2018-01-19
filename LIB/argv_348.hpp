// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: obj_loader_2.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all argv_1139 structure and
// @@ functions necessary for the coff loader
// @@ argv_2908 to work properly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_474
#define argv_474



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_338.hpp"
#include "../LIB/argv_355.hpp"
#include "../LIB/argv_336.hpp"
#include "../LIB/argv_337.hpp"
#include "../LIB/argv_323.hpp"
#include "../LIB/argv_358.hpp"

#include <vector>
#include <string>
#include <map>




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ CLASS: argv_808
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to convert COFF internal values to the 
// @@ corresponding human-readable string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_808
{
private:

public:
	string argv_3611 (argv_3862);
	string invalid_section_2_string (argv_3516);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ CLASS: argv_1098
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to store information concerning a given
// @@ symbol.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1098
{
public:
	argv_3864  argv_3961;
	argv_3516  argv_3466;
	argv_3863  argv_3843;
	argv_3862  argv_3612;

	void argv_1200 (argv_839 *, argv_820, bool);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ CLASS: argv_809
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to argv_2198 a COFF argv_1396 and argv_3385 
// @@ all necessary symbols. 
// @@
// @@ Notice that the OBJ argv_1396 is mmaped by the caller and that
// @@ the symbols resolved use only the virtual memory to perform
// @@ the argv_2198 and argv_3554 relocations so that the obj mmapped argv_1396
// @@ can be closed after argv_2198.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_809
{
private:
	map<string, argv_1098>	argv_2299;
	bool				init_done;
	bool				argv_2221;
	argv_3593    *	argv_3731;
	argv_814  *	argv_1021;
	argv_821    *	argv_1136;
	argv_839	*	argv_1788;
	argv_1127	*	argv_4003;
	argv_3862			*	argv_1417;
	argv_3862			*	argv_3462;
	argv_3862			*	argv_3464;
	argv_3862			*	argv_3616;
	argv_3862			*	argv_3633;
	argv_3864				argv_1416;
	argv_3862			*	argv_1313;
	argv_1921	argv_1920;
	argv_3862				argv_3511[9]; // used when extracting the symbol's argv_2817.

	argv_3517				argv_2316 (argv_1930 *, argv_820, argv_3862 *&);
	argv_3517				argv_2975 (argv_3864, argv_820, argv_1922 *, argv_3862 *, argv_3862 *);
	argv_3862 *				argv_1378 (argv_3864, argv_3634 *&, bool&);
	bool				argv_3628 (argv_820, argv_3864&);
	bool				argv_3629 (map<string, argv_1098>::iterator&);
	bool				argv_3630 (map<string, argv_1098>::iterator&);
	bool				argv_1728 (argv_820, string&, bool&);
	bool				argv_2825 (argv_3862 *);
	argv_3517				argv_2205 ();
	argv_3517				argv_2219 ();
	bool				argv_3631 (argv_820, map<string, argv_1098>::iterator&);
	argv_3517				argv_3386 (map<string, argv_1098>::iterator&, argv_1930 *, argv_820, argv_820, argv_820, map<string, argv_809 *>&, argv_3862 *&, argv_3862 *);
	argv_3517				argv_3388 (map<string, argv_1098>::iterator&, argv_820, argv_820, argv_820, map<string, argv_809 *>&, argv_3862 *&, argv_3862 *);
	argv_3517				argv_3389 (map<string, argv_1098>::iterator&, argv_1930 *, argv_820, argv_820, argv_820, map<string, argv_809 *>&, argv_3862 *&, argv_3862 *);
	argv_3517				argv_3387 (map<string, argv_1098>::iterator&, argv_820, argv_820, argv_820, map<string, argv_809 *>&, argv_3862 *&, argv_3862 *);
	void				argv_1219 (argv_3862 *, argv_820, argv_820);
	void				argv_1222 (argv_820, argv_820, bool, bool, bool);

public:
	argv_809 ();
	~argv_809 ();
	void				reset ();
	argv_3517				init (argv_839 *, argv_3593 *, argv_814 *, argv_821 *, argv_3862 *, argv_3864, argv_1127 *);
	argv_3517				argv_2198 ();
	argv_3517				argv_3385 (argv_820, argv_820, argv_820, map<string, argv_809 *>&, argv_3862 *&, argv_3862 * _father_addr=argv_2889);
	void				argv_1218 ();
	void				argv_1221 (bool);
};



#endif // argv_474