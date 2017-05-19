#Procedure    shiftmomenta(DIAG,WRAP)
* vim: ts=3:sw=3:expandtab:syntax=form
   #Switch `DIAG'
*---#[ Diagram Group 0:
  #Case 195
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
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 2
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 10
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3) );
     #Else
        Multiply replace_( p1 , - Q - (-k3) );
     #EndIf
     #Break
  #Case 24
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3) );
     #Else
        Multiply replace_( p1 , + Q - (k3) );
     #EndIf
     #Break
  #Case 33
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 40
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 44
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 132
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 144
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 168
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 185
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
*---#] Diagram Group 1:
*---#[ Diagram Group 2:
  #Case 7
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k4) );
     #EndIf
     #Break
  #Case 27
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k4) );
     #Else
        Multiply replace_( p1 , + Q - (k4) );
     #EndIf
     #Break
  #Case 36
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 48
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 120
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 156
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 175
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
*---#] Diagram Group 2:
*---#[ Diagram Group 3:
  #Case 49
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k2) );
     #Else
        Multiply replace_( p1 , - Q - (-k2) );
     #EndIf
     #Break
  #Case 126
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k2) );
     #Else
        Multiply replace_( p1 , - Q - (-k2) );
     #EndIf
     #Break
  #Case 196
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3) );
     #Else
        Multiply replace_( p1 , - Q - (-k3) );
     #EndIf
     #Break
*---#] Diagram Group 3:
*---#[ Diagram Group 4:
  #Case 3
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3) );
     #Else
        Multiply replace_( p1 , + Q - (k3) );
     #EndIf
     #Break
  #Case 4
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3+k4) );
     #Else
        Multiply replace_( p1 , + Q - (k3+k4) );
     #EndIf
     #Break
  #Case 5
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 11
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 14
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 25
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k2) );
     #Else
        Multiply replace_( p1 , - Q - (-k2) );
     #EndIf
     #Break
  #Case 30
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3+k4) );
     #Else
        Multiply replace_( p1 , + Q - (k3+k4) );
     #EndIf
     #Break
  #Case 32
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 42
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 46
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 52
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3) );
     #Else
        Multiply replace_( p1 , + Q - (k3) );
     #EndIf
     #Break
  #Case 55
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3) );
     #Else
        Multiply replace_( p1 , + Q - (k3) );
     #EndIf
     #Break
  #Case 60
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3+k4) );
     #Else
        Multiply replace_( p1 , + Q - (k3+k4) );
     #EndIf
     #Break
  #Case 65
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k2) );
     #Else
        Multiply replace_( p1 , - Q - (-k2) );
     #EndIf
     #Break
  #Case 75
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 114
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3) );
     #Else
        Multiply replace_( p1 , + Q - (k3) );
     #EndIf
     #Break
  #Case 133
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 145
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 172
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 189
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
*---#] Diagram Group 4:
*---#[ Diagram Group 5:
  #Case 201
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(-k3+k2) );
     #Else
        Multiply replace_( p1 , + Q - (-k3+k2) );
     #EndIf
     #Break
*---#] Diagram Group 5:
*---#[ Diagram Group 6:
  #Case 8
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 28
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k2) );
     #Else
        Multiply replace_( p1 , - Q - (-k2) );
     #EndIf
     #Break
  #Case 38
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 50
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 121
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 157
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 179
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
*---#] Diagram Group 6:
*---#[ Diagram Group 7:
  #Case 37
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(-k3+k2-k4) );
     #Else
        Multiply replace_( p1 , + Q - (-k3+k2-k4) );
     #EndIf
     #Break
  #Case 162
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(-k3+k2-k4) );
     #Else
        Multiply replace_( p1 , + Q - (-k3+k2-k4) );
     #EndIf
     #Break
  #Case 176
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , - Q - (0) );
     #EndIf
     #Break
*---#] Diagram Group 7:
*---#[ Diagram Group 8:
  #Case 6
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(-k3+k2-k4) );
     #Else
        Multiply replace_( p1 , + Q - (-k3+k2-k4) );
     #EndIf
     #Break
  #Case 17
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(-k3+k2-k4) );
     #Else
        Multiply replace_( p1 , + Q - (-k3+k2-k4) );
     #EndIf
     #Break
  #Case 31
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(k3-k2+k4) );
     #Else
        Multiply replace_( p1 , - Q - (k3-k2+k4) );
     #EndIf
     #Break
  #Case 35
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , - Q - (0) );
     #EndIf
     #Break
  #Case 41
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(-k3+k2-k4) );
     #Else
        Multiply replace_( p1 , + Q - (-k3+k2-k4) );
     #EndIf
     #Break
  #Case 45
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k2) );
     #Else
        Multiply replace_( p1 , - Q - (-k2) );
     #EndIf
     #Break
  #Case 53
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(k3-k2) );
     #Else
        Multiply replace_( p1 , - Q - (k3-k2) );
     #EndIf
     #Break
  #Case 58
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(k3-k2) );
     #Else
        Multiply replace_( p1 , - Q - (k3-k2) );
     #EndIf
     #Break
  #Case 63
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(k3-k2+k4) );
     #Else
        Multiply replace_( p1 , - Q - (k3-k2+k4) );
     #EndIf
     #Break
  #Case 68
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(k3-k2+k4) );
     #Else
        Multiply replace_( p1 , - Q - (k3-k2+k4) );
     #EndIf
     #Break
  #Case 73
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(k3-k2) );
     #Else
        Multiply replace_( p1 , - Q - (k3-k2) );
     #EndIf
     #Break
  #Case 138
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k2) );
     #Else
        Multiply replace_( p1 , - Q - (-k2) );
     #EndIf
     #Break
  #Case 150
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(-k3+k2-k4) );
     #Else
        Multiply replace_( p1 , + Q - (-k3+k2-k4) );
     #EndIf
     #Break
  #Case 169
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , - Q - (0) );
     #EndIf
     #Break
  #Case 186
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , - Q - (0) );
     #EndIf
     #Break
*---#] Diagram Group 8:
*---#[ Diagram Group 9:
  #Case 105
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 136
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 148
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2-k4) );
     #Else
        Multiply replace_( p1 , + Q - (k2-k4) );
     #EndIf
     #Break
  #Case 199
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3) );
     #Else
        Multiply replace_( p1 , - Q - (-k3) );
     #EndIf
     #Break
*---#] Diagram Group 9:
*---#[ Diagram Group 10:
  #Case 187
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
*---#] Diagram Group 10:
*---#[ Diagram Group 11:
  #Case 16
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 57
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k3+k4) );
     #Else
        Multiply replace_( p1 , + Q - (k3+k4) );
     #EndIf
     #Break
  #Case 62
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k4) );
     #Else
        Multiply replace_( p1 , + Q - (k4) );
     #EndIf
     #Break
  #Case 96
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k4) );
     #EndIf
     #Break
  #Case 124
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(0) );
     #Else
        Multiply replace_( p1 , + Q - (0) );
     #EndIf
     #Break
  #Case 160
     #If `WRAP'
        Multiply replace_( p1 , - Q - qshift * fshift(-k3-k4) );
     #Else
        Multiply replace_( p1 , - Q - (-k3-k4) );
     #EndIf
     #Break
  #Case 170
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
  #Case 177
     #If `WRAP'
        Multiply replace_( p1 , + Q - qshift * fshift(k2) );
     #Else
        Multiply replace_( p1 , + Q - (k2) );
     #EndIf
     #Break
*---#] Diagram Group 11:
   #Default
      #Message No Such Loop Diagram: `DIAG'
      #Terminate 1
   #EndSwitch
#EndProcedure
