noinst_LTLIBRARIES=libgolem_process_gghh_smehc_helicity0.la
libgolem_process_gghh_smehc_helicity0_la_SOURCES= \
	globals.f90 amplitudeh0.f90 ninjah0.f90 \
	diagramsl0.f90 \
	abbrevd9h0.f90 \
	abbrevd25h0.f90 \
	abbrevd26h0.f90 \
	abbrevd37h0.f90 \
	d9h0l1.f90 d9h0l1d.f90 d9h0l131.f90  d9h0l132.f90  d9h0l121.f90 \
	d25h0l1.f90 d25h0l1d.f90 d25h0l131.f90  d25h0l132.f90  d25h0l121.f90 \
	d26h0l1.f90 d26h0l1d.f90 d26h0l131.f90  d26h0l132.f90  d26h0l121.f90 \
	d37h0l1.f90 d37h0l1d.f90 d37h0l131.f90  d37h0l132.f90  d37h0l121.f90

nodist_pkginclude_HEADERS=gghh_smehc_globalsh0.mod gghh_smehc_amplitudeh0.mod \
	gghh_smehc_ninjah0.mod \
	gghh_smehc_diagramsh0l0.mod \
	gghh_smehc_abbrevd9h0.mod \
	gghh_smehc_abbrevd25h0.mod \
	gghh_smehc_abbrevd26h0.mod \
	gghh_smehc_abbrevd37h0.mod \
	gghh_smehc_d9h0l1.mod \
	gghh_smehc_d25h0l1.mod \
	gghh_smehc_d26h0l1.mod \
	gghh_smehc_d37h0l1.mod

CLEANFILES=$(nodist_pkginclude_HEADERS)
ACLOCAL_AMFLAGS=-I m4

AM_FCFLAGS=$(GOLEM_CONFIG_FCFLAGS) -I../common
AM_LDFLAGS=$(GOLEM_CONFIG_LDFLAGS)

GENERATED_SRC= \
	diagramsl0.f90 \
	abbrevd9h0.f90 \
	abbrevd25h0.f90 \
	abbrevd26h0.f90 \
	abbrevd37h0.f90 \
	d9h0l1.f90 d9h0l1d.f90 d9h0l131.f90  d9h0l132.f90  d9h0l121.f90 \
	d25h0l1.f90 d25h0l1d.f90 d25h0l131.f90  d25h0l132.f90  d25h0l121.f90 \
	d26h0l1.f90 d26h0l1d.f90 d26h0l131.f90  d26h0l132.f90  d26h0l121.f90 \
	d37h0l1.f90 d37h0l1d.f90 d37h0l131.f90  d37h0l132.f90  d37h0l121.f90

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
