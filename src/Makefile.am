AM_CPPFLAGS = -D__STDC_INT64__

#if USE_SUBMODULES
#SUBDIRS = ../glitter
#AM_CPPFLAGS += -I $(top_srcdir)/glitter/src
#endif

#include Makefile-LIBADD.inc
dist_bin_SCRIPTS = libcowsay_config cowsay_config laden_config zelda_config

lib_LTLIBRARIES = libcowsay.la
libcowsay_la_LIBADD = $(LIBCOWSAY_LIBADD)
include_HEADERS = cowsay.h

bin_PROGRAMS = cowsay laden zelda
#cowsay_LDADD = libcowsay.la $(LIBCOWSAY_LIBADD)
cowsay_LDADD = $(COWSAY_LIBADD)

#laden_LDADD = libcowsay.la $(LIBCOWSAY_LIBADD)
laden_LDADD = $(LADEN_LIBADD)

#zelda_LDADD = libcowsay.la $(LIBCOWSAY_LIBADD)
zelda_LDADD = $(ZELDA_LIBADD)
