		AREA RESET, CODE, READONLY
N RN 1
R RN 2
RES RN 3
ENTRY	
		MOV N, #6; TO FIND 6P3
		MOV R, #3;
		MOV RES, #1; INITIALIZING ANSWER WITH 1
LOOP	MUL RES, N, RES; 
		SUBS N, N, #1;
		CMP N, R; MULTIPLYING UNTIL N AND R ARE EQUAL WHILE N IS DECREMENTED
		BNE LOOP;
GO		B GO
		END