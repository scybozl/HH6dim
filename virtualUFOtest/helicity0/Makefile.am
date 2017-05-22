noinst_LTLIBRARIES=libgolem_process_gghh_helicity0.la
libgolem_process_gghh_helicity0_la_SOURCES= \
	globals.f90 amplitudeh0.f90 ninjah0.f90 \
	diagramsl0.f90 \
	abbrevd4h0.f90 \
	abbrevd6h0.f90 \
	abbrevd8h0.f90 \
	abbrevd10h0.f90 \
	d4h0l1.f90 d4h0l1d.f90 d4h0l131.f90  d4h0l132.f90  d4h0l121.f90 \
	d6h0l1.f90 d6h0l1d.f90 d6h0l131.f90  d6h0l132.f90  d6h0l121.f90 \
	d8h0l1.f90 d8h0l1d.f90 d8h0l131.f90  d8h0l132.f90  d8h0l121.f90 \
	d10h0l1.f90 d10h0l1d.f90 d10h0l131.f90  d10h0l132.f90  d10h0l121.f90

nodist_pkginclude_HEADERS=gghh_globalsh0.mod gghh_amplitudeh0.mod \
	gghh_ninjah0.mod \
	gghh_diagramsh0l0.mod \
	gghh_abbrevd4h0.mod \
	gghh_abbrevd6h0.mod \
	gghh_abbrevd8h0.mod \
	gghh_abbrevd10h0.mod \
	gghh_d4h0l1.mod \
	gghh_d6h0l1.mod \
	gghh_d8h0l1.mod \
	gghh_d10h0l1.mod

CLEANFILES=$(nodist_pkginclude_HEADERS)
ACLOCAL_AMFLAGS=-I m4

AM_FCFLAGS=$(GOLEM_CONFIG_FCFLAGS) -I../common
AM_LDFLAGS=$(GOLEM_CONFIG_LDFLAGS)

GENERATED_SRC= \
	diagramsl0.f90 \
	abbrevd4h0.f90 \
	abbrevd6h0.f90 \
	abbrevd8h0.f90 \
	abbrevd10h0.f90 \
	d4h0l1.f90 d4h0l1d.f90 d4h0l131.f90  d4h0l132.f90  d4h0l121.f90 \
	d6h0l1.f90 d6h0l1d.f90 d6h0l131.f90  d6h0l132.f90  d6h0l121.f90 \
	d8h0l1.f90 d8h0l1d.f90 d8h0l131.f90  d8h0l132.f90  d8h0l121.f90 \
	d10h0l1.f90 d10h0l1d.f90 d10h0l131.f90  d10h0l132.f90  d10h0l121.f90

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
