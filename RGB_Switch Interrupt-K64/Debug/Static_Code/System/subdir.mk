################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Freescale/KDS_1.1.1/eclipse/ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LQ12/system/CPU_Init.c \
C:/Freescale/KDS_1.1.1/eclipse/ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LQ12/system/Peripherals_Init.c \
C:/Freescale/KDS_1.1.1/eclipse/ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LQ12/system/Vectors.c 

OBJS += \
./Static_Code/System/CPU_Init.o \
./Static_Code/System/Peripherals_Init.o \
./Static_Code/System/Vectors.o 

C_DEPS += \
./Static_Code/System/CPU_Init.d \
./Static_Code/System/Peripherals_Init.d \
./Static_Code/System/Vectors.d 


# Each subdirectory must supply rules for building sources it contributes
Static_Code/System/CPU_Init.o: C:/Freescale/KDS_1.1.1/eclipse/ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LQ12/system/CPU_Init.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LQ12/system" -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/iofiles" -I"C:/Users/roney/git/arm_freescale_kds/RGB_Switch Interrupt-K64/Sources" -I"C:/Users/roney/git/arm_freescale_kds/RGB_Switch Interrupt-K64/Generated_Code" -std=c99 -MMD -MP -MF"Static_Code/System/CPU_Init.d" -MT"Static_Code/System/CPU_Init.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Static_Code/System/Peripherals_Init.o: C:/Freescale/KDS_1.1.1/eclipse/ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LQ12/system/Peripherals_Init.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LQ12/system" -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/iofiles" -I"C:/Users/roney/git/arm_freescale_kds/RGB_Switch Interrupt-K64/Sources" -I"C:/Users/roney/git/arm_freescale_kds/RGB_Switch Interrupt-K64/Generated_Code" -std=c99 -MMD -MP -MF"Static_Code/System/Peripherals_Init.d" -MT"Static_Code/System/Peripherals_Init.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Static_Code/System/Vectors.o: C:/Freescale/KDS_1.1.1/eclipse/ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LQ12/system/Vectors.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LQ12/system" -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/iofiles" -I"C:/Users/roney/git/arm_freescale_kds/RGB_Switch Interrupt-K64/Sources" -I"C:/Users/roney/git/arm_freescale_kds/RGB_Switch Interrupt-K64/Generated_Code" -std=c99 -MMD -MP -MF"Static_Code/System/Vectors.d" -MT"Static_Code/System/Vectors.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


