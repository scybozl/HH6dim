#Procedure    shiftmomenta(DIAG,WRAP)
* vim: ts=3:sw=3:expandtab:syntax=form
   #Switch `DIAG'
*---#[ Diagram Group 0:
  #Case 10
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3) );
     #Else
        Multiply replace_( p1 , - Q - (-k3) );
     #EndIf
     #Break
*---#] Diagram Group 0:
*---#[ Diagram Group 1:
  #Case 4
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 8
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
*---#] Diagram Group 1:
*---#[ Diagram Group 2:
  #Case 6
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
*---#] Diagram Group 2:
   #Default
      #Message No Such Loop Diagram: `DIAG'
      #Terminate 1
   #EndSwitch
#EndProcedure
