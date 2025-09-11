#******************************************************************************
# Simple Makefile for HOST and MSP432 platforms
#*******************************************************************************************
# Simple Makefile for HOST and MSP432 platforms
#******************************************************************************

# Platform: HOST or MSP432
#******************************************************************************
# Makefile for HOST build
#******************************************************************************
#******************************************************************************
# Makefile for HOST and MSP432 builds
#******************************************************************************n
#******************************************************************************
# Makefile for HOST and MSP432 builds
#******************************************************************************

# Makefile for M2 Assessment
# Makefile for M2 Assessment

# Compiler setting
# Compiler definitions
CC_HOST = gcc
CC_MSP  = arm-none-eabi-gcc

# Common flags
CFLAGS = -Wall -Werror -g -O0 -std=c99

# Include paths
INCLUDES = -Iinclude -Iinclude/common -Iinclude/msp432 -Iinclude/CMSIS

# Source files
SRCS = src/main.c src/memory.c

# Extra sources for MSP432
MSP_SRCS = src/interrupts_msp432p401r_gcc.c src/startup_msp432p401r_gcc.c src/system_msp432p401r.c

# Output
OUT_HOST = c1m2_host.out
OUT_MSP  = c1m2_msp432.out

# Default rule
all: $(OUT_HOST)
# Build for HOST
$(OUT_HOST): $(SRCS)
	$(CC_HOST) $(CFLAGS) -DHOST $(INCLUDES) $(SRCS) -o $(OUT_HOST)

# Build for MSP432
$(OUT_MSP): $(SRCS) $(MSP_SRCS)
	$(CC_MSP) $(CFLAGS) -DMSP432 $(INCLUDES) $(SRCS) $(MSP_SRCS) \
	-mcpu=cortex-m4 -mthumb -march=armv7e-m -mfloat-abi=hard -mfpu=fpv4-sp-d16 \
	-specs=nosys.specs -T msp432p401r.lds -o $(OUT_MSP)

# Platform selection
ifeq ($(PLATFORM),HOST)
all: $(OUT_HOST)
endif

ifeq ($(PLATFORM),MSP432)
all: $(OUT_MSP)
endif


# Clean rule
clean:
	rm -f *.o *.out *.map *.asm
