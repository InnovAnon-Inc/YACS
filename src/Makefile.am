lib_LTLIBRARIES = libcowsay.la
libcowsay_la_SOURCES = cowsay.c
include_HEADERS	= cowsay.h

libcowsay_la_CFLAGS = -Wextra -pedantic -ansi

bin_PROGRAMS = cowsay-test laden zelda
cowsay_test_SOURCES = cowsay-test.c
cowsay_test_LDADD = libcowsay.la

cowsay_test_CFLAGS = -Wextra -pedantic -ansi -Wconversion -Winit-self -Wuninitialized -Wmissing-declarations -Winit-self -Wcast-qual -Wcast-align -Wstrict-overflow

laden_SOURCES = laden.c
laden_LDADD = libcowsay.la

laden_CFLAGS = -Wextra -pedantic -ansi -Wconversion -Winit-self -Wuninitialized -Wmissing-declarations -Winit-self -Wcast-qual -Wcast-align -Wstrict-overflow

zelda_SOURCES = zelda.c
zelda_LDADD = libcowsay.la

zelda_CFLAGS = -Wextra -pedantic -ansi -Wconversion -Winit-self -Wuninitialized -Wmissing-declarations -Winit-self -Wcast-qual -Wcast-align -Wstrict-overflow
