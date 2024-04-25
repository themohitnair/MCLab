        AREA PROG,CODE,READONLY
ENTRY   
        MOV R1,#1
        MOV R2,#9
        MOV R3,#1
BACKK   ADD R3,R3,#2
        ADD R1,R1,R3
        SUBS R1,#1
        BNE BACKK
GO      B GO
        END