#!/bin/sh

if command -v realpath >/dev/null 2>&1 ; then
   PWD="$(dirname $(realpath "$0"))"
else
   PWD="$(dirname "$0")"
fi


MAKEFILECONF=$PWD/Makefile.conf

FC="$(sed -n 'H
   ${
   g
   s/\\[ \t]*\n[ \t]*//g
   p
   }' $MAKEFILECONF|\
   grep '^[ \t]*FC[ \t?]*='|sed 's/^[ \t]*FC[ \t?]*=//')"
LDFLAGS="$(sed -n 'H
   ${
   g
   s/\\[ \t]*\n[ \t]*//g
   p
   }' $MAKEFILECONF|\
   grep '^[ \t]*LDFLAGS[ \t?]*='|sed 's/^[ \t]*LDFLAGS[ \t?]*=//')"
CFLAGS="$(sed -n 'H
   ${
   g
   s/\\[ \t]*\n[ \t]*//g
   p
   }' $MAKEFILECONF|\
   grep '^[ \t]*FCFLAGS[ \t?]*='|sed 's/^[ \t]*FCFLAGS[ \t?]*=//')"


PROCESS_LDFLAGS="$PWD/matrix/matrix.a \
$PWD/helicity0/amplitude0.a \
$PWD/common/common.a"


PROCESS_CFLAGS="-I$PWD/matrix \
-I$PWD/helicity0 \
-I$PWD/common"

while [ $# -gt 0 ]; do
   case "$1" in
      -libs)
              printf " $PROCESS_LDFLAGS $LDFLAGS"
   ;;
      -cflags)
              printf " $PROCESS_CFLAGS $CFLAGS"
   ;;
      -plibs)
              printf " $PROCESS_LDFLAGS"
   ;;
      -pcflags)
              printf " $PROCESS_CFLAGS"
   ;;
      -olibs)
              printf " $LDFLAGS"
   ;;
      -ocflags)
              printf " $CFLAGS"
   ;;
      -deps)
              printf " $PROCESS_LDFLAGS"
   ;;
      -name)
              printf " gghh"
   ;;
      -fortcom)
              printf " $FC"
   ;;
      -help|--help)
              echo
              echo This script helps constructing the command line
              echo for linking the matrix element with an existing
              echo program.
              echo Examples:
              echo "   ``./config.sh -fortcom -c -o test.o test.f90 -cflags``"
              echo "   ``./config.sh -fortcom -o test.exe *.o -libs``"
              echo
              echo Options:
              echo "   -libs    prints the flags needed to link this code"
              echo "            including the libraries it depends on"
              echo "   -plibs   prints the flags needed to link this code"
              echo "            but not the libraries it depends on"
              echo "   -olibs   prints the flags needed to link the libraries"
              echo "            on which this code depends"
              echo "   -cflags  prints the flags needed to compile this code;"
              echo "            includes include paths of the dependencies"
              echo "   -pcflags prints the flags needed to compile this code;"
              echo "            does not include dependencies"
              echo "   -ocflags prints the compilation flags pointing to"
              echo "            include paths of dependencies"
              echo "   -deps    prints the paths to the files used by -libs"
              echo "   -fortcom the name of the fortran compiler in use"
              echo "   -name    prints the process name"
              echo "   -help    prints this screen"
   ;;
      *)
              printf " $1"
   ;;
   esac
   shift
done
echo

