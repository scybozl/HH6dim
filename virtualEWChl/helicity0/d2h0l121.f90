module     gghh_d2h0l121
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d2h0l12 &
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
!---#[ subroutine numerator_tmu:
   subroutine numerator_tmu(ncut, a, coeffs) &
   & bind(c, name="gghh_d2h0_ninja_tmu")
      use iso_c_binding, only: c_int
      use ninjago_module, only: ki => ki_nin
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd2h0
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
      coeffs(0) = 0.0_ki
   end subroutine numerator_tmu
!---#] subroutine numerator_tmu:
end module     gghh_d2h0l121
