################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include example/src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: periph_spi.axf

# Tool invocations
periph_spi.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"/home/jerin/Work/myrepository/mcu/lpc_chip_175x_6x/Debug" -L"/home/jerin/Work/myrepository/mcu/lpc_board_nxp_lpcxpresso_1769/Debug" -Xlinker -Map="periph_spi.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "periph_spi_Debug.ld" -o "periph_spi.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) periph_spi.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "periph_spi.axf"; # arm-none-eabi-objcopy -v -O binary "periph_spi.axf" "periph_spi.bin" ; # checksum -p LPC1769 -d "periph_spi.bin";
	-@echo ' '

.PHONY: all clean dependents post-build

-include ../makefile.targets
