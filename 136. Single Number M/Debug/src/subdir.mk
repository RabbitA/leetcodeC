################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/136.\ Single\ Number\ M.c 

OBJS += \
./src/136.\ Single\ Number\ M.o 

C_DEPS += \
./src/136.\ Single\ Number\ M.d 


# Each subdirectory must supply rules for building sources it contributes
src/136.\ Single\ Number\ M.o: ../src/136.\ Single\ Number\ M.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/136. Single Number M.d" -MT"src/136.\ Single\ Number\ M.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


