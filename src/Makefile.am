lib_LTLIBRARIES = libcowsay.la
libcowsay_la_SOURCES = cowsay.c
include_HEADERS	= cowsay.h

libcowsay_la_CFLAGS = -Wextra -pedantic -ansi

bin_PROGRAMS = cowsay-test
cowsay_test_SOURCES = cowsay-test.c
cowsay_test_LDADD = libcowsay.la

cowsay_test_CFLAGS = -Wextra -pedantic -ansi -Wconversion -Winit-self -Wold-style-cast -Woverloaded-virtual -Wuninitialized -Wmissing-declarations -Winit-self -Wcast-qual  -Wsign-promo -Wcast-align -Wstrict-null-sentinel -Wstrict-overflow
