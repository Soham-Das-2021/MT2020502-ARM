 AREA     appcode, CODE, READONLY
     export __main
     IMPORT printMsg
     IMPORT printMsg2p
     IMPORT printMsg4p	 
	 ENTRY 
__main  function
           MOV R3, #10          ; counter--> value of N  
		   LDR R4,=0
		   MOV R0,R4
		   BL printMsg
		   LDR R5,=1
		   MOV R0,R5
		   BL printMsg
LOOP	   ADD R6,R4,R5         ; adding f(n-1)+f(n-2)
		   MOV R0,R6	
		   BL printMsg
	       MOV R4,R5            ; storing address of f(n-2) into register for f(n-1)
		   MOV R5,R6
		   SUB R3,R3,#01        ; decrementing the value of N
		   CMP R3,#00           ; IF R3!=0
		   BNE LOOP             ; Branch to LOOP
stop        B stop  ; stop program
        endfunc
      end