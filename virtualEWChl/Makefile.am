# vim: ts=3:sw=3
SUBDIRS=doc common \
	helicity0 \
	matrix

lib_LTLIBRARIES=libgolem_process_gghh.la
libgolem_process_gghh_la_SOURCES=
libgolem_process_gghh_la_LIBADD= \
		$(builddir)/common/libgolem_process_gghh_common.la \
		$(builddir)/helicity0/libgolem_process_gghh_helicity0.la \
		$(builddir)/matrix/libgolem_process_gghh_matrix.la
EXTRA_DIST=m4 \
			  autogen.sh
ACLOCAL_AMFLAGS=-I m4
