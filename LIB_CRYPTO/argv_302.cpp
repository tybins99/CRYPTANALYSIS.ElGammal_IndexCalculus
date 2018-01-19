// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_366.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1396 contains all argv_1139 structures and
// @@ functions necessary to use the gmp library
// @@ as a dynamic library.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_366.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_841	
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
// @@ Normal constructor of the 'argv_841' argv_2908.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_841::argv_841 () {
	argv_1892 = NULL;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	reset	
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
// @@ This function permits reset the argv_2908
// @@ to it's initial argv_3604.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_841::reset () {
	argv_3915 ();
	argv_1568					= NULL;
	argv_1551				= NULL;
	argv_1585				= NULL;
	argv_1566				= NULL;
	argv_1553					= NULL;
	argv_1579				= NULL;

	argv_1555			= NULL;
	argv_1580					= NULL;
	argv_1575				= NULL;
	argv_1554				= NULL;	
	argv_1549				= NULL;	
	argv_1548					= NULL;
	argv_1564					= NULL;	
	argv_1550			= NULL;	
	argv_1570				= NULL;	
	argv_1519		= NULL;

	argv_1520			= NULL;
	argv_1593				= NULL;
	argv_1573					= NULL;
	argv_1574					= NULL;
	argv_1590				= NULL;
	argv_1589					= NULL;
	fp_mpz_set					= NULL;
	argv_1563				= NULL;
	fp_mpz_init_set				= NULL;
	argv_1558				= NULL;
	argv_1562				= NULL;

	argv_1592				= NULL;
	argv_1559			= NULL;
	argv_1582		= NULL;
	argv_1584				= NULL;
	argv_1569			= NULL;
	argv_1571				= NULL;
	argv_1578			= NULL;
	argv_1591			= NULL;
	argv_1586				= NULL;
	argv_1552				= NULL;

	argv_1565				= NULL;
	argv_1587			= NULL;	
	argv_1560				= NULL;
	argv_1576				= NULL;
	argv_1583					= NULL;
	argv_1572				= NULL;
	argv_1561			= NULL;
	argv_1581				= NULL;
	argv_1557			= NULL;
	argv_1556				= NULL;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_2208	
// @@
// @@ INPUT			:
// @@ _filename: const char *: argv_2817 of the gmp DLL to argv_2198.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1847 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to open the GMP DLL and
// @@ to argv_2198 all the necessary GMP functions.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_841::argv_2208 (const char * _filename) {
	int32_t argv_1993 = argv_1847;
#if defined (__WIN32_OS__) 
	argv_1892 = LoadLibrary (_filename);
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	argv_1892 = dlopen (_filename, RTLD_NOW);
#endif // #if defined (__LINUX_OS__)

	if (argv_1892 == NULL) {
		argv_1993 = argv_1832;
	}
	else {
		argv_1993 = argv_2210 ();	

		if (argv_1993 == argv_1847) {
			argv_1993 = init_random_generator ();
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_2213	
// @@
// @@ INPUT			:
// @@ _function_name: const char *: argv_2817 of the function to argv_2253 from
// @@   the GMP DLL.	
// @@
// @@ OUTPUT		:
// @@ _extracted_address: void *&: the argv_635 of the function
// @@  	whose argv_635 was retrieved from the GMP DLL.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1847 if success,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 the argv_635 of the function
// @@ from the GMP DLL whose argv_2817 is given as the '_function_name' 
// @@ parameter, if found, the argv_3402 is saved into the 
// @@ '_extracted_address' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_841::argv_2213 (const char * _function_name, void *& _extracted_address) {
	int32_t argv_1993 = argv_1847;

#if defined (__WIN32_OS__)
	_extracted_address = (LPVOID) GetProcAddress (argv_1892, _function_name);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	_extracted_address = (LPVOID) dlsym (argv_1892, _function_name);
#endif // #if defined (__LINUX_OS__)

	if (_extracted_address == NULL) {
		argv_1993 = argv_1831;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_1756	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string : the last GMP error as a string.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last GMP error
// @@ as a string.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_841::argv_1756 () {
	return (argv_2136);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_2211	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1847 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 the argv_635 of the first
// @@ half of the GMP functions that we need.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_841::argv_2211 () {
	int32_t argv_1993 = argv_1847;

	void * extracted_address = NULL;
	argv_1993 = argv_2213 ("__gmpz_init", extracted_address);
	if (argv_1993 == argv_1847) {
		argv_1568 = (argv_1669) extracted_address;
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_clear", extracted_address);
		if (argv_1993 == argv_1847) {
			argv_1551 = (argv_1652) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_set_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			argv_1585 = (argv_1686) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_get_str", extracted_address);
		if (argv_1993 == argv_1847) {
			argv_1566 = (argv_1667) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_cmp", extracted_address);
		if (argv_1993 == argv_1847) {
			argv_1553 = (argv_1654) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_out_str", extracted_address);
		if (argv_1993 == argv_1847) {
			argv_1579 = (argv_1680) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_congruent_p", extracted_address);
		if (argv_1993 == argv_1847) {
			argv_1555 = (argv_1656) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_powm", extracted_address);
		if (argv_1993 == argv_1847) {
			argv_1580 = (argv_1681) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_mul_2exp", extracted_address);
		if (argv_1993 == argv_1847) {
			argv_1575 = (argv_1676) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_cmp_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			argv_1554 = (argv_1655) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_add_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1549 = (argv_1650) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_add", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1548 = (argv_1649) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_set_str", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1584 = (argv_1685) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_init_set_str", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1569 = (argv_1670) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_invert", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1571 = (argv_1672) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_nextprime", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1578 = (argv_1679) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_ui_pow_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1591 = (argv_1692) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_setbit", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1586 = (argv_1687) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_clrbit", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1552 = (argv_1653) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_gcd_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1565 = (argv_1666) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_sqrt", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1588 = (argv_1689) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_neg", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1577 = (argv_1678) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_get_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1567 = (argv_1668) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_fdiv_qr", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1560 = (argv_1661) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_mul_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1576 = (argv_1677) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_root", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1583 = (argv_1684) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_legendre", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1572 = (argv_1673) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_fdiv_qr_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1561 = (argv_1662) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_powm_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1581 = (argv_1682) extracted_address;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_2212	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1847 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 the argv_635 of the second
// @@ half of the GMP functions that we need.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_841::argv_2212 () {
	int32_t argv_1993 = argv_1847;

	void * extracted_address = NULL;
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_gcd", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1564 = (argv_1665) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_cdiv_q_2exp", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1550 = (argv_1651) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_inp_str", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1570 = (argv_1671) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmp_randinit_default", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1519 = (argv_1641) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmp_randseed_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1520 = (argv_1642) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_urandomm", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1593 = (argv_1694) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_mod", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1573 = (argv_1674) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_mul", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1574 = (argv_1675) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_sub_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1590 = (argv_1691) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_sub", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1589 = (argv_1690) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_set", extracted_address);
		if (argv_1993 == argv_1847) {
			 fp_mpz_set = (fptr_mpz_set) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_fdiv_ui", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1563 = (argv_1664) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_init_set", extracted_address);
		if (argv_1993 == argv_1847) {
			 fp_mpz_init_set = (fptr_mpz_init_set) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_fdiv_q", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1558 = (argv_1659) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_fdiv_r", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1562 = (argv_1663) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_urandomb", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1592 = (argv_1693) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_fdiv_q_2exp", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1559 = (argv_1660) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_probab_prime_p", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1582 = (argv_1683) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_sizeinbase", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1587 = (argv_1688) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_divisible_p", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1557 = (argv_1658) extracted_address;
		}
	}
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2213 ("__gmpz_divexact", extracted_address);
		if (argv_1993 == argv_1847) {
			 argv_1556 = (argv_1657) extracted_address;
		}
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_2210	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1847 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2253 the argv_635 of the first half
// @@ and of the second half of the GMP functions that we need so that
// @@ the argv_841 can be ready to work.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_841::argv_2210 () {
	int32_t argv_1993 = argv_1847;
	argv_1993 = argv_2211 ();
	if (argv_1993 == argv_1847) {
		argv_1993 = argv_2212 ();
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_3915	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1847 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to unload the GMP DLL after it was
// @@ argv_2221.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_841::argv_3915 () {
	int32_t argv_1993 = argv_1847;
	if (argv_1892 != NULL) {
#if defined (__WIN32_OS__)
		if (FreeLibrary (argv_1892) == 0) {
			argv_1993 = argv_1822;
		}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
		if (dlclose (argv_1892) != 0) {
			argv_1993 = argv_1822;
		}
#endif // #if defined (__LINUX_OS__)
		argv_1892 = NULL;
	}
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	init_random_generator	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1847 if operation was succesful,
// @@        another argv_3960 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3237 the pseudo-random argv_1736
// @@ before it's first use.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_841::init_random_generator () {
	int32_t argv_1993 = argv_1847;
	argv_1519 (argv_3325);

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_3824;
	GetLocalTime (&argv_3824);
	argv_1520 (argv_3325, /*argv_3824.wMilliseconds*/201274);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct timeval argv_3733;
	gettimeofday (&argv_3733, NULL);
	argv_1520 (argv_3325, argv_3733.tv_usec);
#endif // #if defined (__LINUX_OS__)
	return (argv_1993);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_1245	
// @@
// @@ INPUT			:	
// @@ _name: const char *: symbolic argv_2817 of the variable to argv_1200.
// @@
// @@ _var: argv_2793 : the argv_3960 of the variable to argv_1200.
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
// @@ This function permits to argv_1200 the content of the variable
// @@ whose argv_3960 is contained into the '_var' parameter, the symbolic 
// @@ variable's argv_2817 being contained into the '_name' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_841::argv_1245 (const char * _name, argv_2793 _var) {
	char * as_string = NULL;
	as_string = argv_1566 (NULL, 10, _var);	
	cerr << _name << " : " << as_string << endl;
	free (as_string);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_2391	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _a: argv_2793 : 
// @@	
// @@ RETURN VALUE	:	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// false argv_3514 n est probablement premier
// true argv_3514 il est composite
bool argv_841::argv_2391 (argv_2793 _a, argv_2793 _n) {
	bool bret				= false;
	unsigned long int unite = 1;
	argv_2793 m;
	argv_2793 n_minus_one;
	argv_2793 two;
	argv_2793 modulo_result;
	argv_2793 y;
	argv_2793 b;

	argv_1568 (n_minus_one);
	argv_1568 (modulo_result);
	argv_1568 (two);
	argv_1568 (b);
	argv_1568 (y);

	argv_1590 (n_minus_one, _n, 1);	// argv_3237 n-1
	fp_mpz_init_set (m, n_minus_one);		// m = n-1;
	argv_1585 (y, 1);					// int y = 1;
	argv_1585 (two, 2);

	while (argv_1554 (m, 0) != 0) {
		argv_1573 (modulo_result, m, two);
		if (argv_1554 (modulo_result, 1)==0) {	// if (m%2 == 1) { 
			argv_1574 (y, y, _a);
			argv_1573 (y, y, _n);		// y = (y*a) % n;
			argv_1590 (m, m, 1);	// m = m-1;
		}
		else {
			fp_mpz_set (b, _a);		// int b = a;
			argv_1574 (_a, _a, _a);		
			argv_1573 (_a, _a, _n);	// a= (a*a) % n

			if ((argv_1554 (_a,unite) == 0) && (argv_1554 (b,unite) != 0) && (argv_1553(b,n_minus_one)!=0)) {
				// b est une racine carre non triviale de 1
				bret = true;        // n est compose'
				break;
			}
			argv_1558 (m, m, two);
		}
	}

	if (bret == false) {
		if (argv_1554 (y, unite) != 0) {
			bret = true;            // n est compose'
		}
		else {
			bret = false;
		}
	}

	argv_1551 (n_minus_one);
	argv_1551 (m);
	argv_1551 (modulo_result);
	argv_1551 (two);
	argv_1551 (b);
	argv_1551 (y);

	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_2390	
// @@
// @@ INPUT			:
// @@ _nb_attempt: uint32_t: the number of tests to be performed before
// @@   considering	that the test is a success.
// @@
// @@ OUTPUT		:	
// @@ n: argv_2793: the number whose primality is to be tested.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if n is probably prime,
// @@       false otherwise (if n is composite).
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the Miller-Rabin primality 
// @@ test to the 'n' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_841::argv_2390 (argv_2793 n, uint32_t _nb_attempt) {
	bool bret = false;
	argv_2793 a;
	argv_1568 (a);

	for (uint32_t i=0; i<_nb_attempt; i++) {
		do {
			argv_1593 (a, argv_3325, n);
		}
		while (argv_1554 (a,0) == 0);

		if (argv_2391 (a,n)) { 
			bret = true;
			break;
		}
    }
	argv_1551 (a);
    return bret;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_1726	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _min_inclusive: the minimum argv_3960 for the generated number.
// @@ 
// @@ _max_inclusive: the maximum argv_3960 for the generated number.	
// @@
// @@ _result: argv_2793: the generated pseudo-radom number.
// @@
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a pseudo-random number
// @@ within the range [_min_inclusive..._max_inclusive], the
// @@ argv_3402 being stored into the '_result' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_841::argv_1726  (argv_2793 _min_inclusive, argv_2793 _max_inclusive, argv_2793 _result) {
	argv_2793 delta;
	argv_1568 (delta);
	// compute the allowed maximum delta = max - min
	argv_1589 (delta, _max_inclusive, _min_inclusive);
	// correct the delta because the rand function generates a number in [0..n-1]
	argv_1549 (delta, delta, 1);

	// generate a random delta using the allowed maximum delta
	argv_1593 (_result, argv_3325, delta);
	
	// argv_616 the minimum boundary to the random delta generated
	argv_1548 (_result, _result, _min_inclusive);
	argv_1551 (delta);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_1727	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _nb_bit : uint32_t: the size in bit of the prime number to generate.
// @@	
// @@ _result: argv_2793 : the argv_3402 of the argv_1734.
// @@
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate randomly a prime number 
// @@ whose size in bit is given by the '_nb_bit' parameter, the
// @@ argv_3402 being saved into the '_result' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_841::argv_1727 (uint32_t _nb_bit, argv_2793 _result) {
	argv_2793 bit_value;
	argv_2793 two;
	argv_1568 (bit_value);
	argv_1568 (two);

	argv_1585 (two, 2);

	// generate a random number whose size in bit is '_nb_bit'
	for (uint32_t i=0 ; i<_nb_bit ; i++) {
		if (i==(_nb_bit-1)) { // in order to have the same magnitude for all generated numbers
			argv_1586 (_result, i);
		}
		else {
			argv_1593 (bit_value, argv_3325, two);
			if (argv_1554 (bit_value, 0) == 0) {
				argv_1552 (_result, i);
			}
			else if (argv_1554 (bit_value, 1) == 0) {
				argv_1586 (_result, i);
			}
		}
	}
	
	// find the next prime for the generated number
	argv_1578 (_result , _result);

	argv_1551 (bit_value);
	argv_1551 (two);	
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_2015	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _challenger: argv_2793: the number whose primality is to be tested.
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the number contained into the '_challenger' 
// @@        parameter is probably prime,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether the number contained 
// @@ into the '_challenger' parameter is probably prime or not.
// @@ Notice that the number of attempts is fixed to 20, in other
// @@ words the number is considered probably prime if the primality
// @@ test succeeds at least 20 times.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_841::argv_2015 (argv_2793 _challenger) {
	bool bret = false;
	uint32_t nb_attempt = 20;
	int retcode = argv_1582 (_challenger, nb_attempt);
	if ((retcode ==2) || (retcode ==1)) {
		bret = true;
	}
	return (bret);
}
/*
bool argv_841::argv_2015 (argv_2793 _challenger) {
	bool bret = false;

	uint32_t nb_attempt = 20;
	if (argv_2390 (_challenger, nb_attempt) == false) {
		bret = true;
	}
	return (bret);
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_1723	
// @@
// @@ INPUT			:	
// @@ _max: uint32_t: the number of primes to generate.
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
// @@ This function permits to generate the first n primes
// @@ n being given by the '_max' parameter.
// @@ Notice that this function is mainly used to debug the argv_2908.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_841::argv_1723 (uint32_t _max) {
	string s1; 
	argv_2793 i;
	argv_1568 (i);
	argv_1585 (i, 4);

	int nb_displayed = 0;
	while (argv_1554 (i, _max) != 0) {
		if (argv_2015 (i) == true) {
			s1 = argv_3966 (i);	
			cerr << s1 << " ";
			nb_displayed++;
			if (nb_displayed == 32) {
				cerr << endl;
				nb_displayed = 0;
			}
		}
		argv_1549 (i, i, 1);
	}
	argv_1551 (i);
	cerr << endl;
}
/*
void argv_841::argv_1729 (uint32_t _key_size_in_bit, argv_2793 _p, argv_2793 _q) {
	bool strong_prime	= false;
	uint32_t nb_lap			= 0;

	cerr << "argv_2109 size : " << _key_size_in_bit << " argv_752" << endl;
	// find first prime
	do {
		argv_1592 (_p, argv_3325, _key_size_in_bit);
		nb_lap++;
	}
	while (argv_2015 (_p) == false);
	cerr << "found first prime after " << nb_lap << " laps" << endl;

	// find next prime if necessary
	while (strong_prime == false) {
		if (argv_2018 (_p, _q) == true) {
			strong_prime = true;
		}
		else {
			argv_1578 (_p, _p);
		}
		nb_lap++;
	}

	cerr << "found strong prime after " << nb_lap << " laps" << endl;
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_1729	
// @@
// @@ INPUT			:
// @@ _key_size_in_bit: the size of the argv_2109.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _p: argv_2793: the first parameter of the equation.
// @@
// @@ _q: argv_2793: the second parameter of the equation.	
// @@
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a string prime number whose
// @@ size in bit is given by the '_key_size_in_bit' parameter.
// @@ The argv_3402 is stored into '_p', however, we 
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_841::argv_1729 (uint32_t _key_size_in_bit, argv_2793 _p, argv_2793 _q) {
	bool strong_prime = false;

	uint32_t nb_lap			= 0;

	cerr << "argv_2109 size : " << _key_size_in_bit << " argv_752" << endl;
	// find first prime
	do {
		argv_1592 (_p, argv_3325, _key_size_in_bit);
		nb_lap++;
	}
	while (argv_2015 (_p) == false);
	cerr << "found first prime after " << nb_lap << " laps" << endl;

	nb_lap = 0;
	while (strong_prime == false) {
		if ((argv_2015 (_p) == true) && (argv_2018 (_p, _q) == true)) {
			strong_prime = true;
		}
		else {
			argv_1549 (_p, _p, 2);
		}
		nb_lap++;
	}

	//cerr << "found second prime after " << nb_lap << " laps" << endl;
}

/*
void argv_841::argv_1729 (uint32_t _key_size_in_bit, argv_2793 _p, argv_2793 _q) {
	bool strong_prime = false;

	uint32_t nb_lap = 0;
	while (strong_prime == false) {
		argv_1592 (_p, argv_3325, _key_size_in_bit);

		if (argv_2015 (_p) == true) {
			if (argv_2018 (_p, _q) == true) {
				strong_prime = true;
			}
		}
		nb_lap++;
	}

	cerr << "found after " << nb_lap << " laps" << endl;
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_1452	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _q: argv_2793: first parameter of the equation.
// @@
// @@ _p: argv_2793: second parameter of the equation.
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if a primitive root was succesfully found,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to find the primitive root of the 
// @@ _q parameter, 
// @@ it should be a argv_1736 for q, which means it needs to 
// @@ be relatively prime to q-1.   
// @@ Usually a small prime like 2, 3 or 5 will work. 
// @@ example: 2 is a primitive root argv_2488 5 because :
// @@ (2exp 0) mod 5 = 1
// @@ (2exp 1) mod 5 = 2
// @@ (2exp 2) mod 5 = 4
// @@ (2exp 3) mod 5 = 3
// @@ (2exp 4) mod 5 = 1
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// 1: exp
// 2: argv_2488
// 3: argv_3402
bool argv_841::argv_1452 (argv_2793 _q, argv_2793 _p, argv_2793 _generator) {
	bool bret = false; // not found yet
	argv_2793 argv_3828;
	argv_2793 two;
	argv_1568 (argv_3828);
	argv_1568 (two);
	argv_1585 (two, 2);

	uint32_t max = 32;
	for (uint32_t i=0 ; i<max ; i++) {
		argv_1585 (_generator, (2*i)+3); // 3,5,7...(all odd numbers from 3)
		argv_1580   (argv_3828, _generator, _q, _p);	// argv_3828 = g^q mod p

		if (argv_1554 (argv_3828, 1) != 0) {
			argv_1580 (argv_3828, _generator, two, _p);	// argv_3828 = g^2 mod p 

			if (argv_1554 (argv_3828, 1) != 0) { // found a argv_1736
				bret = true;
				break;
			}
		}
	}

	argv_1551 (argv_3828);
	argv_1551 (two);
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_2018	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _p: argv_2793: the number to be checked.
// @@
// @@ _q: argv_2793: the second part of the equation.
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if '_p' is a strong prime, 
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given number is
// @@ a strong prime or not.
// @@ For a "strong" prime p, p is prime, and (p-1)/2 is also prime.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_841::argv_2018 (argv_2793 _p, argv_2793 _q) {
	bool bret = false;

	// 1. p itself must be a prime number !
	fp_mpz_set (_q, _p);
	argv_1590 (_q, _p, 1);
	argv_1559 (_q, _q, 2);	// q = (p-1)/2
/*
	{
		string p_str = argv_3966 (_p);
		string q_str = argv_3966 (_q);
		//cerr << "p=" << p_str << " => q=" << q_str << endl;
	}
*/
	if (argv_2015 (_q) == true) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_841	
// @@
// @@ FUNCTION		:	argv_3966	
// @@
// @@ INPUT			:
// @@ _display_in_hexa: bool: true if the variable's argv_3960 is to be
// @@    displayed in hexa, false otherwise.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _var : argv_2793: the variable whose content is to be converted
// @@   to a string. 
// @@	
// @@ RETURN VALUE	:	
// @@ string: the argv_3960 of the variable '_var' converted to a string.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert the variable _var's argv_3960 
// @@ to a string and return the argv_3402.
// @@ We can also choose to argv_1200 in hexa if necessary.
// @@
// @@ WARNING:
// @@ because the function 'argv_2715' generates a memory leak
// @@ if we pass a NULL argv_3960 as the first parameter, we must never
// @@ use this function directly, instead we use this wrapper.
// @@ 
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_841::argv_3966 (argv_2793 _var, bool _display_in_hexa) {
	char argv_3828[argv_2325];	
	int argv_742 = 10;
	if (_display_in_hexa == true) {
		argv_742 = 16;
	}
	argv_1566 (argv_3828, argv_742, _var);
	return (argv_3828);
}

// the division may fail if we need to compute the inverse of b and
// if b has no inverse in this argv_2488 (to have an inverse, we need to
// have the following property fullfilled : argv_1717(b,argv_2488) = 1
bool argv_841::argv_3087 (argv_2793 _a, argv_2793 _b, argv_2793 _modulo, argv_2793 _result) {
	bool bret = true;
/*	if (argv_1557 (_a, _b) != 0) { // a is a multiple of b
		argv_1556 (_result, _a, _b);
	}
	else { // a/b = a*(b^-1) => compute b^-1
	*/
		argv_2793 inv_b;
		argv_1568 (inv_b);
		if (argv_1571 (inv_b, _b, _modulo) == 0) { // no inverse in this case
			bret = false;
		}
		else {
			argv_1574 (_result, _a, inv_b);
			argv_1573 (_result, _result, _modulo);
		}
		argv_1551 (inv_b);
//	}
	return (bret);
}

Crandom_data_set::Crandom_data_set (argv_841 *	_gmp_tool_ptr) {
	argv_1874 = _gmp_tool_ptr;
	argv_1874->argv_1568 (argv_2488);
	argv_1874->argv_1568 (argv_1736);
	argv_1874->argv_1568 (argv_879);
	argv_1874->argv_1568 (argv_751);
	argv_1874->argv_1568 (argv_2489);
	argv_1874->argv_1568 (argv_2929);
	argv_1874->argv_1568 (argv_2951);
}

Crandom_data_set::~Crandom_data_set () {
	argv_1874->argv_1551 (argv_2488);
	argv_1874->argv_1551 (argv_1736);
	argv_1874->argv_1551 (argv_879);
	argv_1874->argv_1551 (argv_751);
	argv_1874->argv_1551 (argv_2489);
	argv_1874->argv_1551 (argv_2929);
	argv_1874->argv_1551 (argv_2951);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
