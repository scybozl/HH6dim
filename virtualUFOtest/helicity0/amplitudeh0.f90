module    gghh_amplitudeh0
   use gghh_config, only: ki, &
       & reduction_interoperation
   use gghh_color, only: numcs
   use gghh_groups
   use ninjago_module, only: ki_nin
   use gghh_ninjah0
   
   implicit none
   private

   public :: finite_renormalisation, samplitude
contains
!---#[ function finite_renormalisation:
   function     finite_renormalisation(scale2) result(amp)
      use gghh_util, only: square
      use gghh_color, only: CF, CA
      use gghh_kinematics, only: &
      & num_light_quarks, num_gluons
      use gghh_diagramsh0l0, only: amplitudel0 => amplitude
      implicit none
      real(ki), intent(in) :: scale2
      real(ki) :: amp
      amp = 0.0_ki
   end function finite_renormalisation
   !---#] function finite_renormalisation:

   !---#[ function samplitude:
   function     samplitude(scale2,ok,rational2,opt_amp0,opt_perm)
      use gghh_config, only: include_eps_terms, include_eps2_terms, &
      & logfile, debug_nlo_diagrams
      use gghh_globalsl1, only: amp0,perm, use_perm, epspow
      use gghh_globalsh0, &
     & only: init_lo, rat2
      use gghh_abbrevd195h0, only: init_abbrevd195 => init_abbrev
      use gghh_abbrevd1h0, only: init_abbrevd1 => init_abbrev
      use gghh_abbrevd2h0, only: init_abbrevd2 => init_abbrev
      use gghh_abbrevd10h0, only: init_abbrevd10 => init_abbrev
      use gghh_abbrevd24h0, only: init_abbrevd24 => init_abbrev
      use gghh_abbrevd33h0, only: init_abbrevd33 => init_abbrev
      use gghh_abbrevd40h0, only: init_abbrevd40 => init_abbrev
      use gghh_abbrevd44h0, only: init_abbrevd44 => init_abbrev
      use gghh_abbrevd132h0, only: init_abbrevd132 => init_abbrev
      use gghh_abbrevd144h0, only: init_abbrevd144 => init_abbrev
      use gghh_abbrevd168h0, only: init_abbrevd168 => init_abbrev
      use gghh_abbrevd185h0, only: init_abbrevd185 => init_abbrev
      use gghh_abbrevd7h0, only: init_abbrevd7 => init_abbrev
      use gghh_abbrevd27h0, only: init_abbrevd27 => init_abbrev
      use gghh_abbrevd36h0, only: init_abbrevd36 => init_abbrev
      use gghh_abbrevd48h0, only: init_abbrevd48 => init_abbrev
      use gghh_abbrevd120h0, only: init_abbrevd120 => init_abbrev
      use gghh_abbrevd156h0, only: init_abbrevd156 => init_abbrev
      use gghh_abbrevd175h0, only: init_abbrevd175 => init_abbrev
      use gghh_abbrevd49h0, only: init_abbrevd49 => init_abbrev
      use gghh_abbrevd126h0, only: init_abbrevd126 => init_abbrev
      use gghh_abbrevd196h0, only: init_abbrevd196 => init_abbrev
      use gghh_abbrevd3h0, only: init_abbrevd3 => init_abbrev
      use gghh_abbrevd4h0, only: init_abbrevd4 => init_abbrev
      use gghh_abbrevd5h0, only: init_abbrevd5 => init_abbrev
      use gghh_abbrevd11h0, only: init_abbrevd11 => init_abbrev
      use gghh_abbrevd14h0, only: init_abbrevd14 => init_abbrev
      use gghh_abbrevd25h0, only: init_abbrevd25 => init_abbrev
      use gghh_abbrevd30h0, only: init_abbrevd30 => init_abbrev
      use gghh_abbrevd32h0, only: init_abbrevd32 => init_abbrev
      use gghh_abbrevd42h0, only: init_abbrevd42 => init_abbrev
      use gghh_abbrevd46h0, only: init_abbrevd46 => init_abbrev
      use gghh_abbrevd52h0, only: init_abbrevd52 => init_abbrev
      use gghh_abbrevd55h0, only: init_abbrevd55 => init_abbrev
      use gghh_abbrevd60h0, only: init_abbrevd60 => init_abbrev
      use gghh_abbrevd65h0, only: init_abbrevd65 => init_abbrev
      use gghh_abbrevd75h0, only: init_abbrevd75 => init_abbrev
      use gghh_abbrevd114h0, only: init_abbrevd114 => init_abbrev
      use gghh_abbrevd133h0, only: init_abbrevd133 => init_abbrev
      use gghh_abbrevd145h0, only: init_abbrevd145 => init_abbrev
      use gghh_abbrevd172h0, only: init_abbrevd172 => init_abbrev
      use gghh_abbrevd189h0, only: init_abbrevd189 => init_abbrev
      use gghh_abbrevd201h0, only: init_abbrevd201 => init_abbrev
      use gghh_abbrevd8h0, only: init_abbrevd8 => init_abbrev
      use gghh_abbrevd28h0, only: init_abbrevd28 => init_abbrev
      use gghh_abbrevd38h0, only: init_abbrevd38 => init_abbrev
      use gghh_abbrevd50h0, only: init_abbrevd50 => init_abbrev
      use gghh_abbrevd121h0, only: init_abbrevd121 => init_abbrev
      use gghh_abbrevd157h0, only: init_abbrevd157 => init_abbrev
      use gghh_abbrevd179h0, only: init_abbrevd179 => init_abbrev
      use gghh_abbrevd37h0, only: init_abbrevd37 => init_abbrev
      use gghh_abbrevd162h0, only: init_abbrevd162 => init_abbrev
      use gghh_abbrevd176h0, only: init_abbrevd176 => init_abbrev
      use gghh_abbrevd6h0, only: init_abbrevd6 => init_abbrev
      use gghh_abbrevd17h0, only: init_abbrevd17 => init_abbrev
      use gghh_abbrevd31h0, only: init_abbrevd31 => init_abbrev
      use gghh_abbrevd35h0, only: init_abbrevd35 => init_abbrev
      use gghh_abbrevd41h0, only: init_abbrevd41 => init_abbrev
      use gghh_abbrevd45h0, only: init_abbrevd45 => init_abbrev
      use gghh_abbrevd53h0, only: init_abbrevd53 => init_abbrev
      use gghh_abbrevd58h0, only: init_abbrevd58 => init_abbrev
      use gghh_abbrevd63h0, only: init_abbrevd63 => init_abbrev
      use gghh_abbrevd68h0, only: init_abbrevd68 => init_abbrev
      use gghh_abbrevd73h0, only: init_abbrevd73 => init_abbrev
      use gghh_abbrevd138h0, only: init_abbrevd138 => init_abbrev
      use gghh_abbrevd150h0, only: init_abbrevd150 => init_abbrev
      use gghh_abbrevd169h0, only: init_abbrevd169 => init_abbrev
      use gghh_abbrevd186h0, only: init_abbrevd186 => init_abbrev
      use gghh_abbrevd105h0, only: init_abbrevd105 => init_abbrev
      use gghh_abbrevd136h0, only: init_abbrevd136 => init_abbrev
      use gghh_abbrevd148h0, only: init_abbrevd148 => init_abbrev
      use gghh_abbrevd199h0, only: init_abbrevd199 => init_abbrev
      use gghh_abbrevd187h0, only: init_abbrevd187 => init_abbrev
      use gghh_abbrevd16h0, only: init_abbrevd16 => init_abbrev
      use gghh_abbrevd57h0, only: init_abbrevd57 => init_abbrev
      use gghh_abbrevd62h0, only: init_abbrevd62 => init_abbrev
      use gghh_abbrevd96h0, only: init_abbrevd96 => init_abbrev
      use gghh_abbrevd124h0, only: init_abbrevd124 => init_abbrev
      use gghh_abbrevd160h0, only: init_abbrevd160 => init_abbrev
      use gghh_abbrevd170h0, only: init_abbrevd170 => init_abbrev
      use gghh_abbrevd177h0, only: init_abbrevd177 => init_abbrev
      use gghh_diagramsh0l0, only: amplitudel0 => amplitude
      use gghh_groups
      implicit none
      real(ki), intent(in) :: scale2
      logical, intent(out) :: ok
      real(ki), intent(out) :: rational2
      complex(ki), dimension(numcs), intent(in), optional :: opt_amp0
      integer, dimension(numcs), intent(in), optional :: opt_perm
      real(ki), dimension(-2:0) :: samplitude

      real(ki), dimension(-2:0) :: acc
      real(ki), dimension(0:2,-2:0) :: samp_part

      logical :: acc_ok

      ok = .true.
      rational2 = 0.0_ki

      samplitude(:) = 0.0_ki
      if (present(opt_amp0)) then
         amp0 = opt_amp0
      else
         amp0 = amplitudel0()
      end if
      if (present(opt_perm)) then
         use_perm = .true.
         perm = opt_perm
      else
         use_perm = .false.
      end if

      rat2 = (0.0_ki, 0.0_ki)
      call init_lo()
        call init_abbrevd195()
        call init_abbrevd1()
        call init_abbrevd2()
        call init_abbrevd10()
        call init_abbrevd24()
        call init_abbrevd33()
        call init_abbrevd40()
        call init_abbrevd44()
        call init_abbrevd132()
        call init_abbrevd144()
        call init_abbrevd168()
        call init_abbrevd185()
        call init_abbrevd7()
        call init_abbrevd27()
        call init_abbrevd36()
        call init_abbrevd48()
        call init_abbrevd120()
        call init_abbrevd156()
        call init_abbrevd175()
        call init_abbrevd49()
        call init_abbrevd126()
        call init_abbrevd196()
        call init_abbrevd3()
        call init_abbrevd4()
        call init_abbrevd5()
        call init_abbrevd11()
        call init_abbrevd14()
        call init_abbrevd25()
        call init_abbrevd30()
        call init_abbrevd32()
        call init_abbrevd42()
        call init_abbrevd46()
        call init_abbrevd52()
        call init_abbrevd55()
        call init_abbrevd60()
        call init_abbrevd65()
        call init_abbrevd75()
        call init_abbrevd114()
        call init_abbrevd133()
        call init_abbrevd145()
        call init_abbrevd172()
        call init_abbrevd189()
        call init_abbrevd201()
        call init_abbrevd8()
        call init_abbrevd28()
        call init_abbrevd38()
        call init_abbrevd50()
        call init_abbrevd121()
        call init_abbrevd157()
        call init_abbrevd179()
        call init_abbrevd37()
        call init_abbrevd162()
        call init_abbrevd176()
        call init_abbrevd6()
        call init_abbrevd17()
        call init_abbrevd31()
        call init_abbrevd35()
        call init_abbrevd41()
        call init_abbrevd45()
        call init_abbrevd53()
        call init_abbrevd58()
        call init_abbrevd63()
        call init_abbrevd68()
        call init_abbrevd73()
        call init_abbrevd138()
        call init_abbrevd150()
        call init_abbrevd169()
        call init_abbrevd186()
        call init_abbrevd105()
        call init_abbrevd136()
        call init_abbrevd148()
        call init_abbrevd199()
        call init_abbrevd187()
        call init_abbrevd16()
        call init_abbrevd57()
        call init_abbrevd62()
        call init_abbrevd96()
        call init_abbrevd124()
        call init_abbrevd160()
        call init_abbrevd170()
        call init_abbrevd177()
      epspow=0
      samplitude(-2) = 0.0_ki
      samplitude(-1) = 0.0_ki
      if(debug_nlo_diagrams) then
         write(logfile,'(A22,G24.16,A6,G24.16,A4)') &
         & "<result name='r2' re='", real(rat2, ki), &
         &                 "' im='", aimag(rat2), "' />"
      end if
      rational2 = 2.0_ki * real(rat2, ki)
      samplitude(0) = 2.0_ki * real(rat2, ki)
         call evaluate_group0(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group1(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group2(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group3(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group4(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group5(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group6(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group7(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group8(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group9(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group10(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
         call evaluate_group11(scale2, acc, acc_ok)
         ok = ok .and. acc_ok
         samplitude(:) = samplitude(:) + acc
   end function samplitude
   !---#] function samplitude:
!---#[ subroutine evaluate_group0:
subroutine     evaluate_group0(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group0
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='0'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group0
!---#] subroutine evaluate_group0:
!---#[ subroutine evaluate_group1:
subroutine     evaluate_group1(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group1
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='1'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group1
!---#] subroutine evaluate_group1:
!---#[ subroutine evaluate_group2:
subroutine     evaluate_group2(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group2
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='2'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group2
!---#] subroutine evaluate_group2:
!---#[ subroutine evaluate_group3:
subroutine     evaluate_group3(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group3
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='3'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group3
!---#] subroutine evaluate_group3:
!---#[ subroutine evaluate_group4:
subroutine     evaluate_group4(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group4
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='4'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group4
!---#] subroutine evaluate_group4:
!---#[ subroutine evaluate_group5:
subroutine     evaluate_group5(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group5
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='5'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group5
!---#] subroutine evaluate_group5:
!---#[ subroutine evaluate_group6:
subroutine     evaluate_group6(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group6
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='6'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group6
!---#] subroutine evaluate_group6:
!---#[ subroutine evaluate_group7:
subroutine     evaluate_group7(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group7
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='7'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group7
!---#] subroutine evaluate_group7:
!---#[ subroutine evaluate_group8:
subroutine     evaluate_group8(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group8
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='8'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group8
!---#] subroutine evaluate_group8:
!---#[ subroutine evaluate_group9:
subroutine     evaluate_group9(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group9
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='9'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group9
!---#] subroutine evaluate_group9:
!---#[ subroutine evaluate_group10:
subroutine     evaluate_group10(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group10
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='10'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group10
!---#] subroutine evaluate_group10:
!---#[ subroutine evaluate_group11:
subroutine     evaluate_group11(scale2,samplitude,ok)
   use gghh_config, only: &
      & logfile, debug_nlo_diagrams
   use gghh_globalsl1, only: epspow
   use gghh_ninjah0, only: ninja_reduce => ninja_reduce_group11
   implicit none
   real(ki), intent(in) :: scale2
   logical, intent(out) :: ok
   real(ki), dimension(-2:0), intent(out) :: samplitude
   complex(ki_nin), dimension(-2:0) :: tot
   complex(ki_nin) :: totr

   if(debug_nlo_diagrams) then
      write(logfile,*) "<diagram-group index='11'>"
      write(logfile,*) "<param name='epspow' value='", epspow, "'/>"
   end if
   select case(reduction_interoperation)
   case(2) ! use Ninja only
      call ninja_reduce(real(scale2, ki_nin), tot, totr, ok)
      samplitude(:) = 2.0_ki * real(tot(:), ki)
   case default
      print*, "Your current choice of reduction_interoperation is", &
            & reduction_interoperation
      print*, "This choice is not valid for your current setup."
      print*, "* This code was generated without support for Samurai."
      print*, "* This code was generated with support for Ninja."
      print*, "* This code was generated without support for Golem95."
   end select

   if(debug_nlo_diagrams) then
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-finite' value='", samplitude(0), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-single' value='", samplitude(-1), "'/>"
      write(logfile,'(A33,E24.16,A3)') &
         & "<result kind='nlo-double' value='", samplitude(-2), "'/>"
      if(ok) then
         write(logfile,'(A30)') "<flag name='ok' status='yes'/>"
      else
         write(logfile,'(A29)') "<flag name='ok' status='no'/>"
      end if
      write(logfile,*) "</diagram-group>"
   end if
end subroutine evaluate_group11
!---#] subroutine evaluate_group11:
end module gghh_amplitudeh0
