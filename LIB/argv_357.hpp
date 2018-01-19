#ifndef argv_488
#define argv_488


#include "../LIB/argv_338.hpp"
#include "../LIB/argv_323.hpp"

#include "../COMMON_PLUGIN/pe_type_detector.hpp"


typedef argv_3517 (* argv_1632)	(argv_2263, argv_2263&);
typedef void (* argv_1635) (argv_2263, argv_2263);
typedef argv_3517 (* argv_1648)				(argv_2263, argv_3862 *, argv_3864, bool&, argv_2263&);

typedef argv_3517 (* argv_1699)				(argv_2263 _kernel_data_ptr, argv_3862 *, argv_3864, bool&, argv_2263&);
typedef argv_3517 (* argv_1640)			(argv_2263, argv_2263, char *&, argv_3864&);
typedef argv_3517 (* argv_1636)					(argv_2263, argv_3862 *, argv_3864&, argv_2263, argv_3517&);

typedef argv_3517 (* argv_1630)					(argv_2263, argv_820);
typedef argv_3517 (* argv_1633)					(argv_2263);



class Ccallback_set
{
private:
	void	argv_855 (argv_917 *, argv_2263, argv_820, bool&);

public:
	argv_1630					argv_1490;
	argv_1633					argv_1498;	
	argv_1632	argv_1494;
	argv_1635	argv_1502;
	argv_1648					argv_1547;
	argv_1699				argv_1623;
	argv_1640			argv_1517;
	argv_1636					argv_1503;

	Ccallback_set ();
	bool argv_849 (argv_917 *);
};

class argv_1105 
{
private:
	argv_3862 *			argv_1401;
	argv_3864			argv_1416;

	argv_839	argv_1787;
	argv_1099	argv_3726;
	argv_3543	argv_2038;
	argv_836	argv_1400;
	bool			init_done;
	Ccallback_set	callback_set;
	bool			argv_3250 ();
	bool			argv_3252 (argv_820, argv_820, argv_820);
	bool			argv_3228 ();
	bool			argv_3089 (argv_820, argv_2263&, bool);

public:
	argv_1105 ();

	bool init (argv_820, argv_820, argv_2263&);
	~argv_1105 ();

	void init_callback__construct					(argv_1630);
	void init_callback__destruct					(argv_1633);		
	void init_callback__create_scan_result_atom		(argv_1632);
	void init_callback__destruct_scan_result_atom	(argv_1635);
	void init_callback__match_type					(argv_1648);
	void init_callback__scan_buffer					(argv_1699);
	void init_callback__get_scan_report				(argv_1640);
	void init_callback__dysinfect					(argv_1636);

	bool argv_3442 (argv_820, argv_820, argv_820, bool);
};

#endif // __MAIN_PE_FAKE_SCAN_FLAG__