module     gghh_d2h0l132
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d2h0l13 &
   ! &2.f90
   ! generator: buildfortran_tn3.py
   use gghh_config, only: ki
   use gghh_util, only: cond_t, d => metric_tensor
   implicit none
   private
   complex(ki), parameter :: i_ = (0.0_ki, 1.0_ki)
   integer, parameter :: ninjaidxt2x0mu0 = 0
   integer, parameter :: ninjaidxt1x0mu0 = 1
   integer, parameter :: ninjaidxt1x1mu0 = 2
   integer, parameter :: ninjaidxt0x0mu0 = 3
   integer, parameter :: ninjaidxt0x0mu2 = 4
   integer, parameter :: ninjaidxt0x1mu0 = 5
   integer, parameter :: ninjaidxt0x2mu0 = 6
   public :: numerator_t2
contains
!---#[ subroutine brack_21:
   pure subroutine brack_21(ninjaA0, ninjaA1, ninjaE3, ninjaE4, ninjaP, brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd2h0
      implicit none
      complex(ki), dimension(4), intent(in) :: ninjaA0, ninjaA1, ninjaE3, ninja&
      &E4
      complex(ki), dimension(0:2), intent(in) :: ninjaP
      complex(ki), dimension(4) :: acd2
      complex(ki), dimension (0:*), intent(inout) :: brack
      complex(ki) :: ninjaP0, ninjaP1, ninjaP2
      ninjaP0 = ninjaP(0)
      ninjaP1 = ninjaP(1)
      ninjaP2 = ninjaP(2)
      acd2(1)=dotproduct(e1,ninjaE3)
      acd2(2)=dotproduct(e2,ninjaE3)
      acd2(3)=abb2(9)
      acd2(4)=acd2(3)*acd2(2)*acd2(1)
      brack(ninjaidxt2x0mu0)=0.0_ki
      brack(ninjaidxt1x0mu0)=acd2(4)
      brack(ninjaidxt1x1mu0)=0.0_ki
   end subroutine brack_21
!---#] subroutine brack_21:
!---#[ subroutine brack_22:
   pure subroutine brack_22(ninjaA0, ninjaA1, ninjaE3, ninjaE4, ninjaP, brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd2h0
      implicit none
      complex(ki), dimension(4), intent(in) :: ninjaA0, ninjaA1, ninjaE3, ninja&
      &E4
      complex(ki), dimension(0:2), intent(in) :: ninjaP
      complex(ki), dimension(37) :: acd2
      complex(ki), dimension (0:*), intent(inout) :: brack
      complex(ki) :: ninjaP0, ninjaP1, ninjaP2
      ninjaP0 = ninjaP(0)
      ninjaP1 = ninjaP(1)
      ninjaP2 = ninjaP(2)
      acd2(1)=dotproduct(e1,ninjaA1)
      acd2(2)=dotproduct(e2,ninjaE3)
      acd2(3)=abb2(9)
      acd2(4)=dotproduct(e1,ninjaE3)
      acd2(5)=dotproduct(e2,ninjaA1)
      acd2(6)=dotproduct(e1,ninjaA0)
      acd2(7)=dotproduct(e2,ninjaA0)
      acd2(8)=dotproduct(ninjaA0,ninjaE3)
      acd2(9)=abb2(10)
      acd2(10)=dotproduct(ninjaE3,spvae2k1)
      acd2(11)=abb2(2)
      acd2(12)=dotproduct(ninjaE3,spvak1e2)
      acd2(13)=abb2(4)
      acd2(14)=dotproduct(ninjaE3,spvae1e2)
      acd2(15)=abb2(6)
      acd2(16)=dotproduct(ninjaE3,spvae1k2)
      acd2(17)=abb2(7)
      acd2(18)=dotproduct(ninjaE3,spvae2e1)
      acd2(19)=abb2(11)
      acd2(20)=dotproduct(ninjaE3,spvae2k2)
      acd2(21)=abb2(12)
      acd2(22)=dotproduct(ninjaE3,spvak2e1)
      acd2(23)=abb2(13)
      acd2(24)=dotproduct(ninjaE3,spvak2e2)
      acd2(25)=abb2(14)
      acd2(26)=acd2(2)*acd2(3)
      acd2(27)=acd2(1)*acd2(26)
      acd2(28)=acd2(4)*acd2(3)
      acd2(29)=acd2(5)*acd2(28)
      acd2(27)=acd2(27)+acd2(29)
      acd2(26)=acd2(6)*acd2(26)
      acd2(28)=acd2(7)*acd2(28)
      acd2(29)=acd2(9)*acd2(8)
      acd2(30)=acd2(11)*acd2(10)
      acd2(31)=acd2(13)*acd2(12)
      acd2(32)=acd2(15)*acd2(14)
      acd2(33)=acd2(17)*acd2(16)
      acd2(34)=acd2(19)*acd2(18)
      acd2(35)=acd2(21)*acd2(20)
      acd2(36)=acd2(23)*acd2(22)
      acd2(37)=acd2(25)*acd2(24)
      acd2(26)=acd2(37)+acd2(36)+acd2(35)+acd2(34)+acd2(33)+acd2(32)+acd2(31)+a&
      &cd2(30)+2.0_ki*acd2(29)+acd2(26)+acd2(28)
      brack(ninjaidxt0x0mu0)=acd2(26)
      brack(ninjaidxt0x0mu2)=0.0_ki
      brack(ninjaidxt0x1mu0)=acd2(27)
      brack(ninjaidxt0x2mu0)=0.0_ki
   end subroutine brack_22
!---#] subroutine brack_22:
!---#[ subroutine numerator_t2:
   subroutine numerator_t2(ncut, a0, a1, b, c, param, deg, coeffs) &
   & bind(c, name="gghh_d2h0_ninja_t2")
      use iso_c_binding, only: c_int
      use ninjago_module, only: ki => ki_nin
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd2h0
      implicit none
      integer(c_int), intent(in) :: ncut, deg
      complex(ki), dimension(0:3), intent(in) :: a0, a1, b, c
      complex(ki), dimension(0:2), intent(in) :: param
      complex(ki), dimension(4) :: vecA0, vecA1, vecB, vecC
      complex(ki), dimension(0:*), intent(out) :: coeffs
      integer :: t1
      complex(ki), dimension(4) :: qshift
      qshift = k2
	     vecA0(1:4) = + a0(0:3) - qshift(1:4)
	     vecA1(1:4) = + a1(0:3)
	     vecB(1:4) = + b(0:3)
	     vecC(1:4) = + c(0:3)
      if (deg.lt.0) return
      t1 = 0
      call cond_t(epspow.eq.t1,brack_21,vecA0,vecA1,vecB,vecC,param,coeffs)
      if (deg.le.(1+(0))) return
      call cond_t(epspow.eq.t1,brack_22,vecA0,vecA1,vecB,vecC,param,coeffs)
   end subroutine numerator_t2
!---#] subroutine numerator_t2:
end module     gghh_d2h0l132
