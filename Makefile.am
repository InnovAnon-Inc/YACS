# Install the pkg-config file.
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = src/libcowsay.pc src/cowsay.pc src/laden.pc src/zelda.pc

DISTCLEANFILES = $(pkgconfig_DATA)
EXTRA_DIST = src/libcowsay.pc.in src/cowsay.pc.in src/laden.pc.in src/zelda.pc.in

SUBDIRS = src
dist_doc_DATA = README.md
ACLOCAL_AMFLAGS = -I m4

