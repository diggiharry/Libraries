################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include arduino/variant/subdir.mk
-include arduino/core/USB/subdir.mk
-include arduino/core/subdir.mk
-include U8glib/utility/subdir.mk
-include U8glib/subdir.mk
-include ShiftBar/subdir.mk
-include ST7565/subdir.mk
-include Music/subdir.mk
-include MPR121/subdir.mk
-include DueTimer/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
C:/Users/sei/workspace/libraries/Release/arduino.ar \

ELF += \
libraries.elf \

EEP += \
libraries.eep \

FLASH_IMAGE += \
Release/libraries.bin \


# All Target
all: libraries

# Tool invocations
libraries: $(FLASH_IMAGE)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-size" -A "C:/Users/sei/workspace/libraries/Release/libraries.elf"
	@echo 'Finished building target: $@'
	@echo ' '

C:/Users/sei/workspace/libraries/Release/arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-ar" rcs "C:/Users/sei/workspace/libraries/Release/arduino.ar"   $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

libraries.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -Os -Wl,--gc-sections -mcpu=cortex-m3 "-T/C:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/variants/arduino_due_x/linker_scripts/gcc/flash.ld" "-Wl,-Map,C:/Users/sei/workspace/libraries/Release/libraries.map" -o "C:/Users/sei/workspace/libraries/Release/libraries.elf" "-LC:/Users/sei/workspace/libraries/Release" -lm -lgcc -mthumb -Wl,--cref -Wl,--check-sections -Wl,--gc-sections -Wl,--entry=Reset_Handler -Wl,--unresolved-symbols=report-all -Wl,--warn-common -Wl,--warn-section-align -Wl,--warn-unresolved-symbols -Wl,--start-group "C:/Users/sei/workspace/libraries/Release/arduino/syscalls_sam3.c.o"   $(LINK_OBJ) $(AR)  "/C:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/variants/arduino_due_x/libsam_sam3x8e_gcc_rel.a" "C:/Users/sei/workspace/libraries/Release/arduino.ar" -Wl,--end-group
	@echo 'Finished building: $@'
	@echo ' '

libraries.eep: $(ELF)
	@echo 'Create eeprom image'
	${A.RECIPE.OBJCOPY.EEP.PATTERN}
	@echo 'Finished building: $@'
	@echo ' '

Release/libraries.bin: $(EEP)
	@echo 'Create Flash image (ihex format)'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-objcopy" -O binary "C:/Users/sei/workspace/libraries/Release/libraries.elf" "C:/Users/sei/workspace/libraries/Release/libraries.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELF)$(C++_DEPS)$(AR)$(C_DEPS)$(CC_DEPS)$(FLASH_IMAGE)$(AR_OBJ)$(CPP_DEPS)$(LINK_OBJ)$(EEP)$(CXX_DEPS)$(C_UPPER_DEPS)$(SIZEDUMMY) libraries
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
