module     gghh_smehc_globalsh0
   use gghh_smehc_config, only: ki
   use gghh_smehc_color, only:&
      & c1v => c1

   implicit none
   private
   complex(ki), public :: c1

   public :: init_lo

   complex(ki), public :: rat2
contains

subroutine     init_lo()
   use gghh_smehc_globalsl1, only: epspow, ccontract, amp0
   implicit none
   c1 = ccontract(c1v, amp0)
end subroutine init_lo

end module gghh_smehc_globalsh0
