################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/aiSystemPerformance.c \
../Src/aiTestHelper.c \
../Src/aiTestUtility.c \
../Src/app_x-cube-ai.c \
../Src/lc_print.c \
../Src/main.c \
../Src/network.c \
../Src/network_data.c \
../Src/network_data_params.c \
../Src/stm32f7xx_hal_msp.c \
../Src/stm32f7xx_it.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/system_stm32f7xx.c 

OBJS += \
./Src/aiSystemPerformance.o \
./Src/aiTestHelper.o \
./Src/aiTestUtility.o \
./Src/app_x-cube-ai.o \
./Src/lc_print.o \
./Src/main.o \
./Src/network.o \
./Src/network_data.o \
./Src/network_data_params.o \
./Src/stm32f7xx_hal_msp.o \
./Src/stm32f7xx_it.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/system_stm32f7xx.o 

C_DEPS += \
./Src/aiSystemPerformance.d \
./Src/aiTestHelper.d \
./Src/aiTestUtility.d \
./Src/app_x-cube-ai.d \
./Src/lc_print.d \
./Src/main.d \
./Src/network.d \
./Src/network_data.d \
./Src/network_data_params.d \
./Src/stm32f7xx_hal_msp.d \
./Src/stm32f7xx_it.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/system_stm32f7xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I../Inc -I../Middlewares/ST/AI/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/aiSystemPerformance.d ./Src/aiSystemPerformance.o ./Src/aiSystemPerformance.su ./Src/aiTestHelper.d ./Src/aiTestHelper.o ./Src/aiTestHelper.su ./Src/aiTestUtility.d ./Src/aiTestUtility.o ./Src/aiTestUtility.su ./Src/app_x-cube-ai.d ./Src/app_x-cube-ai.o ./Src/app_x-cube-ai.su ./Src/lc_print.d ./Src/lc_print.o ./Src/lc_print.su ./Src/main.d ./Src/main.o ./Src/main.su ./Src/network.d ./Src/network.o ./Src/network.su ./Src/network_data.d ./Src/network_data.o ./Src/network_data.su ./Src/network_data_params.d ./Src/network_data_params.o ./Src/network_data_params.su ./Src/stm32f7xx_hal_msp.d ./Src/stm32f7xx_hal_msp.o ./Src/stm32f7xx_hal_msp.su ./Src/stm32f7xx_it.d ./Src/stm32f7xx_it.o ./Src/stm32f7xx_it.su ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su ./Src/system_stm32f7xx.d ./Src/system_stm32f7xx.o ./Src/system_stm32f7xx.su

.PHONY: clean-Src

