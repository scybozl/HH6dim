noinst_LTLIBRARIES=libgolem_process_gghh_helicity0.la
libgolem_process_gghh_helicity0_la_SOURCES= \
	globals.f90 amplitudeh0.f90 ninjah0.f90 \
	diagramsl0.f90 \
	abbrevd2h0.f90 \
	abbrevd7h0.f90 \
	abbrevd9h0.f90 \
	abbrevd11h0.f90 \
	abbrevd13h0.f90 \
	d2h0l1.f90 d2h0l1d.f90 d2h0l131.f90  d2h0l132.f90  d2h0l121.f90 \
	d7h0l1.f90 d7h0l1d.f90 d7h0l131.f90  d7h0l132.f90  d7h0l121.f90 \
	d9h0l1.f90 d9h0l1d.f90 d9h0l131.f90  d9h0l132.f90  d9h0l121.f90 \
	d11h0l1.f90 d11h0l1d.f90 d11h0l131.f90  d11h0l132.f90  d11h0l121.f90 \
	d13h0l1.f90 d13h0l1d.f90 d13h0l131.f90  d13h0l132.f90  d13h0l121.f90

nodist_pkginclude_HEADERS=gghh_globalsh0.mod gghh_amplitudeh0.mod \
	gghh_ninjah0.mod \
	gghh_diagramsh0l0.mod \
	gghh_abbrevd2h0.mod \
	gghh_abbrevd7h0.mod \
	gghh_abbrevd9h0.mod \
	gghh_abbrevd11h0.mod \
	gghh_abbrevd13h0.mod \
	gghh_d2h0l1.mod \
	gghh_d7h0l1.mod \
	gghh_d9h0l1.mod \
	gghh_d11h0l1.mod \
	gghh_d13h0l1.mod

CLEANFILES=$(nodist_pkginclude_HEADERS)
ACLOCAL_AMFLAGS=-I m4

AM_FCFLAGS=$(GOLEM_CONFIG_FCFLAGS) -I../common
AM_LDFLAGS=$(GOLEM_CONFIG_LDFLAGS)

GENERATED_SRC= \
	diagramsl0.f90 \
	abbrevd2h0.f90 \
	abbrevd7h0.f90 \
	abbrevd9h0.f90 \
	abbrevd11h0.f90 \
	abbrevd13h0.f90 \
	d2h0l1.f90 d2h0l1d.f90 d2h0l131.f90  d2h0l132.f90  d2h0l121.f90 \
	d7h0l1.f90 d7h0l1d.f90 d7h0l131.f90  d7h0l132.f90  d7h0l121.f90 \
	d9h0l1.f90 d9h0l1d.f90 d9h0l131.f90  d9h0l132.f90  d9h0l121.f90 \
	d11h0l1.f90 d11h0l1d.f90 d11h0l131.f90  d11h0l132.f90  d11h0l121.f90 \
	d13h0l1.f90 d13h0l1d.f90 d13h0l131.f90  d13h0l132.f90  d13h0l121.f90

$(GENERATED_SRC): %: source

TEMPFILE:=$(shell mktemp -u -t gosam.tempfile.XXXXXX || echo gosam.tempfile.tmp)

source:

	@if [ -e ../diagrams-1.hh ] && head -n 100 ../diagrams-1.hh | grep -q 'Local' ; \
	then \
		sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE); \
		mv $(TEMPFILE) ../diagrams-1.hh ; \
	fi
	@if [ -f Makefile.source ]; \
	then \
		$(MAKE) -f Makefile.source ; \
	fi

include Makefile.dep
