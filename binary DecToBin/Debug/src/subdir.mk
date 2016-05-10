################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/binary\ DecToBin.c 

OBJS += \
./src/binary\ DecToBin.o 

C_DEPS += \
./src/binary\ DecToBin.d 


# Each subdirectory must supply rules for building sources it contributes
src/binary\ DecToBin.o: ../src/binary\ DecToBin.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/binary DecToBin.d" -MT"src/binary\ DecToBin.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


