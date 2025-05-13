
    mov r0, #1  @ A
    mov r1, #2  @ B
    mov r2, #3  @ C
    mov r3, #4  @ D

    add r4, r0, r1  @ r4 = A + B
    add r4, r4, r2  @ r4 = (A + B) + C
    add r4, r4, r3  @ r4 = (A + B + C) + D

    lsr r4, r4, #2  @ r4 = (A + B + C + D) / 4 (décalage de 2 bits vers la droite)

    mov r7, #1      @ Code de sortie Linux (sys_exit)
    svc #0          @ Appel système
 