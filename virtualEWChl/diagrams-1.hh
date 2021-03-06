* vim: syntax=form
*-----------------------------------------------------
*
* This file has been generated automatically
* by "qgraf-3.1.4" using the Feynman rules of the
* model "EWChL_UFO".
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
* true=vsum[QL,0,0];
*
*---------- END OF <qgraf.dat> -----------------------
*--#[diagrams:

*--#[ diagram1:
*
Id diag1 =
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
      [field.part21], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part6], idx2r1, +1, -p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, p1-k1-k2+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k1+k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, -p1+k1+k2+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, p1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+8, iv2r3C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, +0, iv2r3L2, iv1r3L2) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k1+k2+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1)
;
*--#] diagram1:
*--#[ diagram2:
*
Id diag2 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
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
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
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
      [field.anti6], idx3r2, -1, p1+k2+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+3, iv2r2C3, iv1r1C3) *
   proplorentz(+1, -p1+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv1r1L1) *
   propcolor(+3, iv1r2C3, iv3r1C3) *
   proplorentz(+1, -p1+k1+ZERO, mdlMT, mdlWT, +0, iv1r2L1, iv3r1L1) *
   propcolor(+3, iv3r2C3, iv2r1C3) *
   proplorentz(+1, -p1-k2+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv2r1L1)
;
*--#] diagram2:
*--#[ diagram3:
*
Id diag3 =
  QGRAFSIGN(+1) * PREFACTOR(1) *
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
   outlorentz(+0, iv3r4L0, k4, mdlMh) *
   outcolor(2, iv3r4C1) *
   vertex(iv1,
      [field.part6], idx1r1, +1, p1-k1+ZERO, iv1r1L1, +3, iv1r1C3,
      [field.anti6], idx1r2, -1, -p1+ZERO, iv1r2L1, -3, iv1r2C3,
      [field.part21], idx1r3, +2, k1+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.part6], idx2r1, +1, p1+ZERO, iv2r1L1, +3, iv2r1C3,
      [field.anti6], idx2r2, -1, -p1-k2+ZERO, iv2r2L1, -3, iv2r2C3,
      [field.part21], idx2r3, +2, k2+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.part6], idx3r1, +1, p1+k2+ZERO, iv3r1L1, +3, iv3r1C3,
      [field.anti6], idx3r2, -1, -p1+k1+ZERO, iv3r2L1, -3, iv3r2C3,
      [field.part5000000], idx3r3, +0, -k3+ZERO, iv3r3L0, +1, iv3r3C1,
      [field.part5000000], idx3r4, +0, -k4+ZERO, iv3r4L0, +1, iv3r4C1) *
   propcolor(+3, iv1r2C3, iv2r1C3) *
   proplorentz(+1, p1+ZERO, mdlMT, mdlWT, +0, iv1r2L1, iv2r1L1) *
   propcolor(+3, iv3r2C3, iv1r1C3) *
   proplorentz(+1, p1-k1+ZERO, mdlMT, mdlWT, +0, iv3r2L1, iv1r1L1) *
   propcolor(+3, iv2r2C3, iv3r1C3) *
   proplorentz(+1, p1+k2+ZERO, mdlMT, mdlWT, +0, iv2r2L1, iv3r1L1)
;
*--#] diagram3:
*--#[ diagram4:
*
Id diag4 =
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
*--#] diagram4:
*--#[ diagram5:
*
Id diag5 =
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
*--#] diagram5:
*--#[ diagram6:
*
Id diag6 =
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
*--#] diagram6:
*--#[ diagram7:
*
Id diag7 =
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
*--#] diagram7:
*--#[ diagram8:
*
Id diag8 =
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
*--#] diagram8:
*--#[ diagram9:
*
Id diag9 =
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
*--#] diagram9:
*--#[ diagram10:
*
Id diag10 =
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
*--#] diagram10:
*--#[ diagram11:
*
Id diag11 =
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
*--#] diagram11:
*--#[ diagram12:
*
Id diag12 =
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
*--#] diagram12:
*--#[ diagram13:
*
Id diag13 =
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
*--#] diagram13:
*--#[ diagram14:
*
Id diag14 =
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
*--#] diagram14:
*
* END OF DIAGRAMS
*
*--#]diagrams:
*--#[global:

#define DIAGRAMCOUNT "14"

*--#]global:


