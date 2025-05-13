Label_debut_prog:
    MOV r0, #5        @ charge 5 dans r0
    MOV r1, #2        @ charge 2 dans r1
    ADD r2, r0, r1    @ r0 + r1, resultat dans r2
    SUB r3, r2, #3    @ r2 - 3, resultat dans r3
    B Label_saut_1    @ Saut inconditionnel jusqu'a Label_saut_1

    .org 0x20         @ Set address to 0x20
Label_saut_1:
    MOV r4, #4        @ charge 4 dans r4
    SUB r2, r3, r4    @ r3 - r4, resultat dans r2
    BEQ Label_saut_2  @ saut conditionnel si egal zero jusqu'a Label_saut_2 (condition si Z = '1')

    .org 0x34         @ Set address to 0x34
Label_saut_2:
    MOV r0, #4        @ Charge 4 dans r0
    MOV r1, #128      @ Charge 128 dans r1
    B Label_debut_prog @ Saut inconditionnel jusqu'a Label_debut_prog