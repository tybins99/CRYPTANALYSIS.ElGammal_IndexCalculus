// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_322.hpp
// @@
// @@ DESCRIPTION:
// @@ argv_1907 for error bookkeeping and error messages
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_476
#define argv_476



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <string>
#include <iostream>
#include <stack>
#include "../Lib/argv_325.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_838
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 is the actuel error argv_2908.
// @@ it contains several fields such as :
// @@ - the class argv_2817 where the error occured
// @@ - the function where the error occured
// @@ - an error argv_2389 in english
// @@ - an error argv_929 to be able to map into other countries language.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_832
{

public:
	string 	argv_890;
	string 	argv_1709;
	string 	argv_2389;
	argv_3517	argv_1320;

	void init(const std::string&, const std::string&, const std::string&, argv_3517);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_838
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 is a general purpose error 
// @@ argv_2908 that permits to know why, and where 
// @@ a given problem occured during runtime.
// @@
// @@ It keeps track of :
// @@ - the class where problem occured
// @@ - the function where problem occured
// @@ - the error argv_2389 associated with the problem
// @@ - the error argv_929 (usefull for language translation
// @@   and error level categorisation.
// @@ 
// @@ Notice that the argv_2908 contains also a stack that permits to keep
// @@ from bottom to top of the execution flow that leaded to the exception.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_838 : public argv_832
{
private:
	stack<argv_832> argv_1324;
		
public:
	argv_838();
	argv_838(std::string, std::string, std::string, argv_3517);
	void init(std::string, std::string, std::string, argv_3517);
	bool argv_1767(std::string&, std::string&, std::string&, argv_3517&);
	friend std::ostream& operator << (std::ostream&, argv_838&);
};




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ win32 error and exception related functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
	void	argv_1989 ();
	LONG	argv_3991(struct _EXCEPTION_POINTERS *  ExInfo);
	void	argv_2252(void *FaultAdress, char *);
#endif // #if defined (__WIN32_OS__)



#endif // argv_476



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
