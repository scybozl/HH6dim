module     gghh_d7h0l1d
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d7h0l1d &
   ! &.f90
   ! generator: buildfortran_d.py
   use gghh_config, only: ki
   use gghh_util, only: cond, d => metric_tensor
   implicit none
   private
   complex(ki), parameter :: i_ = (0.0_ki, 1.0_ki)
   integer, private :: iv0
   integer, private :: iv1
   integer, private :: iv2
   integer, private :: iv3
   real(ki), dimension(4), private :: qshift
   public :: derivative
contains
!---#[ function brack_1:
   pure function brack_1(Q, mu2) result(brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd7h0
      implicit none
      complex(ki), dimension(4), intent(in) :: Q
      complex(ki), intent(in) :: mu2
      complex(ki), dimension(32) :: acd7
      complex(ki) :: brack
      acd7(1)=dotproduct(e1,qshift)
      acd7(2)=dotproduct(e2,qshift)
      acd7(3)=abb7(9)
      acd7(4)=dotproduct(qshift,qshift)
      acd7(5)=abb7(11)
      acd7(6)=dotproduct(qshift,spvak1e2)
      acd7(7)=abb7(10)
      acd7(8)=dotproduct(qshift,spvae2k1)
      acd7(9)=abb7(8)
      acd7(10)=dotproduct(qshift,spvak2e1)
      acd7(11)=abb7(5)
      acd7(12)=dotproduct(qshift,spvae1k2)
      acd7(13)=abb7(7)
      acd7(14)=dotproduct(qshift,spvak2e2)
      acd7(15)=abb7(14)
      acd7(16)=dotproduct(qshift,spvae2k2)
      acd7(17)=abb7(13)
      acd7(18)=dotproduct(qshift,spvae1e2)
      acd7(19)=abb7(4)
      acd7(20)=dotproduct(qshift,spvae2e1)
      acd7(21)=abb7(12)
      acd7(22)=abb7(3)
      acd7(23)=acd7(3)*acd7(2)*acd7(1)
      acd7(24)=acd7(5)*acd7(4)
      acd7(25)=-acd7(7)*acd7(6)
      acd7(26)=-acd7(9)*acd7(8)
      acd7(27)=-acd7(11)*acd7(10)
      acd7(28)=-acd7(13)*acd7(12)
      acd7(29)=-acd7(15)*acd7(14)
      acd7(30)=-acd7(17)*acd7(16)
      acd7(31)=-acd7(19)*acd7(18)
      acd7(32)=-acd7(21)*acd7(20)
      brack=acd7(22)+acd7(23)+acd7(24)+acd7(25)+acd7(26)+acd7(27)+acd7(28)+acd7&
      &(29)+acd7(30)+acd7(31)+acd7(32)
   end function brack_1
!---#] function brack_1:
!---#[ function brack_2:
   pure function brack_2(Q, mu2) result(brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd7h0
      implicit none
      complex(ki), dimension(4), intent(in) :: Q
      complex(ki), intent(in) :: mu2
      complex(ki), dimension(33) :: acd7
      complex(ki) :: brack
      acd7(1)=e1(iv1)
      acd7(2)=dotproduct(e2,qshift)
      acd7(3)=abb7(9)
      acd7(4)=e2(iv1)
      acd7(5)=dotproduct(e1,qshift)
      acd7(6)=qshift(iv1)
      acd7(7)=abb7(11)
      acd7(8)=spvak1e2(iv1)
      acd7(9)=abb7(10)
      acd7(10)=spvae2k1(iv1)
      acd7(11)=abb7(8)
      acd7(12)=spvak2e1(iv1)
      acd7(13)=abb7(5)
      acd7(14)=spvae1k2(iv1)
      acd7(15)=abb7(7)
      acd7(16)=spvak2e2(iv1)
      acd7(17)=abb7(14)
      acd7(18)=spvae2k2(iv1)
      acd7(19)=abb7(13)
      acd7(20)=spvae1e2(iv1)
      acd7(21)=abb7(4)
      acd7(22)=spvae2e1(iv1)
      acd7(23)=abb7(12)
      acd7(24)=-acd7(2)*acd7(1)
      acd7(25)=-acd7(5)*acd7(4)
      acd7(24)=acd7(24)+acd7(25)
      acd7(24)=acd7(3)*acd7(24)
      acd7(25)=acd7(7)*acd7(6)
      acd7(26)=acd7(9)*acd7(8)
      acd7(27)=acd7(11)*acd7(10)
      acd7(28)=acd7(13)*acd7(12)
      acd7(29)=acd7(15)*acd7(14)
      acd7(30)=acd7(17)*acd7(16)
      acd7(31)=acd7(19)*acd7(18)
      acd7(32)=acd7(21)*acd7(20)
      acd7(33)=acd7(23)*acd7(22)
      brack=acd7(24)-2.0_ki*acd7(25)+acd7(26)+acd7(27)+acd7(28)+acd7(29)+acd7(3&
      &0)+acd7(31)+acd7(32)+acd7(33)
   end function brack_2
!---#] function brack_2:
!---#[ function brack_3:
   pure function brack_3(Q, mu2) result(brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd7h0
      implicit none
      complex(ki), dimension(4), intent(in) :: Q
      complex(ki), intent(in) :: mu2
      complex(ki), dimension(9) :: acd7
      complex(ki) :: brack
      acd7(1)=d(iv1,iv2)
      acd7(2)=abb7(11)
      acd7(3)=e1(iv1)
      acd7(4)=e2(iv2)
      acd7(5)=abb7(9)
      acd7(6)=e1(iv2)
      acd7(7)=e2(iv1)
      acd7(8)=acd7(4)*acd7(3)
      acd7(9)=acd7(7)*acd7(6)
      acd7(8)=acd7(9)+acd7(8)
      acd7(8)=acd7(5)*acd7(8)
      acd7(9)=acd7(2)*acd7(1)
      brack=acd7(8)+2.0_ki*acd7(9)
   end function brack_3
!---#] function brack_3:
!---#[ function brack_4:
   pure function brack_4(Q, mu2) result(brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd7h0
      implicit none
      complex(ki), dimension(4), intent(in) :: Q
      complex(ki), intent(in) :: mu2
      complex(ki), dimension(1) :: acd7
      complex(ki) :: brack
      brack=0.0_ki
   end function brack_4
!---#] function brack_4:
!---#[ function derivative:
   function derivative(mu2,i1,i2,i3) result(numerator)
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd7h0
      implicit none
      complex(ki), intent(in) :: mu2
      integer, intent(in), optional :: i1
      integer, intent(in), optional :: i2
      integer, intent(in), optional :: i3
      complex(ki) :: numerator
      complex(ki) :: loc
      integer :: t1
      integer :: deg
      complex(ki), dimension(4), parameter :: Q = (/ (0.0_ki,0.0_ki),(0.0_ki,0.&
      &0_ki),(0.0_ki,0.0_ki),(0.0_ki,0.0_ki)/)
      qshift = k2
      numerator = 0.0_ki
      deg = 0
      if(present(i1)) then
          iv1=i1
          deg=1
      else
          iv1=1
      end if
      if(present(i2)) then
          iv2=i2
          deg=2
      else
          iv2=1
      end if
      if(present(i3)) then
          iv3=i3
          deg=3
      else
          iv3=1
      end if
      t1 = 0
      if(deg.eq.0) then
         numerator = cond(epspow.eq.t1,brack_1,Q,mu2)
         return
      end if
      if(deg.eq.1) then
         numerator = cond(epspow.eq.t1,brack_2,Q,mu2)
         return
      end if
      if(deg.eq.2) then
         numerator = cond(epspow.eq.t1,brack_3,Q,mu2)
         return
      end if
      if(deg.eq.3) then
         numerator = cond(epspow.eq.t1,brack_4,Q,mu2)
         return
      end if
   end function derivative
!---#] function derivative:
end module     gghh_d7h0l1d
