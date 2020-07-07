/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-H32
 */

#include <xdc/std.h>

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle UartTask;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle PhTask;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle TemperatureTask;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle I2C_sem;

#include <ti/sysbios/knl/Event.h>
extern const ti_sysbios_knl_Event_Handle ProbeReadingReady;

extern int xdc_runtime_Startup__EXECFXN__C;

extern int xdc_runtime_Startup__RESETFXN__C;

extern int xdc_rov_runtime_Mon__checksum;

extern int xdc_rov_runtime_Mon__write;

