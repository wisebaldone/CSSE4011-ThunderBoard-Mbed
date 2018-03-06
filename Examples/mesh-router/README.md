Thread Mesh Router
==================

This example creates a thread router which broadcasts a message to the "all" ip address and outputs serial at 9600bps. The demo will send a message when the left button is pressed and this will turn off the led of all thunderboards in the mesh.

## Installation

1. `mbed deploy`
2. `mbed compile`
3. Silicon labs Simplicity to program the binary located in `/BUILD/TB_SENSE_12/GCC_ARM/mesh-router.bin`.