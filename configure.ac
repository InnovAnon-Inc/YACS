AC_INIT([libcowsay], [0.0], [laurence.a.maddox@gmail.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AM_PROG_AR
LT_INIT([])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 src/Makefile
])
AC_CONFIG_MACRO_DIR([m4])
AC_OUTPUT

AC_CHECK_HEADERS([stdio.h stdlib.h string.h sys/types.h])
AC_CHECK_HEADERS([glitter.h])

CC_CHECK_CFLAG_APPEND([-Wextra,-pedantic,-ansi,-Werror,-Wdouble-promotion])
CC_CHECK_CFLAG_APPEND([-Wformat=2,-Wswitch-default,-Wswitch-enum,-Wuninitialized])
CC_CHECK_CFLAG_APPEND([-Wstrict-aliasing=1,-Wstrict-overflow=5])
CC_CHECK_CFLAG_APPEND([-Wsuggest-attribute=pure,-Wsuggest-attribute=const])
CC_CHECK_CFLAG_APPEND([-Wsuggest-attribute=noreturn,-Wsuggest-attribute=format])
CC_CHECK_CFLAG_APPEND([-Warray-bounds=2,-Wtrampolines,-Wfloat-equal])
CC_CHECK_CFLAG_APPEND([-Wtraditional-conversion,-Wdeclaration-after-statement])
CC_CHECK_CFLAG_APPEND([-Wundef,-Wshadow,-Wunsafe-loop-optimizations])
CC_CHECK_CFLAG_APPEND([-Wbad-function-cast,-Wcast-qual,-Wcast-align])
CC_CHECK_CFLAG_APPEND([-Wwrite-strings,-Wconversion,-Wjump-misses-init])
CC_CHECK_CFLAG_APPEND([-Wlogical-op,-Waggregate-return])
CC_CHECK_CFLAG_APPEND([-Wno-aggressive-loop-optimizations,-Wstrict-prototypes])
CC_CHECK_CFLAG_APPEND([-Wmissing-prototypes,-Wmissing-declarations,-Wpacked])
CC_CHECK_CFLAG_APPEND([-Wpadded,-Wredundant-decls,-Wnested-externs,-Winline])
CC_CHECK_CFLAG_APPEND([-Wvector-operation-performance,-Wdisabled-optimization])
CC_CHECK_CFLAG_APPEND([-Wstack-protector,-Wunsuffixed-float-constants])
CC_CHECK_CFLAG_APPEND([-Winit-self])
