module     gghh_smehc_model
   ! Model parameters for the model: smdiagehc
   use gghh_smehc_config, only: ki, &
   & renormalisation, reduction_interoperation, &
   & reduction_interoperation_rescue, deltaOS, &
   & nlo_prefactors, convert_to_cdr
   implicit none
   private :: ki
   private :: renormalisation, reduction_interoperation
   private :: reduction_interoperation_rescue
   private :: deltaOS, nlo_prefactors
   real(ki), parameter :: sqrt2 = &
      &1.414213562373095048801688724209698078&
      &5696718753769480731766797379_ki
   real(ki), parameter :: sqrt3 = &
      &1.732050807568877293527446341505872366&
      &9428052538103806280558069795_ki
   real(ki) :: alpha =        0.007297352537600_ki
   real(ki) :: e =        0.302822120200000_ki
   complex(ki) :: gauge1z = (       0.000000000000000_ki,        0.000000000000&
   &000_ki)
   complex(ki) :: gauge2z = (       0.000000000000000_ki,        0.000000000000&
   &000_ki)
   real(ki) :: GF =        0.000011663700000_ki
   real(ki) :: gs =        1.000000000000000_ki
   real(ki) :: mB =        4.200000000000000_ki
   real(ki) :: mBMS =        4.200000000000000_ki
   real(ki) :: mC =        1.270000000000000_ki
   real(ki) :: mD =        0.000000000000000_ki
   real(ki) :: me =        0.000510998910000_ki
   real(ki) :: mH =      125.000000000000000_ki
   real(ki) :: mmu =        0.105658367000000_ki
   real(ki) :: mS =        0.104000000000000_ki
   real(ki) :: mT =      171.199999999999989_ki
   real(ki) :: mtau =        1.776840000000000_ki
   real(ki) :: mtauMS =        1.776840000000000_ki
   real(ki) :: mU =        0.000000000000000_ki
   real(ki) :: mW =       80.376000000000005_ki
   real(ki) :: mZ =       91.187600000000003_ki
   real(ki) :: NC =        3.000000000000000_ki
   real(ki) :: Nf =        5.000000000000000_ki
   real(ki) :: Nfgen =       -1.000000000000000_ki
   real(ki) :: sw =        0.480832611207000_ki
   real(ki) :: wB =        0.000000000000000_ki
   real(ki) :: wchi =        0.000000000000000_ki
   real(ki) :: wghWm =        0.000000000000000_ki
   real(ki) :: wghWp =        0.000000000000000_ki
   real(ki) :: wghZ =        0.000000000000000_ki
   real(ki),parameter :: wH =        0.000000000000000_ki
   real(ki) :: wphi =        0.000000000000000_ki
   real(ki) :: wT =        0.000000000000000_ki
   real(ki) :: wtau =        0.000000000000000_ki
   real(ki) :: wW =        2.124000000000000_ki
   real(ki) :: wZ =        2.495200000000000_ki
   real(ki) :: gUa
   real(ki) :: gWWZZ
   real(ki) :: gBa
   real(ki) :: gtauv
   real(ki) :: gWWZ
   real(ki) :: gtaur
   real(ki) :: gUl
   real(ki) :: gBv
   real(ki) :: gUr
   real(ki) :: gBr
   real(ki) :: gUv
   real(ki) :: gHZZ
   real(ki) :: gSa
   real(ki) :: gtaua
   real(ki) :: gW
   real(ki) :: gHHH
   real(ki) :: gntaur
   real(ki) :: gntauv
   real(ki) :: gAPP
   real(ki) :: gntaul
   real(ki) :: gntaua
   complex(ki) :: gGWX
   real(ki) :: gBl
   real(ki) :: gH
   real(ki) :: gCa
   real(ki) :: ger
   real(ki) :: gev
   real(ki) :: gHC
   real(ki) :: gCl
   real(ki) :: gGWH
   real(ki) :: gea
   real(ki) :: gCr
   real(ki) :: gCv
   real(ki) :: gel
   real(ki) :: gtaul
   real(ki) :: gPWZ
   real(ki) :: gDl
   real(ki) :: gZZPP
   real(ki) :: gHHHH
   real(ki) :: gZZHH
   real(ki) :: ef
   real(ki) :: gGZWP
   real(ki) :: gHXX
   real(ki) :: gWWPP
   real(ki) :: gDr
   real(ki) :: gDv
   real(ki) :: gGZH
   real(ki) :: gDa
   complex(ki) :: gWAPX
   real(ki) :: gHWW
   real(ki) :: gWWXX
   real(ki) :: gTa
   real(ki) :: gTl
   real(ki) :: gTr
   real(ki) :: gTv
   real(ki) :: gPtau
   real(ki) :: gHPP
   real(ki) :: gWWAZ
   real(ki) :: gWWAA
   real(ki) :: alphaf
   real(ki) :: gnmul
   real(ki) :: gAAPP
   real(ki) :: gHtau
   real(ki) :: gZ
   real(ki) :: gXmu
   real(ki) :: gHHPP
   real(ki) :: Nfrat
   real(ki) :: cw
   real(ki) :: gGWZP
   real(ki) :: gnmua
   real(ki) :: NA
   real(ki) :: gner
   real(ki) :: gSv
   real(ki) :: gnev
   real(ki) :: swf
   real(ki) :: gnmuv
   real(ki) :: mZf
   complex(ki) :: gZXH
   real(ki) :: gnmur
   real(ki) :: gnel
   real(ki) :: gHmu
   real(ki) :: gPPPP
   real(ki) :: gnea
   real(ki) :: gXtau
   real(ki) :: gWWHH
   real(ki) :: gWWWW
   real(ki) :: gWZPH
   real(ki) :: gHe
   complex(ki) :: gWZPX
   real(ki) :: gHHXX
   real(ki) :: gXD
   real(ki) :: gmur
   real(ki) :: gSr
   real(ki) :: gmuv
   real(ki) :: gXB
   real(ki) :: gXC
   real(ki) :: gXT
   real(ki) :: gXU
   real(ki) :: gmua
   real(ki) :: mWf
   real(ki) :: gXS
   real(ki) :: gSl
   real(ki) :: gmul
   real(ki) :: gHT
   real(ki) :: gHU
   real(ki) :: gHS
   real(ki) :: gWPH
   real(ki) :: gPWA
   real(ki) :: gHD
   real(ki) :: gZZXX
   real(ki) :: gHB
   real(ki) :: gPmu
   real(ki) :: gZPP
   real(ki) :: gXe
   real(ki) :: gPe
   real(ki) :: gWAPH
   real(ki) :: gXXXX
   real(ki) :: gAH
   real(ki) :: GFf
   real(ki) :: gPD
   real(ki) :: gPB
   real(ki) :: gPC
   real(ki) :: gXXPP
   real(ki) :: gAZPP
   real(ki) :: gPT
   real(ki) :: gPU
   complex(ki) :: gWPX
   real(ki) :: gPS
   integer, parameter, private :: line_length = 80
   integer, parameter, private :: name_length = max(7,24)
   character(len=name_length), dimension(34) :: names = (/&
      & "alpha  ", &
      & "e      ", &
      & "gauge1z", &
      & "gauge2z", &
      & "GF     ", &
      & "gs     ", &
      & "mB     ", &
      & "mBMS   ", &
      & "mC     ", &
      & "mD     ", &
      & "me     ", &
      & "mH     ", &
      & "mmu    ", &
      & "mS     ", &
      & "mT     ", &
      & "mtau   ", &
      & "mtauMS ", &
      & "mU     ", &
      & "mW     ", &
      & "mZ     ", &
      & "NC     ", &
      & "Nf     ", &
      & "Nfgen  ", &
      & "sw     ", &
      & "wB     ", &
      & "wchi   ", &
      & "wghWm  ", &
      & "wghWp  ", &
      & "wghZ   ", &
      & "wphi   ", &
      & "wT     ", &
      & "wtau   ", &
      & "wW     ", &
      & "wZ     "/)
   character(len=1), dimension(3) :: cc = (/ '#', '!', ';'/)
   ! for automatic choosing the right EW scheme in set_parameters
   integer, private :: choosen_ew_parameters ! bit-set of EW parameters
   character(len=5), private, dimension(6) :: ew_parameters = &
          &(/'mW   ',&
          &  'mZ   ',&
          &  'alpha',&
          &  'GF   ',&
          &  'sw   ',&
          &  'e    '/)
   integer, private :: choosen_ew_parameters_count = 0 ! bitset of EW parameters
   integer, private :: orig_ewchoice = -1 ! saves the original ewchoice
   private :: digit, parsereal, names, cc
contains
!---#[ print_parameter:
   ! Print current parameters / setup to stdout or output_unit
   subroutine   print_parameter(verbose,output_unit)
      implicit none
      logical, intent(in), optional :: verbose
      integer, intent(in), optional :: output_unit
      logical :: is_verbose
      integer :: unit
      real(ki), parameter :: pi = 3.14159265358979323846264&
     &3383279502884197169399375105820974944592307816406286209_ki
      is_verbose = .false.
      if(present(verbose)) then
          is_verbose = verbose
      end if
      unit = 6 ! stdout
      if(present(output_unit)) then
          unit = output_unit
      end if
   write(unit,'(A1,1x,A26)') "#", "--------- SETUP ---------"
   write(unit,'(A1,1x,A18,I2)') "#", "renormalisation = ", renormalisation
   if(convert_to_cdr) then
      write(unit,'(A1,1x,A9,A3)') "#", "scheme = ", "CDR"
   else
      write(unit,'(A1,1x,A9,A4)') "#", "scheme = ", "DRED"
   end if
   if(reduction_interoperation.eq.0) then
      write(unit,'(A1,1x,A15,A7)') "#", "reduction with ", "SAMURAI"
   else if(reduction_interoperation.eq.1) then
      write(unit,'(A1,1x,A15,A7)') "#", "reduction with ", "GOLEM95"
   else if(reduction_interoperation.eq.2) then
      write(unit,'(A1,1x,A15,A15)') "#", "reduction with ", "NINJA"
   else if(reduction_interoperation.eq.3) then
      write(unit,'(A1,1x,A15,A5)') "#", "reduction with ", "PJFRY"
   end if
   if(reduction_interoperation_rescue.ne.reduction_interoperation) then
      if(reduction_interoperation_rescue.eq.0) then
         write(unit,'(A1,1x,A15,A7)') "#", "    --> rescue ", "SAMURAI"
      else if(reduction_interoperation_rescue.eq.1) then
         write(unit,'(A1,1x,A15,A7)') "#", "    --> rescue ", "GOLEM95"
      else if(reduction_interoperation_rescue.eq.2) then
         write(unit,'(A1,1x,A15,A15)') "#", "    --> rescue ", "NINJA"
      else if(reduction_interoperation_rescue.eq.3) then
         write(unit,'(A1,1x,A15,A5)') "#", "    --> rescue ", "PJFRY"
      end if
   end if
    write(unit,'(A1,1x,A11,I2)') "#", "ewchoice = ", ewchoice
   write(unit,'(A1,1x,A21)') "#", "--- ALL PARAMETERS ---"
   write(unit,'(A1,1x,A11,G23.16)') "#", "alpha= ", alpha
   write(unit,'(A1,1x,A11,G23.16)') "#", "e    = ", e
   write(unit,'(A1,1x,A11,"(",G23.16,G23.16,")")') "#", "gauge1z= ", gauge1z
   write(unit,'(A1,1x,A11,"(",G23.16,G23.16,")")') "#", "gauge2z= ", gauge2z
   write(unit,'(A1,1x,A11,G23.16)') "#", "GF   = ", GF
   write(unit,'(A1,1x,A11,G23.16)') "#", "gs   = ", gs
   write(unit,'(A1,1x,A11,G23.16)') "#", "mB   = ", mB
   write(unit,'(A1,1x,A11,G23.16)') "#", "mBMS = ", mBMS
   write(unit,'(A1,1x,A11,G23.16)') "#", "mC   = ", mC
   write(unit,'(A1,1x,A11,G23.16)') "#", "mD   = ", mD
   write(unit,'(A1,1x,A11,G23.16)') "#", "me   = ", me
   write(unit,'(A1,1x,A11,G23.16)') "#", "mH   = ", mH
   write(unit,'(A1,1x,A11,G23.16)') "#", "mmu  = ", mmu
   write(unit,'(A1,1x,A11,G23.16)') "#", "mS   = ", mS
   write(unit,'(A1,1x,A11,G23.16)') "#", "mT   = ", mT
   write(unit,'(A1,1x,A11,G23.16)') "#", "mtau = ", mtau
   write(unit,'(A1,1x,A11,G23.16)') "#", "mtauMS= ", mtauMS
   write(unit,'(A1,1x,A11,G23.16)') "#", "mU   = ", mU
   write(unit,'(A1,1x,A11,G23.16)') "#", "mW   = ", mW
   write(unit,'(A1,1x,A11,G23.16)') "#", "mZ   = ", mZ
   write(unit,'(A1,1x,A11,G23.16)') "#", "NC   = ", NC
   write(unit,'(A1,1x,A11,G23.16)') "#", "Nf   = ", Nf
   write(unit,'(A1,1x,A11,G23.16)') "#", "Nfgen= ", Nfgen
   write(unit,'(A1,1x,A11,G23.16)') "#", "sw   = ", sw
   write(unit,'(A1,1x,A11,G23.16)') "#", "wB   = ", wB
   write(unit,'(A1,1x,A11,G23.16)') "#", "wchi = ", wchi
   write(unit,'(A1,1x,A11,G23.16)') "#", "wghWm= ", wghWm
   write(unit,'(A1,1x,A11,G23.16)') "#", "wghWp= ", wghWp
   write(unit,'(A1,1x,A11,G23.16)') "#", "wghZ = ", wghZ
   write(unit,'(A1,1x,A11,G23.16,"const.")') "#", "wH   = ", wH
   write(unit,'(A1,1x,A11,G23.16)') "#", "wphi = ", wphi
   write(unit,'(A1,1x,A11,G23.16)') "#", "wT   = ", wT
   write(unit,'(A1,1x,A11,G23.16)') "#", "wtau = ", wtau
   write(unit,'(A1,1x,A11,G23.16)') "#", "wW   = ", wW
   write(unit,'(A1,1x,A11,G23.16)') "#", "wZ   = ", wZ
   if(is_verbose) then
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gUa  = ", gUa
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWWZZ= ", gWWZZ
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gBa  = ", gBa
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gtauv= ", gtauv
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWWZ = ", gWWZ
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gtaur= ", gtaur
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gUl  = ", gUl
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gBv  = ", gBv
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gUr  = ", gUr
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gBr  = ", gBr
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gUv  = ", gUv
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHZZ = ", gHZZ
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gSa  = ", gSa
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gtaua= ", gtaua
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gW   = ", gW
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHHH = ", gHHH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gntaur= ", gntaur
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gntauv= ", gntauv
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gAPP = ", gAPP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gntaul= ", gntaul
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gntaua= ", gntaua
   write(unit,'(A1,1x,A11,"(",G23.16,G23.16,")"," calc.")') "#", "gGWX = ", gGWX
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gBl  = ", gBl
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gH   = ", gH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gCa  = ", gCa
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "ger  = ", ger
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gev  = ", gev
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHC  = ", gHC
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gCl  = ", gCl
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gGWH = ", gGWH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gea  = ", gea
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gCr  = ", gCr
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gCv  = ", gCv
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gel  = ", gel
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gtaul= ", gtaul
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPWZ = ", gPWZ
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gDl  = ", gDl
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gZZPP= ", gZZPP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHHHH= ", gHHHH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gZZHH= ", gZZHH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "ef   = ", ef
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gGZWP= ", gGZWP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHXX = ", gHXX
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWWPP= ", gWWPP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gDr  = ", gDr
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gDv  = ", gDv
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gGZH = ", gGZH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gDa  = ", gDa
   write(unit,'(A1,1x,A11,"(",G23.16,G23.16,")"," calc.")') "#", "gWAPX= ", gWA&
   &PX
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHWW = ", gHWW
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWWXX= ", gWWXX
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gTa  = ", gTa
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gTl  = ", gTl
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gTr  = ", gTr
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gTv  = ", gTv
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPtau= ", gPtau
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHPP = ", gHPP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWWAZ= ", gWWAZ
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWWAA= ", gWWAA
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "alphaf= ", alphaf
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gnmul= ", gnmul
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gAAPP= ", gAAPP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHtau= ", gHtau
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gZ   = ", gZ
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXmu = ", gXmu
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHHPP= ", gHHPP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "Nfrat= ", Nfrat
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "cw   = ", cw
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gGWZP= ", gGWZP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gnmua= ", gnmua
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "NA   = ", NA
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gner = ", gner
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gSv  = ", gSv
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gnev = ", gnev
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "swf  = ", swf
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gnmuv= ", gnmuv
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "mZf  = ", mZf
   write(unit,'(A1,1x,A11,"(",G23.16,G23.16,")"," calc.")') "#", "gZXH = ", gZXH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gnmur= ", gnmur
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gnel = ", gnel
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHmu = ", gHmu
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPPPP= ", gPPPP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gnea = ", gnea
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXtau= ", gXtau
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWWHH= ", gWWHH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWWWW= ", gWWWW
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWZPH= ", gWZPH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHe  = ", gHe
   write(unit,'(A1,1x,A11,"(",G23.16,G23.16,")"," calc.")') "#", "gWZPX= ", gWZ&
   &PX
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHHXX= ", gHHXX
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXD  = ", gXD
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gmur = ", gmur
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gSr  = ", gSr
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gmuv = ", gmuv
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXB  = ", gXB
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXC  = ", gXC
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXT  = ", gXT
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXU  = ", gXU
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gmua = ", gmua
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "mWf  = ", mWf
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXS  = ", gXS
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gSl  = ", gSl
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gmul = ", gmul
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHT  = ", gHT
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHU  = ", gHU
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHS  = ", gHS
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWPH = ", gWPH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPWA = ", gPWA
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHD  = ", gHD
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gZZXX= ", gZZXX
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gHB  = ", gHB
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPmu = ", gPmu
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gZPP = ", gZPP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXe  = ", gXe
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPe  = ", gPe
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gWAPH= ", gWAPH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXXXX= ", gXXXX
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gAH  = ", gAH
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "GFf  = ", GFf
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPD  = ", gPD
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPB  = ", gPB
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPC  = ", gPC
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gXXPP= ", gXXPP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gAZPP= ", gAZPP
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPT  = ", gPT
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPU  = ", gPU
   write(unit,'(A1,1x,A11,"(",G23.16,G23.16,")"," calc.")') "#", "gWPX = ", gWPX
   write(unit,'(A1,1x,A11,G23.16,"calc.")') "#", "gPS  = ", gPS
   end if
   write(unit,'(A1,1x,A25)') "#", "-------------------------"
   end subroutine
!---#] print_parameter:
   function     digit(ch, lnr) result(d)
      implicit none
      character(len=1), intent(in) :: ch
      integer, intent(in) :: lnr
      integer :: d
      d = -1
      select case(ch)
         case('0')
            d = 0
         case('1')
            d = 1
         case('2')
            d = 2
         case('3')
            d = 3
         case('4')
            d = 4
         case('5')
            d = 5
         case('6')
            d = 6
         case('7')
            d = 7
         case('8')
            d = 8
         case('9')
            d = 9
         case default
            write(*,'(A21,1x,I5)') 'invalid digit in line', lnr
         end select
   end function digit
   function     parsereal(str, ierr, lnr) result(num)
      implicit none
      character(len=*), intent(in) :: str
      integer, intent(out) :: ierr
      integer, intent(in) :: lnr
      integer, dimension(0:3,0:4), parameter :: DFA = &
      & reshape( (/1,  1,  2, -1,   & ! state = 0
      &            1, -1,  2,  3,   & ! state = 1
      &            2, -1, -1,  3,   & ! state = 2
      &            4,  4, -1, -1,   & ! state = 3
      &            4, -1, -1, -1/), (/4, 5/))
      real(ki) :: num
      integer :: i, expo, ofs, state, cclass, d, s1, s2
      num = 0.0_ki
      expo = 0
      state = 0
      ofs = 0
      s1 = 1
      s2 = 1
      d = -1
      cclass = -1
      do i=1,len(str)
         select case(str(i:i))
         case('_', '''', ' ')
            cycle
         case('+', '-')
            cclass = 1
         case('.')
            cclass = 2
         case('E', 'e')
            cclass = 3
         case default
            cclass = 0
            d = digit(str(i:i), lnr)
            if (d .eq. -1) then
               ierr = 1
               return
            end if
         end select
         if (cclass .eq. 0) then
            select case(state)
            case(0, 1)
               num = 10.0_ki * num + d
            case(2)
               num = 10.0_ki * num + d
               ofs = ofs - 1
            case(4)
               expo = 10 * expo + d
            end select
         elseif ((cclass .eq. 1) .and. (str(i:i) .eq. '-')) then
            if (state .eq. 0) then
               s1 = -1
            else
               s2 = -1
            endif
         end if
         ! Advance in the DFA
         state = DFA(cclass, state)
         if (state < 0) then
            write(*,'(A21,1x,A1,1x,A7,I5)') 'invalid position for', &
            & str(i:i), 'in line', lnr
            ierr = 1
            return
         end if
      end do
      num = s1 * num * 10.0_ki**(ofs + s2 * expo)
      ierr = 0
   end function parsereal
   subroutine     parseline(line,stat,line_number)
      implicit none
      character(len=*), intent(in) :: line
      integer, intent(out) :: stat
      integer, intent(in), optional :: line_number
      character(len=line_length) :: rvalue, ivalue, value
      character(len=name_length) :: name
      real(ki) :: re, im
      integer :: idx, icomma, idx1, idx2, lnr, nidx, ierr, pdg
      if(present(line_number)) then
         lnr = line_number
      else
         lnr = 0
      end if
      idx = scan(line, '=', .false.)
      if (idx .eq. 0) then
         if(present(line_number)) then
            write(*,'(A13,1x,I5)') 'error at line', line_number
         else
            write(*,'(A18)') 'error in parseline'
         end if
         stat = 1
         return
      end if
      name = adjustl(line(1:idx-1))
      value = adjustl(line(idx+1:len(line)))
      idx = scan(value, ',', .false.)
      if (name .eq. "renormalisation") then
         re = parsereal(value, ierr, lnr)
         if (ierr .ne. 0) then
            stat = 1
            return
         end if
         renormalisation = int(re)
      elseif (name .eq. "nlo_prefactors") then
         re = parsereal(value, ierr, lnr)
         if (ierr .ne. 0) then
            stat = 1
            return
         end if
         nlo_prefactors = int(re)
      elseif (name .eq. "deltaOS") then
         re = parsereal(value, ierr, lnr)
         if (ierr .ne. 0) then
            stat = 1
            return
         end if
         deltaOS = int(re)
      elseif (name .eq. "reduction_interoperation") then
         re = parsereal(value, ierr, lnr)
         if (ierr .ne. 0) then
            stat = 1
            return
         end if
         reduction_interoperation = int(re)
      elseif (any(names .eq. name)) then
         do nidx=1,size(names)
            if (names(nidx) .eq. name) exit
         end do
         if (idx .gt. 0) then
            rvalue = value(1:idx-1)
            ivalue = value(idx+1:len(value))
            re = parsereal(rvalue, ierr, lnr)
            if (ierr .ne. 0) then
               stat = 1
               return
            end if
            im = parsereal(ivalue, ierr, lnr)
            if (ierr .ne. 0) then
               stat = 1
               return
            end if
         else
            re = parsereal(value, ierr, lnr)
            if (ierr .ne. 0) then
               stat = 1
               return
            end if
            im = 0.0_ki
         end if
         select case (nidx)
         case(1)
            alpha = re
         case(2)
            e = re
         case(3)
            gauge1z = cmplx(re, im, ki)
         case(4)
            gauge2z = cmplx(re, im, ki)
         case(5)
            GF = re
         case(6)
            gs = re
         case(7)
            mB = re
         case(8)
            mBMS = re
         case(9)
            mC = re
         case(10)
            mD = re
         case(11)
            me = re
         case(12)
            mH = re
         case(13)
            mmu = re
         case(14)
            mS = re
         case(15)
            mT = re
         case(16)
            mtau = re
         case(17)
            mtauMS = re
         case(18)
            mU = re
         case(19)
            mW = re
         case(20)
            mZ = re
         case(21)
            NC = re
         case(22)
            Nf = re
         case(23)
            Nfgen = re
         case(24)
            sw = re
         case(25)
            wB = re
         case(26)
            wchi = re
         case(27)
            wghWm = re
         case(28)
            wghWp = re
         case(29)
            wghZ = re
         case(30)
            wphi = re
         case(31)
            wT = re
         case(32)
            wtau = re
         case(33)
            wW = re
         case(34)
            wZ = re
         end select
      elseif (name(1:5).eq."mass(") then
         idx = scan(name, ')', .false.)
         if (idx.eq.0) then
            if(present(line_number)) then
               write(*,'(A13,1x,I5)') 'error at line', line_number
            else
               write(*,'(A18)') 'error in parseline'
            end if
            stat = 1
            return
         endif
         read(name(6:idx-1),*, iostat=ierr) pdg
         if (ierr.ne.0) then
            write(*,*) "Not an integer:", name(6:idx-1)
            if(present(line_number)) then
               write(*,'(A13,1x,I5)') 'error at line', line_number
            else
               write(*,'(A18)') 'error in parseline'
            end if
            stat = 1
            return
         end if
         select case(pdg)
            case(1)
               mD = parsereal(value, ierr, lnr)
            case(2)
               mU = parsereal(value, ierr, lnr)
            case(3)
               mS = parsereal(value, ierr, lnr)
            case(4)
               mC = parsereal(value, ierr, lnr)
            case(5)
               mB = parsereal(value, ierr, lnr)
            case(6)
               mT = parsereal(value, ierr, lnr)
            case(11)
               me = parsereal(value, ierr, lnr)
            case(13)
               mmu = parsereal(value, ierr, lnr)
            case(15)
               mtau = parsereal(value, ierr, lnr)
            case(23)
               mZ = parsereal(value, ierr, lnr)
            case(24)
               mW = parsereal(value, ierr, lnr)
            case(25)
               mH = parsereal(value, ierr, lnr)
            case default
               write(*,'(A20,1x,I10)') "Cannot set mass for code:", pdg
               stat = 1
               return
         end select
      elseif (name(1:6).eq."decay(") then
         idx = scan(name, ')', .false.)
         if (idx.eq.0) then
            if(present(line_number)) then
               write(*,'(A13,1x,I5)') 'error at line', line_number
            else
               write(*,'(A18)') 'error in parseline'
            end if
            stat = 1
            return
         endif
         read(name(7:idx-1),*, iostat=ierr) pdg
         if (ierr.ne.0) then
            write(*,*) "Not an integer:", name(7:idx-1)
            if(present(line_number)) then
               write(*,'(A13,1x,I5)') 'error at line', line_number
            else
               write(*,'(A18)') 'error in parseline'
            end if
            stat = 1
            return
         end if
         select case(pdg)
            case(9000003)
               wghZ = parsereal(value, ierr, lnr)
            case(9000004)
               wghWp = parsereal(value, ierr, lnr)
            case(5)
               wB = parsereal(value, ierr, lnr)
            case(6)
               wT = parsereal(value, ierr, lnr)
            case(15)
               wtau = parsereal(value, ierr, lnr)
            case(23)
               wZ = parsereal(value, ierr, lnr)
            case(24)
               wW = parsereal(value, ierr, lnr)
            case(250)
               wchi = parsereal(value, ierr, lnr)
            case(251)
               wphi = parsereal(value, ierr, lnr)
            case(9000005)
               wghWm = parsereal(value, ierr, lnr)
            case default
               write(*,'(A20,1x,I10)') "Cannot set decay for code:", pdg
               stat = 1
               return
         end select
      elseif (name(1:2).eq."m(" .or. name(1:2).eq."w(") then
         idx = scan(name, ')', .false.)
         if (idx.eq.0) then
            if(present(line_number)) then
               write(*,'(A13,1x,I5)') 'error at line', line_number
            else
               write(*,'(A18)') 'error in parseline'
            end if
            stat = 1
            return
         endif
         read(name(3:idx-1),*, iostat=ierr) pdg
         if (ierr.ne.0) then
            write(*,*) "pdg is not an integer:", name(3:idx-1)
            if(present(line_number)) then
               write(*,'(A13,1x,I5)') 'error at line', line_number
            else
               write(*,'(A18)') 'error in parseline'
            end if
            stat = 1
            return
         end if
         if (name(1:1).eq."m") then
            ! set mass according to PDG code
            select case(pdg)
            case(1)
               mD = parsereal(value, ierr, lnr)
            case(2)
               mU = parsereal(value, ierr, lnr)
            case(3)
               mS = parsereal(value, ierr, lnr)
            case(4)
               mC = parsereal(value, ierr, lnr)
            case(5)
               mB = parsereal(value, ierr, lnr)
            case(6)
               mT = parsereal(value, ierr, lnr)
            case(11)
               me = parsereal(value, ierr, lnr)
            case(13)
               mmu = parsereal(value, ierr, lnr)
            case(15)
               mtau = parsereal(value, ierr, lnr)
            case(23)
               mZ = parsereal(value, ierr, lnr)
            case(24)
               mW = parsereal(value, ierr, lnr)
            case(25)
               mH = parsereal(value, ierr, lnr)
            case default
               write(*,'(A20,1x,I10)') "Cannot set mass for PDG code:", pdg
               stat = 1
               return
            end select
         else
            ! set width according to PDG code
            select case(pdg)
            case(9000003)
               wghZ = parsereal(value, ierr, lnr)
            case(9000004)
               wghWp = parsereal(value, ierr, lnr)
            case(5)
               wB = parsereal(value, ierr, lnr)
            case(6)
               wT = parsereal(value, ierr, lnr)
            case(15)
               wtau = parsereal(value, ierr, lnr)
            case(23)
               wZ = parsereal(value, ierr, lnr)
            case(24)
               wW = parsereal(value, ierr, lnr)
            case(250)
               wchi = parsereal(value, ierr, lnr)
            case(251)
               wphi = parsereal(value, ierr, lnr)
            case(9000005)
               wghWm = parsereal(value, ierr, lnr)
            case default
               write(*,'(A20,1x,I10)') "Cannot set width for PDG code:", pdg
               stat = 1
               return
            end select
         endif
      else
         write(*,'(A20,1x,A20)') 'Unrecognized option:', name
         stat = 1
         return
      end if
      stat = 0
   end subroutine parseline
   subroutine     parse(aunit)
      implicit none
      integer, intent(in) :: aunit
      character(len=line_length) :: line
      integer :: ios, lnr
      lnr = 0
      loop1: do
         read(unit=aunit,fmt='(A80)',iostat=ios) line
         if(ios .ne. 0) exit
         lnr = lnr + 1
         line = adjustl(line)
         if (line .eq. '') cycle loop1
         if (any(cc .eq. line(1:1))) cycle loop1
         call parseline(line,ios,lnr)
         if(ios .ne. 0) then
            write(*,'(A44,I2,A1)') &
            & 'Error while reading parameter file in parse(', aunit, ')'
         end if
      end do loop1
   end subroutine parse
!---#[ SLHA READER:
   subroutine     read_slha(ch, ierr)
      implicit none
      integer, intent(in) :: ch
      integer, intent(out), optional :: ierr
      integer :: lnr, i, l, ofs, ios
      character(len=255) :: line
      integer :: block
      ofs = iachar('A') - iachar('a')
      lnr = 0
      loop1: do
         read(unit=ch,fmt='(A80)',iostat=ios) line
         if(ios .ne. 0) exit
         lnr = lnr + 1
         i = scan(line, '#', .false.)
         if (i .eq. 0) then
            l = len_trim(line)
         else
            l = i - 1
         end if
         if (l .eq. 0) cycle loop1
         ucase: do i = 1, l
            if (line(i:i) >= 'a' .and. line(i:i) <= 'z') then
               line(i:i) = achar(iachar(line(i:i))+ofs)
            end if
         end do ucase
         if (line(1:1) .eq. 'B') then
            if (line(1:5) .eq. 'BLOCK') then
               line = adjustl(line(6:l))
               do i=1,l
                 if (line(i:i) <= ' ') exit
               end do
               l = i
           if ("MASS" .eq. line(1:l)) then
                  block = 0
           else           if ("DECAY" .eq. line(1:l)) then
                  block = 1
               else
                  block = -1
               end if
            else
               write(*,'(A37,I5)') "Illegal statement in SLHA file, line ", lnr
               if (present(ierr)) ierr = 1
               return
            end if
         elseif (line(1:1) .eq. 'D') then
            if (line(1:5) .eq. 'DECAY') then
               line = adjustl(line(6:l))
               call read_slha_line_decay(line, i)
               block = 2
            else
               write(*,'(A37,I5)') "Illegal statement in SLHA file, line ", lnr
               if (present(ierr)) ierr = 1
               return
            end if
         else
            ! read a parameter line
            select case(block)
            case(0)
               call read_slha_block_mass(line(1:l), i)
               if (i .ne. 0) then
                  if (present(ierr)) ierr = 1
                  write(*,'(A44,I5)') &
                  & "Unrecognized line format in SLHA file, line ", lnr
                  return
               end if
            case(1)
               call read_slha_block_decay(line(1:l), i)
               if (i .ne. 0) then
                  if (present(ierr)) ierr = 1
                  write(*,'(A44,I5)') &
                  & "Unrecognized line format in SLHA file, line ", lnr
                  return
               end if
            case default
               cycle loop1
            end select
         end if
      end do loop1
      if (present(ierr)) ierr = 0
   end subroutine read_slha
   subroutine read_slha_block_mass(line, ierr)
      implicit none
      character(len=*), intent(in) :: line
      integer, intent(out), optional :: ierr
      integer :: idx1,ioerr
      real(ki) :: value
      read(line,*,iostat=ioerr) idx1, value
      if (ioerr .ne. 0) then
         if (present(ierr)) ierr = 1
         return
      end if
      select case(idx1)
      case(1)
         mD = value
      case(2)
         mU = value
      case(3)
         mS = value
      case(4)
         mC = value
      case(5)
         mB = value
      case(6)
         mT = value
      case(11)
         me = value
      case(13)
         mmu = value
      case(15)
         mtau = value
      case(23)
         mZ = value
      case(24)
         mW = value
      case(25)
         mH = value
      end select
      if (present(ierr)) ierr = 0
   end subroutine read_slha_block_mass
   subroutine read_slha_block_decay(line, ierr)
   !  This subroutine reads the 'branching ratios' of
   !  the slha file: these are just thrown away
      implicit none
      character(len=*), intent(in) :: line
      integer, intent(out), optional :: ierr
      integer :: idx1,idx2,ioerr,nda
      real(ki) :: value
      read(line,*,iostat=ioerr) value, nda, idx1, idx2
      if (ioerr .ne. 0) then
         if (present(ierr)) ierr = 1
         return
      end if
      if (present(ierr)) ierr = 0
   end subroutine read_slha_block_decay
   subroutine read_slha_line_decay(line, ierr)
      implicit none
      character(len=*), intent(in) :: line
      integer, intent(out), optional :: ierr
      integer :: idx1,ioerr
      real(ki) :: value
      read(line,*,iostat=ioerr) idx1, value
      if (ioerr .ne. 0) then
         if (present(ierr)) ierr = 1
         return
      end if
      select case(idx1)
      case(9000003)
         wghZ = value
      case(9000004)
         wghWp = value
      case(5)
         wB = value
      case(6)
         wT = value
      case(15)
         wtau = value
      case(23)
         wZ = value
      case(24)
         wW = value
      case(250)
         wchi = value
      case(251)
         wphi = value
      case(9000005)
         wghWm = value
      end select
      if (present(ierr)) ierr = 0
   end subroutine read_slha_line_decay
!---#] SLHA READER:
!---#[ subroutine set_parameter
   recursive subroutine set_parameter(name, re, im, ierr)
      implicit none
      real(ki), parameter :: pi = 3.14159265358979323846264&
     &3383279502884197169399375105820974944592307816406286209_ki
      character(len=*), intent(in) :: name
      real(ki), intent(in) :: re, im
      integer, intent(out) :: ierr
      integer :: err, pdg, nidx, idx
      complex(ki) :: tmp
      logical :: must_be_real
      must_be_real = .false.
      ierr = 1 ! OK
if (name(1:5).eq."mass(" .and. len_trim(name)>=7) then
         idx = scan(name,")",.false.)
         if (idx.eq.0) then
            idx=len_trim(name)+1
         end if
         read(name(6:idx-1),*, iostat=err) pdg
         if (err.ne.0) then
            ierr=0 !FAIL
            return
         end if
         must_be_real = .true.
         select case(pdg)
            case(1)
               mD = re
            case(2)
               mU = re
            case(3)
               mS = re
            case(4)
               mC = re
            case(5)
               mB = re
            case(6)
               mT = re
            case(11)
               me = re
            case(13)
               mmu = re
            case(15)
               mtau = re
            case(23)
               mZ = re
            case(24)
               mW = re
            case(25)
               mH = re
            case default
               write(*,'(A20,1x,I10)') "Cannot set mass for PDG code:", pdg
               ierr = 0
               return
            end select
     elseif (len_trim(name)>=8 .and. name(1:6).eq."width(") then
         idx = scan(name,")",.false.)
         if (idx.eq.0) then
            idx=len_trim(name)+1
         end if
         read(name(7:idx-1),*, iostat=err) pdg
         if (err.ne.0) then
            ierr=0 !FAIL
            return
         end if
         must_be_real = .true.
         select case(pdg)
            case(9000003)
               wghZ = re
            case(9000004)
               wghWp = re
            case(5)
               wB = re
            case(6)
               wT = re
            case(15)
               wtau = re
            case(23)
               wZ = re
            case(24)
               wW = re
            case(250)
               wchi = re
            case(251)
               wphi = re
            case(9000005)
               wghWm = re
            case default
               write(*,'(A20,1x,I10)') "Cannot set width for PDG code:", pdg
               ierr = 0 !FAIL
               return
            end select
     elseif (name .eq. "MASS&&1") then
               must_be_real = .true.
               mD = re
     elseif (name .eq. "MASS&&2") then
               must_be_real = .true.
               mU = re
     elseif (name .eq. "MASS&&3") then
               must_be_real = .true.
               mS = re
     elseif (name .eq. "MASS&&4") then
               must_be_real = .true.
               mC = re
     elseif (name .eq. "MASS&&5") then
               must_be_real = .true.
               mB = re
     elseif (name .eq. "MASS&&6") then
               must_be_real = .true.
               mT = re
     elseif (name .eq. "MASS&&11") then
               must_be_real = .true.
               me = re
     elseif (name .eq. "MASS&&13") then
               must_be_real = .true.
               mmu = re
     elseif (name .eq. "MASS&&15") then
               must_be_real = .true.
               mtau = re
     elseif (name .eq. "MASS&&23") then
               must_be_real = .true.
               mZ = re
     elseif (name .eq. "MASS&&24") then
               must_be_real = .true.
               mW = re
     elseif (name .eq. "MASS&&25") then
               must_be_real = .true.
               mH = re
     elseif (name .eq. "DECAY&&9000003") then
               must_be_real = .true.
               wghZ = re
     elseif (name .eq. "DECAY&&9000004") then
               must_be_real = .true.
               wghWp = re
     elseif (name .eq. "DECAY&&5") then
               must_be_real = .true.
               wB = re
     elseif (name .eq. "DECAY&&6") then
               must_be_real = .true.
               wT = re
     elseif (name .eq. "DECAY&&15") then
               must_be_real = .true.
               wtau = re
     elseif (name .eq. "DECAY&&23") then
               must_be_real = .true.
               wZ = re
     elseif (name .eq. "DECAY&&24") then
               must_be_real = .true.
               wW = re
     elseif (name .eq. "DECAY&&250") then
               must_be_real = .true.
               wchi = re
     elseif (name .eq. "DECAY&&251") then
               must_be_real = .true.
               wphi = re
     elseif (name .eq. "DECAY&&9000005") then
               must_be_real = .true.
               wghWm = re
      elseif (name .eq. "renormalisation") then
          if ( real(int(re),ki) == re .and. im == 0.0_ki ) then
             renormalisation = int(re)
          else
             ierr=0 !FAIL
          end if
      elseif (name .eq. "nlo_prefactors") then
         if ( real(int(re),ki) == re .and. im == 0.0_ki ) then
            nlo_prefactors = int(re)
         else
            ierr=0 !FAIL
         end if
      elseif (name .eq. "deltaOS") then
         if ( real(int(re),ki) == re .and. im == 0.0_ki ) then
            deltaOS = int(re)
         else
            ierr=0 !FAIL
         end if
      elseif (name .eq. "reduction_interoperation") then
         if ( real(int(re),ki) == re .and. im == 0.0_ki ) then
            reduction_interoperation = int(re)
         else
            ierr=0 !FAIL
         end if
     elseif (any(names .eq. name)) then
         do nidx=1,size(names)
            if (names(nidx) .eq. name) exit
         end do
         select case (nidx)
         case(1)
            alpha = re
            must_be_real=.true.
         case(2)
            e = re
            must_be_real=.true.
         case(3)
            gauge1z = cmplx(re, im, ki)
         case(4)
            gauge2z = cmplx(re, im, ki)
         case(5)
            GF = re
            must_be_real=.true.
         case(6)
            gs = re
            must_be_real=.true.
         case(7)
            mB = re
            must_be_real=.true.
         case(8)
            mBMS = re
            must_be_real=.true.
         case(9)
            mC = re
            must_be_real=.true.
         case(10)
            mD = re
            must_be_real=.true.
         case(11)
            me = re
            must_be_real=.true.
         case(12)
            mH = re
            must_be_real=.true.
         case(13)
            mmu = re
            must_be_real=.true.
         case(14)
            mS = re
            must_be_real=.true.
         case(15)
            mT = re
            must_be_real=.true.
         case(16)
            mtau = re
            must_be_real=.true.
         case(17)
            mtauMS = re
            must_be_real=.true.
         case(18)
            mU = re
            must_be_real=.true.
         case(19)
            mW = re
            must_be_real=.true.
         case(20)
            mZ = re
            must_be_real=.true.
         case(21)
            NC = re
            must_be_real=.true.
         case(22)
            Nf = re
            must_be_real=.true.
         case(23)
            Nfgen = re
            must_be_real=.true.
         case(24)
            sw = re
            must_be_real=.true.
         case(25)
            wB = re
            must_be_real=.true.
         case(26)
            wchi = re
            must_be_real=.true.
         case(27)
            wghWm = re
            must_be_real=.true.
         case(28)
            wghWp = re
            must_be_real=.true.
         case(29)
            wghZ = re
            must_be_real=.true.
         case(30)
            wphi = re
            must_be_real=.true.
         case(31)
            wT = re
            must_be_real=.true.
         case(32)
            wtau = re
            must_be_real=.true.
         case(33)
            wW = re
            must_be_real=.true.
         case(34)
            wZ = re
            must_be_real=.true.
         end select
     else
         if (name(1:3) /= "mdl") then
            call set_parameter("mdl" // name(4:),re,im,ierr)
            return
         end if
         ierr = 0 !FAIL / UNKNOWN
     end if
     if (must_be_real .and. im /= 0.0_ki .and. ierr.eq.1) then
        ierr = 0 ! FAIL
     end if
     if(any(ew_parameters .eq. name) .or. (name.eq."mass(23)") .or. &
        (name.eq."mass(24)"))  then
         do nidx=1,size(ew_parameters)
            if (ew_parameters(nidx) .eq. name) exit
         end do
         if(name.eq."mass(23)") then
            nidx=2
         elseif(name.eq."mass(24)") then
            nidx=1
         end if
         if (.not. btest(choosen_ew_parameters,nidx)) then
            choosen_ew_parameters_count = choosen_ew_parameters_count + 1
            choosen_ew_parameters = ibset(choosen_ew_parameters, nidx)
            if (choosen_ew_parameters_count == 1) then
               orig_ewchoice = ewchoice
               if(ewchoice > 0) then
                 select case(choosen_ew_parameters)
                      case(2) ! mW
                        if (ewchoice /= 1 .and. ewchoice /= 2 .and. &
                            &   ewchoice /= 6) then
                          ewchoice = 1
                        end if
                      case(4) ! mZ
                        if (ewchoice /= 1 .and. ewchoice /= 2 .and. &
                            &   ewchoice /= 6) then
                          ewchoice = 1
                        end if
                      case(8) ! alpha
                        if (ewchoice /= 2 .and. ewchoice /= 3 .and. &
                            &   ewchoice /= 4 .and. ewchoice /= 5) then
                          ewchoice = 2
                        end if
                      case(16) ! GF
                        if (ewchoice /= 1 .and. ewchoice /= 4 .and. &
                            &   ewchoice /= 8) then
                          ewchoice = 1
                        end if
                     case(32) ! sw
                        if (ewchoice /= 3 .and. ewchoice /= 4 .and. &
                             &   ewchoice /= 7 .and. ewchoice /= 8) then
                          ewchoice = 1
                        end if
                      case(64) ! e
                        if (ewchoice < 6) then
                           ewchoice = 6
                        end if
                    end select
                end if
            elseif (choosen_ew_parameters_count == 2) then
                if (choosen_ew_parameters == 18 .or. choosen_ew_parameters == 2&
                &0 &
                   & .or. choosen_ew_parameters == 6) then
                   ewchoice = 1
                elseif (choosen_ew_parameters == 10 .or. choosen_ew_parameters &
                &== 12) then
                   ewchoice = 2
                elseif (choosen_ew_parameters == 40 .or. choosen_ew_parameters &
                &== 36) then
                   ewchoice = 3
                elseif (choosen_ew_parameters == 24 .or. choosen_ew_parameters &
                &== 48) then
                   ewchoice = 4
                elseif (choosen_ew_parameters == 20) then
                   ewchoice = 5
                 elseif (choosen_ew_parameters == 66 .or. choosen_ew_parameters&
                 & == 68) then
                   ewchoice = 6
                 elseif (choosen_ew_parameters == 96) then
                   ewchoice = 7
                 elseif (choosen_ew_parameters == 80) then
                   ewchoice = 8
                 else
                 ewchoice = orig_ewchoice
                 write(*,'(A,1x,I2)') 'Unknown/Invalid EW scheme. Falling back &
                 &to No.',&
                                     ewchoice
                 ierr = 0
                end if
            elseif (choosen_ew_parameters_count >= 4) then
                 write(*,'(A,A,A)') 'EW parameter "', name, '" is already deter&
                 &mined.'
                 write(*,'(A)') 'New values are ignored.'
                 write(*,'(A17,1x,I3)') 'Current EW choice:', ewchoice
                 ierr = -1 ! IGNORE
            elseif(choosen_ew_parameters_count == 3) then
               select case(choosen_ew_parameters)
                case(22) ! GF,mW,mZ -> e,sw
                        ewchoice = 1
                case(14) ! alpha, mW, mZ  -> e,sw
                        ewchoice = 2
                case(44) ! alpha, sw, mZ -> e, mW
                        ewchoice = 3
                case(56) ! alpha, sw, GF ->  e, mW
                        ewchoice = 4
                case(28) ! alpha, GF, mZ ->  e, mW, sw
                        ewchoice = 5
                case(70) ! e, mW, mZ -> sw
                        ewchoice = 6
                case(100) ! e, sw, mZ -> mW
                        ewchoice = 7
                case(112) ! e, sw, GF -> mW, mZ
                        ewchoice = 8
                case default
                 ewchoice = orig_ewchoice
                 write(*,'(A,1x,I2)') 'Unknown/Invalid EW scheme. Falling back &
                 &to No.',&
                                     ewchoice
                 ierr = 0
               end select
            end if
         end if
     end if
     call init_functions()
      ! TODO init_color
   end subroutine
!---#] subroutine set_parameter
!---#[ subroutine init_functions:
   subroutine     init_functions()
      implicit none
      complex(ki), parameter :: i_ = (0.0_ki, 1.0_ki)
      real(ki), parameter :: pi = 3.14159265358979323846264&
     &3383279502884197169399375105820974944592307816406286209_ki
      gW=sqrt2**(-1)*sw**(-1)
      gHHH=-3.0_ki/2.0_ki*mH**2*mW**(-1)*sw**(-1)
      gPB=sqrt2**(-1)*mBMS*mW**(-1)*sw**(-1)
      gAPP=-1.0_ki
      gGWX=-1.0_ki/2.0_ki*i_*mW*sw**(-1)
      gH=1.0_ki/24.0_ki/(pi**2)*mW**(-1)*sw**(-1)
      gPmu=sqrt2**(-1)*mmu*mW**(-1)*sw**(-1)
      gGWH=-1.0_ki/2.0_ki*mW*sw**(-1)
      gWWXX=1.0_ki/2.0_ki*sw**(-2)
      gHHPP=-1.0_ki/4.0_ki*mH**2*mW**(-2)*sw**(-2)
      ef=e
      gHXX=-1.0_ki/2.0_ki*mH**2*mW**(-1)*sw**(-1)
      gWWPP=1.0_ki/2.0_ki*sw**(-2)
      gWAPX=-1.0_ki/2.0_ki*i_*sw**(-1)
      gHWW=mW*sw**(-1)
      gPtau=sqrt2**(-1)*mtauMS*mW**(-1)*sw**(-1)
      gHPP=-1.0_ki/2.0_ki*mH**2*mW**(-1)*sw**(-1)
      gHB=-1.0_ki/2.0_ki*mBMS*mW**(-1)*sw**(-1)
      gWWAA=-1.0_ki
      alphaf=alpha
      gAAPP=2.0_ki
      gHtau=-1.0_ki/2.0_ki*mtauMS*mW**(-1)*sw**(-1)
      gXmu=1.0_ki/2.0_ki*mmu*mW**(-1)*sw**(-1)
      gHHHH=-3.0_ki/4.0_ki*mH**2*mW**(-2)*sw**(-2)
      Nfrat=ifpos(Nfgen,Nf*Nfgen**(-1),1.0_ki)
      cw=mW*mZ**(-1)
      gWWZZ=-cw**2*sw**(-2)
      gWWZ=-cw*sw**(-1)
      gHZZ=cw**(-2)*mW*sw**(-1)
      gZZPP=-1.0_ki+1.0_ki/2.0_ki*cw**(-2)*sw**2+1.0_ki/2.0_ki*cw**2*sw**(-2)
      gZZHH=1.0_ki/2.0_ki*cw**(-2)*sw**(-2)
      gGZWP=1.0_ki/2.0_ki*cw**(-1)*mW*sw**(-1)
      gGZH=-1.0_ki/2.0_ki*cw**(-2)*mW*sw**(-1)
      gWWAZ=cw*sw**(-1)
      gZ=cw**(-1)*sw**(-1)
      gUa=1.0_ki/4.0_ki*gZ
      gBa=-1.0_ki/4.0_ki*gZ
      gtauv=-1.0_ki/4.0_ki*gZ+gZ*sw**2
      gUv=1.0_ki/4.0_ki*gZ-2.0_ki/3.0_ki*gZ*sw**2
      gUl=gUv+gUa
      gUr=gUv-gUa
      gtaua=-1.0_ki/4.0_ki*gZ
      gtaur=-gtaua+gtauv
      gtaul=gtaua+gtauv
      gntauv=1.0_ki/4.0_ki*gZ
      gntaua=1.0_ki/4.0_ki*gZ
      gntaur=-gntaua+gntauv
      gntaul=gntaua+gntauv
      gCa=1.0_ki/4.0_ki*gZ
      gev=-1.0_ki/4.0_ki*gZ+gZ*sw**2
      gea=-1.0_ki/4.0_ki*gZ
      ger=-gea+gev
      gCv=1.0_ki/4.0_ki*gZ-2.0_ki/3.0_ki*gZ*sw**2
      gCl=gCv+gCa
      gCr=gCv-gCa
      gel=gea+gev
      gBv=-1.0_ki/4.0_ki*gZ+1.0_ki/3.0_ki*gZ*sw**2
      gBr=gBv-gBa
      gBl=gBv+gBa
      gDv=-1.0_ki/4.0_ki*gZ+1.0_ki/3.0_ki*gZ*sw**2
      gDa=-1.0_ki/4.0_ki*gZ
      gDr=-gDa+gDv
      gDl=gDa+gDv
      gTa=1.0_ki/4.0_ki*gZ
      gTv=1.0_ki/4.0_ki*gZ-2.0_ki/3.0_ki*gZ*sw**2
      gTl=gTv+gTa
      gTr=gTv-gTa
      gGWZP=-1.0_ki/2.0_ki*cw**(-1)*mW*sw-1.0_ki/2.0_ki*cw*mW*sw**(-1)
      gnmua=1.0_ki/4.0_ki*gZ
      NA=-1.0_ki+NC**2
      gXC=-1.0_ki/2.0_ki*mC*mW**(-1)*sw**(-1)
      gnev=1.0_ki/4.0_ki*gZ
      swf=sw
      gnmuv=1.0_ki/4.0_ki*gZ
      gnmul=gnmuv+gnmua
      mZf=mZ
      gZXH=-1.0_ki/2.0_ki*i_*cw**(-1)*sw**(-1)
      gnmur=gnmuv-gnmua
      gHmu=-1.0_ki/2.0_ki*mmu*mW**(-1)*sw**(-1)
      gXT=-1.0_ki/2.0_ki*mT*mW**(-1)*sw**(-1)
      gPPPP=-1.0_ki/2.0_ki*mH**2*mW**(-2)*sw**(-2)
      gnea=1.0_ki/4.0_ki*gZ
      gner=-gnea+gnev
      gnel=gnea+gnev
      gXtau=1.0_ki/2.0_ki*mtauMS*mW**(-1)*sw**(-1)
      gWWHH=1.0_ki/2.0_ki*sw**(-2)
      gWWWW=sw**(-2)
      gWZPH=-1.0_ki/2.0_ki*cw**(-1)
      gXU=-1.0_ki/2.0_ki*mU*mW**(-1)*sw**(-1)
      gWZPX=-1.0_ki/2.0_ki*i_*cw**(-1)
      gHHXX=-1.0_ki/4.0_ki*mH**2*mW**(-2)*sw**(-2)
      gXD=1.0_ki/2.0_ki*mD*mW**(-1)*sw**(-1)
      gmuv=-1.0_ki/4.0_ki*gZ+gZ*sw**2
      gXB=1.0_ki/2.0_ki*mBMS*mW**(-1)*sw**(-1)
      gSv=-1.0_ki/4.0_ki*gZ+1.0_ki/3.0_ki*gZ*sw**2
      gSa=-1.0_ki/4.0_ki*gZ
      gSr=-gSa+gSv
      gHe=-1.0_ki/2.0_ki*me*mW**(-1)*sw**(-1)
      gmua=-1.0_ki/4.0_ki*gZ
      gmur=-gmua+gmuv
      mWf=mW
      gXS=1.0_ki/2.0_ki*mS*mW**(-1)*sw**(-1)
      gSl=gSa+gSv
      gmul=gmua+gmuv
      gHT=-1.0_ki/2.0_ki*mT*mW**(-1)*sw**(-1)
      gHU=-1.0_ki/2.0_ki*mU*mW**(-1)*sw**(-1)
      gHS=-1.0_ki/2.0_ki*mS*mW**(-1)*sw**(-1)
      gPWA=-mW
      gHD=-1.0_ki/2.0_ki*mD*mW**(-1)*sw**(-1)
      gZZXX=1.0_ki/2.0_ki*cw**(-2)*sw**(-2)
      gPWZ=-cw**(-1)*mW*sw
      gHC=-1.0_ki/2.0_ki*mC*mW**(-1)*sw**(-1)
      gZPP=-1.0_ki/2.0_ki*cw**(-1)*sw+1.0_ki/2.0_ki*cw*sw**(-1)
      gXe=1.0_ki/2.0_ki*me*mW**(-1)*sw**(-1)
      gPe=sqrt2**(-1)*me*mW**(-1)*sw**(-1)
      gWAPH=-1.0_ki/2.0_ki*sw**(-1)
      gXXXX=-3.0_ki/4.0_ki*mH**2*mW**(-2)*sw**(-2)
      gAH=47.0_ki/144.0_ki/(pi**2)*mW**(-1)*sw**(-1)-7.0_ki/1080.0_ki/(pi**2)*m&
      &H**2*mT**(-2)*mW**(-1)*sw**(-1)+11.0_ki/480.0_ki/(pi**2)*mH**2*mW**(-3)*&
      &sw**(-1)-1.0_ki/1512.0_ki/(pi**2)*mH**4*mT**(-4)*mW**(-1)*sw**(-1)+19.0_&
      &ki/6720.0_ki/(pi**2)*mH**4*mW**(-5)*sw**(-1)+29.0_ki/67200.0_ki/(pi**2)*&
      &mH**6*mW**(-7)*sw**(-1)+41.0_ki/554400.0_ki/(pi**2)*mH**8*mW**(-9)*sw**(&
      &-1)+5.0_ki/366912.0_ki/(pi**2)*mH**10*mW**(-11)*sw**(-1)+71.0_ki/2690688&
      &0.0_ki/(pi**2)*mH**12*mW**(-13)*sw**(-1)
      GFf=GF
      gPD=sqrt2**(-1)*mD*mW**(-1)*sw**(-1)
      gWPH=-1.0_ki/2.0_ki*sw**(-1)
      gPC=sqrt2**(-1)*mC*mW**(-1)*sw**(-1)
      gXXPP=-1.0_ki/4.0_ki*mH**2*mW**(-2)*sw**(-2)
      gAZPP=-cw**(-1)*sw-cw*sw**(-1)
      gPT=sqrt2**(-1)*mT*mW**(-1)*sw**(-1)
      gPU=sqrt2**(-1)*mU*mW**(-1)*sw**(-1)
      gWPX=-1.0_ki/2.0_ki*i_*sw**(-1)
      gPS=sqrt2**(-1)*mS*mW**(-1)*sw**(-1)
end subroutine init_functions
!---#] subroutine init_functions:
!---#[ utility functions for model initialization:
   pure function ifpos(x0, x1, x2)
      implicit none
      real(ki), intent(in) :: x0, x1, x2
      real(ki) :: ifpos
      if (x0 > 0.0_ki) then
         ifpos = x1
      else
         ifpos = x2
      endif
   end  function ifpos
   pure function sort4(m1, m2, m3, m4, n)
      implicit none
      real(ki), intent(in) :: m1, m2, m3, m4
      integer, intent(in) :: n
      real(ki) :: sort4
      real(ki), dimension(4) :: m
      logical :: f
      integer :: i
      real(ki) :: tmp
      m(1) = m1
      m(2) = m2
      m(3) = m3
      m(4) = m4
      ! Bubble Sort
      do
         f = .false.
         do i=1,3
            if (abs(m(i)) .gt. abs(m(i+1))) then
               tmp = m(i)
               m(i) = m(i+1)
               m(i+1) = tmp
               f = .true.
            end if
         end do
         if (.not. f) exit
      end do
      sort4 = m(n)
   end  function sort4
!---#] utility functions for model initialization:
end module gghh_smehc_model
