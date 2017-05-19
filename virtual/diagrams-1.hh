* vim: syntax=form
*-----------------------------------------------------
*
* This file has been generated automatically
* by "qgraf-3.1.4" using the Feynman rules of the
* model "Standard Model".
* The file results from the following "qgraf.dat":
*
*---------- <qgraf.dat> ------------------------------
* output = 'diagrams-1.hh';
* style = 'form.sty';
* model = 'model';
* in = g[k1], g[k2];
* out = H[k3], H[k4];
* loops=1;
* loop_momentum=p;
* options=onshell, nosnail;
* true=iprop[U,D,S,C,B,0,0];
* true=vsum[QED,2,2];
*
*---------- END OF <qgraf.dat> -----------------------
*--#[diagrams:

*--#[ diagram1:
*
Local diagram1 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r2L2, k2, 0) *
   inpcolor(2, iv2r2C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r5L0, k4, mH) *
   outcolor(2, iv2r5C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, p1+k3+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1-k3+ZERO, iv2r3L2, +8, iv2r3C8,
      [field.g], idx2r4, +2, p1+ZERO, iv2r4L2, +8, iv2r4C8,
      [field.H], idx2r5, +0, -k4+ZERO, iv2r5L0, +1, iv2r5C1) *
   propcolor(+8, iv2r3C8, iv1r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, 0, iv2r3L2, iv1r1L2) *
   propcolor(+8, iv2r4C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r4L2, iv1r2L2)
;
*--#] diagram1:
*--#[ diagram2:
*
Local diagram2 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r2L2, k2, 0) *
   inpcolor(2, iv2r2C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r5L0, k3, mH) *
   outcolor(1, iv2r5C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, p1+k4+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1-k4+ZERO, iv2r3L2, +8, iv2r3C8,
      [field.g], idx2r4, +2, p1+ZERO, iv2r4L2, +8, iv2r4C8,
      [field.H], idx2r5, +0, -k3+ZERO, iv2r5L0, +1, iv2r5C1) *
   propcolor(+8, iv2r3C8, iv1r1C8) *
   proplorentz(+2, p1+k4+ZERO, 0, 0, 0, iv2r3L2, iv1r1L2) *
   propcolor(+8, iv2r4C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r4L2, iv1r2L2)
;
*--#] diagram2:
*--#[ diagram3:
*
Local diagram3 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r4L0, k3, mH) *
   outcolor(1, iv1r4C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r4L0, k4, mH) *
   outcolor(2, iv2r4C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, p1-k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8,
      [field.H], idx1r4, +0, -k3+ZERO, iv1r4L0, +1, iv1r4C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+k1-k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, p1+ZERO, iv2r3L2, +8, iv2r3C8,
      [field.H], idx2r4, +0, -k4+ZERO, iv2r4L0, +1, iv2r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, 0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv2r3C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r3L2, iv1r3L2)
;
*--#] diagram3:
*--#[ diagram4:
*
Local diagram4 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r4L0, k3, mH) *
   outcolor(1, iv2r4C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r4L0, k4, mH) *
   outcolor(2, iv1r4C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, p1-k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8,
      [field.H], idx1r4, +0, -k4+ZERO, iv1r4L0, +1, iv1r4C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+k1-k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, p1+ZERO, iv2r3L2, +8, iv2r3C8,
      [field.H], idx2r4, +0, -k3+ZERO, iv2r4L0, +1, iv2r4C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, 0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv2r3C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r3L2, iv1r3L2)
;
*--#] diagram4:
*--#[ diagram5:
*
Local diagram5 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r4L0, k4, mH) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k1-k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1-k1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, 0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r3L2)
;
*--#] diagram5:
*--#[ diagram6:
*
Local diagram6 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv3r4L0, k3, mH) *
   outcolor(1, iv3r4C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k1-k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1-k1+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, 0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r3L2)
;
*--#] diagram6:
*--#[ diagram7:
*
Local diagram7 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r4L0, k4, mH) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2-k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1-k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k2-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, 0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+k3+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r3L2)
;
*--#] diagram7:
*--#[ diagram8:
*
Local diagram8 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv3r4L0, k3, mH) *
   outcolor(1, iv3r4C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2-k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1-k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k2-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, 0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+k4+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r3L2)
;
*--#] diagram8:
*--#[ diagram9:
*
Local diagram9 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv3r2L2, k2, 0) *
   inpcolor(2, iv3r2C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r1L0, k3, mH) *
   outcolor(1, iv1r1C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r2L0, k4, mH) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.H], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.H], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.H], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, p1+k3+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3-k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, -p1-k3-k4+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.g], idx3r4, +2, p1+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mH, wH, 0, iv2r3L0, iv1r3L0) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, p1+k3+k4+ZERO, 0, 0, 0, iv3r3L2, iv2r1L2) *
   propcolor(+8, iv3r4C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r4L2, iv2r2L2)
;
*--#] diagram9:
*--#[ diagram10:
*
Local diagram10 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r3L0, k3, mH) *
   outcolor(1, iv2r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r4L0, k4, mH) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.g], idx2r1, +2, -p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1-k3+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r2L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, 0, iv3r3L2, iv2r1L2)
;
*--#] diagram10:
*--#[ diagram11:
*
Local diagram11 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv3r4L0, k3, mH) *
   outcolor(1, iv3r4C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r3L0, k4, mH) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, p1-k1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.g], idx2r1, +2, -p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1-k4+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r2L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, 0, iv3r3L2, iv2r1L2)
;
*--#] diagram11:
*--#[ diagram12:
*
Local diagram12 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r3L0, k3, mH) *
   outcolor(1, iv2r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r4L0, k4, mH) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, p1-k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.g], idx2r1, +2, -p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1-k3+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r2L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, 0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, 0, iv3r3L2, iv2r1L2)
;
*--#] diagram12:
*--#[ diagram13:
*
Local diagram13 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv3r4L0, k3, mH) *
   outcolor(1, iv3r4C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r3L0, k4, mH) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, p1-k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, -p1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.g], idx2r1, +2, -p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1-k4+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r2C8, iv1r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r2L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, 0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, 0, iv3r3L2, iv2r1L2)
;
*--#] diagram13:
*--#[ diagram14:
*
Local diagram14 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv3r2L2, k2, 0) *
   inpcolor(2, iv3r2C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r3L0, k4, mH) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, p1+k3+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, -p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, -p1-k3+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.g], idx3r4, +2, p1-k4+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv1r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, 0, iv3r3L2, iv1r1L2) *
   propcolor(+8, iv3r4C8, iv2r1C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, 0, iv3r4L2, iv2r1L2)
;
*--#] diagram14:
*--#[ diagram15:
*
Local diagram15 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r3L0, k3, mH) *
   outcolor(1, iv2r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r4L0, k4, mH) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.g], idx2r1, +2, p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv3r1L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, 0, iv3r2L2, iv2r1L2) *
   propcolor(+8, iv3r3C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r2L2)
;
*--#] diagram15:
*--#[ diagram16:
*
Local diagram16 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.H], k3) *
   outlorentz(+0, iv3r4L0, k3, mH) *
   outcolor(1, iv3r4C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r3L0, k4, mH) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.g], idx2r1, +2, p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv3r1L2, iv1r3L2) *
   propcolor(+8, iv3r2C8, iv2r1C8) *
   proplorentz(+2, p1+k4+ZERO, 0, 0, 0, iv3r2L2, iv2r1L2) *
   propcolor(+8, iv3r3C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r2L2)
;
*--#] diagram16:
*--#[ diagram17:
*
Local diagram17 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r4L0, k4, mH) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, 0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r3L2)
;
*--#] diagram17:
*--#[ diagram18:
*
Local diagram18 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r3L0, k4, mH) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, k1-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, -p1-k4+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.g], idx3r4, +2, p1+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, 0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, p1+k4+ZERO, 0, 0, 0, iv3r3L2, iv2r1L2) *
   propcolor(+8, iv3r4C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r4L2, iv2r2L2)
;
*--#] diagram18:
*--#[ diagram19:
*
Local diagram19 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv3r4L0, k3, mH) *
   outcolor(1, iv3r4C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, 0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r3L2)
;
*--#] diagram19:
*--#[ diagram20:
*
Local diagram20 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r3L0, k3, mH) *
   outcolor(1, iv2r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, k1-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, -p1-k3+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.g], idx3r4, +2, p1+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, 0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, 0, iv3r3L2, iv2r1L2) *
   propcolor(+8, iv3r4C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r4L2, iv2r2L2)
;
*--#] diagram20:
*--#[ diagram21:
*
Local diagram21 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r4L0, k4, mH) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k2-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, 0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r3L2)
;
*--#] diagram21:
*--#[ diagram22:
*
Local diagram22 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r3L0, k4, mH) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, p1+k4+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, k2-k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, -p1-k4+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.g], idx3r4, +2, p1+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, 0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, p1+k4+ZERO, 0, 0, 0, iv3r3L2, iv2r1L2) *
   propcolor(+8, iv3r4C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r4L2, iv2r2L2)
;
*--#] diagram22:
*--#[ diagram23:
*
Local diagram23 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv3r4L0, k3, mH) *
   outcolor(1, iv3r4C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k2-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k3+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, 0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r3L2)
;
*--#] diagram23:
*--#[ diagram24:
*
Local diagram24 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r3L0, k3, mH) *
   outcolor(1, iv2r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, p1+k3+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, k2-k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, -p1-k3+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.g], idx3r4, +2, p1+ZERO, iv3r4L2, +8, iv3r4C8) *
   propcolor(+8, iv3r2C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, 0, iv3r2L2, iv1r2L2) *
   propcolor(+8, iv3r3C8, iv2r1C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, 0, iv3r3L2, iv2r1L2) *
   propcolor(+8, iv3r4C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r4L2, iv2r2L2)
;
*--#] diagram24:
*--#[ diagram25:
*
Local diagram25 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r1L0, k3, mH) *
   outcolor(1, iv1r1C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r2L0, k4, mH) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.H], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.H], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.H], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1-k1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k3-k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mH, wH, 0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r3L2)
;
*--#] diagram25:
*--#[ diagram26:
*
Local diagram26 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv3r1L2, k1, 0) *
   inpcolor(1, iv3r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r1L0, k3, mH) *
   outcolor(1, iv1r1C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r2L0, k4, mH) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.H], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.H], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.H], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1-k2+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, p1+ZERO, iv3r3L2, +8, iv3r3C8,
      [field.H], idx3r4, +0, -k3-k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+1, iv3r4C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mH, wH, 0, iv3r4L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv3r3C8, iv2r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r3L2, iv2r3L2)
;
*--#] diagram26:
*--#[ diagram27:
*
Local diagram27 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r1L0, k3, mH) *
   outcolor(1, iv2r1C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r2L0, k4, mH) *
   outcolor(2, iv2r2C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.H], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.H], idx2r2, +0, -k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.H], idx2r3, +0, k3+k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1+k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, p1-k1-k2+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, -p1+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.g], idx4r1, +2, -p1+k1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, p1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.H], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv3r1L2, iv1r3L2) *
   propcolor(+1, iv4r3C1, iv2r3C1) *
   proplorentz(+0, k3+k4+ZERO, mH, wH, 0, iv4r3L0, iv2r3L0) *
   propcolor(+8, iv4r1C8, iv3r2C8) *
   proplorentz(+2, p1-k1-k2+ZERO, 0, 0, 0, iv4r1L2, iv3r2L2) *
   propcolor(+8, iv4r2C8, iv3r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv4r2L2, iv3r3L2)
;
*--#] diagram27:
*--#[ diagram28:
*
Local diagram28 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r3L0, k4, mH) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.ghbar], idx3r1, -0, -p1+ZERO, iv3r1L0, -8, iv3r1C8,
      [field.gh], idx3r2, +0, p1-k1+k3+ZERO, iv3r2L0, +8, iv3r2C8,
      [field.g], idx3r3, +2, k1-k3+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.ghbar], idx4r1, -0, -p1+k1-k3+ZERO, iv4r1L0, -8, iv4r1C8,
      [field.gh], idx4r2, +0, p1+ZERO, iv4r2L0, +8, iv4r2C8,
      [field.g], idx4r3, +2, k2-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv3r3C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, 0, iv3r3L2, iv1r2L2) *
   propcolor(+8, iv4r3C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, 0, iv4r3L2, iv2r2L2) *
   propcolor(+8, iv4r1C8, iv3r2C8) *
   proplorentz(+0, p1-k1+k3+ZERO, 0, 0, 0, iv4r1L0, iv3r2L0) *
   propcolor(+8, iv3r1C8, iv4r2C8) *
   proplorentz(+0, p1+ZERO, 0, 0, 0, iv3r1L0, iv4r2L0)
;
*--#] diagram28:
*--#[ diagram29:
*
Local diagram29 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv2r3L0, k4, mH) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -k2+k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1-k3+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, -p1+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.g], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.g], idx4r3, +2, p1+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, 0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, 0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, 0, iv4r2L2, iv3r2L2) *
   propcolor(+8, iv4r3C8, iv3r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv4r3L2, iv3r3L2)
;
*--#] diagram29:
*--#[ diagram30:
*
Local diagram30 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r3L0, k3, mH) *
   outcolor(1, iv2r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.ghbar], idx3r1, -0, -p1+ZERO, iv3r1L0, -8, iv3r1C8,
      [field.gh], idx3r2, +0, p1-k1+k4+ZERO, iv3r2L0, +8, iv3r2C8,
      [field.g], idx3r3, +2, k1-k4+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.ghbar], idx4r1, -0, -p1+k1-k4+ZERO, iv4r1L0, -8, iv4r1C8,
      [field.gh], idx4r2, +0, p1+ZERO, iv4r2L0, +8, iv4r2C8,
      [field.g], idx4r3, +2, k2-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv3r3C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, 0, iv3r3L2, iv1r2L2) *
   propcolor(+8, iv4r3C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, 0, iv4r3L2, iv2r2L2) *
   propcolor(+8, iv4r1C8, iv3r2C8) *
   proplorentz(+0, p1-k1+k4+ZERO, 0, 0, 0, iv4r1L0, iv3r2L0) *
   propcolor(+8, iv3r1C8, iv4r2C8) *
   proplorentz(+0, p1+ZERO, 0, 0, 0, iv3r1L0, iv4r2L0)
;
*--#] diagram30:
*--#[ diagram31:
*
Local diagram31 =
  QGRAFSIGN(+1) * PREFACTOR(1/2) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r3L0, k3, mH) *
   outcolor(1, iv2r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -k2+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, k1-k4+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, -p1+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.g], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.g], idx4r3, +2, p1+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv3r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, 0, iv3r1L2, iv1r2L2) *
   propcolor(+8, iv4r1C8, iv2r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, 0, iv4r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, 0, iv4r2L2, iv3r2L2) *
   propcolor(+8, iv4r3C8, iv3r3C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv4r3L2, iv3r3L2)
;
*--#] diagram31:
*--#[ diagram32:
*
Local diagram32 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r2L2, k2, 0) *
   inpcolor(2, iv1r2C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r3L0, k3, mH) *
   outcolor(1, iv2r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r3L0, k4, mH) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, k2+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.g], idx2r1, +2, -p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.H], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.g], idx4r1, +2, k1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, -p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.g], idx4r3, +2, p1-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r1C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv4r1L2, iv1r3L2) *
   propcolor(+8, iv3r1C8, iv2r1C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r1L2, iv2r1L2) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, p1+k3+ZERO, 0, 0, 0, iv4r2L2, iv2r2L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, 0, iv4r3L2, iv3r2L2)
;
*--#] diagram32:
*--#[ diagram33:
*
Local diagram33 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r3L0, k4, mH) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, p1-k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.H], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.g], idx4r1, +2, k1-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, -p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.g], idx4r3, +2, p1-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, 0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv2r3C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, 0, iv4r2L2, iv2r3L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, 0, iv4r3L2, iv3r2L2)
;
*--#] diagram33:
*--#[ diagram34:
*
Local diagram34 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv3r3L0, k3, mH) *
   outcolor(1, iv3r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, p1-k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.H], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.g], idx4r1, +2, k1-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, -p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.g], idx4r3, +2, p1-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, 0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv2r3C8) *
   proplorentz(+2, p1-k2+ZERO, 0, 0, 0, iv4r2L2, iv2r3L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, 0, iv4r3L2, iv3r2L2)
;
*--#] diagram34:
*--#[ diagram35:
*
Local diagram35 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r3L0, k3, mH) *
   outcolor(1, iv1r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r3L0, k4, mH) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k2+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, p1-k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.H], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.g], idx4r1, +2, k2-k3+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, -p1+k1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.g], idx4r3, +2, p1-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k3+ZERO, 0, 0, 0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv2r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv4r2L2, iv2r3L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, -p1+k4+ZERO, 0, 0, 0, iv4r3L2, iv3r2L2)
;
*--#] diagram35:
*--#[ diagram36:
*
Local diagram36 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv1r1L2, k2, 0) *
   inpcolor(2, iv1r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv3r3L0, k3, mH) *
   outcolor(1, iv3r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r3L0, k4, mH) *
   outcolor(2, iv1r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k2+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k2+k4+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, p1-k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, p1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, -p1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.H], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.g], idx4r1, +2, k2-k4+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, -p1+k1+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.g], idx4r3, +2, p1-k3+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv4r1C8, iv1r2C8) *
   proplorentz(+2, -k2+k4+ZERO, 0, 0, 0, iv4r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r1L2, iv2r2L2) *
   propcolor(+8, iv4r2C8, iv2r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv4r2L2, iv2r3L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, 0, iv4r3L2, iv3r2L2)
;
*--#] diagram36:
*--#[ diagram37:
*
Local diagram37 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv2r1L2, k1, 0) *
   inpcolor(1, iv2r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv3r1L2, k2, 0) *
   inpcolor(2, iv3r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv1r1L0, k3, mH) *
   outcolor(1, iv1r1C1) *
   out([field.H], k4) *
   outlorentz(+0, iv1r2L0, k4, mH) *
   outcolor(2, iv1r2C1) *
   vertex(iv1,
      [field.H], idx1r1, +0, -k3+ZERO, iv1r1L0, +1, iv1r1C1,
      [field.H], idx1r2, +0, -k4+ZERO, iv1r2L0, +1, iv1r2C1,
      [field.H], idx1r3, +0, k3+k4+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, p1-k1+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, k2+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, p1+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.g], idx3r3, +2, -p1-k2+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.g], idx4r1, +2, -p1+k1+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, p1+k2+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.H], idx4r3, +0, -k3-k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+0, k3+k4+ZERO, mH, wH, 0, iv4r3L0, iv1r3L0) *
   propcolor(+8, iv3r2C8, iv2r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv3r2L2, iv2r2L2) *
   propcolor(+8, iv4r1C8, iv2r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv4r1L2, iv2r3L2) *
   propcolor(+8, iv4r2C8, iv3r3C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, 0, iv4r2L2, iv3r3L2)
;
*--#] diagram37:
*--#[ diagram38:
*
Local diagram38 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv3r3L0, k3, mH) *
   outcolor(1, iv3r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv4r3L0, k4, mH) *
   outcolor(2, iv4r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, p1-k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1-k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, p1-k1+k3+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.H], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.g], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, -p1+k1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.H], idx4r3, +0, -k4+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv3r1L2, iv1r3L2) *
   propcolor(+8, iv4r1C8, iv2r3C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, 0, iv4r1L2, iv2r3L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k3+ZERO, 0, 0, 0, iv4r2L2, iv3r2L2)
;
*--#] diagram38:
*--#[ diagram39:
*
Local diagram39 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv2r1L2, k2, 0) *
   inpcolor(2, iv2r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv4r3L0, k3, mH) *
   outcolor(1, iv4r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r3L0, k4, mH) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, p1-k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, p1+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.g], idx2r3, +2, -p1-k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.g], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.H], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.g], idx4r1, +2, p1+k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, -p1+k1-k4+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.H], idx4r3, +0, -k3+ZERO, iv4r3L0, +1, iv4r3C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r2L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv3r1L2, iv1r3L2) *
   propcolor(+8, iv4r1C8, iv2r3C8) *
   proplorentz(+2, -p1-k2+ZERO, 0, 0, 0, iv4r1L2, iv2r3L2) *
   propcolor(+8, iv4r2C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, 0, iv4r2L2, iv3r2L2)
;
*--#] diagram39:
*--#[ diagram40:
*
Local diagram40 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
   inp([field.g], k1) *
   inplorentz(+2, iv1r1L2, k1, 0) *
   inpcolor(1, iv1r1C8) *
   inp([field.g], k2) *
   inplorentz(+2, iv4r1L2, k2, 0) *
   inpcolor(2, iv4r1C8) *
   out([field.H], k3) *
   outlorentz(+0, iv2r3L0, k3, mH) *
   outcolor(1, iv2r3C1) *
   out([field.H], k4) *
   outlorentz(+0, iv3r3L0, k4, mH) *
   outcolor(2, iv3r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -p1+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.g], idx1r3, +2, p1-k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.g], idx2r1, +2, p1+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, -p1+k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   vertex(iv3,
      [field.g], idx3r1, +2, -p1+k1+ZERO, iv3r1L2, +8, iv3r1C8,
      [field.g], idx3r2, +2, p1-k1+k4+ZERO, iv3r2L2, +8, iv3r2C8,
      [field.H], idx3r3, +0, -k4+ZERO, iv3r3L0, +1, iv3r3C1) *
   vertex(iv4,
      [field.g], idx4r1, +2, k2+ZERO, iv4r1L2, +8, iv4r1C8,
      [field.g], idx4r2, +2, p1-k3+ZERO, iv4r2L2, +8, iv4r2C8,
      [field.g], idx4r3, +2, -p1+k1-k4+ZERO, iv4r3L2, +8, iv4r3C8) *
   propcolor(+8, iv2r1C8, iv1r2C8) *
   proplorentz(+2, -p1+ZERO, 0, 0, 0, iv2r1L2, iv1r2L2) *
   propcolor(+8, iv3r1C8, iv1r3C8) *
   proplorentz(+2, p1-k1+ZERO, 0, 0, 0, iv3r1L2, iv1r3L2) *
   propcolor(+8, iv4r2C8, iv2r2C8) *
   proplorentz(+2, -p1+k3+ZERO, 0, 0, 0, iv4r2L2, iv2r2L2) *
   propcolor(+8, iv4r3C8, iv3r2C8) *
   proplorentz(+2, p1-k1+k4+ZERO, 0, 0, 0, iv4r3L2, iv3r2L2)
;
*--#] diagram40:
*
* END OF DIAGRAMS
*
*--#]diagrams:
*--#[global:

#define DIAGRAMCOUNT "40"

*--#]global:


