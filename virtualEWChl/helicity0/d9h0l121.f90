module     gghh_d9h0l121
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d9h0l12 &
   ! &1.f90
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
      use gghh_abbrevd9h0
      implicit none
      complex(ki), dimension(4), intent(in) :: ninjaA0
      complex(ki), dimension(7) :: acd9
      complex(ki), dimension (0:*), intent(inout) :: brack
      acd9(1)=dotproduct(e1,ninjaA0)
      acd9(2)=dotproduct(e2,ninjaA0)
      acd9(3)=dotproduct(ninjaA0,ninjaA0)
      acd9(4)=abb9(43)
      acd9(5)=abb9(23)
      acd9(6)=acd9(1)*acd9(2)*acd9(4)
      acd9(7)=acd9(3)*acd9(5)
      acd9(6)=acd9(6)+acd9(7)
      acd9(6)=acd9(3)*acd9(6)
      brack(ninjaidxt0)=acd9(6)
   end subroutine brack_0
!---#] subroutine brack_0:
!---#[ subroutine numerator_tmu:
   subroutine numerator_tmu(ncut, a, coeffs) &
   & bind(c, name="gghh_d9h0_ninja_tmu")
      use iso_c_binding, only: c_int
      use ninjago_module, only: ki => ki_nin
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd9h0
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
end module     gghh_d9h0l121
