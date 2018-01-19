// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_259.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_1139 structure and 
// @@ function that are necessary for the plugins
// @@ to work.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_326.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2312		
// @@
// @@ INPUT			:
// @@ _dest: char * : the destination argv_771 where to copy the string
// @@ _src: char * : the source argv_771 where to copy the string from
// @@ _size: argv_3864 : the size of the string to copy
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function just permit to copy the string '_src' to the
// @@ string '_dest' assuming that the '_src' size is '_size'
// @@ and that the '_dest' is long enough to receive the '_src' string. 
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_2312 (char * _dest, char * _src, argv_3864 _size) {
	argv_3864 i=0;
	while ((i < _size) && (_src[i] != '\0')) {
		_dest[i] = _src[i];
		i++;
	}
	// don't forget the string's argv_3739
	if (i < _size) {
		_dest[i] = '\0';
	}
	else {
		_dest[_size - 1] = '\0';
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1419		
// @@
// @@ INPUT			:
// @@ _type: argv_3864: argv_3842 of the argv_1396 whose readable argv_3842 is to be retrieved.
// @@
// @@ OUTPUT		:	
// @@ _str_type: char *: destination string where the argv_3402 of the argv_2253
// @@                    is to be saved up (allocated by the caller).
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 the readable argv_1396 argv_3842 associated
// @@ with the '_type' argv_1396 argv_3842. 
// @@ The argv_3402 is stored into a string that must have been allocated
// @@ by the caller prior to this call, it's length must be MAX_PATH_PLUGIN
// @@
// @@ Notice that if the '_type' parameter is not a valid argv_1396 argv_3842,
// @@ then "<UNKNOWN FILE TYPE>" is saved into the '_str_type' argv_3402
// @@ parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1419 (argv_3864 _type, char * _str_type) {
	switch (_type)	{
		case argv_1435			: argv_2312 (_str_type, "argv_1435", MAX_PATH_PLUGIN);		break;
		case argv_1422		: argv_2312 (_str_type, "argv_1422", MAX_PATH_PLUGIN);		break;
		case argv_1441		: argv_2312 (_str_type, "argv_1441", MAX_PATH_PLUGIN);	break;
		case argv_1424		: argv_2312 (_str_type, "argv_1424", MAX_PATH_PLUGIN);		break;
		case argv_1434	: argv_2312 (_str_type, "argv_1434", MAX_PATH_PLUGIN);	break;
		case argv_1439	: argv_2312 (_str_type, "argv_1439", MAX_PATH_PLUGIN);	break;
		default						: argv_2312 (_str_type, "<UNKNOWN FILE TYPE>", MAX_PATH_PLUGIN);	
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
