* vim: syntax=form
*-----------------------------------------------------
*
* This file has been generated automatically
* by "qgraf-3.1.4" using the Feynman rules of the
* model "Standard Model".
* The file results from the following "qgraf.dat":
*
*---------- <qgraf.dat> ------------------------------
* output = 'diagrams-0.hh';
* style = 'form.sty';
* model = 'model';
* in = g[k1], g[k2];
* out = H[k3], H[k4];
* loops=0;
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
  QGRAFSIGN(+1) * PREFACTOR(1) *
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
      [field.H], idx1r3, +0, -k1-k2+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.H], idx2r1, +0, -k3+ZERO, iv2r1L0, +1, iv2r1C1,
      [field.H], idx2r2, +0, -k4+ZERO, iv2r2L0, +1, iv2r2C1,
      [field.H], idx2r3, +0, k1+k2+ZERO, iv2r3L0, +1, iv2r3C1) *
   propcolor(+1, iv2r3C1, iv1r3C1) *
   proplorentz(+0, -k1-k2+ZERO, mH, wH, 0, iv2r3L0, iv1r3L0)
;
*--#] diagram1:
*--#[ diagram2:
*
Local diagram2 =
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
   outlorentz(+0, iv2r3L0, k4, mH) *
   outcolor(2, iv2r3C1) *
   vertex(iv1,
      [field.g], idx1r1, +2, k1+ZERO, iv1r1L2, +8, iv1r1C8,
      [field.g], idx1r2, +2, -k1+k3+ZERO, iv1r2L2, +8, iv1r2C8,
      [field.H], idx1r3, +0, -k3+ZERO, iv1r3L0, +1, iv1r3C1) *
   vertex(iv2,
      [field.g], idx2r1, +2, k2+ZERO, iv2r1L2, +8, iv2r1C8,
      [field.g], idx2r2, +2, k1-k3+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k4+ZERO, iv2r3L0, +1, iv2r3C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -k1+k3+ZERO, 0, 0, 0, iv2r2L2, iv1r2L2)
;
*--#] diagram2:
*--#[ diagram3:
*
Local diagram3 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
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
      [field.g], idx2r2, +2, k1-k4+ZERO, iv2r2L2, +8, iv2r2C8,
      [field.H], idx2r3, +0, -k3+ZERO, iv2r3L0, +1, iv2r3C1) *
   propcolor(+8, iv2r2C8, iv1r2C8) *
   proplorentz(+2, -k1+k4+ZERO, 0, 0, 0, iv2r2L2, iv1r2L2)
;
*--#] diagram3:
*
* END OF DIAGRAMS
*
*--#]diagrams:
*--#[global:

#define DIAGRAMCOUNT "3"

*--#]global:


