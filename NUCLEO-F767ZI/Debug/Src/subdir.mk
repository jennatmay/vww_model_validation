################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/aiPbIO.c \
../Src/aiPbMemRWServices.c \
../Src/aiPbMgr.c \
../Src/aiTestHelper.c \
../Src/aiTestUtility.c \
../Src/aiValidation.c \
../Src/ai_device_adaptor.c \
../Src/app_x-cube-ai.c \
../Src/lc_print.c \
../Src/linear.c \
../Src/linear_data.c \
../Src/linear_data_params.c \
../Src/main.c \
../Src/network.c \
../Src/network_data.c \
../Src/network_data_params.c \
../Src/pb_common.c \
../Src/pb_decode.c \
../Src/pb_encode.c \
../Src/stm32f7xx_hal_msp.c \
../Src/stm32f7xx_it.c \
../Src/stm32msg.pb.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/system_stm32f7xx.c \
../Src/vww.c \
../Src/vww_data.c \
../Src/vww_data_params.c 

OBJS += \
./Src/aiPbIO.o \
./Src/aiPbMemRWServices.o \
./Src/aiPbMgr.o \
./Src/aiTestHelper.o \
./Src/aiTestUtility.o \
./Src/aiValidation.o \
./Src/ai_device_adaptor.o \
./Src/app_x-cube-ai.o \
./Src/lc_print.o \
./Src/linear.o \
./Src/linear_data.o \
./Src/linear_data_params.o \
./Src/main.o \
./Src/network.o \
./Src/network_data.o \
./Src/network_data_params.o \
./Src/pb_common.o \
./Src/pb_decode.o \
./Src/pb_encode.o \
./Src/stm32f7xx_hal_msp.o \
./Src/stm32f7xx_it.o \
./Src/stm32msg.pb.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/system_stm32f7xx.o \
./Src/vww.o \
./Src/vww_data.o \
./Src/vww_data_params.o 

C_DEPS += \
./Src/aiPbIO.d \
./Src/aiPbMemRWServices.d \
./Src/aiPbMgr.d \
./Src/aiTestHelper.d \
./Src/aiTestUtility.d \
./Src/aiValidation.d \
./Src/ai_device_adaptor.d \
./Src/app_x-cube-ai.d \
./Src/lc_print.d \
./Src/linear.d \
./Src/linear_data.d \
./Src/linear_data_params.d \
./Src/main.d \
./Src/network.d \
./Src/network_data.d \
./Src/network_data_params.d \
./Src/pb_common.d \
./Src/pb_decode.d \
./Src/pb_encode.d \
./Src/stm32f7xx_hal_msp.d \
./Src/stm32f7xx_it.d \
./Src/stm32msg.pb.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/system_stm32f7xx.d \
./Src/vww.d \
./Src/vww_data.d \
./Src/vww_data_params.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F767xx -c -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/jenna/Downloads/linear.tflite-NUCLEO-F767ZI-project (1)/NUCLEO-F767ZI/Middlewares/ST/AI/Inc" -I"C:/Users/jenna/Downloads/linear.tflite-NUCLEO-F767ZI-project (1)/NUCLEO-F767ZI/Drivers/Include" -I../Inc -I../Middlewares/ST/AI/Inc -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/aiPbIO.cyclo ./Src/aiPbIO.d ./Src/aiPbIO.o ./Src/aiPbIO.su ./Src/aiPbMemRWServices.cyclo ./Src/aiPbMemRWServices.d ./Src/aiPbMemRWServices.o ./Src/aiPbMemRWServices.su ./Src/aiPbMgr.cyclo ./Src/aiPbMgr.d ./Src/aiPbMgr.o ./Src/aiPbMgr.su ./Src/aiTestHelper.cyclo ./Src/aiTestHelper.d ./Src/aiTestHelper.o ./Src/aiTestHelper.su ./Src/aiTestUtility.cyclo ./Src/aiTestUtility.d ./Src/aiTestUtility.o ./Src/aiTestUtility.su ./Src/aiValidation.cyclo ./Src/aiValidation.d ./Src/aiValidation.o ./Src/aiValidation.su ./Src/ai_device_adaptor.cyclo ./Src/ai_device_adaptor.d ./Src/ai_device_adaptor.o ./Src/ai_device_adaptor.su ./Src/app_x-cube-ai.cyclo ./Src/app_x-cube-ai.d ./Src/app_x-cube-ai.o ./Src/app_x-cube-ai.su ./Src/lc_print.cyclo ./Src/lc_print.d ./Src/lc_print.o ./Src/lc_print.su ./Src/linear.cyclo ./Src/linear.d ./Src/linear.o ./Src/linear.su ./Src/linear_data.cyclo ./Src/linear_data.d ./Src/linear_data.o ./Src/linear_data.su ./Src/linear_data_params.cyclo ./Src/linear_data_params.d ./Src/linear_data_params.o ./Src/linear_data_params.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/network.cyclo ./Src/network.d ./Src/network.o ./Src/network.su ./Src/network_data.cyclo ./Src/network_data.d ./Src/network_data.o ./Src/network_data.su ./Src/network_data_params.cyclo ./Src/network_data_params.d ./Src/network_data_params.o ./Src/network_data_params.su ./Src/pb_common.cyclo ./Src/pb_common.d ./Src/pb_common.o ./Src/pb_common.su ./Src/pb_decode.cyclo ./Src/pb_decode.d ./Src/pb_decode.o ./Src/pb_decode.su ./Src/pb_encode.cyclo ./Src/pb_encode.d ./Src/pb_encode.o ./Src/pb_encode.su ./Src/stm32f7xx_hal_msp.cyclo ./Src/stm32f7xx_hal_msp.d ./Src/stm32f7xx_hal_msp.o ./Src/stm32f7xx_hal_msp.su ./Src/stm32f7xx_it.cyclo ./Src/stm32f7xx_it.d ./Src/stm32f7xx_it.o ./Src/stm32f7xx_it.su ./Src/stm32msg.pb.cyclo ./Src/stm32msg.pb.d ./Src/stm32msg.pb.o ./Src/stm32msg.pb.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su ./Src/system_stm32f7xx.cyclo ./Src/system_stm32f7xx.d ./Src/system_stm32f7xx.o ./Src/system_stm32f7xx.su ./Src/vww.cyclo ./Src/vww.d ./Src/vww.o ./Src/vww.su ./Src/vww_data.cyclo ./Src/vww_data.d ./Src/vww_data.o ./Src/vww_data.su ./Src/vww_data_params.cyclo ./Src/vww_data_params.d ./Src/vww_data_params.o ./Src/vww_data_params.su

.PHONY: clean-Src

