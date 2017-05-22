noinst_PROGRAMS=test
noinst_LTLIBRARIES=libgolem_process_gghh_matrix.la
libgolem_process_gghh_matrix_la_SOURCES= matrix.f90
nodist_pkginclude_HEADERS= gghh_matrix.mod

test_SOURCES=test.f90
test_LDADD=\
   $(builddir)/../matrix/libgolem_process_gghh_matrix.la \
   $(builddir)/../helicity0/libgolem_process_gghh_helicity0.la \
   $(builddir)/../common/libgolem_process_gghh_common.la \
   $(GOLEM_CONFIG_LDFLAGS)

CLEANFILES=$(nodist_pkginclude_HEADERS)
ACLOCAL_AMFLAGS=-I m4

AM_FCFLAGS=$(GOLEM_CONFIG_FCFLAGS) -I../common \
	   -I../helicity0

include Makefile.dep
