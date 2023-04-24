dnl Process this file with autoconf to produce a configure script.
AC_INIT(GNU Indent, 2.2.7, bug-indent@gnu.org)
AC_CONFIG_SRCDIR(src/indent.c)
AC_CONFIG_AUX_DIR(config)
AM_INIT_AUTOMAKE(indent, 2.2.7)
AM_CONFIG_HEADER(config.h)

AM_MAINTAINER_MODE

dnl Checks for programs.
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL

AC_AIX
AC_MINIX

dnl Checks for UNIX variants that set DEFS,
AC_ISC_POSIX

dnl Checks for compiler output filename suffixes.
AC_EXEEXT
AC_OBJEXT

dnl Checks for typedefs, structures, and compiler characteristics.
dnl AM_C_PROTOTYPES
AC_C_CONST

dnl Check for tools needed for formatting the documentation.
ac_aux_dir_abs=`cd $ac_aux_dir && pwd`
AC_PATH_PROG(DVIPS, dvips, $ac_aux_dir_abs/missing dvips)
AC_PATH_PROG(TEXI2PDF, texi2pdf, $ac_aux_dir_abs/missing texi2pdf)
AC_PATH_PROG(TEXI2HTML, texi2html, $ac_aux_dir_abs/missing texi2html)

dnl Needed for the gettext support:
ALL_LINGUAS="zh_TW.Big5"
dnl These are the only lines required to internationalize the package.
dnl (OK, not quite, the AC_OUTPUT has also some parts.)
AM_GNU_GETTEXT

AC_DEFINE(HAVE_CATGETS)
AC_DEFINE(ENABLE_NLS)
AC_DEFINE(HAVE_LC_MESSAGES)
AC_DEFINE(HAVE_STPCPY)
localedir=${datadir}/locale
AC_SUBST(localedir)

AC_HEADER_STDC
AC_CHECK_FUNCS(strchr memcpy memmove utime)
AC_CHECK_HEADERS(unistd.h string.h malloc.h utime.h sys/utime.h)

if test "$ac_cv_func_utime" = yes ; then
if test "$ac_cv_header_utime_h" = yes ; then
indent_UTIMBUF
fi
fi

AC_HEADER_DIRENT

AC_OUTPUT([
Makefile
src/Makefile
doc/Makefile
man/Makefile
po/Makefile.in
intl/Makefile],
[touch Makefile.in
sed -e "/POTFILES =/r po/POTFILES" po/Makefile.in > po/Makefile])
