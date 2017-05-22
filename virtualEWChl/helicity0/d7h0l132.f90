module     gghh_d7h0l132
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d7h0l13 &
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
      use gghh_abbrevd7h0
      implicit none
      complex(ki), dimension(4), intent(in) :: ninjaA0, ninjaA1, ninjaE3, ninja&
      &E4
      complex(ki), dimension(0:2), intent(in) :: ninjaP
      complex(ki), dimension(4) :: acd7
      complex(ki), dimension (0:*), intent(inout) :: brack
      complex(ki) :: ninjaP0, ninjaP1, ninjaP2
      ninjaP0 = ninjaP(0)
      ninjaP1 = ninjaP(1)
      ninjaP2 = ninjaP(2)
      acd7(1)=dotproduct(e1,ninjaE3)
      acd7(2)=dotproduct(e2,ninjaE3)
      acd7(3)=abb7(9)
      acd7(4)=acd7(3)*acd7(2)*acd7(1)
      brack(ninjaidxt2x0mu0)=0.0_ki
      brack(ninjaidxt1x0mu0)=acd7(4)
      brack(ninjaidxt1x1mu0)=0.0_ki
   end subroutine brack_21
!---#] subroutine brack_21:
!---#[ subroutine brack_22:
   pure subroutine brack_22(ninjaA0, ninjaA1, ninjaE3, ninjaE4, ninjaP, brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd7h0
      implicit none
      complex(ki), dimension(4), intent(in) :: ninjaA0, ninjaA1, ninjaE3, ninja&
      &E4
      complex(ki), dimension(0:2), intent(in) :: ninjaP
      complex(ki), dimension(37) :: acd7
      complex(ki), dimension (0:*), intent(inout) :: brack
      complex(ki) :: ninjaP0, ninjaP1, ninjaP2
      ninjaP0 = ninjaP(0)
      ninjaP1 = ninjaP(1)
      ninjaP2 = ninjaP(2)
      acd7(1)=dotproduct(e1,ninjaA1)
      acd7(2)=dotproduct(e2,ninjaE3)
      acd7(3)=abb7(9)
      acd7(4)=dotproduct(e1,ninjaE3)
      acd7(5)=dotproduct(e2,ninjaA1)
      acd7(6)=dotproduct(e1,ninjaA0)
      acd7(7)=dotproduct(e2,ninjaA0)
      acd7(8)=dotproduct(ninjaA0,ninjaE3)
      acd7(9)=abb7(11)
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
      acd7(26)=acd7(2)*acd7(3)
      acd7(27)=acd7(1)*acd7(26)
      acd7(28)=acd7(4)*acd7(3)
      acd7(29)=acd7(5)*acd7(28)
      acd7(27)=acd7(27)+acd7(29)
      acd7(26)=acd7(6)*acd7(26)
      acd7(28)=acd7(7)*acd7(28)
      acd7(29)=acd7(9)*acd7(8)
      acd7(30)=acd7(11)*acd7(10)
      acd7(31)=acd7(13)*acd7(12)
      acd7(32)=acd7(15)*acd7(14)
      acd7(33)=acd7(17)*acd7(16)
      acd7(34)=acd7(19)*acd7(18)
      acd7(35)=acd7(21)*acd7(20)
      acd7(36)=acd7(23)*acd7(22)
      acd7(37)=acd7(25)*acd7(24)
      acd7(26)=acd7(37)+acd7(36)+acd7(35)+acd7(34)+acd7(33)+acd7(32)+acd7(31)+a&
      &cd7(30)+2.0_ki*acd7(29)+acd7(26)+acd7(28)
      brack(ninjaidxt0x0mu0)=acd7(26)
      brack(ninjaidxt0x0mu2)=0.0_ki
      brack(ninjaidxt0x1mu0)=acd7(27)
      brack(ninjaidxt0x2mu0)=0.0_ki
   end subroutine brack_22
!---#] subroutine brack_22:
!---#[ subroutine numerator_t2:
   subroutine numerator_t2(ncut, a0, a1, b, c, param, deg, coeffs) &
   & bind(c, name="gghh_d7h0_ninja_t2")
      use iso_c_binding, only: c_int
      use ninjago_module, only: ki => ki_nin
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd7h0
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
end module     gghh_d7h0l132
