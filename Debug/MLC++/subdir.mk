################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../MLC++/LinearRegression.cpp 

OBJS += \
./MLC++/LinearRegression.o 

CPP_DEPS += \
./MLC++/LinearRegression.d 


# Each subdirectory must supply rules for building sources it contributes
MLC++/%.o: ../MLC++/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"C:\Users\Hp\Downloads\eigen-eigen-f562a193118d" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


