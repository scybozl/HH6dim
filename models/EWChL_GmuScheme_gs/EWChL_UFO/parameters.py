# This file was automatically created by FeynRules 2.3.27
# Mathematica version: 10.4.1 for Linux x86 (64-bit) (April 11, 2016)
# Date: Thu 12 Oct 2017 11:30:44



from object_library import all_parameters, Parameter


from function_library import complexconjugate, re, im, csc, sec, acsc, asec, cot

# This is a default parameter object representing 0.
ZERO = Parameter(name = 'ZERO',
                 nature = 'internal',
                 type = 'real',
                 value = '0.0',
                 texname = '0')

# User-defined parameters.
Gf = Parameter(name = 'Gf',
               nature = 'external',
               type = 'real',
               value = 0.0000116637,
               texname = 'G_f',
               lhablock = 'SMINPUTS',
               lhacode = [ 2 ])

gs = Parameter(name = 'gs',
               nature = 'external',
               type = 'real',
               value = 1.217715785,
               texname = 'g_s',
               lhablock = 'SMINPUTS',
               lhacode = [ 3 ])

ymdo = Parameter(name = 'ymdo',
                 nature = 'external',
                 type = 'real',
                 value = 0.,
                 texname = '\\text{ymdo}',
                 lhablock = 'YUKAWA',
                 lhacode = [ 1 ])

ymup = Parameter(name = 'ymup',
                 nature = 'external',
                 type = 'real',
                 value = 0.,
                 texname = '\\text{ymup}',
                 lhablock = 'YUKAWA',
                 lhacode = [ 2 ])

yms = Parameter(name = 'yms',
                nature = 'external',
                type = 'real',
                value = 0.,
                texname = '\\text{yms}',
                lhablock = 'YUKAWA',
                lhacode = [ 3 ])

ymc = Parameter(name = 'ymc',
                nature = 'external',
                type = 'real',
                value = 0.,
                texname = '\\text{ymc}',
                lhablock = 'YUKAWA',
                lhacode = [ 4 ])

ymb = Parameter(name = 'ymb',
                nature = 'external',
                type = 'real',
                value = 4.7,
                texname = '\\text{ymb}',
                lhablock = 'YUKAWA',
                lhacode = [ 5 ])

ymt = Parameter(name = 'ymt',
                nature = 'external',
                type = 'real',
                value = 172,
                texname = '\\text{ymt}',
                lhablock = 'YUKAWA',
                lhacode = [ 6 ])

yme = Parameter(name = 'yme',
                nature = 'external',
                type = 'real',
                value = 0.,
                texname = '\\text{yme}',
                lhablock = 'YUKAWA',
                lhacode = [ 11 ])

ymm = Parameter(name = 'ymm',
                nature = 'external',
                type = 'real',
                value = 0.,
                texname = '\\text{ymm}',
                lhablock = 'YUKAWA',
                lhacode = [ 13 ])

ymtau = Parameter(name = 'ymtau',
                  nature = 'external',
                  type = 'real',
                  value = 1.777,
                  texname = '\\text{ymtau}',
                  lhablock = 'YUKAWA',
                  lhacode = [ 15 ])

cV = Parameter(name = 'cV',
               nature = 'external',
               type = 'real',
               value = 1,
               texname = 'c_V',
               lhablock = 'FRBlock',
               lhacode = [ 1 ])

ct = Parameter(name = 'ct',
               nature = 'external',
               type = 'real',
               value = 1,
               texname = 'c_t',
               lhablock = 'FRBlock',
               lhacode = [ 2 ])

cb = Parameter(name = 'cb',
               nature = 'external',
               type = 'real',
               value = 1,
               texname = 'c_b',
               lhablock = 'FRBlock',
               lhacode = [ 3 ])

ctau = Parameter(name = 'ctau',
                 nature = 'external',
                 type = 'real',
                 value = 1,
                 texname = 'c_{\\tau }',
                 lhablock = 'FRBlock',
                 lhacode = [ 4 ])

cgaga = Parameter(name = 'cgaga',
                  nature = 'external',
                  type = 'real',
                  value = 0,
                  texname = 'c_{\\text{gaga}}',
                  lhablock = 'FRBlock',
                  lhacode = [ 5 ])

cgg = Parameter(name = 'cgg',
                nature = 'external',
                type = 'real',
                value = 0,
                texname = 'c_{\\text{gg}}',
                lhablock = 'FRBlock',
                lhacode = [ 6 ])

cZga = Parameter(name = 'cZga',
                 nature = 'external',
                 type = 'real',
                 value = 0,
                 texname = 'c_{\\text{Zga}}',
                 lhablock = 'FRBlock',
                 lhacode = [ 7 ])

cgghh = Parameter(name = 'cgghh',
                  nature = 'external',
                  type = 'real',
                  value = 0,
                  texname = 'c_{\\text{gghh}}',
                  lhablock = 'FRBlock',
                  lhacode = [ 8 ])

cVhh = Parameter(name = 'cVhh',
                 nature = 'external',
                 type = 'real',
                 value = 1,
                 texname = 'c_{\\text{Vhh}}',
                 lhablock = 'FRBlock',
                 lhacode = [ 9 ])

cthh = Parameter(name = 'cthh',
                 nature = 'external',
                 type = 'real',
                 value = 0,
                 texname = 'c_{\\text{thh}}',
                 lhablock = 'FRBlock',
                 lhacode = [ 10 ])

chhh = Parameter(name = 'chhh',
                 nature = 'external',
                 type = 'real',
                 value = 1,
                 texname = 'c_{\\text{hhh}}',
                 lhablock = 'FRBlock',
                 lhacode = [ 11 ])

chhhh = Parameter(name = 'chhhh',
                  nature = 'external',
                  type = 'real',
                  value = 1,
                  texname = 'c_{\\text{hhhh}}',
                  lhablock = 'FRBlock',
                  lhacode = [ 12 ])

MZ = Parameter(name = 'MZ',
               nature = 'external',
               type = 'real',
               value = 91.1876,
               texname = '\\text{MZ}',
               lhablock = 'MASS',
               lhacode = [ 23 ])

MW = Parameter(name = 'MW',
               nature = 'external',
               type = 'real',
               value = 80.376,
               texname = '\\text{MW}',
               lhablock = 'MASS',
               lhacode = [ 24 ])

Me = Parameter(name = 'Me',
               nature = 'external',
               type = 'real',
               value = 0.000511,
               texname = '\\text{Me}',
               lhablock = 'MASS',
               lhacode = [ 11 ])

MMU = Parameter(name = 'MMU',
                nature = 'external',
                type = 'real',
                value = 0.10566,
                texname = '\\text{MMU}',
                lhablock = 'MASS',
                lhacode = [ 13 ])

MTA = Parameter(name = 'MTA',
                nature = 'external',
                type = 'real',
                value = 1.777,
                texname = '\\text{MTA}',
                lhablock = 'MASS',
                lhacode = [ 15 ])

MU = Parameter(name = 'MU',
               nature = 'external',
               type = 'real',
               value = 0.00255,
               texname = 'M',
               lhablock = 'MASS',
               lhacode = [ 2 ])

MC = Parameter(name = 'MC',
               nature = 'external',
               type = 'real',
               value = 1.27,
               texname = '\\text{MC}',
               lhablock = 'MASS',
               lhacode = [ 4 ])

MT = Parameter(name = 'MT',
               nature = 'external',
               type = 'real',
               value = 172,
               texname = '\\text{MT}',
               lhablock = 'MASS',
               lhacode = [ 6 ])

MD = Parameter(name = 'MD',
               nature = 'external',
               type = 'real',
               value = 0.00504,
               texname = '\\text{MD}',
               lhablock = 'MASS',
               lhacode = [ 1 ])

MS = Parameter(name = 'MS',
               nature = 'external',
               type = 'real',
               value = 0.101,
               texname = '\\text{MS}',
               lhablock = 'MASS',
               lhacode = [ 3 ])

MB = Parameter(name = 'MB',
               nature = 'external',
               type = 'real',
               value = 4.7,
               texname = '\\text{MB}',
               lhablock = 'MASS',
               lhacode = [ 5 ])

WZ = Parameter(name = 'WZ',
               nature = 'external',
               type = 'real',
               value = 2.4952,
               texname = '\\text{WZ}',
               lhablock = 'DECAY',
               lhacode = [ 23 ])

WW = Parameter(name = 'WW',
               nature = 'external',
               type = 'real',
               value = 2.085,
               texname = '\\text{WW}',
               lhablock = 'DECAY',
               lhacode = [ 24 ])

WT = Parameter(name = 'WT',
               nature = 'external',
               type = 'real',
               value = 1.50833649,
               texname = '\\text{WT}',
               lhablock = 'DECAY',
               lhacode = [ 6 ])

Wh = Parameter(name = 'Wh',
               nature = 'external',
               type = 'real',
               value = 0.00407,
               texname = '\\text{Wh}',
               lhablock = 'DECAY',
               lhacode = [ 5000000 ])

sw = Parameter(name = 'sw',
               nature = 'internal',
               type = 'real',
               value = 'cmath.sqrt(1 - MW**2/MZ**2)',
               texname = 's_w')

aS = Parameter(name = 'aS',
               nature = 'internal',
               type = 'real',
               value = 'gs**2/(4.*cmath.pi)',
               texname = '\\alpha _s')

CKM1x1 = Parameter(name = 'CKM1x1',
                   nature = 'internal',
                   type = 'complex',
                   value = '1',
                   texname = '\\text{CKM1x1}')

CKM1x2 = Parameter(name = 'CKM1x2',
                   nature = 'internal',
                   type = 'complex',
                   value = '0',
                   texname = '\\text{CKM1x2}')

CKM1x3 = Parameter(name = 'CKM1x3',
                   nature = 'internal',
                   type = 'complex',
                   value = '0',
                   texname = '\\text{CKM1x3}')

CKM2x1 = Parameter(name = 'CKM2x1',
                   nature = 'internal',
                   type = 'complex',
                   value = '0',
                   texname = '\\text{CKM2x1}')

CKM2x2 = Parameter(name = 'CKM2x2',
                   nature = 'internal',
                   type = 'complex',
                   value = '1',
                   texname = '\\text{CKM2x2}')

CKM2x3 = Parameter(name = 'CKM2x3',
                   nature = 'internal',
                   type = 'complex',
                   value = '0',
                   texname = '\\text{CKM2x3}')

CKM3x1 = Parameter(name = 'CKM3x1',
                   nature = 'internal',
                   type = 'complex',
                   value = '0',
                   texname = '\\text{CKM3x1}')

CKM3x2 = Parameter(name = 'CKM3x2',
                   nature = 'internal',
                   type = 'complex',
                   value = '0',
                   texname = '\\text{CKM3x2}')

CKM3x3 = Parameter(name = 'CKM3x3',
                   nature = 'internal',
                   type = 'complex',
                   value = '1',
                   texname = '\\text{CKM3x3}')

loop = Parameter(name = 'loop',
                 nature = 'internal',
                 type = 'real',
                 value = '16*cmath.pi**2',
                 texname = 'L_f')

Mh = Parameter(name = 'Mh',
               nature = 'internal',
               type = 'real',
               value = '125.',
               texname = '\\text{Mh}')

sw2 = Parameter(name = 'sw2',
                nature = 'internal',
                type = 'real',
                value = 'sw**2',
                texname = '\\text{sw2}')

ee = Parameter(name = 'ee',
               nature = 'internal',
               type = 'real',
               value = '2*2**0.25*MW*sw*cmath.sqrt(Gf)',
               texname = 'e')

cw = Parameter(name = 'cw',
               nature = 'internal',
               type = 'real',
               value = 'cmath.sqrt(1 - sw2)',
               texname = 'c_w')

v = Parameter(name = 'v',
              nature = 'internal',
              type = 'real',
              value = '(2*MW*sw)/ee',
              texname = 'v')

aEW = Parameter(name = 'aEW',
                nature = 'internal',
                type = 'real',
                value = 'ee**2/(4.*cmath.pi)',
                texname = '\\alpha _{\\text{EW}}')

gw = Parameter(name = 'gw',
               nature = 'internal',
               type = 'real',
               value = 'ee/sw',
               texname = 'g_w')

vev = Parameter(name = 'vev',
                nature = 'internal',
                type = 'real',
                value = '(2*MW*sw)/ee',
                texname = '\\text{vev}')

normh3 = Parameter(name = 'normh3',
                   nature = 'internal',
                   type = 'real',
                   value = 'Mh**2/(2.*v**2)',
                   texname = '\\text{normh3}')

normh4 = Parameter(name = 'normh4',
                   nature = 'internal',
                   type = 'real',
                   value = 'Mh**2/(8.*v**2)',
                   texname = '\\text{normh4}')

yyb = Parameter(name = 'yyb',
                nature = 'internal',
                type = 'real',
                value = 'ymb/v',
                texname = 'y_b')

yyt = Parameter(name = 'yyt',
                nature = 'internal',
                type = 'real',
                value = 'ymt/v',
                texname = 'y_t')

yytau = Parameter(name = 'yytau',
                  nature = 'internal',
                  type = 'real',
                  value = 'ymtau/v',
                  texname = 'y_{\\tau }')

aEWM1 = Parameter(name = 'aEWM1',
                  nature = 'internal',
                  type = 'real',
                  value = '1/aEW',
                  texname = '\\text{aEWM1}')

g1 = Parameter(name = 'g1',
               nature = 'internal',
               type = 'real',
               value = 'ee/cw',
               texname = 'g_1')

yb = Parameter(name = 'yb',
               nature = 'internal',
               type = 'real',
               value = '(ymb*cmath.sqrt(2))/vev',
               texname = '\\text{yb}')

yc = Parameter(name = 'yc',
               nature = 'internal',
               type = 'real',
               value = '(ymc*cmath.sqrt(2))/vev',
               texname = '\\text{yc}')

ydo = Parameter(name = 'ydo',
                nature = 'internal',
                type = 'real',
                value = '(ymdo*cmath.sqrt(2))/vev',
                texname = '\\text{ydo}')

ye = Parameter(name = 'ye',
               nature = 'internal',
               type = 'real',
               value = '(yme*cmath.sqrt(2))/vev',
               texname = '\\text{ye}')

ym = Parameter(name = 'ym',
               nature = 'internal',
               type = 'real',
               value = '(ymm*cmath.sqrt(2))/vev',
               texname = '\\text{ym}')

ys = Parameter(name = 'ys',
               nature = 'internal',
               type = 'real',
               value = '(yms*cmath.sqrt(2))/vev',
               texname = '\\text{ys}')

yt = Parameter(name = 'yt',
               nature = 'internal',
               type = 'real',
               value = '(ymt*cmath.sqrt(2))/vev',
               texname = '\\text{yt}')

ytau = Parameter(name = 'ytau',
                 nature = 'internal',
                 type = 'real',
                 value = '(ymtau*cmath.sqrt(2))/vev',
                 texname = '\\text{ytau}')

yup = Parameter(name = 'yup',
                nature = 'internal',
                type = 'real',
                value = '(ymup*cmath.sqrt(2))/vev',
                texname = '\\text{yup}')

