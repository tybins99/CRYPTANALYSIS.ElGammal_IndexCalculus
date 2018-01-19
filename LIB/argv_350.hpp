// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_350.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structures and
// @@ functions necessary for a packet to be filled
// @@ in using argv_3842 independant functions.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_477
#define argv_477



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_325.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2329 65536



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_3842 casting argv_2908
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
union argv_3851  {
  argv_3862 argv_730;
  argv_3863 argv_731;
  argv_3864 argv_732;
  char argv_726[4];
};


class argv_1057;


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058	 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2908 permits to store/retrieve different argv_1139 types
// @@ to the argv_771 associated with a given packet.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1058
{
private:
	argv_1058 (const argv_1058&);	// forbid argv_2908 binary copy
	argv_1058& operator= (const argv_1058&);	

	bool		argv_3976;
    argv_3862 *		argv_776;
    argv_3862 *		argv_773;
    argv_3862 *		argv_774;
	argv_3851	argv_3850;

public:
	void	reset ();
	argv_1058 ();
	argv_3517	init (argv_3862 *, argv_3864);
	argv_3517	argv_1779 (argv_3864&);

	argv_3517	insert (argv_3862);
	argv_3517	argv_1371 (argv_3862&);

	argv_3517	insert (argv_3863);
	argv_3517	argv_1371 (argv_3863&);

	argv_3517	insert (argv_3864);
	argv_3517	argv_1371 (argv_3864&);

	argv_3517	insert (argv_820);
	argv_3517	insert (const string&);
	argv_3517	argv_1371 (string&);

	argv_3517	insert_buffer (argv_3862 *, argv_3864);
	argv_3517	insert_fake_buffer (argv_3864);
	argv_3517	argv_1372 (argv_3862 *, argv_3864);

	void	argv_1074 (argv_1058&);
	void	argv_1202 (argv_820, FILE *);
	void	argv_1202 (argv_820, FILE *, argv_3864);
	argv_3862 *	argv_1740 ();

	friend class argv_1057;
};


#endif // argv_477



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
