addi R3, 5
addi R4, 2
mul R5, R3, R4
div R5, R5, R4
sll R5, R5, R0
and R5, R3, R4
or R5, R3, R4
xor R5, R3, R4
blt R3, R4, 2
addi R5, 1
jalr R0, 2
addi R5, 0
addi R6, 3
sw R6, 0
addi R12, 0
add R12, R6
jal fat
addi R7, R12, 0
sw R7, 1
ebreak

fat:
addi R2, -1
sw R1, 0
addi R2, -1
sw R12, 0
addi R3, R12, 0
addi R5, 1
sub R4, R3, R5
bge R4, 0, 3
addi R12, 1
jalr R0, 4
addi R12, R4, 0
jal fat
mul R12, R3
lw R12, 1
addi R2, 1
lw R1, 0
addi R2, 1
jalr R1, 0
