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

AX_APPEND_COMPILE_FLAGS([-Wextra,-pedantic,-ansi,-Werror,-Wdouble-promotion])
AX_APPEND_COMPILE_FLAGS([-Wformat=2,-Wswitch-default,-Wswitch-enum,-Wuninitialized])
AX_APPEND_COMPILE_FLAGS([-Wstrict-aliasing=1,-Wstrict-overflow=5])
AX_APPEND_COMPILE_FLAGS([-Wsuggest-attribute=pure,-Wsuggest-attribute=const])
AX_APPEND_COMPILE_FLAGS([-Wsuggest-attribute=noreturn,-Wsuggest-attribute=format])
AX_APPEND_COMPILE_FLAGS([-Warray-bounds=2,-Wtrampolines,-Wfloat-equal])
AX_APPEND_COMPILE_FLAGS([-Wtraditional-conversion,-Wdeclaration-after-statement])
AX_APPEND_COMPILE_FLAGS([-Wundef,-Wshadow,-Wunsafe-loop-optimizations])
AX_APPEND_COMPILE_FLAGS([-Wbad-function-cast,-Wcast-qual,-Wcast-align])
AX_APPEND_COMPILE_FLAGS([-Wwrite-strings,-Wconversion,-Wjump-misses-init])
AX_APPEND_COMPILE_FLAGS([-Wlogical-op,-Waggregate-return])
AX_APPEND_COMPILE_FLAGS([-Wno-aggressive-loop-optimizations,-Wstrict-prototypes])
AX_APPEND_COMPILE_FLAGS([-Wmissing-prototypes,-Wmissing-declarations,-Wpacked])
AX_APPEND_COMPILE_FLAGS([-Wpadded,-Wredundant-decls,-Wnested-externs,-Winline])
AX_APPEND_COMPILE_FLAGS([-Wvector-operation-performance,-Wdisabled-optimization])
AX_APPEND_COMPILE_FLAGS([-Wstack-protector,-Wunsuffixed-float-constants])
AX_APPEND_COMPILE_FLAGS([-Winit-self])
