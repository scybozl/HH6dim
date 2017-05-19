#Procedure    shiftmomenta(DIAG,WRAP)
* vim: ts=3:sw=3:expandtab:syntax=form
   #Switch `DIAG'
*---#[ Diagram Group 0:
  #Case 3
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2-k4) );
     #Else
        Multiply replace_( p1 , + Q - (k2-k4) );
     #EndIf
     #Break
  #Case 8
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k2+k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k2+k4) );
     #EndIf
     #Break
  #Case 10
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3) );
     #Else
        Multiply replace_( p1 , - Q - (-k3) );
     #EndIf
     #Break
  #Case 13
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k2) );
     #Else
        Multiply replace_( p1 , - Q - (-k2) );
     #EndIf
     #Break
  #Case 33
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k2) );
     #Else
        Multiply replace_( p1 , - Q - (-k2) );
     #EndIf
     #Break
  #Case 36
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3) );
     #Else
        Multiply replace_( p1 , - Q - (-k3) );
     #EndIf
     #Break
  #Case 40
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3) );
     #Else
        Multiply replace_( p1 , - Q - (-k3) );
     #EndIf
     #Break
*---#] Diagram Group 0:
*---#[ Diagram Group 1:
  #Case 1
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3) );
     #Else
        Multiply replace_( p1 , + Q - (k3) );
     #EndIf
     #Break
  #Case 2
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3+k4) );
     #Else
        Multiply replace_( p1 , + Q - (k3+k4) );
     #EndIf
     #Break
  #Case 4
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3) );
     #Else
        Multiply replace_( p1 , - Q - (-k3) );
     #EndIf
     #Break
  #Case 7
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3) );
     #Else
        Multiply replace_( p1 , + Q - (k3) );
     #EndIf
     #Break
  #Case 9
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3+k4) );
     #Else
        Multiply replace_( p1 , + Q - (k3+k4) );
     #EndIf
     #Break
  #Case 11
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 12
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 14
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3) );
     #Else
        Multiply replace_( p1 , + Q - (k3) );
     #EndIf
     #Break
  #Case 17
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 21
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 34
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 35
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 37
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 39
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
*---#] Diagram Group 1:
*---#[ Diagram Group 2:
  #Case 38
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
