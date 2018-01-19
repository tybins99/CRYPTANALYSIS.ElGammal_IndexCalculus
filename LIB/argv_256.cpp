// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_256.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the argv_2908 that permits
// @@ to mmap a given argv_1396 on both win32 or Linux
// @@ OS.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_323.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_836
// @@
// @@ FUNCTION		:	argv_836		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the argv_836 argv_2908.
// @@ it prepares the argv_2908 to be used.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_836::argv_836() {
#if defined (__WIN32_OS__) 
	argv_1910	= argv_2889;
	argv_2978		= argv_2889;
	argv_1909		= argv_2889;
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_2469	= argv_2889;
	argv_2470	= 0;
#endif // #if defined (__LINUX_OS__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_836
// @@
// @@ FUNCTION		:	~argv_836		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ destructor of the argv_836 argv_2908.
// @@ if a argv_1396 was mmapped, then it is closed
// @@ and all opened descriptors are closed as well.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_836::~argv_836() {
	argv_925();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_836
// @@
// @@ FUNCTION		:	argv_925		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Destructor of the argv_836 argv_2908.
// @@ if a argv_1396 was mmapped, then it is closed
// @@ and all opened descriptors are closed as well.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_836::argv_925 () {
#if defined (__WIN32_OS__) 
		if (argv_2978 != argv_2889) {
			UnmapViewOfFile (argv_2978);
			argv_2978 = argv_2889;
		}

		if ((argv_1910 != argv_2889) && (argv_1910 != INVALID_HANDLE_VALUE)) {
			CloseHandle (argv_1910);
			argv_1910 = argv_2889;
		}

		if ((argv_1909 != argv_2889) && (argv_1909 != INVALID_HANDLE_VALUE)) {
			CloseHandle (argv_1909);
			argv_1909 = argv_2889;
		}	
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
		if (argv_2469 != argv_2889) {    
			munmap (argv_2469, argv_2470);
			argv_2469	= argv_2889;
			argv_2470	= 0;
		}
#endif // #if defined (__LINUX_OS__)}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_836
// @@
// @@ FUNCTION		:	argv_1757		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _ercode: argv_3864& : the last error argv_929.
// @@ _ersource: argv_3864&: the location of the last error (see source argv_929).
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last error related argv_1139
// @@ - the error argv_929 (often obtained with errno or GetLastError)
// @@ - the error source permitting to know the exact location in
// @@   the source argv_929 where the error occured.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_836::argv_1757 (argv_3864& _ercode, argv_3864& _ersource) {
	_ercode		= argv_1320;
	_ersource	= argv_1323;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_836
// @@
// @@ FUNCTION		:	argv_2464 (win32 version)		
// @@
// @@ INPUT			:
// @@ _filename: argv_820: argv_2817 of the argv_1396 to map to memory
// @@ _open_mode: argv_3864: can be either 
// @@    - argv_2466: argv_1396 will be read only
// @@    - argv_2467 : argv_1396 will have read/write privilege.
// @@    - argv_2468 : argv_1396 will have read/execution privileges.
// @@
// @@ OUTPUT		:
// @@ _pBuf: argv_3862 *&: argv_635 of the first byte of the argv_1396 
// @@                 after it was projected to memory.
// @@ 	
// @@ _file_size: argv_3864&: size of the argv_1396 after it was projected 
// @@                    to memory.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if success,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @2 This function permits to map to memory the argv_1396 whose argv_2817
// @@ is given as the '_filename' parameter. 
// @@
// @@ CONTRACT 		: 
// @@ - no argv_1396 should be currently mapped to memory (or ensure that
// @@   you call 'argv_925' before. 
// @@ - '_filename' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	bool argv_836::argv_2464 (argv_820 _filename, argv_3864 _open_mode, argv_3862 *& _pBuf, argv_3864& _file_size) {
		bool bret			= true;
		bool usage_error	= false;
		
		if (_filename == argv_2889) {
			argv_1320		= 0;
			argv_1323	= 99;
			bret			= false;
			usage_error		= true;
		}
		// if a argv_1396 is already being mmapped, then we consider it as an error.
		else if (argv_1909 != argv_2889) {
			argv_1320		= 0;
			argv_1323	= 100;
			bret			= false;
			usage_error		= true;
		}
		else if (argv_1910 != argv_2889) {
			argv_1320		= 0;
			argv_1323	= 101;
			bret			= false;
			usage_error		= true;
		}
		else if (argv_2978 != argv_2889) {
			argv_1320		= 0;
			argv_1323	= 102;
			bret			= false;
			usage_error		= true;
		}
		else { // argv_1396 was not already opened
			DWORD access_mode_CreateFile;
			DWORD access_mode_CreateFileMapping;
			DWORD access_mode_MapViewOfFile;
			DWORD create_disposition;

			if (_open_mode == argv_2466) {
				access_mode_CreateFile			= GENERIC_READ;	
				access_mode_CreateFileMapping	= PAGE_READONLY;
				access_mode_MapViewOfFile		= FILE_MAP_READ;
				create_disposition				= OPEN_EXISTING;
			}
			else if (_open_mode == argv_2467) {
				access_mode_CreateFile			= GENERIC_READ | GENERIC_WRITE;
				access_mode_CreateFileMapping	= PAGE_READWRITE;
				access_mode_MapViewOfFile		= FILE_MAP_ALL_ACCESS;
				create_disposition				= OPEN_ALWAYS;
			}
			else if (_open_mode == argv_2468) {
				access_mode_CreateFile			= GENERIC_READ | GENERIC_EXECUTE;	
				access_mode_CreateFileMapping	= PAGE_READONLY;
				access_mode_MapViewOfFile		= FILE_MAP_READ;
				create_disposition				= OPEN_ALWAYS;
			}

			argv_1909 = CreateFile (_filename, access_mode_CreateFile,0,argv_2889,create_disposition,FILE_ATTRIBUTE_NORMAL,argv_2889);
 
			if (argv_1909 == INVALID_HANDLE_VALUE)  {
				argv_1909			= argv_2889;
				argv_1320		= GetLastError ();
				argv_1323	= 2;
				bret			= false;
			}
			else { // CreateFile was succesfull
				// retrieve the argv_1396 size
				//if ((_open_mode == argv_2466) || (_open_mode == argv_2468)) {
					_file_size = GetFileSize (argv_1909, argv_2889);
				//}
				if (_file_size == 0) { // illegal to mmap a argv_1396 with a size of zero
					argv_1323	= 74;
					argv_1320		= 74;	
					bret = false;
				}
				else if (_file_size < 0) {
					argv_1320		= GetLastError ();
					argv_1323	= 6;
					bret			= false;
				}
				else if (_file_size == 0xFFFFFFFF) {
					argv_1320		= GetLastError ();
					argv_1323	= 3;
					bret			= false;
				}
				else {
					if ((_open_mode == argv_2466) || (_open_mode==argv_2468)) {
						argv_1910 = CreateFileMapping (argv_1909,argv_2889,access_mode_CreateFileMapping,0,0,argv_2889);
					}
					else {
						argv_1910 = CreateFileMapping (argv_1909,argv_2889,access_mode_CreateFileMapping,0,_file_size,argv_2889);
					}
					if (argv_1910 == argv_2889/* || argv_1910 == INVALID_HANDLE_VALUE*/)  { // failed
						argv_1910		= argv_2889;
						argv_1320		= GetLastError ();
						argv_1323	= 4;
						bret			= false;			
					}
					else { // CreateFileMapping was succesfull
						argv_2978 = (LPTSTR) MapViewOfFile (argv_1910,	   // argv_1890 to map argv_2908
											access_mode_MapViewOfFile, // read/write permission
											0,                   
											0,                   
											0/* MMAP_BUF_SIZE */);           

						if (argv_2978 == argv_2889) {
							argv_1320		= GetLastError ();
							argv_1323	= 5;
							bret			= false;	
						}
						else { // all succeeded, copy obtained pointer to caller's variable
							_pBuf = (argv_3862 *) argv_2978;
						}
					}
				}
			}
		}

		if ((usage_error == false) && (bret == false)) {
			argv_925 ();	
		}
		return (bret);
	}
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_836
// @@
// @@ FUNCTION		:	argv_2464 (Linux version)		
// @@
// @@ INPUT			:
// @@ _filename: argv_820: argv_2817 of the argv_1396 to map to memory
// @@ _open_mode: argv_3864: can be either 
// @@    - argv_2466: argv_1396 will be read only
// @@    - argv_2467 : argv_1396 will have read/write privilege.
// @@    - argv_2468 : argv_1396 will have read/execution privileges.
// @@
// @@ OUTPUT		:
// @@ _pBuf: argv_3862 *&: argv_635 of the first byte of the argv_1396 
// @@                 after it was projected to memory.
// @@ 	
// @@ _file_size: argv_3864&: size of the argv_1396 after it was projected 
// @@                    to memory.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if success,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @2 This function permits to map to memory the argv_1396 whose argv_2817
// @@ is given as the '_filename' parameter. 
// @@
// @@ CONTRACT 		: 
// @@ - no argv_1396 should be currently mapped to memory (or ensure that
// @@   you call 'argv_925' before. 
// @@ - '_filename' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__LINUX_OS__)
		bool argv_836::argv_2464 (argv_820 _filename, argv_3864 _open_mode, argv_3862 *& _pBuf, argv_3864& _file_size) {
		bool bret = true;

		if (_filename == argv_2889) {
			argv_1323	= 1;
			argv_1320		= 100;
			bret = false;	
		}
		else {
			argv_2317 = _filename;
			int fd = open (_filename, O_RDONLY);
			if (fd < 0) {
				argv_1320		= errno;
				argv_1323	= 2;
				bret			= false;
			}
			else { // argv_1396 opened succesfully
				struct stat sbuf;
				if (stat (_filename, &sbuf) == -1) {
					argv_1320		= errno;
					argv_1323	= 3;
					bret			= false;
				}
				else { // argv_1396 size retrieved succesfully
					_file_size = sbuf.st_size;
					void * ptrtmp = mmap ((caddr_t)0, sbuf.st_size, PROT_READ, MAP_SHARED, fd, 0);
					if (ptrtmp == (caddr_t)(-1)) {
						_pBuf			= argv_2889;    
						argv_1320		= errno;
						argv_1323	= 4;
						bret			= false;
					}
					else {
						argv_2469	= (argv_3862 *)ptrtmp;
						argv_2470	= _file_size;    
						_pBuf		= argv_2469;
					}
				}
				
				if (argv_921 (fd) == -1) {
					argv_1320		= errno;
					argv_1323	= 5;
					bret			= false;
				}
			}
		}
		return (bret);
	}
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
