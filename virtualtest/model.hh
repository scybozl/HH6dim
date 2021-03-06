* vim: syntax=form:ts=3:sw=3

* This file has been generated from the FeynRule model files
* in /home/iwsatlas1/scyboz/Work/HHPersonal/models/HEFT6dim_UFO

*---#[ Symbol Definitions:
*---#[ Fields:
Symbols
      [field.part22],[field.part23],[field.part24],[field.anti24],
      [field.part21],[field.part9000001],[field.anti9000001],
      [field.part9000002],[field.anti9000002],[field.part9000003],
      [field.anti9000003],[field.part9000004],[field.anti9000004],
      [field.part9000005],[field.anti9000005],[field.part12],
      [field.anti12],[field.part14],[field.anti14],[field.part16],
      [field.anti16],[field.part11],[field.anti11],[field.part13],
      [field.anti13],[field.part15],[field.anti15],[field.part2],
      [field.anti2],[field.part4],[field.anti4],[field.part6],
      [field.anti6],[field.part1],[field.anti1],[field.part3],
      [field.anti3],[field.part5],[field.anti5],[field.part250],
      [field.part251],[field.anti251],[field.part5000000];
*---#] Fields:
*---#[ Parameters:
Symbols
      mdlZERO,mdlaEWM1,mdlGf,mdlaS,mdlymdo,mdlymup,mdlyms,mdlymc,
      mdlymb,mdlymt,mdlyme,mdlymm,mdlymtau,mdlcV,mdlct,mdlcb,mdlctau,
      mdlcg,mdlcgg,mdlctt,mdlc3,mdlMZ,mdlMe,mdlMMU,mdlMTA,mdlMU,mdlMC,
      mdlMT,mdlMD,mdlMS,mdlMB,mdlWZ,mdlWW,mdlWT,mdlWh,mdlaEW,mdlG,
      mdlCKM1x1,mdlCKM1x2,mdlCKM1x3,mdlCKM2x1,mdlCKM2x2,mdlCKM2x3,
      mdlCKM3x1,mdlCKM3x2,mdlCKM3x3,mdlloop,mdlmtch,mdlcgghh,mdlMh,
      mdlMW,mdlcggh,mdlee,mdlsw2,mdlcw,mdlsw,mdlv,mdlg1,mdlgw,mdlvev,
      mdlnormh3,mdlnormh4,mdlyyb,mdlyyt,mdlyytau,mdlyb,mdlyc,mdlydo,
      mdlye,mdlym,mdlys,mdlyt,mdlytau,mdlyup,mdlGC1,mdlGC2,mdlGC3,
      mdlGC4,mdlGC5,mdlGC6,mdlGC7,mdlGC8,mdlGC9,mdlGC10,mdlGC11,
      mdlGC12,mdlGC13,mdlGC14,mdlGC15,mdlGC16,mdlGC17,mdlGC18,mdlGC19,
      mdlGC20,mdlGC21,mdlGC22,mdlGC23,mdlGC24,mdlGC25,mdlGC26,mdlGC27,
      mdlGC28,mdlGC29,mdlGC30,mdlGC31,mdlGC32,mdlGC33,mdlGC34,mdlGC35,
      mdlGC36,mdlGC37,mdlGC38,mdlGC39,mdlGC40,mdlGC41,mdlGC42,mdlGC43,
      mdlGC44,mdlGC45,mdlGC46,mdlGC47,mdlGC48;
Symbols
      mdlfloat2,mdlfloat3,mdlfloat1,mdlfloat6,mdlfloat7,mdlfloat4,
      mdlfloat5,mdlfloat8;
AutoDeclare Indices ModelDummyIndex, MDLIndex;
*---#] Parameters:
*---#[ Auxilliary Symbols:
Vectors vec1, ..., vec6;
*---#] Auxilliary Symbols:
*---#] Symbol Definitions:
#Define USEVERTEXPROC "1"
*---#[ Procedure ReplaceVertices :
#Procedure ReplaceVertices
*---#[ (V_1) h -- h -- h Vertex:
Identify Once vertex(iv?,
   [field.part5000000], idx1?,0,vec1?,idx1L0?,1,idx1C1?,
   [field.part5000000], idx2?,0,vec2?,idx2L0?,1,idx2C1?,
   [field.part5000000], idx3?,0,vec3?,idx3L0?,1,idx3C1?) =
   + mdlGC9;
Sum MDLIndex1;
*---#] (V_1) h -- h -- h Vertex:
*---#[ (V_2) h -- h -- h -- h Vertex:
Identify Once vertex(iv?,
   [field.part5000000], idx1?,0,vec1?,idx1L0?,1,idx1C1?,
   [field.part5000000], idx2?,0,vec2?,idx2L0?,1,idx2C1?,
   [field.part5000000], idx3?,0,vec3?,idx3L0?,1,idx3C1?,
   [field.part5000000], idx4?,0,vec4?,idx4L0?,1,idx4C1?) =
   + mdlGC10;
Sum MDLIndex1;
*---#] (V_2) h -- h -- h -- h Vertex:
*---#[ (V_3) g -- g -- h -- h Vertex:
Identify Once vertex(iv?,
   [field.part21], idx1?,2,vec1?,idx1L2?,8,idx1C8?,
   [field.part21], idx2?,2,vec2?,idx2L2?,8,idx2C8?,
   [field.part5000000], idx3?,0,vec3?,idx3L0?,1,idx3C1?,
   [field.part5000000], idx4?,0,vec4?,idx4L0?,1,idx4C1?) =
   + mdlGC32 * (
      dcolor8(idx1C8,idx2C8)*((-vec2(idx1L2))*(-vec1(idx2L2))-(-vec1(
      MDLIndex1))*(-vec2(MDLIndex1))*d(idx1L2,idx2L2))
   );
Sum MDLIndex1;
*---#] (V_3) g -- g -- h -- h Vertex:
*---#[ (V_4) g -- g -- h Vertex:
Identify Once vertex(iv?,
   [field.part21], idx1?,2,vec1?,idx1L2?,8,idx1C8?,
   [field.part21], idx2?,2,vec2?,idx2L2?,8,idx2C8?,
   [field.part5000000], idx3?,0,vec3?,idx3L0?,1,idx3C1?) =
   + mdlGC35 * (
      dcolor8(idx1C8,idx2C8)*((-vec2(idx1L2))*(-vec1(idx2L2))-(-vec1(
      MDLIndex1))*(-vec2(MDLIndex1))*d(idx1L2,idx2L2))
   );
Sum MDLIndex1;
*---#] (V_4) g -- g -- h Vertex:
*---#[ (V_5) ghG -- ghG~ -- g Vertex:
Identify Once vertex(iv?,
   [field.anti9000005], idx1?,0,vec1?,idx1L0?,-8,idx1C8?,
   [field.part9000005], idx2?,0,vec2?,idx2L0?,8,idx2C8?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?) =
   + mdlGC6 * (
      f(idx1C8,idx2C8,idx3C8)*(-vec2(idx3L2)-vec3(idx3L2))
   );
Sum MDLIndex1;
*---#] (V_5) ghG -- ghG~ -- g Vertex:
*---#[ (V_6) g -- g -- g Vertex:
Identify Once vertex(iv?,
   [field.part21], idx1?,2,vec1?,idx1L2?,8,idx1C8?,
   [field.part21], idx2?,2,vec2?,idx2L2?,8,idx2C8?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?) =
   + mdlGC6 * (
      f(idx1C8,idx2C8,idx3C8)*((-vec1(idx3L2))*d(idx1L2,idx2L2)-(-vec2
      (idx3L2))*d(idx1L2,idx2L2)-(-vec1(idx2L2))*d(idx1L2,idx3L2)+(-
      vec3(idx2L2))*d(idx1L2,idx3L2)+(-vec2(idx1L2))*d(idx2L2,idx3L2)-
      (-vec3(idx1L2))*d(idx2L2,idx3L2))
   );
Sum MDLIndex1;
*---#] (V_6) g -- g -- g Vertex:
*---#[ (V_7) g -- g -- g -- g Vertex:
Identify Once vertex(iv?,
   [field.part21], idx1?,2,vec1?,idx1L2?,8,idx1C8?,
   [field.part21], idx2?,2,vec2?,idx2L2?,8,idx2C8?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?,
   [field.part21], idx4?,2,vec4?,idx4L2?,8,idx4C8?) =
   + mdlGC8 * (
      f(MDLIndex1,idx1C8,idx2C8)*f(idx3C8,idx4C8,MDLIndex1)*(d(idx1L2,
      idx4L2)*d(idx2L2,idx3L2)-d(idx1L2,idx3L2)*d(idx2L2,idx4L2))
   )
   + mdlGC8 * (
      f(MDLIndex1,idx1C8,idx3C8)*f(idx2C8,idx4C8,MDLIndex1)*(d(idx1L2,
      idx4L2)*d(idx2L2,idx3L2)-d(idx1L2,idx2L2)*d(idx3L2,idx4L2))
   )
   + mdlGC8 * (
      f(MDLIndex1,idx1C8,idx4C8)*f(idx2C8,idx3C8,MDLIndex1)*(d(idx1L2,
      idx3L2)*d(idx2L2,idx4L2)-d(idx1L2,idx2L2)*d(idx3L2,idx4L2))
   );
Sum MDLIndex1;
*---#] (V_7) g -- g -- g -- g Vertex:
*---#[ (V_8) g -- g -- g -- h Vertex:
Identify Once vertex(iv?,
   [field.part21], idx1?,2,vec1?,idx1L2?,8,idx1C8?,
   [field.part21], idx2?,2,vec2?,idx2L2?,8,idx2C8?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?,
   [field.part5000000], idx4?,0,vec4?,idx4L0?,1,idx4C1?) =
   + mdlGC36 * (
      f(idx1C8,idx2C8,idx3C8)*((-vec1(idx3L2))*d(idx1L2,idx2L2)-(-vec2
      (idx3L2))*d(idx1L2,idx2L2)-(-vec1(idx2L2))*d(idx1L2,idx3L2)+(-
      vec3(idx2L2))*d(idx1L2,idx3L2)+(-vec2(idx1L2))*d(idx2L2,idx3L2)-
      (-vec3(idx1L2))*d(idx2L2,idx3L2))
   );
Sum MDLIndex1;
*---#] (V_8) g -- g -- g -- h Vertex:
*---#[ (V_9) g -- g -- g -- g -- h Vertex:
Identify Once vertex(iv?,
   [field.part21], idx1?,2,vec1?,idx1L2?,8,idx1C8?,
   [field.part21], idx2?,2,vec2?,idx2L2?,8,idx2C8?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?,
   [field.part21], idx4?,2,vec4?,idx4L2?,8,idx4C8?,
   [field.part5000000], idx5?,0,vec5?,idx5L0?,1,idx5C1?) =
   + mdlGC37 * (
      f(MDLIndex1,idx1C8,idx2C8)*f(idx3C8,idx4C8,MDLIndex1)*(d(idx1L2,
      idx4L2)*d(idx2L2,idx3L2)-d(idx1L2,idx3L2)*d(idx2L2,idx4L2))
   )
   + mdlGC37 * (
      f(MDLIndex1,idx1C8,idx3C8)*f(idx2C8,idx4C8,MDLIndex1)*(d(idx1L2,
      idx4L2)*d(idx2L2,idx3L2)-d(idx1L2,idx2L2)*d(idx3L2,idx4L2))
   )
   + mdlGC37 * (
      f(MDLIndex1,idx1C8,idx4C8)*f(idx2C8,idx3C8,MDLIndex1)*(d(idx1L2,
      idx3L2)*d(idx2L2,idx4L2)-d(idx1L2,idx2L2)*d(idx3L2,idx4L2))
   );
Sum MDLIndex1;
*---#] (V_9) g -- g -- g -- g -- h Vertex:
*---#[ (V_10) g -- g -- g -- h -- h Vertex:
Identify Once vertex(iv?,
   [field.part21], idx1?,2,vec1?,idx1L2?,8,idx1C8?,
   [field.part21], idx2?,2,vec2?,idx2L2?,8,idx2C8?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?,
   [field.part5000000], idx4?,0,vec4?,idx4L0?,1,idx4C1?,
   [field.part5000000], idx5?,0,vec5?,idx5L0?,1,idx5C1?) =
   + mdlGC33 * (
      f(idx1C8,idx2C8,idx3C8)*((-vec1(idx3L2))*d(idx1L2,idx2L2)-(-vec2
      (idx3L2))*d(idx1L2,idx2L2)-(-vec1(idx2L2))*d(idx1L2,idx3L2)+(-
      vec3(idx2L2))*d(idx1L2,idx3L2)+(-vec2(idx1L2))*d(idx2L2,idx3L2)-
      (-vec3(idx1L2))*d(idx2L2,idx3L2))
   );
Sum MDLIndex1;
*---#] (V_10) g -- g -- g -- h -- h Vertex:
*---#[ (V_11) g -- g -- g -- g -- h -- h Vertex:
Identify Once vertex(iv?,
   [field.part21], idx1?,2,vec1?,idx1L2?,8,idx1C8?,
   [field.part21], idx2?,2,vec2?,idx2L2?,8,idx2C8?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?,
   [field.part21], idx4?,2,vec4?,idx4L2?,8,idx4C8?,
   [field.part5000000], idx5?,0,vec5?,idx5L0?,1,idx5C1?,
   [field.part5000000], idx6?,0,vec6?,idx6L0?,1,idx6C1?) =
   + mdlGC34 * (
      f(MDLIndex1,idx1C8,idx2C8)*f(idx3C8,idx4C8,MDLIndex1)*(d(idx1L2,
      idx4L2)*d(idx2L2,idx3L2)-d(idx1L2,idx3L2)*d(idx2L2,idx4L2))
   )
   + mdlGC34 * (
      f(MDLIndex1,idx1C8,idx3C8)*f(idx2C8,idx4C8,MDLIndex1)*(d(idx1L2,
      idx4L2)*d(idx2L2,idx3L2)-d(idx1L2,idx2L2)*d(idx3L2,idx4L2))
   )
   + mdlGC34 * (
      f(MDLIndex1,idx1C8,idx4C8)*f(idx2C8,idx3C8,MDLIndex1)*(d(idx1L2,
      idx3L2)*d(idx2L2,idx4L2)-d(idx1L2,idx2L2)*d(idx3L2,idx4L2))
   );
Sum MDLIndex1;
*---#] (V_11) g -- g -- g -- g -- h -- h Vertex:
*---#[ (V_12) t~ -- t -- h Vertex:
Identify Once vertex(iv?,
   [field.part6], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti6], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part5000000], idx3?,0,vec3?,idx3L0?,1,idx3C1?) =
   + mdlGC38 * (
      dcolor(idx1C3,idx2C3)*NCContainer(1,idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_12) t~ -- t -- h Vertex:
*---#[ (V_13) t~ -- t -- h -- h Vertex:
Identify Once vertex(iv?,
   [field.part6], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti6], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part5000000], idx3?,0,vec3?,idx3L0?,1,idx3C1?,
   [field.part5000000], idx4?,0,vec4?,idx4L0?,1,idx4C1?) =
   + mdlGC39 * (
      dcolor(idx1C3,idx2C3)*NCContainer(1,idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_13) t~ -- t -- h -- h Vertex:
*---#[ (V_14) a -- W- -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part22], idx1?,2,vec1?,idx1L2?,1,idx1C1?,
   [field.part24], idx2?,2,vec2?,idx2L2?,1,idx2C1?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC4 * (
      (-vec1(idx3L2))*d(idx1L2,idx2L2)-(-vec2(idx3L2))*d(idx1L2,idx2L2
      )-(-vec1(idx2L2))*d(idx1L2,idx3L2)+(-vec3(idx2L2))*d(idx1L2,
      idx3L2)+(-vec2(idx1L2))*d(idx2L2,idx3L2)-(-vec3(idx1L2))*d(
      idx2L2,idx3L2)
   );
Sum MDLIndex1;
*---#] (V_14) a -- W- -- W+ Vertex:
*---#[ (V_15) a -- a -- W- -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part22], idx1?,2,vec1?,idx1L2?,1,idx1C1?,
   [field.part22], idx2?,2,vec2?,idx2L2?,1,idx2C1?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?,
   [field.anti24], idx4?,2,vec4?,idx4L2?,1,idx4C1?) =
   + mdlGC5 * (
      d(idx1L2,idx4L2)*d(idx2L2,idx3L2)+d(idx1L2,idx3L2)*d(idx2L2,
      idx4L2)-2*d(idx1L2,idx2L2)*d(idx3L2,idx4L2)
   );
Sum MDLIndex1;
*---#] (V_15) a -- a -- W- -- W+ Vertex:
*---#[ (V_16) W- -- W+ -- Z Vertex:
Identify Once vertex(iv?,
   [field.part24], idx1?,2,vec1?,idx1L2?,1,idx1C1?,
   [field.anti24], idx2?,2,vec2?,idx2L2?,1,idx2C1?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC23 * (
      (-vec1(idx3L2))*d(idx1L2,idx2L2)-(-vec2(idx3L2))*d(idx1L2,idx2L2
      )-(-vec1(idx2L2))*d(idx1L2,idx3L2)+(-vec3(idx2L2))*d(idx1L2,
      idx3L2)+(-vec2(idx1L2))*d(idx2L2,idx3L2)-(-vec3(idx1L2))*d(
      idx2L2,idx3L2)
   );
Sum MDLIndex1;
*---#] (V_16) W- -- W+ -- Z Vertex:
*---#[ (V_17) W- -- W- -- W+ -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part24], idx1?,2,vec1?,idx1L2?,1,idx1C1?,
   [field.part24], idx2?,2,vec2?,idx2L2?,1,idx2C1?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?,
   [field.anti24], idx4?,2,vec4?,idx4L2?,1,idx4C1?) =
   + mdlGC11 * (
      d(idx1L2,idx4L2)*d(idx2L2,idx3L2)+d(idx1L2,idx3L2)*d(idx2L2,
      idx4L2)-2*d(idx1L2,idx2L2)*d(idx3L2,idx4L2)
   );
Sum MDLIndex1;
*---#] (V_17) W- -- W- -- W+ -- W+ Vertex:
*---#[ (V_18) a -- W- -- W+ -- Z Vertex:
Identify Once vertex(iv?,
   [field.part22], idx1?,2,vec1?,idx1L2?,1,idx1C1?,
   [field.part24], idx2?,2,vec2?,idx2L2?,1,idx2C1?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?,
   [field.part23], idx4?,2,vec4?,idx4L2?,1,idx4C1?) =
   + mdlGC24 * (
      d(idx1L2,idx4L2)*d(idx2L2,idx3L2)-d(idx1L2,idx3L2)*d(idx2L2,
      idx4L2)/2-d(idx1L2,idx2L2)*d(idx3L2,idx4L2)/2
   );
Sum MDLIndex1;
*---#] (V_18) a -- W- -- W+ -- Z Vertex:
*---#[ (V_19) W- -- W+ -- Z -- Z Vertex:
Identify Once vertex(iv?,
   [field.part24], idx1?,2,vec1?,idx1L2?,1,idx1C1?,
   [field.anti24], idx2?,2,vec2?,idx2L2?,1,idx2C1?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?,
   [field.part23], idx4?,2,vec4?,idx4L2?,1,idx4C1?) =
   + mdlGC12 * (
      d(idx1L2,idx4L2)*d(idx2L2,idx3L2)+d(idx1L2,idx3L2)*d(idx2L2,
      idx4L2)-2*d(idx1L2,idx2L2)*d(idx3L2,idx4L2)
   );
Sum MDLIndex1;
*---#] (V_19) W- -- W+ -- Z -- Z Vertex:
*---#[ (V_20) e+ -- e- -- a Vertex:
Identify Once vertex(iv?,
   [field.part11], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti11], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part22], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC3 * (
      NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_20) e+ -- e- -- a Vertex:
*---#[ (V_21) mu+ -- mu- -- a Vertex:
Identify Once vertex(iv?,
   [field.part13], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti13], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part22], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC3 * (
      NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_21) mu+ -- mu- -- a Vertex:
*---#[ (V_22) ta+ -- ta- -- a Vertex:
Identify Once vertex(iv?,
   [field.part15], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti15], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part22], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC3 * (
      NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_22) ta+ -- ta- -- a Vertex:
*---#[ (V_23) u~ -- u -- a Vertex:
Identify Once vertex(iv?,
   [field.part2], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti2], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part22], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC2 * (
      dcolor(idx1C3,idx2C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_23) u~ -- u -- a Vertex:
*---#[ (V_24) c~ -- c -- a Vertex:
Identify Once vertex(iv?,
   [field.part4], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti4], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part22], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC2 * (
      dcolor(idx1C3,idx2C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_24) c~ -- c -- a Vertex:
*---#[ (V_25) t~ -- t -- a Vertex:
Identify Once vertex(iv?,
   [field.part6], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti6], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part22], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC2 * (
      dcolor(idx1C3,idx2C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_25) t~ -- t -- a Vertex:
*---#[ (V_26) d~ -- d -- a Vertex:
Identify Once vertex(iv?,
   [field.part1], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti1], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part22], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC1 * (
      dcolor(idx1C3,idx2C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_26) d~ -- d -- a Vertex:
*---#[ (V_27) s~ -- s -- a Vertex:
Identify Once vertex(iv?,
   [field.part3], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti3], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part22], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC1 * (
      dcolor(idx1C3,idx2C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_27) s~ -- s -- a Vertex:
*---#[ (V_28) b~ -- b -- a Vertex:
Identify Once vertex(iv?,
   [field.part5], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti5], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part22], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC1 * (
      dcolor(idx1C3,idx2C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_28) b~ -- b -- a Vertex:
*---#[ (V_29) u~ -- u -- g Vertex:
Identify Once vertex(iv?,
   [field.part2], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti2], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?) =
   + mdlGC7 * (
      T(idx3C8,idx2C3,idx1C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_29) u~ -- u -- g Vertex:
*---#[ (V_30) c~ -- c -- g Vertex:
Identify Once vertex(iv?,
   [field.part4], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti4], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?) =
   + mdlGC7 * (
      T(idx3C8,idx2C3,idx1C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_30) c~ -- c -- g Vertex:
*---#[ (V_31) t~ -- t -- g Vertex:
Identify Once vertex(iv?,
   [field.part6], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti6], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?) =
   + mdlGC7 * (
      T(idx3C8,idx2C3,idx1C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_31) t~ -- t -- g Vertex:
*---#[ (V_32) d~ -- d -- g Vertex:
Identify Once vertex(iv?,
   [field.part1], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti1], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?) =
   + mdlGC7 * (
      T(idx3C8,idx2C3,idx1C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_32) d~ -- d -- g Vertex:
*---#[ (V_33) s~ -- s -- g Vertex:
Identify Once vertex(iv?,
   [field.part3], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti3], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?) =
   + mdlGC7 * (
      T(idx3C8,idx2C3,idx1C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_33) s~ -- s -- g Vertex:
*---#[ (V_34) b~ -- b -- g Vertex:
Identify Once vertex(iv?,
   [field.part5], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti5], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part21], idx3?,2,vec3?,idx3L2?,8,idx3C8?) =
   + mdlGC7 * (
      T(idx3C8,idx2C3,idx1C3)*NCContainer(Sm(idx3L2),idx2L1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_34) b~ -- b -- g Vertex:
*---#[ (V_35) d~ -- u -- W- Vertex:
Identify Once vertex(iv?,
   [field.part1], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti2], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC14 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_35) d~ -- u -- W- Vertex:
*---#[ (V_36) s~ -- u -- W- Vertex:
Identify Once vertex(iv?,
   [field.part3], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti2], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC15 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_36) s~ -- u -- W- Vertex:
*---#[ (V_37) b~ -- u -- W- Vertex:
Identify Once vertex(iv?,
   [field.part5], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti2], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC16 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_37) b~ -- u -- W- Vertex:
*---#[ (V_38) d~ -- c -- W- Vertex:
Identify Once vertex(iv?,
   [field.part1], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti4], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC17 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_38) d~ -- c -- W- Vertex:
*---#[ (V_39) s~ -- c -- W- Vertex:
Identify Once vertex(iv?,
   [field.part3], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti4], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC18 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_39) s~ -- c -- W- Vertex:
*---#[ (V_40) b~ -- c -- W- Vertex:
Identify Once vertex(iv?,
   [field.part5], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti4], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC19 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_40) b~ -- c -- W- Vertex:
*---#[ (V_41) d~ -- t -- W- Vertex:
Identify Once vertex(iv?,
   [field.part1], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti6], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC20 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_41) d~ -- t -- W- Vertex:
*---#[ (V_42) s~ -- t -- W- Vertex:
Identify Once vertex(iv?,
   [field.part3], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti6], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC21 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_42) s~ -- t -- W- Vertex:
*---#[ (V_43) b~ -- t -- W- Vertex:
Identify Once vertex(iv?,
   [field.part5], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti6], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC22 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_43) b~ -- t -- W- Vertex:
*---#[ (V_44) u~ -- d -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part2], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti1], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC40 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_44) u~ -- d -- W+ Vertex:
*---#[ (V_45) c~ -- d -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part4], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti1], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC43 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_45) c~ -- d -- W+ Vertex:
*---#[ (V_46) t~ -- d -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part6], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti1], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC46 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_46) t~ -- d -- W+ Vertex:
*---#[ (V_47) u~ -- s -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part2], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti3], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC41 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_47) u~ -- s -- W+ Vertex:
*---#[ (V_48) c~ -- s -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part4], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti3], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC44 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_48) c~ -- s -- W+ Vertex:
*---#[ (V_49) t~ -- s -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part6], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti3], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC47 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_49) t~ -- s -- W+ Vertex:
*---#[ (V_50) u~ -- b -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part2], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti5], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC42 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_50) u~ -- b -- W+ Vertex:
*---#[ (V_51) c~ -- b -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part4], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti5], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC45 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_51) c~ -- b -- W+ Vertex:
*---#[ (V_52) t~ -- b -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part6], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti5], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC48 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_52) t~ -- b -- W+ Vertex:
*---#[ (V_53) e+ -- ve -- W- Vertex:
Identify Once vertex(iv?,
   [field.part11], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti12], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC13 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_53) e+ -- ve -- W- Vertex:
*---#[ (V_54) mu+ -- vm -- W- Vertex:
Identify Once vertex(iv?,
   [field.part13], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti14], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC13 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_54) mu+ -- vm -- W- Vertex:
*---#[ (V_55) ta+ -- vt -- W- Vertex:
Identify Once vertex(iv?,
   [field.part15], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti16], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC13 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_55) ta+ -- vt -- W- Vertex:
*---#[ (V_56) ve~ -- e- -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part12], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti11], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC13 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_56) ve~ -- e- -- W+ Vertex:
*---#[ (V_57) vm~ -- mu- -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part14], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti13], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC13 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_57) vm~ -- mu- -- W+ Vertex:
*---#[ (V_58) vt~ -- ta- -- W+ Vertex:
Identify Once vertex(iv?,
   [field.part16], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti15], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.anti24], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC13 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_58) vt~ -- ta- -- W+ Vertex:
*---#[ (V_59) u~ -- u -- Z Vertex:
Identify Once vertex(iv?,
   [field.part2], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti2], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC26 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjPlus,MDLIndex1,idx1L1))
   )
   + mdlGC29 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_59) u~ -- u -- Z Vertex:
*---#[ (V_60) c~ -- c -- Z Vertex:
Identify Once vertex(iv?,
   [field.part4], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti4], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC26 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjPlus,MDLIndex1,idx1L1))
   )
   + mdlGC29 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_60) c~ -- c -- Z Vertex:
*---#[ (V_61) t~ -- t -- Z Vertex:
Identify Once vertex(iv?,
   [field.part6], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti6], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC26 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjPlus,MDLIndex1,idx1L1))
   )
   + mdlGC29 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_61) t~ -- t -- Z Vertex:
*---#[ (V_62) d~ -- d -- Z Vertex:
Identify Once vertex(iv?,
   [field.part1], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti1], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC25 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjPlus,MDLIndex1,idx1L1))
   )
   + mdlGC28 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_62) d~ -- d -- Z Vertex:
*---#[ (V_63) s~ -- s -- Z Vertex:
Identify Once vertex(iv?,
   [field.part3], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti3], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC25 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjPlus,MDLIndex1,idx1L1))
   )
   + mdlGC28 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_63) s~ -- s -- Z Vertex:
*---#[ (V_64) b~ -- b -- Z Vertex:
Identify Once vertex(iv?,
   [field.part5], idx1?,1,vec1?,idx1L1?,3,idx1C3?,
   [field.anti5], idx2?,-1,vec2?,idx2L1?,-3,idx2C3?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC25 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjPlus,MDLIndex1,idx1L1))
   )
   + mdlGC28 * (
      dcolor(idx1C3,idx2C3)*(NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*
      NCContainer(ProjMinus,MDLIndex1,idx1L1))
   );
Sum MDLIndex1;
*---#] (V_64) b~ -- b -- Z Vertex:
*---#[ (V_65) ve~ -- ve -- Z Vertex:
Identify Once vertex(iv?,
   [field.part12], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti12], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC31 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_65) ve~ -- ve -- Z Vertex:
*---#[ (V_66) vm~ -- vm -- Z Vertex:
Identify Once vertex(iv?,
   [field.part14], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti14], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC31 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_66) vm~ -- vm -- Z Vertex:
*---#[ (V_67) vt~ -- vt -- Z Vertex:
Identify Once vertex(iv?,
   [field.part16], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti16], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC31 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_67) vt~ -- vt -- Z Vertex:
*---#[ (V_68) e+ -- e- -- Z Vertex:
Identify Once vertex(iv?,
   [field.part11], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti11], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC27 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjPlus,
      MDLIndex1,idx1L1)
   )
   + mdlGC30 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_68) e+ -- e- -- Z Vertex:
*---#[ (V_69) mu+ -- mu- -- Z Vertex:
Identify Once vertex(iv?,
   [field.part13], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti13], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC27 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjPlus,
      MDLIndex1,idx1L1)
   )
   + mdlGC30 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_69) mu+ -- mu- -- Z Vertex:
*---#[ (V_70) ta+ -- ta- -- Z Vertex:
Identify Once vertex(iv?,
   [field.part15], idx1?,1,vec1?,idx1L1?,1,idx1C1?,
   [field.anti15], idx2?,-1,vec2?,idx2L1?,-1,idx2C1?,
   [field.part23], idx3?,2,vec3?,idx3L2?,1,idx3C1?) =
   + mdlGC27 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjPlus,
      MDLIndex1,idx1L1)
   )
   + mdlGC30 * (
      NCContainer(Sm(idx3L2),idx2L1,MDLIndex1)*NCContainer(ProjMinus,
      MDLIndex1,idx1L1)
   );
Sum MDLIndex1;
*---#] (V_70) ta+ -- ta- -- Z Vertex:
#EndProcedure
*---#] Procedure ReplaceVertices :
*---#[ Dummy Indices:
*---#] Dummy Indices:
*---#[ Procedure VertexConstants :
#Procedure VertexConstants
* Just a dummy, all vertex constants are already
* replaced in ReplaceVertices.
*
* This procedure might disappear in any future version of Golem
* so don't rely on it.
*
#EndProcedure
*---#] Procedure VertexConstants :
