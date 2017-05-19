!
module     gghh_ninjah0
   ! This file has been generated for ninja
   use ninjago_module, only: ki_nin
   use gghh_config
   implicit none
   private
   public :: ninja_reduce_group0
   public :: ninja_reduce_group1
   public :: ninja_reduce_group2
   public :: ninja_reduce_group3
   public :: ninja_reduce_group4
   public :: ninja_reduce_group5
   public :: ninja_reduce_group6
   public :: ninja_reduce_group7
   public :: ninja_reduce_group8
   public :: ninja_reduce_group9
   public :: ninja_reduce_group10
   public :: ninja_reduce_group11
contains
!---#[ reduce groups with ninja:
!-----#[ subroutine ninja_reduce_group0:
subroutine     ninja_reduce_group0(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d195h0l1, only: numerator_diagram195 => numerator_ninja
   use gghh_d195h0l121, only: numerator_tmu_diagram195 => numerator_tmu
   use gghh_d195h0l131, only: numerator_t3_diagram195 => numerator_t3
   use gghh_d195h0l132, only: numerator_t2_diagram195 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 6

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   real(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = 0.0_ki_nin
   Vi(:,1) = real(-k2+k4, ki_nin)
   msq(2) = 0.0_ki_nin
   Vi(:,2) = real(-k2, ki_nin)
   msq(3) = 0.0_ki_nin
   Vi(:,3) = real(0, ki_nin)
   msq(4) = 0.0_ki_nin
   Vi(:,4) = real(-k3, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(0.0_ki, ki_nin)
   s_mat(1,2) = real(mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(-es12+2.0_ki*mdlMh**2-es23, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(0.0_ki, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(0.0_ki, ki_nin)
   s_mat(2,3) = real(0.0_ki, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(0.0_ki, ki_nin)
   s_mat(3,4) = real(mdlMh**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(0.0_ki, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='195'>"
         end if
         call ninja_diagram(numerator_diagram195, numerator_t3_diagram195, nume&
         &rator_t2_diagram195, &
          &  numerator_tmu_diagram195, &
          & 4, 4, 6, (/1,2,3,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group0
!-----#] subroutine ninja_reduce_group0:
!-----#[ subroutine ninja_reduce_group1:
subroutine     ninja_reduce_group1(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d1h0l1, only: numerator_diagram1 => numerator_ninja
   use gghh_d1h0l121, only: numerator_tmu_diagram1 => numerator_tmu
   use gghh_d1h0l131, only: numerator_t3_diagram1 => numerator_t3
   use gghh_d1h0l132, only: numerator_t2_diagram1 => numerator_t2
   use gghh_d2h0l1, only: numerator_diagram2 => numerator_ninja
   use gghh_d2h0l121, only: numerator_tmu_diagram2 => numerator_tmu
   use gghh_d2h0l131, only: numerator_t3_diagram2 => numerator_t3
   use gghh_d2h0l132, only: numerator_t2_diagram2 => numerator_t2
   use gghh_d10h0l1, only: numerator_diagram10 => numerator_ninja
   use gghh_d10h0l121, only: numerator_tmu_diagram10 => numerator_tmu
   use gghh_d10h0l131, only: numerator_t3_diagram10 => numerator_t3
   use gghh_d10h0l132, only: numerator_t2_diagram10 => numerator_t2
   use gghh_d24h0l1, only: numerator_diagram24 => numerator_ninja
   use gghh_d24h0l121, only: numerator_tmu_diagram24 => numerator_tmu
   use gghh_d24h0l131, only: numerator_t3_diagram24 => numerator_t3
   use gghh_d24h0l132, only: numerator_t2_diagram24 => numerator_t2
   use gghh_d33h0l1, only: numerator_diagram33 => numerator_ninja
   use gghh_d33h0l121, only: numerator_tmu_diagram33 => numerator_tmu
   use gghh_d33h0l131, only: numerator_t3_diagram33 => numerator_t3
   use gghh_d33h0l132, only: numerator_t2_diagram33 => numerator_t2
   use gghh_d40h0l1, only: numerator_diagram40 => numerator_ninja
   use gghh_d40h0l121, only: numerator_tmu_diagram40 => numerator_tmu
   use gghh_d40h0l131, only: numerator_t3_diagram40 => numerator_t3
   use gghh_d40h0l132, only: numerator_t2_diagram40 => numerator_t2
   use gghh_d44h0l1, only: numerator_diagram44 => numerator_ninja
   use gghh_d44h0l121, only: numerator_tmu_diagram44 => numerator_tmu
   use gghh_d44h0l131, only: numerator_t3_diagram44 => numerator_t3
   use gghh_d44h0l132, only: numerator_t2_diagram44 => numerator_t2
   use gghh_d132h0l1, only: numerator_diagram132 => numerator_ninja
   use gghh_d132h0l121, only: numerator_tmu_diagram132 => numerator_tmu
   use gghh_d132h0l131, only: numerator_t3_diagram132 => numerator_t3
   use gghh_d132h0l132, only: numerator_t2_diagram132 => numerator_t2
   use gghh_d144h0l1, only: numerator_diagram144 => numerator_ninja
   use gghh_d144h0l121, only: numerator_tmu_diagram144 => numerator_tmu
   use gghh_d144h0l131, only: numerator_t3_diagram144 => numerator_t3
   use gghh_d144h0l132, only: numerator_t2_diagram144 => numerator_t2
   use gghh_d168h0l1, only: numerator_diagram168 => numerator_ninja
   use gghh_d168h0l121, only: numerator_tmu_diagram168 => numerator_tmu
   use gghh_d168h0l131, only: numerator_t3_diagram168 => numerator_t3
   use gghh_d168h0l132, only: numerator_t2_diagram168 => numerator_t2
   use gghh_d185h0l1, only: numerator_diagram185 => numerator_ninja
   use gghh_d185h0l121, only: numerator_tmu_diagram185 => numerator_tmu
   use gghh_d185h0l131, only: numerator_t3_diagram185 => numerator_t3
   use gghh_d185h0l132, only: numerator_t2_diagram185 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 6

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   real(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = 0.0_ki_nin
   Vi(:,1) = real(-k3-k4, ki_nin)
   msq(2) = 0.0_ki_nin
   Vi(:,2) = real(-k3, ki_nin)
   msq(3) = 0.0_ki_nin
   Vi(:,3) = real(0, ki_nin)
   msq(4) = 0.0_ki_nin
   Vi(:,4) = real(-k2, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(0.0_ki, ki_nin)
   s_mat(1,2) = real(mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(es12, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(0.0_ki, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(0.0_ki, ki_nin)
   s_mat(2,3) = real(mdlMh**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(0.0_ki, ki_nin)
   s_mat(3,4) = real(0.0_ki, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(0.0_ki, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='1'>"
         end if
         call ninja_diagram(numerator_diagram1, numerator_t3_diagram1, numerato&
         &r_t2_diagram1, &
          &  numerator_tmu_diagram1, &
          & 4, 2, 2, (/1,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='2'>"
         end if
         call ninja_diagram(numerator_diagram2, numerator_t3_diagram2, numerato&
         &r_t2_diagram2, &
          &  numerator_tmu_diagram2, &
          & 4, 2, 2, (/3,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='10'>"
         end if
         call ninja_diagram(numerator_diagram10, numerator_t3_diagram10, numera&
         &tor_t2_diagram10, &
          &  numerator_tmu_diagram10, &
          & 4, 2, 2, (/2,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='24'>"
         end if
         call ninja_diagram(numerator_diagram24, numerator_t3_diagram24, numera&
         &tor_t2_diagram24, &
          &  numerator_tmu_diagram24, &
          & 4, 2, 2, (/2,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='33'>"
         end if
         call ninja_diagram(numerator_diagram33, numerator_t3_diagram33, numera&
         &tor_t2_diagram33, &
          &  numerator_tmu_diagram33, &
          & 4, 3, 4, (/1,3,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='40'>"
         end if
         call ninja_diagram(numerator_diagram40, numerator_t3_diagram40, numera&
         &tor_t2_diagram40, &
          &  numerator_tmu_diagram40, &
          & 4, 3, 4, (/1,2,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='44'>"
         end if
         call ninja_diagram(numerator_diagram44, numerator_t3_diagram44, numera&
         &tor_t2_diagram44, &
          &  numerator_tmu_diagram44, &
          & 4, 3, 4, (/2,3,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='132'>"
         end if
         call ninja_diagram(numerator_diagram132, numerator_t3_diagram132, nume&
         &rator_t2_diagram132, &
          &  numerator_tmu_diagram132, &
          & 4, 3, 4, (/2,3,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='144'>"
         end if
         call ninja_diagram(numerator_diagram144, numerator_t3_diagram144, nume&
         &rator_t2_diagram144, &
          &  numerator_tmu_diagram144, &
          & 4, 3, 4, (/1,2,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='168'>"
         end if
         call ninja_diagram(numerator_diagram168, numerator_t3_diagram168, nume&
         &rator_t2_diagram168, &
          &  numerator_tmu_diagram168, &
          & 4, 3, 4, (/1,3,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='185'>"
         end if
         call ninja_diagram(numerator_diagram185, numerator_t3_diagram185, nume&
         &rator_t2_diagram185, &
          &  numerator_tmu_diagram185, &
          & 4, 4, 6, (/1,2,3,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group1
!-----#] subroutine ninja_reduce_group1:
!-----#[ subroutine ninja_reduce_group2:
subroutine     ninja_reduce_group2(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d7h0l1, only: numerator_diagram7 => numerator_ninja
   use gghh_d7h0l121, only: numerator_tmu_diagram7 => numerator_tmu
   use gghh_d7h0l131, only: numerator_t3_diagram7 => numerator_t3
   use gghh_d7h0l132, only: numerator_t2_diagram7 => numerator_t2
   use gghh_d27h0l1, only: numerator_diagram27 => numerator_ninja
   use gghh_d27h0l121, only: numerator_tmu_diagram27 => numerator_tmu
   use gghh_d27h0l131, only: numerator_t3_diagram27 => numerator_t3
   use gghh_d27h0l132, only: numerator_t2_diagram27 => numerator_t2
   use gghh_d36h0l1, only: numerator_diagram36 => numerator_ninja
   use gghh_d36h0l121, only: numerator_tmu_diagram36 => numerator_tmu
   use gghh_d36h0l131, only: numerator_t3_diagram36 => numerator_t3
   use gghh_d36h0l132, only: numerator_t2_diagram36 => numerator_t2
   use gghh_d48h0l1, only: numerator_diagram48 => numerator_ninja
   use gghh_d48h0l121, only: numerator_tmu_diagram48 => numerator_tmu
   use gghh_d48h0l131, only: numerator_t3_diagram48 => numerator_t3
   use gghh_d48h0l132, only: numerator_t2_diagram48 => numerator_t2
   use gghh_d120h0l1, only: numerator_diagram120 => numerator_ninja
   use gghh_d120h0l121, only: numerator_tmu_diagram120 => numerator_tmu
   use gghh_d120h0l131, only: numerator_t3_diagram120 => numerator_t3
   use gghh_d120h0l132, only: numerator_t2_diagram120 => numerator_t2
   use gghh_d156h0l1, only: numerator_diagram156 => numerator_ninja
   use gghh_d156h0l121, only: numerator_tmu_diagram156 => numerator_tmu
   use gghh_d156h0l131, only: numerator_t3_diagram156 => numerator_t3
   use gghh_d156h0l132, only: numerator_t2_diagram156 => numerator_t2
   use gghh_d175h0l1, only: numerator_diagram175 => numerator_ninja
   use gghh_d175h0l121, only: numerator_tmu_diagram175 => numerator_tmu
   use gghh_d175h0l131, only: numerator_t3_diagram175 => numerator_t3
   use gghh_d175h0l132, only: numerator_t2_diagram175 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 6

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   real(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = 0.0_ki_nin
   Vi(:,1) = real(-k3-k4, ki_nin)
   msq(2) = 0.0_ki_nin
   Vi(:,2) = real(-k4, ki_nin)
   msq(3) = 0.0_ki_nin
   Vi(:,3) = real(0, ki_nin)
   msq(4) = 0.0_ki_nin
   Vi(:,4) = real(-k2, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(0.0_ki, ki_nin)
   s_mat(1,2) = real(mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(es12, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(0.0_ki, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(0.0_ki, ki_nin)
   s_mat(2,3) = real(mdlMh**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-es12+2.0_ki*mdlMh**2-es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(0.0_ki, ki_nin)
   s_mat(3,4) = real(0.0_ki, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(0.0_ki, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='7'>"
         end if
         call ninja_diagram(numerator_diagram7, numerator_t3_diagram7, numerato&
         &r_t2_diagram7, &
          &  numerator_tmu_diagram7, &
          & 4, 2, 2, (/2,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='27'>"
         end if
         call ninja_diagram(numerator_diagram27, numerator_t3_diagram27, numera&
         &tor_t2_diagram27, &
          &  numerator_tmu_diagram27, &
          & 4, 2, 2, (/2,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='36'>"
         end if
         call ninja_diagram(numerator_diagram36, numerator_t3_diagram36, numera&
         &tor_t2_diagram36, &
          &  numerator_tmu_diagram36, &
          & 4, 3, 4, (/1,2,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='48'>"
         end if
         call ninja_diagram(numerator_diagram48, numerator_t3_diagram48, numera&
         &tor_t2_diagram48, &
          &  numerator_tmu_diagram48, &
          & 4, 3, 4, (/2,3,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='120'>"
         end if
         call ninja_diagram(numerator_diagram120, numerator_t3_diagram120, nume&
         &rator_t2_diagram120, &
          &  numerator_tmu_diagram120, &
          & 4, 3, 4, (/2,3,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='156'>"
         end if
         call ninja_diagram(numerator_diagram156, numerator_t3_diagram156, nume&
         &rator_t2_diagram156, &
          &  numerator_tmu_diagram156, &
          & 4, 3, 4, (/1,2,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='175'>"
         end if
         call ninja_diagram(numerator_diagram175, numerator_t3_diagram175, nume&
         &rator_t2_diagram175, &
          &  numerator_tmu_diagram175, &
          & 4, 4, 6, (/1,2,3,4/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group2
!-----#] subroutine ninja_reduce_group2:
!-----#[ subroutine ninja_reduce_group3:
subroutine     ninja_reduce_group3(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d49h0l1, only: numerator_diagram49 => numerator_ninja
   use gghh_d49h0l121, only: numerator_tmu_diagram49 => numerator_tmu
   use gghh_d49h0l131, only: numerator_t3_diagram49 => numerator_t3
   use gghh_d49h0l132, only: numerator_t2_diagram49 => numerator_t2
   use gghh_d126h0l1, only: numerator_diagram126 => numerator_ninja
   use gghh_d126h0l121, only: numerator_tmu_diagram126 => numerator_tmu
   use gghh_d126h0l131, only: numerator_t3_diagram126 => numerator_t3
   use gghh_d126h0l132, only: numerator_t2_diagram126 => numerator_t2
   use gghh_d196h0l1, only: numerator_diagram196 => numerator_ninja
   use gghh_d196h0l121, only: numerator_tmu_diagram196 => numerator_tmu
   use gghh_d196h0l131, only: numerator_t3_diagram196 => numerator_t3
   use gghh_d196h0l132, only: numerator_t2_diagram196 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 6

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   complex(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,1) = real(-k2+k4, ki_nin)
   msq(2) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,2) = real(-k2, ki_nin)
   msq(3) = 0.0_ki_nin
   Vi(:,3) = real(0, ki_nin)
   msq(4) = 0.0_ki_nin
   Vi(:,4) = real(-k3, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(-2.0_ki*mdlMh**2, ki_nin)
   s_mat(1,2) = real(-mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(-es12+mdlMh**2-es23, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(-2.0_ki*mdlMh**2, ki_nin)
   s_mat(2,3) = real(-mdlMh**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-mdlMh**2+es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(0.0_ki, ki_nin)
   s_mat(3,4) = real(mdlMh**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(0.0_ki, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='49'>"
         end if
         call ninja_diagram(numerator_diagram49, numerator_t3_diagram49, numera&
         &tor_t2_diagram49, &
          &  numerator_tmu_diagram49, &
          & 4, 3, 4, (/1,2,3/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='126'>"
         end if
         call ninja_diagram(numerator_diagram126, numerator_t3_diagram126, nume&
         &rator_t2_diagram126, &
          &  numerator_tmu_diagram126, &
          & 4, 3, 4, (/1,2,3/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='196'>"
         end if
         call ninja_diagram(numerator_diagram196, numerator_t3_diagram196, nume&
         &rator_t2_diagram196, &
          &  numerator_tmu_diagram196, &
          & 4, 4, 6, (/1,2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group3
!-----#] subroutine ninja_reduce_group3:
!-----#[ subroutine ninja_reduce_group4:
subroutine     ninja_reduce_group4(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d3h0l1, only: numerator_diagram3 => numerator_ninja
   use gghh_d3h0l121, only: numerator_tmu_diagram3 => numerator_tmu
   use gghh_d3h0l131, only: numerator_t3_diagram3 => numerator_t3
   use gghh_d3h0l132, only: numerator_t2_diagram3 => numerator_t2
   use gghh_d4h0l1, only: numerator_diagram4 => numerator_ninja
   use gghh_d4h0l121, only: numerator_tmu_diagram4 => numerator_tmu
   use gghh_d4h0l131, only: numerator_t3_diagram4 => numerator_t3
   use gghh_d4h0l132, only: numerator_t2_diagram4 => numerator_t2
   use gghh_d5h0l1, only: numerator_diagram5 => numerator_ninja
   use gghh_d5h0l121, only: numerator_tmu_diagram5 => numerator_tmu
   use gghh_d5h0l131, only: numerator_t3_diagram5 => numerator_t3
   use gghh_d5h0l132, only: numerator_t2_diagram5 => numerator_t2
   use gghh_d11h0l1, only: numerator_diagram11 => numerator_ninja
   use gghh_d11h0l121, only: numerator_tmu_diagram11 => numerator_tmu
   use gghh_d11h0l131, only: numerator_t3_diagram11 => numerator_t3
   use gghh_d11h0l132, only: numerator_t2_diagram11 => numerator_t2
   use gghh_d14h0l1, only: numerator_diagram14 => numerator_ninja
   use gghh_d14h0l121, only: numerator_tmu_diagram14 => numerator_tmu
   use gghh_d14h0l131, only: numerator_t3_diagram14 => numerator_t3
   use gghh_d14h0l132, only: numerator_t2_diagram14 => numerator_t2
   use gghh_d25h0l1, only: numerator_diagram25 => numerator_ninja
   use gghh_d25h0l121, only: numerator_tmu_diagram25 => numerator_tmu
   use gghh_d25h0l131, only: numerator_t3_diagram25 => numerator_t3
   use gghh_d25h0l132, only: numerator_t2_diagram25 => numerator_t2
   use gghh_d30h0l1, only: numerator_diagram30 => numerator_ninja
   use gghh_d30h0l121, only: numerator_tmu_diagram30 => numerator_tmu
   use gghh_d30h0l131, only: numerator_t3_diagram30 => numerator_t3
   use gghh_d30h0l132, only: numerator_t2_diagram30 => numerator_t2
   use gghh_d32h0l1, only: numerator_diagram32 => numerator_ninja
   use gghh_d32h0l121, only: numerator_tmu_diagram32 => numerator_tmu
   use gghh_d32h0l131, only: numerator_t3_diagram32 => numerator_t3
   use gghh_d32h0l132, only: numerator_t2_diagram32 => numerator_t2
   use gghh_d42h0l1, only: numerator_diagram42 => numerator_ninja
   use gghh_d42h0l121, only: numerator_tmu_diagram42 => numerator_tmu
   use gghh_d42h0l131, only: numerator_t3_diagram42 => numerator_t3
   use gghh_d42h0l132, only: numerator_t2_diagram42 => numerator_t2
   use gghh_d46h0l1, only: numerator_diagram46 => numerator_ninja
   use gghh_d46h0l121, only: numerator_tmu_diagram46 => numerator_tmu
   use gghh_d46h0l131, only: numerator_t3_diagram46 => numerator_t3
   use gghh_d46h0l132, only: numerator_t2_diagram46 => numerator_t2
   use gghh_d52h0l1, only: numerator_diagram52 => numerator_ninja
   use gghh_d52h0l121, only: numerator_tmu_diagram52 => numerator_tmu
   use gghh_d52h0l131, only: numerator_t3_diagram52 => numerator_t3
   use gghh_d52h0l132, only: numerator_t2_diagram52 => numerator_t2
   use gghh_d55h0l1, only: numerator_diagram55 => numerator_ninja
   use gghh_d55h0l121, only: numerator_tmu_diagram55 => numerator_tmu
   use gghh_d55h0l131, only: numerator_t3_diagram55 => numerator_t3
   use gghh_d55h0l132, only: numerator_t2_diagram55 => numerator_t2
   use gghh_d60h0l1, only: numerator_diagram60 => numerator_ninja
   use gghh_d60h0l121, only: numerator_tmu_diagram60 => numerator_tmu
   use gghh_d60h0l131, only: numerator_t3_diagram60 => numerator_t3
   use gghh_d60h0l132, only: numerator_t2_diagram60 => numerator_t2
   use gghh_d65h0l1, only: numerator_diagram65 => numerator_ninja
   use gghh_d65h0l121, only: numerator_tmu_diagram65 => numerator_tmu
   use gghh_d65h0l131, only: numerator_t3_diagram65 => numerator_t3
   use gghh_d65h0l132, only: numerator_t2_diagram65 => numerator_t2
   use gghh_d75h0l1, only: numerator_diagram75 => numerator_ninja
   use gghh_d75h0l121, only: numerator_tmu_diagram75 => numerator_tmu
   use gghh_d75h0l131, only: numerator_t3_diagram75 => numerator_t3
   use gghh_d75h0l132, only: numerator_t2_diagram75 => numerator_t2
   use gghh_d114h0l1, only: numerator_diagram114 => numerator_ninja
   use gghh_d114h0l121, only: numerator_tmu_diagram114 => numerator_tmu
   use gghh_d114h0l131, only: numerator_t3_diagram114 => numerator_t3
   use gghh_d114h0l132, only: numerator_t2_diagram114 => numerator_t2
   use gghh_d133h0l1, only: numerator_diagram133 => numerator_ninja
   use gghh_d133h0l121, only: numerator_tmu_diagram133 => numerator_tmu
   use gghh_d133h0l131, only: numerator_t3_diagram133 => numerator_t3
   use gghh_d133h0l132, only: numerator_t2_diagram133 => numerator_t2
   use gghh_d145h0l1, only: numerator_diagram145 => numerator_ninja
   use gghh_d145h0l121, only: numerator_tmu_diagram145 => numerator_tmu
   use gghh_d145h0l131, only: numerator_t3_diagram145 => numerator_t3
   use gghh_d145h0l132, only: numerator_t2_diagram145 => numerator_t2
   use gghh_d172h0l1, only: numerator_diagram172 => numerator_ninja
   use gghh_d172h0l121, only: numerator_tmu_diagram172 => numerator_tmu
   use gghh_d172h0l131, only: numerator_t3_diagram172 => numerator_t3
   use gghh_d172h0l132, only: numerator_t2_diagram172 => numerator_t2
   use gghh_d189h0l1, only: numerator_diagram189 => numerator_ninja
   use gghh_d189h0l121, only: numerator_tmu_diagram189 => numerator_tmu
   use gghh_d189h0l131, only: numerator_t3_diagram189 => numerator_t3
   use gghh_d189h0l132, only: numerator_t2_diagram189 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 8

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   complex(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = 0.0_ki_nin
   Vi(:,1) = real(-k3-k4, ki_nin)
   msq(2) = 0.0_ki_nin
   Vi(:,2) = real(-k3, ki_nin)
   msq(3) = 0.0_ki_nin
   Vi(:,3) = real(0, ki_nin)
   msq(4) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,4) = real(-k2, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(0.0_ki, ki_nin)
   s_mat(1,2) = real(mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(es12, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(0.0_ki, ki_nin)
   s_mat(2,3) = real(mdlMh**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-mdlMh**2+es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(0.0_ki, ki_nin)
   s_mat(3,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(-2.0_ki*mdlMh**2, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='3'>"
         end if
         call ninja_diagram(numerator_diagram3, numerator_t3_diagram3, numerato&
         &r_t2_diagram3, &
          &  numerator_tmu_diagram3, &
          & 4, 2, 2, (/2,3/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='4'>"
         end if
         call ninja_diagram(numerator_diagram4, numerator_t3_diagram4, numerato&
         &r_t2_diagram4, &
          &  numerator_tmu_diagram4, &
          & 4, 2, 2, (/1,2/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='5'>"
         end if
         call ninja_diagram(numerator_diagram5, numerator_t3_diagram5, numerato&
         &r_t2_diagram5, &
          &  numerator_tmu_diagram5, &
          & 4, 2, 2, (/1,3/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='11'>"
         end if
         call ninja_diagram(numerator_diagram11, numerator_t3_diagram11, numera&
         &tor_t2_diagram11, &
          &  numerator_tmu_diagram11, &
          & 4, 2, 4, (/2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='14'>"
         end if
         call ninja_diagram(numerator_diagram14, numerator_t3_diagram14, numera&
         &tor_t2_diagram14, &
          &  numerator_tmu_diagram14, &
          & 4, 2, 4, (/1,3/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='25'>"
         end if
         call ninja_diagram(numerator_diagram25, numerator_t3_diagram25, numera&
         &tor_t2_diagram25, &
          &  numerator_tmu_diagram25, &
          & 4, 2, 4, (/2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='30'>"
         end if
         call ninja_diagram(numerator_diagram30, numerator_t3_diagram30, numera&
         &tor_t2_diagram30, &
          &  numerator_tmu_diagram30, &
          & 4, 2, 2, (/1,3/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='32'>"
         end if
         call ninja_diagram(numerator_diagram32, numerator_t3_diagram32, numera&
         &tor_t2_diagram32, &
          &  numerator_tmu_diagram32, &
          & 4, 3, 6, (/1,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='42'>"
         end if
         call ninja_diagram(numerator_diagram42, numerator_t3_diagram42, numera&
         &tor_t2_diagram42, &
          &  numerator_tmu_diagram42, &
          & 4, 3, 6, (/1,2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='46'>"
         end if
         call ninja_diagram(numerator_diagram46, numerator_t3_diagram46, numera&
         &tor_t2_diagram46, &
          &  numerator_tmu_diagram46, &
          & 4, 3, 6, (/2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='52'>"
         end if
         call ninja_diagram(numerator_diagram52, numerator_t3_diagram52, numera&
         &tor_t2_diagram52, &
          &  numerator_tmu_diagram52, &
          & 4, 3, 4, (/1,2,3/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='55'>"
         end if
         call ninja_diagram(numerator_diagram55, numerator_t3_diagram55, numera&
         &tor_t2_diagram55, &
          &  numerator_tmu_diagram55, &
          & 4, 2, 4, (/2,3/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='60'>"
         end if
         call ninja_diagram(numerator_diagram60, numerator_t3_diagram60, numera&
         &tor_t2_diagram60, &
          &  numerator_tmu_diagram60, &
          & 4, 2, 4, (/1,2/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='65'>"
         end if
         call ninja_diagram(numerator_diagram65, numerator_t3_diagram65, numera&
         &tor_t2_diagram65, &
          &  numerator_tmu_diagram65, &
          & 4, 2, 4, (/3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='75'>"
         end if
         call ninja_diagram(numerator_diagram75, numerator_t3_diagram75, numera&
         &tor_t2_diagram75, &
          &  numerator_tmu_diagram75, &
          & 4, 2, 4, (/1,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='114'>"
         end if
         call ninja_diagram(numerator_diagram114, numerator_t3_diagram114, nume&
         &rator_t2_diagram114, &
          &  numerator_tmu_diagram114, &
          & 4, 3, 6, (/1,2,3/), &
          & Vi, s_mat, scale2, istop0, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='133'>"
         end if
         call ninja_diagram(numerator_diagram133, numerator_t3_diagram133, nume&
         &rator_t2_diagram133, &
          &  numerator_tmu_diagram133, &
          & 4, 3, 6, (/2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='145'>"
         end if
         call ninja_diagram(numerator_diagram145, numerator_t3_diagram145, nume&
         &rator_t2_diagram145, &
          &  numerator_tmu_diagram145, &
          & 4, 3, 6, (/1,2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='172'>"
         end if
         call ninja_diagram(numerator_diagram172, numerator_t3_diagram172, nume&
         &rator_t2_diagram172, &
          &  numerator_tmu_diagram172, &
          & 4, 3, 6, (/1,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='189'>"
         end if
         call ninja_diagram(numerator_diagram189, numerator_t3_diagram189, nume&
         &rator_t2_diagram189, &
          &  numerator_tmu_diagram189, &
          & 4, 4, 8, (/1,2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group4
!-----#] subroutine ninja_reduce_group4:
!-----#[ subroutine ninja_reduce_group5:
subroutine     ninja_reduce_group5(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d201h0l1, only: numerator_diagram201 => numerator_ninja
   use gghh_d201h0l121, only: numerator_tmu_diagram201 => numerator_tmu
   use gghh_d201h0l131, only: numerator_t3_diagram201 => numerator_t3
   use gghh_d201h0l132, only: numerator_t2_diagram201 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 6

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   complex(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = 0.0_ki_nin
   Vi(:,1) = real(-k4, ki_nin)
   msq(2) = 0.0_ki_nin
   Vi(:,2) = real(0, ki_nin)
   msq(3) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,3) = real(-k2, ki_nin)
   msq(4) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,4) = real(k3-k2, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(0.0_ki, ki_nin)
   s_mat(1,2) = real(mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(-es12+mdlMh**2-es23, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(0.0_ki, ki_nin)
   s_mat(2,3) = real(-mdlMh**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-mdlMh**2+es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(-2.0_ki*mdlMh**2, ki_nin)
   s_mat(3,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(-2.0_ki*mdlMh**2, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='201'>"
         end if
         call ninja_diagram(numerator_diagram201, numerator_t3_diagram201, nume&
         &rator_t2_diagram201, &
          &  numerator_tmu_diagram201, &
          & 4, 4, 6, (/1,2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group5
!-----#] subroutine ninja_reduce_group5:
!-----#[ subroutine ninja_reduce_group6:
subroutine     ninja_reduce_group6(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d8h0l1, only: numerator_diagram8 => numerator_ninja
   use gghh_d8h0l121, only: numerator_tmu_diagram8 => numerator_tmu
   use gghh_d8h0l131, only: numerator_t3_diagram8 => numerator_t3
   use gghh_d8h0l132, only: numerator_t2_diagram8 => numerator_t2
   use gghh_d28h0l1, only: numerator_diagram28 => numerator_ninja
   use gghh_d28h0l121, only: numerator_tmu_diagram28 => numerator_tmu
   use gghh_d28h0l131, only: numerator_t3_diagram28 => numerator_t3
   use gghh_d28h0l132, only: numerator_t2_diagram28 => numerator_t2
   use gghh_d38h0l1, only: numerator_diagram38 => numerator_ninja
   use gghh_d38h0l121, only: numerator_tmu_diagram38 => numerator_tmu
   use gghh_d38h0l131, only: numerator_t3_diagram38 => numerator_t3
   use gghh_d38h0l132, only: numerator_t2_diagram38 => numerator_t2
   use gghh_d50h0l1, only: numerator_diagram50 => numerator_ninja
   use gghh_d50h0l121, only: numerator_tmu_diagram50 => numerator_tmu
   use gghh_d50h0l131, only: numerator_t3_diagram50 => numerator_t3
   use gghh_d50h0l132, only: numerator_t2_diagram50 => numerator_t2
   use gghh_d121h0l1, only: numerator_diagram121 => numerator_ninja
   use gghh_d121h0l121, only: numerator_tmu_diagram121 => numerator_tmu
   use gghh_d121h0l131, only: numerator_t3_diagram121 => numerator_t3
   use gghh_d121h0l132, only: numerator_t2_diagram121 => numerator_t2
   use gghh_d157h0l1, only: numerator_diagram157 => numerator_ninja
   use gghh_d157h0l121, only: numerator_tmu_diagram157 => numerator_tmu
   use gghh_d157h0l131, only: numerator_t3_diagram157 => numerator_t3
   use gghh_d157h0l132, only: numerator_t2_diagram157 => numerator_t2
   use gghh_d179h0l1, only: numerator_diagram179 => numerator_ninja
   use gghh_d179h0l121, only: numerator_tmu_diagram179 => numerator_tmu
   use gghh_d179h0l131, only: numerator_t3_diagram179 => numerator_t3
   use gghh_d179h0l132, only: numerator_t2_diagram179 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 8

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   complex(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = 0.0_ki_nin
   Vi(:,1) = real(-k3-k4, ki_nin)
   msq(2) = 0.0_ki_nin
   Vi(:,2) = real(-k4, ki_nin)
   msq(3) = 0.0_ki_nin
   Vi(:,3) = real(0, ki_nin)
   msq(4) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,4) = real(-k2, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(0.0_ki, ki_nin)
   s_mat(1,2) = real(mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(es12, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(0.0_ki, ki_nin)
   s_mat(2,3) = real(mdlMh**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-es12+mdlMh**2-es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(0.0_ki, ki_nin)
   s_mat(3,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(-2.0_ki*mdlMh**2, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='8'>"
         end if
         call ninja_diagram(numerator_diagram8, numerator_t3_diagram8, numerato&
         &r_t2_diagram8, &
          &  numerator_tmu_diagram8, &
          & 4, 2, 4, (/2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='28'>"
         end if
         call ninja_diagram(numerator_diagram28, numerator_t3_diagram28, numera&
         &tor_t2_diagram28, &
          &  numerator_tmu_diagram28, &
          & 4, 2, 4, (/2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='38'>"
         end if
         call ninja_diagram(numerator_diagram38, numerator_t3_diagram38, numera&
         &tor_t2_diagram38, &
          &  numerator_tmu_diagram38, &
          & 4, 3, 6, (/1,2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='50'>"
         end if
         call ninja_diagram(numerator_diagram50, numerator_t3_diagram50, numera&
         &tor_t2_diagram50, &
          &  numerator_tmu_diagram50, &
          & 4, 3, 6, (/2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='121'>"
         end if
         call ninja_diagram(numerator_diagram121, numerator_t3_diagram121, nume&
         &rator_t2_diagram121, &
          &  numerator_tmu_diagram121, &
          & 4, 3, 6, (/2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='157'>"
         end if
         call ninja_diagram(numerator_diagram157, numerator_t3_diagram157, nume&
         &rator_t2_diagram157, &
          &  numerator_tmu_diagram157, &
          & 4, 3, 6, (/1,2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='179'>"
         end if
         call ninja_diagram(numerator_diagram179, numerator_t3_diagram179, nume&
         &rator_t2_diagram179, &
          &  numerator_tmu_diagram179, &
          & 4, 4, 8, (/1,2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group6
!-----#] subroutine ninja_reduce_group6:
!-----#[ subroutine ninja_reduce_group7:
subroutine     ninja_reduce_group7(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d37h0l1, only: numerator_diagram37 => numerator_ninja
   use gghh_d37h0l121, only: numerator_tmu_diagram37 => numerator_tmu
   use gghh_d37h0l131, only: numerator_t3_diagram37 => numerator_t3
   use gghh_d37h0l132, only: numerator_t2_diagram37 => numerator_t2
   use gghh_d162h0l1, only: numerator_diagram162 => numerator_ninja
   use gghh_d162h0l121, only: numerator_tmu_diagram162 => numerator_tmu
   use gghh_d162h0l131, only: numerator_t3_diagram162 => numerator_t3
   use gghh_d162h0l132, only: numerator_t2_diagram162 => numerator_t2
   use gghh_d176h0l1, only: numerator_diagram176 => numerator_ninja
   use gghh_d176h0l121, only: numerator_tmu_diagram176 => numerator_tmu
   use gghh_d176h0l131, only: numerator_t3_diagram176 => numerator_t3
   use gghh_d176h0l132, only: numerator_t2_diagram176 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 5

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   complex(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,1) = real(k3-k2+k4, ki_nin)
   msq(2) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,2) = real(-k2+k4, ki_nin)
   msq(3) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,3) = real(-k2, ki_nin)
   msq(4) = 0.0_ki_nin
   Vi(:,4) = real(0, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(-2.0_ki*mdlMh**2, ki_nin)
   s_mat(1,2) = real(-mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(es12-2.0_ki*mdlMh**2, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(-2.0_ki*mdlMh**2, ki_nin)
   s_mat(2,3) = real(-mdlMh**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-es12+mdlMh**2-es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(-2.0_ki*mdlMh**2, ki_nin)
   s_mat(3,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(0.0_ki, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='37'>"
         end if
         call ninja_diagram(numerator_diagram37, numerator_t3_diagram37, numera&
         &tor_t2_diagram37, &
          &  numerator_tmu_diagram37, &
          & 4, 3, 4, (/1,2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='162'>"
         end if
         call ninja_diagram(numerator_diagram162, numerator_t3_diagram162, nume&
         &rator_t2_diagram162, &
          &  numerator_tmu_diagram162, &
          & 4, 3, 4, (/1,2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='176'>"
         end if
         call ninja_diagram(numerator_diagram176, numerator_t3_diagram176, nume&
         &rator_t2_diagram176, &
          &  numerator_tmu_diagram176, &
          & 4, 4, 4, (/1,2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group7
!-----#] subroutine ninja_reduce_group7:
!-----#[ subroutine ninja_reduce_group8:
subroutine     ninja_reduce_group8(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d6h0l1, only: numerator_diagram6 => numerator_ninja
   use gghh_d6h0l121, only: numerator_tmu_diagram6 => numerator_tmu
   use gghh_d6h0l131, only: numerator_t3_diagram6 => numerator_t3
   use gghh_d6h0l132, only: numerator_t2_diagram6 => numerator_t2
   use gghh_d17h0l1, only: numerator_diagram17 => numerator_ninja
   use gghh_d17h0l121, only: numerator_tmu_diagram17 => numerator_tmu
   use gghh_d17h0l131, only: numerator_t3_diagram17 => numerator_t3
   use gghh_d17h0l132, only: numerator_t2_diagram17 => numerator_t2
   use gghh_d31h0l1, only: numerator_diagram31 => numerator_ninja
   use gghh_d31h0l121, only: numerator_tmu_diagram31 => numerator_tmu
   use gghh_d31h0l131, only: numerator_t3_diagram31 => numerator_t3
   use gghh_d31h0l132, only: numerator_t2_diagram31 => numerator_t2
   use gghh_d35h0l1, only: numerator_diagram35 => numerator_ninja
   use gghh_d35h0l121, only: numerator_tmu_diagram35 => numerator_tmu
   use gghh_d35h0l131, only: numerator_t3_diagram35 => numerator_t3
   use gghh_d35h0l132, only: numerator_t2_diagram35 => numerator_t2
   use gghh_d41h0l1, only: numerator_diagram41 => numerator_ninja
   use gghh_d41h0l121, only: numerator_tmu_diagram41 => numerator_tmu
   use gghh_d41h0l131, only: numerator_t3_diagram41 => numerator_t3
   use gghh_d41h0l132, only: numerator_t2_diagram41 => numerator_t2
   use gghh_d45h0l1, only: numerator_diagram45 => numerator_ninja
   use gghh_d45h0l121, only: numerator_tmu_diagram45 => numerator_tmu
   use gghh_d45h0l131, only: numerator_t3_diagram45 => numerator_t3
   use gghh_d45h0l132, only: numerator_t2_diagram45 => numerator_t2
   use gghh_d53h0l1, only: numerator_diagram53 => numerator_ninja
   use gghh_d53h0l121, only: numerator_tmu_diagram53 => numerator_tmu
   use gghh_d53h0l131, only: numerator_t3_diagram53 => numerator_t3
   use gghh_d53h0l132, only: numerator_t2_diagram53 => numerator_t2
   use gghh_d58h0l1, only: numerator_diagram58 => numerator_ninja
   use gghh_d58h0l121, only: numerator_tmu_diagram58 => numerator_tmu
   use gghh_d58h0l131, only: numerator_t3_diagram58 => numerator_t3
   use gghh_d58h0l132, only: numerator_t2_diagram58 => numerator_t2
   use gghh_d63h0l1, only: numerator_diagram63 => numerator_ninja
   use gghh_d63h0l121, only: numerator_tmu_diagram63 => numerator_tmu
   use gghh_d63h0l131, only: numerator_t3_diagram63 => numerator_t3
   use gghh_d63h0l132, only: numerator_t2_diagram63 => numerator_t2
   use gghh_d68h0l1, only: numerator_diagram68 => numerator_ninja
   use gghh_d68h0l121, only: numerator_tmu_diagram68 => numerator_tmu
   use gghh_d68h0l131, only: numerator_t3_diagram68 => numerator_t3
   use gghh_d68h0l132, only: numerator_t2_diagram68 => numerator_t2
   use gghh_d73h0l1, only: numerator_diagram73 => numerator_ninja
   use gghh_d73h0l121, only: numerator_tmu_diagram73 => numerator_tmu
   use gghh_d73h0l131, only: numerator_t3_diagram73 => numerator_t3
   use gghh_d73h0l132, only: numerator_t2_diagram73 => numerator_t2
   use gghh_d138h0l1, only: numerator_diagram138 => numerator_ninja
   use gghh_d138h0l121, only: numerator_tmu_diagram138 => numerator_tmu
   use gghh_d138h0l131, only: numerator_t3_diagram138 => numerator_t3
   use gghh_d138h0l132, only: numerator_t2_diagram138 => numerator_t2
   use gghh_d150h0l1, only: numerator_diagram150 => numerator_ninja
   use gghh_d150h0l121, only: numerator_tmu_diagram150 => numerator_tmu
   use gghh_d150h0l131, only: numerator_t3_diagram150 => numerator_t3
   use gghh_d150h0l132, only: numerator_t2_diagram150 => numerator_t2
   use gghh_d169h0l1, only: numerator_diagram169 => numerator_ninja
   use gghh_d169h0l121, only: numerator_tmu_diagram169 => numerator_tmu
   use gghh_d169h0l131, only: numerator_t3_diagram169 => numerator_t3
   use gghh_d169h0l132, only: numerator_t2_diagram169 => numerator_t2
   use gghh_d186h0l1, only: numerator_diagram186 => numerator_ninja
   use gghh_d186h0l121, only: numerator_tmu_diagram186 => numerator_tmu
   use gghh_d186h0l131, only: numerator_t3_diagram186 => numerator_t3
   use gghh_d186h0l132, only: numerator_t2_diagram186 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 5

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   complex(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,1) = real(k3-k2+k4, ki_nin)
   msq(2) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,2) = real(k3-k2, ki_nin)
   msq(3) = real(mdlMh,ki_nin)*cmplx(mdlMh,-mdlWh,ki_nin)
   Vi(:,3) = real(-k2, ki_nin)
   msq(4) = 0.0_ki_nin
   Vi(:,4) = real(0, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(-2.0_ki*mdlMh**2, ki_nin)
   s_mat(1,2) = real(-mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(es12-2.0_ki*mdlMh**2, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(-2.0_ki*mdlMh**2, ki_nin)
   s_mat(2,3) = real(-mdlMh**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-mdlMh**2+es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(-2.0_ki*mdlMh**2, ki_nin)
   s_mat(3,4) = real(-mdlMh**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(0.0_ki, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='6'>"
         end if
         call ninja_diagram(numerator_diagram6, numerator_t3_diagram6, numerato&
         &r_t2_diagram6, &
          &  numerator_tmu_diagram6, &
          & 4, 2, 2, (/1,3/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='17'>"
         end if
         call ninja_diagram(numerator_diagram17, numerator_t3_diagram17, numera&
         &tor_t2_diagram17, &
          &  numerator_tmu_diagram17, &
          & 4, 2, 0, (/1,3/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='31'>"
         end if
         call ninja_diagram(numerator_diagram31, numerator_t3_diagram31, numera&
         &tor_t2_diagram31, &
          &  numerator_tmu_diagram31, &
          & 4, 2, 2, (/1,3/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='35'>"
         end if
         call ninja_diagram(numerator_diagram35, numerator_t3_diagram35, numera&
         &tor_t2_diagram35, &
          &  numerator_tmu_diagram35, &
          & 4, 3, 4, (/1,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='41'>"
         end if
         call ninja_diagram(numerator_diagram41, numerator_t3_diagram41, numera&
         &tor_t2_diagram41, &
          &  numerator_tmu_diagram41, &
          & 4, 3, 4, (/1,2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='45'>"
         end if
         call ninja_diagram(numerator_diagram45, numerator_t3_diagram45, numera&
         &tor_t2_diagram45, &
          &  numerator_tmu_diagram45, &
          & 4, 3, 4, (/2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='53'>"
         end if
         call ninja_diagram(numerator_diagram53, numerator_t3_diagram53, numera&
         &tor_t2_diagram53, &
          &  numerator_tmu_diagram53, &
          & 4, 3, 2, (/1,2,3/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='58'>"
         end if
         call ninja_diagram(numerator_diagram58, numerator_t3_diagram58, numera&
         &tor_t2_diagram58, &
          &  numerator_tmu_diagram58, &
          & 4, 2, 0, (/2,3/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='63'>"
         end if
         call ninja_diagram(numerator_diagram63, numerator_t3_diagram63, numera&
         &tor_t2_diagram63, &
          &  numerator_tmu_diagram63, &
          & 4, 2, 0, (/1,2/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='68'>"
         end if
         call ninja_diagram(numerator_diagram68, numerator_t3_diagram68, numera&
         &tor_t2_diagram68, &
          &  numerator_tmu_diagram68, &
          & 4, 2, 2, (/1,2/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='73'>"
         end if
         call ninja_diagram(numerator_diagram73, numerator_t3_diagram73, numera&
         &tor_t2_diagram73, &
          &  numerator_tmu_diagram73, &
          & 4, 2, 2, (/2,3/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='138'>"
         end if
         call ninja_diagram(numerator_diagram138, numerator_t3_diagram138, nume&
         &rator_t2_diagram138, &
          &  numerator_tmu_diagram138, &
          & 4, 3, 4, (/2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='150'>"
         end if
         call ninja_diagram(numerator_diagram150, numerator_t3_diagram150, nume&
         &rator_t2_diagram150, &
          &  numerator_tmu_diagram150, &
          & 4, 3, 4, (/1,2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='169'>"
         end if
         call ninja_diagram(numerator_diagram169, numerator_t3_diagram169, nume&
         &rator_t2_diagram169, &
          &  numerator_tmu_diagram169, &
          & 4, 3, 4, (/1,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='186'>"
         end if
         call ninja_diagram(numerator_diagram186, numerator_t3_diagram186, nume&
         &rator_t2_diagram186, &
          &  numerator_tmu_diagram186, &
          & 4, 4, 4, (/1,2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", +real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", +real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", +real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", +real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group8
!-----#] subroutine ninja_reduce_group8:
!-----#[ subroutine ninja_reduce_group9:
subroutine     ninja_reduce_group9(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d105h0l1, only: numerator_diagram105 => numerator_ninja
   use gghh_d105h0l121, only: numerator_tmu_diagram105 => numerator_tmu
   use gghh_d105h0l131, only: numerator_t3_diagram105 => numerator_t3
   use gghh_d105h0l132, only: numerator_t2_diagram105 => numerator_t2
   use gghh_d136h0l1, only: numerator_diagram136 => numerator_ninja
   use gghh_d136h0l121, only: numerator_tmu_diagram136 => numerator_tmu
   use gghh_d136h0l131, only: numerator_t3_diagram136 => numerator_t3
   use gghh_d136h0l132, only: numerator_t2_diagram136 => numerator_t2
   use gghh_d148h0l1, only: numerator_diagram148 => numerator_ninja
   use gghh_d148h0l121, only: numerator_tmu_diagram148 => numerator_tmu
   use gghh_d148h0l131, only: numerator_t3_diagram148 => numerator_t3
   use gghh_d148h0l132, only: numerator_t2_diagram148 => numerator_t2
   use gghh_d199h0l1, only: numerator_diagram199 => numerator_ninja
   use gghh_d199h0l121, only: numerator_tmu_diagram199 => numerator_tmu
   use gghh_d199h0l131, only: numerator_t3_diagram199 => numerator_t3
   use gghh_d199h0l132, only: numerator_t2_diagram199 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 4

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   real(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,1) = real(-k2+k4, ki_nin)
   msq(2) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,2) = real(-k2, ki_nin)
   msq(3) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,3) = real(0, ki_nin)
   msq(4) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,4) = real(-k3, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(1,2) = real(-2.0_ki*mdlMT**2+mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(-2.0_ki*mdlMT**2-es12+2.0_ki*mdlMh**2-es23, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(2,3) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-2.0_ki*mdlMT**2+es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(3,4) = real(-2.0_ki*mdlMT**2+mdlMh**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(-2.0_ki*mdlMT**2, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='105'>"
         end if
         call ninja_diagram(numerator_diagram105, numerator_t3_diagram105, nume&
         &rator_t2_diagram105, &
          &  numerator_tmu_diagram105, &
          & 4, 2, 2, (/2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='136'>"
         end if
         call ninja_diagram(numerator_diagram136, numerator_t3_diagram136, nume&
         &rator_t2_diagram136, &
          &  numerator_tmu_diagram136, &
          & 4, 3, 3, (/2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='148'>"
         end if
         call ninja_diagram(numerator_diagram148, numerator_t3_diagram148, nume&
         &rator_t2_diagram148, &
          &  numerator_tmu_diagram148, &
          & 4, 3, 3, (/1,2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='199'>"
         end if
         call ninja_diagram(numerator_diagram199, numerator_t3_diagram199, nume&
         &rator_t2_diagram199, &
          &  numerator_tmu_diagram199, &
          & 4, 4, 4, (/1,2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group9
!-----#] subroutine ninja_reduce_group9:
!-----#[ subroutine ninja_reduce_group10:
subroutine     ninja_reduce_group10(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d187h0l1, only: numerator_diagram187 => numerator_ninja
   use gghh_d187h0l121, only: numerator_tmu_diagram187 => numerator_tmu
   use gghh_d187h0l131, only: numerator_t3_diagram187 => numerator_t3
   use gghh_d187h0l132, only: numerator_t2_diagram187 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 4

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   real(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,1) = real(-k3-k4, ki_nin)
   msq(2) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,2) = real(-k3, ki_nin)
   msq(3) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,3) = real(0, ki_nin)
   msq(4) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,4) = real(-k2, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(1,2) = real(-2.0_ki*mdlMT**2+mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(-2.0_ki*mdlMT**2+es12, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(2,3) = real(-2.0_ki*mdlMT**2+mdlMh**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-2.0_ki*mdlMT**2+es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(3,4) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(-2.0_ki*mdlMT**2, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='187'>"
         end if
         call ninja_diagram(numerator_diagram187, numerator_t3_diagram187, nume&
         &rator_t2_diagram187, &
          &  numerator_tmu_diagram187, &
          & 4, 4, 4, (/1,2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group10
!-----#] subroutine ninja_reduce_group10:
!-----#[ subroutine ninja_reduce_group11:
subroutine     ninja_reduce_group11(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_kinematics
   use gghh_model
   use gghh_d16h0l1, only: numerator_diagram16 => numerator_ninja
   use gghh_d16h0l121, only: numerator_tmu_diagram16 => numerator_tmu
   use gghh_d16h0l131, only: numerator_t3_diagram16 => numerator_t3
   use gghh_d16h0l132, only: numerator_t2_diagram16 => numerator_t2
   use gghh_d57h0l1, only: numerator_diagram57 => numerator_ninja
   use gghh_d57h0l121, only: numerator_tmu_diagram57 => numerator_tmu
   use gghh_d57h0l131, only: numerator_t3_diagram57 => numerator_t3
   use gghh_d57h0l132, only: numerator_t2_diagram57 => numerator_t2
   use gghh_d62h0l1, only: numerator_diagram62 => numerator_ninja
   use gghh_d62h0l121, only: numerator_tmu_diagram62 => numerator_tmu
   use gghh_d62h0l131, only: numerator_t3_diagram62 => numerator_t3
   use gghh_d62h0l132, only: numerator_t2_diagram62 => numerator_t2
   use gghh_d96h0l1, only: numerator_diagram96 => numerator_ninja
   use gghh_d96h0l121, only: numerator_tmu_diagram96 => numerator_tmu
   use gghh_d96h0l131, only: numerator_t3_diagram96 => numerator_t3
   use gghh_d96h0l132, only: numerator_t2_diagram96 => numerator_t2
   use gghh_d124h0l1, only: numerator_diagram124 => numerator_ninja
   use gghh_d124h0l121, only: numerator_tmu_diagram124 => numerator_tmu
   use gghh_d124h0l131, only: numerator_t3_diagram124 => numerator_t3
   use gghh_d124h0l132, only: numerator_t2_diagram124 => numerator_t2
   use gghh_d160h0l1, only: numerator_diagram160 => numerator_ninja
   use gghh_d160h0l121, only: numerator_tmu_diagram160 => numerator_tmu
   use gghh_d160h0l131, only: numerator_t3_diagram160 => numerator_t3
   use gghh_d160h0l132, only: numerator_t2_diagram160 => numerator_t2
   use gghh_d170h0l1, only: numerator_diagram170 => numerator_ninja
   use gghh_d170h0l121, only: numerator_tmu_diagram170 => numerator_tmu
   use gghh_d170h0l131, only: numerator_t3_diagram170 => numerator_t3
   use gghh_d170h0l132, only: numerator_t2_diagram170 => numerator_t2
   use gghh_d177h0l1, only: numerator_diagram177 => numerator_ninja
   use gghh_d177h0l121, only: numerator_tmu_diagram177 => numerator_tmu
   use gghh_d177h0l131, only: numerator_t3_diagram177 => numerator_t3
   use gghh_d177h0l132, only: numerator_t2_diagram177 => numerator_t2
   use gghh_globalsl1, only: epspow

   implicit none
   real(ki_nin), intent(in) :: scale2
   complex(ki_nin), dimension(-2:0), intent(out) :: tot
   complex(ki_nin), intent(out) :: totr
   logical, intent(out) :: ok

   complex(ki_nin), dimension(-2:0) :: acc
   complex(ki_nin) :: accr
   integer(c_int) :: acc_ok

   integer :: istopm, istop0

   integer, parameter :: effective_group_rank = 4

   !-----------#[ invariants for ninja:
   real(ki_nin), dimension(4,4) :: s_mat
   !-----------#] initialize invariants:
   real(ki_nin), dimension(4) :: msq
   real(ki_nin), dimension(4,4) :: Vi

   ok = .true.

   if (ninja_test.eq.1) then
      istopm = 1
      istop0 = 1
   else
      istopm = ninja_istop
      istop0 = max(2,ninja_istop)
   end if
   msq(1) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,1) = real(-k3-k4, ki_nin)
   msq(2) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,2) = real(-k4, ki_nin)
   msq(3) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,3) = real(0, ki_nin)
   msq(4) = real(mdlMT*mdlMT, ki_nin)
   Vi(:,4) = real(-k2, ki_nin)
   !-----------#[ initialize invariants:
   s_mat(1,1) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(1,2) = real(-2.0_ki*mdlMT**2+mdlMh**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(-2.0_ki*mdlMT**2+es12, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(2,3) = real(-2.0_ki*mdlMT**2+mdlMh**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-2.0_ki*mdlMT**2-es12+2.0_ki*mdlMh**2-es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(3,4) = real(-2.0_ki*mdlMT**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(-2.0_ki*mdlMT**2, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='16'>"
         end if
         call ninja_diagram(numerator_diagram16, numerator_t3_diagram16, numera&
         &tor_t2_diagram16, &
          &  numerator_tmu_diagram16, &
          & 4, 2, 2, (/1,3/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot =  + acc
         totr =  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='57'>"
         end if
         call ninja_diagram(numerator_diagram57, numerator_t3_diagram57, numera&
         &tor_t2_diagram57, &
          &  numerator_tmu_diagram57, &
          & 4, 2, 2, (/1,2/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='62'>"
         end if
         call ninja_diagram(numerator_diagram62, numerator_t3_diagram62, numera&
         &tor_t2_diagram62, &
          &  numerator_tmu_diagram62, &
          & 4, 2, 2, (/2,3/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='96'>"
         end if
         call ninja_diagram(numerator_diagram96, numerator_t3_diagram96, numera&
         &tor_t2_diagram96, &
          &  numerator_tmu_diagram96, &
          & 4, 2, 2, (/2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='124'>"
         end if
         call ninja_diagram(numerator_diagram124, numerator_t3_diagram124, nume&
         &rator_t2_diagram124, &
          &  numerator_tmu_diagram124, &
          & 4, 3, 3, (/2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='160'>"
         end if
         call ninja_diagram(numerator_diagram160, numerator_t3_diagram160, nume&
         &rator_t2_diagram160, &
          &  numerator_tmu_diagram160, &
          & 4, 3, 3, (/1,2,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='170'>"
         end if
         call ninja_diagram(numerator_diagram170, numerator_t3_diagram170, nume&
         &rator_t2_diagram170, &
          &  numerator_tmu_diagram170, &
          & 4, 3, 3, (/1,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='177'>"
         end if
         call ninja_diagram(numerator_diagram177, numerator_t3_diagram177, nume&
         &rator_t2_diagram177, &
          &  numerator_tmu_diagram177, &
          & 4, 4, 4, (/1,2,3,4/), &
          & Vi, msq, s_mat, scale2, istopm, &
          & acc, accr, acc_ok)
            ok = ok .and. (acc_ok.eq.NINJA_SUCCESS)
         if(debug_nlo_diagrams) then
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-finite' re='", -real(acc(0), ki), &
               & "' im='", aimag(acc(0)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-single' re='", -real(acc(-1), ki), &
               & "' im='", aimag(acc(-1)), "'/>"
            write(logfile,'(A30,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-double' re='", -real(acc(-2), ki), &
               & "' im='", aimag(acc(-2)), "'/>"
            write(logfile,'(A32,E24.16,A6,E24.16,A3)') &
               & "<result kind='nlo-rational' re='", -real(accr, ki), &
               & "' im='", aimag(accr), "'/>"
            if(ok) then
               write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
            else
               write(logfile,'(A29)') "<flag name='ok' status='no'/>"
            end if
            write(logfile,*) "</diagram>"
         end if
         tot = tot  + acc
         totr = totr  + accr
      !------#] sum over reduction of single diagrams:
end subroutine ninja_reduce_group11
!-----#] subroutine ninja_reduce_group11:
!---#] reduce groups with ninja:
end module gghh_ninjah0
