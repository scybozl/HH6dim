module     gghh_d9h0l1
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d9h0l1. &
   ! &f90
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
      use gghh_abbrevd9h0
      implicit none
      complex(ki), dimension(4), intent(in) :: Q
      complex(ki), intent(in) :: mu2
      complex(ki) :: brack
      complex(ki) :: acc9(76)
      complex(ki) :: QspQ
      complex(ki) :: Qspl3
      complex(ki) :: Qspvak2e2
      complex(ki) :: Qspvae2k2
      complex(ki) :: Qspval3e2
      complex(ki) :: Qspvae2l3
      complex(ki) :: Qspvae1e2
      complex(ki) :: Qspvae2e1
      complex(ki) :: Qspk2
      complex(ki) :: Qspk1
      complex(ki) :: Qspe2
      complex(ki) :: Qspvak1e2
      complex(ki) :: Qspvae2k1
      complex(ki) :: Qspe1
      complex(ki) :: Qspval3e1
      complex(ki) :: Qspvak1e1
      complex(ki) :: Qspvae1l3
      complex(ki) :: Qspvae1k1
      complex(ki) :: Qspvak2e1
      complex(ki) :: Qspvae1k2
      QspQ = dotproduct(Q,Q)
      Qspl3 = dotproduct(Q,l3)
      Qspvak2e2 = dotproduct(Q,spvak2e2)
      Qspvae2k2 = dotproduct(Q,spvae2k2)
      Qspval3e2 = dotproduct(Q,spval3e2)
      Qspvae2l3 = dotproduct(Q,spvae2l3)
      Qspvae1e2 = dotproduct(Q,spvae1e2)
      Qspvae2e1 = dotproduct(Q,spvae2e1)
      Qspk2 = dotproduct(Q,k2)
      Qspk1 = dotproduct(Q,k1)
      Qspe2 = dotproduct(Q,e2)
      Qspvak1e2 = dotproduct(Q,spvak1e2)
      Qspvae2k1 = dotproduct(Q,spvae2k1)
      Qspe1 = dotproduct(Q,e1)
      Qspval3e1 = dotproduct(Q,spval3e1)
      Qspvak1e1 = dotproduct(Q,spvak1e1)
      Qspvae1l3 = dotproduct(Q,spvae1l3)
      Qspvae1k1 = dotproduct(Q,spvae1k1)
      Qspvak2e1 = dotproduct(Q,spvak2e1)
      Qspvae1k2 = dotproduct(Q,spvae1k2)
      acc9(1)=abb9(4)
      acc9(2)=abb9(5)
      acc9(3)=abb9(6)
      acc9(4)=abb9(7)
      acc9(5)=abb9(8)
      acc9(6)=abb9(10)
      acc9(7)=abb9(11)
      acc9(8)=abb9(12)
      acc9(9)=abb9(13)
      acc9(10)=abb9(14)
      acc9(11)=abb9(15)
      acc9(12)=abb9(16)
      acc9(13)=abb9(17)
      acc9(14)=abb9(18)
      acc9(15)=abb9(19)
      acc9(16)=abb9(20)
      acc9(17)=abb9(21)
      acc9(18)=abb9(22)
      acc9(19)=abb9(23)
      acc9(20)=abb9(24)
      acc9(21)=abb9(25)
      acc9(22)=abb9(26)
      acc9(23)=abb9(27)
      acc9(24)=abb9(28)
      acc9(25)=abb9(29)
      acc9(26)=abb9(30)
      acc9(27)=abb9(31)
      acc9(28)=abb9(32)
      acc9(29)=abb9(33)
      acc9(30)=abb9(34)
      acc9(31)=abb9(35)
      acc9(32)=abb9(36)
      acc9(33)=abb9(37)
      acc9(34)=abb9(38)
      acc9(35)=abb9(39)
      acc9(36)=abb9(40)
      acc9(37)=abb9(41)
      acc9(38)=abb9(42)
      acc9(39)=abb9(43)
      acc9(40)=abb9(44)
      acc9(41)=abb9(45)
      acc9(42)=abb9(46)
      acc9(43)=abb9(47)
      acc9(44)=abb9(48)
      acc9(45)=abb9(49)
      acc9(46)=abb9(50)
      acc9(47)=abb9(51)
      acc9(48)=abb9(52)
      acc9(49)=abb9(53)
      acc9(50)=abb9(54)
      acc9(51)=abb9(55)
      acc9(52)=abb9(56)
      acc9(53)=abb9(58)
      acc9(54)=abb9(60)
      acc9(55)=abb9(61)
      acc9(56)=abb9(62)
      acc9(57)=QspQ+Qspl3
      acc9(57)=acc9(19)*acc9(57)
      acc9(58)=Qspvak2e2*acc9(47)
      acc9(59)=Qspvae2k2*acc9(56)
      acc9(60)=Qspval3e2*acc9(10)
      acc9(61)=Qspvae2l3*acc9(23)
      acc9(62)=Qspvae1e2*acc9(52)
      acc9(63)=Qspvae2e1*acc9(48)
      acc9(64)=Qspk2*acc9(41)
      acc9(65)=-Qspk1*acc9(5)
      acc9(57)=acc9(65)+acc9(64)+acc9(63)+acc9(62)+acc9(61)+acc9(60)+acc9(59)+a&
      &cc9(32)+acc9(58)+acc9(57)
      acc9(57)=QspQ*acc9(57)
      acc9(58)=Qspk1-Qspl3
      acc9(58)=acc9(58)*acc9(30)
      acc9(58)=acc9(24)+acc9(58)
      acc9(58)=Qspe2*acc9(58)
      acc9(59)=Qspvak1e2*acc9(15)
      acc9(60)=Qspvae2k1*acc9(18)
      acc9(61)=Qspvak2e2*acc9(50)
      acc9(62)=Qspvae2k2*acc9(43)
      acc9(63)=Qspval3e2*acc9(3)
      acc9(64)=Qspvae2l3*acc9(6)
      acc9(65)=Qspe2*acc9(37)
      acc9(65)=acc9(20)+acc9(65)
      acc9(65)=Qspk2*acc9(65)
      acc9(66)=Qspe2*acc9(39)
      acc9(66)=acc9(21)+acc9(66)
      acc9(66)=QspQ*acc9(66)
      acc9(58)=acc9(66)+acc9(65)+acc9(64)+acc9(63)+acc9(62)+acc9(61)+acc9(60)+a&
      &cc9(8)+acc9(59)+acc9(58)
      acc9(58)=Qspe1*acc9(58)
      acc9(59)=-Qspvak2e2*acc9(4)
      acc9(60)=-Qspvae2k2*acc9(1)
      acc9(61)=-Qspval3e2*acc9(40)
      acc9(62)=-Qspvae2l3*acc9(38)
      acc9(63)=-Qspvae1e2*acc9(45)
      acc9(64)=-Qspvae2e1*acc9(46)
      acc9(65)=-Qspk2*acc9(5)
      acc9(59)=acc9(65)+acc9(64)+acc9(63)+acc9(62)+acc9(61)+acc9(60)+acc9(34)+a&
      &cc9(59)
      acc9(59)=Qspk1*acc9(59)
      acc9(60)=Qspvak1e2*acc9(27)
      acc9(61)=Qspvae2k1*acc9(29)
      acc9(62)=Qspvae1e2*acc9(25)
      acc9(63)=Qspvae2e1*acc9(22)
      acc9(60)=acc9(63)+acc9(62)+acc9(61)+acc9(28)+acc9(60)
      acc9(60)=Qspl3*acc9(60)
      acc9(61)=Qspvak1e2*acc9(12)
      acc9(62)=Qspvae2k1*acc9(49)
      acc9(63)=Qspvae1e2*acc9(51)
      acc9(64)=Qspvae2e1*acc9(44)
      acc9(61)=acc9(64)+acc9(63)+acc9(62)+acc9(35)+acc9(61)
      acc9(61)=Qspk2*acc9(61)
      acc9(62)=acc9(55)*Qspval3e1
      acc9(63)=acc9(36)*Qspvak1e1
      acc9(64)=acc9(26)*Qspvae1l3
      acc9(65)=acc9(17)*Qspvae1k1
      acc9(66)=acc9(16)*Qspvak2e1
      acc9(67)=acc9(13)*Qspvae1k2
      acc9(68)=Qspvak1e2*acc9(9)
      acc9(69)=Qspvae2k1*acc9(2)
      acc9(70)=Qspvak2e2*acc9(33)
      acc9(71)=Qspvae2k2*acc9(31)
      acc9(72)=Qspval3e2*acc9(54)
      acc9(73)=Qspvae2l3*acc9(53)
      acc9(74)=Qspvae1e2*acc9(11)
      acc9(75)=Qspvae2e1*acc9(42)
      acc9(76)=Qspe2*acc9(14)
      brack=acc9(7)+acc9(57)+acc9(58)+acc9(59)+acc9(60)+acc9(61)+acc9(62)+acc9(&
      &63)+acc9(64)+acc9(65)+acc9(66)+acc9(67)+acc9(68)+acc9(69)+acc9(70)+acc9(&
      &71)+acc9(72)+acc9(73)+acc9(74)+acc9(75)+acc9(76)
   end  function brack_1
!---#] function brack_1:
!---#[ numerator interfaces:
   !------#[ subroutine numerator_ninja:
   subroutine numerator_ninja(ncut, Q_ext, mu2_ext, numerator) &
   & bind(c, name="gghh_d9h0l1_ninja")
      use iso_c_binding, only: c_int
      use ninjago_module, only: ki_nin
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd9h0
      implicit none
      integer(c_int), intent(in) :: ncut
      complex(ki_nin), dimension(0:3), intent(in) :: Q_ext
      complex(ki_nin), intent(in) :: mu2_ext
      complex(ki_nin), intent(out) :: numerator
      complex(ki) :: d9
      ! The Q that goes into the diagram
      complex(ki), dimension(4) :: Q
      complex(ki) :: mu2
      real(ki), dimension(0:3) :: qshift
      qshift = k2
      Q(1:4)  =cmplx(real(+Q_ext(0:3)  -qshift(:),  ki_nin), aimag(+Q_ext(0:3))&
      &, ki)
      d9 = 0.0_ki
      d9 = (cond(epspow.eq.0,brack_1,Q,mu2))
      numerator = cmplx(real(d9, ki), aimag(d9), ki_nin)
   end subroutine numerator_ninja
   !------#] subroutine numerator_ninja:
!---#] numerator interfaces:
end module gghh_d9h0l1
