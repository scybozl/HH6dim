!
module     gghh_smehc_ninjah0
   ! This file has been generated for ninja
   use ninjago_module, only: ki_nin
   use gghh_smehc_config
   implicit none
   private
   public :: ninja_reduce_group0
   public :: ninja_reduce_group1
   public :: ninja_reduce_group2
contains
!---#[ reduce groups with ninja:
!-----#[ subroutine ninja_reduce_group0:
subroutine     ninja_reduce_group0(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_smehc_kinematics
   use gghh_smehc_model
   use gghh_smehc_d3h0l1, only: numerator_diagram3 => numerator_ninja
   use gghh_smehc_d3h0l121, only: numerator_tmu_diagram3 => numerator_tmu
   use gghh_smehc_d3h0l131, only: numerator_t3_diagram3 => numerator_t3
   use gghh_smehc_d3h0l132, only: numerator_t2_diagram3 => numerator_t2
   use gghh_smehc_d8h0l1, only: numerator_diagram8 => numerator_ninja
   use gghh_smehc_d8h0l121, only: numerator_tmu_diagram8 => numerator_tmu
   use gghh_smehc_d8h0l131, only: numerator_t3_diagram8 => numerator_t3
   use gghh_smehc_d8h0l132, only: numerator_t2_diagram8 => numerator_t2
   use gghh_smehc_d10h0l1, only: numerator_diagram10 => numerator_ninja
   use gghh_smehc_d10h0l121, only: numerator_tmu_diagram10 => numerator_tmu
   use gghh_smehc_d10h0l131, only: numerator_t3_diagram10 => numerator_t3
   use gghh_smehc_d10h0l132, only: numerator_t2_diagram10 => numerator_t2
   use gghh_smehc_d13h0l1, only: numerator_diagram13 => numerator_ninja
   use gghh_smehc_d13h0l121, only: numerator_tmu_diagram13 => numerator_tmu
   use gghh_smehc_d13h0l131, only: numerator_t3_diagram13 => numerator_t3
   use gghh_smehc_d13h0l132, only: numerator_t2_diagram13 => numerator_t2
   use gghh_smehc_d33h0l1, only: numerator_diagram33 => numerator_ninja
   use gghh_smehc_d33h0l121, only: numerator_tmu_diagram33 => numerator_tmu
   use gghh_smehc_d33h0l131, only: numerator_t3_diagram33 => numerator_t3
   use gghh_smehc_d33h0l132, only: numerator_t2_diagram33 => numerator_t2
   use gghh_smehc_d36h0l1, only: numerator_diagram36 => numerator_ninja
   use gghh_smehc_d36h0l121, only: numerator_tmu_diagram36 => numerator_tmu
   use gghh_smehc_d36h0l131, only: numerator_t3_diagram36 => numerator_t3
   use gghh_smehc_d36h0l132, only: numerator_t2_diagram36 => numerator_t2
   use gghh_smehc_d40h0l1, only: numerator_diagram40 => numerator_ninja
   use gghh_smehc_d40h0l121, only: numerator_tmu_diagram40 => numerator_tmu
   use gghh_smehc_d40h0l131, only: numerator_t3_diagram40 => numerator_t3
   use gghh_smehc_d40h0l132, only: numerator_t2_diagram40 => numerator_t2
   use gghh_smehc_globalsl1, only: epspow

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
   s_mat(1,2) = real(mH**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(-es12+2.0_ki*mH**2-es23, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(0.0_ki, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(0.0_ki, ki_nin)
   s_mat(2,3) = real(0.0_ki, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(0.0_ki, ki_nin)
   s_mat(3,4) = real(mH**2, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(0.0_ki, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='3'>"
         end if
         call ninja_diagram(numerator_diagram3, numerator_t3_diagram3, numerato&
         &r_t2_diagram3, &
          &  numerator_tmu_diagram3, &
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
         tot =  + acc
         totr =  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='8'>"
         end if
         call ninja_diagram(numerator_diagram8, numerator_t3_diagram8, numerato&
         &r_t2_diagram8, &
          &  numerator_tmu_diagram8, &
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
            write(logfile,*) "<diagram index='10'>"
         end if
         call ninja_diagram(numerator_diagram10, numerator_t3_diagram10, numera&
         &tor_t2_diagram10, &
          &  numerator_tmu_diagram10, &
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
            write(logfile,*) "<diagram index='13'>"
         end if
         call ninja_diagram(numerator_diagram13, numerator_t3_diagram13, numera&
         &tor_t2_diagram13, &
          &  numerator_tmu_diagram13, &
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
            write(logfile,*) "<diagram index='33'>"
         end if
         call ninja_diagram(numerator_diagram33, numerator_t3_diagram33, numera&
         &tor_t2_diagram33, &
          &  numerator_tmu_diagram33, &
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
            write(logfile,*) "<diagram index='36'>"
         end if
         call ninja_diagram(numerator_diagram36, numerator_t3_diagram36, numera&
         &tor_t2_diagram36, &
          &  numerator_tmu_diagram36, &
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
end subroutine ninja_reduce_group0
!-----#] subroutine ninja_reduce_group0:
!-----#[ subroutine ninja_reduce_group1:
subroutine     ninja_reduce_group1(scale2,tot,totr,ok)
   use iso_c_binding, only: c_ptr, c_loc, c_int
   use ninjago_module
   use gghh_smehc_kinematics
   use gghh_smehc_model
   use gghh_smehc_d1h0l1, only: numerator_diagram1 => numerator_ninja
   use gghh_smehc_d1h0l121, only: numerator_tmu_diagram1 => numerator_tmu
   use gghh_smehc_d1h0l131, only: numerator_t3_diagram1 => numerator_t3
   use gghh_smehc_d1h0l132, only: numerator_t2_diagram1 => numerator_t2
   use gghh_smehc_d2h0l1, only: numerator_diagram2 => numerator_ninja
   use gghh_smehc_d2h0l121, only: numerator_tmu_diagram2 => numerator_tmu
   use gghh_smehc_d2h0l131, only: numerator_t3_diagram2 => numerator_t3
   use gghh_smehc_d2h0l132, only: numerator_t2_diagram2 => numerator_t2
   use gghh_smehc_d4h0l1, only: numerator_diagram4 => numerator_ninja
   use gghh_smehc_d4h0l121, only: numerator_tmu_diagram4 => numerator_tmu
   use gghh_smehc_d4h0l131, only: numerator_t3_diagram4 => numerator_t3
   use gghh_smehc_d4h0l132, only: numerator_t2_diagram4 => numerator_t2
   use gghh_smehc_d7h0l1, only: numerator_diagram7 => numerator_ninja
   use gghh_smehc_d7h0l121, only: numerator_tmu_diagram7 => numerator_tmu
   use gghh_smehc_d7h0l131, only: numerator_t3_diagram7 => numerator_t3
   use gghh_smehc_d7h0l132, only: numerator_t2_diagram7 => numerator_t2
   use gghh_smehc_d9h0l1, only: numerator_diagram9 => numerator_ninja
   use gghh_smehc_d9h0l121, only: numerator_tmu_diagram9 => numerator_tmu
   use gghh_smehc_d9h0l131, only: numerator_t3_diagram9 => numerator_t3
   use gghh_smehc_d9h0l132, only: numerator_t2_diagram9 => numerator_t2
   use gghh_smehc_d11h0l1, only: numerator_diagram11 => numerator_ninja
   use gghh_smehc_d11h0l121, only: numerator_tmu_diagram11 => numerator_tmu
   use gghh_smehc_d11h0l131, only: numerator_t3_diagram11 => numerator_t3
   use gghh_smehc_d11h0l132, only: numerator_t2_diagram11 => numerator_t2
   use gghh_smehc_d12h0l1, only: numerator_diagram12 => numerator_ninja
   use gghh_smehc_d12h0l121, only: numerator_tmu_diagram12 => numerator_tmu
   use gghh_smehc_d12h0l131, only: numerator_t3_diagram12 => numerator_t3
   use gghh_smehc_d12h0l132, only: numerator_t2_diagram12 => numerator_t2
   use gghh_smehc_d14h0l1, only: numerator_diagram14 => numerator_ninja
   use gghh_smehc_d14h0l121, only: numerator_tmu_diagram14 => numerator_tmu
   use gghh_smehc_d14h0l131, only: numerator_t3_diagram14 => numerator_t3
   use gghh_smehc_d14h0l132, only: numerator_t2_diagram14 => numerator_t2
   use gghh_smehc_d17h0l1, only: numerator_diagram17 => numerator_ninja
   use gghh_smehc_d17h0l121, only: numerator_tmu_diagram17 => numerator_tmu
   use gghh_smehc_d17h0l131, only: numerator_t3_diagram17 => numerator_t3
   use gghh_smehc_d17h0l132, only: numerator_t2_diagram17 => numerator_t2
   use gghh_smehc_d21h0l1, only: numerator_diagram21 => numerator_ninja
   use gghh_smehc_d21h0l121, only: numerator_tmu_diagram21 => numerator_tmu
   use gghh_smehc_d21h0l131, only: numerator_t3_diagram21 => numerator_t3
   use gghh_smehc_d21h0l132, only: numerator_t2_diagram21 => numerator_t2
   use gghh_smehc_d34h0l1, only: numerator_diagram34 => numerator_ninja
   use gghh_smehc_d34h0l121, only: numerator_tmu_diagram34 => numerator_tmu
   use gghh_smehc_d34h0l131, only: numerator_t3_diagram34 => numerator_t3
   use gghh_smehc_d34h0l132, only: numerator_t2_diagram34 => numerator_t2
   use gghh_smehc_d35h0l1, only: numerator_diagram35 => numerator_ninja
   use gghh_smehc_d35h0l121, only: numerator_tmu_diagram35 => numerator_tmu
   use gghh_smehc_d35h0l131, only: numerator_t3_diagram35 => numerator_t3
   use gghh_smehc_d35h0l132, only: numerator_t2_diagram35 => numerator_t2
   use gghh_smehc_d37h0l1, only: numerator_diagram37 => numerator_ninja
   use gghh_smehc_d37h0l121, only: numerator_tmu_diagram37 => numerator_tmu
   use gghh_smehc_d37h0l131, only: numerator_t3_diagram37 => numerator_t3
   use gghh_smehc_d37h0l132, only: numerator_t2_diagram37 => numerator_t2
   use gghh_smehc_d39h0l1, only: numerator_diagram39 => numerator_ninja
   use gghh_smehc_d39h0l121, only: numerator_tmu_diagram39 => numerator_tmu
   use gghh_smehc_d39h0l131, only: numerator_t3_diagram39 => numerator_t3
   use gghh_smehc_d39h0l132, only: numerator_t2_diagram39 => numerator_t2
   use gghh_smehc_globalsl1, only: epspow

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
   s_mat(1,2) = real(mH**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(es12, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(0.0_ki, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(0.0_ki, ki_nin)
   s_mat(2,3) = real(mH**2, ki_nin)
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
            write(logfile,*) "<diagram index='2'>"
         end if
         call ninja_diagram(numerator_diagram2, numerator_t3_diagram2, numerato&
         &r_t2_diagram2, &
          &  numerator_tmu_diagram2, &
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
            write(logfile,*) "<diagram index='4'>"
         end if
         call ninja_diagram(numerator_diagram4, numerator_t3_diagram4, numerato&
         &r_t2_diagram4, &
          &  numerator_tmu_diagram4, &
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
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='9'>"
         end if
         call ninja_diagram(numerator_diagram9, numerator_t3_diagram9, numerato&
         &r_t2_diagram9, &
          &  numerator_tmu_diagram9, &
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
            write(logfile,*) "<diagram index='12'>"
         end if
         call ninja_diagram(numerator_diagram12, numerator_t3_diagram12, numera&
         &tor_t2_diagram12, &
          &  numerator_tmu_diagram12, &
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
            write(logfile,*) "<diagram index='14'>"
         end if
         call ninja_diagram(numerator_diagram14, numerator_t3_diagram14, numera&
         &tor_t2_diagram14, &
          &  numerator_tmu_diagram14, &
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
            write(logfile,*) "<diagram index='17'>"
         end if
         call ninja_diagram(numerator_diagram17, numerator_t3_diagram17, numera&
         &tor_t2_diagram17, &
          &  numerator_tmu_diagram17, &
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
            write(logfile,*) "<diagram index='21'>"
         end if
         call ninja_diagram(numerator_diagram21, numerator_t3_diagram21, numera&
         &tor_t2_diagram21, &
          &  numerator_tmu_diagram21, &
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
         tot = tot  + acc
         totr = totr  + accr
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='34'>"
         end if
         call ninja_diagram(numerator_diagram34, numerator_t3_diagram34, numera&
         &tor_t2_diagram34, &
          &  numerator_tmu_diagram34, &
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
            write(logfile,*) "<diagram index='35'>"
         end if
         call ninja_diagram(numerator_diagram35, numerator_t3_diagram35, numera&
         &tor_t2_diagram35, &
          &  numerator_tmu_diagram35, &
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
            write(logfile,*) "<diagram index='37'>"
         end if
         call ninja_diagram(numerator_diagram37, numerator_t3_diagram37, numera&
         &tor_t2_diagram37, &
          &  numerator_tmu_diagram37, &
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
            write(logfile,*) "<diagram index='39'>"
         end if
         call ninja_diagram(numerator_diagram39, numerator_t3_diagram39, numera&
         &tor_t2_diagram39, &
          &  numerator_tmu_diagram39, &
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
   use gghh_smehc_kinematics
   use gghh_smehc_model
   use gghh_smehc_d38h0l1, only: numerator_diagram38 => numerator_ninja
   use gghh_smehc_d38h0l121, only: numerator_tmu_diagram38 => numerator_tmu
   use gghh_smehc_d38h0l131, only: numerator_t3_diagram38 => numerator_t3
   use gghh_smehc_d38h0l132, only: numerator_t2_diagram38 => numerator_t2
   use gghh_smehc_globalsl1, only: epspow

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
   s_mat(1,2) = real(mH**2, ki_nin)
   s_mat(2,1) = s_mat(1,2)
   s_mat(1,3) = real(es12, ki_nin)
   s_mat(3,1) = s_mat(1,3)
   s_mat(1,4) = real(0.0_ki, ki_nin)
   s_mat(4,1) = s_mat(1,4)
   s_mat(2,2) = real(0.0_ki, ki_nin)
   s_mat(2,3) = real(mH**2, ki_nin)
   s_mat(3,2) = s_mat(2,3)
   s_mat(2,4) = real(-es12+2.0_ki*mH**2-es23, ki_nin)
   s_mat(4,2) = s_mat(2,4)
   s_mat(3,3) = real(0.0_ki, ki_nin)
   s_mat(3,4) = real(0.0_ki, ki_nin)
   s_mat(4,3) = s_mat(3,4)
   s_mat(4,4) = real(0.0_ki, ki_nin)
   !-----------#] initialize invariants


      !------#[ sum over reduction of single diagrams:
         if(debug_nlo_diagrams) then
            write(logfile,*) "<diagram index='38'>"
         end if
         call ninja_diagram(numerator_diagram38, numerator_t3_diagram38, numera&
         &tor_t2_diagram38, &
          &  numerator_tmu_diagram38, &
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
end subroutine ninja_reduce_group2
!-----#] subroutine ninja_reduce_group2:
!---#] reduce groups with ninja:
end module gghh_smehc_ninjah0
