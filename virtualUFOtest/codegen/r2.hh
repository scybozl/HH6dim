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
   #case 195
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
   #case 10
   #case 24
   #case 33
   #case 40
   #case 44
   #case 132
   #case 144
   #case 168
   #case 185
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
   #case 7
   #case 27
   #case 36
   #case 48
   #case 120
   #case 156
   #case 175
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
*---#[ Diagram group 3:
   #case 49
   #case 126
   #case 196
      #define r1 "-k2+k4"
      #define m1sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #define r2 "-k2"
      #define m2sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #define r3 "0"
      #define m3sq "(0)^2-i_*(0*0)"
      #define r4 "-k3"
      #define m4sq "(0)^2-i_*(0*0)"
      #break
*---#] Diagram group 3:
*---#[ Diagram group 4:
   #case 3
   #case 4
   #case 5
   #case 11
   #case 14
   #case 25
   #case 30
   #case 32
   #case 42
   #case 46
   #case 52
   #case 55
   #case 60
   #case 65
   #case 75
   #case 114
   #case 133
   #case 145
   #case 172
   #case 189
      #define r1 "-k3-k4"
      #define m1sq "(0)^2-i_*(0*0)"
      #define r2 "-k3"
      #define m2sq "(0)^2-i_*(0*0)"
      #define r3 "0"
      #define m3sq "(0)^2-i_*(0*0)"
      #define r4 "-k2"
      #define m4sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #break
*---#] Diagram group 4:
*---#[ Diagram group 5:
   #case 201
      #define r1 "-k4"
      #define m1sq "(0)^2-i_*(0*0)"
      #define r2 "0"
      #define m2sq "(0)^2-i_*(0*0)"
      #define r3 "-k2"
      #define m3sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #define r4 "k3-k2"
      #define m4sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #break
*---#] Diagram group 5:
*---#[ Diagram group 6:
   #case 8
   #case 28
   #case 38
   #case 50
   #case 121
   #case 157
   #case 179
      #define r1 "-k3-k4"
      #define m1sq "(0)^2-i_*(0*0)"
      #define r2 "-k4"
      #define m2sq "(0)^2-i_*(0*0)"
      #define r3 "0"
      #define m3sq "(0)^2-i_*(0*0)"
      #define r4 "-k2"
      #define m4sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #break
*---#] Diagram group 6:
*---#[ Diagram group 7:
   #case 37
   #case 162
   #case 176
      #define r1 "k3-k2+k4"
      #define m1sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #define r2 "-k2+k4"
      #define m2sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #define r3 "-k2"
      #define m3sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #define r4 "0"
      #define m4sq "(0)^2-i_*(0*0)"
      #break
*---#] Diagram group 7:
*---#[ Diagram group 8:
   #case 6
   #case 17
   #case 31
   #case 35
   #case 41
   #case 45
   #case 53
   #case 58
   #case 63
   #case 68
   #case 73
   #case 138
   #case 150
   #case 169
   #case 186
      #define r1 "k3-k2+k4"
      #define m1sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #define r2 "k3-k2"
      #define m2sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #define r3 "-k2"
      #define m3sq "(mdlMh)^2-i_*(mdlWh*mdlMh)"
      #define r4 "0"
      #define m4sq "(0)^2-i_*(0*0)"
      #break
*---#] Diagram group 8:
*---#[ Diagram group 9:
   #case 105
   #case 136
   #case 148
   #case 199
      #define r1 "-k2+k4"
      #define m1sq "(mdlMT)^2-i_*(0*mdlMT)"
      #define r2 "-k2"
      #define m2sq "(mdlMT)^2-i_*(0*mdlMT)"
      #define r3 "0"
      #define m3sq "(mdlMT)^2-i_*(0*mdlMT)"
      #define r4 "-k3"
      #define m4sq "(mdlMT)^2-i_*(0*mdlMT)"
      #break
*---#] Diagram group 9:
*---#[ Diagram group 10:
   #case 187
      #define r1 "-k3-k4"
      #define m1sq "(mdlMT)^2-i_*(0*mdlMT)"
      #define r2 "-k3"
      #define m2sq "(mdlMT)^2-i_*(0*mdlMT)"
      #define r3 "0"
      #define m3sq "(mdlMT)^2-i_*(0*mdlMT)"
      #define r4 "-k2"
      #define m4sq "(mdlMT)^2-i_*(0*mdlMT)"
      #break
*---#] Diagram group 10:
*---#[ Diagram group 11:
   #case 16
   #case 57
   #case 62
   #case 96
   #case 124
   #case 160
   #case 170
   #case 177
      #define r1 "-k3-k4"
      #define m1sq "(mdlMT)^2-i_*(0*mdlMT)"
      #define r2 "-k4"
      #define m2sq "(mdlMT)^2-i_*(0*mdlMT)"
      #define r3 "0"
      #define m3sq "(mdlMT)^2-i_*(0*mdlMT)"
      #define r4 "-k2"
      #define m4sq "(mdlMT)^2-i_*(0*mdlMT)"
      #break
*---#] Diagram group 11:
   #endswitch
   #switch `DIAG'
*---#[ Diagram group 0:
*------#[ Diagram 195:
   #case 195
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 195:
*---#] Diagram group 0:
*---#[ Diagram group 1:
*------#[ Diagram 1:
   #case 1
      #call ReduceR2N2(`r1',`m1sq',`r4',`m4sq')
      #break
*------#] Diagram 1:
*------#[ Diagram 2:
   #case 2
      #call ReduceR2N2(`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 2:
*------#[ Diagram 10:
   #case 10
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 10:
*------#[ Diagram 24:
   #case 24
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 24:
*------#[ Diagram 33:
   #case 33
      #call ReduceR2N3(`r1',`m1sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 33:
*------#[ Diagram 40:
   #case 40
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 40:
*------#[ Diagram 44:
   #case 44
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 44:
*------#[ Diagram 132:
   #case 132
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 132:
*------#[ Diagram 144:
   #case 144
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 144:
*------#[ Diagram 168:
   #case 168
      #call ReduceR2N3(`r1',`m1sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 168:
*------#[ Diagram 185:
   #case 185
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 185:
*---#] Diagram group 1:
*---#[ Diagram group 2:
*------#[ Diagram 7:
   #case 7
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 7:
*------#[ Diagram 27:
   #case 27
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 27:
*------#[ Diagram 36:
   #case 36
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 36:
*------#[ Diagram 48:
   #case 48
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 48:
*------#[ Diagram 120:
   #case 120
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 120:
*------#[ Diagram 156:
   #case 156
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 156:
*------#[ Diagram 175:
   #case 175
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 175:
*---#] Diagram group 2:
*---#[ Diagram group 3:
*------#[ Diagram 49:
   #case 49
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 49:
*------#[ Diagram 126:
   #case 126
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 126:
*------#[ Diagram 196:
   #case 196
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 196:
*---#] Diagram group 3:
*---#[ Diagram group 4:
*------#[ Diagram 3:
   #case 3
      #call ReduceR2N2(`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 3:
*------#[ Diagram 4:
   #case 4
      #call ReduceR2N2(`r1',`m1sq',`r2',`m2sq')
      #break
*------#] Diagram 4:
*------#[ Diagram 5:
   #case 5
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 5:
*------#[ Diagram 11:
   #case 11
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 11:
*------#[ Diagram 14:
   #case 14
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 14:
*------#[ Diagram 25:
   #case 25
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 25:
*------#[ Diagram 30:
   #case 30
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 30:
*------#[ Diagram 32:
   #case 32
      #call ReduceR2N3(`r1',`m1sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 32:
*------#[ Diagram 42:
   #case 42
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 42:
*------#[ Diagram 46:
   #case 46
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 46:
*------#[ Diagram 52:
   #case 52
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 52:
*------#[ Diagram 55:
   #case 55
      #call ReduceR2N2(`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 55:
*------#[ Diagram 60:
   #case 60
      #call ReduceR2N2(`r1',`m1sq',`r2',`m2sq')
      #break
*------#] Diagram 60:
*------#[ Diagram 65:
   #case 65
      #call ReduceR2N2(`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 65:
*------#[ Diagram 75:
   #case 75
      #call ReduceR2N2(`r1',`m1sq',`r4',`m4sq')
      #break
*------#] Diagram 75:
*------#[ Diagram 114:
   #case 114
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 114:
*------#[ Diagram 133:
   #case 133
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 133:
*------#[ Diagram 145:
   #case 145
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 145:
*------#[ Diagram 172:
   #case 172
      #call ReduceR2N3(`r1',`m1sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 172:
*------#[ Diagram 189:
   #case 189
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 189:
*---#] Diagram group 4:
*---#[ Diagram group 5:
*------#[ Diagram 201:
   #case 201
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 201:
*---#] Diagram group 5:
*---#[ Diagram group 6:
*------#[ Diagram 8:
   #case 8
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 8:
*------#[ Diagram 28:
   #case 28
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 28:
*------#[ Diagram 38:
   #case 38
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 38:
*------#[ Diagram 50:
   #case 50
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 50:
*------#[ Diagram 121:
   #case 121
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 121:
*------#[ Diagram 157:
   #case 157
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 157:
*------#[ Diagram 179:
   #case 179
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 179:
*---#] Diagram group 6:
*---#[ Diagram group 7:
*------#[ Diagram 37:
   #case 37
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 37:
*------#[ Diagram 162:
   #case 162
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 162:
*------#[ Diagram 176:
   #case 176
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 176:
*---#] Diagram group 7:
*---#[ Diagram group 8:
*------#[ Diagram 6:
   #case 6
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 6:
*------#[ Diagram 17:
   #case 17
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 17:
*------#[ Diagram 31:
   #case 31
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 31:
*------#[ Diagram 35:
   #case 35
      #call ReduceR2N3(`r1',`m1sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 35:
*------#[ Diagram 41:
   #case 41
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 41:
*------#[ Diagram 45:
   #case 45
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 45:
*------#[ Diagram 53:
   #case 53
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 53:
*------#[ Diagram 58:
   #case 58
      #call ReduceR2N2(`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 58:
*------#[ Diagram 63:
   #case 63
      #call ReduceR2N2(`r1',`m1sq',`r2',`m2sq')
      #break
*------#] Diagram 63:
*------#[ Diagram 68:
   #case 68
      #call ReduceR2N2(`r1',`m1sq',`r2',`m2sq')
      #break
*------#] Diagram 68:
*------#[ Diagram 73:
   #case 73
      #call ReduceR2N2(`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 73:
*------#[ Diagram 138:
   #case 138
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 138:
*------#[ Diagram 150:
   #case 150
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 150:
*------#[ Diagram 169:
   #case 169
      #call ReduceR2N3(`r1',`m1sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 169:
*------#[ Diagram 186:
   #case 186
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 186:
*---#] Diagram group 8:
*---#[ Diagram group 9:
*------#[ Diagram 105:
   #case 105
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 105:
*------#[ Diagram 136:
   #case 136
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 136:
*------#[ Diagram 148:
   #case 148
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 148:
*------#[ Diagram 199:
   #case 199
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 199:
*---#] Diagram group 9:
*---#[ Diagram group 10:
*------#[ Diagram 187:
   #case 187
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 187:
*---#] Diagram group 10:
*---#[ Diagram group 11:
*------#[ Diagram 16:
   #case 16
      #call ReduceR2N2(`r1',`m1sq',`r3',`m3sq')
      #break
*------#] Diagram 16:
*------#[ Diagram 57:
   #case 57
      #call ReduceR2N2(`r1',`m1sq',`r2',`m2sq')
      #break
*------#] Diagram 57:
*------#[ Diagram 62:
   #case 62
      #call ReduceR2N2(`r2',`m2sq',`r3',`m3sq')
      #break
*------#] Diagram 62:
*------#[ Diagram 96:
   #case 96
      #call ReduceR2N2(`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 96:
*------#[ Diagram 124:
   #case 124
      #call ReduceR2N3(`r2',`m2sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 124:
*------#[ Diagram 160:
   #case 160
      #call ReduceR2N3(`r1',`m1sq',`r2',`m2sq',`r4',`m4sq')
      #break
*------#] Diagram 160:
*------#[ Diagram 170:
   #case 170
      #call ReduceR2N3(`r1',`m1sq',`r3',`m3sq',`r4',`m4sq')
      #break
*------#] Diagram 170:
*------#[ Diagram 177:
   #case 177
      #call ReduceR2N4(`r1',`r2',`r3',`r4')
      #break
*------#] Diagram 177:
*---#] Diagram group 11:
   #endswitch

   Id Qt2 = 0;
   Id eps = 0;

   Id fDUMMY1?{Spaa,Spab,Spbb,Spba}(vDUMMY1?, 0, vDUMMY3?) = 0;
   #call SpContractMetrics
   #call SpContract
   #call SpOpen(`LIGHTLIKE')
#endprocedure
