 
 AREA     appcode, CODE, READONLY
     export __main	 
	 IMPORT printMsg
     IMPORT printMsg2p
     IMPORT printMsg4p
	 ENTRY 
__main  function                ; I have used the default values that are present in the memory locations. I haven't stored any value explicitly.
	       MOV R1, #0x00000000  ; initial memory location
		   MOV R2, #4           ; counter--> for no. of values in array
		   LDR R3, [R1]         ; loading first data
LOOP	   ADD R1,R1,#04        ; incrementing memory location by 4 bytes
		   LDR R4, [R1]         ; loading second data
		   CMP R3,R4            ; comparing the 2 data
		   ITE GE               ; IF R3>=R4, 
		   MOVGE R3, R3         ; THEN R3 gets the higher value
		   MOVLT R3, R4
		   SUB R2,R2,#1         ; decrement counter value
		   CMP R2,#00           ; compare whether counter =0
		   BNE LOOP             ; if counter counter != 0, start another iteration of LOOP
		   MOV R0,R3            ; Move final result in R0
		   BL printMsg
stop        B stop  ; stop program
        endfunc
      end
