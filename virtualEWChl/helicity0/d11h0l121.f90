module     gghh_d11h0l121
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d11h0l1 &
   ! &21.f90
   ! generator: buildfortran_n3.py
   use gghh_config, only: ki
   use gghh_util, only: cond_t, d => metric_tensor
   implicit none
   private
   complex(ki), parameter :: i_ = (0.0_ki, 1.0_ki)
   integer, parameter :: ninjaidxt0 = 0
   public :: numerator_tmu
contains
!---#[ subroutine brack_0:
   pure subroutine brack_0(ninjaA0, brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd11h0
      implicit none
      complex(ki), dimension(4), intent(in) :: ninjaA0
      complex(ki), dimension(7) :: acd11
      complex(ki), dimension (0:*), intent(inout) :: brack
      acd11(1)=dotproduct(e1,ninjaA0)
      acd11(2)=dotproduct(e2,ninjaA0)
      acd11(3)=dotproduct(ninjaA0,ninjaA0)
      acd11(4)=abb11(43)
      acd11(5)=abb11(23)
      acd11(6)=acd11(1)*acd11(2)*acd11(4)
      acd11(7)=acd11(3)*acd11(5)
      acd11(6)=acd11(6)+acd11(7)
      acd11(6)=acd11(3)*acd11(6)
      brack(ninjaidxt0)=acd11(6)
   end subroutine brack_0
!---#] subroutine brack_0:
!---#[ subroutine numerator_tmu:
   subroutine numerator_tmu(ncut, a, coeffs) &
   & bind(c, name="gghh_d11h0_ninja_tmu")
      use iso_c_binding, only: c_int
      use ninjago_module, only: ki => ki_nin
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd11h0
      implicit none
      integer(c_int), intent(in) :: ncut
      complex(ki), dimension(0:3,0:*), intent(in) :: a
      complex(ki), dimension(0:*), intent(out) :: coeffs
      integer :: t1
      complex(ki), dimension(4) :: qshift
      complex(ki), dimension(4) :: vecA0
      qshift = k2
	     vecA0(1:4) = + a(0:3,0)
      t1 = 0
      call cond_t(epspow.eq.t1,brack_0,vecA0, coeffs)
   end subroutine numerator_tmu
!---#] subroutine numerator_tmu:
end module     gghh_d11h0l121
