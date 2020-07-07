# invoke SourceDir generated makefile for water_monitor.pem4
water_monitor.pem4: .libraries,water_monitor.pem4
.libraries,water_monitor.pem4: package/cfg/water_monitor_pem4.xdl
	$(MAKE) -f C:\Users\mathe\Documents\CCS\ccs9\workspace_v9\water_monitor/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\mathe\Documents\CCS\ccs9\workspace_v9\water_monitor/src/makefile.libs clean

