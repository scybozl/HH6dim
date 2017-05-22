module     gghh_abbrevd7h0
   use gghh_config, only: ki
   use gghh_kinematics, only: epstensor
   use gghh_globalsh0
   implicit none
   private
   complex(ki), dimension(14), public :: abb7
   complex(ki), public :: R2d7
   public :: init_abbrev
   complex(ki), parameter :: i_ = (0.0_ki, 1.0_ki)
contains
   subroutine     init_abbrev()
      use gghh_config, only: deltaOS, &
     &    logfile, debug_nlo_diagrams
      use gghh_kinematics
      use gghh_model
      use gghh_color, only: TR
      use gghh_globalsl1, only: epspow
      implicit none
      abb7(1)=1.0_ki/(-mdlMh**2+es12+i_*mdlWh*mdlMh)
      abb7(2)=sqrt(mdlMT**2)
      abb7(3)=i_*c1*mdlGC43*mdlGC45*abb7(1)*mdlGC7**2
      abb7(4)=abb7(3)*abb7(2)
      abb7(5)=spae1e2*abb7(4)
      abb7(6)=abb7(5)*spbe2e1
      abb7(3)=abb7(2)**3*spbe2e1*abb7(3)*spae1e2
      abb7(7)=spbe2e1*abb7(4)
      abb7(8)=abb7(7)*spae1k1
      abb7(9)=spbk2k1*spae2k2*abb7(8)
      abb7(10)=abb7(5)*spbk1e1
      abb7(11)=spak1k2*spbk2e2*abb7(10)
      abb7(3)=abb7(11)-2.0_ki*abb7(3)+abb7(9)
      abb7(9)=-16.0_ki*abb7(4)
      abb7(11)=2.0_ki*abb7(6)
      abb7(12)=-spae1k2*spbk2e2
      abb7(13)=-spbe2k1*spae1k1
      abb7(12)=abb7(12)+abb7(13)
      abb7(12)=abb7(4)*abb7(12)
      abb7(13)=-spbk2e1*spae2k2
      abb7(14)=-spak1e2*spbk1e1
      abb7(13)=abb7(13)+abb7(14)
      abb7(4)=abb7(4)*abb7(13)
      abb7(7)=1.0_ki/2.0_ki*abb7(7)
      abb7(13)=-spae1k2*abb7(7)
      abb7(5)=1.0_ki/2.0_ki*abb7(5)
      abb7(14)=-spbk2e1*abb7(5)
      abb7(7)=spae2k2*abb7(7)
      abb7(5)=spbk2e2*abb7(5)
      R2d7=-abb7(6)
      rat2 = rat2 + R2d7
      if (debug_nlo_diagrams) then
          write (logfile,*) "<result name='r2' index='7' value='", &
          & R2d7, "'/>"
      end if
   end subroutine
end module gghh_abbrevd7h0
