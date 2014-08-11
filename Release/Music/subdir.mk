################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Music/Music.cpp 

CPP_DEPS += \
./Music/Music.cpp.d 

LINK_OBJ += \
./Music/Music.cpp.o 


# Each subdirectory must supply rules for building sources it contributes
Music/Music.cpp.o: ../Music/Music.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


