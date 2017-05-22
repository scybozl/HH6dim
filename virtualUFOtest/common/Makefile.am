noinst_LTLIBRARIES=libgolem_process_gghh_common.la
libgolem_process_gghh_common_la_SOURCES= \
	config.f90 accu.f90 model.f90 color.f90 rambo.f90 globalsl1.f90 \
	util.f90 scalar_cache.f90 kinematics.f90 dipoles.f90 version.f90 groups.f90
nodist_pkginclude_HEADERS= \
	gghh_config.mod gghh_accu.mod gghh_model.mod gghh_color.mod gghh_rambo.mod gghh_globalsl1.mod \
	gghh_util.mod gghh_scalar_cache.mod gghh_kinematics.mod gghh_version.mod gghh_dipoles.mod gghh_groups.mod


CLEANFILES=$(nodist_pkginclude_HEADERS)
ACLOCAL_AMFLAGS=-I m4

AM_FCFLAGS=$(GOLEM_CONFIG_FCFLAGS)
AM_LDFLAGS=$(GOLEM_CONFIG_LDFLAGS)

GENERATED_SRC=model.f90 color.f90 version.f90

$(GENERATED_SRC): %:
	@if [ -f Makefile.source ]; \
	then \
		$(MAKE) -f Makefile.source "$@"; \
	fi

include Makefile.dep
