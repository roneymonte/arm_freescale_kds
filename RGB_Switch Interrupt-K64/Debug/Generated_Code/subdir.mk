################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/Cpu.c \
../Generated_Code/EInt1.c \
../Generated_Code/LED_B.c \
../Generated_Code/LED_G.c \
../Generated_Code/LED_R.c \
../Generated_Code/PE_LDD.c 

OBJS += \
./Generated_Code/Cpu.o \
./Generated_Code/EInt1.o \
./Generated_Code/LED_B.o \
./Generated_Code/LED_G.o \
./Generated_Code/LED_R.o \
./Generated_Code/PE_LDD.o 

C_DEPS += \
./Generated_Code/Cpu.d \
./Generated_Code/EInt1.d \
./Generated_Code/LED_B.d \
./Generated_Code/LED_G.d \
./Generated_Code/LED_R.d \
./Generated_Code/PE_LDD.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/pdd2/MK64FN1M0LQ12/system" -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -I"C:\Freescale\KDS_1.1.1\eclipse\ProcessorExpert/lib/Kinetis/iofiles" -I"C:/Users/roney/git/arm_freescale_kds/RGB_Switch Interrupt-K64/Sources" -I"C:/Users/roney/git/arm_freescale_kds/RGB_Switch Interrupt-K64/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


