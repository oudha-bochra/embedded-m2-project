# sources.mk - list of sources and includes for M2

# Files to compile for HOST build (only safe files)
SOURCES_HOST = src/main.c src/memory.c

# Files to compile for MSP432 build (includes platform-specific files)
SOURCES_MSP432 = src/main.c src/memory.c src/interrupts_msp432p401r_gcc.c \
                 src/startup_msp432p401r_gcc.c src/system_msp432p401r.c

# Include paths (adjust if your include layout differs)
INCLUDES = -Iinclude -Iinclude/common -Iinclude/msp432 -Iinclude/CMSIS
