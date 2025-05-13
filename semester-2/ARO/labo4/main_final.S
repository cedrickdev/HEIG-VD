@ Programme Pour la validation

START:
MOV r0, #13
MOV r1, #26
MOV r3, #6
ADD r0, r0, #19
ADD r2, r0, r3
ADD r2, #1
SUB r3, r1, r2
SUB r4, r1, #2
SUB r1, #128

STEP_1:
MOV r5, #10
STRH r1, [r5, #2]
LDRH r4, [r5, #2]

STEP_2:
STRB r2, [r5, #3]
LDRB r0, [r5, #3]
LDRH r2, [r5, #2]

STEP_3:
MOV r1, #4
STRB r4, [r5, r1]
LDRB r3, [r5, r1]

STEP_4:
STRH r2, [r5, r1]
LDRH r4, [r5, r1] 
AND r2, r0
LSL r0, r3, #2
LSR r4, r1

STEP_5:
ORR r0, r2
NEG r1, r0
EOR r1, r3
ROR r3, r2
MVN r4, r3

STEP_6:
ASR r0, r2
ASR r4, r3, #2

STEP_7:
SUB r2, #2
BEQ STEP_8
MOV r0, #12

STEP_8:
B STEP_10

STEP_9:
MOV r1, #0

.org 0x60
STEP_10: 
MOV r0, #42
MOV r1, #60
NOP
NOP
