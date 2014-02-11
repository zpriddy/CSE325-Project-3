################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Projects_Includes/gpt.s \
../Projects_Includes/int.s 

S_SRCS_QUOTED += \
"../Projects_Includes/gpt.s" \
"../Projects_Includes/int.s" 

OBJS += \
./Projects_Includes/gpt_s.obj \
./Projects_Includes/int_s.obj 

OBJS_QUOTED += \
"./Projects_Includes/gpt_s.obj" \
"./Projects_Includes/int_s.obj" 

OBJS_OS_FORMAT += \
./Projects_Includes/gpt_s.obj \
./Projects_Includes/int_s.obj 


# Each subdirectory must supply rules for building sources it contributes
Projects_Includes/gpt_s.obj: ../Projects_Includes/gpt.s
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: ColdFire Assembler'
	"$(CF_ToolsDirEnv)/mwasmmcf" @@"Projects_Includes/gpt.args" -o "Projects_Includes/gpt_s.obj" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Projects_Includes/int_s.obj: ../Projects_Includes/int.s
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ColdFire Assembler'
	"$(CF_ToolsDirEnv)/mwasmmcf" @@"Projects_Includes/int.args" -o "Projects_Includes/int_s.obj" "$<"
	@echo 'Finished building: $<'
	@echo ' '


