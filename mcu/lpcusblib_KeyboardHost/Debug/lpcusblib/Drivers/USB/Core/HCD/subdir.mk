################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lpcusblib/Drivers/USB/Core/HCD/HCD.c 

OBJS += \
./lpcusblib/Drivers/USB/Core/HCD/HCD.o 

C_DEPS += \
./lpcusblib/Drivers/USB/Core/HCD/HCD.d 


# Each subdirectory must supply rules for building sources it contributes
lpcusblib/Drivers/USB/Core/HCD/%.o: ../lpcusblib/Drivers/USB/Core/HCD/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_LPCOPEN -D__LPC175X_6X__ -DUSB_HOST_ONLY -DCORE_M3 -I"/home/jerin/Work/myrepository/mcu/lpc_chip_175x_6x/inc" -I"/home/jerin/Work/myrepository/mcu/lpc_board_nxp_lpcxpresso_1769/inc" -I"/home/jerin/Work/myrepository/mcu/lpcusblib_KeyboardHost/lpcusblib/Drivers/USB" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

