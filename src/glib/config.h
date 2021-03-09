/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* define if asm blocks can use numeric local labels */
/* #undef ASM_NUMERIC_LABELS */

/* poll doesn't work on devices */
/* #undef BROKEN_POLL */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Whether to disable memory pools */
/* #undef DISABLE_MEM_POOLS */

/* Whether to enable GC friendliness by default */
/* #undef ENABLE_GC_FRIENDLY_DEFAULT */

/* always defined to indicate that i18n is enabled */
/* #undef ENABLE_NLS */

/* Define the gettext package to be used */
#define GETTEXT_PACKAGE "NO_GETTEXT!"

/* Define to the GLIB binary age */
#define GLIB_BINARY_AGE 1504

/* Byte contents of gmutex */
/* #undef GLIB_BYTE_CONTENTS_GMUTEX */

/* Define to the GLIB interface age */
#define GLIB_INTERFACE_AGE 0

/* Define the location where the catalogs will be installed */
/* #undef GLIB_LOCALE_DIR */

/* Define to the GLIB major version */
#define GLIB_MAJOR_VERSION 2

/* Define to the GLIB micro version */
#define GLIB_MICRO_VERSION 4

/* Define to the GLIB minor version */
#define GLIB_MINOR_VERSION 15

/* The size of gmutex, as computed by sizeof. */
/* #undef GLIB_SIZEOF_GMUTEX */

/* The size of system_thread, as computed by sizeof. */
#define GLIB_SIZEOF_SYSTEM_THREAD 4

/* alpha atomic implementation */
/* #undef G_ATOMIC_ALPHA */

/* arm atomic implementation */
/* #undef G_ATOMIC_ARM */

/* i486 atomic implementation */
/* #undef G_ATOMIC_I486 */

/* ia64 atomic implementation */
/* #undef G_ATOMIC_IA64 */

/* powerpc atomic implementation */
/* #undef G_ATOMIC_POWERPC */

/* s390 atomic implementation */
/* #undef G_ATOMIC_S390 */

/* sparcv9 atomic implementation */
/* #undef G_ATOMIC_SPARCV9 */

/* x86_64 atomic implementation */
/* #undef G_ATOMIC_X86_64 */

/* Have inline keyword */
#define G_HAVE_INLINE 1

/* Have __inline keyword */
#define G_HAVE___INLINE 1

/* Have __inline__ keyword */
#define G_HAVE___INLINE__ 1

/* Source file containing theread implementation */
#define G_THREAD_SOURCE "gthread-no.c"

/* A 'va_copy' style function */
#define G_VA_COPY va_copy

/* 'va_lists' cannot be copies as values */
/* #undef G_VA_COPY_AS_ARRAY */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the `atexit' function. */
#define HAVE_ATEXIT 1

/* Define to 1 if you have the <attr/xattr.h> header file. */
/* #undef HAVE_ATTR_XATTR_H */

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
/* #undef HAVE_BIND_TEXTDOMAIN_CODESET */

/* Define if you have a version of the snprintf function with semantics as
   specified by the ISO C99 standard. */
/* #undef HAVE_C99_SNPRINTF */

/* Define if you have a version of the vsnprintf function with semantics as
   specified by the ISO C99 standard. */
/* #undef HAVE_C99_VSNPRINTF */

/* define to 1 if Carbon is available */
/* #undef HAVE_CARBON */

/* Define to 1 if you have the `chown' function. */
/* #undef HAVE_CHOWN */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Have nl_langinfo (CODESET) */
#define HAVE_CODESET 1

/* Define to 1 if you have the <crt_externs.h> header file. */
/* #undef HAVE_CRT_EXTERNS_H */

/* Define to 1 if you have the `dcgettext' function. */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* define for working do while(0) macros */
#define HAVE_DOWHILE_MACROS 1

/* Define to 1 if you have the `endmntent' function. */
/* #undef HAVE_ENDMNTENT */

/* Define if we have FAM */
/* #undef HAVE_FAM */

/* Define to 1 if you have the <fam.h> header file. */
/* #undef HAVE_FAM_H */

/* Define if we have FAMNoExists in fam */
/* #undef HAVE_FAM_NO_EXISTS */

/* Define to 1 if you have the `fchmod' function. */
/* #undef HAVE_FCHMOD */

/* Define to 1 if you have the `fchown' function. */
/* #undef HAVE_FCHOWN */

/* Define to 1 if you have the `fdwalk' function. */
/* #undef HAVE_FDWALK */

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the <fstab.h> header file. */
/* #undef HAVE_FSTAB_H */

/* Define to 1 if you have the `getcwd' function. */
/* #undef HAVE_GETCWD */

/* Define to 1 if you have the `getc_unlocked' function. */
#define HAVE_GETC_UNLOCKED 1

/* Define to 1 if you have the `getgrgid' function. */
/* #undef HAVE_GETGRGID */

/* Define to 1 if you have the `getmntinfo' function. */
/* #undef HAVE_GETMNTINFO */

/* Define to 1 if you have the `getpagesize' function. */
/* #undef HAVE_GETPAGESIZE */

/* Define to 1 if you have the `getpwuid' function. */
/* #undef HAVE_GETPWUID */

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* define to use system printf */
#define HAVE_GOOD_PRINTF 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define to 1 if you have the `hasmntopt' function. */
/* #undef HAVE_HASMNTOPT */

/* define to support printing 64-bit integers with format I64 */
/* #undef HAVE_INT64_AND_I64 */

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#define HAVE_LANGINFO_CODESET 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define to 1 if you have the `lchown' function. */
/* #undef HAVE_LCHOWN */

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `link' function. */
#define HAVE_LINK 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* Define if you have the 'long double' type. */
#define HAVE_LONG_DOUBLE 1

/* Define if you have the 'long long' type. */
#define HAVE_LONG_LONG 1

/* define if system printf can print long long */
/* #undef HAVE_LONG_LONG_FORMAT */

/* Define to 1 if you have the `lstat' function. */
/* #undef HAVE_LSTAT */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the `memalign' function. */
#define HAVE_MEMALIGN 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have a working `mmap' system call. */
/* #undef HAVE_MMAP */

/* Define to 1 if you have the <mntent.h> header file. */
/* #undef HAVE_MNTENT_H */

/* Have a monotonic clock */
#define HAVE_MONOTONIC_CLOCK 1

/* Define to 1 if you have the `nanosleep' function. */
/* #undef HAVE_NANOSLEEP */

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Have non-POSIX function getgrgid_r */
/* #undef HAVE_NONPOSIX_GETGRGID_R */

/* Have non-POSIX function getpwuid_r */
/* #undef HAVE_NONPOSIX_GETPWUID_R */

/* Define to 1 if you have the `nsleep' function. */
/* #undef HAVE_NSLEEP */

/* Define to 1 if you have the `on_exit' function. */
#define HAVE_ON_EXIT 1

/* Define to 1 if you have the `poll' function. */
/* #undef HAVE_POLL */

/* Have POSIX function getgrgid_r */
/* #undef HAVE_POSIX_GETGRGID_R */

/* Have POSIX function getpwuid_r */
/* #undef HAVE_POSIX_GETPWUID_R */

/* Define to 1 if you have the `posix_memalign' function. */
/* #undef HAVE_POSIX_MEMALIGN */

/* Have function pthread_attr_setstacksize */
/* #undef HAVE_PTHREAD_ATTR_SETSTACKSIZE */

/* Define to 1 if the system has the type `ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `readlink' function. */
/* #undef HAVE_READLINK */

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if libselinux is available */
/* #undef HAVE_SELINUX */

/* Define to 1 if you have the <selinux/selinux.h> header file. */
/* #undef HAVE_SELINUX_SELINUX_H */

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setmntent' function. */
/* #undef HAVE_SETMNTENT */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `statfs' function. */
/* #undef HAVE_STATFS */

/* Define to 1 if you have the `statvfs' function. */
/* #undef HAVE_STATVFS */

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
#define HAVE_STPCPY 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Have functions strlcpy and strlcat */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if `st_atimensec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMENSEC */

/* Define to 1 if `st_atim.tv_nsec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC */

/* Define to 1 if `st_blksize' is member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1

/* Define to 1 if `st_blocks' is member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLOCKS 1

/* Define to 1 if `st_ctimensec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_CTIMENSEC */

/* Define to 1 if `st_ctim.tv_nsec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_CTIM_TV_NSEC */

/* Define to 1 if `st_mtimensec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIMENSEC */

/* Define to 1 if `st_mtim.tv_nsec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC */

/* Define to 1 if you have the `symlink' function. */
/* #undef HAVE_SYMLINK */

/* Define to 1 if you have the <sys/inotify.h> header file. */
/* #undef HAVE_SYS_INOTIFY_H */

/* Define to 1 if you have the <sys/mntctl.h> header file. */
/* #undef HAVE_SYS_MNTCTL_H */

/* Define to 1 if you have the <sys/mnttab.h> header file. */
/* #undef HAVE_SYS_MNTTAB_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
/* #undef HAVE_SYS_MOUNT_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
/* #undef HAVE_SYS_POLL_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */

/* found fd_set in sys/select.h */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/statfs.h> header file. */
/* #undef HAVE_SYS_STATFS_H */

/* Define to 1 if you have the <sys/statvfs.h> header file. */
/* #undef HAVE_SYS_STATVFS_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
/* #undef HAVE_SYS_SYSCTL_H */

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/vfstab.h> header file. */
/* #undef HAVE_SYS_VFSTAB_H */

/* Define to 1 if you have the <sys/vfs.h> header file. */
/* #undef HAVE_SYS_VFS_H */

/* Define to 1 if you have the <sys/vmount.h> header file. */
/* #undef HAVE_SYS_VMOUNT_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <sys/xattr.h> header file. */
/* #undef HAVE_SYS_XATTR_H */

/* Define to 1 if you have the `timegm' function. */
/* #undef HAVE_TIMEGM */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if your printf function family supports positional parameters as
   specified by Unix98. */
/* #undef HAVE_UNIX98_PRINTF */

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if you have the `utimes' function. */
/* #undef HAVE_UTIMES */

/* Define to 1 if you have the `valloc' function. */
#define HAVE_VALLOC 1

/* Define to 1 if you have the <values.h> header file. */
/* #undef HAVE_VALUES_H */

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Have a working bcopy */
/* #undef HAVE_WORKING_BCOPY */

/* Define to 1 if xattr is available */
/* #undef HAVE_XATTR */

/* Define to 1 if xattr API uses XATTR_NOFOLLOW */
/* #undef HAVE_XATTR_NOFOLLOW */

/* Define to 1 if you have the `_NSGetEnviron' function. */
/* #undef HAVE__NSGETENVIRON */

/* Do we cache iconv descriptors */
/* #undef NEED_ICONV_CACHE */

/* didn't find fd_set */
/* #undef NO_FD_SET */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* global 'sys_errlist' not found */
#define NO_SYS_ERRLIST 1

/* global 'sys_siglist' not found */
#define NO_SYS_SIGLIST 1

/* global 'sys_siglist' not declared */
#define NO_SYS_SIGLIST_DECL 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugzilla.gnome.org/enter_bug.cgi?product=glib"

/* Define to the full name of this package. */
#define PACKAGE_NAME "glib"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "glib 2.15.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "glib"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.15.4"

/* Maximum POSIX RT priority */
/* #undef POSIX_MAX_PRIORITY */

/* define if posix_memalign() can allocate any size */
/* #undef POSIX_MEMALIGN_WITH_COMPLIANT_ALLOCS */

/* Minimum POSIX RT priority */
/* #undef POSIX_MIN_PRIORITY */

/* The POSIX RT yield function */
/* #undef POSIX_YIELD_FUNC */

/* whether realloc (NULL,) works */
#define REALLOC_0_WORKS 1

/* Define if you have correct malloc prototypes */
/* #undef SANE_MALLOC_PROTOS */

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 4

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 4

/* The size of `__int64', as computed by sizeof. */
#define SIZEOF___INT64 0

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Number of arguments to statfs() */
/* #undef STATFS_ARGS */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Using GNU libiconv */
#define USE_LIBICONV_GNU 1

/* Using a native implementation of iconv in a separate library */
/* #undef USE_LIBICONV_NATIVE */

/* using the system-supplied PCRE library */
/* #undef USE_SYSTEM_PCRE */

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to long or long long if <inttypes.h> and <stdint.h> don't define. */
/* #undef intmax_t */

/* Define to empty if the C compiler doesn't support this keyword. */
/* #undef signed */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

