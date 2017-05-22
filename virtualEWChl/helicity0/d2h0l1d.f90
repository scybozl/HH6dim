module     gghh_d2h0l1d
   ! file: /home/iwsatlas1/scyboz/Work/HHPersonal/virtualEWChl/helicity0d2h0l1d &
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
      use gghh_abbrevd2h0
      implicit none
      complex(ki), dimension(4), intent(in) :: Q
      complex(ki), intent(in) :: mu2
      complex(ki), dimension(32) :: acd2
      complex(ki) :: brack
      acd2(1)=dotproduct(e1,qshift)
      acd2(2)=dotproduct(e2,qshift)
      acd2(3)=abb2(9)
      acd2(4)=dotproduct(qshift,qshift)
      acd2(5)=abb2(10)
      acd2(6)=dotproduct(qshift,spvak1e2)
      acd2(7)=abb2(4)
      acd2(8)=dotproduct(qshift,spvae2k1)
      acd2(9)=abb2(2)
      acd2(10)=dotproduct(qshift,spvak2e1)
      acd2(11)=abb2(13)
      acd2(12)=dotproduct(qshift,spvae1k2)
      acd2(13)=abb2(7)
      acd2(14)=dotproduct(qshift,spvak2e2)
      acd2(15)=abb2(14)
      acd2(16)=dotproduct(qshift,spvae2k2)
      acd2(17)=abb2(12)
      acd2(18)=dotproduct(qshift,spvae1e2)
      acd2(19)=abb2(6)
      acd2(20)=dotproduct(qshift,spvae2e1)
      acd2(21)=abb2(11)
      acd2(22)=abb2(3)
      acd2(23)=acd2(3)*acd2(2)*acd2(1)
      acd2(24)=acd2(5)*acd2(4)
      acd2(25)=-acd2(7)*acd2(6)
      acd2(26)=-acd2(9)*acd2(8)
      acd2(27)=-acd2(11)*acd2(10)
      acd2(28)=-acd2(13)*acd2(12)
      acd2(29)=-acd2(15)*acd2(14)
      acd2(30)=-acd2(17)*acd2(16)
      acd2(31)=-acd2(19)*acd2(18)
      acd2(32)=-acd2(21)*acd2(20)
      brack=acd2(22)+acd2(23)+acd2(24)+acd2(25)+acd2(26)+acd2(27)+acd2(28)+acd2&
      &(29)+acd2(30)+acd2(31)+acd2(32)
   end function brack_1
!---#] function brack_1:
!---#[ function brack_2:
   pure function brack_2(Q, mu2) result(brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd2h0
      implicit none
      complex(ki), dimension(4), intent(in) :: Q
      complex(ki), intent(in) :: mu2
      complex(ki), dimension(33) :: acd2
      complex(ki) :: brack
      acd2(1)=e1(iv1)
      acd2(2)=dotproduct(e2,qshift)
      acd2(3)=abb2(9)
      acd2(4)=e2(iv1)
      acd2(5)=dotproduct(e1,qshift)
      acd2(6)=qshift(iv1)
      acd2(7)=abb2(10)
      acd2(8)=spvak1e2(iv1)
      acd2(9)=abb2(4)
      acd2(10)=spvae2k1(iv1)
      acd2(11)=abb2(2)
      acd2(12)=spvak2e1(iv1)
      acd2(13)=abb2(13)
      acd2(14)=spvae1k2(iv1)
      acd2(15)=abb2(7)
      acd2(16)=spvak2e2(iv1)
      acd2(17)=abb2(14)
      acd2(18)=spvae2k2(iv1)
      acd2(19)=abb2(12)
      acd2(20)=spvae1e2(iv1)
      acd2(21)=abb2(6)
      acd2(22)=spvae2e1(iv1)
      acd2(23)=abb2(11)
      acd2(24)=-acd2(2)*acd2(1)
      acd2(25)=-acd2(5)*acd2(4)
      acd2(24)=acd2(24)+acd2(25)
      acd2(24)=acd2(3)*acd2(24)
      acd2(25)=acd2(7)*acd2(6)
      acd2(26)=acd2(9)*acd2(8)
      acd2(27)=acd2(11)*acd2(10)
      acd2(28)=acd2(13)*acd2(12)
      acd2(29)=acd2(15)*acd2(14)
      acd2(30)=acd2(17)*acd2(16)
      acd2(31)=acd2(19)*acd2(18)
      acd2(32)=acd2(21)*acd2(20)
      acd2(33)=acd2(23)*acd2(22)
      brack=acd2(24)-2.0_ki*acd2(25)+acd2(26)+acd2(27)+acd2(28)+acd2(29)+acd2(3&
      &0)+acd2(31)+acd2(32)+acd2(33)
   end function brack_2
!---#] function brack_2:
!---#[ function brack_3:
   pure function brack_3(Q, mu2) result(brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd2h0
      implicit none
      complex(ki), dimension(4), intent(in) :: Q
      complex(ki), intent(in) :: mu2
      complex(ki), dimension(9) :: acd2
      complex(ki) :: brack
      acd2(1)=d(iv1,iv2)
      acd2(2)=abb2(10)
      acd2(3)=e1(iv1)
      acd2(4)=e2(iv2)
      acd2(5)=abb2(9)
      acd2(6)=e1(iv2)
      acd2(7)=e2(iv1)
      acd2(8)=acd2(4)*acd2(3)
      acd2(9)=acd2(7)*acd2(6)
      acd2(8)=acd2(9)+acd2(8)
      acd2(8)=acd2(5)*acd2(8)
      acd2(9)=acd2(2)*acd2(1)
      brack=acd2(8)+2.0_ki*acd2(9)
   end function brack_3
!---#] function brack_3:
!---#[ function brack_4:
   pure function brack_4(Q, mu2) result(brack)
      use gghh_model
      use gghh_kinematics
      use gghh_color
      use gghh_abbrevd2h0
      implicit none
      complex(ki), dimension(4), intent(in) :: Q
      complex(ki), intent(in) :: mu2
      complex(ki), dimension(1) :: acd2
      complex(ki) :: brack
      brack=0.0_ki
   end function brack_4
!---#] function brack_4:
!---#[ function derivative:
   function derivative(mu2,i1,i2,i3) result(numerator)
      use gghh_globalsl1, only: epspow
      use gghh_kinematics
      use gghh_abbrevd2h0
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
end module     gghh_d2h0l1d
