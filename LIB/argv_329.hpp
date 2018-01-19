// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_329.hpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_450
#define argv_450




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_340.hpp"
#include "../LIB/argv_352.hpp"
#include "../LIB/argv_330.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;


class argv_806
{
protected:
	argv_3862			outer_type;
	argv_3862			inner_type;
	argv_3864			argv_1120;
	argv_3864			argv_1119;
	argv_3864			argv_1109;
	argv_3864			argv_1108;

	argv_802		argv_741;
	bool			argv_788;			// permits to argv_3607 the argv_2908
	bool			argv_3610;		// permits to argv_3607 the argv_2908
	bool			interrupt_flag;			// the OR of 2 other conditions

	bool			argv_3918;
	argv_3864			argv_3919;

public:
	argv_806 ();
	virtual			~argv_806 ();
	void			argv_789 (argv_3864, argv_3864);
	void			argv_3351 ();
	void			argv_3502 (argv_3864);
	void			argv_1754 (bool&, bool&, bool&, argv_3864&);
	void			argv_3384 ();
	void			reset ();
};

// You can notice that there exists a 'cancel_current_operation' field
// This field can be accessed and modified by the thread creator. This is
// possible because the thread creator instanciantes the argv_2908, then
// creates a thread giving the instanciated argv_2908's argv_635 to this
// thread, thus even if the argv_2908 runs in a separate thread, the thread
// creator can still have access to the argv_2908.
class argv_882 : public argv_806
{
protected:
	bool			argv_3254;
	string			argv_2949;
	argv_917 *			argv_2240;
	argv_883		inner_port;
	argv_1057			argv_3338;
	argv_1057			argv_3479;

	void			argv_1226 ();
	void			argv_1224 (argv_3517, argv_3517, argv_820);
	argv_3517			argv_3332 ();
	virtual argv_3517	argv_3275 (argv_3862);
	virtual argv_3517	argv_1252 ();
	argv_3517			forge_payload (argv_3862, argv_1057 *, vector<argv_819>&);
	argv_3517			insert_atom_vector (vector<argv_819>&);
	argv_3517			argv_3265 (bool, bool, argv_3862, argv_820);

public:

	argv_882 ();
	virtual			~argv_882 ();
	void			reset ();
	argv_3517			argv_3237 (argv_820, argv_3864, argv_917 *);
	argv_3517			argv_3414 (argv_820, argv_3864, argv_917 *);

	argv_3517			argv_3478 ();
	argv_3517			format_and_send_result (argv_820, argv_3862, argv_1057 *);
	argv_3517			argv_1464 (argv_3862, vector<argv_819>&, argv_820, argv_3862);
	argv_3517			argv_1377 ();
	argv_3517			argv_3328 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



#endif // argv_450
