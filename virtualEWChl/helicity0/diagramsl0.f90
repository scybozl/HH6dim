module     gghh_diagramsh0l0
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0diagram &
   ! &sl0.f90
   ! generator: buildfortranborn.py
   use gghh_color, only: numcs
   use gghh_config, only: ki
   implicit none
   private
   complex(ki), parameter :: i_ = (0.0_ki, 1.0_ki)
   complex(ki), dimension(numcs), parameter :: zero_col = 0.0_ki
   public :: amplitude
contains
!---#[ function amplitude:
   function amplitude()
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_config, only: debug_lo_diagrams, &
        & use_sorted_sum
      use gghh_accu, only: sorted_sum
      use gghh_util, only: inspect_lo_diagram
      implicit none
      complex(ki), dimension(numcs) :: amplitude
      complex(ki), dimension(3) :: abb
!      complex(ki), dimension(2,numcs) :: diagrams
      integer :: i
      amplitude(:) = 0.0_ki
      abb(1)=TR**(-1)
      abb(2)=1.0_ki/(-mdlMh**2+es12+i_*mdlWh*mdlMh)
      abb(3)=-abb(2)*mdlGC43*mdlGC38*i_
      abb(3)=-mdlGC31+abb(3)
      abb(3)=1.0_ki/4.0_ki*abb(1)*spbe2e1*spae1e2*es12*abb(3)
      amplitude=c1*abb(3)
      if (debug_lo_diagrams) then
         write(*,*) "Using Born optimization, debug_lo_diagrams not implemented&
         &."
      end if
!      if (use_sorted_sum) then
!         do i=1,numcs
!            amplitude(i) = sorted_sum(diagrams(i))
!         end do
!      else
!         do i=1,numcs
!            amplitude(i) = sum(diagrams(i))
!         end do
!      end if
   end function     amplitude
!---#] function amplitude:
end module gghh_diagramsh0l0
