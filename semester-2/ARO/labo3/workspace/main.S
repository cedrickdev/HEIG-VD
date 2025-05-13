mov r1,	#5
add r0, r2, r3
mov r1, #1
mov r2, #3
mov r3, #4
add r0, r2, r1
and r3, r0

    LABEL_START:
mov r4, #10       @ Load immediate value 10 into r4
add r5, r4, r1    @ Add r4 and r1, store result in r5
sub r6, r5, #2    @ Subtract 2 from r5, store result in r6
B LABEL_SAUT_1 @ saut inconditionnel en avant
.org 0x40
LABEL_SAUT_1:
mov r7, #20       @ Load immediate value 20 into r7
add r8, r7, r6    @ Add r7 and r6, store result in r8
lsr r9, r8, #1    @ Logical shift right r8 by 1 bit, store in r9
B LABEL_START @ saut inconditionnel en arriere
