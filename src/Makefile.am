lib_LTLIBRARIES = libcowsay.la
libcowsay_la_SOURCES = cowsay.c
include_HEADERS	= cowsay.h
#libcowsay_la_CFLAGS =

bin_PROGRAMS = cowsay-test laden zelda
cowsay_test_SOURCES = cowsay-test.c
cowsay_test_LDADD = libcowsay.la
#cowsay_test_CFLAGS =

laden_SOURCES = laden.c
laden_LDADD = libcowsay.la
#laden_CFLAGS =

zelda_SOURCES = zelda.c
zelda_LDADD = libcowsay.la
#zelda_CFLAGS =

AM_CPPFLAGS = -D__STDC_INT64__
AM_CPPFLAGS += -I $(top_srcdir)/glitter/src

