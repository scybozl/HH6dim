dnl vim: ts=3:sw=3:expandtab
AC_INIT([GoSam_Process-gghh_smehc], [1.0],
	[email@domain])
AC_PREREQ([2.59])

GENERIC_LIBRARY_NAME=golem_process_gghh_smehc
GENERIC_PACKAGE_NAME=golem_process_gghh_smehc

GENERIC_VERSION=1.0.0
GENERIC_API_VERSION=1.0
GENERIC_LIBRARY_VERSION=1:0:0
PACKAGE=$GENERIC_PACKAGE_NAME


# Additional flags that are needed for linking
GOLEM_CONFIG_LDFLAGS=" \
	-L${HOME}/Work/local/lib -lavh_olo \
	-L/home/iwsatlas1/scyboz/Work/local/lib -lff \
	-L/home/iwsatlas1/scyboz/Work/local/lib -lavh_olo \
	-L/home/iwsatlas1/scyboz/Work/local/lib -lqcdloop \
	-L${HOME}/Work/local/lib -lninja \
	-L${HOME}/Work/local/lib -lqcdloop"
# Additional flags that are needed for compiling
GOLEM_CONFIG_FCFLAGS=" \
	-g -O2 -ffree-line-length-none \
	-I/home/iwsatlas1/scyboz/Work/local/include/gosam-contrib \
	-I/home/iwsatlas1/scyboz/Work/local/include/gosam-contrib \
	-I/home/iwsatlas1/scyboz/Work/local/include/gosam-contrib \
	-I${HOME}/Work/local/include/gosam-contrib"

AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([config.aux])

AM_INIT_AUTOMAKE([1.9.6 no-define no-dependencies foreign tar-pax])

AC_LANG_PUSH([Fortran])

AC_PROG_FC
AC_FC_LIBRARY_LDFLAGS
AC_FC_SRCEXT([f90])
AC_FC_FREEFORM
AC_FC_LINE_LENGTH([unlimited],[],[AC_MSG_WARN([Fortran compiler does not accept long source lines], 77)])

LT_INIT

#---#[ TeX stuff:
AC_PATH_PROG(LATEX, latex, "")
AC_PATH_PROG(PSTOPDF, pstopdf, "")
AC_PATH_PROG(DVIPS, dvips, "")
AC_PATH_PROG(MAKEINDEX, makeindex, "")
AM_CONDITIONAL(CONFIG_TEX, [test ! -z "$LATEX"])
AM_CONDITIONAL(CONFIG_PS, [test ! \( -z "$LATEX" -o -z "$DVIPS" \)])
AM_CONDITIONAL(CONFIG_PDF, [test ! -z "$PSTOPDF"])
AM_CONDITIONAL(CONFIG_MAKEINDEX, [test ! -z "$MAKEINDEX"])
#---#] TeX stuff:

AM_SANITY_CHECK

AC_SUBST(GENERIC_API_VERSION)
AC_SUBST(GENERIC_LIBRARY_VERSION)
AC_SUBST(GENERIC_LIBRARY_NAME)
AC_SUBST(GENERIC_VERSION)
AC_SUBST(GOLEM_CONFIG_FCFLAGS)
AC_SUBST(GOLEM_CONFIG_LDFLAGS)

AC_CONFIG_FILES([
   Makefile
   config.sh
   doc/Makefile
   common/Makefile
   helicity0/Makefile
   matrix/Makefile
])
AC_OUTPUT
