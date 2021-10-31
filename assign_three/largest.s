 AREA     appcode, CODE, READONLY
     export __main	
	 IMPORT printMsg
     IMPORT printMsg2p
     IMPORT printMsg4p		 
	 ENTRY 
__main  function
	      LDR R2,=4   ;loading the registers with values directly
	      LDR R3,=5
	      LDR R4,=6	
          
		  CMP R2, R3    ; Comparing values of R2 and R3
		  IT LT         ; if R2<R3
		  MOVLT R2,R3   ; Move value in R3 to R2
          ;CSEL R2,R2,R3,GE   ; equivalent to a ternary operator in C language
	      CMP R2,R4     ; Comparing values of R2 and R4
		  IT LT         ; if R2<R4
		  MOVLT R2,R4   ; Move value of R4 to R2-- Now R2 has the largest number among the 3
	      ;CSEL R2,R2,R4,GE    
		  MOV R0,R2     ; Move final result to R0
		  BL printMsg 
stop        B stop  ; stop program
        endfunc
      end
