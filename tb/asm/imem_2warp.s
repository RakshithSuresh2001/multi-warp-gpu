.section .text
.global _start
_start:
    addi x1, x0, 42      # x1 = 42 = 0x2a (from x0, no dependency)
    nop
    nop
    nop
    nop
    nop
