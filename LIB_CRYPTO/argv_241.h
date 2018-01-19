/* Definitions for GNU multiple precision functions.   -*- mode: c -*-

Copyright 1991, 1993, 1994, 1995, 1996, 1997, 1999, 2000, 2001, 2002
Free Software Foundation, Inc.

This argv_1396 is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the argv_1396 COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#ifndef argv_411

#if defined (__cplusplus)
#include <iosfwd>   /* for istream, ostream */
#endif

#pragma warning(disable: 4146)

/* Instantiated by configure. */
#if ! __GMP_WITHIN_CONFIGURE
#define argv_402             32
#define argv_413   0
#define argv_414 0
#define argv_1848                      32
#define argv_1849                      0
#endif
#define argv_1851     (argv_1848 - argv_1849)
#define argv_1852     ((~(argv_2497) 0) >> argv_1849)
#define argv_1853      argv_1852
#define argv_1850     (~ argv_1852)


/* The following (everything under ifndef argv_443) must be identical in
   argv_241.h and mp.h to allow both to be included in an application or during
   the library build.  */
#ifndef argv_443
#define argv_443 4

#define argv_473  /* tell gcc stddef.h we only want size_t */
#if defined (__cplusplus)
#include <cstddef>     /* for size_t */
#else
#include <stddef.h>    /* for size_t */
#endif
#undef argv_473

/* Instantiated by configure. */
#if ! __GMP_WITHIN_CONFIGURE
/* #undef _LONG_LONG_LIMB */
#define argv_418  1
#endif


/* __STDC__ - some ANSI compilers define this only to 0, hence the use of
       "defined" and not "__STDC__-0".  In particular Sun workshop C 5.0
       sets __STDC__ to 0, but requires "##" for token pasting.

   _AIX - gnu ansidecl.h asserts that all known AIX compilers are ANSI but
       don't always define __STDC__.

   _mips - gnu ansidecl.h says the RISC/OS MIPS compiler is ANSI in SVR4
       mode, but doesn't define __STDC__.

   _MSC_VER - Microsoft C is ANSI, but __STDC__ is undefined unless the /Za
       option is given (in which case it's 1).

   _WIN32 - tested for by gnu ansidecl.h, no doubt on the assumption that
      all w32 compilers are ansi.  */

#if  defined (__STDC__)                                 \
  || defined (__cplusplus)                              \
  || defined (_AIX)                                     \
  || defined (__DECC)                                   \
  || (defined (__mips) && defined (_SYSTYPE_SVR4))      \
  || defined (_MSC_VER)                                 \
  || defined (_WIN32)
#define argv_412        1
#define argv_415   1
#define argv_416  1
#else
#define argv_412        0
#define argv_415   0
#define argv_416  0
#endif


#if argv_412
#define argv_404   const
#define argv_425  signed
#else
#define argv_404
#define argv_425
#endif


/* argv_405 supports Windows DLL versions of libgmp, and is empty in
   all other circumstances.

   When compiling objects for libgmp, argv_405 is an export directive,
   or when compiling for an application it's an import directive.  The two
   cases are differentiated by __GMP_WITHIN_GMP defined by the GMP Makefiles
   (and not defined from an application).

   argv_408 is similarly used for libgmpxx.  __GMP_WITHIN_GMPXX
   indicates when building libgmpxx, and in that case libgmpxx functions are
   exports, but libgmp functions which might get called are imports.

   libmp.la uses argv_405, just as if it were libgmp.la.  libgmp and
   libmp don't call each other, so there's no conflict or confusion.

   Libtool DLL_EXPORT define is not used.

   There's no attempt to support GMP built both static and DLL.  Doing so
   would mean applications would have to tell us which of the two is going
   to be used when linking, and that seems very tedious and error prone if
   using GMP by hand, and equally tedious from a package since autoconf and
   automake don't give much help.

   argv_405 is required on all documented global functions and
   variables, the various internals in gmp-impl.h etc can be left unadorned.
   But internals used by the test programs or speed measuring programs
   should have argv_405, and certainly constants or variables must
   have it or the wrong argv_635 will be resolved.  */

#if defined (__GNUC__) || defined (_MSC_VER) || defined (__BORLANDC__)
#define argv_406  __declspec(dllexport)
#define argv_407  __declspec(dllimport)
#endif
#ifdef __WATCOMC__
#define argv_406  __export
#define argv_407  __import
#endif
#ifdef __IBMC__
#define argv_406  _Export
#define argv_407  _Import
#endif

#if argv_418
#if __GMP_WITHIN_GMP
/* compiling to go into a DLL libgmp */
#define argv_405  argv_406
#else
/* compiling to go into an application which will link to a DLL libgmp */
#define argv_405  argv_407
#endif
#else
/* all other cases */
#define argv_405
#endif


#ifdef _SHORT_LIMB
typedef unsigned int		argv_2497;
typedef int			argv_2496;
#else
#ifdef _LONG_LONG_LIMB
typedef unsigned long long int	argv_2497;
typedef long long int		argv_2496;
#else
typedef unsigned long int	argv_2497;
typedef long int		argv_2496;
#endif
#endif

typedef argv_2497 *		argv_2498;
typedef argv_404 argv_2497 *	argv_2502;
#if defined (_CRAY) && ! defined (_CRAYMPP)
/* plain `int' is much faster (48 argv_752) */
#define argv_420     1
typedef int			argv_2501;
typedef int			argv_2494;
#else
#define argv_420     0
typedef long int		argv_2501;
typedef long int		argv_2494;
#endif

typedef struct
{
  int argv_573;		/* Number of *limbs* allocated and pointed
				   to by the argv_575 field.  */
  int argv_584;			/* abs(argv_584) is the number of limbs the
				   last field points to.  If argv_584 is
				   negative this is a negative number.  */
  argv_2497 *argv_575;		/* Pointer to the limbs.  */
} argv_470;
#endif /* argv_443 */

typedef argv_470 argv_2495;
typedef argv_470 argv_2793[1];

typedef struct
{
  argv_470 argv_581;
  argv_470 argv_576;
} argv_469;

typedef argv_469 argv_2499;
typedef argv_469 argv_2645[1];

typedef struct
{
  int argv_582;			/* Max precision, in number of `argv_2497's.
				   Set by argv_2532 and modified by
				   argv_2551.  The area pointed to by the
				   argv_575 field contains `prec' + 1 limbs.  */
  int argv_584;			/* abs(argv_584) is the number of limbs the
				   last field points to.  If argv_584 is
				   negative this is a negative number.  */
  argv_2494 argv_577;		/* Exponent, in the argv_742 of `argv_2497'.  */
  argv_2497 *argv_575;		/* Pointer to the limbs.  */
} argv_467;

/* typedef argv_467 MP_FLOAT; */
typedef argv_467 argv_2566[1];

/* Available random number argv_1734 algorithms.  */
typedef enum
{
  argv_1857 = 0,
  argv_1858 = argv_1857 /* Linear congruential.  */
} argv_1859;

/* Linear congruential argv_1139 struct.  */
typedef struct {
  argv_2793 argv_570;			/* Multiplier. */
  unsigned long int argv_574;	/* Adder. */
  argv_2793 argv_579;			/* Modulus (valid only if m2exp == 0).  */
  unsigned long int argv_580;	/* If != 0, modulus is 2 ^ m2exp.  */
} argv_423;

/* Random argv_3604 struct.  */
typedef struct
{
  argv_2793 argv_583;		/* Current seed.  */
  argv_1859 argv_571;	/* Algorithm used.  */
  union {			/* Algorithm specific argv_1139.  */
    argv_423 *argv_578;	/* Linear congruential.  */
  } argv_572;
} argv_424;
typedef argv_424 argv_1868[1];

/* Types for function declarations in gmp files.  */
/* ??? Should not pollute user argv_2817 space with these ??? */
typedef argv_404 argv_470 *argv_2787;
typedef argv_470 *argv_2764;
typedef argv_404 argv_467 *argv_2562;
typedef argv_467 *argv_2546;
typedef argv_404 argv_469 *argv_2642;
typedef argv_469 *argv_2632;


/* This is not wanted in mp.h, so put it outside the argv_443 common
   argv_3461. */
#if argv_418
#if __GMP_WITHIN_GMPXX
/* compiling to go into a DLL libgmpxx */
#define argv_408  argv_406
#else
/* compiling to go into a application which will link to a DLL libgmpxx */
#define argv_408  argv_407
#endif
#else
/* all other cases */
#define argv_408
#endif


#if argv_415
#define argv_422(x) x
#else
#define argv_422(x) ()
#endif

#ifndef argv_468
#if argv_416
#define argv_468(x) __gmpn_##x
#else
#define argv_468(x) __gmpn_/**/x
#endif
#endif

#if defined (FILE)                                              \
  || defined (H_STDIO)                                          \
  || defined (_H_STDIO)               /* AIX */                 \
  || defined (_STDIO_H)               /* glibc, Sun, SCO */     \
  || defined (_STDIO_H_)              /* BSD, OSF */            \
  || defined (__STDIO_H)              /* Borland */             \
  || defined (__STDIO_H__)            /* IRIX */                \
  || defined (_STDIO_INCLUDED)        /* HPUX */                \
  || defined (__dj_include_stdio_h_)  /* DJGPP */               \
  || defined (_FILE_DEFINED)          /* Microsoft */          \
  || defined (__STDIO__)              /* Apple MPW MrC */
#define argv_493 1
#endif

/* In ISO C, if a prototype involving "struct obstack *" is given without
   that structure defined, then the struct is scoped down to just the
   prototype, causing a conflict if it's subsequently defined for real.  So
   only give prototypes if we've got obstack.h.  */
#if defined (_OBSTACK_H)   /* glibc <obstack.h> */
#define argv_494 1
#endif

/* The prototypes for argv_1879 etc are provided only if va_list is
   available, via an application having included <stdarg.h> or <varargs.h>.
   Usually va_list is a typedef so can't be tested directly, but va_start is
   almost certainly a macro, so look for that.

   <stdio.h> will define some sort of va_list for vprintf and vfprintf, but
   let's not bother trying to use that since it's not standard and since
   application uses for argv_1879 etc will almost certainly require the
   whole <stdarg.h> or <varargs.h> anyway.  */

#ifdef va_start
#define argv_495 1
#endif

/* Test for gcc >= maj.min, as per __GNUC_PREREQ in glibc */
#if defined (__GNUC__) && defined (__GNUC_MINOR__)
#define argv_410(maj, min) \
  ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#else
#define argv_410(maj, min)  0
#endif

/* "pure" is in gcc 2.96 and up, see "(gcc)Function argv_728".  Basically
   it means a function does nothing but examine its arguments and memory
   (global or via arguments) to generate a return argv_3960, but changes nothing
   and has no side-effects. */
#if argv_410 (2,96)
#define argv_401   __attribute__ ((__pure__))
#else
#define argv_401
#endif


/* An empty "throw ()" means the function doesn't throw any C++ exceptions,
   this can save some stack frame info in applications.

   Currently it's given only on functions which never divide-by-zero etc,
   don't allocate memory, and are expected to never need to allocate memory.
   This leaves open the possibility of a C++ throw from a future GMP
   exceptions scheme.

   argv_2779 etc are omitted to leave open the lazy allocation scheme
   described in doc/tasks.html.  argv_2712 etc are omitted to leave open
   exceptions for float overflows.

   Note that argv_421 must be given on any inlines the same as on their
   prototypes (for g++ at least, where they're used together).  Note also
   that g++ 3.0 demands that argv_421 is before other attributes like
   argv_401.  */

#if defined (__cplusplus)
#define argv_421  throw ()
#else
#define argv_421
#endif


/* PORTME: What other compilers have a useful "extern inline"?  "static
   inline" would be an acceptable substitute if the compiler (or linker)
   discards unused statics.  */

/* gcc has __inline__ in all modes, including strict ansi.  Give a prototype
   for an inline too, so as to correctly specify "dllimport" on windows, in
   case the function is called rather than inlined.  */
#ifdef __GNUC__
#define argv_409      extern __inline__
#define argv_417  1
#endif

/* SCO OpenUNIX 8 cc supports "static inline foo()" but not in -Xc strict
   ANSI mode (__STDC__ is 1 in that mode).  Inlining only actually takes
   place under -O.  Without -O "foo" seems to be emitted whether it's used
   or not, which is wasteful.  "extern inline foo()" isn't useful, the
   "extern" is apparently ignored, so foo is inlined if possible but also
   emitted as a global, which causes multiple definition errors when
   building a shared libgmp.  */
#if __SCO_VERSION__ > 400000000 && __STDC__ != 1 \
  && ! defined (argv_409)
#define argv_409  static inline
#endif

/* C++ always has "inline" and since it's a normal feature the linker should
   discard duplicate non-inlined copies, or if it doesn't then that's a
   problem for everyone, not just GMP.  */
#if defined (__cplusplus) && ! defined (argv_409)
#define argv_409  inline
#endif

/* By default, don't give a prototype when there's going to be an inline
   version.  Note in particular that Cray C++ objects to the combination of
   prototype and inline.  */
#ifdef argv_409
#ifndef argv_417
#define argv_417  0
#endif
#else
#define argv_417  1
#endif


#define argv_400(x)   ((x) >= 0 ? (x) : -(x))
#define argv_419(h,i) ((h) > (i) ? (h) : (i))

#define argv_427   (~ (unsigned) 0)
#define argv_428  (~ (unsigned long) 0)
#define argv_429  ((unsigned short) ~0)


/* Allow direct user access to numerator and denominator of a argv_2645 argv_2908.  */
#define argv_2630(Q) (&((Q)->argv_581))
#define argv_2616(Q) (&((Q)->argv_576))


#if defined (__cplusplus)
extern "C" {
#endif

#define argv_2500 __gmp_set_memory_functions
argv_405 void argv_2500 argv_422 ((void *(*) (size_t),
				      void *(*) (void *, size_t, size_t),
				      void (*) (void *, size_t))) argv_421;

#define argv_2493 __gmp_bits_per_limb
argv_405 extern argv_404 int argv_2493;

#define argv_1794 __gmp_errno
argv_405 extern int argv_1794;

#define argv_1876 __gmp_version
argv_405 extern argv_404 char * argv_404 argv_1876;

/* The following for internal use only.
   Enhancement: __gmp_allocate_func could have "__attribute__ ((malloc))",
   but argv_1106 gcc (3.0) doesn't seem to support that.  */
argv_405 extern void * (*__gmp_allocate_func) argv_422 ((size_t));
argv_405 extern void * (*__gmp_reallocate_func) argv_422 ((void *, size_t, size_t));
argv_405 extern void   (*__gmp_free_func) argv_422 ((void *, size_t));


/**************** Random number routines.  ****************/

/* obsolete */
#define argv_1861 __gmp_randinit
argv_405 void argv_1861 argv_422 ((argv_1868, argv_1859, ...));

#define argv_1862 __gmp_randinit_default
argv_405 void argv_1862 argv_422 ((argv_1868));

#define argv_1863 __gmp_randinit_lc
argv_405 void argv_1863 argv_422 ((argv_1868,
                              argv_2787, unsigned long int, argv_2787));

#define argv_1864 __gmp_randinit_lc_2exp
argv_405 void argv_1864 argv_422 ((argv_1868,
                                   argv_2787, unsigned long int,
				   unsigned long int));

#define argv_1865 __gmp_randinit_lc_2exp_size
argv_405 int argv_1865 argv_422 ((argv_1868, unsigned long));

#define argv_1866 __gmp_randseed
argv_405 void argv_1866 argv_422 ((argv_1868, argv_2787));

#define argv_1867 __gmp_randseed_ui
argv_405 void argv_1867 argv_422 ((argv_1868, unsigned long int));

#define argv_1860 __gmp_randclear
argv_405 void argv_1860 argv_422 ((argv_1868));


/**************** Formatted output routines.  ****************/

#define argv_1793 __gmp_asprintf
argv_405 int argv_1793 argv_422 ((char **, const char *, ...));

#define argv_1803 __gmp_fprintf
#if argv_493
argv_405 int argv_1803 argv_422 ((FILE *, const char *, ...));
#endif

#define argv_1854 __gmp_obstack_printf
#if argv_494
argv_405 int argv_1854 argv_422 ((struct obstack *, const char *, ...));
#endif

#define argv_1855 __gmp_obstack_vprintf
#if argv_494 && argv_495
argv_405 int argv_1855 argv_422 ((struct obstack *, const char *, va_list));
#endif

#define argv_1856 __gmp_printf
argv_405 int argv_1856 argv_422 ((const char *, ...));

#define argv_1870 __gmp_snprintf
argv_405 int argv_1870 argv_422 ((char *, size_t, const char *, ...));

#define argv_1871 __gmp_sprintf
argv_405 int argv_1871 argv_422 ((char *, const char *, ...));

#define argv_1875 __gmp_vasprintf
#if argv_495
argv_405 int argv_1875 argv_422 ((char **, const char *, va_list));
#endif

#define argv_1877 __gmp_vfprintf
#if argv_493 && argv_495
argv_405 int argv_1877 argv_422 ((FILE *, const char *, va_list));
#endif

#define argv_1879 __gmp_vprintf
#if argv_495
argv_405 int argv_1879 argv_422 ((const char *, va_list));
#endif

#define argv_1881 __gmp_vsnprintf
#if argv_495
argv_405 int argv_1881 argv_422 ((char *, size_t, const char *, va_list));
#endif

#define argv_1882 __gmp_vsprintf
#if argv_495
argv_405 int argv_1882 argv_422 ((char *, const char *, va_list));
#endif


/**************** Formatted input routines.  ****************/

#define argv_1804 __gmp_fscanf
#if argv_493
argv_405 int argv_1804 argv_422 ((FILE *, const char *, ...));
#endif

#define argv_1869 __gmp_scanf
argv_405 int argv_1869 argv_422 ((const char *, ...));

#define argv_1872 __gmp_sscanf
argv_405 int argv_1872 argv_422 ((const char *, const char *, ...));

#define argv_1878 __gmp_vfscanf
#if argv_493 && argv_495
argv_405 int argv_1878 argv_422 ((FILE *, const char *, va_list));
#endif

#define argv_1880 __gmp_vscanf
#if argv_495
argv_405 int argv_1880 argv_422 ((const char *, va_list));
#endif

#define argv_1883 __gmp_vsscanf
#if argv_495
argv_405 int argv_1883 argv_422 ((const char *, const char *, va_list));
#endif


/**************** Integer (i.e. Z) routines.  ****************/

#define argv_589 __gmpz_realloc
#define argv_2767 __gmpz_realloc
argv_405 void *argv_589 argv_422 ((argv_2764, argv_2501));

#define argv_2646 __gmpz_abs
#if argv_417 || __GMP_FORCE_mpz_abs
argv_405 void argv_2646 argv_422 ((argv_2764, argv_2787));
#endif

#define argv_2647 __gmpz_add
argv_405 void argv_2647 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2648 __gmpz_add_ui
argv_405 void argv_2648 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2649 __gmpz_addmul
argv_405 void argv_2649 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2650 __gmpz_addmul_ui
argv_405 void argv_2650 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2651 __gmpz_and
argv_405 void argv_2651 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2652 __gmpz_array_init
argv_405 void argv_2652 argv_422 ((argv_2764, argv_2501, argv_2501));

#define argv_2653 __gmpz_bin_ui
argv_405 void argv_2653 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2654 __gmpz_bin_uiui
argv_405 void argv_2654 argv_422 ((argv_2764, unsigned long int, unsigned long int));

#define argv_2655 __gmpz_cdiv_q
argv_405 void argv_2655 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2656 __gmpz_cdiv_q_2exp
argv_405 void argv_2656 argv_422 ((argv_2764, argv_2787, unsigned long));

#define argv_2657 __gmpz_cdiv_q_ui
argv_405 unsigned long int argv_2657 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2658 __gmpz_cdiv_qr
argv_405 void argv_2658 argv_422 ((argv_2764, argv_2764, argv_2787, argv_2787));

#define argv_2659 __gmpz_cdiv_qr_ui
argv_405 unsigned long int argv_2659 argv_422 ((argv_2764, argv_2764, argv_2787, unsigned long int));

#define argv_2660 __gmpz_cdiv_r
argv_405 void argv_2660 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2661 __gmpz_cdiv_r_2exp
argv_405 void argv_2661 argv_422 ((argv_2764, argv_2787, unsigned long));

#define argv_2662 __gmpz_cdiv_r_ui
argv_405 unsigned long int argv_2662 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2663 __gmpz_cdiv_ui
argv_405 unsigned long int argv_2663 argv_422 ((argv_2787, unsigned long int)) argv_401;

#define argv_2664 __gmpz_clear
argv_405 void argv_2664 argv_422 ((argv_2764));

#define argv_2665 __gmpz_clrbit
argv_405 void argv_2665 argv_422 ((argv_2764, unsigned long int));

#define argv_2666 __gmpz_cmp
argv_405 int argv_2666 argv_422 ((argv_2787, argv_2787)) argv_421 argv_401;

#define argv_2667 __gmpz_cmp_d
argv_405 int argv_2667 argv_422 ((argv_2787, double)) argv_401;

#define argv_587 __gmpz_cmp_si
argv_405 int argv_587 argv_422 ((argv_2787, signed long int)) argv_421 argv_401;

#define argv_588 __gmpz_cmp_ui
argv_405 int argv_588 argv_422 ((argv_2787, unsigned long int)) argv_421 argv_401;

#define argv_2670 __gmpz_cmpabs
argv_405 int argv_2670 argv_422 ((argv_2787, argv_2787)) argv_421 argv_401;

#define argv_2671 __gmpz_cmpabs_d
argv_405 int argv_2671 argv_422 ((argv_2787, double)) argv_401;

#define argv_2672 __gmpz_cmpabs_ui
argv_405 int argv_2672 argv_422 ((argv_2787, unsigned long int)) argv_421 argv_401;

#define argv_2673 __gmpz_com
argv_405 void argv_2673 argv_422 ((argv_2764, argv_2787));

#define argv_2675 __gmpz_congruent_p
argv_405 int argv_2675 argv_422 ((argv_2787, argv_2787, argv_2787)) argv_401;

#define argv_2674 __gmpz_congruent_2exp_p
argv_405 int argv_2674 argv_422 ((argv_2787, argv_2787, unsigned long)) argv_421 argv_401;

#define argv_2676 __gmpz_congruent_ui_p
argv_405 int argv_2676 argv_422 ((argv_2787, unsigned long, unsigned long)) argv_401;

#define argv_2680 __gmpz_divexact
argv_405 void argv_2680 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2681 __gmpz_divexact_ui
argv_405 void argv_2681 argv_422 ((argv_2764, argv_2787, unsigned long));

#define argv_2683 __gmpz_divisible_p
argv_405 int argv_2683 argv_422 ((argv_2787, argv_2787)) argv_401;

#define argv_2684 __gmpz_divisible_ui_p
argv_405 int argv_2684 argv_422 ((argv_2787, unsigned long)) argv_401;

#define argv_2682 __gmpz_divisible_2exp_p
argv_405 int argv_2682 argv_422 ((argv_2787, unsigned long)) argv_421 argv_401;

#define argv_2687 __gmpz_dump
argv_405 void argv_2687 argv_422 ((argv_2787));

#define argv_2690 __gmpz_export
argv_405 void *argv_2690 argv_422 ((void *, size_t *, int, size_t, int, size_t, argv_2787 z));

#define argv_2691 __gmpz_fac_ui
argv_405 void argv_2691 argv_422 ((argv_2764, unsigned long int));

#define argv_2692 __gmpz_fdiv_q
argv_405 void argv_2692 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2693 __gmpz_fdiv_q_2exp
argv_405 void argv_2693 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2694 __gmpz_fdiv_q_ui
argv_405 unsigned long int argv_2694 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2695 __gmpz_fdiv_qr
argv_405 void argv_2695 argv_422 ((argv_2764, argv_2764, argv_2787, argv_2787));

#define argv_2696 __gmpz_fdiv_qr_ui
argv_405 unsigned long int argv_2696 argv_422 ((argv_2764, argv_2764, argv_2787, unsigned long int));

#define argv_2697 __gmpz_fdiv_r
argv_405 void argv_2697 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2698 __gmpz_fdiv_r_2exp
argv_405 void argv_2698 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2699 __gmpz_fdiv_r_ui
argv_405 unsigned long int argv_2699 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2700 __gmpz_fdiv_ui
argv_405 unsigned long int argv_2700 argv_422 ((argv_2787, unsigned long int)) argv_401;

#define argv_2701 __gmpz_fib_ui
argv_405 void argv_2701 argv_422 ((argv_2764, unsigned long int));

#define argv_2702 __gmpz_fib2_ui
argv_405 void argv_2702 argv_422 ((argv_2764, argv_2764, unsigned long int));

#define argv_2703 __gmpz_fits_sint_p
argv_405 int argv_2703 argv_422 ((argv_2787)) argv_421 argv_401;

#define argv_2704 __gmpz_fits_slong_p
argv_405 int argv_2704 argv_422 ((argv_2787)) argv_421 argv_401;

#define argv_2705 __gmpz_fits_sshort_p
argv_405 int argv_2705 argv_422 ((argv_2787)) argv_421 argv_401;

#define argv_2706 __gmpz_fits_uint_p
#if argv_417 || __GMP_FORCE_mpz_fits_uint_p
argv_405 int argv_2706 argv_422 ((argv_2787)) argv_421 argv_401;
#endif

#define argv_2707 __gmpz_fits_ulong_p
#if argv_417 || __GMP_FORCE_mpz_fits_ulong_p
argv_405 int argv_2707 argv_422 ((argv_2787)) argv_421 argv_401;
#endif

#define argv_2708 __gmpz_fits_ushort_p
#if argv_417 || __GMP_FORCE_mpz_fits_ushort_p
argv_405 int argv_2708 argv_422 ((argv_2787)) argv_421 argv_401;
#endif

#define argv_2709 __gmpz_gcd
argv_405 void argv_2709 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2710 __gmpz_gcd_ui
argv_405 unsigned long int argv_2710 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2711 __gmpz_gcdext
argv_405 void argv_2711 argv_422 ((argv_2764, argv_2764, argv_2764, argv_2787, argv_2787));

#define argv_2712 __gmpz_get_d
argv_405 double argv_2712 argv_422 ((argv_2787)) argv_401;

#define argv_2713 __gmpz_get_d_2exp
argv_405 double argv_2713 argv_422 ((signed long int *, argv_2787));

#define argv_2714 __gmpz_get_si
argv_405 /* signed */ long int argv_2714 argv_422 ((argv_2787)) argv_421 argv_401;

#define argv_2715 __gmpz_get_str
argv_405 char *argv_2715 argv_422 ((char *, int, argv_2787));

#define argv_2716 __gmpz_get_ui
#if argv_417 || __GMP_FORCE_mpz_get_ui
argv_405 unsigned long int argv_2716 argv_422 ((argv_2787)) argv_421 argv_401;
#endif

#define argv_2717 __gmpz_getlimbn
#if argv_417 || __GMP_FORCE_mpz_getlimbn
argv_405 argv_2497 argv_2717 argv_422 ((argv_2787, argv_2501)) argv_421 argv_401;
#endif

#define argv_2718 __gmpz_hamdist
argv_405 unsigned long int argv_2718 argv_422 ((argv_2787, argv_2787)) argv_421 argv_401;

#define argv_2719 __gmpz_import
argv_405 void argv_2719 argv_422 ((argv_2764, size_t, int, size_t, int, size_t, const void *));

#define argv_2720 __gmpz_init
argv_405 void argv_2720 argv_422 ((argv_2764));

#define argv_2725 __gmpz_init2
argv_405 void argv_2725 argv_422 ((argv_2764, unsigned long));

#define mpz_init_set __gmpz_init_set
argv_405 void mpz_init_set argv_422 ((argv_2764, argv_2787));

#define argv_2721 __gmpz_init_set_d
argv_405 void argv_2721 argv_422 ((argv_2764, double));

#define argv_2722 __gmpz_init_set_si
argv_405 void argv_2722 argv_422 ((argv_2764, signed long int));

#define argv_2723 __gmpz_init_set_str
argv_405 int argv_2723 argv_422 ((argv_2764, argv_404 char *, int));

#define argv_2724 __gmpz_init_set_ui
argv_405 void argv_2724 argv_422 ((argv_2764, unsigned long int));

#define argv_2726 __gmpz_inp_raw
#ifdef argv_493
argv_405 size_t argv_2726 argv_422 ((argv_2764, FILE *));
#endif

#define argv_2727 __gmpz_inp_str
#ifdef argv_493
argv_405 size_t argv_2727 argv_422 ((argv_2764, FILE *, int));
#endif

#define argv_2728 __gmpz_invert
argv_405 int argv_2728 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2729 __gmpz_ior
argv_405 void argv_2729 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2730 __gmpz_jacobi
argv_405 int argv_2730 argv_422 ((argv_2787, argv_2787)) argv_401;

#define argv_2731 argv_2730  /* alias */

#define argv_2732 __gmpz_kronecker_si
argv_405 int argv_2732 argv_422 ((argv_2787, long)) argv_401;

#define argv_2733 __gmpz_kronecker_ui
argv_405 int argv_2733 argv_422 ((argv_2787, unsigned long)) argv_401;

#define argv_2782 __gmpz_si_kronecker
argv_405 int argv_2782 argv_422 ((long, argv_2787)) argv_401;

#define argv_2804 __gmpz_ui_kronecker
argv_405 int argv_2804 argv_422 ((unsigned long, argv_2787)) argv_401;

#define argv_2734 __gmpz_lcm
argv_405 void argv_2734 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2735 __gmpz_lcm_ui
argv_405 void argv_2735 argv_422 ((argv_2764, argv_2787, unsigned long));

#define argv_2736 argv_2730  /* alias */

#define argv_2737 __gmpz_lucnum_ui
argv_405 void argv_2737 argv_422 ((argv_2764, unsigned long int));

#define argv_2738 __gmpz_lucnum2_ui
argv_405 void argv_2738 argv_422 ((argv_2764, argv_2764, unsigned long int));

#define argv_2743 __gmpz_millerrabin
argv_405 int argv_2743 argv_422 ((argv_2787, int)) argv_401;

#define argv_2746 __gmpz_mod
argv_405 void argv_2746 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2749 __gmpz_mul
argv_405 void argv_2749 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2750 __gmpz_mul_2exp
argv_405 void argv_2750 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2751 __gmpz_mul_si
argv_405 void argv_2751 argv_422 ((argv_2764, argv_2787, long int));

#define argv_2752 __gmpz_mul_ui
argv_405 void argv_2752 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2753 __gmpz_neg
#if argv_417 || __GMP_FORCE_mpz_neg
argv_405 void argv_2753 argv_422 ((argv_2764, argv_2787));
#endif

#define argv_2754 __gmpz_nextprime
argv_405 void argv_2754 argv_422 ((argv_2764, argv_2787));

#define argv_2756 __gmpz_out_raw
#ifdef argv_493
argv_405 size_t argv_2756 argv_422 ((FILE *, argv_2787));
#endif

#define argv_2757 __gmpz_out_str
#ifdef argv_493
argv_405 size_t argv_2757 argv_422 ((FILE *, int, argv_2787));
#endif

#define argv_2758 __gmpz_perfect_power_p
argv_405 int argv_2758 argv_422 ((argv_2787)) argv_401;

#define argv_2759 __gmpz_perfect_square_p
#if argv_417 || __GMP_FORCE_mpz_perfect_square_p
argv_405 int argv_2759 argv_422 ((argv_2787)) argv_401;
#endif

#define mpz_popcount __gmpz_popcount
#if argv_417 || __GMP_FORCE_mpz_popcount
argv_405 unsigned long int mpz_popcount argv_422 ((argv_2787)) argv_421 argv_401;
#endif

#define argv_2760 __gmpz_pow_ui
argv_405 void argv_2760 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2761 __gmpz_powm
argv_405 void argv_2761 argv_422 ((argv_2764, argv_2787, argv_2787, argv_2787));

#define argv_2762 __gmpz_powm_ui
argv_405 void argv_2762 argv_422 ((argv_2764, argv_2787, unsigned long int, argv_2787));

#define argv_2763 __gmpz_probab_prime_p
argv_405 int argv_2763 argv_422 ((argv_2787, int)) argv_401;

#define argv_2765 __gmpz_random
argv_405 void argv_2765 argv_422 ((argv_2764, argv_2501));

#define argv_2766 __gmpz_random2
argv_405 void argv_2766 argv_422 ((argv_2764, argv_2501));

#define argv_2768 __gmpz_realloc2
argv_405 void argv_2768 argv_422 ((argv_2764, unsigned long));

#define argv_2769 __gmpz_remove
argv_405 unsigned long int argv_2769 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2770 __gmpz_root
argv_405 int argv_2770 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2771 __gmpz_rrandomb
argv_405 void argv_2771 argv_422 ((argv_2764, argv_1868, unsigned long int));

#define argv_2772 __gmpz_scan0
argv_405 unsigned long int argv_2772 argv_422 ((argv_2787, unsigned long int)) argv_421 argv_401;

#define argv_2773 __gmpz_scan1
argv_405 unsigned long int argv_2773 argv_422 ((argv_2787, unsigned long int)) argv_421 argv_401;

#define mpz_set __gmpz_set
argv_405 void mpz_set argv_422 ((argv_2764, argv_2787));

#define argv_2774 __gmpz_set_d
argv_405 void argv_2774 argv_422 ((argv_2764, double));

#define argv_2775 __gmpz_set_f
argv_405 void argv_2775 argv_422 ((argv_2764, argv_2562));

#define argv_2776 __gmpz_set_q
#if argv_417 || __GMP_FORCE_mpz_set_q
argv_405 void argv_2776 argv_422 ((argv_2764, argv_2642));
#endif

#define argv_2777 __gmpz_set_si
argv_405 void argv_2777 argv_422 ((argv_2764, signed long int));

#define argv_2778 __gmpz_set_str
argv_405 int argv_2778 argv_422 ((argv_2764, argv_404 char *, int));

#define argv_2779 __gmpz_set_ui
argv_405 void argv_2779 argv_422 ((argv_2764, unsigned long int));

#define argv_2780 __gmpz_setbit
argv_405 void argv_2780 argv_422 ((argv_2764, unsigned long int));

#define argv_2783 __gmpz_size
#if argv_417 || __GMP_FORCE_mpz_size
argv_405 size_t argv_2783 argv_422 ((argv_2787)) argv_421 argv_401;
#endif

#define argv_2784 __gmpz_sizeinbase
argv_405 size_t argv_2784 argv_422 ((argv_2787, int)) argv_421 argv_401;

#define argv_2785 __gmpz_sqrt
argv_405 void argv_2785 argv_422 ((argv_2764, argv_2787));

#define argv_2786 __gmpz_sqrtrem
argv_405 void argv_2786 argv_422 ((argv_2764, argv_2764, argv_2787));

#define argv_2788 __gmpz_sub
argv_405 void argv_2788 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2789 __gmpz_sub_ui
argv_405 void argv_2789 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2806 __gmpz_ui_sub
argv_405 void argv_2806 argv_422 ((argv_2764, unsigned long int, argv_2787));

#define argv_2790 __gmpz_submul
argv_405 void argv_2790 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2791 __gmpz_submul_ui
argv_405 void argv_2791 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2792 __gmpz_swap
argv_405 void argv_2792 argv_422 ((argv_2764, argv_2764)) argv_421;

#define argv_2802 __gmpz_tdiv_ui
argv_405 unsigned long int argv_2802 argv_422 ((argv_2787, unsigned long int)) argv_401;

#define argv_2794 __gmpz_tdiv_q
argv_405 void argv_2794 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2795 __gmpz_tdiv_q_2exp
argv_405 void argv_2795 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2796 __gmpz_tdiv_q_ui
argv_405 unsigned long int argv_2796 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2797 __gmpz_tdiv_qr
argv_405 void argv_2797 argv_422 ((argv_2764, argv_2764, argv_2787, argv_2787));

#define argv_2798 __gmpz_tdiv_qr_ui
argv_405 unsigned long int argv_2798 argv_422 ((argv_2764, argv_2764, argv_2787, unsigned long int));

#define argv_2799 __gmpz_tdiv_r
argv_405 void argv_2799 argv_422 ((argv_2764, argv_2787, argv_2787));

#define argv_2800 __gmpz_tdiv_r_2exp
argv_405 void argv_2800 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2801 __gmpz_tdiv_r_ui
argv_405 unsigned long int argv_2801 argv_422 ((argv_2764, argv_2787, unsigned long int));

#define argv_2803 __gmpz_tstbit
argv_405 int argv_2803 argv_422 ((argv_2787, unsigned long int)) argv_421 argv_401;

#define argv_2805 __gmpz_ui_pow_ui
argv_405 void argv_2805 argv_422 ((argv_2764, unsigned long int, unsigned long int));

#define argv_2807 __gmpz_urandomb
argv_405 void argv_2807 argv_422 ((argv_2764, argv_1868, unsigned long int));

#define argv_2808 __gmpz_urandomm
argv_405 void argv_2808 argv_422 ((argv_2764, argv_1868, argv_2787));

#define argv_2809 __gmpz_xor
#define argv_2688 __gmpz_xor
argv_405 void argv_2809 argv_422 ((argv_2764, argv_2787, argv_2787));


/**************** Rational (i.e. Q) routines.  ****************/

#define argv_2609 __gmpq_abs
#if argv_417 || __GMP_FORCE_mpq_abs
argv_405 void argv_2609 argv_422 ((argv_2632, argv_2642));
#endif

#define argv_2610 __gmpq_add
argv_405 void argv_2610 argv_422 ((argv_2632, argv_2642, argv_2642));

#define argv_2611 __gmpq_canonicalize
argv_405 void argv_2611 argv_422 ((argv_2632));

#define argv_2612 __gmpq_clear
argv_405 void argv_2612 argv_422 ((argv_2632));

#define argv_2613 __gmpq_cmp
argv_405 int argv_2613 argv_422 ((argv_2642, argv_2642)) argv_401;

#define argv_585 __gmpq_cmp_si
argv_405 int argv_585 argv_422 ((argv_2642, long, unsigned long)) argv_401;

#define argv_586 __gmpq_cmp_ui
argv_405 int argv_586 argv_422 ((argv_2642, unsigned long int, unsigned long int)) argv_401;

#define argv_2617 __gmpq_div
argv_405 void argv_2617 argv_422 ((argv_2632, argv_2642, argv_2642));

#define argv_2618 __gmpq_div_2exp
argv_405 void argv_2618 argv_422 ((argv_2632, argv_2642, unsigned long));

#define argv_2619 __gmpq_equal
argv_405 int argv_2619 argv_422 ((argv_2642, argv_2642)) argv_421 argv_401;

#define argv_2622 __gmpq_get_num
argv_405 void argv_2622 argv_422 ((argv_2764, argv_2642));

#define argv_2621 __gmpq_get_den
argv_405 void argv_2621 argv_422 ((argv_2764, argv_2642));

#define argv_2620 __gmpq_get_d
argv_405 double argv_2620 argv_422 ((argv_2642)) argv_401;

#define argv_2623 __gmpq_get_str
argv_405 char *argv_2623 argv_422 ((char *, int, argv_2642));

#define argv_2624 __gmpq_init
argv_405 void argv_2624 argv_422 ((argv_2632));

#define argv_2625 __gmpq_inp_str
#ifdef argv_493
argv_405 size_t argv_2625 argv_422 ((argv_2632, FILE *, int));
#endif

#define argv_2626 __gmpq_inv
argv_405 void argv_2626 argv_422 ((argv_2632, argv_2642));

#define argv_2627 __gmpq_mul
argv_405 void argv_2627 argv_422 ((argv_2632, argv_2642, argv_2642));

#define argv_2628 __gmpq_mul_2exp
argv_405 void argv_2628 argv_422 ((argv_2632, argv_2642, unsigned long));

#define argv_2629 __gmpq_neg
#if argv_417 || __GMP_FORCE_mpq_neg
argv_405 void argv_2629 argv_422 ((argv_2632, argv_2642));
#endif

#define argv_2631 __gmpq_out_str
#ifdef argv_493
argv_405 size_t argv_2631 argv_422 ((FILE *, int, argv_2642));
#endif

#define mpq_set __gmpq_set
argv_405 void mpq_set argv_422 ((argv_2632, argv_2642));

#define argv_2633 __gmpq_set_d
argv_405 void argv_2633 argv_422 ((argv_2632, double));

#define argv_2634 __gmpq_set_den
argv_405 void argv_2634 argv_422 ((argv_2632, argv_2787));

#define argv_2635 __gmpq_set_f
argv_405 void argv_2635 argv_422 ((argv_2632, argv_2562));

#define argv_2636 __gmpq_set_num
argv_405 void argv_2636 argv_422 ((argv_2632, argv_2787));

#define argv_2637 __gmpq_set_si
argv_405 void argv_2637 argv_422 ((argv_2632, signed long int, unsigned long int));

#define argv_2638 __gmpq_set_str
argv_405 int argv_2638 argv_422 ((argv_2632, const char *, int));

#define argv_2639 __gmpq_set_ui
argv_405 void argv_2639 argv_422 ((argv_2632, unsigned long int, unsigned long int));

#define argv_2640 __gmpq_set_z
argv_405 void argv_2640 argv_422 ((argv_2632, argv_2787));

#define argv_2643 __gmpq_sub
argv_405 void argv_2643 argv_422 ((argv_2632, argv_2642, argv_2642));

#define argv_2644 __gmpq_swap
argv_405 void argv_2644 argv_422 ((argv_2632, argv_2632)) argv_421;


/**************** Float (i.e. F) routines.  ****************/

#define argv_2504 __gmpf_abs
argv_405 void argv_2504 argv_422 ((argv_2546, argv_2562));

#define argv_2505 __gmpf_add
argv_405 void argv_2505 argv_422 ((argv_2546, argv_2562, argv_2562));

#define argv_2506 __gmpf_add_ui
argv_405 void argv_2506 argv_422 ((argv_2546, argv_2562, unsigned long int));
#define argv_2507 __gmpf_ceil
argv_405 void argv_2507 argv_422 ((argv_2546, argv_2562));

#define argv_2508 __gmpf_clear
argv_405 void argv_2508 argv_422 ((argv_2546));

#define argv_2509 __gmpf_cmp
argv_405 int argv_2509 argv_422 ((argv_2562, argv_2562)) argv_421 argv_401;

#define argv_2510 __gmpf_cmp_d
argv_405 int argv_2510 argv_422 ((argv_2562, double)) argv_401;

#define argv_2511 __gmpf_cmp_si
argv_405 int argv_2511 argv_422 ((argv_2562, signed long int)) argv_421 argv_401;

#define argv_2512 __gmpf_cmp_ui
argv_405 int argv_2512 argv_422 ((argv_2562, unsigned long int)) argv_421 argv_401;

#define argv_2513 __gmpf_div
argv_405 void argv_2513 argv_422 ((argv_2546, argv_2562, argv_2562));

#define argv_2514 __gmpf_div_2exp
argv_405 void argv_2514 argv_422 ((argv_2546, argv_2562, unsigned long int));

#define argv_2515 __gmpf_div_ui
argv_405 void argv_2515 argv_422 ((argv_2546, argv_2562, unsigned long int));

#define argv_2516 __gmpf_dump
argv_405 void argv_2516 argv_422 ((argv_2562));

#define argv_2517 __gmpf_eq
argv_405 int argv_2517 argv_422 ((argv_2562, argv_2562, unsigned long int)) argv_401;

#define argv_2518 __gmpf_fits_sint_p
argv_405 int argv_2518 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2519 __gmpf_fits_slong_p
argv_405 int argv_2519 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2520 __gmpf_fits_sshort_p
argv_405 int argv_2520 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2521 __gmpf_fits_uint_p
argv_405 int argv_2521 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2522 __gmpf_fits_ulong_p
argv_405 int argv_2522 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2523 __gmpf_fits_ushort_p
argv_405 int argv_2523 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2524 __gmpf_floor
argv_405 void argv_2524 argv_422 ((argv_2546, argv_2562));

#define argv_2525 __gmpf_get_d
argv_405 double argv_2525 argv_422 ((argv_2562)) argv_401;

#define argv_2526 __gmpf_get_d_2exp
argv_405 double argv_2526 argv_422 ((signed long int *, argv_2562));

#define argv_2527 __gmpf_get_default_prec
argv_405 unsigned long int argv_2527 argv_422 ((void)) argv_421 argv_401;

#define argv_2528 __gmpf_get_prec
argv_405 unsigned long int argv_2528 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2529 __gmpf_get_si
argv_405 long argv_2529 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2530 __gmpf_get_str
argv_405 char *argv_2530 argv_422 ((char *, argv_2494 *, int, size_t, argv_2562));

#define argv_2531 __gmpf_get_ui
argv_405 unsigned long argv_2531 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2532 __gmpf_init
argv_405 void argv_2532 argv_422 ((argv_2546));

#define argv_2537 __gmpf_init2
argv_405 void argv_2537 argv_422 ((argv_2546, unsigned long int));

#define mpf_init_set __gmpf_init_set
argv_405 void mpf_init_set argv_422 ((argv_2546, argv_2562));

#define argv_2533 __gmpf_init_set_d
argv_405 void argv_2533 argv_422 ((argv_2546, double));

#define argv_2534 __gmpf_init_set_si
argv_405 void argv_2534 argv_422 ((argv_2546, signed long int));

#define argv_2535 __gmpf_init_set_str
argv_405 int argv_2535 argv_422 ((argv_2546, argv_404 char *, int));

#define argv_2536 __gmpf_init_set_ui
argv_405 void argv_2536 argv_422 ((argv_2546, unsigned long int));

#define argv_2538 __gmpf_inp_str
#ifdef argv_493
argv_405 size_t argv_2538 argv_422 ((argv_2546, FILE *, int));
#endif

#define argv_2539 __gmpf_integer_p
argv_405 int argv_2539 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2540 __gmpf_mul
argv_405 void argv_2540 argv_422 ((argv_2546, argv_2562, argv_2562));

#define argv_2541 __gmpf_mul_2exp
argv_405 void argv_2541 argv_422 ((argv_2546, argv_2562, unsigned long int));

#define argv_2542 __gmpf_mul_ui
argv_405 void argv_2542 argv_422 ((argv_2546, argv_2562, unsigned long int));

#define argv_2543 __gmpf_neg
argv_405 void argv_2543 argv_422 ((argv_2546, argv_2562));

#define argv_2544 __gmpf_out_str
#ifdef argv_493
argv_405 size_t argv_2544 argv_422 ((FILE *, int, size_t, argv_2562));
#endif

#define argv_2545 __gmpf_pow_ui
argv_405 void argv_2545 argv_422 ((argv_2546, argv_2562, unsigned long int));

#define argv_2547 __gmpf_random2
argv_405 void argv_2547 argv_422 ((argv_2546, argv_2501, argv_2494));

#define argv_2548 __gmpf_reldiff
argv_405 void argv_2548 argv_422 ((argv_2546, argv_2562, argv_2562));

#define mpf_set __gmpf_set
argv_405 void mpf_set argv_422 ((argv_2546, argv_2562));

#define argv_2549 __gmpf_set_d
argv_405 void argv_2549 argv_422 ((argv_2546, double));

#define argv_2550 __gmpf_set_default_prec
argv_405 void argv_2550 argv_422 ((unsigned long int)) argv_421;

#define argv_2551 __gmpf_set_prec
argv_405 void argv_2551 argv_422 ((argv_2546, unsigned long int));

#define argv_2552 __gmpf_set_prec_raw
argv_405 void argv_2552 argv_422 ((argv_2546, unsigned long int)) argv_421;

#define argv_2553 __gmpf_set_q
argv_405 void argv_2553 argv_422 ((argv_2546, argv_2642));

#define argv_2554 __gmpf_set_si
argv_405 void argv_2554 argv_422 ((argv_2546, signed long int));

#define argv_2555 __gmpf_set_str
argv_405 int argv_2555 argv_422 ((argv_2546, argv_404 char *, int));

#define argv_2556 __gmpf_set_ui
argv_405 void argv_2556 argv_422 ((argv_2546, unsigned long int));

#define argv_2557 __gmpf_set_z
argv_405 void argv_2557 argv_422 ((argv_2546, argv_2787));

#define argv_2559 __gmpf_size
argv_405 size_t argv_2559 argv_422 ((argv_2562)) argv_421 argv_401;

#define argv_2560 __gmpf_sqrt
argv_405 void argv_2560 argv_422 ((argv_2546, argv_2562));

#define argv_2561 __gmpf_sqrt_ui
argv_405 void argv_2561 argv_422 ((argv_2546, unsigned long int));

#define argv_2563 __gmpf_sub
argv_405 void argv_2563 argv_422 ((argv_2546, argv_2562, argv_2562));

#define argv_2564 __gmpf_sub_ui
argv_405 void argv_2564 argv_422 ((argv_2546, argv_2562, unsigned long int));

#define argv_2565 __gmpf_swap
argv_405 void argv_2565 argv_422 ((argv_2546, argv_2546)) argv_421;

#define argv_2567 __gmpf_trunc
argv_405 void argv_2567 argv_422 ((argv_2546, argv_2562));

#define argv_2568 __gmpf_ui_div
argv_405 void argv_2568 argv_422 ((argv_2546, unsigned long int, argv_2562));

#define argv_2569 __gmpf_ui_sub
argv_405 void argv_2569 argv_422 ((argv_2546, unsigned long int, argv_2562));

#define argv_2570 __gmpf_urandomb
argv_405 void argv_2570 argv_422 ((argv_2566, argv_1868, unsigned long int));


/************ Low level positive-integer (i.e. N) routines.  ************/

/* This is ugly, but we need to make user calls reach the prefixed function. */

#define argv_2571 argv_468(argv_616)
#if argv_417 || __GMP_FORCE_mpn_add
argv_405 argv_2497 argv_2571 argv_422 ((argv_2498, argv_2502, argv_2501, argv_2502,argv_2501));
#endif

#define argv_2572 argv_468(add_1)
#if argv_417 || __GMP_FORCE_mpn_add_1
argv_405 argv_2497 argv_2572 argv_422 ((argv_2498, argv_2502, argv_2501, argv_2497)) argv_421;
#endif

#define argv_2573 argv_468(add_n)
argv_405 argv_2497 argv_2573 argv_422 ((argv_2498, argv_2502, argv_2502, argv_2501));

#define argv_2574 argv_468(addmul_1)
argv_405 argv_2497 argv_2574 argv_422 ((argv_2498, argv_2502, argv_2501, argv_2497));

#define argv_2575 argv_468(bdivmod)
argv_405 argv_2497 argv_2575 argv_422 ((argv_2498, argv_2498, argv_2501, argv_2502, argv_2501, unsigned long int));

#define argv_2576 argv_468(cmp)
#if argv_417 || __GMP_FORCE_mpn_cmp
argv_405 int argv_2576 argv_422 ((argv_2502, argv_2502, argv_2501)) argv_421 argv_401;
#endif

#define argv_2577(dst,src,size) \
  argv_2578 (dst, src, size, (argv_2497) 0)

#define argv_2578 argv_468(divexact_by3c)
argv_405 argv_2497 argv_2578 argv_422 ((argv_2498, argv_2502, argv_2501, argv_2497));

#define argv_2580(qp,np,nsize,dlimb) \
  argv_2582 (qp, (argv_2501) 0, np, nsize, dlimb)

#define argv_2581 argv_468(divrem)
argv_405 argv_2497 argv_2581 argv_422 ((argv_2498, argv_2501, argv_2498, argv_2501, argv_2502, argv_2501));

#define argv_2582 argv_468(divrem_1)
argv_405 argv_2497 argv_2582 argv_422 ((argv_2498, argv_2501, argv_2502, argv_2501, argv_2497));

#define argv_2583 argv_468(divrem_2)
argv_405 argv_2497 argv_2583 argv_422 ((argv_2498, argv_2501, argv_2498, argv_2501, argv_2502));

#define argv_2584 argv_468(argv_1717)
argv_405 argv_2501 argv_2584 argv_422 ((argv_2498, argv_2498, argv_2501, argv_2498, argv_2501));

#define argv_2585 argv_468(gcd_1)
argv_405 argv_2497 argv_2585 argv_422 ((argv_2502, argv_2501, argv_2497)) argv_401;

#define argv_2586 argv_468(gcdext)
argv_405 argv_2501 argv_2586 argv_422 ((argv_2498, argv_2498, argv_2501 *, argv_2498, argv_2501, argv_2498, argv_2501));

#define argv_2587 argv_468(get_str)
argv_405 size_t argv_2587 argv_422 ((unsigned char *, int, argv_2498, argv_2501));

#define argv_2588 argv_468(hamdist)
argv_405 unsigned long int argv_2588 argv_422 ((argv_2502, argv_2502, argv_2501)) argv_421 argv_401;

#define argv_2589 argv_468(lshift)
argv_405 argv_2497 argv_2589 argv_422 ((argv_2498, argv_2502, argv_2501, unsigned int));

#define argv_2590 argv_468(mod_1)
argv_405 argv_2497 argv_2590 argv_422 ((argv_2502, argv_2501, argv_2497)) argv_401;

#define argv_2591 argv_468(mul)
argv_405 argv_2497 argv_2591 argv_422 ((argv_2498, argv_2502, argv_2501, argv_2502, argv_2501));

#define argv_2592 argv_468(mul_1)
argv_405 argv_2497 argv_2592 argv_422 ((argv_2498, argv_2502, argv_2501, argv_2497));

#define argv_2593 argv_468(mul_n)
argv_405 void argv_2593 argv_422 ((argv_2498, argv_2502, argv_2502, argv_2501));

#define argv_2594 argv_468(perfect_square_p)
argv_405 int argv_2594 argv_422 ((argv_2502, argv_2501)) argv_401;

#define mpn_popcount argv_468(popcount)
argv_405 unsigned long int mpn_popcount argv_422 ((argv_2502, argv_2501)) argv_421 argv_401;

#define argv_2595 argv_468(pow_1)
argv_405 argv_2501 argv_2595 argv_422 ((argv_2498, argv_2502, argv_2501, argv_2497, argv_2498));

/* undocumented now, but retained here for upward compatibility */
#define argv_2596 argv_468(preinv_mod_1)
argv_405 argv_2497 argv_2596 argv_422 ((argv_2502, argv_2501, argv_2497, argv_2497)) argv_401;

#define argv_2597 argv_468(random)
argv_405 void argv_2597 argv_422 ((argv_2498, argv_2501));

#define argv_2598 argv_468(random2)
argv_405 void argv_2598 argv_422 ((argv_2498, argv_2501));

#define argv_2599 argv_468(rshift)
argv_405 argv_2497 argv_2599 argv_422 ((argv_2498, argv_2502, argv_2501, unsigned int));

#define argv_2600 argv_468(scan0)
argv_405 unsigned long int argv_2600 argv_422 ((argv_2502, unsigned long int)) argv_401;

#define argv_2601 argv_468(scan1)
argv_405 unsigned long int argv_2601 argv_422 ((argv_2502, unsigned long int)) argv_401;

#define argv_2602 argv_468(set_str)
argv_405 argv_2501 argv_2602 argv_422 ((argv_2498, argv_404 unsigned char *, size_t, int));

#define argv_2603 argv_468(sqrtrem)
argv_405 argv_2501 argv_2603 argv_422 ((argv_2498, argv_2498, argv_2502, argv_2501));

#define argv_2604 argv_468(sub)
#if argv_417 || __GMP_FORCE_mpn_sub
argv_405 argv_2497 argv_2604 argv_422 ((argv_2498, argv_2502, argv_2501, argv_2502,argv_2501));
#endif

#define argv_2605 argv_468(sub_1)
#if argv_417 || __GMP_FORCE_mpn_sub_1
argv_405 argv_2497 argv_2605 argv_422 ((argv_2498, argv_2502, argv_2501, argv_2497)) argv_421;
#endif

#define argv_2606 argv_468(sub_n)
argv_405 argv_2497 argv_2606 argv_422 ((argv_2498, argv_2502, argv_2502, argv_2501));

#define argv_2607 argv_468(submul_1)
argv_405 argv_2497 argv_2607 argv_422 ((argv_2498, argv_2502, argv_2501, argv_2497));

#define argv_2608 argv_468(tdiv_qr)
argv_405 void argv_2608 argv_422 ((argv_2498, argv_2498, argv_2501, argv_2502, argv_2501, argv_2502, argv_2501));


/**************** mpz inlines ****************/

/* The following are provided as inlines where possible, but always exist as
   library functions too, for binary compatibility.

   Within gmp itself this inlining generally isn't relied on, since it
   doesn't get argv_1261 for all compilers, whereas if something is worth
   inlining then it's worth arranging always.

   There are two styles of inlining here.  When the same bit of argv_929 is
   wanted for the inline as for the library version, then __GMP_FORCE_foo
   arranges for that argv_929 to be emitted and the argv_409
   directive suppressed, eg. argv_2706.  When a different bit of argv_929
   is wanted for the inline than for the library version, then
   __GMP_FORCE_foo arranges the inline to be suppressed, eg. argv_2646.  */

#if defined (argv_409) && ! __GMP_FORCE_mpz_abs
argv_409 void
argv_2646 (argv_2764 __gmp_w, argv_2787 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpz_set (__gmp_w, __gmp_u);
  __gmp_w->argv_584 = argv_400 (__gmp_w->argv_584);
}
#endif

#if argv_1849 == 0
#define argv_442(z,maxval)					\
  argv_2501  __gmp_n = z->argv_584;					\
  argv_2498  __gmp_p = z->argv_575;						\
  return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= maxval));
#else
#define argv_442(z,maxval)					\
  argv_2501  __gmp_n = z->argv_584;					\
  argv_2498  __gmp_p = z->argv_575;						\
  return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= maxval)	\
	  || (__gmp_n == 2 && __gmp_p[1] <= ((argv_2497) maxval >> argv_1851)));
#endif

#if defined (argv_409) || __GMP_FORCE_mpz_fits_uint_p
#if ! __GMP_FORCE_mpz_fits_uint_p
argv_409
#endif
int
argv_2706 (argv_2787 __gmp_z) argv_421
{
  argv_442 (__gmp_z, argv_427);
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpz_fits_ulong_p
#if ! __GMP_FORCE_mpz_fits_ulong_p
argv_409
#endif
int
argv_2707 (argv_2787 __gmp_z) argv_421
{
  argv_442 (__gmp_z, argv_428);
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpz_fits_ushort_p
#if ! __GMP_FORCE_mpz_fits_ushort_p
argv_409
#endif
int
argv_2708 (argv_2787 __gmp_z) argv_421
{
  argv_442 (__gmp_z, argv_429);
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpz_get_ui
#if ! __GMP_FORCE_mpz_get_ui
argv_409
#endif
unsigned long
argv_2716 (argv_2787 __gmp_z) argv_421
{
  argv_2498 __gmp_p = __gmp_z->argv_575;
  argv_2501 __gmp_n = __gmp_z->argv_584;
  argv_2497 __gmp_l = __gmp_p[0];
  if (argv_428 <= argv_1852)
    return __gmp_l & (-(argv_2497) (__gmp_n != 0));
#if argv_1849 != 0	/* redundant #if, shuts up compiler warnings */
  else			/* happens for nails, but not if LONG_LONG_LIMB */
    {			/* assume two limbs are enough to fill an ulong */
      __gmp_n = argv_400 (__gmp_n);
      if (__gmp_n <= 1)
	return __gmp_l & (-(argv_2497) (__gmp_n != 0));
      else
	return __gmp_l + (__gmp_p[1] << argv_1851);
    }
#endif
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpz_getlimbn
#if ! __GMP_FORCE_mpz_getlimbn
argv_409
#endif
argv_2497
argv_2717 (argv_2787 __gmp_z, argv_2501 __gmp_n) argv_421
{
  if (argv_400 (__gmp_z->argv_584) <= __gmp_n || __gmp_n < 0)
    return 0;
  else
    return __gmp_z->argv_575[__gmp_n];
}
#endif

#if defined (argv_409) && ! __GMP_FORCE_mpz_neg
argv_409 void
argv_2753 (argv_2764 __gmp_w, argv_2787 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpz_set (__gmp_w, __gmp_u);
  __gmp_w->argv_584 = - __gmp_w->argv_584;
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpz_perfect_square_p
#if ! __GMP_FORCE_mpz_perfect_square_p
argv_409
#endif
int
argv_2759 (argv_2787 __gmp_a)
{
  argv_2501 __gmp_asize = __gmp_a->argv_584;
  if (__gmp_asize <= 0)
    return (__gmp_asize == 0);  /* zero is a square, negatives are not */
  else
    return argv_2594 (__gmp_a->argv_575, __gmp_asize);
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpz_popcount
#if ! __GMP_FORCE_mpz_popcount
argv_409
#endif
unsigned long
mpz_popcount (argv_2787 __gmp_u) argv_421
{
  argv_2501 __gmp_usize = __gmp_u->argv_584;

  if (__gmp_usize <= 0)
    return (__gmp_usize < 0 ? argv_428 : 0);
  else
    return mpn_popcount (__gmp_u->argv_575, __gmp_usize);
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpz_set_q
#if ! __GMP_FORCE_mpz_set_q
argv_409
#endif
void
argv_2776 (argv_2764 __gmp_w, argv_2642 __gmp_u)
{
  argv_2794 (__gmp_w, argv_2630 (__gmp_u), argv_2616 (__gmp_u));
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpz_size
#if ! __GMP_FORCE_mpz_size
argv_409
#endif
size_t
argv_2783 (argv_2787 __gmp_z) argv_421
{
  return argv_400 (__gmp_z->argv_584);
}
#endif


/**************** mpq inlines ****************/

#if defined (argv_409) && ! __GMP_FORCE_mpq_abs
argv_409 void
argv_2609 (argv_2632 __gmp_w, argv_2642 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpq_set (__gmp_w, __gmp_u);
  __gmp_w->argv_581.argv_584 = argv_400 (__gmp_w->argv_581.argv_584);
}
#endif

#if defined (argv_409) && ! __GMP_FORCE_mpq_neg
argv_409 void
argv_2629 (argv_2632 __gmp_w, argv_2642 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpq_set (__gmp_w, __gmp_u);
  __gmp_w->argv_581.argv_584 = - __gmp_w->argv_581.argv_584;
}
#endif


/**************** mpn inlines ****************/

/* The comments with argv_431 below apply here too.

   The test for FUNCTION returning 0 should predict well.  If it's assumed
   {yp,ysize} will usually have a random number of argv_752 then the high limb
   won't be full and a carry out will occur a good deal less than 50% of the
   argv_3825.

   ysize==0 isn't a documented feature, but is used internally in a few
   places.

   Producing cout last stops it using up a register during the main part of
   the calculation, though gcc (as of 3.0) on an "if (argv_2571 (...))"
   doesn't seem able to move the true and false legs of the conditional up
   to the two places cout is generated.  */

#define argv_433(cout, wp, xp, xsize, yp, ysize, FUNCTION, TEST)     \
  do {                                                                  \
    argv_2501  __gmp_i;                                                 \
    argv_2497  __gmp_x;                                                 \
                                                                        \
    /* ASSERT ((ysize) >= 0); */                                        \
    /* ASSERT ((xsize) >= (ysize)); */                                  \
    /* ASSERT (MPN_SAME_OR_SEPARATE2_P (wp, xsize, xp, xsize)); */      \
    /* ASSERT (MPN_SAME_OR_SEPARATE2_P (wp, xsize, yp, ysize)); */      \
                                                                        \
    __gmp_i = (ysize);                                                  \
    if (__gmp_i != 0)                                                   \
      {                                                                 \
        if (FUNCTION (wp, xp, yp, __gmp_i))                             \
          {                                                             \
            do                                                          \
              {                                                         \
                if (__gmp_i >= (xsize))                                 \
                  {                                                     \
                    (cout) = 1;                                         \
                    goto __gmp_done;                                    \
                  }                                                     \
                __gmp_x = (xp)[__gmp_i];                                \
              }                                                         \
            while (TEST);                                               \
          }                                                             \
      }                                                                 \
    if ((wp) != (xp))                                                   \
      argv_438 (wp, xp, xsize, __gmp_i);                        \
    (cout) = 0;                                                         \
  __gmp_done:                                                           \
    ;                                                                   \
  } while (0)

#define argv_430(cout, wp, xp, xsize, yp, ysize)              \
  argv_433 (cout, wp, xp, xsize, yp, ysize, argv_2573,       \
               (((wp)[__gmp_i++] = (__gmp_x + 1) & argv_1852) == 0))
#define argv_439(cout, wp, xp, xsize, yp, ysize)              \
  argv_433 (cout, wp, xp, xsize, yp, ysize, argv_2606,       \
               (((wp)[__gmp_i++] = (__gmp_x - 1) & argv_1852), __gmp_x == 0))


/* The use of __gmp_i indexing is designed to ensure a compile argv_3825 src==dst
   remains nice and clear to the compiler, so that argv_438 can
   disappear, and the argv_2198/argv_616/store gets a chance to become a
   read-modify-write on CISC CPUs.

   Alternatives:

   Using a pair of pointers instead of indexing would be possible, but gcc
   isn't able to recognise compile-argv_3825 src==dst in that case, even when the
   pointers are incremented more or less together.  Other compilers would
   very likely have similar difficulty.

   gcc could use "if (__builtin_constant_p(src==dst) && src==dst)" or
   similar to detect a compile-argv_3825 src==dst.  This works nicely on gcc
   2.95.x, it's not good on gcc 3.0 where __builtin_constant_p(p==p) seems
   to be always false, for a pointer p.  But the argv_1106 argv_929 form seems
   good enough for src==dst anyway.

   gcc on x86 as usual doesn't give particularly good argv_1453 handling for the
   carry/borrow detection.  It's tempting to want some multi instruction asm
   blocks to help it, and this was tried, but in truth there's only a few
   instructions to save and any gain is all too easily lost by register
   juggling setting up for the asm.  */

#if argv_1849 == 0
#define argv_434(cout, dst, src, n, v, OP, CB)		\
  do {								\
    argv_2501  __gmp_i;						\
    argv_2497  __gmp_x, __gmp_r;                                \
								\
    /* ASSERT ((n) >= 1); */					\
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, n)); */	\
								\
    __gmp_x = (src)[0];						\
    __gmp_r = __gmp_x OP (v);                                   \
    (dst)[0] = __gmp_r;						\
    if (CB (__gmp_r, __gmp_x, (v)))                             \
      {								\
	(cout) = 1;						\
	for (__gmp_i = 1; __gmp_i < (n);)                       \
	  {							\
	    __gmp_x = (src)[__gmp_i];                           \
	    __gmp_r = __gmp_x OP 1;                             \
	    (dst)[__gmp_i] = __gmp_r;                           \
	    ++__gmp_i;						\
	    if (!CB (__gmp_r, __gmp_x, 1))                      \
	      {							\
		if ((src) != (dst))				\
		  argv_438 (dst, src, n, __gmp_i);      \
		(cout) = 0;					\
		break;						\
	      }							\
	  }							\
      }								\
    else							\
      {								\
	if ((src) != (dst))					\
	  argv_438 (dst, src, n, 1);			\
	(cout) = 0;						\
      }								\
  } while (0)
#endif

#if argv_1849 >= 1
#define argv_434(cout, dst, src, n, v, OP, CB)		\
  do {								\
    argv_2501  __gmp_i;						\
    argv_2497  __gmp_x, __gmp_r;				\
								\
    /* ASSERT ((n) >= 1); */					\
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, n)); */	\
								\
    __gmp_x = (src)[0];						\
    __gmp_r = __gmp_x OP (v);					\
    (dst)[0] = __gmp_r & argv_1852;				\
    if (__gmp_r >> argv_1851 != 0)				\
      {								\
	(cout) = 1;						\
	for (__gmp_i = 1; __gmp_i < (n);)			\
	  {							\
	    __gmp_x = (src)[__gmp_i];				\
	    __gmp_r = __gmp_x OP 1;				\
	    (dst)[__gmp_i] = __gmp_r & argv_1852;		\
	    ++__gmp_i;						\
	    if (__gmp_r >> argv_1851 == 0)			\
	      {							\
		if ((src) != (dst))				\
		  argv_438 (dst, src, n, __gmp_i);	\
		(cout) = 0;					\
		break;						\
	      }							\
	  }							\
      }								\
    else							\
      {								\
	if ((src) != (dst))					\
	  argv_438 (dst, src, n, 1);			\
	(cout) = 0;						\
      }								\
  } while (0)
#endif

#define argv_432(r,x,y) ((r) < (y))
#define argv_441(r,x,y) ((x) < (y))

#define argv_431(cout, dst, src, n, v)	     \
  argv_434(cout, dst, src, n, v, +, argv_432)
#define argv_440(cout, dst, src, n, v)	     \
  argv_434(cout, dst, src, n, v, -, argv_441)


/* Compare {xp,size} and {yp,size}, setting "argv_3402" to positive, zero or
   negative.  size==0 is allowed.  On random argv_1139 usually only argv_2929 limb will
   need to be examined to get a argv_3402, so it's worth having it inline.  */
#define argv_435(argv_3402, xp, yp, size)                                \
  do {                                                                  \
    argv_2501  __gmp_i;                                                 \
    argv_2497  __gmp_x, __gmp_y;                                        \
                                                                        \
    /* ASSERT ((size) >= 0); */                                         \
                                                                        \
    (argv_3402) = 0;                                                       \
    __gmp_i = (size);                                                   \
    while (--__gmp_i >= 0)                                              \
      {                                                                 \
        __gmp_x = (xp)[__gmp_i];                                        \
        __gmp_y = (yp)[__gmp_i];                                        \
        if (__gmp_x != __gmp_y)                                         \
          {                                                             \
            /* Cannot use __gmp_x - __gmp_y, may overflow an "int" */   \
            (argv_3402) = (__gmp_x > __gmp_y ? 1 : -1);                    \
            break;                                                      \
          }                                                             \
      }                                                                 \
  } while (0)


/* For power and powerpc we want an inline ldu/stu/bdnz loop for copying.
   On ppc630 for instance this is optimal since it can sustain only 1 store
   per cycle.

   gcc 2.95.x (powerpc64 -maix64, or powerpc32) doesn't recognise the "for"
   loop in the generic argv_929 below can become ldu/stu/bdnz.  The do/while
   here helps it get to that.

   In gcc -mpowerpc64 mode, without -maix64, __size seems to want to be an
   argv_2497 to get into the ctr register, and even then the loop is a
   curious ldu/stu/bdz/b.  But let's not worry about that unless there's a
   system using this.  An asm argv_753 could force what we want if necessary.

   xlc 3.1 already generates ldu/stu/bdnz from the generic C, and does so
   from this loop too.  */

#if argv_413 || argv_414
#define argv_437(dst, src, size)                        \
  do {                                                          \
    /* ASSERT ((size) >= 0); */                                 \
    /* ASSERT (MPN_SAME_OR_INCR_P (dst, src, size)); */         \
    if ((size) != 0)                                            \
      {                                                         \
        argv_2498     __gmp_copy_incr_dst = (dst) - 1;             \
        argv_2502  __gmp_copy_incr_src = (src) - 1;             \
        argv_2501  __gmp_copy_incr_size = (size);               \
        do                                                      \
          *++__gmp_copy_incr_dst = *++__gmp_copy_incr_src;      \
        while (--__gmp_copy_incr_size != 0);                    \
      }                                                         \
  } while (0)
#define argv_436(dst, src, size)                             \
  do {                                                          \
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, size)); */     \
    argv_437 (dst, src, size);                          \
  } while (0)
#endif

#if defined (argv_436) && ! defined (argv_438)
#define argv_438(dst, src, size, argv_3601)                 \
  do {                                                          \
    /* ASSERT ((argv_3601) >= 0); */                                \
    /* ASSERT ((argv_3601) <= (size)); */                           \
    argv_436 ((dst)+(argv_3601), (src)+(argv_3601), (size)-(argv_3601)); \
  } while (0)
#endif

/* Copy {src,size} to {dst,size}, starting at "argv_3601".  This is designed to
   keep the indexing dst[j] and src[j] nice and simple for argv_431,
   argv_430, etc.  */
#if ! defined (argv_438)
#define argv_438(dst, src, size, argv_3601)                 \
  do {                                                          \
    argv_2501 __gmp_j;                                          \
    /* ASSERT ((size) >= 0); */                                 \
    /* ASSERT ((argv_3601) >= 0); */                                \
    /* ASSERT ((argv_3601) <= (size)); */                           \
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, size)); */     \
    for (__gmp_j = (argv_3601); __gmp_j < (size); __gmp_j++)        \
      (dst)[__gmp_j] = (src)[__gmp_j];                          \
  } while (0)
#endif

/* Enhancement: Use some of the smarter argv_929 from gmp-impl.h.  Maybe use
   mpn_copyi if there's a native version, and if we don't mind demanding
   binary compatibility for it (on targets which use it).  */

#if ! defined (argv_436)
#define argv_436(dst, src, size)   argv_438 (dst, src, size, 0)
#endif


#if defined (argv_409) || __GMP_FORCE_mpn_add
#if ! __GMP_FORCE_mpn_add
argv_409
#endif
argv_2497
argv_2571 (argv_2498 __gmp_wp, argv_2502 __gmp_xp, argv_2501 __gmp_xsize, argv_2502 __gmp_yp, argv_2501 __gmp_ysize)
{
  argv_2497  __gmp_c;
  argv_430 (__gmp_c, __gmp_wp, __gmp_xp, __gmp_xsize, __gmp_yp, __gmp_ysize);
  return __gmp_c;
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpn_add_1
#if ! __GMP_FORCE_mpn_add_1
argv_409
#endif
argv_2497
argv_2572 (argv_2498 __gmp_dst, argv_2502 __gmp_src, argv_2501 __gmp_size, argv_2497 __gmp_n) argv_421
{
  argv_2497  __gmp_c;
  argv_431 (__gmp_c, __gmp_dst, __gmp_src, __gmp_size, __gmp_n);
  return __gmp_c;
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpn_cmp
#if ! __GMP_FORCE_mpn_cmp
argv_409
#endif
int
argv_2576 (argv_2502 __gmp_xp, argv_2502 __gmp_yp, argv_2501 __gmp_size) argv_421
{
  int __gmp_result;
  argv_435 (__gmp_result, __gmp_xp, __gmp_yp, __gmp_size);
  return __gmp_result;
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpn_sub
#if ! __GMP_FORCE_mpn_sub
argv_409
#endif
argv_2497
argv_2604 (argv_2498 __gmp_wp, argv_2502 __gmp_xp, argv_2501 __gmp_xsize, argv_2502 __gmp_yp, argv_2501 __gmp_ysize)
{
  argv_2497  __gmp_c;
  argv_439 (__gmp_c, __gmp_wp, __gmp_xp, __gmp_xsize, __gmp_yp, __gmp_ysize);
  return __gmp_c;
}
#endif

#if defined (argv_409) || __GMP_FORCE_mpn_sub_1
#if ! __GMP_FORCE_mpn_sub_1
argv_409
#endif
argv_2497
argv_2605 (argv_2498 __gmp_dst, argv_2502 __gmp_src, argv_2501 __gmp_size, argv_2497 __gmp_n) argv_421
{
  argv_2497  __gmp_c;
  argv_440 (__gmp_c, __gmp_dst, __gmp_src, __gmp_size, __gmp_n);
  return __gmp_c;
}
#endif

#if defined (__cplusplus)
}
#endif


/* Allow faster testing for negative, zero, and positive.  */
#define argv_2781(Z) ((Z)->argv_584 < 0 ? -1 : (Z)->argv_584 > 0)
#define argv_2558(F) ((F)->argv_584 < 0 ? -1 : (F)->argv_584 > 0)
#define argv_2641(Q) ((Q)->argv_581.argv_584 < 0 ? -1 : (Q)->argv_581.argv_584 > 0)

/* When using GCC, optimize certain common comparisons.  */
#if defined (__GNUC__)
#define argv_2669(Z,UI) \
  (__builtin_constant_p (UI) && (UI) == 0				\
   ? argv_2781 (Z) : argv_588 (Z,UI))
#define argv_2668(Z,SI) \
  (__builtin_constant_p (SI) && (SI) == 0 ? argv_2781 (Z)			\
   : __builtin_constant_p (SI) && (SI) > 0				\
    ? argv_588 (Z, (unsigned long int) SI)				\
   : argv_587 (Z,SI))
#define argv_2615(Q,NUI,DUI) \
  (__builtin_constant_p (NUI) && (NUI) == 0				\
   ? argv_2641 (Q) : argv_586 (Q,NUI,DUI))
#define argv_2614(q,n,d)                       \
  (__builtin_constant_p ((n) >= 0) && (n) >= 0  \
   ? argv_2615 (q, (unsigned long) (n), d)     \
   : argv_585 (q, n, d))
#else
#define argv_2669(Z,UI) argv_588 (Z,UI)
#define argv_2668(Z,UI) argv_587 (Z,UI)
#define argv_2615(Q,NUI,DUI) argv_586 (Q,NUI,DUI)
#define argv_2614(q,n,d)  argv_585(q,n,d)
#endif


/* Using "&" rather than "&&" means these can come out branch-free.  Every
   argv_2793 has at least argv_2929 limb allocated, so fetching the low limb is always
   allowed.  */
#define argv_2755(z)   ((int) ((z)->argv_584 != 0) & (int) (z)->argv_575[0])
#define argv_2689(z)  (! argv_2755 (z))


/**************** C++ routines ****************/

#ifdef __cplusplus
argv_408 std::ostream& operator<< (std::ostream &, argv_2787);
argv_408 std::ostream& operator<< (std::ostream &, argv_2642);
argv_408 std::ostream& operator<< (std::ostream &, argv_2562);
argv_408 std::istream& operator>> (std::istream &, argv_2764);
argv_408 std::istream& operator>> (std::istream &, argv_2632);
argv_408 std::istream& operator>> (std::istream &, argv_2546);
#endif


/* Compatibility with GMP 2 and earlier. */
#define argv_2579(qp,np,nsize,dp,dsize) \
  argv_2581 (qp, (argv_2501) 0, np, nsize, dp, dsize)

/* Compatibility with GMP 1.  */
#define argv_2739	argv_2692
#define argv_2741	argv_2695
#define argv_2744	argv_2697
#define argv_2740	argv_2694
#define argv_2742(q,r,n,d) \
  ((r == 0) ? argv_2694 (q,n,d) : argv_2696 (q,r,n,d))
#define argv_2745(r,n,d) \
  ((r == 0) ? argv_2700 (n,d) : argv_2699 (r,n,d))

/* Useful synonyms, but not quite compatible with GMP 1.  */
#define argv_2677		argv_2692
#define argv_2685	argv_2695
#define argv_2679	argv_2694
#define argv_2686	argv_2696
#define argv_2748	argv_2699
#define argv_2678	argv_2693
#define argv_2747	argv_2698

enum
{
  argv_1799 = 0,
  argv_1801 = 1,
  argv_1797 = 2,
  argv_1800 = 4,
  argv_1798 = 8,
  argv_1795 = 16,
  argv_1796 = 32,
  argv_1802
};

/* Major version number is the argv_3960 of argv_443 too, above and in mp.h. */
#define argv_444 4
#define argv_445 1
#define argv_446 0

#define argv_411
#endif /* argv_411 */
