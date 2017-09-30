COWSAY_LIBADD =

lib_LTLIBRARIES = libcowsay.la
libcowsay_la_LIBADD = $(COWSAY_LIBADD)
include_HEADERS = cowsay.h

bin_PROGRAMS = cowsay-test laden zelda
cowsay_test_LDADD = libcowsay.la $(COWSAY_LIBADD)

laden_LDADD = libcowsay.la $(COWSAY_LIBADD)

zelda_LDADD = libcowsay.la $(COWSAY_LIBADD)

AM_CPPFLAGS = -D__STDC_INT64__

SUBDIRS = ../glitter
AM_CPPFLAGS += -I ../glitter/src
