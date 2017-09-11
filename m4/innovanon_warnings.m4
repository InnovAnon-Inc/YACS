AC_DEFUN([INNOVANON_WARNINGS],
[AX_REQUIRE_DEFINED([AX_APPEND_COMPILE_FLAGS])

AX_APPEND_COMPILE_FLAGS([-Wextra])
AX_APPEND_COMPILE_FLAGS([-pedantic])
AX_APPEND_COMPILE_FLAGS([-ansi])
AX_APPEND_COMPILE_FLAGS([-Werror])
AX_APPEND_COMPILE_FLAGS([-Wdouble-promotion])
AX_APPEND_COMPILE_FLAGS([-Wformat=2])
AX_APPEND_COMPILE_FLAGS([-Wswitch-default])
AX_APPEND_COMPILE_FLAGS([-Wswitch-enum])
AX_APPEND_COMPILE_FLAGS([-Wuninitialized])
AX_APPEND_COMPILE_FLAGS([-Wstrict-aliasing=1])
AX_APPEND_COMPILE_FLAGS([-Wstrict-overflow=5])
AX_APPEND_COMPILE_FLAGS([-Wsuggest-attribute=pure])
AX_APPEND_COMPILE_FLAGS([-Wsuggest-attribute=const])
AX_APPEND_COMPILE_FLAGS([-Wsuggest-attribute=noreturn])
AX_APPEND_COMPILE_FLAGS([-Wsuggest-attribute=format])
AX_APPEND_COMPILE_FLAGS([-Warray-bounds=2])
AX_APPEND_COMPILE_FLAGS([-Wtrampolines])
AX_APPEND_COMPILE_FLAGS([-Wfloat-equal])
AX_APPEND_COMPILE_FLAGS([-Wtraditional-conversion])
AX_APPEND_COMPILE_FLAGS([-Wdeclaration-after-statement])
AX_APPEND_COMPILE_FLAGS([-Wundef])
AX_APPEND_COMPILE_FLAGS([-Wshadow])
AX_APPEND_COMPILE_FLAGS([-Wunsafe-loop-optimizations])
AX_APPEND_COMPILE_FLAGS([-Wbad-function-cast])
AX_APPEND_COMPILE_FLAGS([-Wcast-qual])
AX_APPEND_COMPILE_FLAGS([-Wcast-align])
AX_APPEND_COMPILE_FLAGS([-Wwrite-strings])
AX_APPEND_COMPILE_FLAGS([-Wconversion])
AX_APPEND_COMPILE_FLAGS([-Wjump-misses-init])
AX_APPEND_COMPILE_FLAGS([-Wlogical-op])
AX_APPEND_COMPILE_FLAGS([-Waggregate-return])
AX_APPEND_COMPILE_FLAGS([-Wno-aggressive-loop-optimizations])
AX_APPEND_COMPILE_FLAGS([-Wstrict-prototypes])
AX_APPEND_COMPILE_FLAGS([-Wmissing-prototypes])
AX_APPEND_COMPILE_FLAGS([-Wmissing-declarations])
AX_APPEND_COMPILE_FLAGS([-Wpacked])
AX_APPEND_COMPILE_FLAGS([-Wpadded])
AX_APPEND_COMPILE_FLAGS([-Wredundant-decls])
AX_APPEND_COMPILE_FLAGS([-Wnested-externs])
AX_APPEND_COMPILE_FLAGS([-Winline])
AX_APPEND_COMPILE_FLAGS([-Wvector-operation-performance])
AX_APPEND_COMPILE_FLAGS([-Wdisabled-optimization])
AX_APPEND_COMPILE_FLAGS([-Wstack-protector])
AX_APPEND_COMPILE_FLAGS([-Wunsuffixed-float-constants])
AX_APPEND_COMPILE_FLAGS([-Winit-self])

])dnl INNOVANON_WARNINGS
