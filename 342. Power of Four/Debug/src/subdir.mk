################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/342.\ Power\ of\ Four.c 

OBJS += \
./src/342.\ Power\ of\ Four.o 

C_DEPS += \
./src/342.\ Power\ of\ Four.d 


# Each subdirectory must supply rules for building sources it contributes
src/342.\ Power\ of\ Four.o: ../src/342.\ Power\ of\ Four.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/342. Power of Four.d" -MT"src/342.\ Power\ of\ Four.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


