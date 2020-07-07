################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --opt_for_speed=0 --include_path="C:/ti/simplelink_cc32xx_sdk_3_30_01_02/source" --include_path="C:/ti/simplelink_cc32xx_sdk_3_30_01_02/source/ti/posix/ccs" --include_path="C:/ti/simplelink_cc32xx_sdk_3_30_01_02/kernel/tirtos/packages" --include_path="C:/Users/mathe/Documents/CCS/ccs9/workspace_v9/water_monitor" --include_path="C:/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/include" --define=CC3220sf -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="C:/Users/mathe/Documents/CCS/ccs9/workspace_v9/water_monitor/Debug/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1278667953:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-1278667953-inproc

build-1278667953-inproc: ../water_monitor.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"C:/ti/ccs930/xdctools_3_60_02_34_core/xs" --xdcpath="C:/ti/simplelink_cc32xx_sdk_3_30_01_02/source;C:/ti/simplelink_cc32xx_sdk_3_30_01_02/kernel/tirtos/packages;C:/ti/bios_6_76_03_01/packages;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4 -p ti.platforms.simplelink:CC3220SF -r debug -c "C:/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-1278667953 ../water_monitor.cfg
configPkg/compiler.opt: build-1278667953
configPkg/: build-1278667953

build-1242062177:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-1242062177-inproc

build-1242062177-inproc: ../water_monitor.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"C:/ti/ccs930/ccs/utils/sysconfig/sysconfig_cli.bat" -b "ti/boards/.meta/CC3220SF_LAUNCHXL" -s "C:/ti/simplelink_cc32xx_sdk_3_30_01_02/.metadata/product.json" -o "syscfg" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/ti_drivers_config.c: build-1242062177 ../water_monitor.syscfg
syscfg/ti_drivers_config.h: build-1242062177
syscfg/syscfg_c.rov.xs: build-1242062177
syscfg/: build-1242062177

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --opt_for_speed=0 --include_path="C:/ti/simplelink_cc32xx_sdk_3_30_01_02/source" --include_path="C:/ti/simplelink_cc32xx_sdk_3_30_01_02/source/ti/posix/ccs" --include_path="C:/ti/simplelink_cc32xx_sdk_3_30_01_02/kernel/tirtos/packages" --include_path="C:/Users/mathe/Documents/CCS/ccs9/workspace_v9/water_monitor" --include_path="C:/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/include" --define=CC3220sf -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="C:/Users/mathe/Documents/CCS/ccs9/workspace_v9/water_monitor/Debug/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


