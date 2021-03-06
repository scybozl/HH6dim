module     gghh_abbrevd13h0
   use gghh_config, only: ki
   use gghh_kinematics, only: epstensor
   use gghh_globalsh0
   implicit none
   private
   complex(ki), dimension(66), public :: abb13
   complex(ki), public :: R2d13
   public :: init_abbrev
   complex(ki), parameter :: i_ = (0.0_ki, 1.0_ki)
contains
   subroutine     init_abbrev()
      use gghh_config, only: deltaOS, &
     &    logfile, debug_nlo_diagrams
      use gghh_kinematics
      use gghh_model
      use gghh_color, only: TR
      use gghh_globalsl1, only: epspow
      implicit none
      abb13(1)=sqrt(mdlMT**2)
      abb13(2)=spak2l3**(-1)
      abb13(3)=spbl3k2**(-1)
      abb13(4)=spak2l4**(-1)
      abb13(5)=spbl4k2**(-1)
      abb13(6)=c1*i_
      abb13(7)=abb13(6)*spbe2e1
      abb13(8)=mdlGC45*mdlGC7
      abb13(8)=abb13(8)**2
      abb13(9)=abb13(7)*abb13(8)
      abb13(10)=spae1e2*abb13(9)
      abb13(11)=5.0_ki/3.0_ki*abb13(10)
      abb13(12)=spbk1e1*spak1e2
      abb13(13)=spbl3e2*spae1l3
      abb13(14)=abb13(12)*abb13(13)
      abb13(15)=spae1k1*spbe2k1
      abb13(16)=spae2l3*spbl3e1
      abb13(17)=abb13(15)*abb13(16)
      abb13(14)=abb13(14)+abb13(17)
      abb13(17)=spbl4e2*spae1l4
      abb13(18)=abb13(17)*abb13(16)
      abb13(19)=spae2l4*spbl4e1
      abb13(20)=abb13(19)*abb13(13)
      abb13(18)=abb13(18)+abb13(20)
      abb13(20)=spae1k1*spbl4k1
      abb13(21)=abb13(20)*spae2l4
      abb13(22)=abb13(21)*spbe2e1
      abb13(23)=spbk1e1*spak1l4
      abb13(24)=abb13(23)*spbl4e2
      abb13(25)=abb13(24)*spae1e2
      abb13(22)=abb13(22)+abb13(25)
      abb13(25)=spbe2e1*spae1e2
      abb13(26)=abb13(1)**2
      abb13(27)=abb13(25)*abb13(26)
      abb13(28)=2.0_ki*abb13(27)
      abb13(29)=-abb13(28)+abb13(18)+abb13(22)+2.0_ki*abb13(14)
      abb13(29)=abb13(29)*abb13(26)
      abb13(30)=spae2k2*spbk2e1
      abb13(31)=abb13(13)*abb13(30)
      abb13(32)=spbk2e2*spae1k2
      abb13(33)=abb13(16)*abb13(32)
      abb13(31)=abb13(31)+abb13(33)
      abb13(33)=spae2k2*spbk2k1
      abb13(34)=abb13(33)*spae1k1
      abb13(35)=abb13(34)*spbe2e1
      abb13(36)=spbk2e2*spak1k2
      abb13(37)=abb13(36)*spbk1e1
      abb13(38)=abb13(37)*spae1e2
      abb13(35)=abb13(35)+abb13(38)
      abb13(38)=abb13(31)+abb13(35)
      abb13(39)=abb13(4)*abb13(5)
      abb13(38)=abb13(38)*abb13(39)
      abb13(40)=2.0_ki*abb13(15)
      abb13(41)=abb13(17)+abb13(40)
      abb13(41)=abb13(41)*abb13(30)
      abb13(42)=2.0_ki*abb13(12)
      abb13(43)=abb13(19)+abb13(42)
      abb13(43)=abb13(43)*abb13(32)
      abb13(41)=abb13(41)+abb13(43)
      abb13(43)=abb13(2)*abb13(3)
      abb13(41)=abb13(41)*abb13(43)
      abb13(38)=abb13(38)+abb13(41)
      abb13(41)=mdlMh**2
      abb13(44)=abb13(26)*abb13(41)
      abb13(38)=abb13(38)*abb13(44)
      abb13(29)=abb13(29)+abb13(38)
      abb13(38)=abb13(8)*abb13(6)
      abb13(29)=abb13(29)*abb13(38)
      abb13(45)=spae1k1*spbk2k1
      abb13(46)=-spbl3e1*spak2l3*abb13(45)
      abb13(47)=spbk1e1*spak1k2
      abb13(48)=-spae1l3*spbl3k2*abb13(47)
      abb13(46)=abb13(46)+abb13(48)
      abb13(46)=abb13(46)*abb13(39)
      abb13(48)=spbk2e1*spak2l4*abb13(20)
      abb13(49)=spae1k2*spbl4k2*abb13(23)
      abb13(48)=abb13(48)+abb13(49)
      abb13(48)=abb13(48)*abb13(43)
      abb13(46)=abb13(46)+abb13(48)
      abb13(46)=abb13(46)*abb13(41)
      abb13(20)=spbl3e1*spal3l4*abb13(20)
      abb13(23)=spae1l3*spbl4l3*abb13(23)
      abb13(20)=abb13(46)+abb13(20)+abb13(23)
      abb13(20)=abb13(20)*abb13(38)
      abb13(23)=spbl3e2*spak1l3
      abb13(46)=-abb13(33)*abb13(23)
      abb13(48)=spae2l3*spbl3k1
      abb13(49)=-abb13(36)*abb13(48)
      abb13(46)=abb13(46)+abb13(49)
      abb13(46)=abb13(46)*abb13(39)
      abb13(49)=spbl4e2*spak1l4
      abb13(33)=-abb13(49)*abb13(33)
      abb13(50)=spae2l4*spbl4k1
      abb13(36)=-abb13(50)*abb13(36)
      abb13(33)=abb13(33)+abb13(36)
      abb13(33)=abb13(33)*abb13(43)
      abb13(33)=abb13(46)+abb13(33)
      abb13(33)=abb13(33)*abb13(41)
      abb13(36)=-abb13(49)*abb13(48)
      abb13(23)=-abb13(50)*abb13(23)
      abb13(46)=-spbl4e2*spae2l4
      abb13(48)=spbl3e2*spae2l3
      abb13(46)=abb13(46)+abb13(48)
      abb13(46)=abb13(46)*abb13(26)
      abb13(23)=abb13(33)+6.0_ki*abb13(46)+abb13(36)+abb13(23)
      abb13(23)=abb13(23)*abb13(38)
      abb13(33)=abb13(43)*abb13(41)
      abb13(36)=-es12*abb13(33)
      abb13(46)=-spbl3k1*spak1l3
      abb13(36)=abb13(36)+abb13(46)-8.0_ki*abb13(26)
      abb13(46)=4.0_ki*abb13(38)
      abb13(36)=abb13(36)*abb13(46)
      abb13(48)=abb13(12)*abb13(32)
      abb13(49)=abb13(15)*abb13(30)
      abb13(48)=abb13(48)+abb13(49)
      abb13(48)=abb13(48)*abb13(33)
      abb13(14)=abb13(48)+abb13(14)
      abb13(28)=abb13(28)+abb13(14)
      abb13(28)=abb13(28)*abb13(38)
      abb13(48)=2.0_ki*abb13(10)
      abb13(49)=-abb13(26)*abb13(48)
      abb13(14)=abb13(39)*abb13(14)
      abb13(50)=abb13(39)-abb13(43)
      abb13(25)=abb13(50)*abb13(25)
      abb13(51)=2.0_ki*abb13(26)
      abb13(51)=abb13(25)*abb13(51)
      abb13(14)=abb13(51)+abb13(14)
      abb13(51)=abb13(41)*abb13(38)
      abb13(14)=abb13(14)*abb13(51)
      abb13(52)=abb13(17)*abb13(30)
      abb13(53)=abb13(19)*abb13(32)
      abb13(52)=abb13(52)+abb13(53)
      abb13(52)=abb13(52)*abb13(43)
      abb13(53)=abb13(31)*abb13(39)
      abb13(53)=abb13(53)+abb13(52)
      abb13(53)=abb13(53)*abb13(41)
      abb13(18)=-abb13(18)+4.0_ki*abb13(27)
      abb13(27)=abb13(53)-abb13(18)
      abb13(27)=abb13(27)*abb13(38)
      abb13(53)=spbl3e1*spae1l3
      abb13(46)=abb13(53)*abb13(46)
      abb13(31)=-abb13(31)+abb13(35)
      abb13(31)=abb13(31)*abb13(39)
      abb13(31)=abb13(31)-abb13(52)
      abb13(31)=abb13(31)*abb13(41)
      abb13(18)=abb13(31)+abb13(22)+abb13(18)
      abb13(18)=abb13(18)*abb13(38)
      abb13(22)=2.0_ki*abb13(6)
      abb13(22)=abb13(22)*abb13(8)
      abb13(31)=spbl4e1*spae1l4
      abb13(31)=abb13(31)-abb13(53)
      abb13(31)=abb13(31)*abb13(22)
      abb13(35)=2.0_ki*abb13(51)
      abb13(25)=-abb13(25)*abb13(35)
      abb13(10)=4.0_ki*abb13(10)
      abb13(52)=abb13(32)*abb13(43)
      abb13(32)=abb13(32)*abb13(39)
      abb13(52)=abb13(52)-abb13(32)
      abb13(44)=1.0_ki/2.0_ki*abb13(44)
      abb13(53)=abb13(52)*abb13(44)
      abb13(13)=abb13(17)-abb13(13)
      abb13(17)=-1.0_ki/2.0_ki*abb13(13)-abb13(40)
      abb13(17)=abb13(17)*abb13(26)
      abb13(17)=abb13(17)+abb13(53)
      abb13(17)=abb13(17)*abb13(38)
      abb13(40)=abb13(52)*abb13(41)
      abb13(13)=abb13(40)-abb13(15)-abb13(13)
      abb13(15)=1.0_ki/2.0_ki*abb13(6)
      abb13(15)=abb13(15)*abb13(8)
      abb13(13)=abb13(13)*abb13(15)
      abb13(40)=abb13(30)*abb13(43)
      abb13(30)=abb13(30)*abb13(39)
      abb13(40)=abb13(40)-abb13(30)
      abb13(44)=abb13(40)*abb13(44)
      abb13(16)=abb13(19)-abb13(16)
      abb13(19)=-1.0_ki/2.0_ki*abb13(16)-abb13(42)
      abb13(19)=abb13(19)*abb13(26)
      abb13(19)=abb13(19)+abb13(44)
      abb13(19)=abb13(19)*abb13(38)
      abb13(40)=abb13(40)*abb13(41)
      abb13(12)=abb13(40)-abb13(12)-abb13(16)
      abb13(12)=abb13(12)*abb13(15)
      abb13(16)=abb13(15)*spbe2e1
      abb13(40)=-spae1l4*abb13(26)*abb13(16)
      abb13(42)=abb13(15)*spae1e2
      abb13(44)=-spbl4e1*abb13(26)*abb13(42)
      abb13(52)=spae2l4*abb13(16)
      abb13(53)=spbl4e2*abb13(42)
      abb13(41)=abb13(39)*abb13(41)
      abb13(37)=abb13(41)*abb13(37)
      abb13(37)=abb13(37)+abb13(24)
      abb13(54)=spbe2e1*abb13(26)
      abb13(54)=abb13(54)-abb13(37)
      abb13(54)=abb13(15)*spae1l3*abb13(54)
      abb13(55)=abb13(38)*spbe2k1
      abb13(56)=spak1l3*abb13(55)
      abb13(57)=-spae1l3*abb13(9)
      abb13(34)=abb13(41)*abb13(34)
      abb13(34)=abb13(34)+abb13(21)
      abb13(41)=spae1e2*abb13(26)
      abb13(41)=abb13(41)-abb13(34)
      abb13(41)=abb13(15)*spbl3e1*abb13(41)
      abb13(38)=abb13(38)*spak1e2
      abb13(58)=spbl3k1*abb13(38)
      abb13(6)=abb13(6)*spae1e2
      abb13(59)=abb13(6)*abb13(8)
      abb13(60)=-spbl3e1*abb13(59)
      abb13(37)=abb13(15)*spae2l3*abb13(37)
      abb13(9)=spae2l3*abb13(9)
      abb13(61)=-spae2l3*abb13(16)
      abb13(15)=abb13(15)*spbl3e2*abb13(34)
      abb13(34)=spbl3e2*abb13(59)
      abb13(59)=-spbl3e2*abb13(42)
      abb13(32)=-abb13(33)*abb13(47)*abb13(32)
      abb13(47)=-spae1k2*abb13(43)*abb13(24)
      abb13(62)=abb13(50)*abb13(26)
      abb13(63)=spbe2e1*spae1k2
      abb13(64)=-abb13(63)*abb13(62)
      abb13(32)=abb13(32)+abb13(47)+abb13(64)
      abb13(47)=1.0_ki/2.0_ki*abb13(51)
      abb13(32)=abb13(32)*abb13(47)
      abb13(51)=abb13(51)*abb13(43)
      abb13(64)=spbe2k1*spak1k2*abb13(51)
      abb13(63)=-abb13(51)*abb13(63)
      abb13(30)=-abb13(33)*abb13(45)*abb13(30)
      abb13(33)=-spbk2e1*abb13(43)*abb13(21)
      abb13(43)=spae1e2*spbk2e1
      abb13(45)=-abb13(43)*abb13(62)
      abb13(30)=abb13(30)+abb13(33)+abb13(45)
      abb13(30)=abb13(30)*abb13(47)
      abb13(33)=spak1e2*spbk2k1*abb13(51)
      abb13(43)=-abb13(51)*abb13(43)
      abb13(45)=abb13(51)*spae2k2
      abb13(24)=1.0_ki/2.0_ki*abb13(24)*abb13(45)
      abb13(62)=spbe2e1*spae2k2
      abb13(65)=abb13(51)*abb13(62)
      abb13(47)=abb13(50)*abb13(47)
      abb13(50)=abb13(62)*abb13(47)
      abb13(62)=abb13(51)*spbk2e2
      abb13(21)=1.0_ki/2.0_ki*abb13(21)*abb13(62)
      abb13(66)=spae1e2*spbk2e2
      abb13(51)=abb13(51)*abb13(66)
      abb13(47)=abb13(66)*abb13(47)
      abb13(8)=2.0_ki*abb13(8)
      abb13(8)=abb13(8)*abb13(26)
      abb13(7)=spae1k1*abb13(7)*abb13(8)
      abb13(6)=spbk1e1*abb13(6)*abb13(8)
      abb13(8)=spak1e2*abb13(16)
      abb13(16)=spbe2k1*abb13(42)
      abb13(26)=spae2l3*spbl4e2*abb13(22)
      abb13(42)=2.0_ki*spbl4e2*abb13(45)
      abb13(22)=spbl3e2*spae2l4*abb13(22)
      abb13(35)=abb13(35)*abb13(39)
      abb13(39)=spae2k2*spbl3e2*abb13(35)
      abb13(38)=spbl3e2*abb13(38)
      abb13(66)=2.0_ki*spae2l4*abb13(62)
      abb13(35)=spbk2e2*spae2l3*abb13(35)
      abb13(62)=spak1e2*abb13(62)
      abb13(55)=spae2l3*abb13(55)
      abb13(45)=spbe2k1*abb13(45)
      R2d13=abb13(11)
      rat2 = rat2 + R2d13
      if (debug_nlo_diagrams) then
          write (logfile,*) "<result name='r2' index='13' value='", &
          & R2d13, "'/>"
      end if
   end subroutine
end module gghh_abbrevd13h0
