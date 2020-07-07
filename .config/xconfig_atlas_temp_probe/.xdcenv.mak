#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/simplelink_cc32xx_sdk_3_30_01_02/source;C:/ti/simplelink_cc32xx_sdk_3_30_01_02/kernel/tirtos/packages;C:/ti/bios_6_76_03_01/packages;C:/Users/mathe/Documents/CCS/ccs9/workspace_v9/atlas_temp_probe/.config
override XDCROOT = C:/ti/ccs930/xdctools_3_60_02_34_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/simplelink_cc32xx_sdk_3_30_01_02/source;C:/ti/simplelink_cc32xx_sdk_3_30_01_02/kernel/tirtos/packages;C:/ti/bios_6_76_03_01/packages;C:/Users/mathe/Documents/CCS/ccs9/workspace_v9/atlas_temp_probe/.config;C:/ti/ccs930/xdctools_3_60_02_34_core/packages;..
HOSTOS = Windows
endif
