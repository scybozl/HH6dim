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
   #case 9
   #case 25
   #case 26
   #case 37
      #define r1 "0"
      #define m1sq "(0)^2-i_*(0*0)"
      #define r2 "-k2"
      #define m2sq "(0)^2-i_*(0*0)"
      #define r3 "-k3-k4"
      #define m3sq "(0)^2-i_*(0*0)"
      #break
*---#] Diagram group 0:
   #endswitch
   #switch `DIAG'
*---#[ Diagram group 0:
*------#[ Diagram 9:
   #case 9
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 9:
*------#[ Diagram 25:
   #case 25
      #call ReduceR2N2(`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 25:
*------#[ Diagram 26:
   #case 26
      #call ReduceR2N2(`r1',`m1sq',`r2',`m2sq')
      #break
*------#] Diagram 26:
*------#[ Diagram 37:
   #case 37
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 37:
*---#] Diagram group 0:
   #endswitch

   Id Qt2 = 0;
   Id eps = 0;

   Id fDUMMY1?{Spaa,Spab,Spbb,Spba}(vDUMMY1?, 0, vDUMMY3?) = 0;
   #call SpContractMetrics
   #call SpContract
   #call SpOpen(`LIGHTLIKE')
#endprocedure
