#!/bin/sh
prefix=/usr/local
exec_prefix=${prefix}

FC=gfortran
LDFLAGS="  	-L/home/iwsatlas1/scyboz/Work/local/lib -lavh_olo 	-L/home/iwsatlas1/scyboz/Work/local/lib -lff 	-L/home/iwsatlas1/scyboz/Work/local/lib -lavh_olo 	-L/home/iwsatlas1/scyboz/Work/local/lib -lqcdloop 	-L/home/iwsatlas1/scyboz/Work/local/lib -lninja 	-L/home/iwsatlas1/scyboz/Work/local/lib -lqcdloop"
CFLAGS="  	-g -O2 -ffree-line-length-none 	-I/home/iwsatlas1/scyboz/Work/local/include/gosam-contrib 	-I/home/iwsatlas1/scyboz/Work/local/include/gosam-contrib 	-I/home/iwsatlas1/scyboz/Work/local/include/gosam-contrib 	-I/home/iwsatlas1/scyboz/Work/local/include/gosam-contrib"

PROCESS_LDFLAGS=" -L${exec_prefix}/lib -lgolem_process_gghh_smehc"
PROCESS_CFLAGS=" -I${prefix}/include/gosam_process-gghh_smehc"

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
      -name)
              printf " gghh_smehc"
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

