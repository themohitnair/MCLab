		AREA RESET, CODE, READONLY
A RN 1
B RN 2
C RN 3
N RN 4
ENTRY
		MOV A, #1;
		MOV B, #2;
		MOV N, #10;
		SUB N, N, #2;
		MOV R5, #0x40000000
		STR A, [R5]
		STR B, [R5, #4]
		ADD R5, R5, #8
LOOP	ADD C, A, B;
		STR C, [R5], #4
		MOV A, B;
		MOV B, C;
		SUBS N, N, #1
		BNE LOOP
GO		B GO
		END
		