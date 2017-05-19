# vim: ts=3:sw=3


include ../Makefile.conf


compile: source amplitude0.a


-include Makefile.source

HAVE_MAKEFILE_SOURCE=$(if $(wildcard Makefile.source),1,0)
HAVE_ORIG_DIAGRAM_FILE=$(if $(shell test -e ../diagrams-1.hh && head -n 100 ../diagrams-1.hh | grep 'Local'),1,0)

OBJECTS= \
	globals.o amplitudeh0.o ninjah0.o \
	diagramsl0.o \
	abbrevd1h0.o \
	abbrevd2h0.o \
	abbrevd3h0.o \
	abbrevd4h0.o \
	abbrevd7h0.o \
	abbrevd8h0.o \
	abbrevd9h0.o \
	abbrevd10h0.o \
	abbrevd11h0.o \
	abbrevd12h0.o \
	abbrevd13h0.o \
	abbrevd14h0.o \
	abbrevd17h0.o \
	abbrevd21h0.o \
	abbrevd33h0.o \
	abbrevd34h0.o \
	abbrevd35h0.o \
	abbrevd36h0.o \
	abbrevd37h0.o \
	abbrevd38h0.o \
	abbrevd39h0.o \
	abbrevd40h0.o \
	d1h0l1.o \
	d1h0l1d.o \
	d1h0l131.o \
	d1h0l132.o \
	d1h0l121.o \
	d2h0l1.o \
	d2h0l1d.o \
	d2h0l131.o \
	d2h0l132.o \
	d2h0l121.o \
	d3h0l1.o \
	d3h0l1d.o \
	d3h0l131.o \
	d3h0l132.o \
	d3h0l121.o \
	d4h0l1.o \
	d4h0l1d.o \
	d4h0l131.o \
	d4h0l132.o \
	d4h0l121.o \
	d7h0l1.o \
	d7h0l1d.o \
	d7h0l131.o \
	d7h0l132.o \
	d7h0l121.o \
	d8h0l1.o \
	d8h0l1d.o \
	d8h0l131.o \
	d8h0l132.o \
	d8h0l121.o \
	d9h0l1.o \
	d9h0l1d.o \
	d9h0l131.o \
	d9h0l132.o \
	d9h0l121.o \
	d10h0l1.o \
	d10h0l1d.o \
	d10h0l131.o \
	d10h0l132.o \
	d10h0l121.o \
	d11h0l1.o \
	d11h0l1d.o \
	d11h0l131.o \
	d11h0l132.o \
	d11h0l121.o \
	d12h0l1.o \
	d12h0l1d.o \
	d12h0l131.o \
	d12h0l132.o \
	d12h0l121.o \
	d13h0l1.o \
	d13h0l1d.o \
	d13h0l131.o \
	d13h0l132.o \
	d13h0l121.o \
	d14h0l1.o \
	d14h0l1d.o \
	d14h0l131.o \
	d14h0l132.o \
	d14h0l121.o \
	d17h0l1.o \
	d17h0l1d.o \
	d17h0l131.o \
	d17h0l132.o \
	d17h0l121.o \
	d21h0l1.o \
	d21h0l1d.o \
	d21h0l131.o \
	d21h0l132.o \
	d21h0l121.o \
	d33h0l1.o \
	d33h0l1d.o \
	d33h0l131.o \
	d33h0l132.o \
	d33h0l121.o \
	d34h0l1.o \
	d34h0l1d.o \
	d34h0l131.o \
	d34h0l132.o \
	d34h0l121.o \
	d35h0l1.o \
	d35h0l1d.o \
	d35h0l131.o \
	d35h0l132.o \
	d35h0l121.o \
	d36h0l1.o \
	d36h0l1d.o \
	d36h0l131.o \
	d36h0l132.o \
	d36h0l121.o \
	d37h0l1.o \
	d37h0l1d.o \
	d37h0l131.o \
	d37h0l132.o \
	d37h0l121.o \
	d38h0l1.o \
	d38h0l1d.o \
	d38h0l131.o \
	d38h0l132.o \
	d38h0l121.o \
	d39h0l1.o \
	d39h0l1d.o \
	d39h0l131.o \
	d39h0l132.o \
	d39h0l121.o \
	d40h0l1.o \
	d40h0l1d.o \
	d40h0l131.o \
	d40h0l132.o \
	d40h0l121.o
GENERATED_SRC= \
	diagramsl0.f90 \
	abbrevd1h0.f90 \
	abbrevd2h0.f90 \
	abbrevd3h0.f90 \
	abbrevd4h0.f90 \
	abbrevd7h0.f90 \
	abbrevd8h0.f90 \
	abbrevd9h0.f90 \
	abbrevd10h0.f90 \
	abbrevd11h0.f90 \
	abbrevd12h0.f90 \
	abbrevd13h0.f90 \
	abbrevd14h0.f90 \
	abbrevd17h0.f90 \
	abbrevd21h0.f90 \
	abbrevd33h0.f90 \
	abbrevd34h0.f90 \
	abbrevd35h0.f90 \
	abbrevd36h0.f90 \
	abbrevd37h0.f90 \
	abbrevd38h0.f90 \
	abbrevd39h0.f90 \
	abbrevd40h0.f90 \
	d1h0l1.f90 \
	d1h0l1d.f90 \
	d1h0l131.f90 \
	d1h0l132.f90 \
	d1h0l121.f90 \
	d2h0l1.f90 \
	d2h0l1d.f90 \
	d2h0l131.f90 \
	d2h0l132.f90 \
	d2h0l121.f90 \
	d3h0l1.f90 \
	d3h0l1d.f90 \
	d3h0l131.f90 \
	d3h0l132.f90 \
	d3h0l121.f90 \
	d4h0l1.f90 \
	d4h0l1d.f90 \
	d4h0l131.f90 \
	d4h0l132.f90 \
	d4h0l121.f90 \
	d7h0l1.f90 \
	d7h0l1d.f90 \
	d7h0l131.f90 \
	d7h0l132.f90 \
	d7h0l121.f90 \
	d8h0l1.f90 \
	d8h0l1d.f90 \
	d8h0l131.f90 \
	d8h0l132.f90 \
	d8h0l121.f90 \
	d9h0l1.f90 \
	d9h0l1d.f90 \
	d9h0l131.f90 \
	d9h0l132.f90 \
	d9h0l121.f90 \
	d10h0l1.f90 \
	d10h0l1d.f90 \
	d10h0l131.f90 \
	d10h0l132.f90 \
	d10h0l121.f90 \
	d11h0l1.f90 \
	d11h0l1d.f90 \
	d11h0l131.f90 \
	d11h0l132.f90 \
	d11h0l121.f90 \
	d12h0l1.f90 \
	d12h0l1d.f90 \
	d12h0l131.f90 \
	d12h0l132.f90 \
	d12h0l121.f90 \
	d13h0l1.f90 \
	d13h0l1d.f90 \
	d13h0l131.f90 \
	d13h0l132.f90 \
	d13h0l121.f90 \
	d14h0l1.f90 \
	d14h0l1d.f90 \
	d14h0l131.f90 \
	d14h0l132.f90 \
	d14h0l121.f90 \
	d17h0l1.f90 \
	d17h0l1d.f90 \
	d17h0l131.f90 \
	d17h0l132.f90 \
	d17h0l121.f90 \
	d21h0l1.f90 \
	d21h0l1d.f90 \
	d21h0l131.f90 \
	d21h0l132.f90 \
	d21h0l121.f90 \
	d33h0l1.f90 \
	d33h0l1d.f90 \
	d33h0l131.f90 \
	d33h0l132.f90 \
	d33h0l121.f90 \
	d34h0l1.f90 \
	d34h0l1d.f90 \
	d34h0l131.f90 \
	d34h0l132.f90 \
	d34h0l121.f90 \
	d35h0l1.f90 \
	d35h0l1d.f90 \
	d35h0l131.f90 \
	d35h0l132.f90 \
	d35h0l121.f90 \
	d36h0l1.f90 \
	d36h0l1d.f90 \
	d36h0l131.f90 \
	d36h0l132.f90 \
	d36h0l121.f90 \
	d37h0l1.f90 \
	d37h0l1d.f90 \
	d37h0l131.f90 \
	d37h0l132.f90 \
	d37h0l121.f90 \
	d38h0l1.f90 \
	d38h0l1d.f90 \
	d38h0l131.f90 \
	d38h0l132.f90 \
	d38h0l121.f90 \
	d39h0l1.f90 \
	d39h0l1d.f90 \
	d39h0l131.f90 \
	d39h0l132.f90 \
	d39h0l121.f90 \
	d40h0l1.f90 \
	d40h0l1d.f90 \
	d40h0l131.f90 \
	d40h0l132.f90 \
	d40h0l121.f90

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




d1h0l1: d1h0l1.f90 abbrevd1h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d1h0l1.txt
	$(MAKE) $(S) -f Makefile.source d1h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd1h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd1h0.o -I../common abbrevd1h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d1h0l1.o -I../common d1h0l1.f90
endif



d2h0l1: d2h0l1.f90 abbrevd2h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d2h0l1.txt
	$(MAKE) $(S) -f Makefile.source d2h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd2h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd2h0.o -I../common abbrevd2h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d2h0l1.o -I../common d2h0l1.f90
endif



d3h0l1: d3h0l1.f90 abbrevd3h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d3h0l1.txt
	$(MAKE) $(S) -f Makefile.source d3h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd3h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd3h0.o -I../common abbrevd3h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d3h0l1.o -I../common d3h0l1.f90
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



d7h0l1: d7h0l1.f90 abbrevd7h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d7h0l1.txt
	$(MAKE) $(S) -f Makefile.source d7h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd7h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd7h0.o -I../common abbrevd7h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d7h0l1.o -I../common d7h0l1.f90
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



d9h0l1: d9h0l1.f90 abbrevd9h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d9h0l1.txt
	$(MAKE) $(S) -f Makefile.source d9h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd9h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd9h0.o -I../common abbrevd9h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d9h0l1.o -I../common d9h0l1.f90
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



d11h0l1: d11h0l1.f90 abbrevd11h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d11h0l1.txt
	$(MAKE) $(S) -f Makefile.source d11h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd11h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd11h0.o -I../common abbrevd11h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d11h0l1.o -I../common d11h0l1.f90
endif



d12h0l1: d12h0l1.f90 abbrevd12h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d12h0l1.txt
	$(MAKE) $(S) -f Makefile.source d12h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd12h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd12h0.o -I../common abbrevd12h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d12h0l1.o -I../common d12h0l1.f90
endif



d13h0l1: d13h0l1.f90 abbrevd13h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d13h0l1.txt
	$(MAKE) $(S) -f Makefile.source d13h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd13h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd13h0.o -I../common abbrevd13h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d13h0l1.o -I../common d13h0l1.f90
endif



d14h0l1: d14h0l1.f90 abbrevd14h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d14h0l1.txt
	$(MAKE) $(S) -f Makefile.source d14h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd14h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd14h0.o -I../common abbrevd14h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d14h0l1.o -I../common d14h0l1.f90
endif



d17h0l1: d17h0l1.f90 abbrevd17h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d17h0l1.txt
	$(MAKE) $(S) -f Makefile.source d17h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd17h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd17h0.o -I../common abbrevd17h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d17h0l1.o -I../common d17h0l1.f90
endif



d21h0l1: d21h0l1.f90 abbrevd21h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d21h0l1.txt
	$(MAKE) $(S) -f Makefile.source d21h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd21h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd21h0.o -I../common abbrevd21h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d21h0l1.o -I../common d21h0l1.f90
endif



d33h0l1: d33h0l1.f90 abbrevd33h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d33h0l1.txt
	$(MAKE) $(S) -f Makefile.source d33h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd33h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd33h0.o -I../common abbrevd33h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d33h0l1.o -I../common d33h0l1.f90
endif



d34h0l1: d34h0l1.f90 abbrevd34h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d34h0l1.txt
	$(MAKE) $(S) -f Makefile.source d34h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd34h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd34h0.o -I../common abbrevd34h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d34h0l1.o -I../common d34h0l1.f90
endif



d35h0l1: d35h0l1.f90 abbrevd35h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d35h0l1.txt
	$(MAKE) $(S) -f Makefile.source d35h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd35h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd35h0.o -I../common abbrevd35h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d35h0l1.o -I../common d35h0l1.f90
endif



d36h0l1: d36h0l1.f90 abbrevd36h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d36h0l1.txt
	$(MAKE) $(S) -f Makefile.source d36h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd36h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd36h0.o -I../common abbrevd36h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d36h0l1.o -I../common d36h0l1.f90
endif



d37h0l1: d37h0l1.f90 abbrevd37h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d37h0l1.txt
	$(MAKE) $(S) -f Makefile.source d37h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd37h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd37h0.o -I../common abbrevd37h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d37h0l1.o -I../common d37h0l1.f90
endif



d38h0l1: d38h0l1.f90 abbrevd38h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d38h0l1.txt
	$(MAKE) $(S) -f Makefile.source d38h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd38h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd38h0.o -I../common abbrevd38h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d38h0l1.o -I../common d38h0l1.f90
endif



d39h0l1: d39h0l1.f90 abbrevd39h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d39h0l1.txt
	$(MAKE) $(S) -f Makefile.source d39h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd39h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd39h0.o -I../common abbrevd39h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d39h0l1.o -I../common d39h0l1.f90
endif



d40h0l1: d40h0l1.f90 abbrevd40h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d40h0l1.txt
	$(MAKE) $(S) -f Makefile.source d40h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd40h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd40h0.o -I../common abbrevd40h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d40h0l1.o -I../common d40h0l1.f90
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
