AM_CPPFLAGS = -D__STDC_INT64__

lib_LTLIBRARIES =
bin_PROGRAMS    =

lib_LTLIBRARIES += libcowsay.la
libcowsay_la_CPPFLAGS = $(GLITTER_CPPFLAGS)
libcowsay_la_LIBADD   = $(GLITTER_LIBS)
include_HEADERS = cowsay.h

bin_PROGRAMS += cowsay
cowsay_CPPFLAGS =          $(GLITTER_CPPFLAGS)
cowsay_LDADD    = -lcowsay $(GLITTER_LIBS)
EXTRA_cowsay_DEPENDENCIES = libcowsay.la

bin_PROGRAMS += laden
laden_CPPFLAGS =          $(GLITTER_CPPFLAGS)
laden_LDADD    = -lcowsay $(GLITTER_LIBS)
EXTRA_laden_DEPENDENCIES = libcowsay.la

bin_PROGRAMS += zelda
zelda_CPPFLAGS =          $(GLITTER_CPPFLAGS)
zelda_LDADD    = -lcowsay $(GLITTER_LIBS)
EXTRA_zelda_DEPENDENCIES = libcowsay.la

BUILT_SOURCES = laden-wrapper
#$(top_builddir)/src/laden-wrapper: Makefile
laden-wrapper: Makefile
	echo -e '#! /bin/bash\nset -eu\nLD_LIBRARY_PATH=@libdir@ @bindir@/laden' > $@
	chmod -v +x $@
#install-exec-hook:
#	test -f laden-wrapper
#	test -d ${DESTDIR}/bin
#	mv -v laden-wrapper ${DESTDIR}/bin/laden
#install-exec-hook:
#	test -f $(top_builddir)/src/laden-wrapper
#	test -d ${DESTDIR}/bin
#	mv -v $(top_builddir)/src/laden-wrapper ${DESTDIR}/bin/laden
install-exec-hook:
	test -f laden-wrapper
	mkdir -v ${DESTDIR}/bin
	mv -v laden-wrapper ${DESTDIR}/bin/laden

