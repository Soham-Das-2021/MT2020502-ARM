 AREA    appcode, CODE, READONLY
     export __main	 
	 IMPORT printMsg
     IMPORT printMsg2p
     IMPORT printMsg4p
	 ENTRY 
__main  function                ; I have used the default values that are present in the memory locations. I haven't explicitly stored any values in memory.
	       MOV R1, #0x00000000  ; initial memory location
		   MOV R2, #5           ; counter--> for no. of values in array
		   MOV R5, #0           ; counter--> for counting no. of Even numbers
LOOP	   LDR R3, [R1]         ; loading first data
		   ADD R1,R1,#04        ; incrementing memory location by 4 bytes
		   AND R4,R3,#01        ; AND ing data with 1
		   CMP R4,#00           ; comparing the 2 data
		   IT EQ                ; IF R4==0, 
		   ADDEQ R5,R5,#1;      ; no. is even, increment count value
		   SUB R2,R2,#1         ; decrement counter value for array
		   CMP R2,#00           ; compare whether counter =0
		   BNE LOOP             ; if counter counter != 0, start another iteration of LOOP
		   MOV R0, R5
		   BL printMsg
stop       B stop  ; stop program
        endfunc
      end
