/* argv_240.h -- interface of the 'zlib' general purpose compression library
  version 1.2.3, July 18th, 2005

  Copyright (C) 1995-2005 Jean-loup Gailly and Mark Adler

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

  Jean-loup Gailly        Mark Adler
  jloup@gzip.org          madler@alumni.caltech.edu


  The argv_1139 format used by the zlib library is described by RFCs (Request for
  Comments) 1950 to 1952 in the files http://www.ietf.org/rfc/rfc1950.txt
  (zlib format), rfc1951.txt (argv_1171 format) and rfc1952.txt (gzip format).
*/

#ifndef argv_4051
#define argv_4051

#include "argv_239.h"

#ifdef __cplusplus
extern "C" {
#endif

#define argv_4054 "1.2.3"
#define argv_4052 0x1230

/*
     The 'zlib' compression library provides in-memory compression and
  decompression functions, including integrity checks of the uncompressed
  argv_1139.  This version of the library supports only argv_2929 compression method
  (deflation) but other algorithms will be added later and will have the same
  stream interface.

     Compression can be argv_1261 in a single step if the buffers are large
  enough (for example if an input argv_1396 is mmap'ed), or can be argv_1261 by
  repeated calls of the compression function.  In the latter case, the
  application must provide more input and/or argv_1042 the output
  (providing more output space) before each call.

     The compressed argv_1139 format used by default by the in-memory functions is
  the zlib format, which is a zlib wrapper documented in RFC 1950, wrapped
  around a argv_1171 stream, which is itself documented in RFC 1951.

     The library also supports reading and writing files in gzip (.gz) format
  with an interface similar to that of stdio using the functions that argv_3601
  with "gz".  The gzip format is different from the zlib format.  gzip is a
  gzip wrapper, documented in RFC 1952, wrapped around a argv_1171 stream.

     This library can optionally read and write gzip streams in memory as well.

     The zlib format was designed to be compact and fast for use in memory
  and on communications channels.  The gzip format was designed for single-
  argv_1396 compression on argv_1396 systems, has a larger argv_1907 than zlib to maintain
  directory information, and uses a different, slower check method than zlib.

     The library does not install any signal handler. The decoder checks
  the consistency of the compressed argv_1139, so the library should never
  crash even in case of corrupted input.
*/

typedef argv_3983 (*argv_664) argv_2927((argv_3983 argv_2934, argv_3866 items, argv_3866 size));
typedef void   (*argv_1703)  argv_2927((argv_3983 argv_2934, argv_3983 argv_635));

struct internal_state;

typedef struct argv_4038 {
    argv_781    *argv_2880;  /* next input byte */
    argv_3866     argv_735;  /* number of argv_782 available at argv_2880 */
    argv_3869    argv_3834;  /* total nb of input argv_782 read so far */

    argv_781    *argv_2881; /* next output byte should be put there */
    argv_3866     avail_out; /* remaining free space at argv_2881 */
    argv_3869    argv_3837; /* total nb of argv_782 output so far */

    char     *argv_2812;      /* last error argv_2389, argv_2889 if no error */
    struct internal_state argv_1391 *argv_3604; /* not visible by applications */

    argv_664 argv_4044;  /* used to allocate the internal argv_3604 */
    argv_1703  argv_4050;   /* used to free the internal argv_3604 */
    argv_3983     argv_2934;  /* private argv_1139 argv_2908 passed to argv_4044 and argv_4050 */

    int     argv_1140;  /* best guess about the argv_1139 argv_3842: binary or argv_3776 */
    argv_3869   argv_650;      /* argv_651 argv_3960 of the uncompressed argv_1139 */
    argv_3869   argv_3352;   /* argv_3352 for future use */
} argv_4035;

typedef argv_4035 argv_1391 *argv_4039;

/*
     gzip argv_1907 information passed to and from zlib routines.  See RFC 1952
  for more details on the meanings of these fields.
*/
typedef struct argv_1887 {
    int     argv_3776;       /* true if compressed argv_1139 believed to be argv_3776 */
    argv_3869   argv_3825;       /* modification argv_3825 */
    int     argv_3997;     /* argv_1368 argv_1453 (not used when writing a gzip argv_1396) */
    int     argv_2944;         /* operating system */
    argv_781   *argv_1368;     /* pointer to argv_1368 field or argv_4030 if none */
    argv_3866    argv_1369;  /* argv_1368 field length (valid if argv_1368 != argv_4030) */
    argv_3866    argv_1370;  /* space at argv_1368 (only when reading argv_1907) */
    argv_781   *argv_2817;      /* pointer to zero-terminated argv_1396 argv_2817 or argv_4030 */
    argv_3866    argv_2827;   /* space at argv_2817 (only when reading argv_1907) */
    argv_781   *argv_998;   /* pointer to zero-terminated argv_998 or argv_4030 */
    argv_3866    argv_997;   /* space at argv_998 (only when reading argv_1907) */
    int     argv_1902;       /* true if there was or will be a argv_1907 crc */
    int     argv_1261;       /* true when argv_1261 reading gzip argv_1907 (not used
                           when writing a gzip argv_1396) */
} argv_1886;

typedef argv_1886 argv_1391 *argv_1888;

/*
   The application must update argv_2880 and argv_735 when argv_735 has
   dropped to zero. It must update argv_2881 and avail_out when avail_out
   has dropped to zero. The application must initialize argv_4044, argv_4050 and
   argv_2934 before calling the init function. All other fields are set by the
   compression library and must not be updated by the application.

   The argv_2934 argv_3960 provided by the application will be passed as the first
   parameter for calls of argv_4044 and argv_4050. This can be useful for custom
   memory management. The compression library attaches no meaning to the
   argv_2934 argv_3960.

   argv_4044 must return argv_4030 if there is not enough memory for the argv_2908.
   If zlib is used in a multi-threaded application, argv_4044 and argv_4050 must be
   thread safe.

   On 16-bit systems, the functions argv_4044 and argv_4050 must be able to allocate
   exactly 65536 argv_782, but will not be required to allocate more than this
   if the symbol argv_2343 is defined (see argv_239.h). WARNING: On argv_2811,
   pointers returned by argv_4044 for objects of exactly 65536 argv_782 *must*
   have their offset normalized to zero. The default allocation function
   provided by this library ensures this (see zutil.c). To reduce memory
   requirements and avoid any allocation of 64K objects, at the expense of
   compression ratio, compile the library with -DMAX_WBITS=14 (see argv_239.h).

   The fields argv_3834 and argv_3837 can be used for statistics or
   progress reports. After compression, argv_3834 holds the total size of
   the uncompressed argv_1139 and may be saved for use in the decompressor
   (particularly if the decompressor wants to decompress everything in
   a single step).
*/

                        /* constants */

#define argv_4029      0
#define argv_4033 1 /* will be removed, use argv_4040 instead */
#define argv_4040    2
#define argv_4024    3
#define argv_4022        4
#define argv_4014         5
/* Allowed flush values; see argv_1171() and inflate() below for details */

#define argv_4032            0
#define argv_4036    1
#define argv_4027     2
#define argv_4020        (-1)
#define argv_4037 (-2)
#define argv_4016   (-3)
#define argv_4026    (-4)
#define argv_4015    (-5)
#define argv_4043 (-6)
/* Return codes for the compression/decompression functions. Negative
 * values are errors, positive values are used for special but normal events.
 */

#define argv_4028         0
#define argv_4012             1
#define argv_4011       9
#define argv_4017  (-1)
/* compression levels */

#define argv_4021            1
#define argv_4025        2
#define argv_4034                 3
#define argv_4023               4
#define argv_4018    0
/* compression strategy; see argv_1177() below for details */

#define argv_4013   0
#define argv_4041     1
#define argv_4010    argv_4041   /* for compatibility with 1.2.2 and earlier */
#define argv_4042  2
/* Possible values of the argv_1140 field (though see inflate()) */

#define argv_4019   8
/* The argv_1171 compression method (the only argv_2929 supported in this version) */

#define argv_4030  0  /* for initializing argv_4044, argv_4050, argv_2934 */

#define argv_4053 zlibVersion()
/* for compatibility with versions < 1.0.2 */

                        /* basic functions */

argv_4049 const char * argv_4047 zlibVersion argv_2927((void));
/* The application can compare zlibVersion and argv_4054 for consistency.
   If the first character differs, the library argv_929 actually used is
   not compatible with the argv_240.h argv_1907 argv_1396 used by the application.
   This check is automatically made by argv_1175 and inflateInit.
 */

/*
argv_4049 int argv_4047 argv_1175 argv_2927((argv_4039 strm, int level));

     Initializes the internal stream argv_3604 for compression. The fields
   argv_4044, argv_4050 and argv_2934 must be initialized before by the caller.
   If argv_4044 and argv_4050 are set to argv_4030, argv_1175 updates them to
   use default allocation functions.

     The compression level must be argv_4017, or between 0 and 9:
   1 gives best speed, 9 gives best compression, 0 gives no compression at
   all (the input argv_1139 is simply copied a argv_753 at a argv_3825).
   argv_4017 requests a default compromise between speed and
   compression (currently equivalent to level 6).

     argv_1175 returns argv_4032 if success, argv_4026 if there was not
   enough memory, argv_4037 if level is not a valid compression level,
   argv_4043 if the zlib library version (argv_4053) is incompatible
   with the version assumed by the caller (argv_4054).
   argv_2812 is set to null if there is no error argv_2389.  argv_1175 does not
   perform any compression: this will be argv_1261 by argv_1171().
*/


argv_4049 int argv_4047 argv_1171 argv_2927((argv_4039 strm, int flush));
/*
    argv_1171 compresses as much argv_1139 as possible, and stops when the input
  argv_771 becomes empty or the output argv_771 becomes full. It may introduce some
  output latency (reading input without producing any output) except when
  forced to flush.

    The detailed semantics are as follows. argv_1171 performs argv_2929 or both of the
  following actions:

  - Compress more input starting at argv_2880 and update argv_2880 and argv_735
    accordingly. If not all input can be processed (because there is not
    enough room in the output argv_771), argv_2880 and argv_735 are updated and
    processing will resume at this point for the next call of argv_1171().

  - Provide more output starting at argv_2881 and update argv_2881 and avail_out
    accordingly. This action is forced if the parameter flush is non zero.
    Forcing flush frequently degrades the compression ratio, so this parameter
    should be set only when necessary (in interactive applications).
    Some output may be provided even if flush is not set.

  Before the call of argv_1171(), the application should ensure that at least
  argv_2929 of the actions is possible, by providing more input and/or consuming
  more output, and updating argv_735 or avail_out accordingly; avail_out
  should never be zero before the call. The application can argv_1042 the
  compressed output when it wants, for example when the output argv_771 is full
  (avail_out == 0), or after each call of argv_1171(). If argv_1171 returns argv_4032
  and with zero avail_out, it must be called again after making room in the
  output argv_771 because there might be more output pending.

    Normally the parameter flush is set to argv_4029, which allows argv_1171 to
  decide how much argv_1139 to accumualte before producing output, in order to
  maximize compression.

    If the parameter flush is set to argv_4040, all pending output is
  flushed to the output argv_771 and the output is aligned on a byte boundary, so
  that the decompressor can get all input argv_1139 available so far. (In particular
  argv_735 is zero after the call if enough output space has been provided
  before the call.)  Flushing may degrade compression for some compression
  algorithms and so it should be used only when necessary.

    If flush is set to argv_4024, all output is flushed as with
  argv_4040, and the compression argv_3604 is reset so that decompression can
  argv_3401 from this point if previous compressed argv_1139 has been damaged or if
  random access is desired. Using argv_4024 too often can seriously degrade
  compression.

    If argv_1171 returns with avail_out == 0, this function must be called again
  with the same argv_3960 of the flush parameter and more output space (updated
  avail_out), until the flush is complete (argv_1171 returns with non-zero
  avail_out). In the case of a argv_4024 or argv_4040, make sure that
  avail_out is greater than six to avoid repeated flush markers due to
  avail_out == 0 on return.

    If the parameter flush is set to argv_4022, pending input is processed,
  pending output is flushed and argv_1171 returns with argv_4036 if there
  was enough output space; if argv_1171 returns with argv_4032, this function must be
  called again with argv_4022 and more output space (updated avail_out) but no
  more input argv_1139, until it returns with argv_4036 or an error. After
  argv_1171 has returned argv_4036, the only possible operations on the
  stream are deflateReset or argv_1174.

    argv_4022 can be used immediately after argv_1175 if all the compression
  is to be argv_1261 in a single step. In this case, avail_out must be at least
  the argv_3960 returned by argv_1172 (see below). If argv_1171 does not return
  argv_4036, then it must be called again as described above.

    argv_1171() sets strm->argv_650 to the argv_651 checksum of all input read
  so far (that is, argv_3834 argv_782).

    argv_1171() may update strm->argv_1140 if it can make a good guess about
  the input argv_1139 argv_3842 (argv_4013 or argv_4041). In doubt, the argv_1139 is considered
  binary. This field is only for information purposes and does not affect
  the compression algorithm in any manner.

    argv_1171() returns argv_4032 if some progress has been made (more input
  processed or more output produced), argv_4036 if all input has been
  consumed and all output has been produced (only when flush is set to
  argv_4022), argv_4037 if the stream argv_3604 was inconsistent (for example
  if argv_2880 or argv_2881 was argv_2889), argv_4015 if no progress is possible
  (for example argv_735 or avail_out was zero). Note that argv_4015 is not
  fatal, and argv_1171() can be called again with more input and more output
  space to continue compressing.
*/


argv_4049 int argv_4047 argv_1174 argv_2927((argv_4039 strm));
/*
     All dynamically allocated argv_1139 structures for this stream are freed.
   This function discards any unprocessed input and does not flush any
   pending output.

     argv_1174 returns argv_4032 if success, argv_4037 if the
   stream argv_3604 was inconsistent, argv_4016 if the stream was freed
   prematurely (some input or output was discarded). In the error case,
   argv_2812 may be set but then points to a static string (which must not be
   deallocated).
*/


/*
argv_4049 int argv_4047 inflateInit argv_2927((argv_4039 strm));

     Initializes the internal stream argv_3604 for decompression. The fields
   argv_2880, argv_735, argv_4044, argv_4050 and argv_2934 must be initialized before by
   the caller. If argv_2880 is not argv_4030 and argv_735 is large enough (the exact
   argv_3960 depends on the compression method), inflateInit determines the
   compression method from the zlib argv_1907 and allocates all argv_1139 structures
   accordingly; otherwise the allocation will be deferred to the first call of
   inflate.  If argv_4044 and argv_4050 are set to argv_4030, inflateInit updates them to
   use default allocation functions.

     inflateInit returns argv_4032 if success, argv_4026 if there was not enough
   memory, argv_4043 if the zlib library version is incompatible with the
   version assumed by the caller.  argv_2812 is set to null if there is no error
   argv_2389. inflateInit does not perform any decompression apart from reading
   the zlib argv_1907 if present: this will be argv_1261 by inflate().  (So argv_2880 and
   argv_735 may be modified, but argv_2881 and avail_out are unchanged.)
*/


argv_4049 int argv_4047 inflate argv_2927((argv_4039 strm, int flush));
/*
    inflate decompresses as much argv_1139 as possible, and stops when the input
  argv_771 becomes empty or the output argv_771 becomes full. It may introduce
  some output latency (reading input without producing any output) except when
  forced to flush.

  The detailed semantics are as follows. inflate performs argv_2929 or both of the
  following actions:

  - Decompress more input starting at argv_2880 and update argv_2880 and argv_735
    accordingly. If not all input can be processed (because there is not
    enough room in the output argv_771), argv_2880 is updated and processing
    will resume at this point for the next call of inflate().

  - Provide more output starting at argv_2881 and update argv_2881 and avail_out
    accordingly.  inflate() provides as much output as possible, until there
    is no more input argv_1139 or no more space in the output argv_771 (see below
    about the flush parameter).

  Before the call of inflate(), the application should ensure that at least
  argv_2929 of the actions is possible, by providing more input and/or consuming
  more output, and updating the next_* and avail_* values accordingly.
  The application can argv_1042 the uncompressed output when it wants, for
  example when the output argv_771 is full (avail_out == 0), or after each
  call of inflate(). If inflate returns argv_4032 and with zero avail_out, it
  must be called again after making room in the output argv_771 because there
  might be more output pending.

    The flush parameter of inflate() can be argv_4029, argv_4040,
  argv_4022, or argv_4014. argv_4040 requests that inflate() flush as much
  output as possible to the output argv_771. argv_4014 requests that inflate() argv_3607
  if and when it gets to the next argv_1171 argv_753 boundary. When decoding the
  zlib or gzip format, this will cause inflate() to return immediately after
  the argv_1907 and before the first argv_753. When doing a raw inflate, inflate()
  will go ahead and process the first argv_753, and will return when it gets to
  the end of that argv_753, or when it runs out of argv_1139.

    The argv_4014 option assists in appending to or combining argv_1171 streams.
  Also to assist in this, on return inflate() will set strm->argv_1140 to the
  number of unused argv_752 in the last byte taken from strm->argv_2880, plus 64
  if inflate() is currently decoding the last argv_753 in the argv_1171 stream,
  plus 128 if inflate() returned immediately after decoding an end-of-argv_753
  argv_929 or decoding the complete argv_1907 up to just before the first byte of the
  argv_1171 stream. The end-of-argv_753 will not be indicated until all of the
  uncompressed argv_1139 from that argv_753 has been written to strm->argv_2881.  The
  number of unused argv_752 may in general be greater than seven, except when
  bit 7 of argv_1140 is set, in which case the number of unused argv_752 will be
  less than eight.

    inflate() should normally be called until it returns argv_4036 or an
  error. However if all decompression is to be performed in a single step
  (a single call of inflate), the parameter flush should be set to
  argv_4022. In this case all pending input is processed and all pending
  output is flushed; avail_out must be large enough to hold all the
  uncompressed argv_1139. (The size of the uncompressed argv_1139 may have been saved
  by the compressor for this purpose.) The next operation on this stream must
  be inflateEnd to deallocate the decompression argv_3604. The use of argv_4022
  is never required, but can be used to inform inflate that a faster approach
  may be used for the single inflate() call.

     In this implementation, inflate() always flushes as much output as
  possible to the output argv_771, and always uses the faster approach on the
  first call. So the only effect of the flush parameter in this implementation
  is on the return argv_3960 of inflate(), as noted below, or when it returns early
  because argv_4014 is used.

     If a preset dictionary is needed after this call (see inflateSetDictionary
  below), inflate sets strm->argv_650 to the argv_651 checksum of the dictionary
  chosen by the compressor and returns argv_4027; otherwise it sets
  strm->argv_650 to the argv_651 checksum of all output produced so far (that is,
  argv_3837 argv_782) and returns argv_4032, argv_4036 or an error argv_929 as described
  below. At the end of the stream, inflate() checks that its computed argv_651
  checksum is equal to that saved by the compressor and returns argv_4036
  only if the checksum is correct.

    inflate() will decompress and check either zlib-wrapped or gzip-wrapped
  argv_1171 argv_1139.  The argv_1907 argv_3842 is detected automatically.  Any information
  contained in the gzip argv_1907 is not retained, so applications that need that
  information should instead use raw inflate, see inflateInit2() below, or
  inflateBack() and perform their own processing of the gzip argv_1907 and
  trailer.

    inflate() returns argv_4032 if some progress has been made (more input processed
  or more output produced), argv_4036 if the end of the compressed argv_1139 has
  been reached and all uncompressed output has been produced, argv_4027 if a
  preset dictionary is needed at this point, argv_4016 if the input argv_1139 was
  corrupted (input stream not conforming to the zlib format or incorrect check
  argv_3960), argv_4037 if the stream structure was inconsistent (for example
  if argv_2880 or argv_2881 was argv_2889), argv_4026 if there was not enough memory,
  argv_4015 if no progress is possible or if there was not enough room in the
  output argv_771 when argv_4022 is used. Note that argv_4015 is not fatal, and
  inflate() can be called again with more input and more output space to
  continue decompressing. If argv_4016 is returned, the application may then
  call inflateSync() to look for a good compression argv_753 if a partial recovery
  of the argv_1139 is desired.
*/


argv_4049 int argv_4047 inflateEnd argv_2927((argv_4039 strm));
/*
     All dynamically allocated argv_1139 structures for this stream are freed.
   This function discards any unprocessed input and does not flush any
   pending output.

     inflateEnd returns argv_4032 if success, argv_4037 if the stream argv_3604
   was inconsistent. In the error case, argv_2812 may be set but then points to a
   static string (which must not be deallocated).
*/

                        /* Advanced functions */

/*
    The following functions are needed only in some special applications.
*/

/*
argv_4049 int argv_4047 argv_1177 argv_2927((argv_4039 strm,
                                     int  level,
                                     int  method,
                                     int  windowBits,
                                     int  memLevel,
                                     int  strategy));

     This is another version of argv_1175 with more compression options. The
   fields argv_2880, argv_4044, argv_4050 and argv_2934 must be initialized before by
   the caller.

     The method parameter is the compression method. It must be argv_4019 in
   this version of the library.

     The windowBits parameter is the argv_742 two logarithm of the window size
   (the size of the history argv_771). It should be in the range 8..15 for this
   version of the library. Larger values of this parameter argv_3402 in better
   compression at the expense of memory usage. The default argv_3960 is 15 if
   argv_1175 is used instead.

     windowBits can also be -8..-15 for raw argv_1171. In this case, -windowBits
   determines the window size. argv_1171() will then generate raw argv_1171 argv_1139
   with no zlib argv_1907 or trailer, and will not compute an argv_651 check argv_3960.

     windowBits can also be greater than 15 for optional gzip encoding. Add
   16 to windowBits to write a simple gzip argv_1907 and trailer around the
   compressed argv_1139 instead of a zlib wrapper. The gzip argv_1907 will have no
   argv_1396 argv_2817, no argv_1368 argv_1139, no argv_998, no modification argv_3825 (set to zero),
   no argv_1907 crc, and the operating system will be set to 255 (unknown).  If a
   gzip stream is being written, strm->argv_650 is a argv_1072 instead of an argv_651.

     The memLevel parameter specifies how much memory should be allocated
   for the internal compression argv_3604. memLevel=1 uses minimum memory but
   is slow and reduces compression ratio; memLevel=9 uses maximum memory
   for optimal speed. The default argv_3960 is 8. See argv_239.h for total memory
   usage as a function of windowBits and memLevel.

     The strategy parameter is used to tune the compression algorithm. Use the
   argv_3960 argv_4018 for normal argv_1139, argv_4021 for argv_1139 produced by a
   filter (or predictor), argv_4025 to force Huffman encoding only (no
   string match), or argv_4034 to limit match distances to argv_2929 (argv_3414-length
   encoding). Filtered argv_1139 consists mostly of small values with a somewhat
   random distribution. In this case, the compression algorithm is tuned to
   argv_1016 them better. The effect of argv_4021 is to force more Huffman
   coding and less string matching; it is somewhat intermediate between
   Z_DEFAULT and argv_4025. argv_4034 is designed to be almost as fast as
   argv_4025, but give better compression for PNG image argv_1139. The strategy
   parameter only affects the compression ratio but not the correctness of the
   compressed output even if it is not set appropriately.  argv_4023 prevents the
   use of dynamic Huffman codes, allowing for a simpler decoder for special
   applications.

      argv_1177 returns argv_4032 if success, argv_4026 if there was not enough
   memory, argv_4037 if a parameter is invalid (such as an invalid
   method). argv_2812 is set to null if there is no error argv_2389.  argv_1177 does
   not perform any compression: this will be argv_1261 by argv_1171().
*/

argv_4049 int argv_4047 argv_1181 argv_2927((argv_4039 strm,
                                             const argv_781 *dictionary,
                                             argv_3866  dictLength));
/*
     Initializes the compression dictionary from the given byte sequence
   without producing any compressed output. This function must be called
   immediately after argv_1175, argv_1177 or deflateReset, before any
   call of argv_1171. The compressor and decompressor must use exactly the same
   dictionary (see inflateSetDictionary).

     The dictionary should consist of strings (byte sequences) that are likely
   to be encountered later in the argv_1139 to be compressed, with the most commonly
   used strings preferably put towards the end of the dictionary. Using a
   dictionary is most useful when the argv_1139 to be compressed is short and can be
   predicted with good accuracy; the argv_1139 can then be compressed better than
   with the default empty dictionary.

     Depending on the size of the compression argv_1139 structures selected by
   argv_1175 or argv_1177, a part of the dictionary may in effect be
   discarded, for example if the dictionary is larger than the window size in
   argv_1171 or deflate2. Thus the strings most likely to be useful should be
   put at the end of the dictionary, not at the argv_1704. In addition, the
   argv_1106 implementation of argv_1171 will use at most the window size minus
   262 argv_782 of the provided dictionary.

     Upon return of this function, strm->argv_650 is set to the argv_651 argv_3960
   of the dictionary; the decompressor may later use this argv_3960 to determine
   which dictionary has been used by the compressor. (The argv_651 argv_3960
   applies to the whole dictionary even if only a subset of the dictionary is
   actually used by the compressor.) If a raw argv_1171 was requested, then the
   argv_651 argv_3960 is not computed and strm->argv_650 is not set.

     argv_1181 returns argv_4032 if success, or argv_4037 if a
   parameter is invalid (such as argv_2889 dictionary) or the stream argv_3604 is
   inconsistent (for example if argv_1171 has already been called for this stream
   or if the compression method is bsort). argv_1181 does not
   perform any compression: this will be argv_1261 by argv_1171().
*/

argv_4049 int argv_4047 argv_1173 argv_2927((argv_4039 dest,
                                    argv_4039 source));
/*
     Sets the destination stream as a complete copy of the source stream.

     This function can be useful when several compression strategies will be
   tried, for example when there are several ways of pre-processing the input
   argv_1139 with a filter. The streams that will be discarded should then be freed
   by calling argv_1174.  Note that argv_1173 duplicates the internal
   compression argv_3604 which can be quite large, so this strategy is slow and
   can argv_1042 lots of memory.

     argv_1173 returns argv_4032 if success, argv_4026 if there was not
   enough memory, argv_4037 if the source stream argv_3604 was inconsistent
   (such as argv_4044 being argv_2889). argv_2812 is left unchanged in both source and
   destination.
*/

argv_4049 int argv_4047 deflateReset argv_2927((argv_4039 strm));
/*
     This function is equivalent to argv_1174 followed by argv_1175,
   but does not free and reallocate all the internal compression argv_3604.
   The stream will keep the same compression level and any other attributes
   that may have been set by argv_1177.

      deflateReset returns argv_4032 if success, or argv_4037 if the source
   stream argv_3604 was inconsistent (such as argv_4044 or argv_3604 being argv_2889).
*/

argv_4049 int argv_4047 argv_1179 argv_2927((argv_4039 strm,
                                      int level,
                                      int strategy));
/*
     Dynamically update the compression level and compression strategy.  The
   interpretation of level and strategy is as in argv_1177.  This can be
   used to switch between compression and straight copy of the input argv_1139, or
   to switch to a different kind of input argv_1139 requiring a different
   strategy. If the compression level is changed, the input available so far
   is compressed with the old level (and may be flushed); the new level will
   take effect only at the next call of argv_1171().

     Before the call of argv_1179, the stream argv_3604 must be set as for
   a call of argv_1171(), since the currently available input may have to
   be compressed and flushed. In particular, strm->avail_out must be non-zero.

     argv_1179 returns argv_4032 if success, argv_4037 if the source
   stream argv_3604 was inconsistent or if a parameter was invalid, argv_4015
   if strm->avail_out was zero.
*/

argv_4049 int argv_4047 deflateTune argv_2927((argv_4039 strm,
                                    int good_length,
                                    int max_lazy,
                                    int nice_length,
                                    int max_chain));
/*
     Fine tune argv_1171's internal compression parameters.  This should only be
   used by someone who understands the algorithm used by zlib's argv_1171 for
   searching for the best matching string, and even then only by the most
   fanatic optimizer trying to squeeze out the last compressed bit for their
   specific input argv_1139.  Read the argv_1171.c source argv_929 for the meaning of the
   max_lazy, good_length, nice_length, and max_chain parameters.

     deflateTune() can be called after argv_1175() or argv_1177(), and
   returns argv_4032 on success, or argv_4037 for an invalid argv_1171 stream.
 */

argv_4049 argv_3869 argv_4047 argv_1172 argv_2927((argv_4039 strm,
                                       argv_3869 sourceLen));
/*
     argv_1172() returns an upper bound on the compressed size after
   deflation of sourceLen argv_782.  It must be called after argv_1175()
   or argv_1177().  This would be used to allocate an output argv_771
   for deflation in a single pass, and so would be called before argv_1171().
*/

argv_4049 int argv_4047 argv_1180 argv_2927((argv_4039 strm,
                                     int argv_752,
                                     int argv_3960));
/*
     argv_1180() inserts argv_752 in the argv_1171 output stream.  The intent
  is that this function is used to argv_3601 off the argv_1171 output with the
  argv_752 leftover from a previous argv_1171 stream when appending to it.  As such,
  this function can only be used for raw argv_1171, and must be used before the
  first argv_1171() call after a argv_1177() or deflateReset().  argv_752 must be
  less than or equal to 16, and that many of the least significant argv_752 of
  argv_3960 will be inserted in the output.

      argv_1180 returns argv_4032 if success, or argv_4037 if the source
   stream argv_3604 was inconsistent.
*/

argv_4049 int argv_4047 deflateSetHeader argv_2927((argv_4039 strm,
                                         argv_1888 head));
/*
      deflateSetHeader() provides gzip argv_1907 information for when a gzip
   stream is requested by argv_1177().  deflateSetHeader() may be called
   after argv_1177() or deflateReset() and before the first call of
   argv_1171().  The argv_3776, argv_3825, argv_2944, argv_1368 field, argv_2817, and argv_998 information
   in the provided argv_1886 structure are written to the gzip argv_1907 (xflag is
   ignored -- the argv_1368 argv_1453 are set according to the compression level).  The
   caller must assure that, if not argv_4030, argv_2817 and argv_998 are terminated with
   a zero byte, and that if argv_1368 is not argv_4030, that argv_1369 argv_782 are
   available there.  If argv_1902 is true, a gzip argv_1907 crc is included.  Note that
   the argv_1106 versions of the command-argv_2173 version of gzip (up through version
   1.3.x) do not support argv_1907 crc's, and will report that it is a "multi-part
   gzip argv_1396" and give up.

      If deflateSetHeader is not used, the default gzip argv_1907 has argv_3776 false,
   the argv_3825 set to zero, and argv_2944 set to 255, with no argv_1368, argv_2817, or argv_998
   fields.  The gzip argv_1907 is returned to the default argv_3604 by deflateReset().

      deflateSetHeader returns argv_4032 if success, or argv_4037 if the source
   stream argv_3604 was inconsistent.
*/

/*
argv_4049 int argv_4047 inflateInit2 argv_2927((argv_4039 strm,
                                     int  windowBits));

     This is another version of inflateInit with an argv_1368 parameter. The
   fields argv_2880, argv_735, argv_4044, argv_4050 and argv_2934 must be initialized
   before by the caller.

     The windowBits parameter is the argv_742 two logarithm of the maximum window
   size (the size of the history argv_771).  It should be in the range 8..15 for
   this version of the library. The default argv_3960 is 15 if inflateInit is used
   instead. windowBits must be greater than or equal to the windowBits argv_3960
   provided to argv_1177() while compressing, or it must be equal to 15 if
   argv_1177() was not used. If a compressed stream with a larger window
   size is given as input, inflate() will return with the error argv_929
   argv_4016 instead of trying to allocate a larger window.

     windowBits can also be -8..-15 for raw inflate. In this case, -windowBits
   determines the window size. inflate() will then process raw argv_1171 argv_1139,
   not looking for a zlib or gzip argv_1907, not generating a check argv_3960, and not
   looking for any check values for comparison at the end of the stream. This
   is for use with other formats that use the argv_1171 compressed argv_1139 format
   such as zip.  Those formats provide their own check values. If a custom
   format is developed using the raw argv_1171 format for compressed argv_1139, it is
   recommended that a check argv_3960 such as an argv_651 or a argv_1072 be applied to
   the uncompressed argv_1139 as is argv_1261 in the zlib, gzip, and zip formats.  For
   most applications, the zlib format should be used as is. Note that comments
   above on the use in argv_1177() applies to the magnitude of windowBits.

     windowBits can also be greater than 15 for optional gzip decoding. Add
   32 to windowBits to enable zlib and gzip decoding with automatic argv_1907
   detection, or argv_616 16 to decode only the gzip format (the zlib format will
   return a argv_4016).  If a gzip stream is being decoded, strm->argv_650 is
   a argv_1072 instead of an argv_651.

     inflateInit2 returns argv_4032 if success, argv_4026 if there was not enough
   memory, argv_4037 if a parameter is invalid (such as a null strm). argv_2812
   is set to null if there is no error argv_2389.  inflateInit2 does not perform
   any decompression apart from reading the zlib argv_1907 if present: this will
   be argv_1261 by inflate(). (So argv_2880 and argv_735 may be modified, but argv_2881
   and avail_out are unchanged.)
*/

argv_4049 int argv_4047 inflateSetDictionary argv_2927((argv_4039 strm,
                                             const argv_781 *dictionary,
                                             argv_3866  dictLength));
/*
     Initializes the decompression dictionary from the given uncompressed byte
   sequence. This function must be called immediately after a call of inflate,
   if that call returned argv_4027. The dictionary chosen by the compressor
   can be determined from the argv_651 argv_3960 returned by that call of inflate.
   The compressor and decompressor must use exactly the same dictionary (see
   argv_1181).  For raw inflate, this function can be called
   immediately after inflateInit2() or inflateReset() and before any call of
   inflate() to set the dictionary.  The application must insure that the
   dictionary that was used for compression is provided.

     inflateSetDictionary returns argv_4032 if success, argv_4037 if a
   parameter is invalid (such as argv_2889 dictionary) or the stream argv_3604 is
   inconsistent, argv_4016 if the given dictionary doesn't match the
   expected argv_2929 (incorrect argv_651 argv_3960). inflateSetDictionary does not
   perform any decompression: this will be argv_1261 by subsequent calls of
   inflate().
*/

argv_4049 int argv_4047 inflateSync argv_2927((argv_4039 strm));
/*
    Skips invalid compressed argv_1139 until a full flush point (see above the
  description of argv_1171 with argv_4024) can be found, or until all
  available input is skipped. No output is provided.

    inflateSync returns argv_4032 if a full flush point has been found, argv_4015
  if no more input was provided, argv_4016 if no flush point has been found,
  or argv_4037 if the stream structure was inconsistent. In the success
  case, the application may save the argv_1106 argv_1106 argv_3960 of argv_3834 which
  indicates where valid compressed argv_1139 was found. In the error case, the
  application may repeatedly call inflateSync, providing more input each argv_3825,
  until success or end of the input argv_1139.
*/

argv_4049 int argv_4047 inflateCopy argv_2927((argv_4039 dest,
                                    argv_4039 source));
/*
     Sets the destination stream as a complete copy of the source stream.

     This function can be useful when randomly accessing a large stream.  The
   first pass through the stream can periodically record the inflate argv_3604,
   allowing restarting inflate at those points when randomly accessing the
   stream.

     inflateCopy returns argv_4032 if success, argv_4026 if there was not
   enough memory, argv_4037 if the source stream argv_3604 was inconsistent
   (such as argv_4044 being argv_2889). argv_2812 is left unchanged in both source and
   destination.
*/

argv_4049 int argv_4047 inflateReset argv_2927((argv_4039 strm));
/*
     This function is equivalent to inflateEnd followed by inflateInit,
   but does not free and reallocate all the internal decompression argv_3604.
   The stream will keep attributes that may have been set by inflateInit2.

      inflateReset returns argv_4032 if success, or argv_4037 if the source
   stream argv_3604 was inconsistent (such as argv_4044 or argv_3604 being argv_2889).
*/

argv_4049 int argv_4047 inflatePrime argv_2927((argv_4039 strm,
                                     int argv_752,
                                     int argv_3960));
/*
     This function inserts argv_752 in the inflate input stream.  The intent is
  that this function is used to argv_3601 inflating at a bit position in the
  middle of a byte.  The provided argv_752 will be used before any argv_782 are used
  from argv_2880.  This function should only be used with raw inflate, and
  should be used before the first inflate() call after inflateInit2() or
  inflateReset().  argv_752 must be less than or equal to 16, and that many of the
  least significant argv_752 of argv_3960 will be inserted in the input.

      inflatePrime returns argv_4032 if success, or argv_4037 if the source
   stream argv_3604 was inconsistent.
*/

argv_4049 int argv_4047 inflateGetHeader argv_2927((argv_4039 strm,
                                         argv_1888 head));
/*
      inflateGetHeader() requests that gzip argv_1907 information be stored in the
   provided argv_1886 structure.  inflateGetHeader() may be called after
   inflateInit2() or inflateReset(), and before the first call of inflate().
   As inflate() processes the gzip stream, head->argv_1261 is zero until the argv_1907
   is completed, at which argv_3825 head->argv_1261 is set to argv_2929.  If a zlib stream is
   being decoded, then head->argv_1261 is set to -1 to indicate that there will be
   no gzip argv_1907 information forthcoming.  Note that argv_4014 can be used to
   force inflate() to return immediately after argv_1907 processing is complete
   and before any actual argv_1139 is decompressed.

      The argv_3776, argv_3825, argv_3997, and argv_2944 fields are filled in with the gzip argv_1907
   contents.  argv_1902 is set to true if there is a argv_1907 CRC.  (The argv_1907 CRC
   was valid if argv_1261 is set to argv_2929.)  If argv_1368 is not argv_4030, then argv_1370
   contains the maximum number of argv_782 to write to argv_1368.  Once argv_1261 is true,
   argv_1369 contains the actual argv_1368 field length, and argv_1368 contains the
   argv_1368 field, or that field truncated if argv_1370 is less than argv_1369.
   If argv_2817 is not argv_4030, then up to argv_2827 characters are written there,
   terminated with a zero unless the length is greater than argv_2827.  If
   argv_998 is not argv_4030, then up to argv_997 characters are written there,
   terminated with a zero unless the length is greater than argv_997.  When
   any of argv_1368, argv_2817, or argv_998 are not argv_4030 and the respective field is
   not present in the argv_1907, then that field is set to argv_4030 to signal its
   absence.  This allows the use of deflateSetHeader() with the returned
   structure to duplicate the argv_1907.  However if those fields are set to
   allocated memory, then the application will need to save those pointers
   elsewhere so that they can be eventually freed.

      If inflateGetHeader is not used, then the argv_1907 information is simply
   discarded.  The argv_1907 is always checked for validity, including the argv_1907
   CRC if present.  inflateReset() will reset the process to discard the argv_1907
   information.  The application would need to call inflateGetHeader() again to
   retrieve the argv_1907 from the next gzip stream.

      inflateGetHeader returns argv_4032 if success, or argv_4037 if the source
   stream argv_3604 was inconsistent.
*/

/*
argv_4049 int argv_4047 inflateBackInit argv_2927((argv_4039 strm, int windowBits,
                                        unsigned char argv_1391 *window));

     Initialize the internal stream argv_3604 for decompression using inflateBack()
   calls.  The fields argv_4044, argv_4050 and argv_2934 in strm must be initialized
   before the call.  If argv_4044 and argv_4050 are argv_4030, then the default library-
   derived memory allocation routines are used.  windowBits is the argv_742 two
   logarithm of the window size, in the range 8..15.  window is a caller
   supplied argv_771 of that size.  Except for special applications where it is
   assured that argv_1171 was used with small window sizes, windowBits must be 15
   and a 32K byte window must be supplied to be able to decompress general
   argv_1171 streams.

     See inflateBack() for the usage of these routines.

     inflateBackInit will return argv_4032 on success, argv_4037 if any of
   the paramaters are invalid, argv_4026 if the internal argv_3604 could not
   be allocated, or argv_4043 if the version of the library does not
   match the version of the argv_1907 argv_1396.
*/

typedef unsigned (*in_func) argv_2927((void argv_1391 *, unsigned char argv_1391 * argv_1391 *));
typedef int (*out_func) argv_2927((void argv_1391 *, unsigned char argv_1391 *, unsigned));

argv_4049 int argv_4047 inflateBack argv_2927((argv_4039 strm,
                                    in_func in, void argv_1391 *in_desc,
                                    out_func out, void argv_1391 *out_desc));
/*
     inflateBack() does a raw inflate with a single call using a call-back
   interface for input and output.  This is more efficient than inflate() for
   argv_1396 i/o applications in that it avoids copying between the output and the
   sliding window by simply making the window itself the output argv_771.  This
   function trusts the application to not change the output argv_771 passed by
   the output function, at least until inflateBack() returns.

     inflateBackInit() must be called first to allocate the internal argv_3604
   and to initialize the argv_3604 with the user-provided window argv_771.
   inflateBack() may then be used multiple times to inflate a complete, raw
   argv_1171 stream with each call.  inflateBackEnd() is then called to free
   the allocated argv_3604.

     A raw argv_1171 stream is argv_2929 with no zlib or gzip argv_1907 or trailer.
   This routine would normally be used in a utility that reads zip or gzip
   files and writes out uncompressed files.  The utility would decode the
   argv_1907 and process the trailer on its own, hence this routine expects
   only the raw argv_1171 stream to decompress.  This is different from the
   normal behavior of inflate(), which expects either a zlib or gzip argv_1907 and
   trailer around the argv_1171 stream.

     inflateBack() uses two subroutines supplied by the caller that are then
   called by inflateBack() for input and output.  inflateBack() calls those
   routines until it reads a complete argv_1171 stream and writes out all of the
   uncompressed argv_1139, or until it encounters an error.  The function's
   parameters and return types are defined above in the in_func and out_func
   typedefs.  inflateBack() will call in(in_desc, &argv_770) which should return the
   number of argv_782 of provided input, and a pointer to that input in argv_770.  If
   there is no input available, in() must return zero--argv_770 is ignored in that
   case--and inflateBack() will return a argv_771 error.  inflateBack() will call
   out(out_desc, argv_770, len) to write the uncompressed argv_1139 argv_770[0..len-1].  out()
   should return zero on success, or non-zero on failure.  If out() returns
   non-zero, inflateBack() will return with an error.  Neither in() nor out()
   are permitted to change the contents of the window provided to
   inflateBackInit(), which is also the argv_771 that out() uses to write from.
   The length written by out() will be at most the window size.  Any non-zero
   amount of input may be provided by in().

     For convenience, inflateBack() can be provided input on the first call by
   setting strm->argv_2880 and strm->argv_735.  If that input is exhausted, then
   in() will be called.  Therefore strm->argv_2880 must be initialized before
   calling inflateBack().  If strm->argv_2880 is argv_4030, then in() will be called
   immediately for input.  If strm->argv_2880 is not argv_4030, then strm->argv_735
   must also be initialized, and then if strm->argv_735 is not zero, input will
   initially be taken from strm->argv_2880[0 .. strm->argv_735 - 1].

     The in_desc and out_desc parameters of inflateBack() is passed as the
   first parameter of in() and out() respectively when they are called.  These
   descriptors can be optionally used to pass any information that the caller-
   supplied in() and out() functions need to do their job.

     On return, inflateBack() will set strm->argv_2880 and strm->argv_735 to
   pass back any unused input that was provided by the last in() call.  The
   return values of inflateBack() can be argv_4036 on success, argv_4015
   if in() or out() returned an error, argv_4016 if there was a format
   error in the argv_1171 stream (in which case strm->argv_2812 is set to indicate the
   nature of the error), or argv_4037 if the stream was not properly
   initialized.  In the case of argv_4015, an input or output error can be
   distinguished using strm->argv_2880 which will be argv_4030 only if in() returned
   an error.  If strm->next is not argv_4030, then the argv_4015 was due to
   out() returning non-zero.  (in() will always be called before out(), so
   strm->argv_2880 is assured to be defined if out() returns non-zero.)  Note
   that inflateBack() cannot return argv_4032.
*/

argv_4049 int argv_4047 inflateBackEnd argv_2927((argv_4039 strm));
/*
     All memory allocated by inflateBackInit() is freed.

     inflateBackEnd() returns argv_4032 on success, or argv_4037 if the stream
   argv_3604 was inconsistent.
*/

argv_4049 argv_3869 argv_4047 zlibCompileFlags argv_2927((void));
/* Return argv_1453 indicating compile-argv_3825 options.

    argv_3843 sizes, two argv_752 each, 00 = 16 argv_752, 01 = 32, 10 = 64, 11 = other:
     1.0: size of argv_3866
     3.2: size of argv_3869
     5.4: size of argv_3983 (pointer)
     7.6: size of argv_4031

    Compiler, assembler, and debug options:
     8: DEBUG
     9: ASMV or ASMINF -- use ASM argv_929
     10: ZLIB_WINAPI -- exported functions use the WINAPI calling convention
     11: 0 (argv_3352)

    One-argv_3825 table building (smaller argv_929, but not thread-safe if true):
     12: BUILDFIXED -- build static argv_753 decoding tables when needed
     13: DYNAMIC_CRC_TABLE -- build CRC calculation tables when needed
     14,15: 0 (argv_3352)

    Library content (indicates missing functionality):
     16: NO_GZCOMPRESS -- gz* functions cannot argv_1016 (to avoid linking
                          argv_1171 argv_929 when not needed)
     17: NO_GZIP -- argv_1171 can't write gzip streams, and inflate can't detect
                    and decode gzip streams (to avoid linking crc argv_929)
     18-19: 0 (argv_3352)

    Operation variations (changes in library functionality):
     20: PKZIP_BUG_WORKAROUND -- slightly more permissive inflate
     21: FASTEST -- argv_1171 algorithm with only argv_2929, lowest compression level
     22,23: 0 (argv_3352)

    The sprintf variant used by gzprintf (zero is best):
     24: 0 = vs*, 1 = s* -- 1 means limited to 20 arguments after the format
     25: 0 = *nprintf, 1 = *printf -- 1 means gzprintf() not secure!
     26: 0 = returns argv_3960, 1 = void -- 1 means inferred string length returned

    Remainder:
     27-31: 0 (argv_3352)
 */


                        /* utility functions */

/*
     The following utility functions are implemented on top of the
   basic stream-oriented functions. To simplify the interface, some
   default options are assumed (compression level and memory usage,
   standard memory allocation functions). The source argv_929 of these
   utility functions can easily be modified if you need special options.
*/

argv_4049 int argv_4047 argv_1016 argv_2927((argv_781 *dest,   argv_3870 *destLen,
                                 const argv_781 *source, argv_3869 sourceLen));
/*
     Compresses the source argv_771 into the destination argv_771.  sourceLen is
   the byte length of the source argv_771. Upon entry, destLen is the total
   size of the destination argv_771, which must be at least the argv_3960 returned
   by argv_1023(sourceLen). Upon exit, destLen is the actual size of the
   compressed argv_771.
     This function can be used to argv_1016 a whole argv_1396 at once if the
   input argv_1396 is mmap'ed.
     argv_1016 returns argv_4032 if success, argv_4026 if there was not
   enough memory, argv_4015 if there was not enough room in the output
   argv_771.
*/

argv_4049 int argv_4047 argv_1022 argv_2927((argv_781 *dest,   argv_3870 *destLen,
                                  const argv_781 *source, argv_3869 sourceLen,
                                  int level));
/*
     Compresses the source argv_771 into the destination argv_771. The level
   parameter has the same meaning as in argv_1175.  sourceLen is the byte
   length of the source argv_771. Upon entry, destLen is the total size of the
   destination argv_771, which must be at least the argv_3960 returned by
   argv_1023(sourceLen). Upon exit, destLen is the actual size of the
   compressed argv_771.

     argv_1022 returns argv_4032 if success, argv_4026 if there was not enough
   memory, argv_4015 if there was not enough room in the output argv_771,
   argv_4037 if the level parameter is invalid.
*/

argv_4049 argv_3869 argv_4047 argv_1023 argv_2927((argv_3869 sourceLen));
/*
     argv_1023() returns an upper bound on the compressed size after
   argv_1016() or argv_1022() on sourceLen argv_782.  It would be used before
   a argv_1016() or argv_1022() call to allocate the destination argv_771.
*/

argv_4049 int argv_4047 argv_3891 argv_2927((argv_781 *dest,   argv_3870 *destLen,
                                   const argv_781 *source, argv_3869 sourceLen));
/*
     Decompresses the source argv_771 into the destination argv_771.  sourceLen is
   the byte length of the source argv_771. Upon entry, destLen is the total
   size of the destination argv_771, which must be large enough to hold the
   entire uncompressed argv_1139. (The size of the uncompressed argv_1139 must have
   been saved previously by the compressor and transmitted to the decompressor
   by some mechanism outside the scope of this compression library.)
   Upon exit, destLen is the actual size of the compressed argv_771.
     This function can be used to decompress a whole argv_1396 at once if the
   input argv_1396 is mmap'ed.

     argv_3891 returns argv_4032 if success, argv_4026 if there was not
   enough memory, argv_4015 if there was not enough room in the output
   argv_771, or argv_4016 if the input argv_1139 was corrupted or incomplete.
*/


typedef argv_3981 argv_1889;

argv_4049 argv_1889 argv_4047 gzopen  argv_2927((const char *path, const char *mode));
/*
     Opens a gzip (.gz) argv_1396 for reading or writing. The mode parameter
   is as in fopen ("rb" or "wb") but can also include a compression level
   ("wb9") or a strategy: 'f' for filtered argv_1139 as in "wb6f", 'h' for
   Huffman only compression as in "wb1h", or 'R' for argv_3414-length encoding
   as in "wb1R". (See the description of argv_1177 for more information
   about the strategy parameter.)

     gzopen can be used to read a argv_1396 which is not in gzip format; in this
   case gzread will directly read from the argv_1396 without decompression.

     gzopen returns argv_2889 if the argv_1396 could not be opened or if there was
   insufficient memory to allocate the (de)compression argv_3604; errno
   can be checked to distinguish the two cases (if errno is zero, the
   zlib error is argv_4026).  */

argv_4049 argv_1889 argv_4047 gzdopen  argv_2927((int fd, const char *mode));
/*
     gzdopen() associates a argv_1889 with the argv_1396 descriptor fd.  File
   descriptors are obtained from calls like open, dup, creat, pipe or
   fileno (in the argv_1396 has been previously opened with fopen).
   The mode parameter is as in gzopen.
     The next call of gzclose on the returned argv_1889 will also argv_921 the
   argv_1396 descriptor fd, just like fclose(fdopen(fd), mode) closes the argv_1396
   descriptor fd. If you want to keep fd open, use gzdopen(dup(fd), mode).
     gzdopen returns argv_2889 if there was insufficient memory to allocate
   the (de)compression argv_3604.
*/

argv_4049 int argv_4047 gzsetparams argv_2927((argv_1889 argv_1396, int level, int strategy));
/*
     Dynamically update the compression level or strategy. See the description
   of argv_1177 for the meaning of these parameters.
     gzsetparams returns argv_4032 if success, or argv_4037 if the argv_1396 was not
   opened for writing.
*/

argv_4049 int argv_4047    gzread  argv_2927((argv_1889 argv_1396, argv_3981 argv_770, unsigned len));
/*
     Reads the given number of uncompressed argv_782 from the compressed argv_1396.
   If the input argv_1396 was not in gzip format, gzread copies the given number
   of argv_782 into the argv_771.
     gzread returns the number of uncompressed argv_782 actually read (0 for
   end of argv_1396, -1 for error). */

argv_4049 int argv_4047    gzwrite argv_2927((argv_1889 argv_1396,
                                   argv_3982 argv_770, unsigned len));
/*
     Writes the given number of uncompressed argv_782 into the compressed argv_1396.
   gzwrite returns the number of uncompressed argv_782 actually written
   (0 in case of error).
*/

argv_4049 int argv_4048   gzprintf argv_2927((argv_1889 argv_1396, const char *format, ...));
/*
     Converts, formats, and writes the args to the compressed argv_1396 under
   control of the format string, as in fprintf. gzprintf returns the number of
   uncompressed argv_782 actually written (0 in case of error).  The number of
   uncompressed argv_782 written is limited to 4095. The caller should assure that
   this limit is not exceeded. If it is exceeded, then gzprintf() will return
   return an error (0) with nothing written. In this case, there may also be a
   argv_771 overflow with unpredictable consequences, which is possible only if
   zlib was compiled with the insecure functions sprintf() or vsprintf()
   because the secure argv_3548() or vsnprintf() functions were not available.
*/

argv_4049 int argv_4047 gzputs argv_2927((argv_1889 argv_1396, const char *s));
/*
      Writes the given null-terminated string to the compressed argv_1396, excluding
   the terminating null character.
      gzputs returns the number of characters written, or -1 in case of error.
*/

argv_4049 char * argv_4047 gzgets argv_2927((argv_1889 argv_1396, char *argv_770, int len));
/*
      Reads argv_782 from the compressed argv_1396 until len-1 characters are read, or
   a newline character is read and transferred to argv_770, or an end-of-argv_1396
   condition is encountered.  The string is then terminated with a null
   character.
      gzgets returns argv_770, or argv_4030 in case of error.
*/

argv_4049 int argv_4047    gzputc argv_2927((argv_1889 argv_1396, int c));
/*
      Writes c, converted to an unsigned char, into the compressed argv_1396.
   gzputc returns the argv_3960 that was written, or -1 in case of error.
*/

argv_4049 int argv_4047    gzgetc argv_2927((argv_1889 argv_1396));
/*
      Reads argv_2929 byte from the compressed argv_1396. gzgetc returns this byte
   or -1 in case of end of argv_1396 or error.
*/

argv_4049 int argv_4047    gzungetc argv_2927((int c, argv_1889 argv_1396));
/*
      Push argv_2929 character back onto the stream to be read again later.
   Only argv_2929 character of push-back is allowed.  gzungetc() returns the
   character pushed, or -1 on failure.  gzungetc() will fail if a
   character has been pushed but not read yet, or if c is -1. The pushed
   character will be discarded if the stream is repositioned with gzseek()
   or gzrewind().
*/

argv_4049 int argv_4047    gzflush argv_2927((argv_1889 argv_1396, int flush));
/*
     Flushes all pending output into the compressed argv_1396. The parameter
   flush is as in the argv_1171() function. The return argv_3960 is the zlib
   error number (see function gzerror below). gzflush returns argv_4032 if
   the flush parameter is argv_4022 and all output could be flushed.
     gzflush should be called only when strictly necessary because it can
   degrade compression.
*/

argv_4049 argv_4031 argv_4047    gzseek argv_2927((argv_1889 argv_1396,
                                      argv_4031 offset, int whence));
/*
      Sets the starting position for the next gzread or gzwrite on the
   given compressed argv_1396. The offset represents a number of argv_782 in the
   uncompressed argv_1139 stream. The whence parameter is defined as in lseek(2);
   the argv_3960 SEEK_END is not supported.
     If the argv_1396 is opened for reading, this function is emulated but can be
   extremely slow. If the argv_1396 is opened for writing, only forward seeks are
   supported; gzseek then compresses a sequence of zeroes up to the new
   starting position.

      gzseek returns the resulting offset location as measured in argv_782 from
   the beginning of the uncompressed stream, or -1 in case of error, in
   particular if the argv_1396 is opened for writing and the new starting position
   would be before the argv_1106 position.
*/

argv_4049 int argv_4047    gzrewind argv_2927((argv_1889 argv_1396));
/*
     Rewinds the given argv_1396. This function is supported only for reading.

   gzrewind(argv_1396) is equivalent to (int)gzseek(argv_1396, 0L, SEEK_SET)
*/

argv_4049 argv_4031 argv_4047    gztell argv_2927((argv_1889 argv_1396));
/*
     Returns the starting position for the next gzread or gzwrite on the
   given compressed argv_1396. This position represents a number of argv_782 in the
   uncompressed argv_1139 stream.

   gztell(argv_1396) is equivalent to gzseek(argv_1396, 0L, SEEK_CUR)
*/

argv_4049 int argv_4047 gzeof argv_2927((argv_1889 argv_1396));
/*
     Returns 1 when EOF has previously been detected reading the given
   input stream, otherwise zero.
*/

argv_4049 int argv_4047 gzdirect argv_2927((argv_1889 argv_1396));
/*
     Returns 1 if argv_1396 is being read directly without decompression, otherwise
   zero.
*/

argv_4049 int argv_4047    gzclose argv_2927((argv_1889 argv_1396));
/*
     Flushes all pending output if necessary, closes the compressed argv_1396
   and deallocates all the (de)compression argv_3604. The return argv_3960 is the zlib
   error number (see function gzerror below).
*/

argv_4049 const char * argv_4047 gzerror argv_2927((argv_1889 argv_1396, int *errnum));
/*
     Returns the error argv_2389 for the last error which occurred on the
   given compressed argv_1396. errnum is set to zlib error number. If an
   error occurred in the argv_1396 system and not in the compression library,
   errnum is set to argv_4020 and the application may consult errno
   to get the exact error argv_929.
*/

argv_4049 void argv_4047 gzclearerr argv_2927((argv_1889 argv_1396));
/*
     Clears the error and end-of-argv_1396 argv_1453 for argv_1396. This is analogous to the
   clearerr() function in stdio. This is useful for continuing to read a gzip
   argv_1396 that is being written concurrently.
*/

                        /* checksum functions */

/*
     These functions are not related to compression but are exported
   anyway because they might be useful in applications using the
   compression library.
*/

argv_4049 argv_3869 argv_4047 argv_651 argv_2927((argv_3869 argv_650, const argv_781 *argv_770, argv_3866 len));
/*
     Update a running Adler-32 checksum with the argv_782 argv_770[0..len-1] and
   return the updated checksum. If argv_770 is argv_2889, this function returns
   the required initial argv_3960 for the checksum.
   An Adler-32 checksum is almost as reliable as a CRC32 but can be computed
   much faster. Usage example:

     argv_3869 argv_650 = argv_651(0L, argv_4030, 0);

     while (read_buffer(argv_771, length) != EOF) {
       argv_650 = argv_651(argv_650, argv_771, length);
     }
     if (argv_650 != original_adler) error();
*/

argv_4049 argv_3869 argv_4047 adler32_combine argv_2927((argv_3869 adler1, argv_3869 adler2,
                                          argv_4031 len2));
/*
     Combine two Adler-32 checksums into argv_2929.  For two sequences of argv_782, seq1
   and seq2 with lengths len1 and len2, Adler-32 checksums were calculated for
   each, adler1 and adler2.  adler32_combine() returns the Adler-32 checksum of
   seq1 and seq2 concatenated, requiring only adler1, adler2, and len2.
*/

argv_4049 argv_3869 argv_4047 argv_1072   argv_2927((argv_3869 crc, const argv_781 *argv_770, argv_3866 len));
/*
     Update a running CRC-32 with the argv_782 argv_770[0..len-1] and return the
   updated CRC-32. If argv_770 is argv_2889, this function returns the required initial
   argv_3960 for the for the crc. Pre- and post-conditioning (argv_2929's complement) is
   performed within this function so it shouldn't be argv_1261 by the application.
   Usage example:

     argv_3869 crc = argv_1072(0L, argv_4030, 0);

     while (read_buffer(argv_771, length) != EOF) {
       crc = argv_1072(crc, argv_771, length);
     }
     if (crc != original_crc) error();
*/

argv_4049 argv_3869 argv_4047 crc32_combine argv_2927((argv_3869 crc1, argv_3869 crc2, argv_4031 len2));

/*
     Combine two CRC-32 check values into argv_2929.  For two sequences of argv_782,
   seq1 and seq2 with lengths len1 and len2, CRC-32 check values were
   calculated for each, crc1 and crc2.  crc32_combine() returns the CRC-32
   check argv_3960 of seq1 and seq2 concatenated, requiring only crc1, crc2, and
   len2.
*/


                        /* various hacks, don't look :) */

/* argv_1175 and inflateInit are macros to allow checking the zlib version
 * and the compiler's view of argv_4035:
 */
argv_4049 int argv_4047 argv_1176 argv_2927((argv_4039 strm, int level,
                                     const char *version, int stream_size));
argv_4049 int argv_4047 inflateInit_ argv_2927((argv_4039 strm,
                                     const char *version, int stream_size));
argv_4049 int argv_4047 argv_1178 argv_2927((argv_4039 strm, int  level, int  method,
                                      int windowBits, int memLevel,
                                      int strategy, const char *version,
                                      int stream_size));
argv_4049 int argv_4047 inflateInit2_ argv_2927((argv_4039 strm, int  windowBits,
                                      const char *version, int stream_size));
argv_4049 int argv_4047 inflateBackInit_ argv_2927((argv_4039 strm, int windowBits,
                                         unsigned char argv_1391 *window,
                                         const char *version,
                                         int stream_size));
#define argv_1175(strm, level) \
        argv_1176((strm), (level),       argv_4054, sizeof(argv_4035))
#define inflateInit(strm) \
        inflateInit_((strm),                argv_4054, sizeof(argv_4035))
#define argv_1177(strm, level, method, windowBits, memLevel, strategy) \
        argv_1178((strm),(level),(method),(windowBits),(memLevel),\
                      (strategy),           argv_4054, sizeof(argv_4035))
#define inflateInit2(strm, windowBits) \
        inflateInit2_((strm), (windowBits), argv_4054, sizeof(argv_4035))
#define inflateBackInit(strm, windowBits, window) \
        inflateBackInit_((strm), (windowBits), (window), \
        argv_4054, sizeof(argv_4035))


#if !defined(ZUTIL_H) && !defined(argv_2883)
    struct internal_state {int argv_1267;}; /* hack for buggy compilers */
#endif

argv_4049 const char   * argv_4047 argv_4046           argv_2927((int));
argv_4049 int            argv_4047 inflateSyncPoint argv_2927((argv_4039 z));
argv_4049 const argv_3870 * argv_4047 argv_1739    argv_2927((void));

#ifdef __cplusplus
}
#endif

#endif /* argv_4051 */
