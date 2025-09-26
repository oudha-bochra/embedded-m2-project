# C1M2 – Embedded Systems Assignment (Coursera)

This repository contains the solution for 'Module 2' of the Coursera Embedded Systems course.  
It includes a build system with 'Makefile' that supports both the 'HOST' platform (local machine) and the 'MSP432' target (ARM Cortex-M4).

---

# Project Structure



m2/
├── src/
│ ├── main.c
│ ├── memory.c
│ ├── interrupts_msp432p401r_gcc.c
│ ├── startup_msp432p401r_gcc.c
│ ├── system_msp432p401r.c
│ └── sources.mk
├── include/
│ ├── common/
│ │ ├── memory.h
│ │ └── platform.h
│ ├── msp432/
│ │ ├── msp_compatibility.h
│ │ ├── msp432p401r.h
│ │ └── system_msp432p401r.h
│ └── CMSIS/ (ARM CMSIS headers)
├── Makefile
├── sources.mk
└── msp432p401r.lds


---

##  Build Instructions

### Build for HOST (local machine)
```bash
make PLATFORM=HOST
./c1m2_host.out

Build for MSP432 (ARM Cortex-M4 target)
make PLATFORM=MSP432


This generates the executable:

c1m2_msp432.out

 Clean Project
make clean


Removes all generated files (*.o, *.out, *.map, *.asm).

✅ Features

Cross-compilation support for ARM Cortex-M4 (MSP432)

Host compilation for testing on Linux environment

Organized source and header files

Proper Makefile with platform-specific flags

Submission archive ready for Coursera peer review

 Author

Oudha Bochra
Embedded Systems Essentials – Coursera Assignment (Module 2)
