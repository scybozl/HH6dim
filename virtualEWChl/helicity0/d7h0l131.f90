module     gghh_d7h0l131
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d7h0l13 &
   ! &1.f90
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
      use gghh_abbrevd7h0
      implicit none
      complex(ki), dimension(4), intent(in) :: ninjaA, ninjaE3, ninjaE4
      complex(ki), intent(in) :: ninjaP
      complex(ki), dimension(4) :: acd7
      complex(ki), dimension (0:*), intent(inout) :: brack
      acd7(1)=dotproduct(e1,ninjaE3)
      acd7(2)=dotproduct(e2,ninjaE3)
      acd7(3)=abb7(9)
      acd7(4)=acd7(3)*acd7(2)*acd7(1)
      brack(ninjaidxt3mu0)=0.0_ki
      brack(ninjaidxt2mu0)=acd7(4)
   end subroutine brack_31
!---#] subroutine brack_31:
!---#[ subroutine brack_32:
   pure subroutine brack_32(ninjaA, ninjaE3, ninjaE4, ninjaP, brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd7h0
      implicit none
      complex(ki), dimension(4), intent(in) :: ninjaA, ninjaE3, ninjaE4
      complex(ki), intent(in) :: ninjaP
      complex(ki), dimension(48) :: acd7
      complex(ki), dimension (0:*), intent(inout) :: brack
      acd7(1)=dotproduct(e1,ninjaE3)
      acd7(2)=dotproduct(e2,ninjaE4)
      acd7(3)=abb7(9)
      acd7(4)=dotproduct(e1,ninjaE4)
      acd7(5)=dotproduct(e2,ninjaE3)
      acd7(6)=abb7(11)
      acd7(7)=dotproduct(e1,ninjaA)
      acd7(8)=dotproduct(e2,ninjaA)
      acd7(9)=dotproduct(ninjaA,ninjaE3)
      acd7(10)=dotproduct(ninjaE3,spvae1e2)
      acd7(11)=abb7(4)
      acd7(12)=dotproduct(ninjaE3,spvak2e1)
      acd7(13)=abb7(5)
      acd7(14)=dotproduct(ninjaE3,spvae1k2)
      acd7(15)=abb7(7)
      acd7(16)=dotproduct(ninjaE3,spvae2k1)
      acd7(17)=abb7(8)
      acd7(18)=dotproduct(ninjaE3,spvak1e2)
      acd7(19)=abb7(10)
      acd7(20)=dotproduct(ninjaE3,spvae2e1)
      acd7(21)=abb7(12)
      acd7(22)=dotproduct(ninjaE3,spvae2k2)
      acd7(23)=abb7(13)
      acd7(24)=dotproduct(ninjaE3,spvak2e2)
      acd7(25)=abb7(14)
      acd7(26)=dotproduct(ninjaA,ninjaA)
      acd7(27)=dotproduct(ninjaA,spvae1e2)
      acd7(28)=dotproduct(ninjaA,spvak2e1)
      acd7(29)=dotproduct(ninjaA,spvae1k2)
      acd7(30)=dotproduct(ninjaA,spvae2k1)
      acd7(31)=dotproduct(ninjaA,spvak1e2)
      acd7(32)=dotproduct(ninjaA,spvae2e1)
      acd7(33)=dotproduct(ninjaA,spvae2k2)
      acd7(34)=dotproduct(ninjaA,spvak2e2)
      acd7(35)=abb7(3)
      acd7(36)=acd7(5)*acd7(3)
      acd7(37)=acd7(36)*acd7(4)
      acd7(38)=acd7(1)*acd7(3)
      acd7(39)=acd7(38)*acd7(2)
      acd7(37)=acd7(6)+acd7(37)+acd7(39)
      acd7(36)=acd7(7)*acd7(36)
      acd7(38)=acd7(8)*acd7(38)
      acd7(39)=acd7(9)*acd7(6)
      acd7(40)=acd7(10)*acd7(11)
      acd7(41)=acd7(12)*acd7(13)
      acd7(42)=acd7(14)*acd7(15)
      acd7(43)=acd7(16)*acd7(17)
      acd7(44)=acd7(18)*acd7(19)
      acd7(45)=acd7(20)*acd7(21)
      acd7(46)=acd7(22)*acd7(23)
      acd7(47)=acd7(24)*acd7(25)
      acd7(36)=acd7(47)+acd7(46)+acd7(45)+acd7(44)+acd7(43)+acd7(42)+acd7(41)+a&
      &cd7(40)+2.0_ki*acd7(39)+acd7(36)+acd7(38)
      acd7(38)=ninjaP*acd7(37)
      acd7(39)=acd7(7)*acd7(8)*acd7(3)
      acd7(40)=acd7(26)*acd7(6)
      acd7(41)=acd7(27)*acd7(11)
      acd7(42)=acd7(28)*acd7(13)
      acd7(43)=acd7(29)*acd7(15)
      acd7(44)=acd7(30)*acd7(17)
      acd7(45)=acd7(31)*acd7(19)
      acd7(46)=acd7(32)*acd7(21)
      acd7(47)=acd7(33)*acd7(23)
      acd7(48)=acd7(34)*acd7(25)
      acd7(38)=acd7(35)+acd7(48)+acd7(47)+acd7(46)+acd7(45)+acd7(44)+acd7(43)+a&
      &cd7(42)+acd7(41)+acd7(40)+acd7(39)+acd7(38)
      brack(ninjaidxt1mu0)=acd7(36)
      brack(ninjaidxt1mu2)=0.0_ki
      brack(ninjaidxt0mu0)=acd7(38)
      brack(ninjaidxt0mu2)=acd7(37)
   end subroutine brack_32
!---#] subroutine brack_32:
!---#[ subroutine numerator_t3:
   subroutine numerator_t3(ncut, a, b, c, param, deg, coeffs) &
   & bind(c, name="gghh_d7h0_ninja_t3")
      use iso_c_binding, only: c_int
      use ninjago_module, only: ki => ki_nin
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd7h0
      implicit none
      integer(c_int), intent(in) :: ncut, deg
      complex(ki), dimension(0:3), intent(in) :: a, b, c
      complex(ki), intent(in) :: param
      complex(ki), dimension(4) :: vecA, vecB, vecC
      complex(ki), dimension(0:*), intent(out) :: coeffs
      integer :: t1
      complex(ki), dimension(4) :: qshift
      qshift = k2
	     vecA(1:4) = + a(0:3) - qshift(1:4)
	     vecB(1:4) = + b(0:3)
	     vecC(1:4) = + c(0:3)
      if (deg.lt.0) return
      t1 = 0
      call cond_t(epspow.eq.t1,brack_31,vecA,vecB,vecC,param,coeffs)
      if (deg.le.(1+(0))) return
      call cond_t(epspow.eq.t1,brack_32,vecA,vecB,vecC,param,coeffs)
   end subroutine numerator_t3
!---#] subroutine numerator_t3:
end module     gghh_d7h0l131
