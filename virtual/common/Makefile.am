noinst_LTLIBRARIES=libgolem_process_gghh_smehc_common.la
libgolem_process_gghh_smehc_common_la_SOURCES= \
	config.f90 accu.f90 model.f90 color.f90 rambo.f90 globalsl1.f90 \
	util.f90 scalar_cache.f90 kinematics.f90 dipoles.f90 version.f90 groups.f90
nodist_pkginclude_HEADERS= \
	gghh_smehc_config.mod gghh_smehc_accu.mod gghh_smehc_model.mod gghh_smehc_color.mod gghh_smehc_rambo.mod gghh_smehc_globalsl1.mod \
	gghh_smehc_util.mod gghh_smehc_scalar_cache.mod gghh_smehc_kinematics.mod gghh_smehc_version.mod gghh_smehc_dipoles.mod gghh_smehc_groups.mod


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
