#Procedure    shiftmomenta(DIAG,WRAP)
* vim: ts=3:sw=3:expandtab:syntax=form
   #Switch `DIAG'
*---#[ Diagram Group 0:
  #Case 9
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , - Q - (0) );
     #EndIf
     #Break
  #Case 25
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 26
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 37
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
*---#] Diagram Group 0:
   #Default
      #Message No Such Loop Diagram: `DIAG'
      #Terminate 1
   #EndSwitch
#EndProcedure
