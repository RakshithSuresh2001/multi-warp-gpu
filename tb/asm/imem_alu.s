.section .text
.global _start
_start:
    addi x1, x0, 17      # x1 = 17
    nop
    nop
    addi x2, x0, 16      # x2 = 16
    nop
    nop
    add  x5, x1, x2      # x5 = 33 = 0x21
    nop
    nop
    sub  x6, x1, x2      # x6 = 1
    nop
    nop
    and  x7, x1, x2      # x7 = 0x10
    nop
    nop
    or   x8, x1, x2      # x8 = 0x11
    nop
    nop
    nop
