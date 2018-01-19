// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_3726.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains the declarations of
// @@ the complex functions that are built
// @@ upon the system independant functions
// @@ provided by the system tool argv_2908.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_355.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1027		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_839 *: pointer on the argv_2908 containing
// @@     all the global argv_1139.
// @@
// @@ _syst_ptr: argv_3593 *: argv_635 of the argv_2908 containing
// @@       all the necessary system dependant functions.
// @@
// @@ _filename: argv_820: argv_2817 of the argv_1396 whose size is to be computed.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ unsigned long: size the argv_1396 whose argv_2817 is contained into
// @@                the '_filename' parameter if success,
// @@                0 otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the size of the argv_1396
// @@ whose argv_2817 is contained into the '_filename' parameter,
// @@ Notice that this function uses a system independant method
// @@ and is built upon the system independant functions exported
// @@ by the system tool argv_2908.
// @@
// @@ This function is a system independant function and thus 
// @@ works on both win32 and Linux systems independantly.
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a argv_2889 pointer.
// @@ - '_filename' parameter must not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	unsigned long argv_1027 (argv_839 * _glob_data_ptr, argv_3593 * _syst_ptr, argv_820 _filename) {
		unsigned long size = 0;

		if ((_filename != argv_2889) && (_syst_ptr->argv_2854 (_filename) != 0)) {
			FILE * argv_1478 = _syst_ptr->argv_2840 (_filename, "rb");
			if (argv_1478) {
				_syst_ptr->argv_2844 (argv_1478, 0, SEEK_END);
				size = _syst_ptr->argv_2845 (argv_1478);
				_syst_ptr->argv_2837 (argv_1478);
			}
		}
		return (size);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1398		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_839 *: pointer on the argv_2908 containing
// @@     all the global argv_1139.
// @@
// @@ _syst_ptr: argv_3593 *: argv_635 of the argv_2908 containing
// @@       all the necessary system dependant functions.
// @@
// @@ _filename: argv_820: argv_2817 of the argv_1396 whose existence must be checked.	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the argv_1396 whose argv_2817 is contained in the parameter
// @@   '_filename' exists, 
// @@   false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_1396 
// @@ whose argv_2817 is contained in the '_filename' parameter
// @@ exists or not.
// @@
// @@ This function is a system independant function and thus 
// @@ works on both win32 and Linux systems independantly.
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool argv_1398 (argv_839 * _glob_data_ptr, argv_3593 * _systool_ptr, argv_820 _filename) {
		bool bret = false;
		if (_filename != argv_2889) {
			FILE * argv_1478 = _systool_ptr->argv_2840 (_filename, "rb");
			if (argv_1478) {
				bret = true;
				_systool_ptr->argv_2837 (argv_1478);
			}
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2206		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_839 *: pointer on the argv_2908 containing
// @@     all the global argv_1139.
// @@
// @@ _syst_ptr: argv_3593 *: argv_635 of the argv_2908 containing
// @@       all the necessary system dependant functions.
// @@
// @@ _filename: argv_820: argv_2817 of the argv_1396 to argv_2198.	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3862 *: the argv_635 of the argv_1396 that was argv_2221 if success,
// @@         argv_2889 otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ 
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_3862 * argv_2206 (argv_839 * _glob_data_ptr, argv_3593 * _systool_ptr, argv_820 _filename) {
		argv_3862 * image = 0;
		if (_filename != argv_2889) {
			FILE * argv_1478 = _systool_ptr->argv_2840 (_filename, "rb");
			if (argv_1478) {
				unsigned long size = argv_1027 (_glob_data_ptr, _systool_ptr, _filename);
				image = (argv_3862 *) _systool_ptr->argv_2830 (size);
				_systool_ptr->argv_2841 (image, size, 1, argv_1478);
				_systool_ptr->argv_2839();
				_systool_ptr->argv_2837 (argv_1478);
			}
		}
		return image;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1052		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_839 *: pointer on the argv_2908 containing
// @@     all the global argv_1139.
// @@
// @@ _syst_ptr: argv_3593 *: argv_635 of the argv_2908 containing
// @@       all the necessary system dependant functions.
// @@
// @@ _src_filename: argv_820: argv_2817 of the original argv_1396 to copy.
// @@
// @@ _dst_filename: argv_820 : argv_2817 of the copied argv_1396.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3517 : 0 if operation was succesful,
// @@        1 if argv_2929 or more parameters are incorrect,
// @@        2 if the source argv_1396 could not be opened,
// @@        3 if the source argv_1396 could not be opened,
// @@        4 if the source argv_1396 size could not be computed,
// @@        5 if an error occured while reading the source argv_1396,
// @@		 6 if an error occured while writing the destination argv_1396,		
// @@		 7 if the destination argv_1396 could not be closed.
// @@
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to copy the argv_1396 '_src_filename'
// @@ to the destination argv_1396 '_dst_filename'. 
// @@
// @@ CONTRACT 		: 
// @@ - '_src_filename' parameter must not be a argv_2889 pointer.
// @@ - '_dst_filename' parameter must not be a argv_2889 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_3517 argv_1052 (argv_839 * _glob_data_ptr, argv_3593 * _systool_ptr, argv_820 _src_filename, argv_820 _dst_filename) {
		argv_3517 argv_1993 = 0;
		if ((_src_filename == argv_2889) || (_dst_filename == argv_2889)) {
			argv_1993 = 1;
		}
		else { // parameters are OK
			FILE * argv_1626 = _systool_ptr->argv_2840 (_src_filename, "rb");
			if (! argv_1626) {
				argv_1993 = 2; 
			}
			else { // source argv_1396 opened succesfully
				FILE * argv_1497 = _systool_ptr->argv_2840 (_dst_filename, "wb"); 
				if ( ! argv_1497) {
					argv_1993 = 3;
				}
				else { // destination argv_1396 opened succesfully
					char argv_770[argv_1053];
					unsigned long argv_1416 = argv_1027 (_glob_data_ptr, _systool_ptr, _src_filename);
					if (argv_1416 == 0) {
						argv_1993 = 4;
					}

					unsigned long nb_todo				= 0;
					unsigned long total_nb_remaining	= argv_1416;
					bool finished						= false;
					argv_3864 argv_2872						= 0;
					argv_3864 argv_2877						= 0;

					do {
						nb_todo = total_nb_remaining;
						if (nb_todo >= argv_1053) {
							nb_todo = argv_1053;	
						}

						argv_2872 = _systool_ptr->argv_2841 (argv_770, 1, nb_todo, argv_1626);
						if (argv_2872 != nb_todo) {
							argv_1993		= 5;
							break;
						}

						argv_2877 = _systool_ptr->argv_2846 (argv_770, 1, nb_todo, argv_1497);
						if (argv_2877 != nb_todo) {
							argv_1993		= 6;
							break;
						}

						total_nb_remaining -= nb_todo;
						if (total_nb_remaining == 0) {
							finished	= true;
						}
					}
					while (finished == false);

					if (_systool_ptr->argv_2837 (argv_1497) != 0) {
						if (argv_1993 == 0) { // don't overwrite another error argv_929
							argv_1993 = 7;
						}
					}
				}

				_systool_ptr->argv_2837 (argv_1626);
			}
		}
		return (argv_1993);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
