Thread Mesh Rssi Router
=======================

This example creates a router than fetches the rssi from the current mesh thread network.

Note: You can change the network channel in the mbed_app.json with the line being: `"mbed-mesh-api.thread-config-channel" : 18`.


## Installation

You may need to run `mbed init .` first if errors appear about libraries in other folders.

1. `mbed deploy`
2. `mbed compile`
3. Silicon labs Simplicity to program the binary located in `/BUILD/TB_SENSE_12/GCC_ARM/mesh-rssi.bin`.