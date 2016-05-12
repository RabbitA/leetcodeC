################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Print\ out\ length\ of\ int\ ary[].c 

OBJS += \
./src/Print\ out\ length\ of\ int\ ary[].o 

C_DEPS += \
./src/Print\ out\ length\ of\ int\ ary[].d 


# Each subdirectory must supply rules for building sources it contributes
src/Print\ out\ length\ of\ int\ ary[].o: ../src/Print\ out\ length\ of\ int\ ary[].c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Print out length of int ary[].d" -MT"src/Print\ out\ length\ of\ int\ ary[].d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


