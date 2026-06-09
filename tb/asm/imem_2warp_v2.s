.section .text
.global _start

# Warp 0 program — starts at 0x00
_start:
    addi x1, x0, 10      # x1 = 10
    lw   x2, 0(x0)       # load stall — forces scheduler to switch to warp 1
    nop
    nop
    nop
    nop
    nop
    nop

# Warp 1 program — starts at 0x20 (8 instructions * 4 bytes)
warp1_start:
    addi x1, x0, 20      # x1 = 20
    nop
    nop
    nop
    nop
    nop
    nop
    nop
