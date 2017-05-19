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
	abbrevd5h0.o \
	abbrevd6h0.o \
	abbrevd7h0.o \
	abbrevd8h0.o \
	abbrevd10h0.o \
	abbrevd11h0.o \
	abbrevd14h0.o \
	abbrevd16h0.o \
	abbrevd17h0.o \
	abbrevd24h0.o \
	abbrevd25h0.o \
	abbrevd27h0.o \
	abbrevd28h0.o \
	abbrevd30h0.o \
	abbrevd31h0.o \
	abbrevd32h0.o \
	abbrevd33h0.o \
	abbrevd35h0.o \
	abbrevd36h0.o \
	abbrevd37h0.o \
	abbrevd38h0.o \
	abbrevd40h0.o \
	abbrevd41h0.o \
	abbrevd42h0.o \
	abbrevd44h0.o \
	abbrevd45h0.o \
	abbrevd46h0.o \
	abbrevd48h0.o \
	abbrevd49h0.o \
	abbrevd50h0.o \
	abbrevd52h0.o \
	abbrevd53h0.o \
	abbrevd55h0.o \
	abbrevd57h0.o \
	abbrevd58h0.o \
	abbrevd60h0.o \
	abbrevd62h0.o \
	abbrevd63h0.o \
	abbrevd65h0.o \
	abbrevd68h0.o \
	abbrevd73h0.o \
	abbrevd75h0.o \
	abbrevd96h0.o \
	abbrevd105h0.o \
	abbrevd114h0.o \
	abbrevd120h0.o \
	abbrevd121h0.o \
	abbrevd124h0.o \
	abbrevd126h0.o \
	abbrevd132h0.o \
	abbrevd133h0.o \
	abbrevd136h0.o \
	abbrevd138h0.o \
	abbrevd144h0.o \
	abbrevd145h0.o \
	abbrevd148h0.o \
	abbrevd150h0.o \
	abbrevd156h0.o \
	abbrevd157h0.o \
	abbrevd160h0.o \
	abbrevd162h0.o \
	abbrevd168h0.o \
	abbrevd169h0.o \
	abbrevd170h0.o \
	abbrevd172h0.o \
	abbrevd175h0.o \
	abbrevd176h0.o \
	abbrevd177h0.o \
	abbrevd179h0.o \
	abbrevd185h0.o \
	abbrevd186h0.o \
	abbrevd187h0.o \
	abbrevd189h0.o \
	abbrevd195h0.o \
	abbrevd196h0.o \
	abbrevd199h0.o \
	abbrevd201h0.o \
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
	d5h0l1.o \
	d5h0l1d.o \
	d5h0l131.o \
	d5h0l132.o \
	d5h0l121.o \
	d6h0l1.o \
	d6h0l1d.o \
	d6h0l131.o \
	d6h0l132.o \
	d6h0l121.o \
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
	d14h0l1.o \
	d14h0l1d.o \
	d14h0l131.o \
	d14h0l132.o \
	d14h0l121.o \
	d16h0l1.o \
	d16h0l1d.o \
	d16h0l131.o \
	d16h0l132.o \
	d16h0l121.o \
	d17h0l1.o \
	d17h0l1d.o \
	d17h0l131.o \
	d17h0l132.o \
	d17h0l121.o \
	d24h0l1.o \
	d24h0l1d.o \
	d24h0l131.o \
	d24h0l132.o \
	d24h0l121.o \
	d25h0l1.o \
	d25h0l1d.o \
	d25h0l131.o \
	d25h0l132.o \
	d25h0l121.o \
	d27h0l1.o \
	d27h0l1d.o \
	d27h0l131.o \
	d27h0l132.o \
	d27h0l121.o \
	d28h0l1.o \
	d28h0l1d.o \
	d28h0l131.o \
	d28h0l132.o \
	d28h0l121.o \
	d30h0l1.o \
	d30h0l1d.o \
	d30h0l131.o \
	d30h0l132.o \
	d30h0l121.o \
	d31h0l1.o \
	d31h0l1d.o \
	d31h0l131.o \
	d31h0l132.o \
	d31h0l121.o \
	d32h0l1.o \
	d32h0l1d.o \
	d32h0l131.o \
	d32h0l132.o \
	d32h0l121.o \
	d33h0l1.o \
	d33h0l1d.o \
	d33h0l131.o \
	d33h0l132.o \
	d33h0l121.o \
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
	d40h0l1.o \
	d40h0l1d.o \
	d40h0l131.o \
	d40h0l132.o \
	d40h0l121.o \
	d41h0l1.o \
	d41h0l1d.o \
	d41h0l131.o \
	d41h0l132.o \
	d41h0l121.o \
	d42h0l1.o \
	d42h0l1d.o \
	d42h0l131.o \
	d42h0l132.o \
	d42h0l121.o \
	d44h0l1.o \
	d44h0l1d.o \
	d44h0l131.o \
	d44h0l132.o \
	d44h0l121.o \
	d45h0l1.o \
	d45h0l1d.o \
	d45h0l131.o \
	d45h0l132.o \
	d45h0l121.o \
	d46h0l1.o \
	d46h0l1d.o \
	d46h0l131.o \
	d46h0l132.o \
	d46h0l121.o \
	d48h0l1.o \
	d48h0l1d.o \
	d48h0l131.o \
	d48h0l132.o \
	d48h0l121.o \
	d49h0l1.o \
	d49h0l1d.o \
	d49h0l131.o \
	d49h0l132.o \
	d49h0l121.o \
	d50h0l1.o \
	d50h0l1d.o \
	d50h0l131.o \
	d50h0l132.o \
	d50h0l121.o \
	d52h0l1.o \
	d52h0l1d.o \
	d52h0l131.o \
	d52h0l132.o \
	d52h0l121.o \
	d53h0l1.o \
	d53h0l1d.o \
	d53h0l131.o \
	d53h0l132.o \
	d53h0l121.o \
	d55h0l1.o \
	d55h0l1d.o \
	d55h0l131.o \
	d55h0l132.o \
	d55h0l121.o \
	d57h0l1.o \
	d57h0l1d.o \
	d57h0l131.o \
	d57h0l132.o \
	d57h0l121.o \
	d58h0l1.o \
	d58h0l1d.o \
	d58h0l131.o \
	d58h0l132.o \
	d58h0l121.o \
	d60h0l1.o \
	d60h0l1d.o \
	d60h0l131.o \
	d60h0l132.o \
	d60h0l121.o \
	d62h0l1.o \
	d62h0l1d.o \
	d62h0l131.o \
	d62h0l132.o \
	d62h0l121.o \
	d63h0l1.o \
	d63h0l1d.o \
	d63h0l131.o \
	d63h0l132.o \
	d63h0l121.o \
	d65h0l1.o \
	d65h0l1d.o \
	d65h0l131.o \
	d65h0l132.o \
	d65h0l121.o \
	d68h0l1.o \
	d68h0l1d.o \
	d68h0l131.o \
	d68h0l132.o \
	d68h0l121.o \
	d73h0l1.o \
	d73h0l1d.o \
	d73h0l131.o \
	d73h0l132.o \
	d73h0l121.o \
	d75h0l1.o \
	d75h0l1d.o \
	d75h0l131.o \
	d75h0l132.o \
	d75h0l121.o \
	d96h0l1.o \
	d96h0l1d.o \
	d96h0l131.o \
	d96h0l132.o \
	d96h0l121.o \
	d105h0l1.o \
	d105h0l1d.o \
	d105h0l131.o \
	d105h0l132.o \
	d105h0l121.o \
	d114h0l1.o \
	d114h0l1d.o \
	d114h0l131.o \
	d114h0l132.o \
	d114h0l121.o \
	d120h0l1.o \
	d120h0l1d.o \
	d120h0l131.o \
	d120h0l132.o \
	d120h0l121.o \
	d121h0l1.o \
	d121h0l1d.o \
	d121h0l131.o \
	d121h0l132.o \
	d121h0l121.o \
	d124h0l1.o \
	d124h0l1d.o \
	d124h0l131.o \
	d124h0l132.o \
	d124h0l121.o \
	d126h0l1.o \
	d126h0l1d.o \
	d126h0l131.o \
	d126h0l132.o \
	d126h0l121.o \
	d132h0l1.o \
	d132h0l1d.o \
	d132h0l131.o \
	d132h0l132.o \
	d132h0l121.o \
	d133h0l1.o \
	d133h0l1d.o \
	d133h0l131.o \
	d133h0l132.o \
	d133h0l121.o \
	d136h0l1.o \
	d136h0l1d.o \
	d136h0l131.o \
	d136h0l132.o \
	d136h0l121.o \
	d138h0l1.o \
	d138h0l1d.o \
	d138h0l131.o \
	d138h0l132.o \
	d138h0l121.o \
	d144h0l1.o \
	d144h0l1d.o \
	d144h0l131.o \
	d144h0l132.o \
	d144h0l121.o \
	d145h0l1.o \
	d145h0l1d.o \
	d145h0l131.o \
	d145h0l132.o \
	d145h0l121.o \
	d148h0l1.o \
	d148h0l1d.o \
	d148h0l131.o \
	d148h0l132.o \
	d148h0l121.o \
	d150h0l1.o \
	d150h0l1d.o \
	d150h0l131.o \
	d150h0l132.o \
	d150h0l121.o \
	d156h0l1.o \
	d156h0l1d.o \
	d156h0l131.o \
	d156h0l132.o \
	d156h0l121.o \
	d157h0l1.o \
	d157h0l1d.o \
	d157h0l131.o \
	d157h0l132.o \
	d157h0l121.o \
	d160h0l1.o \
	d160h0l1d.o \
	d160h0l131.o \
	d160h0l132.o \
	d160h0l121.o \
	d162h0l1.o \
	d162h0l1d.o \
	d162h0l131.o \
	d162h0l132.o \
	d162h0l121.o \
	d168h0l1.o \
	d168h0l1d.o \
	d168h0l131.o \
	d168h0l132.o \
	d168h0l121.o \
	d169h0l1.o \
	d169h0l1d.o \
	d169h0l131.o \
	d169h0l132.o \
	d169h0l121.o \
	d170h0l1.o \
	d170h0l1d.o \
	d170h0l131.o \
	d170h0l132.o \
	d170h0l121.o \
	d172h0l1.o \
	d172h0l1d.o \
	d172h0l131.o \
	d172h0l132.o \
	d172h0l121.o \
	d175h0l1.o \
	d175h0l1d.o \
	d175h0l131.o \
	d175h0l132.o \
	d175h0l121.o \
	d176h0l1.o \
	d176h0l1d.o \
	d176h0l131.o \
	d176h0l132.o \
	d176h0l121.o \
	d177h0l1.o \
	d177h0l1d.o \
	d177h0l131.o \
	d177h0l132.o \
	d177h0l121.o \
	d179h0l1.o \
	d179h0l1d.o \
	d179h0l131.o \
	d179h0l132.o \
	d179h0l121.o \
	d185h0l1.o \
	d185h0l1d.o \
	d185h0l131.o \
	d185h0l132.o \
	d185h0l121.o \
	d186h0l1.o \
	d186h0l1d.o \
	d186h0l131.o \
	d186h0l132.o \
	d186h0l121.o \
	d187h0l1.o \
	d187h0l1d.o \
	d187h0l131.o \
	d187h0l132.o \
	d187h0l121.o \
	d189h0l1.o \
	d189h0l1d.o \
	d189h0l131.o \
	d189h0l132.o \
	d189h0l121.o \
	d195h0l1.o \
	d195h0l1d.o \
	d195h0l131.o \
	d195h0l132.o \
	d195h0l121.o \
	d196h0l1.o \
	d196h0l1d.o \
	d196h0l131.o \
	d196h0l132.o \
	d196h0l121.o \
	d199h0l1.o \
	d199h0l1d.o \
	d199h0l131.o \
	d199h0l132.o \
	d199h0l121.o \
	d201h0l1.o \
	d201h0l1d.o \
	d201h0l131.o \
	d201h0l132.o \
	d201h0l121.o
GENERATED_SRC= \
	diagramsl0.f90 \
	abbrevd1h0.f90 \
	abbrevd2h0.f90 \
	abbrevd3h0.f90 \
	abbrevd4h0.f90 \
	abbrevd5h0.f90 \
	abbrevd6h0.f90 \
	abbrevd7h0.f90 \
	abbrevd8h0.f90 \
	abbrevd10h0.f90 \
	abbrevd11h0.f90 \
	abbrevd14h0.f90 \
	abbrevd16h0.f90 \
	abbrevd17h0.f90 \
	abbrevd24h0.f90 \
	abbrevd25h0.f90 \
	abbrevd27h0.f90 \
	abbrevd28h0.f90 \
	abbrevd30h0.f90 \
	abbrevd31h0.f90 \
	abbrevd32h0.f90 \
	abbrevd33h0.f90 \
	abbrevd35h0.f90 \
	abbrevd36h0.f90 \
	abbrevd37h0.f90 \
	abbrevd38h0.f90 \
	abbrevd40h0.f90 \
	abbrevd41h0.f90 \
	abbrevd42h0.f90 \
	abbrevd44h0.f90 \
	abbrevd45h0.f90 \
	abbrevd46h0.f90 \
	abbrevd48h0.f90 \
	abbrevd49h0.f90 \
	abbrevd50h0.f90 \
	abbrevd52h0.f90 \
	abbrevd53h0.f90 \
	abbrevd55h0.f90 \
	abbrevd57h0.f90 \
	abbrevd58h0.f90 \
	abbrevd60h0.f90 \
	abbrevd62h0.f90 \
	abbrevd63h0.f90 \
	abbrevd65h0.f90 \
	abbrevd68h0.f90 \
	abbrevd73h0.f90 \
	abbrevd75h0.f90 \
	abbrevd96h0.f90 \
	abbrevd105h0.f90 \
	abbrevd114h0.f90 \
	abbrevd120h0.f90 \
	abbrevd121h0.f90 \
	abbrevd124h0.f90 \
	abbrevd126h0.f90 \
	abbrevd132h0.f90 \
	abbrevd133h0.f90 \
	abbrevd136h0.f90 \
	abbrevd138h0.f90 \
	abbrevd144h0.f90 \
	abbrevd145h0.f90 \
	abbrevd148h0.f90 \
	abbrevd150h0.f90 \
	abbrevd156h0.f90 \
	abbrevd157h0.f90 \
	abbrevd160h0.f90 \
	abbrevd162h0.f90 \
	abbrevd168h0.f90 \
	abbrevd169h0.f90 \
	abbrevd170h0.f90 \
	abbrevd172h0.f90 \
	abbrevd175h0.f90 \
	abbrevd176h0.f90 \
	abbrevd177h0.f90 \
	abbrevd179h0.f90 \
	abbrevd185h0.f90 \
	abbrevd186h0.f90 \
	abbrevd187h0.f90 \
	abbrevd189h0.f90 \
	abbrevd195h0.f90 \
	abbrevd196h0.f90 \
	abbrevd199h0.f90 \
	abbrevd201h0.f90 \
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
	d5h0l1.f90 \
	d5h0l1d.f90 \
	d5h0l131.f90 \
	d5h0l132.f90 \
	d5h0l121.f90 \
	d6h0l1.f90 \
	d6h0l1d.f90 \
	d6h0l131.f90 \
	d6h0l132.f90 \
	d6h0l121.f90 \
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
	d14h0l1.f90 \
	d14h0l1d.f90 \
	d14h0l131.f90 \
	d14h0l132.f90 \
	d14h0l121.f90 \
	d16h0l1.f90 \
	d16h0l1d.f90 \
	d16h0l131.f90 \
	d16h0l132.f90 \
	d16h0l121.f90 \
	d17h0l1.f90 \
	d17h0l1d.f90 \
	d17h0l131.f90 \
	d17h0l132.f90 \
	d17h0l121.f90 \
	d24h0l1.f90 \
	d24h0l1d.f90 \
	d24h0l131.f90 \
	d24h0l132.f90 \
	d24h0l121.f90 \
	d25h0l1.f90 \
	d25h0l1d.f90 \
	d25h0l131.f90 \
	d25h0l132.f90 \
	d25h0l121.f90 \
	d27h0l1.f90 \
	d27h0l1d.f90 \
	d27h0l131.f90 \
	d27h0l132.f90 \
	d27h0l121.f90 \
	d28h0l1.f90 \
	d28h0l1d.f90 \
	d28h0l131.f90 \
	d28h0l132.f90 \
	d28h0l121.f90 \
	d30h0l1.f90 \
	d30h0l1d.f90 \
	d30h0l131.f90 \
	d30h0l132.f90 \
	d30h0l121.f90 \
	d31h0l1.f90 \
	d31h0l1d.f90 \
	d31h0l131.f90 \
	d31h0l132.f90 \
	d31h0l121.f90 \
	d32h0l1.f90 \
	d32h0l1d.f90 \
	d32h0l131.f90 \
	d32h0l132.f90 \
	d32h0l121.f90 \
	d33h0l1.f90 \
	d33h0l1d.f90 \
	d33h0l131.f90 \
	d33h0l132.f90 \
	d33h0l121.f90 \
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
	d40h0l1.f90 \
	d40h0l1d.f90 \
	d40h0l131.f90 \
	d40h0l132.f90 \
	d40h0l121.f90 \
	d41h0l1.f90 \
	d41h0l1d.f90 \
	d41h0l131.f90 \
	d41h0l132.f90 \
	d41h0l121.f90 \
	d42h0l1.f90 \
	d42h0l1d.f90 \
	d42h0l131.f90 \
	d42h0l132.f90 \
	d42h0l121.f90 \
	d44h0l1.f90 \
	d44h0l1d.f90 \
	d44h0l131.f90 \
	d44h0l132.f90 \
	d44h0l121.f90 \
	d45h0l1.f90 \
	d45h0l1d.f90 \
	d45h0l131.f90 \
	d45h0l132.f90 \
	d45h0l121.f90 \
	d46h0l1.f90 \
	d46h0l1d.f90 \
	d46h0l131.f90 \
	d46h0l132.f90 \
	d46h0l121.f90 \
	d48h0l1.f90 \
	d48h0l1d.f90 \
	d48h0l131.f90 \
	d48h0l132.f90 \
	d48h0l121.f90 \
	d49h0l1.f90 \
	d49h0l1d.f90 \
	d49h0l131.f90 \
	d49h0l132.f90 \
	d49h0l121.f90 \
	d50h0l1.f90 \
	d50h0l1d.f90 \
	d50h0l131.f90 \
	d50h0l132.f90 \
	d50h0l121.f90 \
	d52h0l1.f90 \
	d52h0l1d.f90 \
	d52h0l131.f90 \
	d52h0l132.f90 \
	d52h0l121.f90 \
	d53h0l1.f90 \
	d53h0l1d.f90 \
	d53h0l131.f90 \
	d53h0l132.f90 \
	d53h0l121.f90 \
	d55h0l1.f90 \
	d55h0l1d.f90 \
	d55h0l131.f90 \
	d55h0l132.f90 \
	d55h0l121.f90 \
	d57h0l1.f90 \
	d57h0l1d.f90 \
	d57h0l131.f90 \
	d57h0l132.f90 \
	d57h0l121.f90 \
	d58h0l1.f90 \
	d58h0l1d.f90 \
	d58h0l131.f90 \
	d58h0l132.f90 \
	d58h0l121.f90 \
	d60h0l1.f90 \
	d60h0l1d.f90 \
	d60h0l131.f90 \
	d60h0l132.f90 \
	d60h0l121.f90 \
	d62h0l1.f90 \
	d62h0l1d.f90 \
	d62h0l131.f90 \
	d62h0l132.f90 \
	d62h0l121.f90 \
	d63h0l1.f90 \
	d63h0l1d.f90 \
	d63h0l131.f90 \
	d63h0l132.f90 \
	d63h0l121.f90 \
	d65h0l1.f90 \
	d65h0l1d.f90 \
	d65h0l131.f90 \
	d65h0l132.f90 \
	d65h0l121.f90 \
	d68h0l1.f90 \
	d68h0l1d.f90 \
	d68h0l131.f90 \
	d68h0l132.f90 \
	d68h0l121.f90 \
	d73h0l1.f90 \
	d73h0l1d.f90 \
	d73h0l131.f90 \
	d73h0l132.f90 \
	d73h0l121.f90 \
	d75h0l1.f90 \
	d75h0l1d.f90 \
	d75h0l131.f90 \
	d75h0l132.f90 \
	d75h0l121.f90 \
	d96h0l1.f90 \
	d96h0l1d.f90 \
	d96h0l131.f90 \
	d96h0l132.f90 \
	d96h0l121.f90 \
	d105h0l1.f90 \
	d105h0l1d.f90 \
	d105h0l131.f90 \
	d105h0l132.f90 \
	d105h0l121.f90 \
	d114h0l1.f90 \
	d114h0l1d.f90 \
	d114h0l131.f90 \
	d114h0l132.f90 \
	d114h0l121.f90 \
	d120h0l1.f90 \
	d120h0l1d.f90 \
	d120h0l131.f90 \
	d120h0l132.f90 \
	d120h0l121.f90 \
	d121h0l1.f90 \
	d121h0l1d.f90 \
	d121h0l131.f90 \
	d121h0l132.f90 \
	d121h0l121.f90 \
	d124h0l1.f90 \
	d124h0l1d.f90 \
	d124h0l131.f90 \
	d124h0l132.f90 \
	d124h0l121.f90 \
	d126h0l1.f90 \
	d126h0l1d.f90 \
	d126h0l131.f90 \
	d126h0l132.f90 \
	d126h0l121.f90 \
	d132h0l1.f90 \
	d132h0l1d.f90 \
	d132h0l131.f90 \
	d132h0l132.f90 \
	d132h0l121.f90 \
	d133h0l1.f90 \
	d133h0l1d.f90 \
	d133h0l131.f90 \
	d133h0l132.f90 \
	d133h0l121.f90 \
	d136h0l1.f90 \
	d136h0l1d.f90 \
	d136h0l131.f90 \
	d136h0l132.f90 \
	d136h0l121.f90 \
	d138h0l1.f90 \
	d138h0l1d.f90 \
	d138h0l131.f90 \
	d138h0l132.f90 \
	d138h0l121.f90 \
	d144h0l1.f90 \
	d144h0l1d.f90 \
	d144h0l131.f90 \
	d144h0l132.f90 \
	d144h0l121.f90 \
	d145h0l1.f90 \
	d145h0l1d.f90 \
	d145h0l131.f90 \
	d145h0l132.f90 \
	d145h0l121.f90 \
	d148h0l1.f90 \
	d148h0l1d.f90 \
	d148h0l131.f90 \
	d148h0l132.f90 \
	d148h0l121.f90 \
	d150h0l1.f90 \
	d150h0l1d.f90 \
	d150h0l131.f90 \
	d150h0l132.f90 \
	d150h0l121.f90 \
	d156h0l1.f90 \
	d156h0l1d.f90 \
	d156h0l131.f90 \
	d156h0l132.f90 \
	d156h0l121.f90 \
	d157h0l1.f90 \
	d157h0l1d.f90 \
	d157h0l131.f90 \
	d157h0l132.f90 \
	d157h0l121.f90 \
	d160h0l1.f90 \
	d160h0l1d.f90 \
	d160h0l131.f90 \
	d160h0l132.f90 \
	d160h0l121.f90 \
	d162h0l1.f90 \
	d162h0l1d.f90 \
	d162h0l131.f90 \
	d162h0l132.f90 \
	d162h0l121.f90 \
	d168h0l1.f90 \
	d168h0l1d.f90 \
	d168h0l131.f90 \
	d168h0l132.f90 \
	d168h0l121.f90 \
	d169h0l1.f90 \
	d169h0l1d.f90 \
	d169h0l131.f90 \
	d169h0l132.f90 \
	d169h0l121.f90 \
	d170h0l1.f90 \
	d170h0l1d.f90 \
	d170h0l131.f90 \
	d170h0l132.f90 \
	d170h0l121.f90 \
	d172h0l1.f90 \
	d172h0l1d.f90 \
	d172h0l131.f90 \
	d172h0l132.f90 \
	d172h0l121.f90 \
	d175h0l1.f90 \
	d175h0l1d.f90 \
	d175h0l131.f90 \
	d175h0l132.f90 \
	d175h0l121.f90 \
	d176h0l1.f90 \
	d176h0l1d.f90 \
	d176h0l131.f90 \
	d176h0l132.f90 \
	d176h0l121.f90 \
	d177h0l1.f90 \
	d177h0l1d.f90 \
	d177h0l131.f90 \
	d177h0l132.f90 \
	d177h0l121.f90 \
	d179h0l1.f90 \
	d179h0l1d.f90 \
	d179h0l131.f90 \
	d179h0l132.f90 \
	d179h0l121.f90 \
	d185h0l1.f90 \
	d185h0l1d.f90 \
	d185h0l131.f90 \
	d185h0l132.f90 \
	d185h0l121.f90 \
	d186h0l1.f90 \
	d186h0l1d.f90 \
	d186h0l131.f90 \
	d186h0l132.f90 \
	d186h0l121.f90 \
	d187h0l1.f90 \
	d187h0l1d.f90 \
	d187h0l131.f90 \
	d187h0l132.f90 \
	d187h0l121.f90 \
	d189h0l1.f90 \
	d189h0l1d.f90 \
	d189h0l131.f90 \
	d189h0l132.f90 \
	d189h0l121.f90 \
	d195h0l1.f90 \
	d195h0l1d.f90 \
	d195h0l131.f90 \
	d195h0l132.f90 \
	d195h0l121.f90 \
	d196h0l1.f90 \
	d196h0l1d.f90 \
	d196h0l131.f90 \
	d196h0l132.f90 \
	d196h0l121.f90 \
	d199h0l1.f90 \
	d199h0l1d.f90 \
	d199h0l131.f90 \
	d199h0l132.f90 \
	d199h0l121.f90 \
	d201h0l1.f90 \
	d201h0l1d.f90 \
	d201h0l131.f90 \
	d201h0l132.f90 \
	d201h0l121.f90

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



d5h0l1: d5h0l1.f90 abbrevd5h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d5h0l1.txt
	$(MAKE) $(S) -f Makefile.source d5h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd5h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd5h0.o -I../common abbrevd5h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d5h0l1.o -I../common d5h0l1.f90
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



d16h0l1: d16h0l1.f90 abbrevd16h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d16h0l1.txt
	$(MAKE) $(S) -f Makefile.source d16h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd16h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd16h0.o -I../common abbrevd16h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d16h0l1.o -I../common d16h0l1.f90
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



d24h0l1: d24h0l1.f90 abbrevd24h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d24h0l1.txt
	$(MAKE) $(S) -f Makefile.source d24h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd24h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd24h0.o -I../common abbrevd24h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d24h0l1.o -I../common d24h0l1.f90
endif



d25h0l1: d25h0l1.f90 abbrevd25h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d25h0l1.txt
	$(MAKE) $(S) -f Makefile.source d25h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd25h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd25h0.o -I../common abbrevd25h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d25h0l1.o -I../common d25h0l1.f90
endif



d27h0l1: d27h0l1.f90 abbrevd27h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d27h0l1.txt
	$(MAKE) $(S) -f Makefile.source d27h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd27h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd27h0.o -I../common abbrevd27h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d27h0l1.o -I../common d27h0l1.f90
endif



d28h0l1: d28h0l1.f90 abbrevd28h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d28h0l1.txt
	$(MAKE) $(S) -f Makefile.source d28h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd28h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd28h0.o -I../common abbrevd28h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d28h0l1.o -I../common d28h0l1.f90
endif



d30h0l1: d30h0l1.f90 abbrevd30h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d30h0l1.txt
	$(MAKE) $(S) -f Makefile.source d30h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd30h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd30h0.o -I../common abbrevd30h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d30h0l1.o -I../common d30h0l1.f90
endif



d31h0l1: d31h0l1.f90 abbrevd31h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d31h0l1.txt
	$(MAKE) $(S) -f Makefile.source d31h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd31h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd31h0.o -I../common abbrevd31h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d31h0l1.o -I../common d31h0l1.f90
endif



d32h0l1: d32h0l1.f90 abbrevd32h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d32h0l1.txt
	$(MAKE) $(S) -f Makefile.source d32h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd32h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd32h0.o -I../common abbrevd32h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d32h0l1.o -I../common d32h0l1.f90
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



d41h0l1: d41h0l1.f90 abbrevd41h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d41h0l1.txt
	$(MAKE) $(S) -f Makefile.source d41h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd41h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd41h0.o -I../common abbrevd41h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d41h0l1.o -I../common d41h0l1.f90
endif



d42h0l1: d42h0l1.f90 abbrevd42h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d42h0l1.txt
	$(MAKE) $(S) -f Makefile.source d42h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd42h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd42h0.o -I../common abbrevd42h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d42h0l1.o -I../common d42h0l1.f90
endif



d44h0l1: d44h0l1.f90 abbrevd44h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d44h0l1.txt
	$(MAKE) $(S) -f Makefile.source d44h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd44h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd44h0.o -I../common abbrevd44h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d44h0l1.o -I../common d44h0l1.f90
endif



d45h0l1: d45h0l1.f90 abbrevd45h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d45h0l1.txt
	$(MAKE) $(S) -f Makefile.source d45h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd45h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd45h0.o -I../common abbrevd45h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d45h0l1.o -I../common d45h0l1.f90
endif



d46h0l1: d46h0l1.f90 abbrevd46h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d46h0l1.txt
	$(MAKE) $(S) -f Makefile.source d46h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd46h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd46h0.o -I../common abbrevd46h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d46h0l1.o -I../common d46h0l1.f90
endif



d48h0l1: d48h0l1.f90 abbrevd48h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d48h0l1.txt
	$(MAKE) $(S) -f Makefile.source d48h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd48h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd48h0.o -I../common abbrevd48h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d48h0l1.o -I../common d48h0l1.f90
endif



d49h0l1: d49h0l1.f90 abbrevd49h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d49h0l1.txt
	$(MAKE) $(S) -f Makefile.source d49h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd49h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd49h0.o -I../common abbrevd49h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d49h0l1.o -I../common d49h0l1.f90
endif



d50h0l1: d50h0l1.f90 abbrevd50h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d50h0l1.txt
	$(MAKE) $(S) -f Makefile.source d50h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd50h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd50h0.o -I../common abbrevd50h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d50h0l1.o -I../common d50h0l1.f90
endif



d52h0l1: d52h0l1.f90 abbrevd52h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d52h0l1.txt
	$(MAKE) $(S) -f Makefile.source d52h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd52h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd52h0.o -I../common abbrevd52h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d52h0l1.o -I../common d52h0l1.f90
endif



d53h0l1: d53h0l1.f90 abbrevd53h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d53h0l1.txt
	$(MAKE) $(S) -f Makefile.source d53h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd53h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd53h0.o -I../common abbrevd53h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d53h0l1.o -I../common d53h0l1.f90
endif



d55h0l1: d55h0l1.f90 abbrevd55h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d55h0l1.txt
	$(MAKE) $(S) -f Makefile.source d55h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd55h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd55h0.o -I../common abbrevd55h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d55h0l1.o -I../common d55h0l1.f90
endif



d57h0l1: d57h0l1.f90 abbrevd57h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d57h0l1.txt
	$(MAKE) $(S) -f Makefile.source d57h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd57h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd57h0.o -I../common abbrevd57h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d57h0l1.o -I../common d57h0l1.f90
endif



d58h0l1: d58h0l1.f90 abbrevd58h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d58h0l1.txt
	$(MAKE) $(S) -f Makefile.source d58h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd58h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd58h0.o -I../common abbrevd58h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d58h0l1.o -I../common d58h0l1.f90
endif



d60h0l1: d60h0l1.f90 abbrevd60h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d60h0l1.txt
	$(MAKE) $(S) -f Makefile.source d60h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd60h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd60h0.o -I../common abbrevd60h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d60h0l1.o -I../common d60h0l1.f90
endif



d62h0l1: d62h0l1.f90 abbrevd62h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d62h0l1.txt
	$(MAKE) $(S) -f Makefile.source d62h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd62h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd62h0.o -I../common abbrevd62h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d62h0l1.o -I../common d62h0l1.f90
endif



d63h0l1: d63h0l1.f90 abbrevd63h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d63h0l1.txt
	$(MAKE) $(S) -f Makefile.source d63h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd63h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd63h0.o -I../common abbrevd63h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d63h0l1.o -I../common d63h0l1.f90
endif



d65h0l1: d65h0l1.f90 abbrevd65h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d65h0l1.txt
	$(MAKE) $(S) -f Makefile.source d65h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd65h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd65h0.o -I../common abbrevd65h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d65h0l1.o -I../common d65h0l1.f90
endif



d68h0l1: d68h0l1.f90 abbrevd68h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d68h0l1.txt
	$(MAKE) $(S) -f Makefile.source d68h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd68h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd68h0.o -I../common abbrevd68h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d68h0l1.o -I../common d68h0l1.f90
endif



d73h0l1: d73h0l1.f90 abbrevd73h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d73h0l1.txt
	$(MAKE) $(S) -f Makefile.source d73h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd73h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd73h0.o -I../common abbrevd73h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d73h0l1.o -I../common d73h0l1.f90
endif



d75h0l1: d75h0l1.f90 abbrevd75h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d75h0l1.txt
	$(MAKE) $(S) -f Makefile.source d75h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd75h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd75h0.o -I../common abbrevd75h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d75h0l1.o -I../common d75h0l1.f90
endif



d96h0l1: d96h0l1.f90 abbrevd96h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d96h0l1.txt
	$(MAKE) $(S) -f Makefile.source d96h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd96h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd96h0.o -I../common abbrevd96h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d96h0l1.o -I../common d96h0l1.f90
endif



d105h0l1: d105h0l1.f90 abbrevd105h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d105h0l1.txt
	$(MAKE) $(S) -f Makefile.source d105h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd105h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd105h0.o -I../common abbrevd105h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d105h0l1.o -I../common d105h0l1.f90
endif



d114h0l1: d114h0l1.f90 abbrevd114h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d114h0l1.txt
	$(MAKE) $(S) -f Makefile.source d114h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd114h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd114h0.o -I../common abbrevd114h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d114h0l1.o -I../common d114h0l1.f90
endif



d120h0l1: d120h0l1.f90 abbrevd120h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d120h0l1.txt
	$(MAKE) $(S) -f Makefile.source d120h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd120h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd120h0.o -I../common abbrevd120h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d120h0l1.o -I../common d120h0l1.f90
endif



d121h0l1: d121h0l1.f90 abbrevd121h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d121h0l1.txt
	$(MAKE) $(S) -f Makefile.source d121h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd121h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd121h0.o -I../common abbrevd121h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d121h0l1.o -I../common d121h0l1.f90
endif



d124h0l1: d124h0l1.f90 abbrevd124h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d124h0l1.txt
	$(MAKE) $(S) -f Makefile.source d124h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd124h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd124h0.o -I../common abbrevd124h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d124h0l1.o -I../common d124h0l1.f90
endif



d126h0l1: d126h0l1.f90 abbrevd126h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d126h0l1.txt
	$(MAKE) $(S) -f Makefile.source d126h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd126h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd126h0.o -I../common abbrevd126h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d126h0l1.o -I../common d126h0l1.f90
endif



d132h0l1: d132h0l1.f90 abbrevd132h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d132h0l1.txt
	$(MAKE) $(S) -f Makefile.source d132h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd132h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd132h0.o -I../common abbrevd132h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d132h0l1.o -I../common d132h0l1.f90
endif



d133h0l1: d133h0l1.f90 abbrevd133h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d133h0l1.txt
	$(MAKE) $(S) -f Makefile.source d133h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd133h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd133h0.o -I../common abbrevd133h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d133h0l1.o -I../common d133h0l1.f90
endif



d136h0l1: d136h0l1.f90 abbrevd136h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d136h0l1.txt
	$(MAKE) $(S) -f Makefile.source d136h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd136h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd136h0.o -I../common abbrevd136h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d136h0l1.o -I../common d136h0l1.f90
endif



d138h0l1: d138h0l1.f90 abbrevd138h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d138h0l1.txt
	$(MAKE) $(S) -f Makefile.source d138h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd138h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd138h0.o -I../common abbrevd138h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d138h0l1.o -I../common d138h0l1.f90
endif



d144h0l1: d144h0l1.f90 abbrevd144h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d144h0l1.txt
	$(MAKE) $(S) -f Makefile.source d144h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd144h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd144h0.o -I../common abbrevd144h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d144h0l1.o -I../common d144h0l1.f90
endif



d145h0l1: d145h0l1.f90 abbrevd145h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d145h0l1.txt
	$(MAKE) $(S) -f Makefile.source d145h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd145h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd145h0.o -I../common abbrevd145h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d145h0l1.o -I../common d145h0l1.f90
endif



d148h0l1: d148h0l1.f90 abbrevd148h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d148h0l1.txt
	$(MAKE) $(S) -f Makefile.source d148h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd148h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd148h0.o -I../common abbrevd148h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d148h0l1.o -I../common d148h0l1.f90
endif



d150h0l1: d150h0l1.f90 abbrevd150h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d150h0l1.txt
	$(MAKE) $(S) -f Makefile.source d150h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd150h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd150h0.o -I../common abbrevd150h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d150h0l1.o -I../common d150h0l1.f90
endif



d156h0l1: d156h0l1.f90 abbrevd156h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d156h0l1.txt
	$(MAKE) $(S) -f Makefile.source d156h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd156h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd156h0.o -I../common abbrevd156h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d156h0l1.o -I../common d156h0l1.f90
endif



d157h0l1: d157h0l1.f90 abbrevd157h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d157h0l1.txt
	$(MAKE) $(S) -f Makefile.source d157h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd157h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd157h0.o -I../common abbrevd157h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d157h0l1.o -I../common d157h0l1.f90
endif



d160h0l1: d160h0l1.f90 abbrevd160h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d160h0l1.txt
	$(MAKE) $(S) -f Makefile.source d160h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd160h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd160h0.o -I../common abbrevd160h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d160h0l1.o -I../common d160h0l1.f90
endif



d162h0l1: d162h0l1.f90 abbrevd162h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d162h0l1.txt
	$(MAKE) $(S) -f Makefile.source d162h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd162h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd162h0.o -I../common abbrevd162h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d162h0l1.o -I../common d162h0l1.f90
endif



d168h0l1: d168h0l1.f90 abbrevd168h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d168h0l1.txt
	$(MAKE) $(S) -f Makefile.source d168h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd168h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd168h0.o -I../common abbrevd168h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d168h0l1.o -I../common d168h0l1.f90
endif



d169h0l1: d169h0l1.f90 abbrevd169h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d169h0l1.txt
	$(MAKE) $(S) -f Makefile.source d169h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd169h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd169h0.o -I../common abbrevd169h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d169h0l1.o -I../common d169h0l1.f90
endif



d170h0l1: d170h0l1.f90 abbrevd170h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d170h0l1.txt
	$(MAKE) $(S) -f Makefile.source d170h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd170h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd170h0.o -I../common abbrevd170h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d170h0l1.o -I../common d170h0l1.f90
endif



d172h0l1: d172h0l1.f90 abbrevd172h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d172h0l1.txt
	$(MAKE) $(S) -f Makefile.source d172h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd172h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd172h0.o -I../common abbrevd172h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d172h0l1.o -I../common d172h0l1.f90
endif



d175h0l1: d175h0l1.f90 abbrevd175h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d175h0l1.txt
	$(MAKE) $(S) -f Makefile.source d175h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd175h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd175h0.o -I../common abbrevd175h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d175h0l1.o -I../common d175h0l1.f90
endif



d176h0l1: d176h0l1.f90 abbrevd176h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d176h0l1.txt
	$(MAKE) $(S) -f Makefile.source d176h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd176h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd176h0.o -I../common abbrevd176h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d176h0l1.o -I../common d176h0l1.f90
endif



d177h0l1: d177h0l1.f90 abbrevd177h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d177h0l1.txt
	$(MAKE) $(S) -f Makefile.source d177h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd177h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd177h0.o -I../common abbrevd177h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d177h0l1.o -I../common d177h0l1.f90
endif



d179h0l1: d179h0l1.f90 abbrevd179h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d179h0l1.txt
	$(MAKE) $(S) -f Makefile.source d179h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd179h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd179h0.o -I../common abbrevd179h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d179h0l1.o -I../common d179h0l1.f90
endif



d185h0l1: d185h0l1.f90 abbrevd185h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d185h0l1.txt
	$(MAKE) $(S) -f Makefile.source d185h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd185h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd185h0.o -I../common abbrevd185h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d185h0l1.o -I../common d185h0l1.f90
endif



d186h0l1: d186h0l1.f90 abbrevd186h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d186h0l1.txt
	$(MAKE) $(S) -f Makefile.source d186h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd186h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd186h0.o -I../common abbrevd186h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d186h0l1.o -I../common d186h0l1.f90
endif



d187h0l1: d187h0l1.f90 abbrevd187h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d187h0l1.txt
	$(MAKE) $(S) -f Makefile.source d187h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd187h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd187h0.o -I../common abbrevd187h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d187h0l1.o -I../common d187h0l1.f90
endif



d189h0l1: d189h0l1.f90 abbrevd189h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d189h0l1.txt
	$(MAKE) $(S) -f Makefile.source d189h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd189h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd189h0.o -I../common abbrevd189h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d189h0l1.o -I../common d189h0l1.f90
endif



d195h0l1: d195h0l1.f90 abbrevd195h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d195h0l1.txt
	$(MAKE) $(S) -f Makefile.source d195h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd195h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd195h0.o -I../common abbrevd195h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d195h0l1.o -I../common d195h0l1.f90
endif



d196h0l1: d196h0l1.f90 abbrevd196h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d196h0l1.txt
	$(MAKE) $(S) -f Makefile.source d196h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd196h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd196h0.o -I../common abbrevd196h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d196h0l1.o -I../common d196h0l1.f90
endif



d199h0l1: d199h0l1.f90 abbrevd199h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d199h0l1.txt
	$(MAKE) $(S) -f Makefile.source d199h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd199h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd199h0.o -I../common abbrevd199h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d199h0l1.o -I../common d199h0l1.f90
endif



d201h0l1: d201h0l1.f90 abbrevd201h0.f90 globals.o
ifeq ($(HAVE_ORIG_DIAGRAM_FILE),1)
	$(shell sed -e "s/Local diagram/Id diag/g" ../diagrams-1.hh > $(TEMPFILE))
	$(shell mv $(TEMPFILE) ../diagrams-1.hh)
endif
ifeq ($(HAVE_MAKEFILE_SOURCE),1)
	$(MAKE) $(S) -f Makefile.source d201h0l1.txt
	$(MAKE) $(S) -f Makefile.source d201h0l1.f90
	$(MAKE) $(S) -f Makefile.source abbrevd201h0.f90
	$(vecho) "-> Compiling $@ .."
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o abbrevd201h0.o -I../common abbrevd201h0.f90
	$(Q) $(FC) $(FC_OPTS) $(FCFLAGS) -c -o d201h0l1.o -I../common d201h0l1.f90
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
