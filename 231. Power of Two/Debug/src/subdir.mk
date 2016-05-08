################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/231.\ Power\ of\ Two.c 

OBJS += \
./src/231.\ Power\ of\ Two.o 

C_DEPS += \
./src/231.\ Power\ of\ Two.d 


# Each subdirectory must supply rules for building sources it contributes
src/231.\ Power\ of\ Two.o: ../src/231.\ Power\ of\ Two.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/231. Power of Two.d" -MT"src/231.\ Power\ of\ Two.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


