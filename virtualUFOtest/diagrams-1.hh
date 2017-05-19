* vim: syntax=form
*-----------------------------------------------------
*
* This file has been generated automatically
* by "qgraf-3.1.4" using the Feynman rules of the
* model "HEFT6dim_UFO".
* The file results from the following "qgraf.dat":
*
*---------- <qgraf.dat> ------------------------------
* output = 'diagrams-1.hh';
* style = 'form.sty';
* model = 'model';
* in = part21[k1], part21[k2];
* out = part5000000[k3], part5000000[k4];
* loops=1;
* loop_momentum=p;
* options=onshell, notadpole, nosnail;
* true=iprop[part1,part2,part3,part4,part5,0,0];
* true=vsum[QED,2,2];
*
*---------- END OF <qgraf.dat> -----------------------
*--#[diagrams:

*--#[ diagram1:
*
Local diagram1 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r4L0, k3, mdlMh) *
   outcolor(1, iv2r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r5L0, k4, mdlMh) *
   outcolor(2, iv2r5C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, p1+ZERO, iv2r3L2, +8, iv2r3C8,
      [field.part5000000], idx2r4, +0, -k3+ZERO, iv2r4L0, +1, iv2r4C1,
      [field.part5000000], idx2r5, +0, -k4+ZERO, iv2r5L0, +1, iv2r5C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv2r3C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r3L2, iv1r3L2)
;
*--#] diagram1:
*--#[ diagram2:
*
Local diagram2 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r4L0, k3, mdlMh) *
   outcolor(1, iv2r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r5L0, k4, mdlMh) *
   outcolor(2, iv2r5C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, p1+ZERO, iv2r3L2, +8, iv2r3C8,
      [field.part5000000], idx2r4, +0, -k3+ZERO, iv2r4L0, +1, iv2r4C1,
      [field.part5000000], idx2r5, +0, -k4+ZERO, iv2r5L0, +1, iv2r5C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv2r3C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r3L2, iv1r3L2)
;
*--#] diagram2:
*--#[ diagram3:
*
Local diagram3 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r2L2, k2, 0) *
   inpcolor(2, iv2r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r5L0, k4, mdlMh) *
   outcolor(2, iv2r5C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, p1+k3+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1-k3+ZERO, iv2r3L2, +8, iv2r3C8,
      [field.part21], idx2r4, +2, p1+ZERO, iv2r4L2, +8, iv2r4C8,
      [field.part5000000], idx2r5, +0, -k4+ZERO, iv2r5L0, +1, iv2r5C1) *
   propcolor(+8, iv2r3C8, iv1r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv2r3L2, iv1r1L2) *
   propcolor(+8, iv2r4C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r4L2, iv1r2L2)
;
*--#] diagram3:
*--#[ diagram4:
*
Local diagram4 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r2L2, k2, 0) *
   inpcolor(2, iv2r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r5L0, k3, mdlMh) *
   outcolor(1, iv2r5C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, p1+k4+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1-k4+ZERO, iv2r3L2, +8, iv2r3C8,
      [field.part21], idx2r4, +2, p1+ZERO, iv2r4L2, +8, iv2r4C8,
      [field.part5000000], idx2r5, +0, -k3+ZERO, iv2r5L0, +1, iv2r5C1) *
   propcolor(+8, iv2r3C8, iv1r1C8) *
   proplorentz(+2, p1+k4+ZERO, 0, 0, +0, iv2r3L2, iv1r1L2) *
   propcolor(+8, iv2r4C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r4L2, iv1r2L2)
;
*--#] diagram4:
*--#[ diagram5:
*
Local diagram5 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r4L0, k4, mdlMh) *
   outcolor(2, iv2r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, p1-k1-k2+ZERO, iv1r3L2, +8, iv1r3C8,
      [field.part21], idx1r4, +2, -p1+ZERO, iv1r4L2, +8, iv1r4C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k1+k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1,
      [field.part5000000], idx2r4, +0, -k4+ZERO, iv2r4L0, +1, iv2r4C1) *
   propcolor(+8, iv2r1C8, iv1r3C8) *
   proplorentz(+2, p1-k1-k2+ZERO, 0, 0, +0, iv2r1L2, iv1r3L2) *
   propcolor(+8, iv2r2C8, iv1r4C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r4L2)
;
*--#] diagram5:
*--#[ diagram6:
*
Local diagram6 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r2L0, k4, mdlMh) *
   outcolor(2, iv2r2C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1-k2+ZERO, iv1r3L0, +1, iv1r3C1,
      [field.part5000000], idx1r4, +0, -p1+ZERO, iv1r4L0, +1, iv1r4C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+k1+k2+ZERO, iv2r3L0, +1, iv2r3C1,
      [field.part5000000], idx2r4, +0, p1+ZERO, iv2r4L0, +1, iv2r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, p1-k1-k2+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+1, iv2r4C1, iv1r4C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r4L0, iv1r4L0)
;
*--#] diagram6:
*--#[ diagram7:
*
Local diagram7 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r4L0, k3, mdlMh) *
   outcolor(1, iv1r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r4L0, k4, mdlMh) *
   outcolor(2, iv2r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8,
      [field.part5000000], idx1r4, +0, -k3+ZERO, iv1r4L0, +1, iv1r4C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k1-k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, p1+ZERO, iv2r3L2, +8, iv2r3C8,
      [field.part5000000], idx2r4, +0, -k4+ZERO, iv2r4L0, +1, iv2r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv2r3C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r3L2, iv1r3L2)
;
*--#] diagram7:
*--#[ diagram8:
*
Local diagram8 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1,
      [field.part5000000], idx1r4, +0, -p1+ZERO, iv1r4L0, +1, iv1r4C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k1-k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1,
      [field.part5000000], idx2r4, +0, p1+ZERO, iv2r4L0, +1, iv2r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv2r4C1, iv1r4C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r4L0, iv1r4L0)
;
*--#] diagram8:
*--#[ diagram9:
*
Local diagram9 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1,
      [field.part5000000], idx1r4, +0, -p1+ZERO, iv1r4L0, +1, iv1r4C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k1-k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1,
      [field.part5000000], idx2r4, +0, p1+ZERO, iv2r4L0, +1, iv2r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv2r4C1, iv1r4C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r4L0, iv1r4L0)
;
*--#] diagram9:
*--#[ diagram10:
*
Local diagram10 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r4L0, k3, mdlMh) *
   outcolor(1, iv2r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r4L0, k4, mdlMh) *
   outcolor(2, iv1r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8,
      [field.part5000000], idx1r4, +0, -k4+ZERO, iv1r4L0, +1, iv1r4C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k1-k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, p1+ZERO, iv2r3L2, +8, iv2r3C8,
      [field.part5000000], idx2r4, +0, -k3+ZERO, iv2r4L0, +1, iv2r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv2r3C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r3L2, iv1r3L2)
;
*--#] diagram10:
*--#[ diagram11:
*
Local diagram11 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1,
      [field.part5000000], idx1r4, +0, -p1+ZERO, iv1r4L0, +1, iv1r4C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k1-k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1,
      [field.part5000000], idx2r4, +0, p1+ZERO, iv2r4L0, +1, iv2r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv2r4C1, iv1r4C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r4L0, iv1r4L0)
;
*--#] diagram11:
*--#[ diagram12:
*
Local diagram12 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1,
      [field.part5000000], idx1r4, +0, -p1+ZERO, iv1r4L0, +1, iv1r4C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k1-k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1,
      [field.part5000000], idx2r4, +0, p1+ZERO, iv2r4L0, +1, iv2r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv2r4C1, iv1r4C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r4L0, iv1r4L0)
;
*--#] diagram12:
*--#[ diagram13:
*
Local diagram13 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, +0, iv2r1L2, iv1r3L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, p1-k1-k2+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+8, iv3r2C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r2L2, iv2r3L2)
;
*--#] diagram13:
*--#[ diagram14:
*
Local diagram14 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1-k1-k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, k1+k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, p1-k1-k2+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2)
;
*--#] diagram14:
*--#[ diagram15:
*
Local diagram15 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1-k1-k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, k1+k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, p1-k1-k2+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2)
;
*--#] diagram15:
*--#[ diagram16:
*
Local diagram16 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1-k1-k2+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part5000000], idx2r3, +0, k1+k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1+k1+k2+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k1+k2+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1)
;
*--#] diagram16:
*--#[ diagram17:
*
Local diagram17 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r1L0, k3, mdlMh) *
   outcolor(1, iv3r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r2L0, k4, mdlMh) *
   outcolor(2, iv3r2C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, k1+k2+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1-k1-k2+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k3+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, -k4+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k1+k2+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r1C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv2r1L0, iv1r3L0) *
   propcolor(+1, iv3r3C1, iv2r2C1) *
   proplorentz(+0, p1-k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r2L0) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram17:
*--#[ diagram18:
*
Local diagram18 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1-k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r3L2)
;
*--#] diagram18:
*--#[ diagram19:
*
Local diagram19 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1-k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram19:
*--#[ diagram20:
*
Local diagram20 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1-k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram20:
*--#[ diagram21:
*
Local diagram21 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r4L0, k3, mdlMh) *
   outcolor(1, iv3r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1-k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r3L2)
;
*--#] diagram21:
*--#[ diagram22:
*
Local diagram22 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1-k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram22:
*--#[ diagram23:
*
Local diagram23 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1-k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram23:
*--#[ diagram24:
*
Local diagram24 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2-k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r3L2)
;
*--#] diagram24:
*--#[ diagram25:
*
Local diagram25 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2-k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram25:
*--#[ diagram26:
*
Local diagram26 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2-k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram26:
*--#[ diagram27:
*
Local diagram27 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r4L0, k3, mdlMh) *
   outcolor(1, iv3r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2-k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r3L2)
;
*--#] diagram27:
*--#[ diagram28:
*
Local diagram28 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2-k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram28:
*--#[ diagram29:
*
Local diagram29 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2-k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram29:
*--#[ diagram30:
*
Local diagram30 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r2L2, k2, 0) *
   inpcolor(2, iv3r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k3+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3-k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, -p1-k3-k4+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part21], idx3r4, +2, p1+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, p1+k3+k4+ZERO, 0, 0, +0, iv3r3L2, iv2r1L2) *
   propcolor(+8, iv3r4C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r4L2, iv2r2L2)
;
*--#] diagram30:
*--#[ diagram31:
*
Local diagram31 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r2L2, k2, 0) *
   inpcolor(2, iv3r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3-k4+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1+k3+k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1-k3-k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r1C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv2r1L0, iv1r3L0) *
   propcolor(+1, iv3r3C1, iv2r2C1) *
   proplorentz(+0, p1+k3+k4+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r2L0) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram31:
*--#[ diagram32:
*
Local diagram32 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2)
;
*--#] diagram32:
*--#[ diagram33:
*
Local diagram33 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r3C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r3L2, iv1r3L2) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2)
;
*--#] diagram33:
*--#[ diagram34:
*
Local diagram34 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2)
;
*--#] diagram34:
*--#[ diagram35:
*
Local diagram35 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r1L0, k3, mdlMh) *
   outcolor(1, iv3r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r2L0, k4, mdlMh) *
   outcolor(2, iv3r2C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k3+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, -k4+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k1+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r3C1, iv1r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv1r3L0) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram35:
*--#[ diagram36:
*
Local diagram36 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1-k3+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv3r3L2, iv2r1L2)
;
*--#] diagram36:
*--#[ diagram37:
*
Local diagram37 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -p1+k3+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1-k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv2r2C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r2L0)
;
*--#] diagram37:
*--#[ diagram38:
*
Local diagram38 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -p1+k1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r1L2)
;
*--#] diagram38:
*--#[ diagram39:
*
Local diagram39 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -p1+k1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r1L2)
;
*--#] diagram39:
*--#[ diagram40:
*
Local diagram40 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r4L0, k3, mdlMh) *
   outcolor(1, iv3r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1-k4+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv3r3L2, iv2r1L2)
;
*--#] diagram40:
*--#[ diagram41:
*
Local diagram41 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r1L0, k4, mdlMh) *
   outcolor(2, iv2r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k4+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -p1+k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1-k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv2r2C1) *
   proplorentz(+0, -p1+k4+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r2L0)
;
*--#] diagram41:
*--#[ diagram42:
*
Local diagram42 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -p1+k1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r1L2)
;
*--#] diagram42:
*--#[ diagram43:
*
Local diagram43 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -p1+k1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r1L2)
;
*--#] diagram43:
*--#[ diagram44:
*
Local diagram44 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1-k3+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv3r3L2, iv2r1L2)
;
*--#] diagram44:
*--#[ diagram45:
*
Local diagram45 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -p1+k3+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1-k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv2r2C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r2L0)
;
*--#] diagram45:
*--#[ diagram46:
*
Local diagram46 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -p1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r1L2)
;
*--#] diagram46:
*--#[ diagram47:
*
Local diagram47 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -p1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r1L2)
;
*--#] diagram47:
*--#[ diagram48:
*
Local diagram48 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r4L0, k3, mdlMh) *
   outcolor(1, iv3r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1-k4+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv3r3L2, iv2r1L2)
;
*--#] diagram48:
*--#[ diagram49:
*
Local diagram49 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r1L0, k4, mdlMh) *
   outcolor(2, iv2r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k4+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -p1+k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1-k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv2r2C1) *
   proplorentz(+0, -p1+k4+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r2L0)
;
*--#] diagram49:
*--#[ diagram50:
*
Local diagram50 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -p1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r1L2)
;
*--#] diagram50:
*--#[ diagram51:
*
Local diagram51 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -p1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r1L2)
;
*--#] diagram51:
*--#[ diagram52:
*
Local diagram52 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r2L2, k2, 0) *
   inpcolor(2, iv3r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, p1+k3+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, -p1-k3+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part21], idx3r4, +2, p1-k4+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv1r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv3r3L2, iv1r1L2) *
   propcolor(+8, iv3r4C8, iv2r1C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv3r4L2, iv2r1L2)
;
*--#] diagram52:
*--#[ diagram53:
*
Local diagram53 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r2L2, k2, 0) *
   inpcolor(2, iv3r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r1L0, k4, mdlMh) *
   outcolor(2, iv2r1C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, p1+k3+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k4+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -p1+k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1-k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1-k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+1, iv3r3C1, iv1r2C1) *
   proplorentz(+0, p1+k3+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv1r2L0) *
   propcolor(+1, iv3r4C1, iv2r2C1) *
   proplorentz(+0, -p1+k4+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r2L0)
;
*--#] diagram53:
*--#[ diagram54:
*
Local diagram54 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, +0, iv3r1L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv3r2L2, iv2r1L2) *
   propcolor(+8, iv3r3C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r2L2)
;
*--#] diagram54:
*--#[ diagram55:
*
Local diagram55 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, k1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2)
;
*--#] diagram55:
*--#[ diagram56:
*
Local diagram56 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, k1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2)
;
*--#] diagram56:
*--#[ diagram57:
*
Local diagram57 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1+k3+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1-k3+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, k1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, -p1-k3+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1)
;
*--#] diagram57:
*--#[ diagram58:
*
Local diagram58 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1+k3+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, k1+k2+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1-k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r2C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv1r3L0) *
   propcolor(+1, iv3r3C1, iv2r2C1) *
   proplorentz(+0, p1+k3+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r2L0) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram58:
*--#[ diagram59:
*
Local diagram59 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r4L0, k3, mdlMh) *
   outcolor(1, iv3r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, +0, iv3r1L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, p1+k4+ZERO, 0, 0, +0, iv3r2L2, iv2r1L2) *
   propcolor(+8, iv3r3C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r2L2)
;
*--#] diagram59:
*--#[ diagram60:
*
Local diagram60 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, k1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, p1+k4+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2)
;
*--#] diagram60:
*--#[ diagram61:
*
Local diagram61 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, k1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, p1+k4+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2)
;
*--#] diagram61:
*--#[ diagram62:
*
Local diagram62 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1+k4+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1-k4+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, k1+k2+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, -p1-k4+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1)
;
*--#] diagram62:
*--#[ diagram63:
*
Local diagram63 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r1L0, k3, mdlMh) *
   outcolor(1, iv3r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r1L0, k4, mdlMh) *
   outcolor(2, iv2r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k4+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1+k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k3+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, k1+k2+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1-k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r2C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv1r3L0) *
   propcolor(+1, iv3r3C1, iv2r2C1) *
   proplorentz(+0, p1+k4+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r2L0) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram63:
*--#[ diagram64:
*
Local diagram64 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r3L2)
;
*--#] diagram64:
*--#[ diagram65:
*
Local diagram65 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram65:
*--#[ diagram66:
*
Local diagram66 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram66:
*--#[ diagram67:
*
Local diagram67 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, -p1-k4+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part21], idx3r4, +2, p1+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, p1+k4+ZERO, 0, 0, +0, iv3r3L2, iv2r1L2) *
   propcolor(+8, iv3r4C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r4L2, iv2r2L2)
;
*--#] diagram67:
*--#[ diagram68:
*
Local diagram68 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r1L0, k4, mdlMh) *
   outcolor(2, iv2r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k4+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1+k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1-k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+1, iv3r3C1, iv2r2C1) *
   proplorentz(+0, p1+k4+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r2L0) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram68:
*--#[ diagram69:
*
Local diagram69 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r4L0, k3, mdlMh) *
   outcolor(1, iv3r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r3L2)
;
*--#] diagram69:
*--#[ diagram70:
*
Local diagram70 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram70:
*--#[ diagram71:
*
Local diagram71 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram71:
*--#[ diagram72:
*
Local diagram72 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, -p1-k3+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part21], idx3r4, +2, p1+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv3r3L2, iv2r1L2) *
   propcolor(+8, iv3r4C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r4L2, iv2r2L2)
;
*--#] diagram72:
*--#[ diagram73:
*
Local diagram73 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1+k3+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1-k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+1, iv3r3C1, iv2r2C1) *
   proplorentz(+0, p1+k3+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r2L0) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram73:
*--#[ diagram74:
*
Local diagram74 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r3L2)
;
*--#] diagram74:
*--#[ diagram75:
*
Local diagram75 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram75:
*--#[ diagram76:
*
Local diagram76 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram76:
*--#[ diagram77:
*
Local diagram77 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k2-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, -p1-k4+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part21], idx3r4, +2, p1+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, p1+k4+ZERO, 0, 0, +0, iv3r3L2, iv2r1L2) *
   propcolor(+8, iv3r4C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r4L2, iv2r2L2)
;
*--#] diagram77:
*--#[ diagram78:
*
Local diagram78 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r1L0, k4, mdlMh) *
   outcolor(2, iv2r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k4+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1+k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k2-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1-k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+1, iv3r3C1, iv2r2C1) *
   proplorentz(+0, p1+k4+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r2L0) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram78:
*--#[ diagram79:
*
Local diagram79 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r4L0, k3, mdlMh) *
   outcolor(1, iv3r4C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r3L2)
;
*--#] diagram79:
*--#[ diagram80:
*
Local diagram80 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram80:
*--#[ diagram81:
*
Local diagram81 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram81:
*--#[ diagram82:
*
Local diagram82 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k2-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, -p1-k3+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part21], idx3r4, +2, p1+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv3r3L2, iv2r1L2) *
   propcolor(+8, iv3r4C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r4L2, iv2r2L2)
;
*--#] diagram82:
*--#[ diagram83:
*
Local diagram83 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1+k3+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, k2-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1-k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv3r2L2, iv1r2L2) *
   propcolor(+1, iv3r3C1, iv2r2C1) *
   proplorentz(+0, p1+k3+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r2L0) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram83:
*--#[ diagram84:
*
Local diagram84 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k3-k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r3L2)
;
*--#] diagram84:
*--#[ diagram85:
*
Local diagram85 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3-k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram85:
*--#[ diagram86:
*
Local diagram86 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.part5000000], idx3r4, +0, -k3-k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r3L2, iv2r3L2)
;
*--#] diagram86:
*--#[ diagram87:
*
Local diagram87 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3-k4+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, p1+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv3r4C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r4L0, iv2r3L0)
;
*--#] diagram87:
*--#[ diagram88:
*
Local diagram88 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r2L0, k4, mdlMh) *
   outcolor(2, iv2r2C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, k3+k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1+k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1-k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, -p1+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1+k1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, +0, iv3r1L2, iv1r3L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r1C8, iv3r2C8) *
   proplorentz(+2, p1-k1-k2+ZERO, 0, 0, +0, iv4r1L2, iv3r2L2) *
   propcolor(+8, iv4r2C8, iv3r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv4r2L2, iv3r3L2)
;
*--#] diagram88:
*--#[ diagram89:
*
Local diagram89 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r2L0, k4, mdlMh) *
   outcolor(2, iv2r2C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, k3+k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1-k1-k2+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part21], idx3r3, +2, k1+k2+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k1+k2+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r3C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, +0, iv3r3L2, iv1r3L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, p1-k1-k2+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram89:
*--#[ diagram90:
*
Local diagram90 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r2L0, k4, mdlMh) *
   outcolor(2, iv2r2C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, k3+k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1-k1-k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, k1+k2+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1+k1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv3r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv1r3L0) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r1C8, iv3r1C8) *
   proplorentz(+2, p1-k1-k2+ZERO, 0, 0, +0, iv4r1L2, iv3r1L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram90:
*--#[ diagram91:
*
Local diagram91 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r2L0, k4, mdlMh) *
   outcolor(2, iv2r2C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, k3+k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1-k1-k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, k1+k2+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1+k1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv3r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv1r3L0) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r1C8, iv3r1C8) *
   proplorentz(+2, p1-k1-k2+ZERO, 0, 0, +0, iv4r1L2, iv3r1L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram91:
*--#[ diagram92:
*
Local diagram92 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r2L0, k4, mdlMh) *
   outcolor(2, iv2r2C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, -k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, k3+k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1-k1-k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, k1+k2+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1+k1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv3r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv1r3L0) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r1C8, iv3r1C8) *
   proplorentz(+2, p1-k1-k2+ZERO, 0, 0, +0, iv4r1L2, iv3r1L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram92:
*--#[ diagram93:
*
Local diagram93 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, -p1+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part21], idx4r3, +2, p1+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+8, iv4r3C8, iv3r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv4r3L2, iv3r3L2)
;
*--#] diagram93:
*--#[ diagram94:
*
Local diagram94 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram94:
*--#[ diagram95:
*
Local diagram95 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.anti9000005], idx3r1, -0, -p1+ZERO, iv3r1L0, -8, iv3r1C8,
      [field.part9000005], idx3r2, +0, p1-k1+k3+ZERO, iv3r2L0, +8, iv3r2C8,
      [field.part21], idx3r3, +2, k1-k3+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.anti9000005], idx4r1, -0, -p1+k1-k3+ZERO, iv4r1L0, -8, iv4r1C8,
      [field.part9000005], idx4r2, +0, p1+ZERO, iv4r2L0, +8, iv4r2C8,
      [field.part21], idx4r3, +2, k2-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv3r3C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r3L2, iv1r2L2) *
   propcolor(+8, iv4r3C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r3L2, iv2r2L2) *
   propcolor(+8, iv4r1C8, iv3r2C8) *
   proplorentz(+0, p1-k1+k3+ZERO, 0, 0, +0, iv4r1L0, iv3r2L0) *
   propcolor(+8, iv3r1C8, iv4r2C8) *
   proplorentz(+0, p1+ZERO, 0, 0, +0, iv3r1L0, iv4r2L0)
;
*--#] diagram95:
*--#[ diagram96:
*
Local diagram96 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1-k1+k3+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part21], idx3r3, +2, k1-k3+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k1-k3+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k2-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv3r3C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r3L2, iv1r2L2) *
   propcolor(+8, iv4r3C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r3L2, iv2r2L2) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, p1-k1+k3+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram96:
*--#[ diagram97:
*
Local diagram97 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram97:
*--#[ diagram98:
*
Local diagram98 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram98:
*--#[ diagram99:
*
Local diagram99 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram99:
*--#[ diagram100:
*
Local diagram100 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram100:
*--#[ diagram101:
*
Local diagram101 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv2r3L0, k4, mdlMh) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram101:
*--#[ diagram102:
*
Local diagram102 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, -p1+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part21], idx4r3, +2, p1+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+8, iv4r3C8, iv3r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv4r3L2, iv3r3L2)
;
*--#] diagram102:
*--#[ diagram103:
*
Local diagram103 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram103:
*--#[ diagram104:
*
Local diagram104 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.anti9000005], idx3r1, -0, -p1+ZERO, iv3r1L0, -8, iv3r1C8,
      [field.part9000005], idx3r2, +0, p1-k1+k4+ZERO, iv3r2L0, +8, iv3r2C8,
      [field.part21], idx3r3, +2, k1-k4+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.anti9000005], idx4r1, -0, -p1+k1-k4+ZERO, iv4r1L0, -8, iv4r1C8,
      [field.part9000005], idx4r2, +0, p1+ZERO, iv4r2L0, +8, iv4r2C8,
      [field.part21], idx4r3, +2, k2-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv3r3C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r3L2, iv1r2L2) *
   propcolor(+8, iv4r3C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r3L2, iv2r2L2) *
   propcolor(+8, iv4r1C8, iv3r2C8) *
   proplorentz(+0, p1-k1+k4+ZERO, 0, 0, +0, iv4r1L0, iv3r2L0) *
   propcolor(+8, iv3r1C8, iv4r2C8) *
   proplorentz(+0, p1+ZERO, 0, 0, +0, iv3r1L0, iv4r2L0)
;
*--#] diagram104:
*--#[ diagram105:
*
Local diagram105 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1-k1+k4+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part21], idx3r3, +2, k1-k4+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k1-k4+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k2-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv3r3C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r3L2, iv1r2L2) *
   propcolor(+8, iv4r3C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r3L2, iv2r2L2) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, p1-k1+k4+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram105:
*--#[ diagram106:
*
Local diagram106 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram106:
*--#[ diagram107:
*
Local diagram107 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram107:
*--#[ diagram108:
*
Local diagram108 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram108:
*--#[ diagram109:
*
Local diagram109 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram109:
*--#[ diagram110:
*
Local diagram110 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram110:
*--#[ diagram111:
*
Local diagram111 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part21], idx4r3, +2, p1-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r1C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, +0, iv4r1L2, iv1r3L2) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r3L2, iv3r2L2)
;
*--#] diagram111:
*--#[ diagram112:
*
Local diagram112 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1+k3+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1+k4+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, -p1-k3+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, p1-k4+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k1+k2+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, +0, iv4r3L2, iv1r3L2) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1) *
   propcolor(+3, iv2r2C3, iv4r1C3) *
   proplorentz(+1, -p1-k3+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv4r1L1) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k4+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1)
;
*--#] diagram112:
*--#[ diagram113:
*
Local diagram113 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part6], idx2r1, +1, p1+k3+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, -p1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+k4+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1-k4+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1-k3+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k1+k2+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, +0, iv4r3L2, iv1r3L2) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1) *
   propcolor(+3, iv4r2C3, iv2r1C3) *
   proplorentz(+1, p1+k3+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, p1-k4+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram113:
*--#[ diagram114:
*
Local diagram114 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, k1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram114:
*--#[ diagram115:
*
Local diagram115 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, k1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram115:
*--#[ diagram116:
*
Local diagram116 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, k1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram116:
*--#[ diagram117:
*
Local diagram117 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, k1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram117:
*--#[ diagram118:
*
Local diagram118 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, k1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram118:
*--#[ diagram119:
*
Local diagram119 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, -p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, k1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram119:
*--#[ diagram120:
*
Local diagram120 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, p1-k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part21], idx4r3, +2, p1-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv2r3C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv2r3L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r3L2, iv3r2L2)
;
*--#] diagram120:
*--#[ diagram121:
*
Local diagram121 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram121:
*--#[ diagram122:
*
Local diagram122 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram122:
*--#[ diagram123:
*
Local diagram123 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram123:
*--#[ diagram124:
*
Local diagram124 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r3L2, k2, 0) *
   inpcolor(2, iv2r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1-k2+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1+k4+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, -p1+k2+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, p1-k4+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k1-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r3C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r3L2, iv1r2L2) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1) *
   propcolor(+3, iv2r2C3, iv4r1C3) *
   proplorentz(+1, -p1+k2+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv4r1L1) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k4+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1)
;
*--#] diagram124:
*--#[ diagram125:
*
Local diagram125 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r3L2, k2, 0) *
   inpcolor(2, iv2r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, p1-k2+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, -p1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+k4+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1-k4+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k2+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k1-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r3C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r3L2, iv1r2L2) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1) *
   propcolor(+3, iv4r2C3, iv2r1C3) *
   proplorentz(+1, p1-k2+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, p1-k4+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram125:
*--#[ diagram126:
*
Local diagram126 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram126:
*--#[ diagram127:
*
Local diagram127 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram127:
*--#[ diagram128:
*
Local diagram128 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram128:
*--#[ diagram129:
*
Local diagram129 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram129:
*--#[ diagram130:
*
Local diagram130 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram130:
*--#[ diagram131:
*
Local diagram131 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram131:
*--#[ diagram132:
*
Local diagram132 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, p1-k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part21], idx4r3, +2, p1-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv2r3C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv2r3L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r3L2, iv3r2L2)
;
*--#] diagram132:
*--#[ diagram133:
*
Local diagram133 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram133:
*--#[ diagram134:
*
Local diagram134 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram134:
*--#[ diagram135:
*
Local diagram135 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram135:
*--#[ diagram136:
*
Local diagram136 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r3L2, k2, 0) *
   inpcolor(2, iv2r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1-k2+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1+k3+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, -p1+k2+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, p1-k3+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k1-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r3C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r3L2, iv1r2L2) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1) *
   propcolor(+3, iv2r2C3, iv4r1C3) *
   proplorentz(+1, -p1+k2+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv4r1L1) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k3+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1)
;
*--#] diagram136:
*--#[ diagram137:
*
Local diagram137 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r3L2, k2, 0) *
   inpcolor(2, iv2r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, p1-k2+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, -p1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+k3+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1-k3+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k2+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k1-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r3C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r3L2, iv1r2L2) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1) *
   propcolor(+3, iv4r2C3, iv2r1C3) *
   proplorentz(+1, p1-k2+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, p1-k3+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram137:
*--#[ diagram138:
*
Local diagram138 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r1L0, k3, mdlMh) *
   outcolor(1, iv3r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k3+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram138:
*--#[ diagram139:
*
Local diagram139 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram139:
*--#[ diagram140:
*
Local diagram140 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram140:
*--#[ diagram141:
*
Local diagram141 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram141:
*--#[ diagram142:
*
Local diagram142 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r1L0, k3, mdlMh) *
   outcolor(1, iv3r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k3+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram142:
*--#[ diagram143:
*
Local diagram143 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r1L0, k3, mdlMh) *
   outcolor(1, iv3r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k3+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram143:
*--#[ diagram144:
*
Local diagram144 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, p1-k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part21], idx4r3, +2, p1-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv2r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r2L2, iv2r3L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r3L2, iv3r2L2)
;
*--#] diagram144:
*--#[ diagram145:
*
Local diagram145 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram145:
*--#[ diagram146:
*
Local diagram146 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram146:
*--#[ diagram147:
*
Local diagram147 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram147:
*--#[ diagram148:
*
Local diagram148 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r3L2, k1, 0) *
   inpcolor(1, iv2r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1-k1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1+k4+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, -p1+k1+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, p1-k4+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k2-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r3C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r3L2, iv1r2L2) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1) *
   propcolor(+3, iv2r2C3, iv4r1C3) *
   proplorentz(+1, -p1+k1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv4r1L1) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k4+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1)
;
*--#] diagram148:
*--#[ diagram149:
*
Local diagram149 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r3L2, k1, 0) *
   inpcolor(1, iv2r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, p1-k1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, -p1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+k4+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1-k4+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k1+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k2-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r3C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r3L2, iv1r2L2) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1) *
   propcolor(+3, iv4r2C3, iv2r1C3) *
   proplorentz(+1, p1-k1+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, p1-k4+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram149:
*--#[ diagram150:
*
Local diagram150 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram150:
*--#[ diagram151:
*
Local diagram151 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram151:
*--#[ diagram152:
*
Local diagram152 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram152:
*--#[ diagram153:
*
Local diagram153 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram153:
*--#[ diagram154:
*
Local diagram154 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram154:
*--#[ diagram155:
*
Local diagram155 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r3L0, k3, mdlMh) *
   outcolor(1, iv1r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram155:
*--#[ diagram156:
*
Local diagram156 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, p1-k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part21], idx4r3, +2, p1-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv2r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r2L2, iv2r3L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r3L2, iv3r2L2)
;
*--#] diagram156:
*--#[ diagram157:
*
Local diagram157 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram157:
*--#[ diagram158:
*
Local diagram158 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram158:
*--#[ diagram159:
*
Local diagram159 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram159:
*--#[ diagram160:
*
Local diagram160 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r3L2, k1, 0) *
   inpcolor(1, iv2r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1-k1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1+k3+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, -p1+k1+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, p1-k3+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k2-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r3C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r3L2, iv1r2L2) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1) *
   propcolor(+3, iv2r2C3, iv4r1C3) *
   proplorentz(+1, -p1+k1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv4r1L1) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k3+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1)
;
*--#] diagram160:
*--#[ diagram161:
*
Local diagram161 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r3L2, k1, 0) *
   inpcolor(1, iv2r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, p1-k1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, -p1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+k3+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1-k3+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k1+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k2-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r3C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r3L2, iv1r2L2) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1) *
   propcolor(+3, iv4r2C3, iv2r1C3) *
   proplorentz(+1, p1-k1+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, p1-k3+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram161:
*--#[ diagram162:
*
Local diagram162 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r1L0, k3, mdlMh) *
   outcolor(1, iv3r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k3+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram162:
*--#[ diagram163:
*
Local diagram163 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram163:
*--#[ diagram164:
*
Local diagram164 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram164:
*--#[ diagram165:
*
Local diagram165 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r1L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram165:
*--#[ diagram166:
*
Local diagram166 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r1L0, k3, mdlMh) *
   outcolor(1, iv3r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k3+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram166:
*--#[ diagram167:
*
Local diagram167 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r1L0, k3, mdlMh) *
   outcolor(1, iv3r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r3L0, k4, mdlMh) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k3+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, p1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, -p1+k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, +0, iv4r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram167:
*--#[ diagram168:
*
Local diagram168 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, p1-k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part21], idx3r3, +2, -p1-k2+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1+k1+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv4r1C8, iv2r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r1L2, iv2r3L2) *
   propcolor(+8, iv4r2C8, iv3r3C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv3r3L2)
;
*--#] diagram168:
*--#[ diagram169:
*
Local diagram169 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1-k1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -p1-k2+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part5000000], idx4r1, +0, -k3-k4+ZERO, iv4r1L0, +1, iv4r1C1,
      [field.part5000000], idx4r2, +0, -p1+k1+ZERO, iv4r2L0, +1, iv4r2C1,
      [field.part5000000], idx4r3, +0, p1+k2+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r1C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r1L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv3r2L2, iv2r2L2) *
   propcolor(+1, iv4r2C1, iv2r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv4r2L0, iv2r3L0) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, -p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram169:
*--#[ diagram170:
*
Local diagram170 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r3L2, k1, 0) *
   inpcolor(1, iv2r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r3L2, k2, 0) *
   inpcolor(2, iv3r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1-k1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1-k2+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part21], idx3r3, +2, k2+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.part6], idx4r1, +1, -p1+k1+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, p1+k2+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1) *
   propcolor(+3, iv2r2C3, iv4r1C3) *
   proplorentz(+1, -p1+k1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv4r1L1) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, -p1-k2+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1)
;
*--#] diagram170:
*--#[ diagram171:
*
Local diagram171 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r3L2, k1, 0) *
   inpcolor(1, iv2r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r3L2, k2, 0) *
   inpcolor(2, iv3r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part6], idx2r1, +1, p1-k1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, -p1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1-k2+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part21], idx3r3, +2, k2+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1+k2+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k1+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1) *
   propcolor(+3, iv4r2C3, iv2r1C3) *
   proplorentz(+1, p1-k1+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, p1+k2+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram171:
*--#[ diagram172:
*
Local diagram172 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1-k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1+k1+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+1, iv3r3C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r3L0) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram172:
*--#[ diagram173:
*
Local diagram173 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1-k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1+k1+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+1, iv3r3C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r3L0) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram173:
*--#[ diagram174:
*
Local diagram174 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv1r1L0, k3, mdlMh) *
   outcolor(1, iv1r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv1r2L0, k4, mdlMh) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.part5000000], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.part5000000], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.part5000000], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, -p1-k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, p1+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, -p1+k1+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv1r3L0) *
   propcolor(+1, iv3r3C1, iv2r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv3r3L0, iv2r3L0) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram174:
*--#[ diagram175:
*
Local diagram175 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv4r3L0, k4, mdlMh) *
   outcolor(2, iv4r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, p1-k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1-k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r3L2) *
   propcolor(+8, iv4r1C8, iv2r3C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r3L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram175:
*--#[ diagram176:
*
Local diagram176 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r1L0, k3, mdlMh) *
   outcolor(1, iv3r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv4r1L0, k4, mdlMh) *
   outcolor(2, iv4r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k3+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, -p1+k1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, p1-k1+k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part5000000], idx4r1, +0, -k4+ZERO, iv4r1L0, +1, iv4r1C1,
      [field.part5000000], idx4r2, +0, p1+k2+ZERO, iv4r2L0, +1, iv4r2C1,
      [field.part5000000], idx4r3, +0, -p1+k1-k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv1r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv1r3L0) *
   propcolor(+1, iv4r2C1, iv2r3C1) *
   proplorentz(+0, -p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r2L0, iv2r3L0) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, p1-k1+k3+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram176:
*--#[ diagram177:
*
Local diagram177 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r3L2, k1, 0) *
   inpcolor(1, iv1r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r3L2, k2, 0) *
   inpcolor(2, iv2r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv4r3L0, k4, mdlMh) *
   outcolor(2, iv4r3C1) *
   vertex(iv1,
      [field.part6], idx1r1, +1, -p1+ZERO, iv1r1L1, +3, iv1r1C3,
      [field.anti6], idx1r2, -1, p1-k1+ZERO, iv1r2L1, -3, iv1r2C3,
      [field.part21], idx1r3, +2, k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1-k2+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1+k1+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1-k1+k3+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, -p1+k1-k3+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, p1+k2+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part5000000], idx4r3, +0, -k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+3, iv2r2C3, iv1r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv1r1L1) *
   propcolor(+3, iv1r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k1+ZERO, mdlMT, mdlWT, +0, iv1r2L1, iv3r1L1) *
   propcolor(+3, iv4r2C3, iv2r1C3) *
   proplorentz(+1, -p1-k2+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, -p1+k1-k3+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram177:
*--#[ diagram178:
*
Local diagram178 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r3L2, k1, 0) *
   inpcolor(1, iv1r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r3L2, k2, 0) *
   inpcolor(2, iv2r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv4r3L0, k4, mdlMh) *
   outcolor(2, iv4r3C1) *
   vertex(iv1,
      [field.part6], idx1r1, +1, p1-k1+ZERO, iv1r1L1, +3, iv1r1C3,
      [field.anti6], idx1r2, -1, -p1+ZERO, iv1r2L1, -3, iv1r2C3,
      [field.part21], idx1r3, +2, k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part6], idx2r1, +1, p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, -p1-k2+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1-k1+k3+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+k1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1+k2+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k1-k3+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part5000000], idx4r3, +0, -k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+3, iv1r2C3, iv2r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv1r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv1r1C3) *
   proplorentz(+1, p1-k1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv1r1L1) *
   propcolor(+3, iv2r2C3, iv4r1C3) *
   proplorentz(+1, p1+k2+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv4r1L1) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, p1-k1+k3+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1)
;
*--#] diagram178:
*--#[ diagram179:
*
Local diagram179 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv4r3L0, k4, mdlMh) *
   outcolor(2, iv4r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram179:
*--#[ diagram180:
*
Local diagram180 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv4r3L0, k4, mdlMh) *
   outcolor(2, iv4r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram180:
*--#[ diagram181:
*
Local diagram181 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv4r3L0, k4, mdlMh) *
   outcolor(2, iv4r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram181:
*--#[ diagram182:
*
Local diagram182 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv4r3L0, k4, mdlMh) *
   outcolor(2, iv4r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram182:
*--#[ diagram183:
*
Local diagram183 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv4r3L0, k4, mdlMh) *
   outcolor(2, iv4r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram183:
*--#[ diagram184:
*
Local diagram184 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv3r3L0, k3, mdlMh) *
   outcolor(1, iv3r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv4r3L0, k4, mdlMh) *
   outcolor(2, iv4r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram184:
*--#[ diagram185:
*
Local diagram185 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv4r3L0, k3, mdlMh) *
   outcolor(1, iv4r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, p1-k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part21], idx2r3, +2, -p1-k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r3L2) *
   propcolor(+8, iv4r1C8, iv2r3C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r3L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram185:
*--#[ diagram186:
*
Local diagram186 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv4r1L0, k3, mdlMh) *
   outcolor(1, iv4r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -p1-k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, -p1+k1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, p1-k1+k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part5000000], idx4r1, +0, -k3+ZERO, iv4r1L0, +1, iv4r1C1,
      [field.part5000000], idx4r2, +0, p1+k2+ZERO, iv4r2L0, +1, iv4r2C1,
      [field.part5000000], idx4r3, +0, -p1+k1-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r2L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv1r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv1r3L0) *
   propcolor(+1, iv4r2C1, iv2r3C1) *
   proplorentz(+0, -p1-k2+ZERO, mdlMh, mdlWh, +0, iv4r2L0, iv2r3L0) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, p1-k1+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram186:
*--#[ diagram187:
*
Local diagram187 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r3L2, k1, 0) *
   inpcolor(1, iv1r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r3L2, k2, 0) *
   inpcolor(2, iv2r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv4r3L0, k3, mdlMh) *
   outcolor(1, iv4r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part6], idx1r1, +1, -p1+ZERO, iv1r1L1, +3, iv1r1C3,
      [field.anti6], idx1r2, -1, p1-k1+ZERO, iv1r2L1, -3, iv1r2C3,
      [field.part21], idx1r3, +2, k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1-k2+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1+k1+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1-k1+k4+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, -p1+k1-k4+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, p1+k2+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part5000000], idx4r3, +0, -k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+3, iv2r2C3, iv1r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv1r1L1) *
   propcolor(+3, iv1r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k1+ZERO, mdlMT, mdlWT, +0, iv1r2L1, iv3r1L1) *
   propcolor(+3, iv4r2C3, iv2r1C3) *
   proplorentz(+1, -p1-k2+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, -p1+k1-k4+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram187:
*--#[ diagram188:
*
Local diagram188 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r3L2, k1, 0) *
   inpcolor(1, iv1r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r3L2, k2, 0) *
   inpcolor(2, iv2r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv4r3L0, k3, mdlMh) *
   outcolor(1, iv4r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part6], idx1r1, +1, p1-k1+ZERO, iv1r1L1, +3, iv1r1C3,
      [field.anti6], idx1r2, -1, -p1+ZERO, iv1r2L1, -3, iv1r2C3,
      [field.part21], idx1r3, +2, k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part6], idx2r1, +1, p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, -p1-k2+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1-k1+k4+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+k1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1+k2+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k1-k4+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part5000000], idx4r3, +0, -k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+3, iv1r2C3, iv2r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv1r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv1r1C3) *
   proplorentz(+1, p1-k1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv1r1L1) *
   propcolor(+3, iv2r2C3, iv4r1C3) *
   proplorentz(+1, p1+k2+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv4r1L1) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, p1-k1+k4+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1)
;
*--#] diagram188:
*--#[ diagram189:
*
Local diagram189 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv4r3L0, k3, mdlMh) *
   outcolor(1, iv4r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram189:
*--#[ diagram190:
*
Local diagram190 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv4r3L0, k3, mdlMh) *
   outcolor(1, iv4r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram190:
*--#[ diagram191:
*
Local diagram191 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv4r3L0, k3, mdlMh) *
   outcolor(1, iv4r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram191:
*--#[ diagram192:
*
Local diagram192 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv4r3L0, k3, mdlMh) *
   outcolor(1, iv4r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram192:
*--#[ diagram193:
*
Local diagram193 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv4r3L0, k3, mdlMh) *
   outcolor(1, iv4r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram193:
*--#[ diagram194:
*
Local diagram194 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv4r3L0, k3, mdlMh) *
   outcolor(1, iv4r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, p1+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, +0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram194:
*--#[ diagram195:
*
Local diagram195 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv4r1L2, k2, 0) *
   inpcolor(2, iv4r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part21], idx1r3, +2, p1-k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part21], idx4r3, +2, -p1+k1-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r3L2) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r3L2, iv3r2L2)
;
*--#] diagram195:
*--#[ diagram196:
*
Local diagram196 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv4r1L2, k2, 0) *
   inpcolor(2, iv4r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, -p1+k1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, p1-k1+k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv1r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv1r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, p1-k1+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram196:
*--#[ diagram197:
*
Local diagram197 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv4r1L2, k2, 0) *
   inpcolor(2, iv4r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, -p1+k1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, p1-k1+k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv1r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv1r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, p1-k1+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram197:
*--#[ diagram198:
*
Local diagram198 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv4r1L2, k2, 0) *
   inpcolor(2, iv4r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r1L0, k4, mdlMh) *
   outcolor(2, iv3r1C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, p1-k1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part21], idx2r1, +2, p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.part21], idx2r2, +2, -p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part5000000], idx3r1, +0, -k4+ZERO, iv3r1L0, +1, iv3r1C1,
      [field.part5000000], idx3r2, +0, -p1+k1+ZERO, iv3r2L0, +1, iv3r2C1,
      [field.part5000000], idx3r3, +0, p1-k1+k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, -p1+k1-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, +0, iv2r1L2, iv1r2L2) *
   propcolor(+1, iv3r2C1, iv1r3C1) *
   proplorentz(+0, p1-k1+ZERO, mdlMh, mdlWh, +0, iv3r2L0, iv1r3L0) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, +0, iv4r2L2, iv2r2L2) *
   propcolor(+1, iv4r3C1, iv3r3C1) *
   proplorentz(+0, p1-k1+k4+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv3r3L0)
;
*--#] diagram198:
*--#[ diagram199:
*
Local diagram199 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r3L2, k1, 0) *
   inpcolor(1, iv1r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv4r3L2, k2, 0) *
   inpcolor(2, iv4r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part6], idx1r1, +1, -p1+ZERO, iv1r1L1, +3, iv1r1C3,
      [field.anti6], idx1r2, -1, p1-k1+ZERO, iv1r2L1, -3, iv1r2C3,
      [field.part21], idx1r3, +2, k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+k3+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1+k1+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1-k1+k4+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, -p1+k1-k4+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, p1-k3+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k2+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+3, iv2r2C3, iv1r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv1r1L1) *
   propcolor(+3, iv1r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k1+ZERO, mdlMT, mdlWT, +0, iv1r2L1, iv3r1L1) *
   propcolor(+3, iv4r2C3, iv2r1C3) *
   proplorentz(+1, -p1+k3+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv4r1C3) *
   proplorentz(+1, -p1+k1-k4+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv4r1L1)
;
*--#] diagram199:
*--#[ diagram200:
*
Local diagram200 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r3L2, k1, 0) *
   inpcolor(1, iv1r3C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv4r3L2, k2, 0) *
   inpcolor(2, iv4r3C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r3L0, k3, mdlMh) *
   outcolor(1, iv2r3C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part6], idx1r1, +1, p1-k1+ZERO, iv1r1L1, +3, iv1r1C3,
      [field.anti6], idx1r2, -1, -p1+ZERO, iv1r2L1, -3, iv1r2C3,
      [field.part21], idx1r3, +2, k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part6], idx2r1, +1, p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, -p1+k3+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part5000000], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1-k1+k4+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+k1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part6], idx4r1, +1, p1-k3+ZERO, iv4r1L1, +3, iv4r1C3,
      [field.anti6], idx4r2, -1, -p1+k1-k4+ZERO, iv4r2L1, -3, iv4r2C3,
      [field.part21], idx4r3, +2, k2+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+3, iv1r2C3, iv2r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv1r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv1r1C3) *
   proplorentz(+1, p1-k1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv1r1L1) *
   propcolor(+3, iv2r2C3, iv4r1C3) *
   proplorentz(+1, p1-k3+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv4r1L1) *
   propcolor(+3, iv4r2C3, iv3r1C3) *
   proplorentz(+1, p1-k1+k4+ZERO, mdlMT, mdlWT, +0, iv4r2L1, iv3r1L1)
;
*--#] diagram200:
*--#[ diagram201:
*
Local diagram201 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv4r1L2, k2, 0) *
   inpcolor(2, iv4r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r2C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r2L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram201:
*--#[ diagram202:
*
Local diagram202 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv4r1L2, k2, 0) *
   inpcolor(2, iv4r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r2C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r2L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram202:
*--#[ diagram203:
*
Local diagram203 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.part21], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.part21], k2) *
   inplorentz(+2, iv4r1L2, k2, 0) *
   inpcolor(2, iv4r1C8) *
   out([field.part5000000], k3) *
   outlorentz(+0, iv2r1L0, k3, mdlMh) *
   outcolor(1, iv2r1C1) *
   out([field.part5000000], k4) *
   outlorentz(+0, iv3r3L0, k4, mdlMh) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.part21], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.part21], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.part5000000], idx1r3, +0, -p1+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.part5000000], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.part5000000], idx2r2, +0, p1+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.part5000000], idx2r3, +0, -p1+k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.part21], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.part21], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.part5000000], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.part21], idx4r1, +2, k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.part21], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.part5000000], idx4r3, +0, p1-k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv2r2C1, iv1r3C1) *
   proplorentz(+0, -p1+ZERO, mdlMh, mdlWh, +0, iv2r2L0, iv1r3L0) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, +0, iv3r1L2, iv1r2L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, -p1+k3+ZERO, mdlMh, mdlWh, +0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, +0, iv4r2L2, iv3r2L2)
;
*--#] diagram203:
*
* END OF DIAGRAMS
*
*--#]diagrams:
*--#[global:

#define DIAGRAMCOUNT "203"

*--#]global:


