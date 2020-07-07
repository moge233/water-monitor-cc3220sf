################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../water_monitor.cfg 

CMD_SRCS += \
../CC3220SF_LAUNCHXL_TIRTOS.cmd 

SYSCFG_SRCS += \
../water_monitor.syscfg 

C_SRCS += \
../app.c \
../ezo_ph.c \
../ezo_rtd.c \
../main.c \
./syscfg/ti_drivers_config.c 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt \
./syscfg/ti_drivers_config.c 

GEN_MISC_DIRS += \
./configPkg/ \
./syscfg/ 

C_DEPS += \
./app.d \
./ezo_ph.d \
./ezo_rtd.d \
./main.d \
./syscfg/ti_drivers_config.d 

GEN_OPTS += \
./configPkg/compiler.opt 

OBJS += \
./app.obj \
./ezo_ph.obj \
./ezo_rtd.obj \
./main.obj \
./syscfg/ti_drivers_config.obj 

GEN_MISC_FILES += \
./syscfg/ti_drivers_config.h \
./syscfg/syscfg_c.rov.xs 

GEN_MISC_DIRS__QUOTED += \
"configPkg\" \
"syscfg\" 

OBJS__QUOTED += \
"app.obj" \
"ezo_ph.obj" \
"ezo_rtd.obj" \
"main.obj" \
"syscfg\ti_drivers_config.obj" 

GEN_MISC_FILES__QUOTED += \
"syscfg\ti_drivers_config.h" \
"syscfg\syscfg_c.rov.xs" 

C_DEPS__QUOTED += \
"app.d" \
"ezo_ph.d" \
"ezo_rtd.d" \
"main.d" \
"syscfg\ti_drivers_config.d" 

GEN_FILES__QUOTED += \
"configPkg\linker.cmd" \
"configPkg\compiler.opt" \
"syscfg\ti_drivers_config.c" 

C_SRCS__QUOTED += \
"../app.c" \
"../ezo_ph.c" \
"../ezo_rtd.c" \
"../main.c" \
"./syscfg/ti_drivers_config.c" 

SYSCFG_SRCS__QUOTED += \
"../water_monitor.syscfg" 


