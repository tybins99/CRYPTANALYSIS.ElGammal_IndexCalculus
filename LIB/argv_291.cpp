// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_356.hpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_352.hpp"
#include "../LIB/argv_356.hpp"



argv_1104::argv_1104 () {
	argv_1357 = "__201274__tar"; 
}

string argv_1104::argv_1744 () {
	return (argv_1357);
}


argv_3517 argv_1104::argv_670 (argv_3864& _type) {
	argv_3517 argv_1993	= argv_3849;
	_type		= argv_1440;

	if ((argv_2265[0] == 0x42) && (argv_2265[1] == 0x4D)) {
		_type = argv_1423;
	}
	else if ((argv_2265[0] == 0xFF) && (argv_2265[1] == 0xD8) && (argv_2265[2] == 0xFF) && (argv_2265[3]==0xE0)){
		_type = argv_1428;
	}
	else if((argv_2265[0]==0x49) && (argv_2265[1]==0x44) && (argv_2265[2]==0x33) && (argv_2265[3]==0x03)) {
		_type = argv_1430;
	}
	else if ((argv_2265[0]==0x30) && (argv_2265[1]==0x26) && (argv_2265[2]==0xB2) && (argv_2265[3]==0x75)) {
		_type = argv_1420;
	}
	else if ((argv_2265[0]==0x30) && (argv_2265[1]==0x26) && (argv_2265[2]==0xB2) && (argv_2265[3]==0x75)) {
		_type = argv_1442;
	}
	else if((argv_2265[0]== 0xEF) && (argv_2265[1]==0xBB) && (argv_2265[2]==0xBF)) {
		_type = argv_1438;
	}
	else if ((argv_2265[0]==0xFF) && (argv_2265[1] == 0xFE)) {
		_type = argv_1436;
	}
	else if ((argv_2265[0]==0xFE) && (argv_2265[1] == 0xFF)) {
		_type = argv_1437;
	}
	else if ((argv_2265[0]==0x4D) && (argv_2265[1]==0x5A)) {
		_type = argv_1425;
	}
	else if((argv_2265[0]==0x50) && (argv_2265[1]==0x4B) && (argv_2265[2]==0x03) && (argv_2265[3]==0x04)) {
		_type = argv_1443;
	}
	else if((argv_2265[0]==0x1F) && (argv_2265[1]==0x8B) && (argv_2265[2]==0x08)) {
		_type = argv_1427;
	}
	else if ((argv_2265[0]==0x47) && (argv_2265[1]==0x49) && (argv_2265[2]==0x46)) {
		_type = argv_1426;
	}
	else if((argv_2265[0]==0x52) && (argv_2265[1]==0x49) && (argv_2265[2]==0x46) && (argv_2265[3]==0x46)) {
		_type = argv_1421;
	}
	return (argv_1993);
}

void argv_1104::argv_858 (FILE * _fp, argv_3864& _type) {
	if (fseek (_fp, 257, SEEK_SET) == 0) {
		argv_3864 size = 6;
		char argv_770[MAX_PATH];
		char pattern[] = "ustar";
		int argv_2872 = fread (argv_770, 1, size, _fp);
		if (argv_2872 == size) {
			if (memcmp (argv_770, pattern, size) == 0) {
				_type = argv_1433;
			}
		}
	}
}

// __201274__tar (used by thumbnail)
void argv_1104::argv_859 (FILE * _fp, argv_3864& _type) {
	if (fseek (_fp, 257, SEEK_SET) == 0) {
		argv_3864 size = argv_1357.size();
		char argv_770[MAX_PATH];
		int argv_2872 = fread (argv_770, 1, size, _fp);
		if (argv_2872 == size) {
			if (memcmp (argv_770, argv_1357.c_str(), size) == 0) {
				_type = argv_1433;
			}
		}
	}
}

// a format is exotic when we can't determine it's argv_3842 by only looking
// at the first magic argv_782
void argv_1104::argv_850 (FILE * _fp, argv_3864& _type) {
	argv_3517 argv_1993	= argv_3849;
	argv_858 (_fp, _type);
	if (_type == argv_1440) {
		argv_859 (_fp, _type); // used in thumbnails
	}
}

argv_3517 argv_1104::argv_669 (argv_820 _filename, argv_3864& _type) {
	argv_3517 argv_1993	= argv_3849;
	_type		= argv_1440;

	if ((_filename == argv_2889) || (strlen(_filename) == 0)) {
		argv_1993 = argv_3848;
	}
	else {
		FILE * argv_1478 = fopen (_filename, "rb");
		
		if (! argv_1478) {
			argv_1993 = argv_3845;
		}
		else {
			int argv_2872 = fread (argv_2265, 1, argv_3844, argv_1478);

			if (argv_2872 < argv_3844) {
				if ( feof(argv_1478)) {
					argv_1993 = argv_3846;
				}
				else if(ferror(argv_1478) ) {
					_type = argv_3847;
				}
			}
			else { // argv_1139 succesfully read from argv_1396
				argv_1993 = argv_670 (_type);
				if (_type == argv_1440) {
					argv_850 (argv_1478, _type);
				}
			}
			fclose (argv_1478);		
		}
	}
	return (argv_1993);
}


argv_3517 argv_1104::argv_1996 (argv_820 _filename, bool& _archive_flag, argv_3864& _file_type) {
	argv_3517 argv_1993		= argv_3849;
	_archive_flag	= false;

	argv_1993 = argv_669 (_filename, _file_type);
	if (argv_1993 == argv_3849) {
		if (
			(_file_type==argv_1443) || 
			(_file_type==argv_1433) || 
			(_file_type==argv_1427)) {
			_archive_flag = true;
		}	
	}
	return (argv_1993);
}


argv_3517 argv_1104::argv_1998 (argv_820 _filename, bool& _result_flag, argv_3864& _file_type) {
	argv_3517 argv_1993		= argv_3849;
	_result_flag	= false;

	argv_1993 = argv_669 (_filename, _file_type);
	if (argv_1993 == argv_3849) {
		if (_file_type==argv_1443) {
			_result_flag = true;
		}	
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
