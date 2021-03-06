# vim: ts=3:sw=3


include ../Makefile.conf


compile: source amplitude0.a


-include Makefile.source

HAVE_MAKEFILE_SOURCE=$(if $(wildcard Makefile.source),1,0)
HAVE_ORIG_DIAGRAM_FILE=$(if $(shell test -e ../diagrams-1.hh && head -n 100 ../diagrams-1.hh | grep 'Local'),1,0)

OBJECTS= \
	globals.o amplitudeh0.o ninjah0.o \
	diagramsl0.o \
	abbrevd4h0.o \
	abbrevd6h0.o \
	abbrevd8h0.o \
	abbrevd10h0.o \
	d4h0l1.o \
	d4h0l1d.o \
	d4h0l131.o \
	d4h0l132.o \
	d4h0l121.o \
	d6h0l1.o \
	d6h0l1d.o \
	d6h0l131.o \
	d6h0l132.o \
	d6h0l121.o \
	d8h0l1.o \
	d8h0l1d.o \
	d8h0l131.o \
	d8h0l132.o \
	d8h0l121.o \
	d10h0l1.o \
	d10h0l1d.o \
	d10h0l131.o \
	d10h0l132.o \
	d10h0l121.o
GENERATED_SRC= \
	diagramsl0.f90 \
	abbrevd4h0.f90 \
	abbrevd6h0.f90 \
	abbrevd8h0.f90 \
	abbrevd10h0.f90 \
	d4h0l1.f90 \
	d4h0l1d.f90 \
	d4h0l131.f90 \
	d4h0l132.f90 \
	d4h0l121.f90 \
	d6h0l1.f90 \
	d6h0l1d.f90 \
	d6h0l131.f90 \
	d6h0l132.f90 \
	d6h0l121.f90 \
	d8h0l1.f90 \
	d8h0l1d.f90 \
	d8h0l131.f90 \
	d8h0l132.f90 \
	d8h0l121.f90 \
	d10h0l1.f90 \
	d10h0l1d.f90 \
	d10h0l131.f90 \
	d10h0l132.f90 \
	d10h0l121.f90

.PHONY: compile source clean very-clean doc convert
.SUFFIXES:

TEMPFILE:=$(shell mktemp -u -t gosam.tempfile.XXXXXX || echo gosam.tempfile.tmp)

convert:
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif

ifeq ($(HAVE_MAKEFILE_SOURCE),1)
source: convert  $(SOURCE_TREE) $(SOURCE_VIRT)
else
source:
endif




d4h0l1: d4h0l1.f90 abbrevd4h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d4h0l1.txt
	$(MAKE) $(S) -f Makefile.source d4h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd4h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd4h0.o -I../common abbrevd4h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d4h0l1.o -I../common d4h0l1.f90
endif



d6h0l1: d6h0l1.f90 abbrevd6h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d6h0l1.txt
	$(MAKE) $(S) -f Makefile.source d6h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd6h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd6h0.o -I../common abbrevd6h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d6h0l1.o -I../common d6h0l1.f90
endif



d8h0l1: d8h0l1.f90 abbrevd8h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d8h0l1.txt
	$(MAKE) $(S) -f Makefile.source d8h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd8h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd8h0.o -I../common abbrevd8h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d8h0l1.o -I../common d8h0l1.f90
endif



d10h0l1: d10h0l1.f90 abbrevd10h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d10h0l1.txt
	$(MAKE) $(S) -f Makefile.source d10h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd10h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd10h0.o -I../common abbrevd10h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d10h0l1.o -I../common d10h0l1.f90
endif



$(OBJECTS): %.o: %.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o $@ -I../common $<


amplitude0.a: $(OBJECTS)
	$(Q) ar rs $@ $+


doc:

clean:
	$(Q)$(FIND) $(FIND_OPT) . \( -name '*.o' \
		-or -name '*.mod' -or -name '*.a' -or -name '*.so' \) \
		-exec rm \{} \;

very-clean: clean
	$(Q)rm -f filelist-source
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(Q)$(FIND) $(FIND_OPT) . \( \
		-name 'd*h0l[01].f90' \
		-or -name 'd*h0l[01]fr5.f90' \
		-or -name 'd*h0l[014]*.txt' \
		-or -name 'd*h0l1[123dmu]*.txt' \
		-or -name 'd*h0l1[123dmu]*.f90' \
		-or -name 'd*h0l[01]c.txt' \
		-or -name 'd*h0l[01]c.f90' \
		-or -name 'd*h0l[01]d.txt' \
		-or -name 'd*h0l[01]d.hh' \
		-or -name 'd*h0l[01].hh' \
		-or -name 'd*h0l1d.txt' \
		-or -name 'd*h0l1d.f90' \
		-or -name 'd*h0l[01]-fr.txt' \
		-or -name 'd*h0l[01].dat' \
		-or -name 'd*h0l[01].abb' \
		-or -name 'diagramsl0.f90' \
		-or -name 'abbrevd*h0.f90' \
		-or -name 'd*h0l[01].prc' \
		-or -name 'borndiag.prc' \
		-or -name 'born.txt' \
		-or -name 'born.dat' \
		-or -name '*-stamp'  \
		-or -name 'lightconedecomp.prc' \
		\) -exec rm \{} \;
endif

filelist-source: source
	$(Q)$(FIND) $(FIND_OPT) . \( \
		-name '*.f90' \
		-or -name 'Makefile' \
		-or -name 'Makefile.dep' \
		\) -print > $@

include Makefile.dep
