export PLATFORM           = asap7
export DESIGN_NAME        = gpu_top
export VERILOG_FILES      = $(DESIGN_DIR)/warp_scheduler.sv \
                            $(DESIGN_DIR)/fetch.sv \
                            $(DESIGN_DIR)/id_decode.sv \
                            $(DESIGN_DIR)/lane.sv \
                            $(DESIGN_DIR)/regfile.sv \
                            $(DESIGN_DIR)/scratchpad_bank.sv \
                            $(DESIGN_DIR)/scratchpad.sv \
                            $(DESIGN_DIR)/gpu_top.sv \
                            $(PLATFORM_DIR)/verilog/fakeram7_256x32.sv
export SDC_FILE           = $(DESIGN_DIR)/constraint.sdc
export ADDITIONAL_LEFS    = $(PLATFORM_DIR)/lef/fakeram7_256x32.lef
export ADDITIONAL_LIBS    = $(PLATFORM_DIR)/lib/NLDM/fakeram7_256x32.lib
export CORE_UTILIZATION   = 30
export CORE_ASPECT_RATIO  = 1
export CORE_MARGIN        = 2
export PLACE_DENSITY      = 0.50
export CLOCK_PERIOD       = 2000
export ABC_AREA           = 1
export LEC_ENABLE         = 0
export LEC_CHECK          = 0
export SYNTH_MEMORY_MAX_BITS = 1000000
export DFF_MAP_FILE = $(DESIGN_DIR)/dff_map.v
export SYNTH_KEEP_MODULES = scratchpad_bank
export IO_CONSTRAINTS = $(DESIGN_DIR)/io.tcl
export MACRO_PLACE_HALO = 1 1
export MACRO_PLACEMENT_TCL = $(DESIGN_DIR)/macro_placement.tcl
