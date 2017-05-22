module     gghh_version
   implicit none
   ! The version of Form used for code generation
   integer, parameter, dimension(2) :: formversion = (/4, 1/)
   ! The version of GoSam used for code generation
   integer, parameter, dimension(2) :: gosamversion = (/2, 0/)
   ! The SVN revision of GoSam used for code generation
   integer, parameter :: gosamrevision = z'12f4de9'
end module gghh_version
