################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Reflow_Oven_STM32
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Reflow_Oven_STM32.elf \

MAP_FILES += \
Reflow_Oven_STM32.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Reflow_Oven_STM32.list \


# All Target
all: main-build

# Main-build Target
main-build: Reflow_Oven_STM32.elf secondary-outputs

# Tool invocations
Reflow_Oven_STM32.elf Reflow_Oven_STM32.map: $(OBJS) $(USER_OBJS) G:\DIY\ Reflow\ Oven\Mod\DIY-Reflow-Oven-main\reflow\ oven\ stm32\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "Reflow_Oven_STM32.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"G:\DIY Reflow Oven\Mod\DIY-Reflow-Oven-main\reflow oven stm32\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Reflow_Oven_STM32.map" -Wl,--gc-sections -static -L"G:\DIY Reflow Oven\Mod\DIY-Reflow-Oven-main\reflow oven stm32\libs" --specs=nano.specs -mfloat-abi=soft -mthumb -u _printf_float -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Reflow_Oven_STM32.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Reflow_Oven_STM32.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) Reflow_Oven_STM32.elf Reflow_Oven_STM32.list Reflow_Oven_STM32.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
