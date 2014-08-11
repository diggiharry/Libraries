################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/sei/workspace/libraries/Digital_Light_Sensor/Digital_Light_TSL2561.cpp 

CPP_DEPS += \
./Libraries/Digital_Light_Sensor/Digital_Light_TSL2561.cpp.d 

LINK_OBJ += \
./Libraries/Digital_Light_Sensor/Digital_Light_TSL2561.cpp.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/Digital_Light_Sensor/Digital_Light_TSL2561.cpp.o: C:/Users/sei/workspace/libraries/Digital_Light_Sensor/Digital_Light_TSL2561.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -I"C:\Users\sei\workspace\libraries\DueTimer" -I"C:\Users\sei\workspace\libraries\MPR121" -I"C:\Users\sei\workspace\libraries\U8glib" -I"C:\Users\sei\workspace\libraries\U8glib\utility" -I"C:\Users\sei\workspace\libraries\UI" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\libraries\SPI" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\libraries\Wire" -I"C:\Users\sei\workspace\libraries\ShiftBar" -I"C:\Users\sei\workspace\libraries\RTC" -I"C:\Users\sei\workspace\libraries\SimpleTimer" -I"C:\Users\sei\workspace\libraries\Digital_Light_Sensor" -I"C:\Users\sei\workspace\libraries\RGBEnc" -I"C:\Users\sei\workspace\libraries\ShiftBar_Anim" -I"C:\Users\sei\workspace\libraries\Scroller" -I"C:\Users\sei\workspace\libraries\Encoder" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


