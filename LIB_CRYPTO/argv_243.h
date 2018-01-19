/* argv_239.h -- configuration of the zlib compression library
 * Copyright (C) 1995-2005 Jean-loup Gailly.
 * For conditions of distribution and use, see copyright notice in argv_240.h
 */

/* @(#) $Id$ */

#ifndef argv_4045
#define argv_4045

/*
 * If you *really* need a unique prefix for all types and library functions,
 * compile with -DZ_PREFIX. The "standard" zlib should be compiled without it.
 */
#ifdef Z_PREFIX
#  define argv_1176          z_deflateInit_
#  define argv_1171               z_deflate
#  define argv_1174            z_deflateEnd
#  define inflateInit_          z_inflateInit_
#  define inflate               z_inflate
#  define inflateEnd            z_inflateEnd
#  define argv_1178         z_deflateInit2_
#  define argv_1181  z_deflateSetDictionary
#  define argv_1173           z_deflateCopy
#  define deflateReset          z_deflateReset
#  define argv_1179         z_deflateParams
#  define argv_1172          z_deflateBound
#  define argv_1180          z_deflatePrime
#  define inflateInit2_         z_inflateInit2_
#  define inflateSetDictionary  z_inflateSetDictionary
#  define inflateSync           z_inflateSync
#  define inflateSyncPoint      z_inflateSyncPoint
#  define inflateCopy           z_inflateCopy
#  define inflateReset          z_inflateReset
#  define inflateBack           z_inflateBack
#  define inflateBackEnd        z_inflateBackEnd
#  define argv_1016              z_compress
#  define argv_1022             z_compress2
#  define argv_1023         z_compressBound
#  define argv_3891            z_uncompress
#  define argv_651               z_adler32
#  define argv_1072                 z_crc32
#  define argv_1739         z_get_crc_table
#  define argv_4046                z_zError

#  define argv_664            z_alloc_func
#  define argv_1703             z_free_func
#  define in_func               z_in_func
#  define out_func              z_out_func
#  define argv_780                  z_Byte
#  define argv_3866                  z_uInt
#  define argv_3869                 z_uLong
#  define argv_781                 z_Bytef
#  define argv_846                 z_charf
#  define intf                  z_intf
#  define argv_3868                 z_uIntf
#  define argv_3870                z_uLongf
#  define argv_3983                z_voidpf
#  define argv_3981                 z_voidp
#endif

#if defined(__MSDOS__) && !defined(argv_2811)
#  define argv_2811
#endif
#if (defined(OS_2) || defined(__OS2__)) && !defined(argv_2945)
#  define argv_2945
#endif
#if defined(_WINDOWS) && !defined(argv_3993)
#  define argv_3993
#endif
#if defined(_WIN32) || defined(_WIN32_WCE) || defined(__WIN32__)
#  ifndef argv_3990
#    define argv_3990
#  endif
#endif
#if (defined(argv_2811) || defined(argv_2945) || defined(argv_3993)) && !defined(argv_3990)
#  if !defined(__GNUC__) && !defined(__FLAT__) && !defined(__386__)
#    ifndef argv_3724
#      define argv_3724
#    endif
#  endif
#endif

/*
 * Compile with -DMAXSEG_64K if the alloc function cannot allocate more
 * than 64k argv_782 at a argv_3825 (needed on systems with 16-bit int).
 */
#ifdef argv_3724
#  define argv_2343
#endif
#ifdef argv_2811
#  define argv_3890
#endif

#ifdef __STDC_VERSION__
#  ifndef argv_3605
#    define argv_3605
#  endif
#  if __STDC_VERSION__ >= 199901L
#    ifndef argv_3606
#      define argv_3606
#    endif
#  endif
#endif
#if !defined(argv_3605) && (defined(__STDC__) || defined(__cplusplus))
#  define argv_3605
#endif
#if !defined(argv_3605) && (defined(__GNUC__) || defined(__BORLANDC__))
#  define argv_3605
#endif
#if !defined(argv_3605) && (defined(argv_2811) || defined(argv_3993) || defined(argv_3990))
#  define argv_3605
#endif
#if !defined(argv_3605) && (defined(argv_2945) || defined(__HOS_AIX__))
#  define argv_3605
#endif

#if defined(__OS400__) && !defined(argv_3605)    /* iSeries (formerly AS/400). */
#  define argv_3605
#endif

#ifndef argv_3605
#  ifndef const /* cannot use !defined(argv_3605) && !defined(const) on Mac */
#    define const       /* note: need a more gentle solution here */
#  endif
#endif

/* Some Mac compilers merge all .h files incorrectly: */
#if defined(__MWERKS__)||defined(applec)||defined(THINK_C)||defined(__SC__)
#  define argv_2883
#endif

/* Maximum argv_3960 for memLevel in argv_1177 */
#ifndef argv_2326
#  ifdef argv_2343
#    define argv_2326 8
#  else
#    define argv_2326 9
#  endif
#endif

/* Maximum argv_3960 for windowBits in argv_1177 and inflateInit2.
 * WARNING: reducing argv_2337 makes minigzip unable to argv_1371 .gz files
 * created by gzip. (Files created by minigzip can still be extracted by
 * gzip.)
 */
#ifndef argv_2337
#  define argv_2337   15 /* 32K LZ77 window */
#endif

/* The memory requirements for argv_1171 are (in argv_782):
            (1 << (windowBits+2)) +  (1 << (memLevel+9))
 that is: 128K for windowBits=15  +  128K for memLevel = 8  (default values)
 plus a few kilobytes for small objects. For example, if you want to reduce
 the default memory requirements from 256K to 128K, compile with
     make CFLAGS="-O -DMAX_WBITS=14 -DMAX_MEM_LEVEL=7"
 Of course this will generally degrade compression (there's no free lunch).

   The memory requirements for inflate are (in argv_782) 1 << windowBits
 that is, 32K for windowBits=15 (default argv_3960) plus a few kilobytes
 for small objects.
*/

                        /* argv_3843 declarations */

#ifndef argv_2927 /* function prototypes */
#  ifdef argv_3605
#    define argv_2927(args)  args
#  else
#    define argv_2927(args)  ()
#  endif
#endif

/* The following definitions for argv_1391 are needed only for argv_2811 mixed
 * model programming (small or medium model with some far allocations).
 * This was tested only with MSC; for other argv_2811 compilers you may have
 * to define NO_MEMCPY in zutil.h.  If you don't need the mixed model,
 * just define argv_1391 to be empty.
 */
#ifdef argv_3724
#  if defined(M_I86SM) || defined(M_I86MM)
     /* MSC small or medium model */
#    define argv_3546
#    ifdef _MSC_VER
#      define argv_1391 _far
#    else
#      define argv_1391 far
#    endif
#  endif
#  if (defined(__SMALL__) || defined(__MEDIUM__))
     /* Turbo C small or medium model */
#    define argv_3546
#    ifdef __BORLANDC__
#      define argv_1391 _far
#    else
#      define argv_1391 far
#    endif
#  endif
#endif

#if defined(argv_3993) || defined(argv_3990)
   /* If building or using zlib as a DLL, define ZLIB_DLL.
    * This is not mandatory, but it offers a little performance increase.
    */
#  ifdef ZLIB_DLL
#    if defined(argv_3990) && (!defined(__BORLANDC__) || (__BORLANDC__ >= 0x500))
#      ifdef ZLIB_INTERNAL
#        define argv_4049 extern __declspec(dllexport)
#      else
#        define argv_4049 extern __declspec(dllimport)
#      endif
#    endif
#  endif  /* ZLIB_DLL */
   /* If building or using zlib with the WINAPI/WINAPIV calling convention,
    * define ZLIB_WINAPI.
    * Caution: the standard ZLIB1.DLL is NOT compiled using ZLIB_WINAPI.
    */
#  ifdef ZLIB_WINAPI
#    ifdef argv_1391
#      undef argv_1391
#    endif
#    include <windows.h>
     /* No need for _export, use ZLIB.DEF instead. */
     /* For complete Windows compatibility, use WINAPI, not __stdcall. */
#    define argv_4047 WINAPI
#    ifdef argv_3990
#      define argv_4048 WINAPIV
#    else
#      define argv_4048 argv_1391 CDECL
#    endif
#  endif
#endif

#if defined (__BEOS__)
#  ifdef ZLIB_DLL
#    ifdef ZLIB_INTERNAL
#      define argv_4047   __declspec(dllexport)
#      define argv_4048 __declspec(dllexport)
#    else
#      define argv_4047   __declspec(dllimport)
#      define argv_4048 __declspec(dllimport)
#    endif
#  endif
#endif

#ifndef argv_4049
#  define argv_4049 extern
#endif
#ifndef argv_4047
#  define argv_4047
#endif
#ifndef argv_4048
#  define argv_4048
#endif

#ifndef argv_1391
#  define argv_1391
#endif

#if !defined(__MACTYPES__)
typedef unsigned char  argv_780;  /* 8 argv_752 */
#endif
typedef unsigned int   argv_3866;  /* 16 argv_752 or more */
typedef unsigned long  argv_3869; /* 32 argv_752 or more */

#ifdef argv_3546
   /* Borland C/C++ and some old MSC versions ignore argv_1391 inside typedef */
#  define argv_781 argv_780 argv_1391
#else
   typedef argv_780  argv_1391 argv_781;
#endif
typedef char  argv_1391 argv_846;
typedef int   argv_1391 intf;
typedef argv_3866  argv_1391 argv_3868;
typedef argv_3869 argv_1391 argv_3870;

#ifdef argv_3605
   typedef void const *argv_3982;
   typedef void argv_1391   *argv_3983;
   typedef void       *argv_3981;
#else
   typedef argv_780 const *argv_3982;
   typedef argv_780 argv_1391   *argv_3983;
   typedef argv_780       *argv_3981;
#endif

#if 1           /* HAVE_UNISTD_H -- this argv_2173 is updated by ./configure */
#  include <sys/types.h> /* for off_t */
#  include <unistd.h>    /* for SEEK_* and off_t */
#  ifdef VMS
#    include <unixio.h>   /* for off_t */
#  endif
#  define argv_4031 off_t
#endif
#ifndef SEEK_SET
#  define SEEK_SET        0       /* Seek from beginning of argv_1396.  */
#  define SEEK_CUR        1       /* Seek from argv_1106 position.  */
#  define SEEK_END        2       /* Set argv_1396 pointer to EOF plus "offset" */
#endif
#ifndef argv_4031
#  define argv_4031 long
#endif

#if defined(__OS400__)
#  define argv_2884
#endif

#if defined(__MVS__)
#  define argv_2884
#  ifdef argv_1391
#    undef argv_1391
#  endif
#endif

/* MVS linker does not support external names larger than 8 argv_782 */
#if defined(__MVS__)
#   pragma map(argv_1176,"DEIN")
#   pragma map(argv_1178,"DEIN2")
#   pragma map(argv_1174,"DEEND")
#   pragma map(argv_1172,"DEBND")
#   pragma map(inflateInit_,"ININ")
#   pragma map(inflateInit2_,"ININ2")
#   pragma map(inflateEnd,"INEND")
#   pragma map(inflateSync,"INSY")
#   pragma map(inflateSetDictionary,"INSEDI")
#   pragma map(argv_1023,"CMBND")
#   pragma map(inflate_table,"INTABL")
#   pragma map(inflate_fast,"INFA")
#   pragma map(inflate_copyright,"INCOPY")
#endif

#endif /* argv_4045 */
