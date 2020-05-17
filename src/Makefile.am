AM_CPPFLAGS = -D__STDC_INT64__

#include Makefile-LIBADD.inc
dist_bin_SCRIPTS = libcowsay_config cowsay_config laden_config zelda_config

lib_LTLIBRARIES =
bin_PROGRAMS    =

lib_LTLIBRARIES += libcowsay.la
libcowsay_la_LIBADD = @LIBCOWSAY_LIBADD@
include_HEADERS = cowsay.h

#bin_SCRIPTS = laden-tmp

bin_PROGRAMS += cowsay
#cowsay_LDADD = libcowsay.la $(LIBCOWSAY_LIBADD)
cowsay_LDADD = @COWSAY_LIBADD@
EXTRA_cowsay_DEPENDENCIES = libcowsay.la

bin_PROGRAMS += laden
#laden_LDADD = libcowsay.la $(LIBCOWSAY_LIBADD)
laden_LDADD = @LADEN_LIBADD@
EXTRA_laden_DEPENDENCIES = libcowsay.la

bin_PROGRAMS += zelda
#zelda_LDADD = libcowsay.la $(LIBCOWSAY_LIBADD)
zelda_LDADD = @ZELDA_LIBADD@
EXTRA_zelda_DEPENDENCIES = libcowsay.la

#BUILT_SOURCES = tmp/laden
#tmp/laden: laden-tmp
#	${SHELL} $< $@
BUILT_SOURCES = laden-wrapper
laden-wrapper: Makefile
	echo -e '#! /bin/bash\nset -eu\nLD_LIBRARY_PATH=@libdir@ @bindir@/laden' > $@
	chmod -v +x $@
install-exec-hook:
	mv -v laden-wrapper ${DESTDIR}/bin/laden
