/* src/rrd_config.h.  Generated from rrd_config.h.in by configure.  */
/* src/rrd_config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef RRD_CONFIG_H
#define RRD_CONFIG_H

/* IEEE can be prevented from raising signals with fpsetmask(0) */
/* #undef MUST_DISABLE_FPMASK */

/* IEEE math only works if SIGFPE gets actively set to IGNORE */
/* #undef MUST_DISABLE_SIGFPE */

/* realloc does not support NULL as argument */
/* #undef NO_NULL_REALLOC */

/* lets enable madvise defines in NetBSD */
#if defined(__NetBSD__)
# if !defined(_NETBSD_SOURCE)
#  define _NETBSD_SOURCE
# endif
#endif



/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* disable flock calls in rrdtool */
/* #undef DISABLE_FLOCK */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* set to 1 if msync with MS_ASYNC fails to update mtime */
#define HAVE_BROKEN_MS_ASYNC 1

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `chdir' function. */
/* #undef HAVE_CHDIR */

/* Define to 1 if you have the `chroot' function. */
/* #undef HAVE_CHROOT */

/* Define to 1 if you have the `class' function. */
/* #undef HAVE_CLASS */

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the declaration of `madvise', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MADVISE */

/* Define to 1 if you have the declaration of `posix_fadvise', and to 0 if you
   don't. */
#define HAVE_DECL_POSIX_FADVISE 0

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_DIRENT_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdatasync' function. */
/* #undef HAVE_FDATASYNC */

/* Define to 1 if you have the <features.h> header file. */
/* #undef HAVE_FEATURES_H */

/* Define to 1 if you have the `finite' function. */
/* #undef HAVE_FINITE */

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `fpclass' function. */
/* #undef HAVE_FPCLASS */

/* Define to 1 if you have the `fpclassify' function. */
#define HAVE_FPCLASSIFY 1

/* Define to 1 if you have the `fp_class' function. */
/* #undef HAVE_FP_CLASS */

/* Define to 1 if you have the <fp_class.h> header file. */
/* #undef HAVE_FP_CLASS_H */

/* Define to 1 if you have the `fsync' function. */
/* #undef HAVE_FSYNC */

/* Define to 1 if you have the `getaddrinfo' function. */
/* #undef HAVE_GETADDRINFO */

/* Define to 1 if you have the `getgid' function. */
/* #undef HAVE_GETGID */

/* Define to 1 if you have the `getgrnam' function. */
/* #undef HAVE_GETGRNAM */

/* Define to 1 if you have the `getpagesize' function. */
/* #undef HAVE_GETPAGESIZE */

/* Define to 1 if you have the `getpwnam' function. */
/* #undef HAVE_GETPWNAM */

/* Define to 1 if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getuid' function. */
/* #undef HAVE_GETUID */

/* Define to 1 if you have the `get_current_dir_name' function. */
/* #undef HAVE_GET_CURRENT_DIR_NAME */

/* Define to 1 if you have the <glob.h> header file. */
#define HAVE_GLOB_H 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* our glib has g_regex_new */
#define HAVE_G_REGEX_NEW 1

/* Define to 1 if you have the `hosts_access' function. */
/* #undef HAVE_HOSTS_ACCESS */

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <ieeefp.h> header file. */
#define HAVE_IEEEFP_H 1

/* Define to 1 if the system has the type `intmax_t'. */
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isfinite' function. */
#define HAVE_ISFINITE 1

/* Define to 1 if you have the `isinf' function. */
#define HAVE_ISINF 1

/* Define to 1 if you have the `isnan' function. */
#define HAVE_ISNAN 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* have got libdbi installed */
/* #undef HAVE_LIBDBI */

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* have got librados installed */
/* #undef HAVE_LIBRADOS */

/* have got libwrap installed */
/* #undef HAVE_LIBWRAP */

/* Define to 1 if you have the `localeconv' function. */
#define HAVE_LOCALECONV 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if the system has the type `long double'. */
#define HAVE_LONG_DOUBLE 1

/* Define to 1 if the system has the type `long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the <lualib.h> header file. */
/* #undef HAVE_LUALIB_H */

/* Define to 1 if you have the <lua.h> header file. */
/* #undef HAVE_LUA_H */

/* Define to 1 if you have the `madvise' function. */
/* #undef HAVE_MADVISE */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the `mbstowcs' function. */
#define HAVE_MBSTOWCS 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Define to 1 if you have the `mmap' function. */
/* #undef HAVE_MMAP */

/* Define to 1 if you have the `munmap' function. */
/* #undef HAVE_MUNMAP */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if you have the `opendir' function. */
/* #undef HAVE_OPENDIR */

/* Define to 1 if you have the `pango_font_map_create_context' function. */
/* #undef HAVE_PANGO_FONT_MAP_CREATE_CONTEXT */

/* we have pcre to replace missing regexp support form glib */
//#define HAVE_PCRE_COMPILE 1

/* Define to 1 if you have the `posix_fadvise' function. */
/* #undef HAVE_POSIX_FADVISE */

/* Define to 1 if you have the `posix_fallocate' function. */
/* #undef HAVE_POSIX_FALLOCATE */

/* Define to 1 if you have the `posix_madvise' function. */
/* #undef HAVE_POSIX_MADVISE */

/* Define if you have POSIX threads libraries and header files. */
/* #undef HAVE_PTHREAD */

/* Define to 1 if the system has the type `ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `readdir' function. */
/* #undef HAVE_READDIR */

/* is rrd_graph supported by this install */
/* #undef HAVE_RRD_GRAPH */

/* is rrd_restore supported by this install */
/* #undef HAVE_RRD_RESTORE */

/* Define to 1 if you have the `setgid' function. */
/* #undef HAVE_SETGID */

/* Define to 1 if you have the `setuid' function. */
/* #undef HAVE_SETUID */

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* have two argument posix sigwait */
#define HAVE_SIGWAIT 1

/* Define to 1 if you have the `sigwaitinfo' function. */
/* #undef HAVE_SIGWAITINFO */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `socket' function. */
/* #undef HAVE_SOCKET */

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if `decimal_point' is a member of `struct lconv'. */
#define HAVE_STRUCT_LCONV_DECIMAL_POINT 1

/* Define to 1 if `thousands_sep' is a member of `struct lconv'. */
#define HAVE_STRUCT_LCONV_THOUSANDS_SEP 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* is there an external timezone variable instead ? */
#define HAVE_TIMEZONE 1

/* does tm have a tm_gmtoff member */
/* #undef HAVE_TM_GMTOFF */

/* Define to 1 if you have the `tzset' function. */
#define HAVE_TZSET 1

/* Define to 1 if the system has the type `uintmax_t'. */
#define HAVE_UINTMAX_T 1

/* Define to 1 if the system has the type `uintptr_t'. */
#define HAVE_UINTPTR_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the <varargs.h> header file. */
/* #undef HAVE_VARARGS_H */

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `va_copy' function or macro. */
/* #undef HAVE_VA_COPY */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `_NL_TIME_WEEK_1STDAY' function. */
/* #undef HAVE__NL_TIME_WEEK_1STDAY */

/* Define to 1 if you have the `__va_copy' function or macro. */
/* #undef HAVE___VA_COPY */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "rrdtool"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "rrdtool"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "rrdtool 1.7.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "rrdtool"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.7.2"

#define NUMVERS 1.7002

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Vertical label angle: -90.0 (default) or 90.0 */
#define RRDGRAPH_YLEGEND_ANGLE 90.0

/* The size of `long int', as computed by sizeof. */
#define SIZEOF_LONG_INT 4

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 4

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* the real name of tm_gmtoff */
/* #undef TM_GMTOFF */

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "1.7.2"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to rpl_asprintf if the replacement function should be used. */
/* #undef XXXasprintf */

/* Define to rpl_snprintf if the replacement function should be used. */
#define XXXsnprintf XXXrpl_snprintf

/* Define to rpl_vasprintf if the replacement function should be used. */
/* #undef XXXvasprintf */

/* Define to rpl_vsnprintf if the replacement function should be used. */
#define XXXvsnprintf XXXrpl_vsnprintf

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to the widest signed integer type if <stdint.h> and <inttypes.h> do
   not define. */
/* #undef intmax_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to the widest unsigned integer type if <stdint.h> and <inttypes.h>
   do not define. */
/* #undef uintmax_t */

/* Define to the type of an unsigned integer type wide enough to hold a
   pointer, if such a type exists, and if the system does not define it. */
/* #undef uintptr_t */

#ifdef ESP32
#define PF_UNIX AF_UNIX
#endif

#ifdef MUST_HAVE_MALLOC_MALLOC_H
#  include <malloc/malloc.h>
#endif

#include "rrd_config_bottom.h"

#endif

