// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_340.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the definition of the 
// @@ log facility that permits to log events and
// @@ to associate a argv_3825 and date, coming along
// @@ with a argv_3504 level for each event.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_466
#define argv_466



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
#endif // #if defined (__WIN32_OS__) 
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_918
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 is a platform independant argv_2230 that
// @@ permits to avoid race conditions in threaded applications.
// @@ It works for both win32 and Linux platforms.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_918
{
private:
#if defined (__LINUX_OS__)
	pthread_mutex_t argv_2813;
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	CRITICAL_SECTION argv_1088;
#endif // #if defined (__WIN32_OS__) 

public:
	argv_918 ();
	void argv_2230 ();
	void argv_3917 ();
	~argv_918 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ log related constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2239				65536
#define argv_2249		256

//"02/20-17h51m48s "
#define argv_1144					16
//"|NOR| "
#define argv_2153				6

#if defined (__WIN32_OS__) 
	#define argv_2174				512 - argv_1144 - argv_2153
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	#define argv_2174				256 - argv_1144 - argv_2153
#endif // #if defined (__LINUX_OS__)

#if defined (__WIN32_OS__) 
	#define argv_3548 _snprintf
#endif // #if ! defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ log relative constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3225 {
    argv_2886,
    argv_3989,
    argv_1321,
    argv_660,
    argv_1152,
    argv_2885,
};

#if defined (__LINUX_OS__)
	#define MAX_PATH	256
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1139 types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (argv_3862)
	#define argv_3862	unsigned	char
#endif // argv_3862

#if ! defined (argv_1063)
	#define argv_1063				char *
#endif // #if ! defined (argv_1063)

#if ! defined (argv_820)
	#define argv_820	const		char *
#endif // #if ! defined (argv_820)

#if ! defined (argv_1066)
	#define argv_1066	const		argv_3862 *
#endif // #if ! defined (argv_1066) 

#if ! defined (argv_3515)
	#define argv_3515	signed		char
#endif // #if ! defined (argv_3515)

#if ! defined (argv_3863)
	#define argv_3863	unsigned	short
#endif // #if ! defined (argv_3863)

#if ! defined (argv_3516)
	#define argv_3516	signed		short
#endif // #if ! defined (argv_3516)

#if ! defined (argv_3517)
	#define argv_3517	signed		int
#endif // #if ! defined (argv_3517)

#if ! defined (argv_3864)
	#define argv_3864	unsigned	int
#endif // #if ! defined (argv_3864)

#if ! defined (argv_3865)
	#define argv_3865	unsigned	long
#endif // #if ! defined (argv_3865)

#if ! defined (argv_3406)
	#define argv_3406	float
#endif // #if ! defined (argv_3406)

#if ! defined (argv_3407)
	#define argv_3407	double
#endif // #if ! defined (argv_3407)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1033
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to have a fixed size argv_2173
// @@ composed of 
// @@ - a date
// @@ - a argv_3504 level
// @@ - a argv_2389
// @@
// @@ Notice that if the argv_2389 to append to the argv_2173
// @@ exceeds the argv_2173's maximum size, then the remaining
// @@ part of the argv_2389 is lost.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1033
{
private:
	string argv_3739;
	void insert_terminator (FILE *);

public:

	argv_1033 () {
#if defined (__WIN32_OS__)
		argv_3739 = "\r\n";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		argv_3739 = "\n";
#endif // #if defined (__LINUX_OS__)
	}

	void insert_date (FILE *, argv_820);
	void insert_level (FILE *, argv_820);
	void insert_body (FILE *, argv_820);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_917
// @@
// @@ DESCRIPTION:
// @@ This argv_2908 permits to open a log argv_1396,
// @@ save argv_1139 into it, and argv_921 it.
// @@ It can be thread safe depending on the compilation
// @@ argv_1453 you choose.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_917
{
	private:
		string			argv_1446;
		string			argv_1078;
		argv_1033		argv_2931;
		FILE *			argv_1478;
		argv_917 *			argv_1322;
		argv_3864			argv_1117;
		bool			argv_2238;
		char			argv_3734[argv_2249];
#if defined (__WIN32_OS__)
		SYSTEMTIME		argv_3824;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
        time_t			argv_1121;
        struct tm *		argv_3827;
#endif // #if defined (__LINUX_OS__)
		void			argv_3940 (bool _large_mode=false);
		void			insert_date ();
		void			insert_level (argv_3864);
		void			argv_864 ();
		void			reset ();
		argv_918	argv_741;

	public:
		argv_917();
		virtual			~argv_917();
		bool			argv_2937 (string, argv_917 *, string);
		void			argv_924 ();
		void			argv_2247 (argv_3864, argv_820);
		void			argv_2247 (argv_3864, argv_820, argv_3517);
		void			argv_2247 (argv_3864, argv_820, argv_3864);
		void			argv_2247 (argv_3862);
		void			argv_2247 (argv_3864, argv_3864, argv_3864);
		void			argv_2247 (argv_3864, argv_820, argv_820);
		void			argv_2247 (argv_3864, argv_820, argv_820, argv_820);
		void			argv_2247 (argv_3864, argv_820, argv_820, argv_820, argv_820);
		void			argv_2247 (argv_3864, argv_820, unsigned long);
		void			argv_2247 (argv_3864, argv_3864);
		void			argv_2248 (argv_3864, argv_820, argv_3864);
		void			argv_2234 (argv_3864, argv_3862 *, argv_820);
		void			argv_2233 (argv_3864, argv_3862 *, argv_3864, argv_820);
		FILE *			argv_1745 ();
		string			argv_1747 ();
		void			argv_1463 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  global argv_1139 container
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_839
{
public:
	argv_839 ();

	argv_917	argv_2251;

	string	argv_2976;
	string	argv_2832;
	string	argv_1018;
	string	argv_885;
	string	argv_2093;
	string  argv_3149;
	string	argv_1432;
	string	argv_1719;
	string	argv_1187;
	argv_3864	int_size;
	string	argv_2828;
	string	argv_2824;
	string	argv_2823;
	string	argv_2819;
	string	argv_2821;

	string	argv_2826;
	string  argv_2820;
	string	argv_2822;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ misc functions declarations
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1211 (argv_820, argv_917&); 



extern "C" 
{
	void argv_2247 (argv_917 *, argv_3864, argv_820);
}



#endif // argv_466



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
