module     gghh_d11h0l1
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d11h0l1 &
   ! &.f90
   ! generator: buildfortran.py
   use gghh_config, only: ki
   use gghh_util, only: cond
   implicit none
   private
   complex(ki), parameter :: i_ = (0.0_ki, 1.0_ki)
   public :: numerator_ninja
contains
!---#[ function brack_1:
   pure function brack_1(Q,mu2) result(brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd11h0
      implicit none
      complex(ki), dimension(4), intent(in) :: Q
      complex(ki), intent(in) :: mu2
      complex(ki) :: brack
      complex(ki) :: acc11(76)
      complex(ki) :: QspQ
      complex(ki) :: Qspl4
      complex(ki) :: Qspvak2e2
      complex(ki) :: Qspvae2k2
      complex(ki) :: Qspval4e2
      complex(ki) :: Qspvae2l4
      complex(ki) :: Qspvae1e2
      complex(ki) :: Qspvae2e1
      complex(ki) :: Qspk2
      complex(ki) :: Qspk1
      complex(ki) :: Qspe2
      complex(ki) :: Qspvak1e2
      complex(ki) :: Qspvae2k1
      complex(ki) :: Qspe1
      complex(ki) :: Qspval4e1
      complex(ki) :: Qspvak1e1
      complex(ki) :: Qspvae1l4
      complex(ki) :: Qspvae1k1
      complex(ki) :: Qspvak2e1
      complex(ki) :: Qspvae1k2
      QspQ = dotproduct(Q,Q)
      Qspl4 = dotproduct(Q,l4)
      Qspvak2e2 = dotproduct(Q,spvak2e2)
      Qspvae2k2 = dotproduct(Q,spvae2k2)
      Qspval4e2 = dotproduct(Q,spval4e2)
      Qspvae2l4 = dotproduct(Q,spvae2l4)
      Qspvae1e2 = dotproduct(Q,spvae1e2)
      Qspvae2e1 = dotproduct(Q,spvae2e1)
      Qspk2 = dotproduct(Q,k2)
      Qspk1 = dotproduct(Q,k1)
      Qspe2 = dotproduct(Q,e2)
      Qspvak1e2 = dotproduct(Q,spvak1e2)
      Qspvae2k1 = dotproduct(Q,spvae2k1)
      Qspe1 = dotproduct(Q,e1)
      Qspval4e1 = dotproduct(Q,spval4e1)
      Qspvak1e1 = dotproduct(Q,spvak1e1)
      Qspvae1l4 = dotproduct(Q,spvae1l4)
      Qspvae1k1 = dotproduct(Q,spvae1k1)
      Qspvak2e1 = dotproduct(Q,spvak2e1)
      Qspvae1k2 = dotproduct(Q,spvae1k2)
      acc11(1)=abb11(4)
      acc11(2)=abb11(5)
      acc11(3)=abb11(6)
      acc11(4)=abb11(7)
      acc11(5)=abb11(8)
      acc11(6)=abb11(10)
      acc11(7)=abb11(11)
      acc11(8)=abb11(12)
      acc11(9)=abb11(13)
      acc11(10)=abb11(14)
      acc11(11)=abb11(15)
      acc11(12)=abb11(16)
      acc11(13)=abb11(17)
      acc11(14)=abb11(18)
      acc11(15)=abb11(19)
      acc11(16)=abb11(20)
      acc11(17)=abb11(21)
      acc11(18)=abb11(22)
      acc11(19)=abb11(23)
      acc11(20)=abb11(24)
      acc11(21)=abb11(25)
      acc11(22)=abb11(26)
      acc11(23)=abb11(27)
      acc11(24)=abb11(28)
      acc11(25)=abb11(29)
      acc11(26)=abb11(30)
      acc11(27)=abb11(31)
      acc11(28)=abb11(32)
      acc11(29)=abb11(33)
      acc11(30)=abb11(34)
      acc11(31)=abb11(35)
      acc11(32)=abb11(36)
      acc11(33)=abb11(37)
      acc11(34)=abb11(38)
      acc11(35)=abb11(39)
      acc11(36)=abb11(40)
      acc11(37)=abb11(41)
      acc11(38)=abb11(42)
      acc11(39)=abb11(43)
      acc11(40)=abb11(44)
      acc11(41)=abb11(45)
      acc11(42)=abb11(46)
      acc11(43)=abb11(47)
      acc11(44)=abb11(48)
      acc11(45)=abb11(49)
      acc11(46)=abb11(50)
      acc11(47)=abb11(51)
      acc11(48)=abb11(52)
      acc11(49)=abb11(53)
      acc11(50)=abb11(54)
      acc11(51)=abb11(55)
      acc11(52)=abb11(56)
      acc11(53)=abb11(58)
      acc11(54)=abb11(60)
      acc11(55)=abb11(61)
      acc11(56)=abb11(62)
      acc11(57)=QspQ+Qspl4
      acc11(57)=acc11(19)*acc11(57)
      acc11(58)=Qspvak2e2*acc11(47)
      acc11(59)=Qspvae2k2*acc11(56)
      acc11(60)=Qspval4e2*acc11(10)
      acc11(61)=Qspvae2l4*acc11(23)
      acc11(62)=Qspvae1e2*acc11(52)
      acc11(63)=Qspvae2e1*acc11(48)
      acc11(64)=Qspk2*acc11(41)
      acc11(65)=-Qspk1*acc11(5)
      acc11(57)=acc11(65)+acc11(64)+acc11(63)+acc11(62)+acc11(61)+acc11(60)+acc&
      &11(59)+acc11(32)+acc11(58)+acc11(57)
      acc11(57)=QspQ*acc11(57)
      acc11(58)=Qspk1-Qspl4
      acc11(58)=acc11(58)*acc11(30)
      acc11(58)=acc11(24)+acc11(58)
      acc11(58)=Qspe2*acc11(58)
      acc11(59)=Qspvak1e2*acc11(15)
      acc11(60)=Qspvae2k1*acc11(18)
      acc11(61)=Qspvak2e2*acc11(50)
      acc11(62)=Qspvae2k2*acc11(43)
      acc11(63)=Qspval4e2*acc11(3)
      acc11(64)=Qspvae2l4*acc11(6)
      acc11(65)=Qspe2*acc11(37)
      acc11(65)=acc11(20)+acc11(65)
      acc11(65)=Qspk2*acc11(65)
      acc11(66)=Qspe2*acc11(39)
      acc11(66)=acc11(21)+acc11(66)
      acc11(66)=QspQ*acc11(66)
      acc11(58)=acc11(66)+acc11(65)+acc11(64)+acc11(63)+acc11(62)+acc11(61)+acc&
      &11(60)+acc11(8)+acc11(59)+acc11(58)
      acc11(58)=Qspe1*acc11(58)
      acc11(59)=-Qspvak2e2*acc11(4)
      acc11(60)=-Qspvae2k2*acc11(1)
      acc11(61)=-Qspval4e2*acc11(40)
      acc11(62)=-Qspvae2l4*acc11(38)
      acc11(63)=-Qspvae1e2*acc11(45)
      acc11(64)=-Qspvae2e1*acc11(46)
      acc11(65)=-Qspk2*acc11(5)
      acc11(59)=acc11(65)+acc11(64)+acc11(63)+acc11(62)+acc11(61)+acc11(60)+acc&
      &11(34)+acc11(59)
      acc11(59)=Qspk1*acc11(59)
      acc11(60)=Qspvak1e2*acc11(27)
      acc11(61)=Qspvae2k1*acc11(29)
      acc11(62)=Qspvae1e2*acc11(25)
      acc11(63)=Qspvae2e1*acc11(22)
      acc11(60)=acc11(63)+acc11(62)+acc11(61)+acc11(28)+acc11(60)
      acc11(60)=Qspl4*acc11(60)
      acc11(61)=Qspvak1e2*acc11(12)
      acc11(62)=Qspvae2k1*acc11(49)
      acc11(63)=Qspvae1e2*acc11(51)
      acc11(64)=Qspvae2e1*acc11(44)
      acc11(61)=acc11(64)+acc11(63)+acc11(62)+acc11(35)+acc11(61)
      acc11(61)=Qspk2*acc11(61)
      acc11(62)=acc11(55)*Qspval4e1
      acc11(63)=acc11(36)*Qspvak1e1
      acc11(64)=acc11(26)*Qspvae1l4
      acc11(65)=acc11(17)*Qspvae1k1
      acc11(66)=acc11(16)*Qspvak2e1
      acc11(67)=acc11(13)*Qspvae1k2
      acc11(68)=Qspvak1e2*acc11(9)
      acc11(69)=Qspvae2k1*acc11(2)
      acc11(70)=Qspvak2e2*acc11(33)
      acc11(71)=Qspvae2k2*acc11(31)
      acc11(72)=Qspval4e2*acc11(54)
      acc11(73)=Qspvae2l4*acc11(53)
      acc11(74)=Qspvae1e2*acc11(11)
      acc11(75)=Qspvae2e1*acc11(42)
      acc11(76)=Qspe2*acc11(14)
      brack=acc11(7)+acc11(57)+acc11(58)+acc11(59)+acc11(60)+acc11(61)+acc11(62&
      &)+acc11(63)+acc11(64)+acc11(65)+acc11(66)+acc11(67)+acc11(68)+acc11(69)+&
      &acc11(70)+acc11(71)+acc11(72)+acc11(73)+acc11(74)+acc11(75)+acc11(76)
   end  function brack_1
!---#] function brack_1:
!---#[ numerator interfaces:
   !------#[ subroutine numerator_ninja:
   subroutine numerator_ninja(ncut, Q_ext, mu2_ext, numerator) &
   & bind(c, name="gghh_d11h0l1_ninja")
      use iso_c_binding, only: c_int
      use ninjago_module, only: ki_nin
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd11h0
      implicit none
      integer(c_int), intent(in) :: ncut
      complex(ki_nin), dimension(0:3), intent(in) :: Q_ext
      complex(ki_nin), intent(in) :: mu2_ext
      complex(ki_nin), intent(out) :: numerator
      complex(ki) :: d11
      ! The Q that goes into the diagram
      complex(ki), dimension(4) :: Q
      complex(ki) :: mu2
      real(ki), dimension(0:3) :: qshift
      qshift = k2
      Q(1:4)  =cmplx(real(+Q_ext(0:3)  -qshift(:),  ki_nin), aimag(+Q_ext(0:3))&
      &, ki)
      d11 = 0.0_ki
      d11 = (cond(epspow.eq.0,brack_1,Q,mu2))
      numerator = cmplx(real(d11, ki), aimag(d11), ki_nin)
   end subroutine numerator_ninja
   !------#] subroutine numerator_ninja:
!---#] numerator interfaces:
end module gghh_d11h0l1
