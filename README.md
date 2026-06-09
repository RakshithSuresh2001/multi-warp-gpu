# multi-warp-gpu

A 2-warp, 8-lane SIMT GPU core implementing the RV32I ISA in SystemVerilog. Built from scratch, verified against the Spike ISS, and taken through full RTL-to-GDS physical design on ASAP7 7nm.

---

## Overview

This project implements the core execution engine of a GPU at the register-transfer level. Two warps run in round-robin, each with 8 parallel execution lanes. When one warp stalls on a load, the scheduler switches to the other, keeping the execution units busy. All 16 threads share an 8-bank scratchpad memory, with one bank dedicated per lane to avoid conflicts.

The design targets the RV32I base integer ISA and is validated against the Spike RISC-V ISA Simulator as a golden reference.

---

## Architecture

```
                        ┌─────────────────────────────────┐
                        │            gpu_top               │
                        │                                  │
              ┌─────────┴──────────┐                       │
              │   warp_scheduler   │  round-robin, 2 warps │
              └─────────┬──────────┘                       │
                        │ active_warp_id                   │
              ┌─────────┴──────────┐                       │
              │       fetch        │  PC array [2][32]     │
              └─────────┬──────────┘                       │
                        │ instr[31:0]                      │
              ┌─────────┴──────────┐                       │
              │     id_decode      │  RV32I decode, comb   │
              └─────────┬──────────┘                       │
                        │ ctrl signals                     │
         ┌──────────────┼──────────────┐                   │
    lane[0]         lane[1..6]      lane[7]                │
  ┌───────────┐                  ┌───────────┐             │
  │ ALU+RF    │   (x8 identical) │ ALU+RF    │             │
  └─────┬─────┘                  └─────┬─────┘             │
        │                              │                   │
  ┌─────┴──────────────────────────────┴─────┐             │
  │              scratchpad                  │             │
  │         8 banks x 256 x 32-bit           │             │
  └──────────────────────────────────────────┘             │
                        └─────────────────────────────────┘
```

**2 warps, 8 lanes each (16 parallel threads)**
- Round-robin warp scheduler with load stall detection
- Per-lane register files (32 x 32-bit, private per lane)
- 8-bank scratchpad, one bank per lane, no bank conflicts by construction
- RV32I ALU: ADD, SUB, AND, OR, XOR, SLT, SLL, SRL, SRA, and immediate variants
- Synchronous reset throughout (required for ASAP7 synthesis)

---

## Module List

| File | Description |
|------|-------------|
| `gpu_top.sv` | Top-level integration, instantiates all submodules |
| `warp_scheduler.sv` | Round-robin scheduler, READY/WAITING state per warp |
| `fetch.sv` | Holds per-warp PC array, drives instruction address |
| `id_decode.sv` | Combinational RV32I decoder, all instruction formats |
| `lane.sv` | Single ALU + register file read/write, x8 instantiated |
| `regfile.sv` | 2D register file: 2 warps x 8 lanes x 32 registers x 32-bit |
| `scratchpad.sv` | 8-bank SRAM model, one bank per lane |

---

## Verification

### Directed Testbench (Verilator)

34/34 tests passing across two test groups:

| Test Group | Coverage |
|------------|----------|
| Test 1: Single-warp ALU | ADD, SUB, AND, OR across all 8 lanes |
| Test 2: 2-warp round-robin | Warp switch on load stall, correct PC advance |

### Spike ISS Co-Simulation

6/6 registers match the Spike RISC-V ISA Simulator golden reference after execution. Final register state from RTL simulation compared against Spike commit log.

```bash
# Run testbench
make sim

# Run Spike co-simulation
make spike
```

---

## Physical Design Results (ASAP7 7nm)

Full RTL-to-GDS via OpenROAD. All steps: synthesis (Yosys), floorplan, placement, CTS, global routing, detailed routing, GDS merge, and DRC check (KLayout).

| Metric | Value |
|--------|-------|
| Standard Cells | 318 |
| Core Area | 39 µm² |
| Clock Frequency | 500 MHz |
| Total Power | 50.2 µW |
| DRC Violations | 0 |
| Antenna Violations | 0 |

### GDS Layout (KLayout)

<img width="971" height="826" alt="GPU Core GDS Layout" src="https://github.com/user-attachments/assets/ba6a07d2-2475-4ae8-9db7-1d40376dfde3" />

*318 standard cells, 39 µm² core area, 500 MHz, 0 DRC violations. ASAP7 7nm via OpenROAD.*

### Yosys Synthesis Fixes Required for ASAP7

The open-source Yosys flow does not support all SystemVerilog constructs. The following changes were made to get a clean synthesis:

| Issue | Fix |
|-------|-----|
| `automatic` keyword in tasks | Removed |
| `enum` types | Replaced with `logic` and `parameter` constants |
| Asynchronous reset | Converted to synchronous (ASAP7 has no async-reset cells) |
| Dynamic range selects | Replaced with explicit shift-and-mask logic |
| `$readmemh` | Removed, replaced with reset-time initialization |
| Output ports with no fanout | Added explicit assignments to prevent logic pruning |

---

## Key Design Decisions

**Why 2 warps?** Two is the minimum needed to demonstrate latency hiding. When warp 0 stalls on a load, warp 1 runs. One warp cannot hide its own latency.

**Why 8 lanes?** Powers of 2 map cleanly to the 8-bank scratchpad and the 2D register file indexing. It is also a manageable size for directed testbench coverage while still showing meaningful SIMT parallelism.

**Why synchronous reset?** ASAP7 standard cell libraries do not include async-reset flip-flops. All reset logic was converted to synchronous to allow clean synthesis and place-and-route.

---

## Known Bugs Fixed

**Bug 1: `$clog2` bit-width overflow in warp index**
The warp index register was declared with `$clog2(NUM_WARPS)` bits. With 2 warps, this is 1 bit, which caused a truncation in the modulo increment during synthesis. Fixed by using an explicit `logic [1:0]` register with a conditional increment.

**Bug 2: Combinational stall loop between fetch and decode**
`fetch_stall` was driven combinationally by `dmem_ren`, which depended on the decode output, which depended on the instruction fetch, which was gated by `fetch_stall`. This created a zero-delay loop causing X propagation in simulation and an unresolvable loop error in synthesis. Fixed by registering `fetch_stall` to break the combinational path.

---

## Build and Run

### Requirements

- Verilator 5.020+
- Spike ISS (for co-simulation)
- OpenROAD + ASAP7 PDK (for physical design)

### Simulation

```bash
cd sim
make sim        # run directed testbench
make waves      # open GTKWave with VCD dump
```
## Simulation Waveforms

<img width="1605" height="394" alt="Screenshot 2026-06-09 125829" src="https://github.com/user-attachments/assets/ded8c2ef-2e90-4a92-a9b6-a91bf3dc20d9" />

Key events visible in the waveform:
- `rst_n` deasserts at ~50ns, execution begins on warp 0
- `rd[4:0]` increments through registers 01 to 08, confirming sequential ALU writeback across all 8 lanes
- `alu_op` cycles through 1, 2, 3 — ADD, SUB, AND operations executing in order
- `stall` pulses high at ~420ns on the load instruction
- `active_warp[0]` flips from 0 to 1 immediately after, confirming round-robin warp switch
- `pc_wen[1:0]` shows `10` at the transition — warp 1 PC advancing

### Physical Design

```bash
cd pd
make synth      # Yosys synthesis
make floorplan  # OpenROAD floorplan
make route      # Full place and route
make gds        # GDS export and DRC
```

---

### Why only 318 cells? 😅

No cache, no FPU, no multiplier, no memory controller. Just a scheduler, a decoder, 8 ALUs, and register storage. The design demonstrates SIMT execution, not compute throughput. For reference, the systolic array in this portfolio uses 32,446 cells on ASAP7 just for 64 MAC units.

## Repository

**GitHub:** [github.com/RakshithSuresh2001/multi-warp-gpu](https://github.com/RakshithSuresh2001/multi-warp-gpu)
