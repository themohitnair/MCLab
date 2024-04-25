        AREA PROG,CODE,READONLY
ENTRY   MOV R1,#0
        MOV R2,#1
        MOV R3,#0
LOOP    BL SQU
        ADD R3,R3,R4
        ADD R1,#1
        CMP R1,#5
        BNE LOOP
GO      B GO
SQU     MUL R4,R2,R2
        MOV PC,LR
        END