################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../U8glib/utility/chessengine.c \
../U8glib/utility/u8g_bitmap.c \
../U8glib/utility/u8g_circle.c \
../U8glib/utility/u8g_clip.c \
../U8glib/utility/u8g_com_api.c \
../U8glib/utility/u8g_com_api_16gr.c \
../U8glib/utility/u8g_com_arduino_common.c \
../U8glib/utility/u8g_com_arduino_fast_parallel.c \
../U8glib/utility/u8g_com_arduino_hw_spi.c \
../U8glib/utility/u8g_com_arduino_no_en_parallel.c \
../U8glib/utility/u8g_com_arduino_parallel.c \
../U8glib/utility/u8g_com_arduino_port_d_wr.c \
../U8glib/utility/u8g_com_arduino_ssd_i2c.c \
../U8glib/utility/u8g_com_arduino_st7920_custom.c \
../U8glib/utility/u8g_com_arduino_st7920_hw_spi.c \
../U8glib/utility/u8g_com_arduino_st7920_spi.c \
../U8glib/utility/u8g_com_arduino_std_sw_spi.c \
../U8glib/utility/u8g_com_arduino_sw_spi.c \
../U8glib/utility/u8g_com_arduino_t6963.c \
../U8glib/utility/u8g_com_atmega_hw_spi.c \
../U8glib/utility/u8g_com_atmega_parallel.c \
../U8glib/utility/u8g_com_atmega_st7920_hw_spi.c \
../U8glib/utility/u8g_com_atmega_st7920_spi.c \
../U8glib/utility/u8g_com_atmega_sw_spi.c \
../U8glib/utility/u8g_com_i2c.c \
../U8glib/utility/u8g_com_io.c \
../U8glib/utility/u8g_com_null.c \
../U8glib/utility/u8g_cursor.c \
../U8glib/utility/u8g_delay.c \
../U8glib/utility/u8g_dev_flipdisc_2x7.c \
../U8glib/utility/u8g_dev_gprof.c \
../U8glib/utility/u8g_dev_ht1632.c \
../U8glib/utility/u8g_dev_ili9325d_320x240.c \
../U8glib/utility/u8g_dev_ks0108_128x64.c \
../U8glib/utility/u8g_dev_lc7981_160x80.c \
../U8glib/utility/u8g_dev_lc7981_240x128.c \
../U8glib/utility/u8g_dev_lc7981_240x64.c \
../U8glib/utility/u8g_dev_lc7981_320x64.c \
../U8glib/utility/u8g_dev_null.c \
../U8glib/utility/u8g_dev_pcd8544_84x48.c \
../U8glib/utility/u8g_dev_pcf8812_96x65.c \
../U8glib/utility/u8g_dev_sbn1661_122x32.c \
../U8glib/utility/u8g_dev_ssd1306_128x32.c \
../U8glib/utility/u8g_dev_ssd1306_128x64.c \
../U8glib/utility/u8g_dev_ssd1309_128x64.c \
../U8glib/utility/u8g_dev_ssd1322_nhd31oled_bw.c \
../U8glib/utility/u8g_dev_ssd1322_nhd31oled_gr.c \
../U8glib/utility/u8g_dev_ssd1325_nhd27oled_bw.c \
../U8glib/utility/u8g_dev_ssd1325_nhd27oled_bw_new.c \
../U8glib/utility/u8g_dev_ssd1325_nhd27oled_gr.c \
../U8glib/utility/u8g_dev_ssd1325_nhd27oled_gr_new.c \
../U8glib/utility/u8g_dev_ssd1327_96x96_gr.c \
../U8glib/utility/u8g_dev_ssd1351_128x128.c \
../U8glib/utility/u8g_dev_st7565_64128n.c \
../U8glib/utility/u8g_dev_st7565_dogm128.c \
../U8glib/utility/u8g_dev_st7565_dogm132.c \
../U8glib/utility/u8g_dev_st7565_lm6059.c \
../U8glib/utility/u8g_dev_st7565_lm6063.c \
../U8glib/utility/u8g_dev_st7565_nhd_c12832.c \
../U8glib/utility/u8g_dev_st7565_nhd_c12864.c \
../U8glib/utility/u8g_dev_st7687_c144mvgd.c \
../U8glib/utility/u8g_dev_st7920_128x64.c \
../U8glib/utility/u8g_dev_st7920_192x32.c \
../U8glib/utility/u8g_dev_st7920_202x32.c \
../U8glib/utility/u8g_dev_t6963_128x64.c \
../U8glib/utility/u8g_dev_t6963_240x128.c \
../U8glib/utility/u8g_dev_t6963_240x64.c \
../U8glib/utility/u8g_dev_tls8204_84x48.c \
../U8glib/utility/u8g_dev_uc1601_c128032.c \
../U8glib/utility/u8g_dev_uc1610_dogxl160.c \
../U8glib/utility/u8g_dev_uc1701_dogs102.c \
../U8glib/utility/u8g_dev_uc1701_mini12864.c \
../U8glib/utility/u8g_ellipse.c \
../U8glib/utility/u8g_font.c \
../U8glib/utility/u8g_font_data.c \
../U8glib/utility/u8g_line.c \
../U8glib/utility/u8g_ll_api.c \
../U8glib/utility/u8g_page.c \
../U8glib/utility/u8g_pb.c \
../U8glib/utility/u8g_pb14v1.c \
../U8glib/utility/u8g_pb16h1.c \
../U8glib/utility/u8g_pb16h2.c \
../U8glib/utility/u8g_pb16v1.c \
../U8glib/utility/u8g_pb16v2.c \
../U8glib/utility/u8g_pb32h1.c \
../U8glib/utility/u8g_pb8h1.c \
../U8glib/utility/u8g_pb8h1f.c \
../U8glib/utility/u8g_pb8h2.c \
../U8glib/utility/u8g_pb8h8.c \
../U8glib/utility/u8g_pb8v1.c \
../U8glib/utility/u8g_pb8v2.c \
../U8glib/utility/u8g_pbxh16.c \
../U8glib/utility/u8g_pbxh24.c \
../U8glib/utility/u8g_rect.c \
../U8glib/utility/u8g_rot.c \
../U8glib/utility/u8g_scale.c \
../U8glib/utility/u8g_state.c \
../U8glib/utility/u8g_u16toa.c \
../U8glib/utility/u8g_u8toa.c \
../U8glib/utility/u8g_virtual_screen.c 

C_DEPS += \
./U8glib/utility/chessengine.c.d \
./U8glib/utility/u8g_bitmap.c.d \
./U8glib/utility/u8g_circle.c.d \
./U8glib/utility/u8g_clip.c.d \
./U8glib/utility/u8g_com_api.c.d \
./U8glib/utility/u8g_com_api_16gr.c.d \
./U8glib/utility/u8g_com_arduino_common.c.d \
./U8glib/utility/u8g_com_arduino_fast_parallel.c.d \
./U8glib/utility/u8g_com_arduino_hw_spi.c.d \
./U8glib/utility/u8g_com_arduino_no_en_parallel.c.d \
./U8glib/utility/u8g_com_arduino_parallel.c.d \
./U8glib/utility/u8g_com_arduino_port_d_wr.c.d \
./U8glib/utility/u8g_com_arduino_ssd_i2c.c.d \
./U8glib/utility/u8g_com_arduino_st7920_custom.c.d \
./U8glib/utility/u8g_com_arduino_st7920_hw_spi.c.d \
./U8glib/utility/u8g_com_arduino_st7920_spi.c.d \
./U8glib/utility/u8g_com_arduino_std_sw_spi.c.d \
./U8glib/utility/u8g_com_arduino_sw_spi.c.d \
./U8glib/utility/u8g_com_arduino_t6963.c.d \
./U8glib/utility/u8g_com_atmega_hw_spi.c.d \
./U8glib/utility/u8g_com_atmega_parallel.c.d \
./U8glib/utility/u8g_com_atmega_st7920_hw_spi.c.d \
./U8glib/utility/u8g_com_atmega_st7920_spi.c.d \
./U8glib/utility/u8g_com_atmega_sw_spi.c.d \
./U8glib/utility/u8g_com_i2c.c.d \
./U8glib/utility/u8g_com_io.c.d \
./U8glib/utility/u8g_com_null.c.d \
./U8glib/utility/u8g_cursor.c.d \
./U8glib/utility/u8g_delay.c.d \
./U8glib/utility/u8g_dev_flipdisc_2x7.c.d \
./U8glib/utility/u8g_dev_gprof.c.d \
./U8glib/utility/u8g_dev_ht1632.c.d \
./U8glib/utility/u8g_dev_ili9325d_320x240.c.d \
./U8glib/utility/u8g_dev_ks0108_128x64.c.d \
./U8glib/utility/u8g_dev_lc7981_160x80.c.d \
./U8glib/utility/u8g_dev_lc7981_240x128.c.d \
./U8glib/utility/u8g_dev_lc7981_240x64.c.d \
./U8glib/utility/u8g_dev_lc7981_320x64.c.d \
./U8glib/utility/u8g_dev_null.c.d \
./U8glib/utility/u8g_dev_pcd8544_84x48.c.d \
./U8glib/utility/u8g_dev_pcf8812_96x65.c.d \
./U8glib/utility/u8g_dev_sbn1661_122x32.c.d \
./U8glib/utility/u8g_dev_ssd1306_128x32.c.d \
./U8glib/utility/u8g_dev_ssd1306_128x64.c.d \
./U8glib/utility/u8g_dev_ssd1309_128x64.c.d \
./U8glib/utility/u8g_dev_ssd1322_nhd31oled_bw.c.d \
./U8glib/utility/u8g_dev_ssd1322_nhd31oled_gr.c.d \
./U8glib/utility/u8g_dev_ssd1325_nhd27oled_bw.c.d \
./U8glib/utility/u8g_dev_ssd1325_nhd27oled_bw_new.c.d \
./U8glib/utility/u8g_dev_ssd1325_nhd27oled_gr.c.d \
./U8glib/utility/u8g_dev_ssd1325_nhd27oled_gr_new.c.d \
./U8glib/utility/u8g_dev_ssd1327_96x96_gr.c.d \
./U8glib/utility/u8g_dev_ssd1351_128x128.c.d \
./U8glib/utility/u8g_dev_st7565_64128n.c.d \
./U8glib/utility/u8g_dev_st7565_dogm128.c.d \
./U8glib/utility/u8g_dev_st7565_dogm132.c.d \
./U8glib/utility/u8g_dev_st7565_lm6059.c.d \
./U8glib/utility/u8g_dev_st7565_lm6063.c.d \
./U8glib/utility/u8g_dev_st7565_nhd_c12832.c.d \
./U8glib/utility/u8g_dev_st7565_nhd_c12864.c.d \
./U8glib/utility/u8g_dev_st7687_c144mvgd.c.d \
./U8glib/utility/u8g_dev_st7920_128x64.c.d \
./U8glib/utility/u8g_dev_st7920_192x32.c.d \
./U8glib/utility/u8g_dev_st7920_202x32.c.d \
./U8glib/utility/u8g_dev_t6963_128x64.c.d \
./U8glib/utility/u8g_dev_t6963_240x128.c.d \
./U8glib/utility/u8g_dev_t6963_240x64.c.d \
./U8glib/utility/u8g_dev_tls8204_84x48.c.d \
./U8glib/utility/u8g_dev_uc1601_c128032.c.d \
./U8glib/utility/u8g_dev_uc1610_dogxl160.c.d \
./U8glib/utility/u8g_dev_uc1701_dogs102.c.d \
./U8glib/utility/u8g_dev_uc1701_mini12864.c.d \
./U8glib/utility/u8g_ellipse.c.d \
./U8glib/utility/u8g_font.c.d \
./U8glib/utility/u8g_font_data.c.d \
./U8glib/utility/u8g_line.c.d \
./U8glib/utility/u8g_ll_api.c.d \
./U8glib/utility/u8g_page.c.d \
./U8glib/utility/u8g_pb.c.d \
./U8glib/utility/u8g_pb14v1.c.d \
./U8glib/utility/u8g_pb16h1.c.d \
./U8glib/utility/u8g_pb16h2.c.d \
./U8glib/utility/u8g_pb16v1.c.d \
./U8glib/utility/u8g_pb16v2.c.d \
./U8glib/utility/u8g_pb32h1.c.d \
./U8glib/utility/u8g_pb8h1.c.d \
./U8glib/utility/u8g_pb8h1f.c.d \
./U8glib/utility/u8g_pb8h2.c.d \
./U8glib/utility/u8g_pb8h8.c.d \
./U8glib/utility/u8g_pb8v1.c.d \
./U8glib/utility/u8g_pb8v2.c.d \
./U8glib/utility/u8g_pbxh16.c.d \
./U8glib/utility/u8g_pbxh24.c.d \
./U8glib/utility/u8g_rect.c.d \
./U8glib/utility/u8g_rot.c.d \
./U8glib/utility/u8g_scale.c.d \
./U8glib/utility/u8g_state.c.d \
./U8glib/utility/u8g_u16toa.c.d \
./U8glib/utility/u8g_u8toa.c.d \
./U8glib/utility/u8g_virtual_screen.c.d 

LINK_OBJ += \
./U8glib/utility/chessengine.c.o \
./U8glib/utility/u8g_bitmap.c.o \
./U8glib/utility/u8g_circle.c.o \
./U8glib/utility/u8g_clip.c.o \
./U8glib/utility/u8g_com_api.c.o \
./U8glib/utility/u8g_com_api_16gr.c.o \
./U8glib/utility/u8g_com_arduino_common.c.o \
./U8glib/utility/u8g_com_arduino_fast_parallel.c.o \
./U8glib/utility/u8g_com_arduino_hw_spi.c.o \
./U8glib/utility/u8g_com_arduino_no_en_parallel.c.o \
./U8glib/utility/u8g_com_arduino_parallel.c.o \
./U8glib/utility/u8g_com_arduino_port_d_wr.c.o \
./U8glib/utility/u8g_com_arduino_ssd_i2c.c.o \
./U8glib/utility/u8g_com_arduino_st7920_custom.c.o \
./U8glib/utility/u8g_com_arduino_st7920_hw_spi.c.o \
./U8glib/utility/u8g_com_arduino_st7920_spi.c.o \
./U8glib/utility/u8g_com_arduino_std_sw_spi.c.o \
./U8glib/utility/u8g_com_arduino_sw_spi.c.o \
./U8glib/utility/u8g_com_arduino_t6963.c.o \
./U8glib/utility/u8g_com_atmega_hw_spi.c.o \
./U8glib/utility/u8g_com_atmega_parallel.c.o \
./U8glib/utility/u8g_com_atmega_st7920_hw_spi.c.o \
./U8glib/utility/u8g_com_atmega_st7920_spi.c.o \
./U8glib/utility/u8g_com_atmega_sw_spi.c.o \
./U8glib/utility/u8g_com_i2c.c.o \
./U8glib/utility/u8g_com_io.c.o \
./U8glib/utility/u8g_com_null.c.o \
./U8glib/utility/u8g_cursor.c.o \
./U8glib/utility/u8g_delay.c.o \
./U8glib/utility/u8g_dev_flipdisc_2x7.c.o \
./U8glib/utility/u8g_dev_gprof.c.o \
./U8glib/utility/u8g_dev_ht1632.c.o \
./U8glib/utility/u8g_dev_ili9325d_320x240.c.o \
./U8glib/utility/u8g_dev_ks0108_128x64.c.o \
./U8glib/utility/u8g_dev_lc7981_160x80.c.o \
./U8glib/utility/u8g_dev_lc7981_240x128.c.o \
./U8glib/utility/u8g_dev_lc7981_240x64.c.o \
./U8glib/utility/u8g_dev_lc7981_320x64.c.o \
./U8glib/utility/u8g_dev_null.c.o \
./U8glib/utility/u8g_dev_pcd8544_84x48.c.o \
./U8glib/utility/u8g_dev_pcf8812_96x65.c.o \
./U8glib/utility/u8g_dev_sbn1661_122x32.c.o \
./U8glib/utility/u8g_dev_ssd1306_128x32.c.o \
./U8glib/utility/u8g_dev_ssd1306_128x64.c.o \
./U8glib/utility/u8g_dev_ssd1309_128x64.c.o \
./U8glib/utility/u8g_dev_ssd1322_nhd31oled_bw.c.o \
./U8glib/utility/u8g_dev_ssd1322_nhd31oled_gr.c.o \
./U8glib/utility/u8g_dev_ssd1325_nhd27oled_bw.c.o \
./U8glib/utility/u8g_dev_ssd1325_nhd27oled_bw_new.c.o \
./U8glib/utility/u8g_dev_ssd1325_nhd27oled_gr.c.o \
./U8glib/utility/u8g_dev_ssd1325_nhd27oled_gr_new.c.o \
./U8glib/utility/u8g_dev_ssd1327_96x96_gr.c.o \
./U8glib/utility/u8g_dev_ssd1351_128x128.c.o \
./U8glib/utility/u8g_dev_st7565_64128n.c.o \
./U8glib/utility/u8g_dev_st7565_dogm128.c.o \
./U8glib/utility/u8g_dev_st7565_dogm132.c.o \
./U8glib/utility/u8g_dev_st7565_lm6059.c.o \
./U8glib/utility/u8g_dev_st7565_lm6063.c.o \
./U8glib/utility/u8g_dev_st7565_nhd_c12832.c.o \
./U8glib/utility/u8g_dev_st7565_nhd_c12864.c.o \
./U8glib/utility/u8g_dev_st7687_c144mvgd.c.o \
./U8glib/utility/u8g_dev_st7920_128x64.c.o \
./U8glib/utility/u8g_dev_st7920_192x32.c.o \
./U8glib/utility/u8g_dev_st7920_202x32.c.o \
./U8glib/utility/u8g_dev_t6963_128x64.c.o \
./U8glib/utility/u8g_dev_t6963_240x128.c.o \
./U8glib/utility/u8g_dev_t6963_240x64.c.o \
./U8glib/utility/u8g_dev_tls8204_84x48.c.o \
./U8glib/utility/u8g_dev_uc1601_c128032.c.o \
./U8glib/utility/u8g_dev_uc1610_dogxl160.c.o \
./U8glib/utility/u8g_dev_uc1701_dogs102.c.o \
./U8glib/utility/u8g_dev_uc1701_mini12864.c.o \
./U8glib/utility/u8g_ellipse.c.o \
./U8glib/utility/u8g_font.c.o \
./U8glib/utility/u8g_font_data.c.o \
./U8glib/utility/u8g_line.c.o \
./U8glib/utility/u8g_ll_api.c.o \
./U8glib/utility/u8g_page.c.o \
./U8glib/utility/u8g_pb.c.o \
./U8glib/utility/u8g_pb14v1.c.o \
./U8glib/utility/u8g_pb16h1.c.o \
./U8glib/utility/u8g_pb16h2.c.o \
./U8glib/utility/u8g_pb16v1.c.o \
./U8glib/utility/u8g_pb16v2.c.o \
./U8glib/utility/u8g_pb32h1.c.o \
./U8glib/utility/u8g_pb8h1.c.o \
./U8glib/utility/u8g_pb8h1f.c.o \
./U8glib/utility/u8g_pb8h2.c.o \
./U8glib/utility/u8g_pb8h8.c.o \
./U8glib/utility/u8g_pb8v1.c.o \
./U8glib/utility/u8g_pb8v2.c.o \
./U8glib/utility/u8g_pbxh16.c.o \
./U8glib/utility/u8g_pbxh24.c.o \
./U8glib/utility/u8g_rect.c.o \
./U8glib/utility/u8g_rot.c.o \
./U8glib/utility/u8g_scale.c.o \
./U8glib/utility/u8g_state.c.o \
./U8glib/utility/u8g_u16toa.c.o \
./U8glib/utility/u8g_u8toa.c.o \
./U8glib/utility/u8g_virtual_screen.c.o 


# Each subdirectory must supply rules for building sources it contributes
U8glib/utility/chessengine.c.o: ../U8glib/utility/chessengine.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_bitmap.c.o: ../U8glib/utility/u8g_bitmap.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_circle.c.o: ../U8glib/utility/u8g_circle.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_clip.c.o: ../U8glib/utility/u8g_clip.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_api.c.o: ../U8glib/utility/u8g_com_api.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_api_16gr.c.o: ../U8glib/utility/u8g_com_api_16gr.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_common.c.o: ../U8glib/utility/u8g_com_arduino_common.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_fast_parallel.c.o: ../U8glib/utility/u8g_com_arduino_fast_parallel.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_hw_spi.c.o: ../U8glib/utility/u8g_com_arduino_hw_spi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_no_en_parallel.c.o: ../U8glib/utility/u8g_com_arduino_no_en_parallel.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_parallel.c.o: ../U8glib/utility/u8g_com_arduino_parallel.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_port_d_wr.c.o: ../U8glib/utility/u8g_com_arduino_port_d_wr.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_ssd_i2c.c.o: ../U8glib/utility/u8g_com_arduino_ssd_i2c.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_st7920_custom.c.o: ../U8glib/utility/u8g_com_arduino_st7920_custom.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_st7920_hw_spi.c.o: ../U8glib/utility/u8g_com_arduino_st7920_hw_spi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_st7920_spi.c.o: ../U8glib/utility/u8g_com_arduino_st7920_spi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_std_sw_spi.c.o: ../U8glib/utility/u8g_com_arduino_std_sw_spi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_sw_spi.c.o: ../U8glib/utility/u8g_com_arduino_sw_spi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_arduino_t6963.c.o: ../U8glib/utility/u8g_com_arduino_t6963.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_atmega_hw_spi.c.o: ../U8glib/utility/u8g_com_atmega_hw_spi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_atmega_parallel.c.o: ../U8glib/utility/u8g_com_atmega_parallel.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_atmega_st7920_hw_spi.c.o: ../U8glib/utility/u8g_com_atmega_st7920_hw_spi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_atmega_st7920_spi.c.o: ../U8glib/utility/u8g_com_atmega_st7920_spi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_atmega_sw_spi.c.o: ../U8glib/utility/u8g_com_atmega_sw_spi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_i2c.c.o: ../U8glib/utility/u8g_com_i2c.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_io.c.o: ../U8glib/utility/u8g_com_io.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_com_null.c.o: ../U8glib/utility/u8g_com_null.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_cursor.c.o: ../U8glib/utility/u8g_cursor.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_delay.c.o: ../U8glib/utility/u8g_delay.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_flipdisc_2x7.c.o: ../U8glib/utility/u8g_dev_flipdisc_2x7.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_gprof.c.o: ../U8glib/utility/u8g_dev_gprof.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ht1632.c.o: ../U8glib/utility/u8g_dev_ht1632.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ili9325d_320x240.c.o: ../U8glib/utility/u8g_dev_ili9325d_320x240.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ks0108_128x64.c.o: ../U8glib/utility/u8g_dev_ks0108_128x64.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_lc7981_160x80.c.o: ../U8glib/utility/u8g_dev_lc7981_160x80.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_lc7981_240x128.c.o: ../U8glib/utility/u8g_dev_lc7981_240x128.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_lc7981_240x64.c.o: ../U8glib/utility/u8g_dev_lc7981_240x64.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_lc7981_320x64.c.o: ../U8glib/utility/u8g_dev_lc7981_320x64.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_null.c.o: ../U8glib/utility/u8g_dev_null.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_pcd8544_84x48.c.o: ../U8glib/utility/u8g_dev_pcd8544_84x48.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_pcf8812_96x65.c.o: ../U8glib/utility/u8g_dev_pcf8812_96x65.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_sbn1661_122x32.c.o: ../U8glib/utility/u8g_dev_sbn1661_122x32.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1306_128x32.c.o: ../U8glib/utility/u8g_dev_ssd1306_128x32.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1306_128x64.c.o: ../U8glib/utility/u8g_dev_ssd1306_128x64.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1309_128x64.c.o: ../U8glib/utility/u8g_dev_ssd1309_128x64.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1322_nhd31oled_bw.c.o: ../U8glib/utility/u8g_dev_ssd1322_nhd31oled_bw.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1322_nhd31oled_gr.c.o: ../U8glib/utility/u8g_dev_ssd1322_nhd31oled_gr.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1325_nhd27oled_bw.c.o: ../U8glib/utility/u8g_dev_ssd1325_nhd27oled_bw.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1325_nhd27oled_bw_new.c.o: ../U8glib/utility/u8g_dev_ssd1325_nhd27oled_bw_new.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1325_nhd27oled_gr.c.o: ../U8glib/utility/u8g_dev_ssd1325_nhd27oled_gr.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1325_nhd27oled_gr_new.c.o: ../U8glib/utility/u8g_dev_ssd1325_nhd27oled_gr_new.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1327_96x96_gr.c.o: ../U8glib/utility/u8g_dev_ssd1327_96x96_gr.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_ssd1351_128x128.c.o: ../U8glib/utility/u8g_dev_ssd1351_128x128.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7565_64128n.c.o: ../U8glib/utility/u8g_dev_st7565_64128n.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7565_dogm128.c.o: ../U8glib/utility/u8g_dev_st7565_dogm128.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7565_dogm132.c.o: ../U8glib/utility/u8g_dev_st7565_dogm132.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7565_lm6059.c.o: ../U8glib/utility/u8g_dev_st7565_lm6059.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7565_lm6063.c.o: ../U8glib/utility/u8g_dev_st7565_lm6063.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7565_nhd_c12832.c.o: ../U8glib/utility/u8g_dev_st7565_nhd_c12832.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7565_nhd_c12864.c.o: ../U8glib/utility/u8g_dev_st7565_nhd_c12864.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7687_c144mvgd.c.o: ../U8glib/utility/u8g_dev_st7687_c144mvgd.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7920_128x64.c.o: ../U8glib/utility/u8g_dev_st7920_128x64.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7920_192x32.c.o: ../U8glib/utility/u8g_dev_st7920_192x32.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_st7920_202x32.c.o: ../U8glib/utility/u8g_dev_st7920_202x32.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_t6963_128x64.c.o: ../U8glib/utility/u8g_dev_t6963_128x64.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_t6963_240x128.c.o: ../U8glib/utility/u8g_dev_t6963_240x128.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_t6963_240x64.c.o: ../U8glib/utility/u8g_dev_t6963_240x64.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_tls8204_84x48.c.o: ../U8glib/utility/u8g_dev_tls8204_84x48.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_uc1601_c128032.c.o: ../U8glib/utility/u8g_dev_uc1601_c128032.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_uc1610_dogxl160.c.o: ../U8glib/utility/u8g_dev_uc1610_dogxl160.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_uc1701_dogs102.c.o: ../U8glib/utility/u8g_dev_uc1701_dogs102.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_dev_uc1701_mini12864.c.o: ../U8glib/utility/u8g_dev_uc1701_mini12864.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_ellipse.c.o: ../U8glib/utility/u8g_ellipse.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_font.c.o: ../U8glib/utility/u8g_font.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_font_data.c.o: ../U8glib/utility/u8g_font_data.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_line.c.o: ../U8glib/utility/u8g_line.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_ll_api.c.o: ../U8glib/utility/u8g_ll_api.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_page.c.o: ../U8glib/utility/u8g_page.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb.c.o: ../U8glib/utility/u8g_pb.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb14v1.c.o: ../U8glib/utility/u8g_pb14v1.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb16h1.c.o: ../U8glib/utility/u8g_pb16h1.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb16h2.c.o: ../U8glib/utility/u8g_pb16h2.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb16v1.c.o: ../U8glib/utility/u8g_pb16v1.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb16v2.c.o: ../U8glib/utility/u8g_pb16v2.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb32h1.c.o: ../U8glib/utility/u8g_pb32h1.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb8h1.c.o: ../U8glib/utility/u8g_pb8h1.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb8h1f.c.o: ../U8glib/utility/u8g_pb8h1f.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb8h2.c.o: ../U8glib/utility/u8g_pb8h2.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb8h8.c.o: ../U8glib/utility/u8g_pb8h8.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb8v1.c.o: ../U8glib/utility/u8g_pb8v1.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pb8v2.c.o: ../U8glib/utility/u8g_pb8v2.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pbxh16.c.o: ../U8glib/utility/u8g_pbxh16.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_pbxh24.c.o: ../U8glib/utility/u8g_pbxh24.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_rect.c.o: ../U8glib/utility/u8g_rect.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_rot.c.o: ../U8glib/utility/u8g_rot.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_scale.c.o: ../U8glib/utility/u8g_scale.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_state.c.o: ../U8glib/utility/u8g_state.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_u16toa.c.o: ../U8glib/utility/u8g_u16toa.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_u8toa.c.o: ../U8glib/utility/u8g_u8toa.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

U8glib/utility/u8g_virtual_screen.c.o: ../U8glib/utility/u8g_virtual_screen.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/ArduinoDue/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/ArduinoDue/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\ArduinoDue\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


