// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_334.hpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_455
#define argv_455



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
#pragma warning(disable: 4786)
#pragma warning(disable: 4503)
#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ include files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <vector>
#if defined (__WIN32_OS__) 
	#include <Windows.h>
#endif // #if defined (__WIN32_OS__) 

#include "../LIB/argv_320.hpp"
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_340.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



class argv_1079
{
private:
	map<string, bool>::iterator argv_2268;
	argv_3864						argv_2295; 
	bool						argv_2270;
	map<string, bool>			argv_2300;

public:
	argv_1079 ();
	void reset ();

	void init (argv_3864, bool);
	bool argv_631 (argv_820);
	void argv_1780 (argv_3864&, bool&);
	bool argv_1753 (string&); 
	bool argv_1772 (string&);
};



class argv_1080
{
public:
	argv_3864	argv_3842;
	argv_3864	argv_3736;
	string	argv_3632;
	argv_2263	argv_3623;

	void set (argv_3864, argv_3864, argv_820, argv_2263);
};


// single: kernel & tool plugins
// multiple: plugins that can exists in multiple instances.
// a vector contains all possible multiple resolved symbols
// and the 'm_iter_by_type' and 'm_iter_by_target' map contains
// the indexes of the concerned groups.
/*
class argv_1081
{
private:
	vector<argv_1080>						m_v_resolved_entry;
	map<argv_3864, vector<argv_3864> >					m_v_by_type;
	map<argv_3864, vector<argv_3864> >::iterator			m_iter_by_type;

	map<argv_3864, vector<argv_3864> >					m_v_by_target;
	map<argv_3864, vector<argv_3864> >::iterator			m_iter_by_target;

	map<argv_3864, map<string, argv_1080> >	argv_2285; 

public:
	argv_1081 ();
	void reset ();
	argv_3517 argv_626 (argv_3864, argv_3864, argv_820, argv_2263, bool);
	argv_3517 argv_628 (argv_3864, argv_3864, argv_820, argv_2263);
	argv_3517 argv_627 (argv_3864, argv_3864, argv_820, argv_2263);

	argv_3517 get_first_group_by_type (vector<argv_3864>&);
	argv_3517 get_next_group_by_type (vector<argv_3864>&);

	argv_3517 get_first_group_by_target (vector<argv_3864>&);
	argv_3517 get_next_group_by_target (vector<argv_3864>&);

	argv_3517 lookup_one_grouped_symbol (argv_3864, argv_3864&, argv_3864&, string&, argv_2263&);
	argv_3517 argv_2257 (argv_3864, argv_820, argv_2263&);
};*/

class argv_1081
{
private:
	map<argv_3864, map<string, argv_1080> >			argv_2285; 

	map<argv_3864, map<string, argv_1080> >			argv_2284; 
	map<argv_3864, map<string, argv_1080> >::iterator	argv_2275;
	map<string, argv_1080>::iterator				argv_2274;	

	argv_3517 argv_628 (argv_839 *, argv_3864, argv_3864, argv_820, argv_2263);
	argv_3517 argv_627 (argv_839 *, argv_3864, argv_3864, argv_820, argv_2263);

public:
	argv_1081 ();
	void reset ();
	argv_3517 argv_626 (argv_839 *, argv_3864, argv_3864, argv_820, argv_2263, bool);
	argv_3517 argv_2257 (argv_3864, argv_820, argv_2263&);

	argv_3517 argv_2491 ();
	argv_3517 argv_2492 ();

	argv_3517 argv_1750 (argv_1080&);
	argv_3517 argv_1769 (argv_1080&);
};

#endif // argv_455
