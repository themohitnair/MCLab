		AREA RESET, CODE, READONLY
ENTRY
		MOV R1, #0; RESULTING SUM
		MOV R2, #5; SQUARE TO ADD AND ITERATOR
LOOP	BL SQU
		ADD R1, R1, R3; ADDING SQUARE TO SUM
		SUBS R2, R2, #1; REDUCING ITERATOR
		BNE LOOP
GO		B GO
SQU		MUL R3, R2, R2; COMPUTING SQUARE
		BX LR; BRANCH BACK TO CALL
		END