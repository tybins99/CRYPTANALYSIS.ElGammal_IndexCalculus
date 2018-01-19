// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_317.hpp
// @@ argv_1907 for generic configuration argv_1396 parsing facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_3601 argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_475
#define argv_475

#define argv_2928



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "..\\Lib\\argv_325.hpp"
#include "..\\Lib\\argv_340.hpp"
#include "..\\Lib\\argv_322.hpp"

#include <vector>
#include <cctype>
#include <map>
#include <sstream>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ This constant determine the absolute maximum length for
// @@ any argv_2173 of the argv_1037 argv_1396. 
// @@
// @@ Notice that any variable is fully and uniquely identified
// @@ with the triplet <argv_1446, argv_3461, argv_3965>
// @@ in other words (argv_1446 argv_3461 argv_3965) -> argv_3959
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const int argv_2324 		= 256;
const int argv_3463	= 32;
const int argv_3967	= 32;
const int argv_3968	= 256;
const int argv_2328			= 256;
const int argv_2336	= 256;
const int argv_1039			= 256;	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_818 
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to argv_2198, parse, and argv_1371 argv_1139
// @@ from any configuration argv_1396, such a configuration argv_1396
// @@ being composed of sections, each argv_3461 containing argv_1139 of 
// @@ either argv_3517 argv_3842 or string argv_3842.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_818
{
private:
	argv_3517		argv_2173;
	string 		argv_1446;
	string 		argv_3461;
	string 		argv_1394;
	string		argv_1395;
	string 		argv_1706;
	string 		argv_1325;
	string		argv_3484;
	char 		argv_770[argv_2324];
	
	multimap<string, string>		argv_2463;
	multimap<string, string>::iterator 	argv_2020;

	void 		argv_1360();
	void 		argv_3270();	
	void 		argv_1208(argv_3517);
	string		argv_3838 (const string&);

public:
	argv_818();
	void	 	argv_2965 (const string& argv_1446);
	
	argv_3517		argv_1777 (string argv_1446, string argv_3461, string var_name, argv_3517 min, argv_3517 max);
	string		argv_1781 (string argv_1446, string argv_3461, string var_name);
	
	vector<argv_3517> 	argv_1760 (string argv_1446, string argv_3461, string var_name, argv_3517 min, argv_3517 max);
	vector<string> 	argv_1761 (string argv_1446, string argv_3461, string var_name);

	bool		argv_2014 (string argv_1446, string argv_3461, string var_name);

	vector<string>	argv_1268(bool is_html=false); // to dump to log argv_1396 after formatting it to string 
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_817
// @@
// @@ DESCRIPTION:
// @@ this argv_2908 can be seen as a store that can be filled in by the
// @@ argv_1037 parser and that can be querried as well to retrieved the argv_1139.
// @@ it merely associates a argv_3960 to each variable, each variable having
// @@ a argv_3842, this argv_3842 can either be argv_3517 or string, the argv_3517 argv_3842 stands
// @@ for Signed Integer on 32 argv_752 (i.e an integer actually)    
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_817 
{
private:
	std::map<string, string>	argv_2298;
	std::map<string, string>::iterator argv_2027;

	std::map<string, argv_3517>		argv_2297;
	std::map<string, argv_3517>::iterator argv_2026;

	std::map<string, vector<string> >	argv_2288;
	std::map<string, vector<string> >::iterator argv_2025;

	std::map<string, vector<argv_3517> >	argv_2287;
	std::map<string, vector<argv_3517> >::iterator argv_2024;

public:
	argv_817();

	bool argv_2012   (std::string argv_3461, std::string varname);
	bool argv_2010   (std::string argv_3461, std::string varname);
	bool argv_2013 (std::string argv_3461, std::string varname);
	bool argv_2011 (std::string argv_3461, std::string varname);

	void argv_3498 (std::string argv_3461, std::string varname, argv_3517 argv_3960);
	argv_3517 argv_1778 (std::string argv_3461, std::string varname);

	void argv_3499 (std::string argv_3461, std::string varname, std::string argv_3960);
	std::string argv_1782 (std::string argv_3461, std::string varname);
	
	void argv_3496 (std::string argv_3461, std::string varname, const vector<argv_3517>&);
	void argv_621 (std::string argv_3461, std::string varname, argv_3517 argv_3960);
	void argv_1762 (std::string argv_3461, std::string varname, vector<argv_3517>&);

	void argv_3497 (std::string argv_3461, std::string varname, const vector<string>&);
	void argv_622 (std::string argv_3461, std::string varname, std::string argv_3960);
	void argv_1763 (std::string argv_3461, std::string varname, vector<string>&);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_815
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to argv_1890 the argv_1037 parsing of main argv_1037 
// @@ argv_1396 and also sub argv_1037 files.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_815 : public argv_817
{
protected:
	bool argv_2201;
	argv_818 argv_1040;
	string argv_1446;

	virtual bool argv_3090 () = 0;
	
public:
	argv_815 ();
	virtual ~argv_815() {;}
	bool argv_2198 (string);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif // argv_475
