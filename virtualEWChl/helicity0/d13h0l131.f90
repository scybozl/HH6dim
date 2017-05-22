module     gghh_d13h0l131
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d13h0l1 &
   ! &31.f90
   ! generator: buildfortran_tn3.py
   use gghh_config, only: ki
   use gghh_util, only: cond_t, d => metric_tensor
   implicit none
   private
   complex(ki), parameter :: i_ = (0.0_ki, 1.0_ki)
   integer, parameter :: ninjaidxt3mu0 = 0
   integer, parameter :: ninjaidxt2mu0 = 1
   integer, parameter :: ninjaidxt1mu0 = 2
   integer, parameter :: ninjaidxt1mu2 = 3
   integer, parameter :: ninjaidxt0mu0 = 4
   integer, parameter :: ninjaidxt0mu2 = 5
   public :: numerator_t3
contains
!---#[ subroutine brack_31:
   pure subroutine brack_31(ninjaA, ninjaE3, ninjaE4, ninjaP, brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd13h0
      implicit none
      complex(ki), dimension(4), intent(in) :: ninjaA, ninjaE3, ninjaE4
      complex(ki), intent(in) :: ninjaP
      complex(ki), dimension(1) :: acd13
      complex(ki), dimension (0:*), intent(inout) :: brack
      brack(ninjaidxt3mu0)=0.0_ki
      brack(ninjaidxt2mu0)=0.0_ki
   end subroutine brack_31
!---#] subroutine brack_31:
!---#[ subroutine brack_32:
   pure subroutine brack_32(ninjaA, ninjaE3, ninjaE4, ninjaP, brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd13h0
      implicit none
      complex(ki), dimension(4), intent(in) :: ninjaA, ninjaE3, ninjaE4
      complex(ki), intent(in) :: ninjaP
      complex(ki), dimension(151) :: acd13
      complex(ki), dimension (0:*), intent(inout) :: brack
      acd13(1)=dotproduct(k1,ninjaE3)
      acd13(2)=abb13(10)
      acd13(3)=dotproduct(k2,ninjaE3)
      acd13(4)=abb13(25)
      acd13(5)=dotproduct(l3,ninjaE3)
      acd13(6)=abb13(48)
      acd13(7)=dotproduct(l4,ninjaE3)
      acd13(8)=dotproduct(e2,ninjaE3)
      acd13(9)=abb13(31)
      acd13(10)=dotproduct(ninjaA,ninjaE3)
      acd13(11)=dotproduct(ninjaE3,spvae1k1)
      acd13(12)=abb13(8)
      acd13(13)=dotproduct(ninjaE3,spvae1l3)
      acd13(14)=abb13(61)
      acd13(15)=dotproduct(ninjaE3,spvae1e2)
      acd13(16)=abb13(12)
      acd13(17)=dotproduct(ninjaE3,spvae2e1)
      acd13(18)=abb13(13)
      acd13(19)=dotproduct(ninjaE3,spval3e1)
      acd13(20)=abb13(59)
      acd13(21)=dotproduct(ninjaE3,spvak1e1)
      acd13(22)=abb13(16)
      acd13(23)=dotproduct(ninjaE3,spvak2e1)
      acd13(24)=abb13(47)
      acd13(25)=dotproduct(ninjaE3,spvae1k2)
      acd13(26)=abb13(50)
      acd13(27)=dotproduct(ninjaE3,spvae1l4)
      acd13(28)=abb13(52)
      acd13(29)=dotproduct(ninjaE3,spval4e1)
      acd13(30)=abb13(53)
      acd13(31)=abb13(46)
      acd13(32)=abb13(9)
      acd13(33)=abb13(34)
      acd13(34)=abb13(51)
      acd13(35)=abb13(65)
      acd13(36)=dotproduct(ninjaE3,spvak2e2)
      acd13(37)=abb13(43)
      acd13(38)=dotproduct(ninjaE3,spvae2k2)
      acd13(39)=abb13(63)
      acd13(40)=dotproduct(ninjaE3,spval3e2)
      acd13(41)=abb13(60)
      acd13(42)=dotproduct(ninjaE3,spvae2l3)
      acd13(43)=abb13(57)
      acd13(44)=dotproduct(e1,ninjaE3)
      acd13(45)=abb13(36)
      acd13(46)=dotproduct(ninjaE3,spval3l4)
      acd13(47)=abb13(22)
      acd13(48)=dotproduct(ninjaE3,spval4l3)
      acd13(49)=abb13(26)
      acd13(50)=abb13(33)
      acd13(51)=abb13(64)
      acd13(52)=dotproduct(ninjaE3,spvak2l3)
      acd13(53)=abb13(35)
      acd13(54)=dotproduct(ninjaE3,spval3k1)
      acd13(55)=abb13(38)
      acd13(56)=dotproduct(ninjaE3,spval3k2)
      acd13(57)=abb13(39)
      acd13(58)=abb13(58)
      acd13(59)=dotproduct(ninjaE3,spval4k2)
      acd13(60)=abb13(42)
      acd13(61)=dotproduct(ninjaE3,spvak1k2)
      acd13(62)=abb13(45)
      acd13(63)=abb13(56)
      acd13(64)=dotproduct(ninjaE3,spvak1l3)
      acd13(65)=abb13(55)
      acd13(66)=dotproduct(ninjaE3,spvak2k1)
      acd13(67)=abb13(62)
      acd13(68)=dotproduct(ninjaE3,spvak2l4)
      acd13(69)=abb13(66)
      acd13(70)=dotproduct(k1,ninjaA)
      acd13(71)=dotproduct(e2,ninjaA)
      acd13(72)=dotproduct(ninjaA,ninjaA)
      acd13(73)=dotproduct(ninjaA,spvae1l3)
      acd13(74)=dotproduct(ninjaA,spval3e1)
      acd13(75)=dotproduct(ninjaA,spvak2e1)
      acd13(76)=dotproduct(ninjaA,spvae1k2)
      acd13(77)=dotproduct(ninjaA,spvak2e2)
      acd13(78)=dotproduct(ninjaA,spvae2k2)
      acd13(79)=dotproduct(ninjaA,spval3e2)
      acd13(80)=dotproduct(ninjaA,spvae2l3)
      acd13(81)=abb13(27)
      acd13(82)=dotproduct(k2,ninjaA)
      acd13(83)=abb13(14)
      acd13(84)=dotproduct(l3,ninjaA)
      acd13(85)=abb13(49)
      acd13(86)=dotproduct(l4,ninjaA)
      acd13(87)=abb13(28)
      acd13(88)=dotproduct(e1,ninjaA)
      acd13(89)=dotproduct(ninjaA,spval3l4)
      acd13(90)=dotproduct(ninjaA,spval4l3)
      acd13(91)=dotproduct(ninjaA,spvak2l3)
      acd13(92)=dotproduct(ninjaA,spval3k1)
      acd13(93)=dotproduct(ninjaA,spval3k2)
      acd13(94)=dotproduct(ninjaA,spval4k2)
      acd13(95)=dotproduct(ninjaA,spvak1k2)
      acd13(96)=dotproduct(ninjaA,spvak1l3)
      acd13(97)=dotproduct(ninjaA,spvak2k1)
      acd13(98)=dotproduct(ninjaA,spvak2l4)
      acd13(99)=abb13(23)
      acd13(100)=abb13(20)
      acd13(101)=dotproduct(ninjaA,spvae1k1)
      acd13(102)=dotproduct(ninjaA,spvae1e2)
      acd13(103)=dotproduct(ninjaA,spvae2e1)
      acd13(104)=dotproduct(ninjaA,spvak1e1)
      acd13(105)=dotproduct(ninjaA,spvae1l4)
      acd13(106)=dotproduct(ninjaA,spval4e1)
      acd13(107)=abb13(18)
      acd13(108)=dotproduct(ninjaE3,spvak1e2)
      acd13(109)=abb13(6)
      acd13(110)=dotproduct(ninjaE3,spvae2k1)
      acd13(111)=abb13(7)
      acd13(112)=abb13(37)
      acd13(113)=abb13(19)
      acd13(114)=abb13(17)
      acd13(115)=abb13(15)
      acd13(116)=abb13(21)
      acd13(117)=abb13(24)
      acd13(118)=abb13(30)
      acd13(119)=abb13(32)
      acd13(120)=dotproduct(ninjaE3,spvae2l4)
      acd13(121)=abb13(40)
      acd13(122)=abb13(41)
      acd13(123)=dotproduct(ninjaE3,spval4e2)
      acd13(124)=abb13(44)
      acd13(125)=abb13(54)
      acd13(126)=acd13(30)*acd13(29)
      acd13(127)=acd13(28)*acd13(27)
      acd13(128)=acd13(22)*acd13(21)
      acd13(129)=acd13(17)*acd13(18)
      acd13(130)=acd13(15)*acd13(16)
      acd13(131)=acd13(12)*acd13(11)
      acd13(132)=acd13(3)*acd13(4)
      acd13(133)=acd13(25)*acd13(26)
      acd13(134)=acd13(23)*acd13(24)
      acd13(135)=acd13(19)*acd13(20)
      acd13(136)=acd13(13)*acd13(14)
      acd13(137)=acd13(8)*acd13(9)
      acd13(126)=acd13(133)+acd13(132)+acd13(131)+acd13(130)+acd13(127)+acd13(1&
      &26)+acd13(128)+acd13(129)+acd13(134)+acd13(135)+acd13(136)+acd13(137)
      acd13(127)=acd13(5)-acd13(7)
      acd13(128)=acd13(127)*acd13(6)
      acd13(128)=acd13(128)+acd13(126)
      acd13(129)=acd13(1)*acd13(2)
      acd13(130)=acd13(10)*acd13(6)
      acd13(130)=-4.0_ki*acd13(130)+acd13(129)+acd13(128)
      acd13(131)=acd13(69)*acd13(68)
      acd13(132)=acd13(67)*acd13(66)
      acd13(133)=acd13(65)*acd13(64)
      acd13(134)=acd13(62)*acd13(61)
      acd13(135)=acd13(60)*acd13(59)
      acd13(136)=acd13(57)*acd13(56)
      acd13(137)=acd13(55)*acd13(54)
      acd13(138)=acd13(53)*acd13(52)
      acd13(139)=acd13(49)*acd13(48)
      acd13(140)=acd13(47)*acd13(46)
      acd13(141)=acd13(42)*acd13(63)
      acd13(142)=acd13(40)*acd13(58)
      acd13(143)=acd13(38)*acd13(51)
      acd13(144)=acd13(36)*acd13(50)
      acd13(145)=acd13(8)*acd13(45)
      acd13(131)=acd13(136)+acd13(137)+acd13(138)+acd13(141)+acd13(132)+acd13(1&
      &33)+acd13(134)+acd13(135)+acd13(131)+acd13(139)+acd13(140)+acd13(142)+ac&
      &d13(143)+acd13(144)+acd13(145)
      acd13(132)=acd13(44)*acd13(131)
      acd13(133)=2.0_ki*acd13(10)
      acd13(127)=-acd13(133)+acd13(127)
      acd13(127)=acd13(6)*acd13(127)
      acd13(126)=acd13(129)+acd13(127)+acd13(126)
      acd13(126)=acd13(126)*acd13(133)
      acd13(127)=acd13(42)*acd13(43)
      acd13(129)=acd13(40)*acd13(41)
      acd13(134)=acd13(38)*acd13(39)
      acd13(135)=acd13(36)*acd13(37)
      acd13(136)=acd13(25)*acd13(35)
      acd13(137)=acd13(23)*acd13(34)
      acd13(138)=acd13(19)*acd13(33)
      acd13(139)=acd13(13)*acd13(32)
      acd13(140)=acd13(8)*acd13(31)
      acd13(127)=acd13(140)+acd13(136)+acd13(137)+acd13(138)+acd13(139)+acd13(1&
      &27)+acd13(129)+acd13(134)+acd13(135)
      acd13(129)=acd13(1)*acd13(127)
      acd13(126)=acd13(126)+acd13(129)+acd13(132)
      acd13(129)=acd13(88)*acd13(131)
      acd13(131)=acd13(69)*acd13(98)
      acd13(132)=acd13(67)*acd13(97)
      acd13(134)=acd13(65)*acd13(96)
      acd13(135)=acd13(63)*acd13(80)
      acd13(136)=acd13(62)*acd13(95)
      acd13(137)=acd13(60)*acd13(94)
      acd13(138)=acd13(58)*acd13(79)
      acd13(139)=acd13(57)*acd13(93)
      acd13(140)=acd13(55)*acd13(92)
      acd13(141)=acd13(53)*acd13(91)
      acd13(142)=acd13(51)*acd13(78)
      acd13(143)=acd13(50)*acd13(77)
      acd13(144)=acd13(49)*acd13(90)
      acd13(145)=acd13(47)*acd13(89)
      acd13(146)=acd13(45)*acd13(71)
      acd13(131)=acd13(146)+acd13(145)+acd13(144)+acd13(143)+acd13(142)+acd13(1&
      &41)+acd13(140)+acd13(139)+acd13(138)+acd13(137)+acd13(136)+acd13(135)+ac&
      &d13(134)+acd13(132)+acd13(99)+acd13(131)
      acd13(131)=acd13(44)*acd13(131)
      acd13(132)=acd13(72)+ninjaP
      acd13(134)=2.0_ki*acd13(6)
      acd13(134)=-acd13(134)*acd13(132)
      acd13(135)=acd13(30)*acd13(106)
      acd13(136)=acd13(28)*acd13(105)
      acd13(137)=acd13(26)*acd13(76)
      acd13(138)=acd13(24)*acd13(75)
      acd13(139)=acd13(22)*acd13(104)
      acd13(140)=acd13(20)*acd13(74)
      acd13(141)=acd13(18)*acd13(103)
      acd13(142)=acd13(16)*acd13(102)
      acd13(143)=acd13(14)*acd13(73)
      acd13(144)=acd13(12)*acd13(101)
      acd13(145)=acd13(9)*acd13(71)
      acd13(146)=acd13(4)*acd13(82)
      acd13(147)=acd13(70)*acd13(2)
      acd13(148)=-acd13(86)+acd13(84)
      acd13(148)=acd13(6)*acd13(148)
      acd13(134)=acd13(148)+acd13(147)+acd13(146)+acd13(145)+acd13(144)+acd13(1&
      &43)+acd13(142)+acd13(141)+acd13(140)+acd13(139)+acd13(138)+acd13(137)+ac&
      &d13(136)+acd13(107)+acd13(135)+acd13(134)
      acd13(133)=acd13(134)*acd13(133)
      acd13(128)=acd13(128)*acd13(132)
      acd13(132)=acd13(2)*acd13(132)
      acd13(134)=acd13(43)*acd13(80)
      acd13(135)=acd13(41)*acd13(79)
      acd13(136)=acd13(39)*acd13(78)
      acd13(137)=acd13(37)*acd13(77)
      acd13(138)=acd13(35)*acd13(76)
      acd13(139)=acd13(34)*acd13(75)
      acd13(140)=acd13(33)*acd13(74)
      acd13(141)=acd13(32)*acd13(73)
      acd13(142)=acd13(31)*acd13(71)
      acd13(132)=acd13(142)+acd13(141)+acd13(140)+acd13(139)+acd13(138)+acd13(1&
      &37)+acd13(136)+acd13(135)+acd13(81)+acd13(134)+acd13(132)
      acd13(132)=acd13(1)*acd13(132)
      acd13(127)=acd13(70)*acd13(127)
      acd13(134)=acd13(123)*acd13(124)
      acd13(135)=acd13(120)*acd13(121)
      acd13(136)=acd13(110)*acd13(111)
      acd13(137)=acd13(108)*acd13(109)
      acd13(138)=acd13(42)*acd13(125)
      acd13(139)=acd13(40)*acd13(122)
      acd13(140)=acd13(38)*acd13(119)
      acd13(141)=acd13(36)*acd13(118)
      acd13(142)=acd13(17)*acd13(114)
      acd13(143)=acd13(15)*acd13(113)
      acd13(144)=acd13(7)*acd13(87)
      acd13(145)=acd13(5)*acd13(85)
      acd13(146)=acd13(3)*acd13(83)
      acd13(147)=acd13(25)*acd13(117)
      acd13(148)=acd13(23)*acd13(116)
      acd13(149)=acd13(19)*acd13(115)
      acd13(150)=acd13(13)*acd13(112)
      acd13(151)=acd13(8)*acd13(100)
      acd13(127)=acd13(133)+acd13(131)+acd13(132)+acd13(129)+acd13(127)+acd13(1&
      &51)+acd13(150)+acd13(149)+acd13(148)+acd13(147)+acd13(146)+acd13(145)+ac&
      &d13(144)+acd13(143)+acd13(142)+acd13(141)+acd13(140)+acd13(139)+acd13(13&
      &8)+acd13(137)+acd13(136)+acd13(134)+acd13(135)+acd13(128)
      brack(ninjaidxt1mu0)=acd13(126)
      brack(ninjaidxt1mu2)=0.0_ki
      brack(ninjaidxt0mu0)=acd13(127)
      brack(ninjaidxt0mu2)=acd13(130)
   end subroutine brack_32
!---#] subroutine brack_32:
!---#[ subroutine numerator_t3:
   subroutine numerator_t3(ncut, a, b, c, param, deg, coeffs) &
   & bind(c, name="gghh_d13h0_ninja_t3")
      use iso_c_binding, only: c_int
      use ninjago_module, only: ki => ki_nin
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd13h0
      implicit none
      integer(c_int), intent(in) :: ncut, deg
      complex(ki), dimension(0:3), intent(in) :: a, b, c
      complex(ki), intent(in) :: param
      complex(ki), dimension(4) :: vecA, vecB, vecC
      complex(ki), dimension(0:*), intent(out) :: coeffs
      integer :: t1
      complex(ki), dimension(4) :: qshift
      qshift = -k3
	     vecA(1:4) = - a(0:3) - qshift(1:4)
	     vecB(1:4) = - b(0:3)
	     vecC(1:4) = - c(0:3)
      if (deg.lt.0) return
      t1 = 0
      call cond_t(epspow.eq.t1,brack_31,vecA,vecB,vecC,param,coeffs)
      if (deg.le.(1+(0))) return
      call cond_t(epspow.eq.t1,brack_32,vecA,vecB,vecC,param,coeffs)
   end subroutine numerator_t3
!---#] subroutine numerator_t3:
end module     gghh_d13h0l131
