# multi-warp-gpu

2-warp, 8-lane SIMT GPU core in RV32I.

## Architecture
- 2 warps, 8 execution lanes each (16 parallel threads)
- RV32I ISA — validated against Spike co-simulation
- Round-robin warp scheduler with stall detection
- Per-lane register files (32 x 32-bit each)
- 8-bank scratchpad memory (one bank per lane)

## Module List
| File | Description |
|------|-------------|
| gpu_top.sv | Top level |
| warp_scheduler.sv | Round-robin scheduler, READY/WAITING state |
| fetch.sv | IMEM read at active warp PC |
| decode.sv | RV32I decoder (reused from riscv-pipeline-cpu) |
| lane.sv | Single ALU + register file (x8 instantiated) |
| regfile.sv | 32x32-bit register file |
| scratchpad.sv | 8-bank SRAM model |

## Status
- [x] warp_scheduler.sv
- [ ] fetch.sv
- [ ] decode.sv (port from riscv-pipeline-cpu)
- [ ] lane.sv
- [ ] regfile.sv (port from riscv-pipeline-cpu)
- [ ] scratchpad.sv
- [ ] gpu_top.sv
