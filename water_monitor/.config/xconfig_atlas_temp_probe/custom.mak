## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em4 linker.cmd package/cfg/atlas_temp_probe_pem4.oem4

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/atlas_temp_probe_pem4.xdl
	$(SED) 's"^\"\(package/cfg/atlas_temp_probe_pem4cfg.cmd\)\"$""\"C:/Users/mathe/Documents/CCS/ccs9/workspace_v9/atlas_temp_probe/.config/xconfig_atlas_temp_probe/\1\""' package/cfg/atlas_temp_probe_pem4.xdl > $@
	-$(SETDATE) -r:max package/cfg/atlas_temp_probe_pem4.h compiler.opt compiler.opt.defs
