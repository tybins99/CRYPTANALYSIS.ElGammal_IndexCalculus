// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_352.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all the functions,
// @@ argv_1139 structures and constants that are 
// @@ necessary to implement the avx scanning
// @@ and admmin protocol.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_352.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3942		
// @@
// @@ INPUT			:	
// @@ _type: argv_3864 : packet argv_3842 whose corresponding human readable 
// @@   argv_2817 is to be generated.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string : the human readable packet argv_3842 associated with the 
// @@ '_type' argv_3960.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate the human-readable argv_3842
// @@ associated with the argv_3842 contained into the '_type' 
// @@ parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
	argv_3039,
*/
string argv_3942 (argv_3862 _type) {
	string type_str = "";
	switch (_type) {
		case argv_3065:						type_str = "argv_3065";						break;
		case argv_3053:						type_str = "argv_3053";						break;
		case argv_3049:			type_str = "argv_3049";			break;
		case argv_3055:						type_str = "argv_3055";						break;
		case argv_3051:		type_str = "argv_3051";		break;
		case argv_3054:				type_str = "argv_3054";				break;
		case argv_3050:	type_str = "argv_3050";	break;
		case argv_3056:				type_str = "argv_3056";				break;
		case argv_3052:	type_str = "argv_3052";	break;
		case argv_3063:						type_str = "argv_3063";						break;
		case argv_3064:			type_str = "argv_3064";			break;
		case argv_3066:					type_str = "argv_3066";					break;
		case argv_3067:					type_str = "argv_3067";					break;
		case argv_3060:				type_str = "argv_3060";				break;
		case argv_3062:				type_str = "argv_3062";				break;
		case argv_3036:			type_str = "argv_3036";			break;
		case argv_3032:	type_str = "argv_3032";	break;
		case argv_3035:		type_str = "argv_3035";		break;
		case argv_3037:			type_str = "argv_3037";			break;
		case argv_3033:			type_str = "argv_3033";			break;
		case argv_3034:			type_str = "argv_3034";			break;
		case argv_3031:	type_str = "argv_3031";	break;
		case argv_3045:		type_str = "argv_3045";		break;
		case argv_3041:		type_str = "argv_3041";		break;
		case argv_3040:		type_str = "argv_3040";		break;
		case argv_3044:			type_str = "argv_3044";			break;
		case argv_3038:					type_str = "argv_3038";					break;
		case argv_3046:				type_str = "argv_3046";				break;
		case argv_3042:			type_str = "argv_3042";			break;
		case argv_3043:			type_str = "argv_3043";			break;
		case argv_3047:				type_str = "argv_3047";				break;
		case argv_3048:				type_str = "argv_3048";				break;
		case argv_3039:		type_str = "argv_3039";		break;

		default :
			{
				char argv_3828[MAX_PATH];
				argv_3548 (argv_3828, MAX_PATH, "<unknown packet argv_3842: %d>", _type);
				argv_3828[MAX_PATH - 1] = '\0';
				type_str = argv_3828;
			}
	}
	return (type_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
