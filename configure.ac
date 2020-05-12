AC_INIT([libcowsay], [0.0], [laurence.a.maddox@gmail.com])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AM_PROG_AR
LT_INIT([])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 src/Makefile
# src/laden2
])

AC_ARG_ENABLE([use-submodules],
    AS_HELP_STRING([--enable-use-submodules], [Enable use submodules]))
AM_CONDITIONAL([USE_SUBMODULES], [test x"$enable_use_submodules" = "xyes"])

AC_CONFIG_MACRO_DIR([m4])
#AC_CONFIG_SUBDIRS([glitter])

AC_CHECK_HEADERS([stdio.h stdlib.h string.h sys/types.h])
AC_CHECK_HEADERS([glitter.h])

AC_CHECK_LIB([stdlib],[snprintf])
#AC_SEARCH_LIBS([snprintf],[stdlib],[],[])

srcdir = @srcdir@
LIBCOWSAY_LIBADD="`PATH=$(srcdir)src:$PATH libcowsay_config --libs`"
AC_SUBST(LIBCOWSAY_LIBADD)

COWSAY_LIBADD="`PATH=$(srcdir)src:$PATH cowsay_config --libs`"
AC_SUBST(COWSAY_LIBADD)

LADEN_LIBADD="`PATH=$(srcdir)src:$PATH laden_config --libs`"
AC_SUBST(LADEN_LIBADD)

ZELDA_LIBADD="`PATH=$(srcdir)src:$PATH zelda_config --libs`"
AC_SUBST(ZELDA_LIBADD)

INNOVANON_WARNINGS([])

AC_OUTPUT
