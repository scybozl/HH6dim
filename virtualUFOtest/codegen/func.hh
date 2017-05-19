#IfDef `optim'

L x0 = 16*pi^2;
#$name0 = mdlloop;
L x1 = mdlfloat5;
#$name1 = mdlMh;
L x2 = 2*sqrt(mdlaS)*sqrt(pi);
#$name2 = mdlG;
L x3 = i_*mdlG;
#$name3 = mdlGC7;
L x4 = -mdlG;
#$name4 = mdlGC6;
L x5 = i_*mdlG^2;
#$name5 = mdlGC8;
L x6 = 0;
#$name6 = mdlCKM2x3;
L x7 = 1;
#$name7 = mdlCKM2x2;
L x8 = 0;
#$name8 = mdlCKM2x1;
L x9 = 1;
#$name9 = mdlCKM1x1;
L x10 = 0;
#$name10 = mdlCKM1x2;
L x11 = 0;
#$name11 = mdlCKM1x3;
L x12 = if(Nfgen,Nf/Nfgen,1);
#$name12 = Nfrat;
L x13 = 0;
#$name13 = mdlCKM3x2;
L x14 = 1;
#$name14 = mdlCKM3x3;
L x15 = 0;
#$name15 = mdlCKM3x1;
L x16 = 1/mdlaEWM1;
#$name16 = mdlaEW;
L x17 = 2*sqrt(mdlaEW)*sqrt(pi);
#$name17 = mdlee;
L x18 = mdlee*i_;
#$name18 = mdlGC4;
L x19 = sqrt(mdlMZ^2/mdlfloat1+sqrt(mdlMZ^4/mdlfloat2-mdlaEW*pi*mdlMZ^2/(mdlGf*sqrt(2))));
#$name19 = mdlMW;
L x20 = mdlee^2*i_;
#$name20 = mdlGC5;
L x21 = (-mdlee)*i_;
#$name21 = mdlGC3;
L x22 = 2*mdlee*i_/mdlfloat4;
#$name22 = mdlGC2;
L x23 = (-mdlee)*i_/mdlfloat4;
#$name23 = mdlGC1;
L x24 = 1-mdlMW^2/mdlMZ^2;
#$name24 = mdlsw2;
L x25 = sqrt(mdlsw2);
#$name25 = mdlsw;
L x26 = mdlee*i_*complexconjugate(mdlCKM3x2)/(mdlsw*sqrt(2));
#$name26 = mdlGC53;
L x27 = mdlee*i_*complexconjugate(mdlCKM3x1)/(mdlsw*sqrt(2));
#$name27 = mdlGC52;
L x28 = mdlee*i_*complexconjugate(mdlCKM2x3)/(mdlsw*sqrt(2));
#$name28 = mdlGC51;
L x29 = mdlee*i_*complexconjugate(mdlCKM2x2)/(mdlsw*sqrt(2));
#$name29 = mdlGC50;
L x30 = mdlee*i_*complexconjugate(mdlCKM3x3)/(mdlsw*sqrt(2));
#$name30 = mdlGC54;
L x31 = mdlee*i_*complexconjugate(mdlCKM1x3)/(mdlsw*sqrt(2));
#$name31 = mdlGC48;
L x32 = mdlee*i_*complexconjugate(mdlCKM2x1)/(mdlsw*sqrt(2));
#$name32 = mdlGC49;
L x33 = mdlee*i_*complexconjugate(mdlCKM1x1)/(mdlsw*sqrt(2));
#$name33 = mdlGC46;
L x34 = mdlee*i_*complexconjugate(mdlCKM1x2)/(mdlsw*sqrt(2));
#$name34 = mdlGC47;
L x35 = 2*mdlMW*mdlsw/mdlee;
#$name35 = mdlv;
L x36 = mdlymt/mdlv;
#$name36 = mdlyyt;
L x37 = mdlymb/mdlv;
#$name37 = mdlyyb;
L x38 = (-mdlcg)*i_*mdlG^4/(pi^2*mdlv);
#$name38 = mdlGC40;
L x39 = (-mdlct)*i_*mdlyyt;
#$name39 = mdlGC44;
L x40 = (-mdlctt)*i_*mdlyyt/mdlv;
#$name40 = mdlGC45;
L x41 = mdlymtau/mdlv;
#$name41 = mdlyytau;
L x42 = mdlCKM2x1*mdlee*i_/(mdlsw*sqrt(2));
#$name42 = mdlGC17;
L x43 = mdlCKM1x3*mdlee*i_/(mdlsw*sqrt(2));
#$name43 = mdlGC16;
L x44 = mdlCKM1x2*mdlee*i_/(mdlsw*sqrt(2));
#$name44 = mdlGC15;
L x45 = mdlCKM1x1*mdlee*i_/(mdlsw*sqrt(2));
#$name45 = mdlGC14;
L x46 = mdlee*i_/(mdlsw*sqrt(2));
#$name46 = mdlGC13;
L x47 = (-mdlee^2)*i_/mdlsw^2;
#$name47 = mdlGC11;
L x48 = mdlCKM2x3*mdlee*i_/(mdlsw*sqrt(2));
#$name48 = mdlGC19;
L x49 = mdlCKM2x2*mdlee*i_/(mdlsw*sqrt(2));
#$name49 = mdlGC18;
L x50 = sqrt(1-mdlsw2);
#$name50 = mdlcw;
L x51 = mdlcw^2*mdlee^2*i_/mdlsw^2;
#$name51 = mdlGC12;
L x52 = (-2)*mdlcw*mdlee^2*i_/mdlsw;
#$name52 = mdlGC24;
L x53 = mdlee/mdlsw;
#$name53 = mdlgw;
L x54 = mdlcw*mdlee*i_/(mdlfloat1*mdlsw)+mdlee*i_*mdlsw/(mdlfloat1*mdlcw);
#$name54 = mdlGC31;
L x55 = (-mdlcw)*mdlee*i_/(mdlfloat1*mdlsw)+mdlee*i_*mdlsw/(mdlfloat1*mdlcw);
#$name55 = mdlGC30;
L x56 = mdlMh^2/(mdlfloat6*mdlv^2);
#$name56 = mdlnormh4;
L x57 = (-24)*i_*mdlnormh4;
#$name57 = mdlGC10;
L x58 = 3*mdlMh^2/mdlv;
#$name58 = mdlnormh3;
L x59 = (-mdlc3)*i_*mdlnormh3;
#$name59 = mdlGC9;
L x60 = mdlcg*mdlG^3/(pi^2*mdlv);
#$name60 = mdlGC39;
L x61 = mdlcg*i_*mdlG^2/(pi^2*mdlv);
#$name61 = mdlGC38;
L x62 = mdlfloat7;
#$name62 = mdlZERO;
L x63 = mdlee/mdlcw;
#$name63 = mdlg1;
L x64 = 1+11*mdlaS/(mdlfloat2*pi);
#$name64 = mdlmtch;
L x65 = mdlct*i_*mdlG^2*mdlmtch/(mdlfloat3*pi^2*mdlv);
#$name65 = mdlGC41;
L x66 = mdlct*mdlG^3*mdlmtch/(mdlfloat3*pi^2*mdlv);
#$name66 = mdlGC42;
L x67 = (-mdlct)*i_*mdlG^4*mdlmtch/(mdlfloat3*pi^2*mdlv);
#$name67 = mdlGC43;
L x68 = mdlcgg*mdlG^3/(pi^2*mdlv^2)+mdlctt*mdlG^3*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name68 = mdlGC33;
L x69 = (-mdlcgg)*i_*mdlG^4/(pi^2*mdlv^2)-mdlctt*i_*mdlG^4*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name69 = mdlGC34;
L x70 = mdlcgg*i_*mdlG^2/(pi^2*mdlv^2)+mdlctt*i_*mdlG^2*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name70 = mdlGC32;
L x71 = (-mdlct^2)*i_*mdlG^2*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name71 = mdlGC35;
L x72 = mdlct^2*i_*mdlG^4*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name72 = mdlGC37;
L x73 = (-mdlct^2)*mdlG^3*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name73 = mdlGC36;
L x74 = (-mdlcw)*mdlee*i_/(mdlfloat1*mdlsw)-mdlee*i_*mdlsw/(mdlfloat8*mdlcw);
#$name74 = mdlGC28;
L x75 = mdlcw*mdlee*i_/(mdlfloat1*mdlsw)-mdlee*i_*mdlsw/(mdlfloat8*mdlcw);
#$name75 = mdlGC29;
L x76 = (-2)*mdlee*i_*mdlsw/(mdlfloat4*mdlcw);
#$name76 = mdlGC26;
L x77 = mdlee*i_*mdlsw/mdlcw;
#$name77 = mdlGC27;
L x78 = 2*mdlMW*mdlsw/mdlee;
#$name78 = mdlvev;
L x79 = mdlymdo*sqrt(2)/mdlvev;
#$name79 = mdlydo;
L x80 = mdlymtau*sqrt(2)/mdlvev;
#$name80 = mdlytau;
L x81 = mdlymup*sqrt(2)/mdlvev;
#$name81 = mdlyup;
L x82 = mdlyme*sqrt(2)/mdlvev;
#$name82 = mdlye;
L x83 = mdlymc*sqrt(2)/mdlvev;
#$name83 = mdlyc;
L x84 = mdlymb*sqrt(2)/mdlvev;
#$name84 = mdlyb;
L x85 = mdlymm*sqrt(2)/mdlvev;
#$name85 = mdlym;
L x86 = mdlymt*sqrt(2)/mdlvev;
#$name86 = mdlyt;
L x87 = mdlyms*sqrt(2)/mdlvev;
#$name87 = mdlys;
L x88 = mdlee*i_*mdlsw/(mdlfloat4*mdlcw);
#$name88 = mdlGC25;
L x89 = mdlCKM3x3*mdlee*i_/(mdlsw*sqrt(2));
#$name89 = mdlGC22;
L x90 = mdlcw*mdlee*i_/mdlsw;
#$name90 = mdlGC23;
L x91 = mdlCKM3x1*mdlee*i_/(mdlsw*sqrt(2));
#$name91 = mdlGC20;
L x92 = mdlCKM3x2*mdlee*i_/(mdlsw*sqrt(2));
#$name92 = mdlGC21;
#$num = 92;

#Else
S mdlloop,mdlMh,mdlG,mdlGC7,mdlGC6,mdlGC8,mdlCKM2x3,mdlCKM2x2,mdlCKM2x1,mdlCKM1x1,mdlCKM1x2,mdlCKM1x3,Nfrat,mdlCKM3x2,mdlCKM3x3,mdlCKM3x1,mdlaEW,mdlee,mdlGC4,mdlMW,mdlGC5,mdlGC3,mdlGC2,mdlGC1,mdlsw2,mdlsw,mdlGC53,mdlGC52,mdlGC51,mdlGC50,mdlGC54,mdlGC48,mdlGC49,mdlGC46,mdlGC47,mdlv,mdlyyt,mdlyyb,mdlGC40,mdlGC44,mdlGC45,mdlyytau,mdlGC17,mdlGC16,mdlGC15,mdlGC14,mdlGC13,mdlGC11,mdlGC19,mdlGC18,mdlcw,mdlGC12,mdlGC24,mdlgw,mdlGC31,mdlGC30,mdlnormh4,mdlGC10,mdlnormh3,mdlGC9,mdlGC39,mdlGC38,mdlZERO,mdlg1,mdlmtch,mdlGC41,mdlGC42,mdlGC43,mdlGC33,mdlGC34,mdlGC32,mdlGC35,mdlGC37,mdlGC36,mdlGC28,mdlGC29,mdlGC26,mdlGC27,mdlvev,mdlydo,mdlytau,mdlyup,mdlye,mdlyc,mdlyb,mdlym,mdlyt,mdlys,mdlGC25,mdlGC22,mdlGC23,mdlGC20,mdlGC21;
S gauge1z,gauge2z,mdlaEWM1,mdlaS,mdlc3,mdlcb,mdlcg,mdlcgg,mdlct,mdlctau,mdlctt,mdlcV,mdlfloat1,mdlfloat2,mdlfloat3,mdlfloat4,mdlfloat5,mdlfloat6,mdlfloat7,mdlfloat8,mdlGf,mdlMB,mdlMC,mdlMD,mdlMe,mdlMMU,mdlMS,mdlMT,mdlMTA,mdlMU,mdlMZ,mdlWh,mdlWT,mdlWW,mdlWZ,mdlymb,mdlymc,mdlymdo,mdlyme,mdlymm,mdlyms,mdlymt,mdlymtau,mdlymup,NC,Nf,Nfgen;
L x0 = 16*pi^2;
#$name0 = mdlloop;
L x1 = mdlfloat5;
#$name1 = mdlMh;
L x2 = 2*sqrt(mdlaS)*sqrt(pi);
#$name2 = mdlG;
L x3 = i_*mdlG;
#$name3 = mdlGC7;
L x4 = -mdlG;
#$name4 = mdlGC6;
L x5 = i_*mdlG^2;
#$name5 = mdlGC8;
L x6 = 0;
#$name6 = mdlCKM2x3;
L x7 = 1;
#$name7 = mdlCKM2x2;
L x8 = 0;
#$name8 = mdlCKM2x1;
L x9 = 1;
#$name9 = mdlCKM1x1;
L x10 = 0;
#$name10 = mdlCKM1x2;
L x11 = 0;
#$name11 = mdlCKM1x3;
L x12 = if(Nfgen,Nf/Nfgen,1);
#$name12 = Nfrat;
L x13 = 0;
#$name13 = mdlCKM3x2;
L x14 = 1;
#$name14 = mdlCKM3x3;
L x15 = 0;
#$name15 = mdlCKM3x1;
L x16 = 1/mdlaEWM1;
#$name16 = mdlaEW;
L x17 = 2*sqrt(mdlaEW)*sqrt(pi);
#$name17 = mdlee;
L x18 = mdlee*i_;
#$name18 = mdlGC4;
L x19 = sqrt(mdlMZ^2/mdlfloat1+sqrt(mdlMZ^4/mdlfloat2-mdlaEW*pi*mdlMZ^2/(mdlGf*sqrt(2))));
#$name19 = mdlMW;
L x20 = mdlee^2*i_;
#$name20 = mdlGC5;
L x21 = (-mdlee)*i_;
#$name21 = mdlGC3;
L x22 = 2*mdlee*i_/mdlfloat4;
#$name22 = mdlGC2;
L x23 = (-mdlee)*i_/mdlfloat4;
#$name23 = mdlGC1;
L x24 = 1-mdlMW^2/mdlMZ^2;
#$name24 = mdlsw2;
L x25 = sqrt(mdlsw2);
#$name25 = mdlsw;
L x26 = mdlee*i_*complexconjugate(mdlCKM3x2)/(mdlsw*sqrt(2));
#$name26 = mdlGC53;
L x27 = mdlee*i_*complexconjugate(mdlCKM3x1)/(mdlsw*sqrt(2));
#$name27 = mdlGC52;
L x28 = mdlee*i_*complexconjugate(mdlCKM2x3)/(mdlsw*sqrt(2));
#$name28 = mdlGC51;
L x29 = mdlee*i_*complexconjugate(mdlCKM2x2)/(mdlsw*sqrt(2));
#$name29 = mdlGC50;
L x30 = mdlee*i_*complexconjugate(mdlCKM3x3)/(mdlsw*sqrt(2));
#$name30 = mdlGC54;
L x31 = mdlee*i_*complexconjugate(mdlCKM1x3)/(mdlsw*sqrt(2));
#$name31 = mdlGC48;
L x32 = mdlee*i_*complexconjugate(mdlCKM2x1)/(mdlsw*sqrt(2));
#$name32 = mdlGC49;
L x33 = mdlee*i_*complexconjugate(mdlCKM1x1)/(mdlsw*sqrt(2));
#$name33 = mdlGC46;
L x34 = mdlee*i_*complexconjugate(mdlCKM1x2)/(mdlsw*sqrt(2));
#$name34 = mdlGC47;
L x35 = 2*mdlMW*mdlsw/mdlee;
#$name35 = mdlv;
L x36 = mdlymt/mdlv;
#$name36 = mdlyyt;
L x37 = mdlymb/mdlv;
#$name37 = mdlyyb;
L x38 = (-mdlcg)*i_*mdlG^4/(pi^2*mdlv);
#$name38 = mdlGC40;
L x39 = (-mdlct)*i_*mdlyyt;
#$name39 = mdlGC44;
L x40 = (-mdlctt)*i_*mdlyyt/mdlv;
#$name40 = mdlGC45;
L x41 = mdlymtau/mdlv;
#$name41 = mdlyytau;
L x42 = mdlCKM2x1*mdlee*i_/(mdlsw*sqrt(2));
#$name42 = mdlGC17;
L x43 = mdlCKM1x3*mdlee*i_/(mdlsw*sqrt(2));
#$name43 = mdlGC16;
L x44 = mdlCKM1x2*mdlee*i_/(mdlsw*sqrt(2));
#$name44 = mdlGC15;
L x45 = mdlCKM1x1*mdlee*i_/(mdlsw*sqrt(2));
#$name45 = mdlGC14;
L x46 = mdlee*i_/(mdlsw*sqrt(2));
#$name46 = mdlGC13;
L x47 = (-mdlee^2)*i_/mdlsw^2;
#$name47 = mdlGC11;
L x48 = mdlCKM2x3*mdlee*i_/(mdlsw*sqrt(2));
#$name48 = mdlGC19;
L x49 = mdlCKM2x2*mdlee*i_/(mdlsw*sqrt(2));
#$name49 = mdlGC18;
L x50 = sqrt(1-mdlsw2);
#$name50 = mdlcw;
L x51 = mdlcw^2*mdlee^2*i_/mdlsw^2;
#$name51 = mdlGC12;
L x52 = (-2)*mdlcw*mdlee^2*i_/mdlsw;
#$name52 = mdlGC24;
L x53 = mdlee/mdlsw;
#$name53 = mdlgw;
L x54 = mdlcw*mdlee*i_/(mdlfloat1*mdlsw)+mdlee*i_*mdlsw/(mdlfloat1*mdlcw);
#$name54 = mdlGC31;
L x55 = (-mdlcw)*mdlee*i_/(mdlfloat1*mdlsw)+mdlee*i_*mdlsw/(mdlfloat1*mdlcw);
#$name55 = mdlGC30;
L x56 = mdlMh^2/(mdlfloat6*mdlv^2);
#$name56 = mdlnormh4;
L x57 = (-24)*i_*mdlnormh4;
#$name57 = mdlGC10;
L x58 = 3*mdlMh^2/mdlv;
#$name58 = mdlnormh3;
L x59 = (-mdlc3)*i_*mdlnormh3;
#$name59 = mdlGC9;
L x60 = mdlcg*mdlG^3/(pi^2*mdlv);
#$name60 = mdlGC39;
L x61 = mdlcg*i_*mdlG^2/(pi^2*mdlv);
#$name61 = mdlGC38;
L x62 = mdlfloat7;
#$name62 = mdlZERO;
L x63 = mdlee/mdlcw;
#$name63 = mdlg1;
L x64 = 1+11*mdlaS/(mdlfloat2*pi);
#$name64 = mdlmtch;
L x65 = mdlct*i_*mdlG^2*mdlmtch/(mdlfloat3*pi^2*mdlv);
#$name65 = mdlGC41;
L x66 = mdlct*mdlG^3*mdlmtch/(mdlfloat3*pi^2*mdlv);
#$name66 = mdlGC42;
L x67 = (-mdlct)*i_*mdlG^4*mdlmtch/(mdlfloat3*pi^2*mdlv);
#$name67 = mdlGC43;
L x68 = mdlcgg*mdlG^3/(pi^2*mdlv^2)+mdlctt*mdlG^3*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name68 = mdlGC33;
L x69 = (-mdlcgg)*i_*mdlG^4/(pi^2*mdlv^2)-mdlctt*i_*mdlG^4*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name69 = mdlGC34;
L x70 = mdlcgg*i_*mdlG^2/(pi^2*mdlv^2)+mdlctt*i_*mdlG^2*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name70 = mdlGC32;
L x71 = (-mdlct^2)*i_*mdlG^2*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name71 = mdlGC35;
L x72 = mdlct^2*i_*mdlG^4*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name72 = mdlGC37;
L x73 = (-mdlct^2)*mdlG^3*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
#$name73 = mdlGC36;
L x74 = (-mdlcw)*mdlee*i_/(mdlfloat1*mdlsw)-mdlee*i_*mdlsw/(mdlfloat8*mdlcw);
#$name74 = mdlGC28;
L x75 = mdlcw*mdlee*i_/(mdlfloat1*mdlsw)-mdlee*i_*mdlsw/(mdlfloat8*mdlcw);
#$name75 = mdlGC29;
L x76 = (-2)*mdlee*i_*mdlsw/(mdlfloat4*mdlcw);
#$name76 = mdlGC26;
L x77 = mdlee*i_*mdlsw/mdlcw;
#$name77 = mdlGC27;
L x78 = 2*mdlMW*mdlsw/mdlee;
#$name78 = mdlvev;
L x79 = mdlymdo*sqrt(2)/mdlvev;
#$name79 = mdlydo;
L x80 = mdlymtau*sqrt(2)/mdlvev;
#$name80 = mdlytau;
L x81 = mdlymup*sqrt(2)/mdlvev;
#$name81 = mdlyup;
L x82 = mdlyme*sqrt(2)/mdlvev;
#$name82 = mdlye;
L x83 = mdlymc*sqrt(2)/mdlvev;
#$name83 = mdlyc;
L x84 = mdlymb*sqrt(2)/mdlvev;
#$name84 = mdlyb;
L x85 = mdlymm*sqrt(2)/mdlvev;
#$name85 = mdlym;
L x86 = mdlymt*sqrt(2)/mdlvev;
#$name86 = mdlyt;
L x87 = mdlyms*sqrt(2)/mdlvev;
#$name87 = mdlys;
L x88 = mdlee*i_*mdlsw/(mdlfloat4*mdlcw);
#$name88 = mdlGC25;
L x89 = mdlCKM3x3*mdlee*i_/(mdlsw*sqrt(2));
#$name89 = mdlGC22;
L x90 = mdlcw*mdlee*i_/mdlsw;
#$name90 = mdlGC23;
L x91 = mdlCKM3x1*mdlee*i_/(mdlsw*sqrt(2));
#$name91 = mdlGC20;
L x92 = mdlCKM3x2*mdlee*i_/(mdlsw*sqrt(2));
#$name92 = mdlGC21;
#$num = 92;

#EndIf
#Procedure Simplify()

Id mdlGC21 = mdlCKM3x2*mdlee*i_/(mdlsw*sqrt(2));
Id mdlGC20 = mdlCKM3x1*mdlee*i_/(mdlsw*sqrt(2));
Id mdlGC23 = mdlcw*mdlee*i_/mdlsw;
Id mdlGC22 = mdlCKM3x3*mdlee*i_/(mdlsw*sqrt(2));
Id mdlGC25 = mdlee*i_*mdlsw/(mdlfloat4*mdlcw);
Id mdlys = mdlyms*sqrt(2)/mdlvev;
Id mdlyt = mdlymt*sqrt(2)/mdlvev;
Id mdlym = mdlymm*sqrt(2)/mdlvev;
Id mdlyb = mdlymb*sqrt(2)/mdlvev;
Id mdlyc = mdlymc*sqrt(2)/mdlvev;
Id mdlye = mdlyme*sqrt(2)/mdlvev;
Id mdlyup = mdlymup*sqrt(2)/mdlvev;
Id mdlytau = mdlymtau*sqrt(2)/mdlvev;
Id mdlydo = mdlymdo*sqrt(2)/mdlvev;
Id mdlvev = 2*mdlMW*mdlsw/mdlee;
Id mdlGC27 = mdlee*i_*mdlsw/mdlcw;
Id mdlGC26 = (-2)*mdlee*i_*mdlsw/(mdlfloat4*mdlcw);
Id mdlGC29 = mdlcw*mdlee*i_/(mdlfloat1*mdlsw)-mdlee*i_*mdlsw/(mdlfloat8*mdlcw);
Id mdlGC28 = (-mdlcw)*mdlee*i_/(mdlfloat1*mdlsw)-mdlee*i_*mdlsw/(mdlfloat8*mdlcw);
Id mdlGC36 = (-mdlct^2)*mdlG^3*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
Id mdlGC37 = mdlct^2*i_*mdlG^4*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
Id mdlGC35 = (-mdlct^2)*i_*mdlG^2*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
Id mdlGC32 = mdlcgg*i_*mdlG^2/(pi^2*mdlv^2)+mdlctt*i_*mdlG^2*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
Id mdlGC34 = (-mdlcgg)*i_*mdlG^4/(pi^2*mdlv^2)-mdlctt*i_*mdlG^4*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
Id mdlGC33 = mdlcgg*mdlG^3/(pi^2*mdlv^2)+mdlctt*mdlG^3*mdlmtch/(mdlfloat3*pi^2*mdlv^2);
Id mdlGC43 = (-mdlct)*i_*mdlG^4*mdlmtch/(mdlfloat3*pi^2*mdlv);
Id mdlGC42 = mdlct*mdlG^3*mdlmtch/(mdlfloat3*pi^2*mdlv);
Id mdlGC41 = mdlct*i_*mdlG^2*mdlmtch/(mdlfloat3*pi^2*mdlv);
Id mdlmtch = 1+11*mdlaS/(mdlfloat2*pi);
Id mdlg1 = mdlee/mdlcw;
Id mdlZERO = mdlfloat7;
Id mdlGC38 = mdlcg*i_*mdlG^2/(pi^2*mdlv);
Id mdlGC39 = mdlcg*mdlG^3/(pi^2*mdlv);
Id mdlGC9 = (-mdlc3)*i_*mdlnormh3;
Id mdlnormh3 = 3*mdlMh^2/mdlv;
Id mdlGC10 = (-24)*i_*mdlnormh4;
Id mdlnormh4 = mdlMh^2/(mdlfloat6*mdlv^2);
Id mdlGC30 = (-mdlcw)*mdlee*i_/(mdlfloat1*mdlsw)+mdlee*i_*mdlsw/(mdlfloat1*mdlcw);
Id mdlGC31 = mdlcw*mdlee*i_/(mdlfloat1*mdlsw)+mdlee*i_*mdlsw/(mdlfloat1*mdlcw);
Id mdlgw = mdlee/mdlsw;
Id mdlGC24 = (-2)*mdlcw*mdlee^2*i_/mdlsw;
Id mdlGC12 = mdlcw^2*mdlee^2*i_/mdlsw^2;
Id mdlcw = sqrt(1-mdlsw2);
Id mdlGC18 = mdlCKM2x2*mdlee*i_/(mdlsw*sqrt(2));
Id mdlGC19 = mdlCKM2x3*mdlee*i_/(mdlsw*sqrt(2));
Id mdlGC11 = (-mdlee^2)*i_/mdlsw^2;
Id mdlGC13 = mdlee*i_/(mdlsw*sqrt(2));
Id mdlGC14 = mdlCKM1x1*mdlee*i_/(mdlsw*sqrt(2));
Id mdlGC15 = mdlCKM1x2*mdlee*i_/(mdlsw*sqrt(2));
Id mdlGC16 = mdlCKM1x3*mdlee*i_/(mdlsw*sqrt(2));
Id mdlGC17 = mdlCKM2x1*mdlee*i_/(mdlsw*sqrt(2));
Id mdlyytau = mdlymtau/mdlv;
Id mdlGC45 = (-mdlctt)*i_*mdlyyt/mdlv;
Id mdlGC44 = (-mdlct)*i_*mdlyyt;
Id mdlGC40 = (-mdlcg)*i_*mdlG^4/(pi^2*mdlv);
Id mdlyyb = mdlymb/mdlv;
Id mdlyyt = mdlymt/mdlv;
Id mdlv = 2*mdlMW*mdlsw/mdlee;
Id mdlGC47 = mdlee*i_*complexconjugate(mdlCKM1x2)/(mdlsw*sqrt(2));
Id mdlGC46 = mdlee*i_*complexconjugate(mdlCKM1x1)/(mdlsw*sqrt(2));
Id mdlGC49 = mdlee*i_*complexconjugate(mdlCKM2x1)/(mdlsw*sqrt(2));
Id mdlGC48 = mdlee*i_*complexconjugate(mdlCKM1x3)/(mdlsw*sqrt(2));
Id mdlGC54 = mdlee*i_*complexconjugate(mdlCKM3x3)/(mdlsw*sqrt(2));
Id mdlGC50 = mdlee*i_*complexconjugate(mdlCKM2x2)/(mdlsw*sqrt(2));
Id mdlGC51 = mdlee*i_*complexconjugate(mdlCKM2x3)/(mdlsw*sqrt(2));
Id mdlGC52 = mdlee*i_*complexconjugate(mdlCKM3x1)/(mdlsw*sqrt(2));
Id mdlGC53 = mdlee*i_*complexconjugate(mdlCKM3x2)/(mdlsw*sqrt(2));
Id mdlsw = sqrt(mdlsw2);
Id mdlsw2 = 1-mdlMW^2/mdlMZ^2;
Id mdlGC1 = (-mdlee)*i_/mdlfloat4;
Id mdlGC2 = 2*mdlee*i_/mdlfloat4;
Id mdlGC3 = (-mdlee)*i_;
Id mdlGC5 = mdlee^2*i_;
Id mdlMW = sqrt(mdlMZ^2/mdlfloat1+sqrt(mdlMZ^4/mdlfloat2-mdlaEW*pi*mdlMZ^2/(mdlGf*sqrt(2))));
Id mdlGC4 = mdlee*i_;
Id mdlee = 2*sqrt(mdlaEW)*sqrt(pi);
Id mdlaEW = 1/mdlaEWM1;
Id mdlCKM3x1 = 0;
Id mdlCKM3x3 = 1;
Id mdlCKM3x2 = 0;
Id Nfrat = if(Nfgen,Nf/Nfgen,1);
Id mdlCKM1x3 = 0;
Id mdlCKM1x2 = 0;
Id mdlCKM1x1 = 1;
Id mdlCKM2x1 = 0;
Id mdlCKM2x2 = 1;
Id mdlCKM2x3 = 0;
Id mdlGC8 = i_*mdlG^2;
Id mdlGC6 = -mdlG;
Id mdlGC7 = i_*mdlG;
Id mdlG = 2*sqrt(mdlaS)*sqrt(pi);
Id mdlMh = mdlfloat5;
Id mdlloop = 16*pi^2;
#EndProcedure



