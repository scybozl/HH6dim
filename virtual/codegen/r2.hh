* vim: ts=3:sw=3:expandtab:syntax=form

#define R2PREFACTOR "1"

#procedure ReduceDiagramR2(DIAG)
   #call shiftmomenta(`DIAG',0)
   Argument Spab, Spaa, Spbb, Spba;
      #Call shiftmomenta(`DIAG',0)
   EndArgument;
   Id fDUMMY1?{Spaa,Spab,Spbb,Spba}(vDUMMY1?, iDUMMY2?, vDUMMY3?) =
      fDUMMY1(vDUMMY1, iDUMMY2, vDUMMY3);
   ToTensor Functions, Q, ptens;
   If(count(ptens,1)==0) Multiply ptens;

   #switch `DIAG'
*---#[ Diagram group 0:
   #case 3
   #case 8
   #case 10
   #case 13
   #case 33
   #case 36
   #case 40
      #define r1 "-k2+k4"
      #define m1sq "(0)^2-i_*(0*0)"
      #define r2 "-k2"
      #define m2sq "(0)^2-i_*(0*0)"
      #define r3 "0"
      #define m3sq "(0)^2-i_*(0*0)"
      #define r4 "-k3"
      #define m4sq "(0)^2-i_*(0*0)"
      #break
*---#] Diagram group 0:
*---#[ Diagram group 1:
   #case 1
   #case 2
   #case 4
   #case 7
   #case 9
   #case 11
   #case 12
   #case 14
   #case 17
   #case 21
   #case 34
   #case 35
   #case 37
   #case 39
      #define r1 "-k3-k4"
      #define m1sq "(0)^2-i_*(0*0)"
      #define r2 "-k3"
      #define m2sq "(0)^2-i_*(0*0)"
      #define r3 "0"
      #define m3sq "(0)^2-i_*(0*0)"
      #define r4 "-k2"
      #define m4sq "(0)^2-i_*(0*0)"
      #break
*---#] Diagram group 1:
*---#[ Diagram group 2:
   #case 38
      #define r1 "-k3-k4"
      #define m1sq "(0)^2-i_*(0*0)"
      #define r2 "-k4"
      #define m2sq "(0)^2-i_*(0*0)"
      #define r3 "0"
      #define m3sq "(0)^2-i_*(0*0)"
      #define r4 "-k2"
      #define m4sq "(0)^2-i_*(0*0)"
      #break
*---#] Diagram group 2:
   #endswitch
   #switch `DIAG'
*---#[ Diagram group 0:
*------#[ Diagram 3:
   #case 3
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 3:
*------#[ Diagram 8:
   #case 8
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 8:
*------#[ Diagram 10:
   #case 10
      #call ReduceR2N3(`r1',`m1sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 10:
*------#[ Diagram 13:
   #case 13
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 13:
*------#[ Diagram 33:
   #case 33
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 33:
*------#[ Diagram 36:
   #case 36
      #call ReduceR2N3(`r1',`m1sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 36:
*------#[ Diagram 40:
   #case 40
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 40:
*---#] Diagram group 0:
*---#[ Diagram group 1:
*------#[ Diagram 1:
   #case 1
      #call ReduceR2N2(`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 1:
*------#[ Diagram 2:
   #case 2
      #call ReduceR2N2(`r1',`m1sq',`r2',`m2sq')
      #break
*------#] Diagram 2:
*------#[ Diagram 4:
   #case 4
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 4:
*------#[ Diagram 7:
   #case 7
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 7:
*------#[ Diagram 9:
   #case 9
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 9:
*------#[ Diagram 11:
   #case 11
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 11:
*------#[ Diagram 12:
   #case 12
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 12:
*------#[ Diagram 14:
   #case 14
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 14:
*------#[ Diagram 17:
   #case 17
      #call ReduceR2N2(`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 17:
*------#[ Diagram 21:
   #case 21
      #call ReduceR2N2(`r1',`m1sq',`r4',`m4sq')
      #break
*------#] Diagram 21:
*------#[ Diagram 34:
   #case 34
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 34:
*------#[ Diagram 35:
   #case 35
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 35:
*------#[ Diagram 37:
   #case 37
      #call ReduceR2N3(`r1',`m1sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 37:
*------#[ Diagram 39:
   #case 39
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 39:
*---#] Diagram group 1:
*---#[ Diagram group 2:
*------#[ Diagram 38:
   #case 38
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 38:
*---#] Diagram group 2:
   #endswitch

   Id Qt2 = 0;
   Id eps = 0;

   Id fDUMMY1?{Spaa,Spab,Spbb,Spba}(vDUMMY1?, 0, vDUMMY3?) = 0;
   #call SpContractMetrics
   #call SpContract
   #call SpOpen(`LIGHTLIKE')
#endprocedure
