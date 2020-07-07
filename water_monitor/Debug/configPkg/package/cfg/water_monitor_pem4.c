/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-H32
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/family/arm/m3/Timer.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Core.h>
#include <ti/sysbios/hal/CoreNull.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/heaps/HeapTrack.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Types.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#ifdef __ti__
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Timer_Module__ ti_sysbios_family_arm_m3_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Object__ {
    const ti_sysbios_family_arm_m3_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_m3_Timer_RunMode runMode;
    ti_sysbios_family_arm_m3_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_m3_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
} ti_sysbios_family_arm_m3_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Timer_Object__ obj;
} ti_sysbios_family_arm_m3_Timer_Object2__;


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.hal.Core INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.CoreNull INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Core_CoreProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapTrack INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapTrack_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapTrack_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapTrack_Module__ ti_sysbios_heaps_HeapTrack_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_heaps_HeapTrack_Object__ {
    const ti_sysbios_heaps_HeapTrack_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle internalHeap;
    xdc_SizeT size;
    xdc_SizeT peak;
    xdc_SizeT sizeWithoutTracker;
    xdc_SizeT peakWithoutTracker;
    ti_sysbios_knl_Queue_Object__ Object_field_trackQueue;
} ti_sysbios_heaps_HeapTrack_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapTrack_Object__ obj;
} ti_sysbios_heaps_HeapTrack_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapTrack_Object */

/* Object */
typedef ti_sysbios_heaps_HeapTrack_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {NULL};

#pragma DATA_SECTION(ti_sysbios_interfaces_ICore_Interface__BASE__C, ".const:ti_sysbios_interfaces_ICore_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_ICore_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    &ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8027, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8021, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8022, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.hal.CoreNull VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__FXNS__C, ".const:ti_sysbios_hal_CoreNull_Module__FXNS__C");
const ti_sysbios_hal_CoreNull_Fxns__ ti_sysbios_hal_CoreNull_Module__FXNS__C = {
    &ti_sysbios_interfaces_ICore_Interface__BASE__C, /* __base */
    &ti_sysbios_hal_CoreNull_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_hal_CoreNull_getId__E,
    ti_sysbios_hal_CoreNull_interruptCore__E,
    ti_sysbios_hal_CoreNull_lock__E,
    ti_sysbios_hal_CoreNull_unlock__E,
    ti_sysbios_hal_CoreNull_hwiDisable__E,
    ti_sysbios_hal_CoreNull_hwiEnable__E,
    ti_sysbios_hal_CoreNull_hwiRestore__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x801e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapTrack VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapTrack_Module__FXNS__C");
const ti_sysbios_heaps_HeapTrack_Fxns__ ti_sysbios_heaps_HeapTrack_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapTrack_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapTrack_alloc__E,
    ti_sysbios_heaps_HeapTrack_free__E,
    ti_sysbios_heaps_HeapTrack_isBlocking__E,
    ti_sysbios_heaps_HeapTrack_getStats__E,
    {
        ti_sysbios_heaps_HeapTrack_Object__create__S,
        ti_sysbios_heaps_HeapTrack_Object__delete__S,
        ti_sysbios_heaps_HeapTrack_Handle__label__S,
        0x802c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int f_arg0);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restore__E */
extern xdc_Void ti_sysbios_knl_Swi_restore__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Timer_Object__ ti_sysbios_family_arm_m3_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Module_State__ {
    volatile xdc_UInt tickCount;
    xdc_UInt availMask;
    ti_sysbios_family_arm_m3_Timer_Handle handle;
} ti_sysbios_family_arm_m3_Timer_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V;


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Core DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.CoreNull DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Core_CoreProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#else
#if defined(__GNUC__)
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapTrack DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_heaps_HeapTrack_Object__ ti_sysbios_heaps_HeapTrack_Object__table__V[1];


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg f_arg0);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Event_Object__ ti_sysbios_knl_Event_Object__table__V[1];


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[1];


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[4096];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#else
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[4096] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#else
#if defined(__GNUC__)
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* --> UartTaskFxn */
extern xdc_Void UartTaskFxn(xdc_UArg f_arg0,xdc_UArg f_arg1);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[4096];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#else
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[4096] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#else
#if defined(__GNUC__)
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* --> PhTaskFxn */
extern xdc_Void PhTaskFxn(xdc_UArg f_arg0,xdc_UArg f_arg1);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[4096];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_2_stack__A, ".bss:taskStackSection");
#else
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[4096] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_2_stack__A, 8);
#else
#if defined(__GNUC__)
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* --> TemperatureTaskFxn */
extern xdc_Void TemperatureTaskFxn(xdc_UArg f_arg0,xdc_UArg f_arg1);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_3_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_3_stack__A, ".bss:taskStackSection");
#else
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_3_stack__A, 8);
#else
#if defined(__GNUC__)
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[4];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_m3_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Timer_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[8];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[8];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char* f_arg0,xdc_UInt f_arg1);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char** f_arg0,xdc_CString* f_arg1,xdc_VaList* f_arg2,xdc_runtime_System_ParseData* f_arg3);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6467];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[45];


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O, ".const:ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O");
__FAR__ const xdc_SizeT ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O = offsetof(ti_sysbios_heaps_HeapTrack_Object__,Object_field_trackQueue);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/mathe/Documents/CCS/ccs9/workspace_v9/water_monitor/Debug/configPkg/package/cfg/water_monitor_pem4");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.simplelink");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = xdc.targets.omf.Elf");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */


xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    (unsigned short)(~0U), /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    NULL,  /* msg */
    {
        0,  /* mod */
        NULL,  /* file */
        0   /* line */
    }
};

/*
 *  ======== Error_policyLog ========
 */
Void xdc_runtime_Error_policyLog__I(xdc_runtime_Types_ModuleId mod,
    CString file, Int line, CString msg, IArg arg1, IArg arg2)
{
    /*
     * Log the error, now that we've retrieved the error message.
     *
     * We call Log_put here instead of Log_write so that we can log the
     * caller's module id instead of the Error module's id.
     *
     * In logging this event, we'll use the Error module's mask and logger. We
     * don't have a way to reliably access the caller's diags mask and logger.
     * The caller isn't guaranteed to have a mask on the target, even if they
     * are performing logging.
     */
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Error_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Error_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Error_Module__diagsMask__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Error_Module__loggerObj__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Error_Module__loggerFxn8__C

    if (xdc_runtime_Diags_query(xdc_runtime_Log_L_error)) {
        xdc_runtime_Log_put8(xdc_runtime_Log_L_error, mod, (IArg) file, line,
                 (IArg) msg, arg1, arg2, 0, 0, 0);
    }
}

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
/* REQ_TAG(SYSBIOS-953) */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0);
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0);
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0);
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0);
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0);
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0);
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0);
}
xdc_Bool ti_sysbios_family_arm_m3_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_m3_Timer_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0);
}


/*
 * Startup_exec__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
#ifdef __ti__sect
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((used));
#else
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
/* REQ_TAG(SYSBIOS-949) */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[8];
    xdc_runtime_Startup_startModsFxn__C(state, 8);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/*
 * Startup_reset__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
#ifdef __ti__sect
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if defined(__clang__) && defined (__ti__)
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((used));
#else
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt,
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;

    /*
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;

    res = 0;

    c = **pfmt;
    *pfmt = *pfmt + 1;


    if (c == '$') {
        c = **pfmt;
        *pfmt = *pfmt + 1;

        if (c == 'L') {
            xdc_runtime_Types_Label *lab = (parse->aFlag == TRUE) ?
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);

            /*
             * Call Text_putLab to write out the label, taking the precision
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field. */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'F') {
            xdc_runtime_Types_Site site;

            /* Retrieve the file name string from the argument list */
            site.file = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Retrieve the line number from the argument list. */
            site.line = (parse->aFlag == TRUE) ?
                (xdc_Int) va_arg(va, xdc_IArg) :
                (xdc_Int) va_arg(va, xdc_Int);

            /*
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;

            /*
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string length.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Update pva before passing it to doPrint. */
            *pva = va;

            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             * System_doPrint guarantees that parse->precis is positive.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, (xdc_SizeT)parse->precis,
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf != NULL) {
                if (res >= parse->precis) {
                    /* Not enough space for all characters, only
                     * (parse->precis - 1) and '\0' were printed.
                     */
                    res = parse->precis - 1;
                }
                *pbuf += res;
            }

            /* Update the temporary variable with any changes to *pva */
            va = *pva;

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }

    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag == TRUE) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining).
     */
    goto end;
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || ((xdc_UInt)printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */

/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_runtime_Text_RopeVisitor visFxn, xdc_Ptr visState)
{
    xdc_CString stack[6];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}

/*
 * ======== ti.platforms.simplelink.Platform TEMPLATE ========
 */



/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())
        == 0U) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int stat);

extern Void ti_sysbios_BIOS_registerRTSLock(Void);
extern Void ti_sysbios_family_arm_m3_Timer_startup__E(Void);

Void ti_sysbios_BIOS_startFunc__I(Void)
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    (void)xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_m3_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    (void)ti_sysbios_knl_Task_disable();
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I(Void)
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }
    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__) && !defined(__clang__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);
#pragma FUNC_EXT_CALLED(aligned_alloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== ti_sysbios_rts_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    if (size == 0) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    /* return NULL if size is 0, or alignment is not a power-of-2 */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    xdc_runtime_Error_init(&eb);

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

/*
 *  ======== aligned_alloc ========
 */
Void ATTRIBUTE *aligned_alloc(SizeT alignment, SizeT size)
{
    Void *retval;

    retval = memalign(alignment, size);

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[195];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[195];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackBase = (Void *)__section_begin("CSTACK");
    size_t size = (uint8_t *)__section_end("CSTACK") - (uint8_t *)__section_begin("CSTACK");
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (Void *)size;
}
#endif

/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data:ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x4c4b400,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((const CT__ti_sysbios_BIOS_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((const CT__ti_sysbios_BIOS_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((const CT__ti_sysbios_BIOS_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((const CT__ti_sysbios_BIOS_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = NULL;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x4c4b400,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 1;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((const CT__ti_sysbios_BIOS_installedErrorHook)(xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_m3_Timer_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_m3_Timer_periodicStub__I)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0xf,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)NULL),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)NULL),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)NULL),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)NULL),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext* f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext* f_arg0))NULL),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xc3;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5985) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)6055) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)2654) << 16 | 16);

/* E_badIntNum__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_badIntNum ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C = (((xdc_runtime_Error_Id)4121) << 16 | 0U);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4161) << 16 | 0U);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4209) << 16 | 0U);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4257) << 16 | 0U);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4462) << 16 | 0U);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4490) << 16 | 0U);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4500) << 16 | 0U);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4516) << 16 | 0U);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4546) << 16 | 0U);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4576) << 16 | 0U);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4593) << 16 | 0U);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4614) << 16 | 0U);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4629) << 16 | 0U);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)(ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)(ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)NULL);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)(ti_sysbios_knl_Swi_disable__E));

/* swiRestore__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestore__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestore__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore ti_sysbios_family_arm_m3_Hwi_swiRestore__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore)(ti_sysbios_knl_Swi_restore__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)(ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)(ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = NULL;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.arm.m3.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Timer_Params ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Timer_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)NULL),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)NULL),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Timer_Module__ ti_sysbios_family_arm_m3_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Timer_Object__ ti_sysbios_family_arm_m3_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x13880,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0xf,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Timer_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_m3_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V = {
    (xdc_UInt)0x0,  /* tickCount */
    (xdc_UInt)0x0,  /* availMask */
    (ti_sysbios_family_arm_m3_Timer_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0],  /* handle */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsMask ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__gateObj ti_sysbios_family_arm_m3_Timer_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_Timer_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__gatePrms ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_Timer_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__id__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__id ti_sysbios_family_arm_m3_Timer_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerDefined ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerObj ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__count__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__count ti_sysbios_family_arm_m3_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__heap ti_sysbios_family_arm_m3_Timer_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__sizeof ti_sysbios_family_arm_m3_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__table__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__table ti_sysbios_family_arm_m3_Timer_Object__table__C = ti_sysbios_family_arm_m3_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_invalidTimer ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4647) << 16 | 0U);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_m3_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_notAvailable ti_sysbios_family_arm_m3_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4683) << 16 | 0U);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_cannotSupport ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4722) << 16 | 0U);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_anyMask__C, ".const:ti_sysbios_family_arm_m3_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_anyMask ti_sysbios_family_arm_m3_Timer_anyMask__C = (xdc_UInt)0x1;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_m3_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_startupNeeded ti_sysbios_family_arm_m3_Timer_startupNeeded__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateHwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateMutex_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2455) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Core_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsEnabled ti_sysbios_hal_Core_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Core_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsIncluded ti_sysbios_hal_Core_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__diagsMask__C, ".const:ti_sysbios_hal_Core_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsMask ti_sysbios_hal_Core_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Core_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__gateObj__C, ".const:ti_sysbios_hal_Core_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__gateObj ti_sysbios_hal_Core_Module__gateObj__C = ((const CT__ti_sysbios_hal_Core_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__gatePrms__C, ".const:ti_sysbios_hal_Core_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__gatePrms ti_sysbios_hal_Core_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Core_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__id__C, ".const:ti_sysbios_hal_Core_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__id ti_sysbios_hal_Core_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerDefined__C, ".const:ti_sysbios_hal_Core_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerDefined ti_sysbios_hal_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerObj__C, ".const:ti_sysbios_hal_Core_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerObj ti_sysbios_hal_Core_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Core_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn0 ti_sysbios_hal_Core_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Core_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn1 ti_sysbios_hal_Core_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Core_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn2 ti_sysbios_hal_Core_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Core_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn4 ti_sysbios_hal_Core_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Core_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn8 ti_sysbios_hal_Core_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Core_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__count__C, ".const:ti_sysbios_hal_Core_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__count ti_sysbios_hal_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__heap__C, ".const:ti_sysbios_hal_Core_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__heap ti_sysbios_hal_Core_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__sizeof__C, ".const:ti_sysbios_hal_Core_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__sizeof ti_sysbios_hal_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__table__C, ".const:ti_sysbios_hal_Core_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__table ti_sysbios_hal_Core_Object__table__C = NULL;

/* numCores__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_numCores__C, ".const:ti_sysbios_hal_Core_numCores__C");
__FAR__ const CT__ti_sysbios_hal_Core_numCores ti_sysbios_hal_Core_numCores__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.hal.CoreNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__diagsEnabled__C, ".const:ti_sysbios_hal_CoreNull_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__diagsEnabled ti_sysbios_hal_CoreNull_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__diagsIncluded__C, ".const:ti_sysbios_hal_CoreNull_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__diagsIncluded ti_sysbios_hal_CoreNull_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__diagsMask__C, ".const:ti_sysbios_hal_CoreNull_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__diagsMask ti_sysbios_hal_CoreNull_Module__diagsMask__C = ((const CT__ti_sysbios_hal_CoreNull_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__gateObj__C, ".const:ti_sysbios_hal_CoreNull_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__gateObj ti_sysbios_hal_CoreNull_Module__gateObj__C = ((const CT__ti_sysbios_hal_CoreNull_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__gatePrms__C, ".const:ti_sysbios_hal_CoreNull_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__gatePrms ti_sysbios_hal_CoreNull_Module__gatePrms__C = ((const CT__ti_sysbios_hal_CoreNull_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__id__C, ".const:ti_sysbios_hal_CoreNull_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__id ti_sysbios_hal_CoreNull_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerDefined__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerDefined ti_sysbios_hal_CoreNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerObj__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerObj ti_sysbios_hal_CoreNull_Module__loggerObj__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerFxn0__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn0 ti_sysbios_hal_CoreNull_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerFxn1__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn1 ti_sysbios_hal_CoreNull_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerFxn2__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn2 ti_sysbios_hal_CoreNull_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerFxn4__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn4 ti_sysbios_hal_CoreNull_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerFxn8__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn8 ti_sysbios_hal_CoreNull_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Object__count__C, ".const:ti_sysbios_hal_CoreNull_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__count ti_sysbios_hal_CoreNull_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Object__heap__C, ".const:ti_sysbios_hal_CoreNull_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__heap ti_sysbios_hal_CoreNull_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Object__sizeof__C, ".const:ti_sysbios_hal_CoreNull_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__sizeof ti_sysbios_hal_CoreNull_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Object__table__C, ".const:ti_sysbios_hal_CoreNull_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__table ti_sysbios_hal_CoreNull_Object__table__C = NULL;

/* numCores__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_numCores__C, ".const:ti_sysbios_hal_CoreNull_numCores__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_numCores ti_sysbios_hal_CoreNull_numCores__C = (xdc_UInt)0x1;

/* id__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_id__C, ".const:ti_sysbios_hal_CoreNull_id__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_id ti_sysbios_hal_CoreNull_id__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.hal.Core_CoreProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = NULL;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4042) << 16 | 0U);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)NULL),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)3194) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3230) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3275) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4828) << 16 | 0U);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)3166) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)NULL);

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)NULL);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapTrack INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapTrack_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapTrack_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapTrack_Params ti_sysbios_heaps_HeapTrack_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapTrack_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapTrack_Object__PARAMS__C.__iprms, /* instance */
    0,  /* heap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_heaps_HeapTrack_Module__ ti_sysbios_heaps_HeapTrack_Module__root__V = {
    {&ti_sysbios_heaps_HeapTrack_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapTrack_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapTrack_Object__ ti_sysbios_heaps_HeapTrack_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapTrack_Module__FXNS__C,
        (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0],  /* internalHeap */
        (xdc_SizeT)0x0,  /* size */
        (xdc_SizeT)0x0,  /* peak */
        (xdc_SizeT)0x0,  /* sizeWithoutTracker */
        (xdc_SizeT)0x0,  /* peakWithoutTracker */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_heaps_HeapTrack_Object__table__V[0].Object_field_trackQueue.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_heaps_HeapTrack_Object__table__V[0].Object_field_trackQueue.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_trackQueue */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsEnabled ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsIncluded ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapTrack_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask ti_sysbios_heaps_HeapTrack_Module__diagsMask__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapTrack_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__gateObj ti_sysbios_heaps_HeapTrack_Module__gateObj__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapTrack_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__gatePrms ti_sysbios_heaps_HeapTrack_Module__gatePrms__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__id__C, ".const:ti_sysbios_heaps_HeapTrack_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__id ti_sysbios_heaps_HeapTrack_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerDefined ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerObj ti_sysbios_heaps_HeapTrack_Module__loggerObj__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn0 ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn1 ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn2 ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn4 ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn8 ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__count__C, ".const:ti_sysbios_heaps_HeapTrack_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__count ti_sysbios_heaps_HeapTrack_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__heap__C, ".const:ti_sysbios_heaps_HeapTrack_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__heap ti_sysbios_heaps_HeapTrack_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapTrack_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__sizeof ti_sysbios_heaps_HeapTrack_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapTrack_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__table__C, ".const:ti_sysbios_heaps_HeapTrack_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__table ti_sysbios_heaps_HeapTrack_Object__table__C = ti_sysbios_heaps_HeapTrack_Object__table__V;

/* A_doubleFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_A_doubleFree__C, ".const:ti_sysbios_heaps_HeapTrack_A_doubleFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_doubleFree ti_sysbios_heaps_HeapTrack_A_doubleFree__C = (((xdc_runtime_Assert_Id)3390) << 16 | 16);

/* A_bufOverflow__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_A_bufOverflow__C, ".const:ti_sysbios_heaps_HeapTrack_A_bufOverflow__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_bufOverflow ti_sysbios_heaps_HeapTrack_A_bufOverflow__C = (((xdc_runtime_Assert_Id)3424) << 16 | 16);

/* A_notEmpty__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_A_notEmpty__C, ".const:ti_sysbios_heaps_HeapTrack_A_notEmpty__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_notEmpty ti_sysbios_heaps_HeapTrack_A_notEmpty__C = (((xdc_runtime_Assert_Id)3455) << 16 | 16);

/* A_nullObject__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_A_nullObject__C, ".const:ti_sysbios_heaps_HeapTrack_A_nullObject__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_nullObject ti_sysbios_heaps_HeapTrack_A_nullObject__C = (((xdc_runtime_Assert_Id)3482) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)NULL),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Clock_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((const CT__ti_sysbios_knl_Clock_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Clock_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = NULL;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5040) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5062) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5080) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)615) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)696) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)0x0;

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((const CT__ti_sysbios_knl_Clock_doTickFunc)(ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Event_Object__ ti_sysbios_knl_Event_Object__table__V[1] = {
    {/* instance#0 */
        (xdc_UInt)0x0,  /* postedEvents */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Event_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Event_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Event_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((const CT__ti_sysbios_knl_Event_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Event_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Event_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = ti_sysbios_knl_Event_Object__table__V;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5112) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5166) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)766) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)813) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)852) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)895) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)958) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1] = {
    (xdc_UInt)0x0,  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Idle_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((const CT__ti_sysbios_knl_Idle_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Idle_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = NULL;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList const  *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {1, ((__T1_ti_sysbios_knl_Idle_coreList const  *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Queue_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((const CT__ti_sysbios_knl_Queue_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Queue_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[1] = {
    {/* instance#0 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Semaphore_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = ti_sysbios_knl_Semaphore_Object__table__V;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5247) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5277) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1106) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1161) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)895) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1226) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1280) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((const CT__ti_sysbios_knl_Semaphore_eventPost)NULL);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((const CT__ti_sysbios_knl_Semaphore_eventSync)NULL);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((const CT__ti_sysbios_knl_Swi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Swi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5320) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5367) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5385) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1374) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1431) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((const CT__ti_sysbios_knl_Swi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((const CT__ti_sysbios_knl_Swi_taskRestore)(ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)NULL),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)NULL),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[4096];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[4096];

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[4096];

/* --> ti_sysbios_knl_Task_Instance_State_3_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[2048];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[4] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x5,  /* priority */
        (xdc_UInt)0x20,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x1000,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(UartTaskFxn)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x3,  /* priority */
        (xdc_UInt)0x8,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x1000,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(PhTaskFxn)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#2 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x3,  /* priority */
        (xdc_UInt)0x8,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x1000,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_2_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(TemperatureTaskFxn)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#3 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[3].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[3].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_3_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[3],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x4,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Task_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((const CT__ti_sysbios_knl_Task_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Task_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Task_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 4;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5425) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5493) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5538) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5579) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5611) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5659) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5715) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5746) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5829) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5915) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3777) << 16 | 0U);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3820) << 16 | 0U);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3871) << 16 | 0U);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".const:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)3902) << 16 | 0U);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".const:ti_sysbios_knl_Task_E_objectCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)3975) << 16 | 0U);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1480) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1549) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1603) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1657) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1720) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1770) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1805) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1838) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1922) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((const CT__ti_sysbios_knl_Task_allBlockedFunc)NULL);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckFxn)(ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)(ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".const:ti_sysbios_knl_Task_objectCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckFxn)(ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".const:ti_sysbios_knl_Task_objectCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckValueFxn)(ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".const:ti_sysbios_knl_Task_objectCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((const CT__ti_sysbios_knl_Task_startupHookFunc)NULL);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((const CT__xdc_runtime_Assert_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((const CT__xdc_runtime_Assert_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((const CT__xdc_runtime_Assert_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((const CT__xdc_runtime_Assert_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = NULL;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3537) << 16 | 0U);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((const CT__xdc_runtime_Core_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((const CT__xdc_runtime_Core_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((const CT__xdc_runtime_Core_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((const CT__xdc_runtime_Core_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((const CT__xdc_runtime_Core_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((const CT__xdc_runtime_Core_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((const CT__xdc_runtime_Core_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((const CT__xdc_runtime_Core_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((const CT__xdc_runtime_Core_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = NULL;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((const CT__xdc_runtime_Defaults_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((const CT__xdc_runtime_Defaults_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((const CT__xdc_runtime_Defaults_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((const CT__xdc_runtime_Defaults_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((const CT__xdc_runtime_Diags_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((const CT__xdc_runtime_Diags_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((const CT__xdc_runtime_Diags_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((const CT__xdc_runtime_Diags_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = NULL;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((const CT__xdc_runtime_Diags_dictBase)NULL);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data:xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((const CT__xdc_runtime_Error_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((const CT__xdc_runtime_Error_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((const CT__xdc_runtime_Error_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((const CT__xdc_runtime_Error_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((const CT__xdc_runtime_Error_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((const CT__xdc_runtime_Error_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((const CT__xdc_runtime_Error_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((const CT__xdc_runtime_Error_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((const CT__xdc_runtime_Error_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = NULL;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((const CT__xdc_runtime_Error_policyFxn)(xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3559) << 16 | 0U);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3563) << 16 | 0U);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3597) << 16 | 0U);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((const CT__xdc_runtime_Error_raiseHook)(ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((const CT__xdc_runtime_Gate_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((const CT__xdc_runtime_Gate_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((const CT__xdc_runtime_Gate_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((const CT__xdc_runtime_Gate_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((const CT__xdc_runtime_Log_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((const CT__xdc_runtime_Log_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((const CT__xdc_runtime_Log_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((const CT__xdc_runtime_Log_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((const CT__xdc_runtime_Log_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((const CT__xdc_runtime_Log_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((const CT__xdc_runtime_Log_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((const CT__xdc_runtime_Log_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((const CT__xdc_runtime_Log_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = NULL;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4864) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4888) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4909) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4928) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4945) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4959) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4975) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4982) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4993) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5003) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5022) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((const CT__xdc_runtime_Main_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((const CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((const CT__xdc_runtime_Main_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((const CT__xdc_runtime_Main_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((const CT__xdc_runtime_Main_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((const CT__xdc_runtime_Main_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((const CT__xdc_runtime_Main_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((const CT__xdc_runtime_Main_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((const CT__xdc_runtime_Main_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data:xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((const CT__xdc_runtime_Memory_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((const CT__xdc_runtime_Memory_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((const CT__xdc_runtime_Memory_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((const CT__xdc_runtime_Memory_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = NULL;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapTrack_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data:xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)NULL),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((const CT__xdc_runtime_Registry_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((const CT__xdc_runtime_Registry_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((const CT__xdc_runtime_Registry_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((const CT__xdc_runtime_Registry_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data:xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)NULL),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_initStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [2] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[8] = {
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Swi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Task_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_hal_Hwi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_m3_Timer_Module_startup__E)),  /* [7] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[8] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((const CT__xdc_runtime_Startup_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((const CT__xdc_runtime_Startup_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((const CT__xdc_runtime_Startup_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((const CT__xdc_runtime_Startup_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = NULL;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {3, ((__T1_xdc_runtime_Startup_firstFxns const  *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((const CT__xdc_runtime_Startup_startModsFxn)(xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((const CT__xdc_runtime_Startup_execImpl)(xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((const CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((const CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data:xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((const CT__xdc_runtime_SysMin_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((const CT__xdc_runtime_SysMin_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((const CT__xdc_runtime_SysMin_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((const CT__xdc_runtime_SysMin_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = NULL;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((const CT__xdc_runtime_SysMin_outputFxn)NULL);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((const CT__xdc_runtime_SysMin_outputFunc)(xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [1] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [2] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [3] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [4] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [5] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [6] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [7] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data:xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((const CT__xdc_runtime_System_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((const CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((const CT__xdc_runtime_System_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((const CT__xdc_runtime_System_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((const CT__xdc_runtime_System_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((const CT__xdc_runtime_System_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((const CT__xdc_runtime_System_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((const CT__xdc_runtime_System_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((const CT__xdc_runtime_System_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = NULL;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((const CT__xdc_runtime_System_abortFxn)(xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((const CT__xdc_runtime_System_exitFxn)(xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((const CT__xdc_runtime_System_extendFxn)(xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data:xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6467] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6e,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x6c,  /* [404] */
    (xdc_Char)0x6c,  /* [405] */
    (xdc_Char)0x50,  /* [406] */
    (xdc_Char)0x6f,  /* [407] */
    (xdc_Char)0x69,  /* [408] */
    (xdc_Char)0x6e,  /* [409] */
    (xdc_Char)0x74,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x72,  /* [412] */
    (xdc_Char)0x3a,  /* [413] */
    (xdc_Char)0x20,  /* [414] */
    (xdc_Char)0x50,  /* [415] */
    (xdc_Char)0x6f,  /* [416] */
    (xdc_Char)0x69,  /* [417] */
    (xdc_Char)0x6e,  /* [418] */
    (xdc_Char)0x74,  /* [419] */
    (xdc_Char)0x65,  /* [420] */
    (xdc_Char)0x72,  /* [421] */
    (xdc_Char)0x20,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x73,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x6e,  /* [426] */
    (xdc_Char)0x75,  /* [427] */
    (xdc_Char)0x6c,  /* [428] */
    (xdc_Char)0x6c,  /* [429] */
    (xdc_Char)0x0,  /* [430] */
    (xdc_Char)0x41,  /* [431] */
    (xdc_Char)0x5f,  /* [432] */
    (xdc_Char)0x69,  /* [433] */
    (xdc_Char)0x6e,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x61,  /* [436] */
    (xdc_Char)0x6c,  /* [437] */
    (xdc_Char)0x69,  /* [438] */
    (xdc_Char)0x64,  /* [439] */
    (xdc_Char)0x52,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x67,  /* [442] */
    (xdc_Char)0x69,  /* [443] */
    (xdc_Char)0x6f,  /* [444] */
    (xdc_Char)0x6e,  /* [445] */
    (xdc_Char)0x49,  /* [446] */
    (xdc_Char)0x64,  /* [447] */
    (xdc_Char)0x3a,  /* [448] */
    (xdc_Char)0x20,  /* [449] */
    (xdc_Char)0x4d,  /* [450] */
    (xdc_Char)0x50,  /* [451] */
    (xdc_Char)0x55,  /* [452] */
    (xdc_Char)0x20,  /* [453] */
    (xdc_Char)0x52,  /* [454] */
    (xdc_Char)0x65,  /* [455] */
    (xdc_Char)0x67,  /* [456] */
    (xdc_Char)0x69,  /* [457] */
    (xdc_Char)0x6f,  /* [458] */
    (xdc_Char)0x6e,  /* [459] */
    (xdc_Char)0x20,  /* [460] */
    (xdc_Char)0x6e,  /* [461] */
    (xdc_Char)0x75,  /* [462] */
    (xdc_Char)0x6d,  /* [463] */
    (xdc_Char)0x62,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x72,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x70,  /* [468] */
    (xdc_Char)0x61,  /* [469] */
    (xdc_Char)0x73,  /* [470] */
    (xdc_Char)0x73,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x64,  /* [473] */
    (xdc_Char)0x20,  /* [474] */
    (xdc_Char)0x69,  /* [475] */
    (xdc_Char)0x73,  /* [476] */
    (xdc_Char)0x20,  /* [477] */
    (xdc_Char)0x69,  /* [478] */
    (xdc_Char)0x6e,  /* [479] */
    (xdc_Char)0x76,  /* [480] */
    (xdc_Char)0x61,  /* [481] */
    (xdc_Char)0x6c,  /* [482] */
    (xdc_Char)0x69,  /* [483] */
    (xdc_Char)0x64,  /* [484] */
    (xdc_Char)0x2e,  /* [485] */
    (xdc_Char)0x0,  /* [486] */
    (xdc_Char)0x41,  /* [487] */
    (xdc_Char)0x5f,  /* [488] */
    (xdc_Char)0x75,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x61,  /* [491] */
    (xdc_Char)0x6c,  /* [492] */
    (xdc_Char)0x69,  /* [493] */
    (xdc_Char)0x67,  /* [494] */
    (xdc_Char)0x6e,  /* [495] */
    (xdc_Char)0x65,  /* [496] */
    (xdc_Char)0x64,  /* [497] */
    (xdc_Char)0x42,  /* [498] */
    (xdc_Char)0x61,  /* [499] */
    (xdc_Char)0x73,  /* [500] */
    (xdc_Char)0x65,  /* [501] */
    (xdc_Char)0x41,  /* [502] */
    (xdc_Char)0x64,  /* [503] */
    (xdc_Char)0x64,  /* [504] */
    (xdc_Char)0x72,  /* [505] */
    (xdc_Char)0x3a,  /* [506] */
    (xdc_Char)0x20,  /* [507] */
    (xdc_Char)0x4d,  /* [508] */
    (xdc_Char)0x50,  /* [509] */
    (xdc_Char)0x55,  /* [510] */
    (xdc_Char)0x20,  /* [511] */
    (xdc_Char)0x72,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x67,  /* [514] */
    (xdc_Char)0x69,  /* [515] */
    (xdc_Char)0x6f,  /* [516] */
    (xdc_Char)0x6e,  /* [517] */
    (xdc_Char)0x20,  /* [518] */
    (xdc_Char)0x62,  /* [519] */
    (xdc_Char)0x61,  /* [520] */
    (xdc_Char)0x73,  /* [521] */
    (xdc_Char)0x65,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x61,  /* [524] */
    (xdc_Char)0x64,  /* [525] */
    (xdc_Char)0x64,  /* [526] */
    (xdc_Char)0x72,  /* [527] */
    (xdc_Char)0x65,  /* [528] */
    (xdc_Char)0x73,  /* [529] */
    (xdc_Char)0x73,  /* [530] */
    (xdc_Char)0x20,  /* [531] */
    (xdc_Char)0x6e,  /* [532] */
    (xdc_Char)0x6f,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x20,  /* [535] */
    (xdc_Char)0x61,  /* [536] */
    (xdc_Char)0x6c,  /* [537] */
    (xdc_Char)0x69,  /* [538] */
    (xdc_Char)0x67,  /* [539] */
    (xdc_Char)0x6e,  /* [540] */
    (xdc_Char)0x65,  /* [541] */
    (xdc_Char)0x64,  /* [542] */
    (xdc_Char)0x20,  /* [543] */
    (xdc_Char)0x74,  /* [544] */
    (xdc_Char)0x6f,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x73,  /* [547] */
    (xdc_Char)0x69,  /* [548] */
    (xdc_Char)0x7a,  /* [549] */
    (xdc_Char)0x65,  /* [550] */
    (xdc_Char)0x2e,  /* [551] */
    (xdc_Char)0x0,  /* [552] */
    (xdc_Char)0x41,  /* [553] */
    (xdc_Char)0x5f,  /* [554] */
    (xdc_Char)0x72,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x73,  /* [557] */
    (xdc_Char)0x65,  /* [558] */
    (xdc_Char)0x72,  /* [559] */
    (xdc_Char)0x76,  /* [560] */
    (xdc_Char)0x65,  /* [561] */
    (xdc_Char)0x64,  /* [562] */
    (xdc_Char)0x41,  /* [563] */
    (xdc_Char)0x74,  /* [564] */
    (xdc_Char)0x74,  /* [565] */
    (xdc_Char)0x72,  /* [566] */
    (xdc_Char)0x73,  /* [567] */
    (xdc_Char)0x3a,  /* [568] */
    (xdc_Char)0x20,  /* [569] */
    (xdc_Char)0x4d,  /* [570] */
    (xdc_Char)0x50,  /* [571] */
    (xdc_Char)0x55,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x72,  /* [574] */
    (xdc_Char)0x65,  /* [575] */
    (xdc_Char)0x67,  /* [576] */
    (xdc_Char)0x69,  /* [577] */
    (xdc_Char)0x6f,  /* [578] */
    (xdc_Char)0x6e,  /* [579] */
    (xdc_Char)0x20,  /* [580] */
    (xdc_Char)0x61,  /* [581] */
    (xdc_Char)0x74,  /* [582] */
    (xdc_Char)0x74,  /* [583] */
    (xdc_Char)0x72,  /* [584] */
    (xdc_Char)0x69,  /* [585] */
    (xdc_Char)0x62,  /* [586] */
    (xdc_Char)0x75,  /* [587] */
    (xdc_Char)0x74,  /* [588] */
    (xdc_Char)0x65,  /* [589] */
    (xdc_Char)0x73,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x73,  /* [592] */
    (xdc_Char)0x65,  /* [593] */
    (xdc_Char)0x74,  /* [594] */
    (xdc_Char)0x20,  /* [595] */
    (xdc_Char)0x74,  /* [596] */
    (xdc_Char)0x6f,  /* [597] */
    (xdc_Char)0x20,  /* [598] */
    (xdc_Char)0x72,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x73,  /* [601] */
    (xdc_Char)0x65,  /* [602] */
    (xdc_Char)0x72,  /* [603] */
    (xdc_Char)0x76,  /* [604] */
    (xdc_Char)0x65,  /* [605] */
    (xdc_Char)0x64,  /* [606] */
    (xdc_Char)0x20,  /* [607] */
    (xdc_Char)0x76,  /* [608] */
    (xdc_Char)0x61,  /* [609] */
    (xdc_Char)0x6c,  /* [610] */
    (xdc_Char)0x75,  /* [611] */
    (xdc_Char)0x65,  /* [612] */
    (xdc_Char)0x2e,  /* [613] */
    (xdc_Char)0x0,  /* [614] */
    (xdc_Char)0x41,  /* [615] */
    (xdc_Char)0x5f,  /* [616] */
    (xdc_Char)0x63,  /* [617] */
    (xdc_Char)0x6c,  /* [618] */
    (xdc_Char)0x6f,  /* [619] */
    (xdc_Char)0x63,  /* [620] */
    (xdc_Char)0x6b,  /* [621] */
    (xdc_Char)0x44,  /* [622] */
    (xdc_Char)0x69,  /* [623] */
    (xdc_Char)0x73,  /* [624] */
    (xdc_Char)0x61,  /* [625] */
    (xdc_Char)0x62,  /* [626] */
    (xdc_Char)0x6c,  /* [627] */
    (xdc_Char)0x65,  /* [628] */
    (xdc_Char)0x64,  /* [629] */
    (xdc_Char)0x3a,  /* [630] */
    (xdc_Char)0x20,  /* [631] */
    (xdc_Char)0x43,  /* [632] */
    (xdc_Char)0x61,  /* [633] */
    (xdc_Char)0x6e,  /* [634] */
    (xdc_Char)0x6e,  /* [635] */
    (xdc_Char)0x6f,  /* [636] */
    (xdc_Char)0x74,  /* [637] */
    (xdc_Char)0x20,  /* [638] */
    (xdc_Char)0x63,  /* [639] */
    (xdc_Char)0x72,  /* [640] */
    (xdc_Char)0x65,  /* [641] */
    (xdc_Char)0x61,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x65,  /* [644] */
    (xdc_Char)0x20,  /* [645] */
    (xdc_Char)0x61,  /* [646] */
    (xdc_Char)0x20,  /* [647] */
    (xdc_Char)0x63,  /* [648] */
    (xdc_Char)0x6c,  /* [649] */
    (xdc_Char)0x6f,  /* [650] */
    (xdc_Char)0x63,  /* [651] */
    (xdc_Char)0x6b,  /* [652] */
    (xdc_Char)0x20,  /* [653] */
    (xdc_Char)0x69,  /* [654] */
    (xdc_Char)0x6e,  /* [655] */
    (xdc_Char)0x73,  /* [656] */
    (xdc_Char)0x74,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x6e,  /* [659] */
    (xdc_Char)0x63,  /* [660] */
    (xdc_Char)0x65,  /* [661] */
    (xdc_Char)0x20,  /* [662] */
    (xdc_Char)0x77,  /* [663] */
    (xdc_Char)0x68,  /* [664] */
    (xdc_Char)0x65,  /* [665] */
    (xdc_Char)0x6e,  /* [666] */
    (xdc_Char)0x20,  /* [667] */
    (xdc_Char)0x42,  /* [668] */
    (xdc_Char)0x49,  /* [669] */
    (xdc_Char)0x4f,  /* [670] */
    (xdc_Char)0x53,  /* [671] */
    (xdc_Char)0x2e,  /* [672] */
    (xdc_Char)0x63,  /* [673] */
    (xdc_Char)0x6c,  /* [674] */
    (xdc_Char)0x6f,  /* [675] */
    (xdc_Char)0x63,  /* [676] */
    (xdc_Char)0x6b,  /* [677] */
    (xdc_Char)0x45,  /* [678] */
    (xdc_Char)0x6e,  /* [679] */
    (xdc_Char)0x61,  /* [680] */
    (xdc_Char)0x62,  /* [681] */
    (xdc_Char)0x6c,  /* [682] */
    (xdc_Char)0x65,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x20,  /* [685] */
    (xdc_Char)0x69,  /* [686] */
    (xdc_Char)0x73,  /* [687] */
    (xdc_Char)0x20,  /* [688] */
    (xdc_Char)0x66,  /* [689] */
    (xdc_Char)0x61,  /* [690] */
    (xdc_Char)0x6c,  /* [691] */
    (xdc_Char)0x73,  /* [692] */
    (xdc_Char)0x65,  /* [693] */
    (xdc_Char)0x2e,  /* [694] */
    (xdc_Char)0x0,  /* [695] */
    (xdc_Char)0x41,  /* [696] */
    (xdc_Char)0x5f,  /* [697] */
    (xdc_Char)0x62,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x64,  /* [700] */
    (xdc_Char)0x54,  /* [701] */
    (xdc_Char)0x68,  /* [702] */
    (xdc_Char)0x72,  /* [703] */
    (xdc_Char)0x65,  /* [704] */
    (xdc_Char)0x61,  /* [705] */
    (xdc_Char)0x64,  /* [706] */
    (xdc_Char)0x54,  /* [707] */
    (xdc_Char)0x79,  /* [708] */
    (xdc_Char)0x70,  /* [709] */
    (xdc_Char)0x65,  /* [710] */
    (xdc_Char)0x3a,  /* [711] */
    (xdc_Char)0x20,  /* [712] */
    (xdc_Char)0x43,  /* [713] */
    (xdc_Char)0x61,  /* [714] */
    (xdc_Char)0x6e,  /* [715] */
    (xdc_Char)0x6e,  /* [716] */
    (xdc_Char)0x6f,  /* [717] */
    (xdc_Char)0x74,  /* [718] */
    (xdc_Char)0x20,  /* [719] */
    (xdc_Char)0x63,  /* [720] */
    (xdc_Char)0x72,  /* [721] */
    (xdc_Char)0x65,  /* [722] */
    (xdc_Char)0x61,  /* [723] */
    (xdc_Char)0x74,  /* [724] */
    (xdc_Char)0x65,  /* [725] */
    (xdc_Char)0x2f,  /* [726] */
    (xdc_Char)0x64,  /* [727] */
    (xdc_Char)0x65,  /* [728] */
    (xdc_Char)0x6c,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x74,  /* [731] */
    (xdc_Char)0x65,  /* [732] */
    (xdc_Char)0x20,  /* [733] */
    (xdc_Char)0x61,  /* [734] */
    (xdc_Char)0x20,  /* [735] */
    (xdc_Char)0x43,  /* [736] */
    (xdc_Char)0x6c,  /* [737] */
    (xdc_Char)0x6f,  /* [738] */
    (xdc_Char)0x63,  /* [739] */
    (xdc_Char)0x6b,  /* [740] */
    (xdc_Char)0x20,  /* [741] */
    (xdc_Char)0x66,  /* [742] */
    (xdc_Char)0x72,  /* [743] */
    (xdc_Char)0x6f,  /* [744] */
    (xdc_Char)0x6d,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x48,  /* [747] */
    (xdc_Char)0x77,  /* [748] */
    (xdc_Char)0x69,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x6f,  /* [751] */
    (xdc_Char)0x72,  /* [752] */
    (xdc_Char)0x20,  /* [753] */
    (xdc_Char)0x53,  /* [754] */
    (xdc_Char)0x77,  /* [755] */
    (xdc_Char)0x69,  /* [756] */
    (xdc_Char)0x20,  /* [757] */
    (xdc_Char)0x74,  /* [758] */
    (xdc_Char)0x68,  /* [759] */
    (xdc_Char)0x72,  /* [760] */
    (xdc_Char)0x65,  /* [761] */
    (xdc_Char)0x61,  /* [762] */
    (xdc_Char)0x64,  /* [763] */
    (xdc_Char)0x2e,  /* [764] */
    (xdc_Char)0x0,  /* [765] */
    (xdc_Char)0x41,  /* [766] */
    (xdc_Char)0x5f,  /* [767] */
    (xdc_Char)0x6e,  /* [768] */
    (xdc_Char)0x75,  /* [769] */
    (xdc_Char)0x6c,  /* [770] */
    (xdc_Char)0x6c,  /* [771] */
    (xdc_Char)0x45,  /* [772] */
    (xdc_Char)0x76,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x6e,  /* [775] */
    (xdc_Char)0x74,  /* [776] */
    (xdc_Char)0x4d,  /* [777] */
    (xdc_Char)0x61,  /* [778] */
    (xdc_Char)0x73,  /* [779] */
    (xdc_Char)0x6b,  /* [780] */
    (xdc_Char)0x73,  /* [781] */
    (xdc_Char)0x3a,  /* [782] */
    (xdc_Char)0x20,  /* [783] */
    (xdc_Char)0x6f,  /* [784] */
    (xdc_Char)0x72,  /* [785] */
    (xdc_Char)0x4d,  /* [786] */
    (xdc_Char)0x61,  /* [787] */
    (xdc_Char)0x73,  /* [788] */
    (xdc_Char)0x6b,  /* [789] */
    (xdc_Char)0x20,  /* [790] */
    (xdc_Char)0x61,  /* [791] */
    (xdc_Char)0x6e,  /* [792] */
    (xdc_Char)0x64,  /* [793] */
    (xdc_Char)0x20,  /* [794] */
    (xdc_Char)0x61,  /* [795] */
    (xdc_Char)0x6e,  /* [796] */
    (xdc_Char)0x64,  /* [797] */
    (xdc_Char)0x4d,  /* [798] */
    (xdc_Char)0x61,  /* [799] */
    (xdc_Char)0x73,  /* [800] */
    (xdc_Char)0x6b,  /* [801] */
    (xdc_Char)0x20,  /* [802] */
    (xdc_Char)0x61,  /* [803] */
    (xdc_Char)0x72,  /* [804] */
    (xdc_Char)0x65,  /* [805] */
    (xdc_Char)0x20,  /* [806] */
    (xdc_Char)0x6e,  /* [807] */
    (xdc_Char)0x75,  /* [808] */
    (xdc_Char)0x6c,  /* [809] */
    (xdc_Char)0x6c,  /* [810] */
    (xdc_Char)0x2e,  /* [811] */
    (xdc_Char)0x0,  /* [812] */
    (xdc_Char)0x41,  /* [813] */
    (xdc_Char)0x5f,  /* [814] */
    (xdc_Char)0x6e,  /* [815] */
    (xdc_Char)0x75,  /* [816] */
    (xdc_Char)0x6c,  /* [817] */
    (xdc_Char)0x6c,  /* [818] */
    (xdc_Char)0x45,  /* [819] */
    (xdc_Char)0x76,  /* [820] */
    (xdc_Char)0x65,  /* [821] */
    (xdc_Char)0x6e,  /* [822] */
    (xdc_Char)0x74,  /* [823] */
    (xdc_Char)0x49,  /* [824] */
    (xdc_Char)0x64,  /* [825] */
    (xdc_Char)0x3a,  /* [826] */
    (xdc_Char)0x20,  /* [827] */
    (xdc_Char)0x70,  /* [828] */
    (xdc_Char)0x6f,  /* [829] */
    (xdc_Char)0x73,  /* [830] */
    (xdc_Char)0x74,  /* [831] */
    (xdc_Char)0x65,  /* [832] */
    (xdc_Char)0x64,  /* [833] */
    (xdc_Char)0x20,  /* [834] */
    (xdc_Char)0x65,  /* [835] */
    (xdc_Char)0x76,  /* [836] */
    (xdc_Char)0x65,  /* [837] */
    (xdc_Char)0x6e,  /* [838] */
    (xdc_Char)0x74,  /* [839] */
    (xdc_Char)0x49,  /* [840] */
    (xdc_Char)0x64,  /* [841] */
    (xdc_Char)0x20,  /* [842] */
    (xdc_Char)0x69,  /* [843] */
    (xdc_Char)0x73,  /* [844] */
    (xdc_Char)0x20,  /* [845] */
    (xdc_Char)0x6e,  /* [846] */
    (xdc_Char)0x75,  /* [847] */
    (xdc_Char)0x6c,  /* [848] */
    (xdc_Char)0x6c,  /* [849] */
    (xdc_Char)0x2e,  /* [850] */
    (xdc_Char)0x0,  /* [851] */
    (xdc_Char)0x41,  /* [852] */
    (xdc_Char)0x5f,  /* [853] */
    (xdc_Char)0x65,  /* [854] */
    (xdc_Char)0x76,  /* [855] */
    (xdc_Char)0x65,  /* [856] */
    (xdc_Char)0x6e,  /* [857] */
    (xdc_Char)0x74,  /* [858] */
    (xdc_Char)0x49,  /* [859] */
    (xdc_Char)0x6e,  /* [860] */
    (xdc_Char)0x55,  /* [861] */
    (xdc_Char)0x73,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x3a,  /* [864] */
    (xdc_Char)0x20,  /* [865] */
    (xdc_Char)0x45,  /* [866] */
    (xdc_Char)0x76,  /* [867] */
    (xdc_Char)0x65,  /* [868] */
    (xdc_Char)0x6e,  /* [869] */
    (xdc_Char)0x74,  /* [870] */
    (xdc_Char)0x20,  /* [871] */
    (xdc_Char)0x6f,  /* [872] */
    (xdc_Char)0x62,  /* [873] */
    (xdc_Char)0x6a,  /* [874] */
    (xdc_Char)0x65,  /* [875] */
    (xdc_Char)0x63,  /* [876] */
    (xdc_Char)0x74,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x61,  /* [879] */
    (xdc_Char)0x6c,  /* [880] */
    (xdc_Char)0x72,  /* [881] */
    (xdc_Char)0x65,  /* [882] */
    (xdc_Char)0x61,  /* [883] */
    (xdc_Char)0x64,  /* [884] */
    (xdc_Char)0x79,  /* [885] */
    (xdc_Char)0x20,  /* [886] */
    (xdc_Char)0x69,  /* [887] */
    (xdc_Char)0x6e,  /* [888] */
    (xdc_Char)0x20,  /* [889] */
    (xdc_Char)0x75,  /* [890] */
    (xdc_Char)0x73,  /* [891] */
    (xdc_Char)0x65,  /* [892] */
    (xdc_Char)0x2e,  /* [893] */
    (xdc_Char)0x0,  /* [894] */
    (xdc_Char)0x41,  /* [895] */
    (xdc_Char)0x5f,  /* [896] */
    (xdc_Char)0x62,  /* [897] */
    (xdc_Char)0x61,  /* [898] */
    (xdc_Char)0x64,  /* [899] */
    (xdc_Char)0x43,  /* [900] */
    (xdc_Char)0x6f,  /* [901] */
    (xdc_Char)0x6e,  /* [902] */
    (xdc_Char)0x74,  /* [903] */
    (xdc_Char)0x65,  /* [904] */
    (xdc_Char)0x78,  /* [905] */
    (xdc_Char)0x74,  /* [906] */
    (xdc_Char)0x3a,  /* [907] */
    (xdc_Char)0x20,  /* [908] */
    (xdc_Char)0x62,  /* [909] */
    (xdc_Char)0x61,  /* [910] */
    (xdc_Char)0x64,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x63,  /* [913] */
    (xdc_Char)0x61,  /* [914] */
    (xdc_Char)0x6c,  /* [915] */
    (xdc_Char)0x6c,  /* [916] */
    (xdc_Char)0x69,  /* [917] */
    (xdc_Char)0x6e,  /* [918] */
    (xdc_Char)0x67,  /* [919] */
    (xdc_Char)0x20,  /* [920] */
    (xdc_Char)0x63,  /* [921] */
    (xdc_Char)0x6f,  /* [922] */
    (xdc_Char)0x6e,  /* [923] */
    (xdc_Char)0x74,  /* [924] */
    (xdc_Char)0x65,  /* [925] */
    (xdc_Char)0x78,  /* [926] */
    (xdc_Char)0x74,  /* [927] */
    (xdc_Char)0x2e,  /* [928] */
    (xdc_Char)0x20,  /* [929] */
    (xdc_Char)0x4d,  /* [930] */
    (xdc_Char)0x75,  /* [931] */
    (xdc_Char)0x73,  /* [932] */
    (xdc_Char)0x74,  /* [933] */
    (xdc_Char)0x20,  /* [934] */
    (xdc_Char)0x62,  /* [935] */
    (xdc_Char)0x65,  /* [936] */
    (xdc_Char)0x20,  /* [937] */
    (xdc_Char)0x63,  /* [938] */
    (xdc_Char)0x61,  /* [939] */
    (xdc_Char)0x6c,  /* [940] */
    (xdc_Char)0x6c,  /* [941] */
    (xdc_Char)0x65,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x20,  /* [944] */
    (xdc_Char)0x66,  /* [945] */
    (xdc_Char)0x72,  /* [946] */
    (xdc_Char)0x6f,  /* [947] */
    (xdc_Char)0x6d,  /* [948] */
    (xdc_Char)0x20,  /* [949] */
    (xdc_Char)0x61,  /* [950] */
    (xdc_Char)0x20,  /* [951] */
    (xdc_Char)0x54,  /* [952] */
    (xdc_Char)0x61,  /* [953] */
    (xdc_Char)0x73,  /* [954] */
    (xdc_Char)0x6b,  /* [955] */
    (xdc_Char)0x2e,  /* [956] */
    (xdc_Char)0x0,  /* [957] */
    (xdc_Char)0x41,  /* [958] */
    (xdc_Char)0x5f,  /* [959] */
    (xdc_Char)0x70,  /* [960] */
    (xdc_Char)0x65,  /* [961] */
    (xdc_Char)0x6e,  /* [962] */
    (xdc_Char)0x64,  /* [963] */
    (xdc_Char)0x54,  /* [964] */
    (xdc_Char)0x61,  /* [965] */
    (xdc_Char)0x73,  /* [966] */
    (xdc_Char)0x6b,  /* [967] */
    (xdc_Char)0x44,  /* [968] */
    (xdc_Char)0x69,  /* [969] */
    (xdc_Char)0x73,  /* [970] */
    (xdc_Char)0x61,  /* [971] */
    (xdc_Char)0x62,  /* [972] */
    (xdc_Char)0x6c,  /* [973] */
    (xdc_Char)0x65,  /* [974] */
    (xdc_Char)0x64,  /* [975] */
    (xdc_Char)0x3a,  /* [976] */
    (xdc_Char)0x20,  /* [977] */
    (xdc_Char)0x43,  /* [978] */
    (xdc_Char)0x61,  /* [979] */
    (xdc_Char)0x6e,  /* [980] */
    (xdc_Char)0x6e,  /* [981] */
    (xdc_Char)0x6f,  /* [982] */
    (xdc_Char)0x74,  /* [983] */
    (xdc_Char)0x20,  /* [984] */
    (xdc_Char)0x63,  /* [985] */
    (xdc_Char)0x61,  /* [986] */
    (xdc_Char)0x6c,  /* [987] */
    (xdc_Char)0x6c,  /* [988] */
    (xdc_Char)0x20,  /* [989] */
    (xdc_Char)0x45,  /* [990] */
    (xdc_Char)0x76,  /* [991] */
    (xdc_Char)0x65,  /* [992] */
    (xdc_Char)0x6e,  /* [993] */
    (xdc_Char)0x74,  /* [994] */
    (xdc_Char)0x5f,  /* [995] */
    (xdc_Char)0x70,  /* [996] */
    (xdc_Char)0x65,  /* [997] */
    (xdc_Char)0x6e,  /* [998] */
    (xdc_Char)0x64,  /* [999] */
    (xdc_Char)0x28,  /* [1000] */
    (xdc_Char)0x29,  /* [1001] */
    (xdc_Char)0x20,  /* [1002] */
    (xdc_Char)0x77,  /* [1003] */
    (xdc_Char)0x68,  /* [1004] */
    (xdc_Char)0x69,  /* [1005] */
    (xdc_Char)0x6c,  /* [1006] */
    (xdc_Char)0x65,  /* [1007] */
    (xdc_Char)0x20,  /* [1008] */
    (xdc_Char)0x74,  /* [1009] */
    (xdc_Char)0x68,  /* [1010] */
    (xdc_Char)0x65,  /* [1011] */
    (xdc_Char)0x20,  /* [1012] */
    (xdc_Char)0x54,  /* [1013] */
    (xdc_Char)0x61,  /* [1014] */
    (xdc_Char)0x73,  /* [1015] */
    (xdc_Char)0x6b,  /* [1016] */
    (xdc_Char)0x20,  /* [1017] */
    (xdc_Char)0x6f,  /* [1018] */
    (xdc_Char)0x72,  /* [1019] */
    (xdc_Char)0x20,  /* [1020] */
    (xdc_Char)0x53,  /* [1021] */
    (xdc_Char)0x77,  /* [1022] */
    (xdc_Char)0x69,  /* [1023] */
    (xdc_Char)0x20,  /* [1024] */
    (xdc_Char)0x73,  /* [1025] */
    (xdc_Char)0x63,  /* [1026] */
    (xdc_Char)0x68,  /* [1027] */
    (xdc_Char)0x65,  /* [1028] */
    (xdc_Char)0x64,  /* [1029] */
    (xdc_Char)0x75,  /* [1030] */
    (xdc_Char)0x6c,  /* [1031] */
    (xdc_Char)0x65,  /* [1032] */
    (xdc_Char)0x72,  /* [1033] */
    (xdc_Char)0x20,  /* [1034] */
    (xdc_Char)0x69,  /* [1035] */
    (xdc_Char)0x73,  /* [1036] */
    (xdc_Char)0x20,  /* [1037] */
    (xdc_Char)0x64,  /* [1038] */
    (xdc_Char)0x69,  /* [1039] */
    (xdc_Char)0x73,  /* [1040] */
    (xdc_Char)0x61,  /* [1041] */
    (xdc_Char)0x62,  /* [1042] */
    (xdc_Char)0x6c,  /* [1043] */
    (xdc_Char)0x65,  /* [1044] */
    (xdc_Char)0x64,  /* [1045] */
    (xdc_Char)0x2e,  /* [1046] */
    (xdc_Char)0x0,  /* [1047] */
    (xdc_Char)0x4d,  /* [1048] */
    (xdc_Char)0x61,  /* [1049] */
    (xdc_Char)0x69,  /* [1050] */
    (xdc_Char)0x6c,  /* [1051] */
    (xdc_Char)0x62,  /* [1052] */
    (xdc_Char)0x6f,  /* [1053] */
    (xdc_Char)0x78,  /* [1054] */
    (xdc_Char)0x5f,  /* [1055] */
    (xdc_Char)0x63,  /* [1056] */
    (xdc_Char)0x72,  /* [1057] */
    (xdc_Char)0x65,  /* [1058] */
    (xdc_Char)0x61,  /* [1059] */
    (xdc_Char)0x74,  /* [1060] */
    (xdc_Char)0x65,  /* [1061] */
    (xdc_Char)0x27,  /* [1062] */
    (xdc_Char)0x73,  /* [1063] */
    (xdc_Char)0x20,  /* [1064] */
    (xdc_Char)0x62,  /* [1065] */
    (xdc_Char)0x75,  /* [1066] */
    (xdc_Char)0x66,  /* [1067] */
    (xdc_Char)0x53,  /* [1068] */
    (xdc_Char)0x69,  /* [1069] */
    (xdc_Char)0x7a,  /* [1070] */
    (xdc_Char)0x65,  /* [1071] */
    (xdc_Char)0x20,  /* [1072] */
    (xdc_Char)0x70,  /* [1073] */
    (xdc_Char)0x61,  /* [1074] */
    (xdc_Char)0x72,  /* [1075] */
    (xdc_Char)0x61,  /* [1076] */
    (xdc_Char)0x6d,  /* [1077] */
    (xdc_Char)0x65,  /* [1078] */
    (xdc_Char)0x74,  /* [1079] */
    (xdc_Char)0x65,  /* [1080] */
    (xdc_Char)0x72,  /* [1081] */
    (xdc_Char)0x20,  /* [1082] */
    (xdc_Char)0x69,  /* [1083] */
    (xdc_Char)0x73,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x69,  /* [1086] */
    (xdc_Char)0x6e,  /* [1087] */
    (xdc_Char)0x76,  /* [1088] */
    (xdc_Char)0x61,  /* [1089] */
    (xdc_Char)0x6c,  /* [1090] */
    (xdc_Char)0x69,  /* [1091] */
    (xdc_Char)0x64,  /* [1092] */
    (xdc_Char)0x20,  /* [1093] */
    (xdc_Char)0x28,  /* [1094] */
    (xdc_Char)0x74,  /* [1095] */
    (xdc_Char)0x6f,  /* [1096] */
    (xdc_Char)0x6f,  /* [1097] */
    (xdc_Char)0x20,  /* [1098] */
    (xdc_Char)0x73,  /* [1099] */
    (xdc_Char)0x6d,  /* [1100] */
    (xdc_Char)0x61,  /* [1101] */
    (xdc_Char)0x6c,  /* [1102] */
    (xdc_Char)0x6c,  /* [1103] */
    (xdc_Char)0x29,  /* [1104] */
    (xdc_Char)0x0,  /* [1105] */
    (xdc_Char)0x41,  /* [1106] */
    (xdc_Char)0x5f,  /* [1107] */
    (xdc_Char)0x6e,  /* [1108] */
    (xdc_Char)0x6f,  /* [1109] */
    (xdc_Char)0x45,  /* [1110] */
    (xdc_Char)0x76,  /* [1111] */
    (xdc_Char)0x65,  /* [1112] */
    (xdc_Char)0x6e,  /* [1113] */
    (xdc_Char)0x74,  /* [1114] */
    (xdc_Char)0x73,  /* [1115] */
    (xdc_Char)0x3a,  /* [1116] */
    (xdc_Char)0x20,  /* [1117] */
    (xdc_Char)0x54,  /* [1118] */
    (xdc_Char)0x68,  /* [1119] */
    (xdc_Char)0x65,  /* [1120] */
    (xdc_Char)0x20,  /* [1121] */
    (xdc_Char)0x45,  /* [1122] */
    (xdc_Char)0x76,  /* [1123] */
    (xdc_Char)0x65,  /* [1124] */
    (xdc_Char)0x6e,  /* [1125] */
    (xdc_Char)0x74,  /* [1126] */
    (xdc_Char)0x2e,  /* [1127] */
    (xdc_Char)0x73,  /* [1128] */
    (xdc_Char)0x75,  /* [1129] */
    (xdc_Char)0x70,  /* [1130] */
    (xdc_Char)0x70,  /* [1131] */
    (xdc_Char)0x6f,  /* [1132] */
    (xdc_Char)0x72,  /* [1133] */
    (xdc_Char)0x74,  /* [1134] */
    (xdc_Char)0x73,  /* [1135] */
    (xdc_Char)0x45,  /* [1136] */
    (xdc_Char)0x76,  /* [1137] */
    (xdc_Char)0x65,  /* [1138] */
    (xdc_Char)0x6e,  /* [1139] */
    (xdc_Char)0x74,  /* [1140] */
    (xdc_Char)0x73,  /* [1141] */
    (xdc_Char)0x20,  /* [1142] */
    (xdc_Char)0x66,  /* [1143] */
    (xdc_Char)0x6c,  /* [1144] */
    (xdc_Char)0x61,  /* [1145] */
    (xdc_Char)0x67,  /* [1146] */
    (xdc_Char)0x20,  /* [1147] */
    (xdc_Char)0x69,  /* [1148] */
    (xdc_Char)0x73,  /* [1149] */
    (xdc_Char)0x20,  /* [1150] */
    (xdc_Char)0x64,  /* [1151] */
    (xdc_Char)0x69,  /* [1152] */
    (xdc_Char)0x73,  /* [1153] */
    (xdc_Char)0x61,  /* [1154] */
    (xdc_Char)0x62,  /* [1155] */
    (xdc_Char)0x6c,  /* [1156] */
    (xdc_Char)0x65,  /* [1157] */
    (xdc_Char)0x64,  /* [1158] */
    (xdc_Char)0x2e,  /* [1159] */
    (xdc_Char)0x0,  /* [1160] */
    (xdc_Char)0x41,  /* [1161] */
    (xdc_Char)0x5f,  /* [1162] */
    (xdc_Char)0x69,  /* [1163] */
    (xdc_Char)0x6e,  /* [1164] */
    (xdc_Char)0x76,  /* [1165] */
    (xdc_Char)0x54,  /* [1166] */
    (xdc_Char)0x69,  /* [1167] */
    (xdc_Char)0x6d,  /* [1168] */
    (xdc_Char)0x65,  /* [1169] */
    (xdc_Char)0x6f,  /* [1170] */
    (xdc_Char)0x75,  /* [1171] */
    (xdc_Char)0x74,  /* [1172] */
    (xdc_Char)0x3a,  /* [1173] */
    (xdc_Char)0x20,  /* [1174] */
    (xdc_Char)0x43,  /* [1175] */
    (xdc_Char)0x61,  /* [1176] */
    (xdc_Char)0x6e,  /* [1177] */
    (xdc_Char)0x27,  /* [1178] */
    (xdc_Char)0x74,  /* [1179] */
    (xdc_Char)0x20,  /* [1180] */
    (xdc_Char)0x75,  /* [1181] */
    (xdc_Char)0x73,  /* [1182] */
    (xdc_Char)0x65,  /* [1183] */
    (xdc_Char)0x20,  /* [1184] */
    (xdc_Char)0x42,  /* [1185] */
    (xdc_Char)0x49,  /* [1186] */
    (xdc_Char)0x4f,  /* [1187] */
    (xdc_Char)0x53,  /* [1188] */
    (xdc_Char)0x5f,  /* [1189] */
    (xdc_Char)0x45,  /* [1190] */
    (xdc_Char)0x56,  /* [1191] */
    (xdc_Char)0x45,  /* [1192] */
    (xdc_Char)0x4e,  /* [1193] */
    (xdc_Char)0x54,  /* [1194] */
    (xdc_Char)0x5f,  /* [1195] */
    (xdc_Char)0x41,  /* [1196] */
    (xdc_Char)0x43,  /* [1197] */
    (xdc_Char)0x51,  /* [1198] */
    (xdc_Char)0x55,  /* [1199] */
    (xdc_Char)0x49,  /* [1200] */
    (xdc_Char)0x52,  /* [1201] */
    (xdc_Char)0x45,  /* [1202] */
    (xdc_Char)0x44,  /* [1203] */
    (xdc_Char)0x20,  /* [1204] */
    (xdc_Char)0x77,  /* [1205] */
    (xdc_Char)0x69,  /* [1206] */
    (xdc_Char)0x74,  /* [1207] */
    (xdc_Char)0x68,  /* [1208] */
    (xdc_Char)0x20,  /* [1209] */
    (xdc_Char)0x74,  /* [1210] */
    (xdc_Char)0x68,  /* [1211] */
    (xdc_Char)0x69,  /* [1212] */
    (xdc_Char)0x73,  /* [1213] */
    (xdc_Char)0x20,  /* [1214] */
    (xdc_Char)0x53,  /* [1215] */
    (xdc_Char)0x65,  /* [1216] */
    (xdc_Char)0x6d,  /* [1217] */
    (xdc_Char)0x61,  /* [1218] */
    (xdc_Char)0x70,  /* [1219] */
    (xdc_Char)0x68,  /* [1220] */
    (xdc_Char)0x6f,  /* [1221] */
    (xdc_Char)0x72,  /* [1222] */
    (xdc_Char)0x65,  /* [1223] */
    (xdc_Char)0x2e,  /* [1224] */
    (xdc_Char)0x0,  /* [1225] */
    (xdc_Char)0x41,  /* [1226] */
    (xdc_Char)0x5f,  /* [1227] */
    (xdc_Char)0x6f,  /* [1228] */
    (xdc_Char)0x76,  /* [1229] */
    (xdc_Char)0x65,  /* [1230] */
    (xdc_Char)0x72,  /* [1231] */
    (xdc_Char)0x66,  /* [1232] */
    (xdc_Char)0x6c,  /* [1233] */
    (xdc_Char)0x6f,  /* [1234] */
    (xdc_Char)0x77,  /* [1235] */
    (xdc_Char)0x3a,  /* [1236] */
    (xdc_Char)0x20,  /* [1237] */
    (xdc_Char)0x43,  /* [1238] */
    (xdc_Char)0x6f,  /* [1239] */
    (xdc_Char)0x75,  /* [1240] */
    (xdc_Char)0x6e,  /* [1241] */
    (xdc_Char)0x74,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x68,  /* [1244] */
    (xdc_Char)0x61,  /* [1245] */
    (xdc_Char)0x73,  /* [1246] */
    (xdc_Char)0x20,  /* [1247] */
    (xdc_Char)0x65,  /* [1248] */
    (xdc_Char)0x78,  /* [1249] */
    (xdc_Char)0x63,  /* [1250] */
    (xdc_Char)0x65,  /* [1251] */
    (xdc_Char)0x65,  /* [1252] */
    (xdc_Char)0x64,  /* [1253] */
    (xdc_Char)0x65,  /* [1254] */
    (xdc_Char)0x64,  /* [1255] */
    (xdc_Char)0x20,  /* [1256] */
    (xdc_Char)0x36,  /* [1257] */
    (xdc_Char)0x35,  /* [1258] */
    (xdc_Char)0x35,  /* [1259] */
    (xdc_Char)0x33,  /* [1260] */
    (xdc_Char)0x35,  /* [1261] */
    (xdc_Char)0x20,  /* [1262] */
    (xdc_Char)0x61,  /* [1263] */
    (xdc_Char)0x6e,  /* [1264] */
    (xdc_Char)0x64,  /* [1265] */
    (xdc_Char)0x20,  /* [1266] */
    (xdc_Char)0x72,  /* [1267] */
    (xdc_Char)0x6f,  /* [1268] */
    (xdc_Char)0x6c,  /* [1269] */
    (xdc_Char)0x6c,  /* [1270] */
    (xdc_Char)0x65,  /* [1271] */
    (xdc_Char)0x64,  /* [1272] */
    (xdc_Char)0x20,  /* [1273] */
    (xdc_Char)0x6f,  /* [1274] */
    (xdc_Char)0x76,  /* [1275] */
    (xdc_Char)0x65,  /* [1276] */
    (xdc_Char)0x72,  /* [1277] */
    (xdc_Char)0x2e,  /* [1278] */
    (xdc_Char)0x0,  /* [1279] */
    (xdc_Char)0x41,  /* [1280] */
    (xdc_Char)0x5f,  /* [1281] */
    (xdc_Char)0x70,  /* [1282] */
    (xdc_Char)0x65,  /* [1283] */
    (xdc_Char)0x6e,  /* [1284] */
    (xdc_Char)0x64,  /* [1285] */
    (xdc_Char)0x54,  /* [1286] */
    (xdc_Char)0x61,  /* [1287] */
    (xdc_Char)0x73,  /* [1288] */
    (xdc_Char)0x6b,  /* [1289] */
    (xdc_Char)0x44,  /* [1290] */
    (xdc_Char)0x69,  /* [1291] */
    (xdc_Char)0x73,  /* [1292] */
    (xdc_Char)0x61,  /* [1293] */
    (xdc_Char)0x62,  /* [1294] */
    (xdc_Char)0x6c,  /* [1295] */
    (xdc_Char)0x65,  /* [1296] */
    (xdc_Char)0x64,  /* [1297] */
    (xdc_Char)0x3a,  /* [1298] */
    (xdc_Char)0x20,  /* [1299] */
    (xdc_Char)0x43,  /* [1300] */
    (xdc_Char)0x61,  /* [1301] */
    (xdc_Char)0x6e,  /* [1302] */
    (xdc_Char)0x6e,  /* [1303] */
    (xdc_Char)0x6f,  /* [1304] */
    (xdc_Char)0x74,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x63,  /* [1307] */
    (xdc_Char)0x61,  /* [1308] */
    (xdc_Char)0x6c,  /* [1309] */
    (xdc_Char)0x6c,  /* [1310] */
    (xdc_Char)0x20,  /* [1311] */
    (xdc_Char)0x53,  /* [1312] */
    (xdc_Char)0x65,  /* [1313] */
    (xdc_Char)0x6d,  /* [1314] */
    (xdc_Char)0x61,  /* [1315] */
    (xdc_Char)0x70,  /* [1316] */
    (xdc_Char)0x68,  /* [1317] */
    (xdc_Char)0x6f,  /* [1318] */
    (xdc_Char)0x72,  /* [1319] */
    (xdc_Char)0x65,  /* [1320] */
    (xdc_Char)0x5f,  /* [1321] */
    (xdc_Char)0x70,  /* [1322] */
    (xdc_Char)0x65,  /* [1323] */
    (xdc_Char)0x6e,  /* [1324] */
    (xdc_Char)0x64,  /* [1325] */
    (xdc_Char)0x28,  /* [1326] */
    (xdc_Char)0x29,  /* [1327] */
    (xdc_Char)0x20,  /* [1328] */
    (xdc_Char)0x77,  /* [1329] */
    (xdc_Char)0x68,  /* [1330] */
    (xdc_Char)0x69,  /* [1331] */
    (xdc_Char)0x6c,  /* [1332] */
    (xdc_Char)0x65,  /* [1333] */
    (xdc_Char)0x20,  /* [1334] */
    (xdc_Char)0x74,  /* [1335] */
    (xdc_Char)0x68,  /* [1336] */
    (xdc_Char)0x65,  /* [1337] */
    (xdc_Char)0x20,  /* [1338] */
    (xdc_Char)0x54,  /* [1339] */
    (xdc_Char)0x61,  /* [1340] */
    (xdc_Char)0x73,  /* [1341] */
    (xdc_Char)0x6b,  /* [1342] */
    (xdc_Char)0x20,  /* [1343] */
    (xdc_Char)0x6f,  /* [1344] */
    (xdc_Char)0x72,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x53,  /* [1347] */
    (xdc_Char)0x77,  /* [1348] */
    (xdc_Char)0x69,  /* [1349] */
    (xdc_Char)0x20,  /* [1350] */
    (xdc_Char)0x73,  /* [1351] */
    (xdc_Char)0x63,  /* [1352] */
    (xdc_Char)0x68,  /* [1353] */
    (xdc_Char)0x65,  /* [1354] */
    (xdc_Char)0x64,  /* [1355] */
    (xdc_Char)0x75,  /* [1356] */
    (xdc_Char)0x6c,  /* [1357] */
    (xdc_Char)0x65,  /* [1358] */
    (xdc_Char)0x72,  /* [1359] */
    (xdc_Char)0x20,  /* [1360] */
    (xdc_Char)0x69,  /* [1361] */
    (xdc_Char)0x73,  /* [1362] */
    (xdc_Char)0x20,  /* [1363] */
    (xdc_Char)0x64,  /* [1364] */
    (xdc_Char)0x69,  /* [1365] */
    (xdc_Char)0x73,  /* [1366] */
    (xdc_Char)0x61,  /* [1367] */
    (xdc_Char)0x62,  /* [1368] */
    (xdc_Char)0x6c,  /* [1369] */
    (xdc_Char)0x65,  /* [1370] */
    (xdc_Char)0x64,  /* [1371] */
    (xdc_Char)0x2e,  /* [1372] */
    (xdc_Char)0x0,  /* [1373] */
    (xdc_Char)0x41,  /* [1374] */
    (xdc_Char)0x5f,  /* [1375] */
    (xdc_Char)0x73,  /* [1376] */
    (xdc_Char)0x77,  /* [1377] */
    (xdc_Char)0x69,  /* [1378] */
    (xdc_Char)0x44,  /* [1379] */
    (xdc_Char)0x69,  /* [1380] */
    (xdc_Char)0x73,  /* [1381] */
    (xdc_Char)0x61,  /* [1382] */
    (xdc_Char)0x62,  /* [1383] */
    (xdc_Char)0x6c,  /* [1384] */
    (xdc_Char)0x65,  /* [1385] */
    (xdc_Char)0x64,  /* [1386] */
    (xdc_Char)0x3a,  /* [1387] */
    (xdc_Char)0x20,  /* [1388] */
    (xdc_Char)0x43,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x6e,  /* [1391] */
    (xdc_Char)0x6e,  /* [1392] */
    (xdc_Char)0x6f,  /* [1393] */
    (xdc_Char)0x74,  /* [1394] */
    (xdc_Char)0x20,  /* [1395] */
    (xdc_Char)0x63,  /* [1396] */
    (xdc_Char)0x72,  /* [1397] */
    (xdc_Char)0x65,  /* [1398] */
    (xdc_Char)0x61,  /* [1399] */
    (xdc_Char)0x74,  /* [1400] */
    (xdc_Char)0x65,  /* [1401] */
    (xdc_Char)0x20,  /* [1402] */
    (xdc_Char)0x61,  /* [1403] */
    (xdc_Char)0x20,  /* [1404] */
    (xdc_Char)0x53,  /* [1405] */
    (xdc_Char)0x77,  /* [1406] */
    (xdc_Char)0x69,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x77,  /* [1409] */
    (xdc_Char)0x68,  /* [1410] */
    (xdc_Char)0x65,  /* [1411] */
    (xdc_Char)0x6e,  /* [1412] */
    (xdc_Char)0x20,  /* [1413] */
    (xdc_Char)0x53,  /* [1414] */
    (xdc_Char)0x77,  /* [1415] */
    (xdc_Char)0x69,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x69,  /* [1418] */
    (xdc_Char)0x73,  /* [1419] */
    (xdc_Char)0x20,  /* [1420] */
    (xdc_Char)0x64,  /* [1421] */
    (xdc_Char)0x69,  /* [1422] */
    (xdc_Char)0x73,  /* [1423] */
    (xdc_Char)0x61,  /* [1424] */
    (xdc_Char)0x62,  /* [1425] */
    (xdc_Char)0x6c,  /* [1426] */
    (xdc_Char)0x65,  /* [1427] */
    (xdc_Char)0x64,  /* [1428] */
    (xdc_Char)0x2e,  /* [1429] */
    (xdc_Char)0x0,  /* [1430] */
    (xdc_Char)0x41,  /* [1431] */
    (xdc_Char)0x5f,  /* [1432] */
    (xdc_Char)0x62,  /* [1433] */
    (xdc_Char)0x61,  /* [1434] */
    (xdc_Char)0x64,  /* [1435] */
    (xdc_Char)0x50,  /* [1436] */
    (xdc_Char)0x72,  /* [1437] */
    (xdc_Char)0x69,  /* [1438] */
    (xdc_Char)0x6f,  /* [1439] */
    (xdc_Char)0x72,  /* [1440] */
    (xdc_Char)0x69,  /* [1441] */
    (xdc_Char)0x74,  /* [1442] */
    (xdc_Char)0x79,  /* [1443] */
    (xdc_Char)0x3a,  /* [1444] */
    (xdc_Char)0x20,  /* [1445] */
    (xdc_Char)0x41,  /* [1446] */
    (xdc_Char)0x6e,  /* [1447] */
    (xdc_Char)0x20,  /* [1448] */
    (xdc_Char)0x69,  /* [1449] */
    (xdc_Char)0x6e,  /* [1450] */
    (xdc_Char)0x76,  /* [1451] */
    (xdc_Char)0x61,  /* [1452] */
    (xdc_Char)0x6c,  /* [1453] */
    (xdc_Char)0x69,  /* [1454] */
    (xdc_Char)0x64,  /* [1455] */
    (xdc_Char)0x20,  /* [1456] */
    (xdc_Char)0x53,  /* [1457] */
    (xdc_Char)0x77,  /* [1458] */
    (xdc_Char)0x69,  /* [1459] */
    (xdc_Char)0x20,  /* [1460] */
    (xdc_Char)0x70,  /* [1461] */
    (xdc_Char)0x72,  /* [1462] */
    (xdc_Char)0x69,  /* [1463] */
    (xdc_Char)0x6f,  /* [1464] */
    (xdc_Char)0x72,  /* [1465] */
    (xdc_Char)0x69,  /* [1466] */
    (xdc_Char)0x74,  /* [1467] */
    (xdc_Char)0x79,  /* [1468] */
    (xdc_Char)0x20,  /* [1469] */
    (xdc_Char)0x77,  /* [1470] */
    (xdc_Char)0x61,  /* [1471] */
    (xdc_Char)0x73,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x75,  /* [1474] */
    (xdc_Char)0x73,  /* [1475] */
    (xdc_Char)0x65,  /* [1476] */
    (xdc_Char)0x64,  /* [1477] */
    (xdc_Char)0x2e,  /* [1478] */
    (xdc_Char)0x0,  /* [1479] */
    (xdc_Char)0x41,  /* [1480] */
    (xdc_Char)0x5f,  /* [1481] */
    (xdc_Char)0x62,  /* [1482] */
    (xdc_Char)0x61,  /* [1483] */
    (xdc_Char)0x64,  /* [1484] */
    (xdc_Char)0x54,  /* [1485] */
    (xdc_Char)0x68,  /* [1486] */
    (xdc_Char)0x72,  /* [1487] */
    (xdc_Char)0x65,  /* [1488] */
    (xdc_Char)0x61,  /* [1489] */
    (xdc_Char)0x64,  /* [1490] */
    (xdc_Char)0x54,  /* [1491] */
    (xdc_Char)0x79,  /* [1492] */
    (xdc_Char)0x70,  /* [1493] */
    (xdc_Char)0x65,  /* [1494] */
    (xdc_Char)0x3a,  /* [1495] */
    (xdc_Char)0x20,  /* [1496] */
    (xdc_Char)0x43,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x6e,  /* [1499] */
    (xdc_Char)0x6e,  /* [1500] */
    (xdc_Char)0x6f,  /* [1501] */
    (xdc_Char)0x74,  /* [1502] */
    (xdc_Char)0x20,  /* [1503] */
    (xdc_Char)0x63,  /* [1504] */
    (xdc_Char)0x72,  /* [1505] */
    (xdc_Char)0x65,  /* [1506] */
    (xdc_Char)0x61,  /* [1507] */
    (xdc_Char)0x74,  /* [1508] */
    (xdc_Char)0x65,  /* [1509] */
    (xdc_Char)0x2f,  /* [1510] */
    (xdc_Char)0x64,  /* [1511] */
    (xdc_Char)0x65,  /* [1512] */
    (xdc_Char)0x6c,  /* [1513] */
    (xdc_Char)0x65,  /* [1514] */
    (xdc_Char)0x74,  /* [1515] */
    (xdc_Char)0x65,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x61,  /* [1518] */
    (xdc_Char)0x20,  /* [1519] */
    (xdc_Char)0x74,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x73,  /* [1522] */
    (xdc_Char)0x6b,  /* [1523] */
    (xdc_Char)0x20,  /* [1524] */
    (xdc_Char)0x66,  /* [1525] */
    (xdc_Char)0x72,  /* [1526] */
    (xdc_Char)0x6f,  /* [1527] */
    (xdc_Char)0x6d,  /* [1528] */
    (xdc_Char)0x20,  /* [1529] */
    (xdc_Char)0x48,  /* [1530] */
    (xdc_Char)0x77,  /* [1531] */
    (xdc_Char)0x69,  /* [1532] */
    (xdc_Char)0x20,  /* [1533] */
    (xdc_Char)0x6f,  /* [1534] */
    (xdc_Char)0x72,  /* [1535] */
    (xdc_Char)0x20,  /* [1536] */
    (xdc_Char)0x53,  /* [1537] */
    (xdc_Char)0x77,  /* [1538] */
    (xdc_Char)0x69,  /* [1539] */
    (xdc_Char)0x20,  /* [1540] */
    (xdc_Char)0x74,  /* [1541] */
    (xdc_Char)0x68,  /* [1542] */
    (xdc_Char)0x72,  /* [1543] */
    (xdc_Char)0x65,  /* [1544] */
    (xdc_Char)0x61,  /* [1545] */
    (xdc_Char)0x64,  /* [1546] */
    (xdc_Char)0x2e,  /* [1547] */
    (xdc_Char)0x0,  /* [1548] */
    (xdc_Char)0x41,  /* [1549] */
    (xdc_Char)0x5f,  /* [1550] */
    (xdc_Char)0x62,  /* [1551] */
    (xdc_Char)0x61,  /* [1552] */
    (xdc_Char)0x64,  /* [1553] */
    (xdc_Char)0x54,  /* [1554] */
    (xdc_Char)0x61,  /* [1555] */
    (xdc_Char)0x73,  /* [1556] */
    (xdc_Char)0x6b,  /* [1557] */
    (xdc_Char)0x53,  /* [1558] */
    (xdc_Char)0x74,  /* [1559] */
    (xdc_Char)0x61,  /* [1560] */
    (xdc_Char)0x74,  /* [1561] */
    (xdc_Char)0x65,  /* [1562] */
    (xdc_Char)0x3a,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x43,  /* [1565] */
    (xdc_Char)0x61,  /* [1566] */
    (xdc_Char)0x6e,  /* [1567] */
    (xdc_Char)0x27,  /* [1568] */
    (xdc_Char)0x74,  /* [1569] */
    (xdc_Char)0x20,  /* [1570] */
    (xdc_Char)0x64,  /* [1571] */
    (xdc_Char)0x65,  /* [1572] */
    (xdc_Char)0x6c,  /* [1573] */
    (xdc_Char)0x65,  /* [1574] */
    (xdc_Char)0x74,  /* [1575] */
    (xdc_Char)0x65,  /* [1576] */
    (xdc_Char)0x20,  /* [1577] */
    (xdc_Char)0x61,  /* [1578] */
    (xdc_Char)0x20,  /* [1579] */
    (xdc_Char)0x74,  /* [1580] */
    (xdc_Char)0x61,  /* [1581] */
    (xdc_Char)0x73,  /* [1582] */
    (xdc_Char)0x6b,  /* [1583] */
    (xdc_Char)0x20,  /* [1584] */
    (xdc_Char)0x69,  /* [1585] */
    (xdc_Char)0x6e,  /* [1586] */
    (xdc_Char)0x20,  /* [1587] */
    (xdc_Char)0x52,  /* [1588] */
    (xdc_Char)0x55,  /* [1589] */
    (xdc_Char)0x4e,  /* [1590] */
    (xdc_Char)0x4e,  /* [1591] */
    (xdc_Char)0x49,  /* [1592] */
    (xdc_Char)0x4e,  /* [1593] */
    (xdc_Char)0x47,  /* [1594] */
    (xdc_Char)0x20,  /* [1595] */
    (xdc_Char)0x73,  /* [1596] */
    (xdc_Char)0x74,  /* [1597] */
    (xdc_Char)0x61,  /* [1598] */
    (xdc_Char)0x74,  /* [1599] */
    (xdc_Char)0x65,  /* [1600] */
    (xdc_Char)0x2e,  /* [1601] */
    (xdc_Char)0x0,  /* [1602] */
    (xdc_Char)0x41,  /* [1603] */
    (xdc_Char)0x5f,  /* [1604] */
    (xdc_Char)0x6e,  /* [1605] */
    (xdc_Char)0x6f,  /* [1606] */
    (xdc_Char)0x50,  /* [1607] */
    (xdc_Char)0x65,  /* [1608] */
    (xdc_Char)0x6e,  /* [1609] */
    (xdc_Char)0x64,  /* [1610] */
    (xdc_Char)0x45,  /* [1611] */
    (xdc_Char)0x6c,  /* [1612] */
    (xdc_Char)0x65,  /* [1613] */
    (xdc_Char)0x6d,  /* [1614] */
    (xdc_Char)0x3a,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x4e,  /* [1617] */
    (xdc_Char)0x6f,  /* [1618] */
    (xdc_Char)0x74,  /* [1619] */
    (xdc_Char)0x20,  /* [1620] */
    (xdc_Char)0x65,  /* [1621] */
    (xdc_Char)0x6e,  /* [1622] */
    (xdc_Char)0x6f,  /* [1623] */
    (xdc_Char)0x75,  /* [1624] */
    (xdc_Char)0x67,  /* [1625] */
    (xdc_Char)0x68,  /* [1626] */
    (xdc_Char)0x20,  /* [1627] */
    (xdc_Char)0x69,  /* [1628] */
    (xdc_Char)0x6e,  /* [1629] */
    (xdc_Char)0x66,  /* [1630] */
    (xdc_Char)0x6f,  /* [1631] */
    (xdc_Char)0x20,  /* [1632] */
    (xdc_Char)0x74,  /* [1633] */
    (xdc_Char)0x6f,  /* [1634] */
    (xdc_Char)0x20,  /* [1635] */
    (xdc_Char)0x64,  /* [1636] */
    (xdc_Char)0x65,  /* [1637] */
    (xdc_Char)0x6c,  /* [1638] */
    (xdc_Char)0x65,  /* [1639] */
    (xdc_Char)0x74,  /* [1640] */
    (xdc_Char)0x65,  /* [1641] */
    (xdc_Char)0x20,  /* [1642] */
    (xdc_Char)0x42,  /* [1643] */
    (xdc_Char)0x4c,  /* [1644] */
    (xdc_Char)0x4f,  /* [1645] */
    (xdc_Char)0x43,  /* [1646] */
    (xdc_Char)0x4b,  /* [1647] */
    (xdc_Char)0x45,  /* [1648] */
    (xdc_Char)0x44,  /* [1649] */
    (xdc_Char)0x20,  /* [1650] */
    (xdc_Char)0x74,  /* [1651] */
    (xdc_Char)0x61,  /* [1652] */
    (xdc_Char)0x73,  /* [1653] */
    (xdc_Char)0x6b,  /* [1654] */
    (xdc_Char)0x2e,  /* [1655] */
    (xdc_Char)0x0,  /* [1656] */
    (xdc_Char)0x41,  /* [1657] */
    (xdc_Char)0x5f,  /* [1658] */
    (xdc_Char)0x74,  /* [1659] */
    (xdc_Char)0x61,  /* [1660] */
    (xdc_Char)0x73,  /* [1661] */
    (xdc_Char)0x6b,  /* [1662] */
    (xdc_Char)0x44,  /* [1663] */
    (xdc_Char)0x69,  /* [1664] */
    (xdc_Char)0x73,  /* [1665] */
    (xdc_Char)0x61,  /* [1666] */
    (xdc_Char)0x62,  /* [1667] */
    (xdc_Char)0x6c,  /* [1668] */
    (xdc_Char)0x65,  /* [1669] */
    (xdc_Char)0x64,  /* [1670] */
    (xdc_Char)0x3a,  /* [1671] */
    (xdc_Char)0x20,  /* [1672] */
    (xdc_Char)0x43,  /* [1673] */
    (xdc_Char)0x61,  /* [1674] */
    (xdc_Char)0x6e,  /* [1675] */
    (xdc_Char)0x6e,  /* [1676] */
    (xdc_Char)0x6f,  /* [1677] */
    (xdc_Char)0x74,  /* [1678] */
    (xdc_Char)0x20,  /* [1679] */
    (xdc_Char)0x63,  /* [1680] */
    (xdc_Char)0x72,  /* [1681] */
    (xdc_Char)0x65,  /* [1682] */
    (xdc_Char)0x61,  /* [1683] */
    (xdc_Char)0x74,  /* [1684] */
    (xdc_Char)0x65,  /* [1685] */
    (xdc_Char)0x20,  /* [1686] */
    (xdc_Char)0x61,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x74,  /* [1689] */
    (xdc_Char)0x61,  /* [1690] */
    (xdc_Char)0x73,  /* [1691] */
    (xdc_Char)0x6b,  /* [1692] */
    (xdc_Char)0x20,  /* [1693] */
    (xdc_Char)0x77,  /* [1694] */
    (xdc_Char)0x68,  /* [1695] */
    (xdc_Char)0x65,  /* [1696] */
    (xdc_Char)0x6e,  /* [1697] */
    (xdc_Char)0x20,  /* [1698] */
    (xdc_Char)0x74,  /* [1699] */
    (xdc_Char)0x61,  /* [1700] */
    (xdc_Char)0x73,  /* [1701] */
    (xdc_Char)0x6b,  /* [1702] */
    (xdc_Char)0x69,  /* [1703] */
    (xdc_Char)0x6e,  /* [1704] */
    (xdc_Char)0x67,  /* [1705] */
    (xdc_Char)0x20,  /* [1706] */
    (xdc_Char)0x69,  /* [1707] */
    (xdc_Char)0x73,  /* [1708] */
    (xdc_Char)0x20,  /* [1709] */
    (xdc_Char)0x64,  /* [1710] */
    (xdc_Char)0x69,  /* [1711] */
    (xdc_Char)0x73,  /* [1712] */
    (xdc_Char)0x61,  /* [1713] */
    (xdc_Char)0x62,  /* [1714] */
    (xdc_Char)0x6c,  /* [1715] */
    (xdc_Char)0x65,  /* [1716] */
    (xdc_Char)0x64,  /* [1717] */
    (xdc_Char)0x2e,  /* [1718] */
    (xdc_Char)0x0,  /* [1719] */
    (xdc_Char)0x41,  /* [1720] */
    (xdc_Char)0x5f,  /* [1721] */
    (xdc_Char)0x62,  /* [1722] */
    (xdc_Char)0x61,  /* [1723] */
    (xdc_Char)0x64,  /* [1724] */
    (xdc_Char)0x50,  /* [1725] */
    (xdc_Char)0x72,  /* [1726] */
    (xdc_Char)0x69,  /* [1727] */
    (xdc_Char)0x6f,  /* [1728] */
    (xdc_Char)0x72,  /* [1729] */
    (xdc_Char)0x69,  /* [1730] */
    (xdc_Char)0x74,  /* [1731] */
    (xdc_Char)0x79,  /* [1732] */
    (xdc_Char)0x3a,  /* [1733] */
    (xdc_Char)0x20,  /* [1734] */
    (xdc_Char)0x41,  /* [1735] */
    (xdc_Char)0x6e,  /* [1736] */
    (xdc_Char)0x20,  /* [1737] */
    (xdc_Char)0x69,  /* [1738] */
    (xdc_Char)0x6e,  /* [1739] */
    (xdc_Char)0x76,  /* [1740] */
    (xdc_Char)0x61,  /* [1741] */
    (xdc_Char)0x6c,  /* [1742] */
    (xdc_Char)0x69,  /* [1743] */
    (xdc_Char)0x64,  /* [1744] */
    (xdc_Char)0x20,  /* [1745] */
    (xdc_Char)0x74,  /* [1746] */
    (xdc_Char)0x61,  /* [1747] */
    (xdc_Char)0x73,  /* [1748] */
    (xdc_Char)0x6b,  /* [1749] */
    (xdc_Char)0x20,  /* [1750] */
    (xdc_Char)0x70,  /* [1751] */
    (xdc_Char)0x72,  /* [1752] */
    (xdc_Char)0x69,  /* [1753] */
    (xdc_Char)0x6f,  /* [1754] */
    (xdc_Char)0x72,  /* [1755] */
    (xdc_Char)0x69,  /* [1756] */
    (xdc_Char)0x74,  /* [1757] */
    (xdc_Char)0x79,  /* [1758] */
    (xdc_Char)0x20,  /* [1759] */
    (xdc_Char)0x77,  /* [1760] */
    (xdc_Char)0x61,  /* [1761] */
    (xdc_Char)0x73,  /* [1762] */
    (xdc_Char)0x20,  /* [1763] */
    (xdc_Char)0x75,  /* [1764] */
    (xdc_Char)0x73,  /* [1765] */
    (xdc_Char)0x65,  /* [1766] */
    (xdc_Char)0x64,  /* [1767] */
    (xdc_Char)0x2e,  /* [1768] */
    (xdc_Char)0x0,  /* [1769] */
    (xdc_Char)0x41,  /* [1770] */
    (xdc_Char)0x5f,  /* [1771] */
    (xdc_Char)0x62,  /* [1772] */
    (xdc_Char)0x61,  /* [1773] */
    (xdc_Char)0x64,  /* [1774] */
    (xdc_Char)0x54,  /* [1775] */
    (xdc_Char)0x69,  /* [1776] */
    (xdc_Char)0x6d,  /* [1777] */
    (xdc_Char)0x65,  /* [1778] */
    (xdc_Char)0x6f,  /* [1779] */
    (xdc_Char)0x75,  /* [1780] */
    (xdc_Char)0x74,  /* [1781] */
    (xdc_Char)0x3a,  /* [1782] */
    (xdc_Char)0x20,  /* [1783] */
    (xdc_Char)0x43,  /* [1784] */
    (xdc_Char)0x61,  /* [1785] */
    (xdc_Char)0x6e,  /* [1786] */
    (xdc_Char)0x27,  /* [1787] */
    (xdc_Char)0x74,  /* [1788] */
    (xdc_Char)0x20,  /* [1789] */
    (xdc_Char)0x73,  /* [1790] */
    (xdc_Char)0x6c,  /* [1791] */
    (xdc_Char)0x65,  /* [1792] */
    (xdc_Char)0x65,  /* [1793] */
    (xdc_Char)0x70,  /* [1794] */
    (xdc_Char)0x20,  /* [1795] */
    (xdc_Char)0x46,  /* [1796] */
    (xdc_Char)0x4f,  /* [1797] */
    (xdc_Char)0x52,  /* [1798] */
    (xdc_Char)0x45,  /* [1799] */
    (xdc_Char)0x56,  /* [1800] */
    (xdc_Char)0x45,  /* [1801] */
    (xdc_Char)0x52,  /* [1802] */
    (xdc_Char)0x2e,  /* [1803] */
    (xdc_Char)0x0,  /* [1804] */
    (xdc_Char)0x41,  /* [1805] */
    (xdc_Char)0x5f,  /* [1806] */
    (xdc_Char)0x62,  /* [1807] */
    (xdc_Char)0x61,  /* [1808] */
    (xdc_Char)0x64,  /* [1809] */
    (xdc_Char)0x41,  /* [1810] */
    (xdc_Char)0x66,  /* [1811] */
    (xdc_Char)0x66,  /* [1812] */
    (xdc_Char)0x69,  /* [1813] */
    (xdc_Char)0x6e,  /* [1814] */
    (xdc_Char)0x69,  /* [1815] */
    (xdc_Char)0x74,  /* [1816] */
    (xdc_Char)0x79,  /* [1817] */
    (xdc_Char)0x3a,  /* [1818] */
    (xdc_Char)0x20,  /* [1819] */
    (xdc_Char)0x49,  /* [1820] */
    (xdc_Char)0x6e,  /* [1821] */
    (xdc_Char)0x76,  /* [1822] */
    (xdc_Char)0x61,  /* [1823] */
    (xdc_Char)0x6c,  /* [1824] */
    (xdc_Char)0x69,  /* [1825] */
    (xdc_Char)0x64,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x61,  /* [1828] */
    (xdc_Char)0x66,  /* [1829] */
    (xdc_Char)0x66,  /* [1830] */
    (xdc_Char)0x69,  /* [1831] */
    (xdc_Char)0x6e,  /* [1832] */
    (xdc_Char)0x69,  /* [1833] */
    (xdc_Char)0x74,  /* [1834] */
    (xdc_Char)0x79,  /* [1835] */
    (xdc_Char)0x2e,  /* [1836] */
    (xdc_Char)0x0,  /* [1837] */
    (xdc_Char)0x41,  /* [1838] */
    (xdc_Char)0x5f,  /* [1839] */
    (xdc_Char)0x73,  /* [1840] */
    (xdc_Char)0x6c,  /* [1841] */
    (xdc_Char)0x65,  /* [1842] */
    (xdc_Char)0x65,  /* [1843] */
    (xdc_Char)0x70,  /* [1844] */
    (xdc_Char)0x54,  /* [1845] */
    (xdc_Char)0x61,  /* [1846] */
    (xdc_Char)0x73,  /* [1847] */
    (xdc_Char)0x6b,  /* [1848] */
    (xdc_Char)0x44,  /* [1849] */
    (xdc_Char)0x69,  /* [1850] */
    (xdc_Char)0x73,  /* [1851] */
    (xdc_Char)0x61,  /* [1852] */
    (xdc_Char)0x62,  /* [1853] */
    (xdc_Char)0x6c,  /* [1854] */
    (xdc_Char)0x65,  /* [1855] */
    (xdc_Char)0x64,  /* [1856] */
    (xdc_Char)0x3a,  /* [1857] */
    (xdc_Char)0x20,  /* [1858] */
    (xdc_Char)0x43,  /* [1859] */
    (xdc_Char)0x61,  /* [1860] */
    (xdc_Char)0x6e,  /* [1861] */
    (xdc_Char)0x6e,  /* [1862] */
    (xdc_Char)0x6f,  /* [1863] */
    (xdc_Char)0x74,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x63,  /* [1866] */
    (xdc_Char)0x61,  /* [1867] */
    (xdc_Char)0x6c,  /* [1868] */
    (xdc_Char)0x6c,  /* [1869] */
    (xdc_Char)0x20,  /* [1870] */
    (xdc_Char)0x54,  /* [1871] */
    (xdc_Char)0x61,  /* [1872] */
    (xdc_Char)0x73,  /* [1873] */
    (xdc_Char)0x6b,  /* [1874] */
    (xdc_Char)0x5f,  /* [1875] */
    (xdc_Char)0x73,  /* [1876] */
    (xdc_Char)0x6c,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x65,  /* [1879] */
    (xdc_Char)0x70,  /* [1880] */
    (xdc_Char)0x28,  /* [1881] */
    (xdc_Char)0x29,  /* [1882] */
    (xdc_Char)0x20,  /* [1883] */
    (xdc_Char)0x77,  /* [1884] */
    (xdc_Char)0x68,  /* [1885] */
    (xdc_Char)0x69,  /* [1886] */
    (xdc_Char)0x6c,  /* [1887] */
    (xdc_Char)0x65,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x74,  /* [1890] */
    (xdc_Char)0x68,  /* [1891] */
    (xdc_Char)0x65,  /* [1892] */
    (xdc_Char)0x20,  /* [1893] */
    (xdc_Char)0x54,  /* [1894] */
    (xdc_Char)0x61,  /* [1895] */
    (xdc_Char)0x73,  /* [1896] */
    (xdc_Char)0x6b,  /* [1897] */
    (xdc_Char)0x20,  /* [1898] */
    (xdc_Char)0x73,  /* [1899] */
    (xdc_Char)0x63,  /* [1900] */
    (xdc_Char)0x68,  /* [1901] */
    (xdc_Char)0x65,  /* [1902] */
    (xdc_Char)0x64,  /* [1903] */
    (xdc_Char)0x75,  /* [1904] */
    (xdc_Char)0x6c,  /* [1905] */
    (xdc_Char)0x65,  /* [1906] */
    (xdc_Char)0x72,  /* [1907] */
    (xdc_Char)0x20,  /* [1908] */
    (xdc_Char)0x69,  /* [1909] */
    (xdc_Char)0x73,  /* [1910] */
    (xdc_Char)0x20,  /* [1911] */
    (xdc_Char)0x64,  /* [1912] */
    (xdc_Char)0x69,  /* [1913] */
    (xdc_Char)0x73,  /* [1914] */
    (xdc_Char)0x61,  /* [1915] */
    (xdc_Char)0x62,  /* [1916] */
    (xdc_Char)0x6c,  /* [1917] */
    (xdc_Char)0x65,  /* [1918] */
    (xdc_Char)0x64,  /* [1919] */
    (xdc_Char)0x2e,  /* [1920] */
    (xdc_Char)0x0,  /* [1921] */
    (xdc_Char)0x41,  /* [1922] */
    (xdc_Char)0x5f,  /* [1923] */
    (xdc_Char)0x69,  /* [1924] */
    (xdc_Char)0x6e,  /* [1925] */
    (xdc_Char)0x76,  /* [1926] */
    (xdc_Char)0x61,  /* [1927] */
    (xdc_Char)0x6c,  /* [1928] */
    (xdc_Char)0x69,  /* [1929] */
    (xdc_Char)0x64,  /* [1930] */
    (xdc_Char)0x43,  /* [1931] */
    (xdc_Char)0x6f,  /* [1932] */
    (xdc_Char)0x72,  /* [1933] */
    (xdc_Char)0x65,  /* [1934] */
    (xdc_Char)0x49,  /* [1935] */
    (xdc_Char)0x64,  /* [1936] */
    (xdc_Char)0x3a,  /* [1937] */
    (xdc_Char)0x20,  /* [1938] */
    (xdc_Char)0x43,  /* [1939] */
    (xdc_Char)0x61,  /* [1940] */
    (xdc_Char)0x6e,  /* [1941] */
    (xdc_Char)0x6e,  /* [1942] */
    (xdc_Char)0x6f,  /* [1943] */
    (xdc_Char)0x74,  /* [1944] */
    (xdc_Char)0x20,  /* [1945] */
    (xdc_Char)0x70,  /* [1946] */
    (xdc_Char)0x61,  /* [1947] */
    (xdc_Char)0x73,  /* [1948] */
    (xdc_Char)0x73,  /* [1949] */
    (xdc_Char)0x20,  /* [1950] */
    (xdc_Char)0x61,  /* [1951] */
    (xdc_Char)0x20,  /* [1952] */
    (xdc_Char)0x6e,  /* [1953] */
    (xdc_Char)0x6f,  /* [1954] */
    (xdc_Char)0x6e,  /* [1955] */
    (xdc_Char)0x2d,  /* [1956] */
    (xdc_Char)0x7a,  /* [1957] */
    (xdc_Char)0x65,  /* [1958] */
    (xdc_Char)0x72,  /* [1959] */
    (xdc_Char)0x6f,  /* [1960] */
    (xdc_Char)0x20,  /* [1961] */
    (xdc_Char)0x43,  /* [1962] */
    (xdc_Char)0x6f,  /* [1963] */
    (xdc_Char)0x72,  /* [1964] */
    (xdc_Char)0x65,  /* [1965] */
    (xdc_Char)0x49,  /* [1966] */
    (xdc_Char)0x64,  /* [1967] */
    (xdc_Char)0x20,  /* [1968] */
    (xdc_Char)0x69,  /* [1969] */
    (xdc_Char)0x6e,  /* [1970] */
    (xdc_Char)0x20,  /* [1971] */
    (xdc_Char)0x61,  /* [1972] */
    (xdc_Char)0x20,  /* [1973] */
    (xdc_Char)0x6e,  /* [1974] */
    (xdc_Char)0x6f,  /* [1975] */
    (xdc_Char)0x6e,  /* [1976] */
    (xdc_Char)0x2d,  /* [1977] */
    (xdc_Char)0x53,  /* [1978] */
    (xdc_Char)0x4d,  /* [1979] */
    (xdc_Char)0x50,  /* [1980] */
    (xdc_Char)0x20,  /* [1981] */
    (xdc_Char)0x61,  /* [1982] */
    (xdc_Char)0x70,  /* [1983] */
    (xdc_Char)0x70,  /* [1984] */
    (xdc_Char)0x6c,  /* [1985] */
    (xdc_Char)0x69,  /* [1986] */
    (xdc_Char)0x63,  /* [1987] */
    (xdc_Char)0x61,  /* [1988] */
    (xdc_Char)0x74,  /* [1989] */
    (xdc_Char)0x69,  /* [1990] */
    (xdc_Char)0x6f,  /* [1991] */
    (xdc_Char)0x6e,  /* [1992] */
    (xdc_Char)0x2e,  /* [1993] */
    (xdc_Char)0x0,  /* [1994] */
    (xdc_Char)0x41,  /* [1995] */
    (xdc_Char)0x5f,  /* [1996] */
    (xdc_Char)0x7a,  /* [1997] */
    (xdc_Char)0x65,  /* [1998] */
    (xdc_Char)0x72,  /* [1999] */
    (xdc_Char)0x6f,  /* [2000] */
    (xdc_Char)0x54,  /* [2001] */
    (xdc_Char)0x69,  /* [2002] */
    (xdc_Char)0x6d,  /* [2003] */
    (xdc_Char)0x65,  /* [2004] */
    (xdc_Char)0x6f,  /* [2005] */
    (xdc_Char)0x75,  /* [2006] */
    (xdc_Char)0x74,  /* [2007] */
    (xdc_Char)0x3a,  /* [2008] */
    (xdc_Char)0x20,  /* [2009] */
    (xdc_Char)0x54,  /* [2010] */
    (xdc_Char)0x69,  /* [2011] */
    (xdc_Char)0x6d,  /* [2012] */
    (xdc_Char)0x65,  /* [2013] */
    (xdc_Char)0x6f,  /* [2014] */
    (xdc_Char)0x75,  /* [2015] */
    (xdc_Char)0x74,  /* [2016] */
    (xdc_Char)0x20,  /* [2017] */
    (xdc_Char)0x76,  /* [2018] */
    (xdc_Char)0x61,  /* [2019] */
    (xdc_Char)0x6c,  /* [2020] */
    (xdc_Char)0x75,  /* [2021] */
    (xdc_Char)0x65,  /* [2022] */
    (xdc_Char)0x20,  /* [2023] */
    (xdc_Char)0x61,  /* [2024] */
    (xdc_Char)0x6e,  /* [2025] */
    (xdc_Char)0x6e,  /* [2026] */
    (xdc_Char)0x6f,  /* [2027] */
    (xdc_Char)0x74,  /* [2028] */
    (xdc_Char)0x20,  /* [2029] */
    (xdc_Char)0x62,  /* [2030] */
    (xdc_Char)0x65,  /* [2031] */
    (xdc_Char)0x20,  /* [2032] */
    (xdc_Char)0x7a,  /* [2033] */
    (xdc_Char)0x65,  /* [2034] */
    (xdc_Char)0x72,  /* [2035] */
    (xdc_Char)0x6f,  /* [2036] */
    (xdc_Char)0x0,  /* [2037] */
    (xdc_Char)0x41,  /* [2038] */
    (xdc_Char)0x5f,  /* [2039] */
    (xdc_Char)0x69,  /* [2040] */
    (xdc_Char)0x6e,  /* [2041] */
    (xdc_Char)0x76,  /* [2042] */
    (xdc_Char)0x61,  /* [2043] */
    (xdc_Char)0x6c,  /* [2044] */
    (xdc_Char)0x69,  /* [2045] */
    (xdc_Char)0x64,  /* [2046] */
    (xdc_Char)0x4b,  /* [2047] */
    (xdc_Char)0x65,  /* [2048] */
    (xdc_Char)0x79,  /* [2049] */
    (xdc_Char)0x3a,  /* [2050] */
    (xdc_Char)0x20,  /* [2051] */
    (xdc_Char)0x74,  /* [2052] */
    (xdc_Char)0x68,  /* [2053] */
    (xdc_Char)0x65,  /* [2054] */
    (xdc_Char)0x20,  /* [2055] */
    (xdc_Char)0x6b,  /* [2056] */
    (xdc_Char)0x65,  /* [2057] */
    (xdc_Char)0x79,  /* [2058] */
    (xdc_Char)0x20,  /* [2059] */
    (xdc_Char)0x6d,  /* [2060] */
    (xdc_Char)0x75,  /* [2061] */
    (xdc_Char)0x73,  /* [2062] */
    (xdc_Char)0x74,  /* [2063] */
    (xdc_Char)0x20,  /* [2064] */
    (xdc_Char)0x62,  /* [2065] */
    (xdc_Char)0x65,  /* [2066] */
    (xdc_Char)0x20,  /* [2067] */
    (xdc_Char)0x73,  /* [2068] */
    (xdc_Char)0x65,  /* [2069] */
    (xdc_Char)0x74,  /* [2070] */
    (xdc_Char)0x20,  /* [2071] */
    (xdc_Char)0x74,  /* [2072] */
    (xdc_Char)0x6f,  /* [2073] */
    (xdc_Char)0x20,  /* [2074] */
    (xdc_Char)0x61,  /* [2075] */
    (xdc_Char)0x20,  /* [2076] */
    (xdc_Char)0x6e,  /* [2077] */
    (xdc_Char)0x6f,  /* [2078] */
    (xdc_Char)0x6e,  /* [2079] */
    (xdc_Char)0x2d,  /* [2080] */
    (xdc_Char)0x64,  /* [2081] */
    (xdc_Char)0x65,  /* [2082] */
    (xdc_Char)0x66,  /* [2083] */
    (xdc_Char)0x61,  /* [2084] */
    (xdc_Char)0x75,  /* [2085] */
    (xdc_Char)0x6c,  /* [2086] */
    (xdc_Char)0x74,  /* [2087] */
    (xdc_Char)0x20,  /* [2088] */
    (xdc_Char)0x76,  /* [2089] */
    (xdc_Char)0x61,  /* [2090] */
    (xdc_Char)0x6c,  /* [2091] */
    (xdc_Char)0x75,  /* [2092] */
    (xdc_Char)0x65,  /* [2093] */
    (xdc_Char)0x0,  /* [2094] */
    (xdc_Char)0x41,  /* [2095] */
    (xdc_Char)0x5f,  /* [2096] */
    (xdc_Char)0x62,  /* [2097] */
    (xdc_Char)0x61,  /* [2098] */
    (xdc_Char)0x64,  /* [2099] */
    (xdc_Char)0x43,  /* [2100] */
    (xdc_Char)0x6f,  /* [2101] */
    (xdc_Char)0x6e,  /* [2102] */
    (xdc_Char)0x74,  /* [2103] */
    (xdc_Char)0x65,  /* [2104] */
    (xdc_Char)0x78,  /* [2105] */
    (xdc_Char)0x74,  /* [2106] */
    (xdc_Char)0x3a,  /* [2107] */
    (xdc_Char)0x20,  /* [2108] */
    (xdc_Char)0x62,  /* [2109] */
    (xdc_Char)0x61,  /* [2110] */
    (xdc_Char)0x64,  /* [2111] */
    (xdc_Char)0x20,  /* [2112] */
    (xdc_Char)0x63,  /* [2113] */
    (xdc_Char)0x61,  /* [2114] */
    (xdc_Char)0x6c,  /* [2115] */
    (xdc_Char)0x6c,  /* [2116] */
    (xdc_Char)0x69,  /* [2117] */
    (xdc_Char)0x6e,  /* [2118] */
    (xdc_Char)0x67,  /* [2119] */
    (xdc_Char)0x20,  /* [2120] */
    (xdc_Char)0x63,  /* [2121] */
    (xdc_Char)0x6f,  /* [2122] */
    (xdc_Char)0x6e,  /* [2123] */
    (xdc_Char)0x74,  /* [2124] */
    (xdc_Char)0x65,  /* [2125] */
    (xdc_Char)0x78,  /* [2126] */
    (xdc_Char)0x74,  /* [2127] */
    (xdc_Char)0x2e,  /* [2128] */
    (xdc_Char)0x20,  /* [2129] */
    (xdc_Char)0x4d,  /* [2130] */
    (xdc_Char)0x61,  /* [2131] */
    (xdc_Char)0x79,  /* [2132] */
    (xdc_Char)0x20,  /* [2133] */
    (xdc_Char)0x6e,  /* [2134] */
    (xdc_Char)0x6f,  /* [2135] */
    (xdc_Char)0x74,  /* [2136] */
    (xdc_Char)0x20,  /* [2137] */
    (xdc_Char)0x62,  /* [2138] */
    (xdc_Char)0x65,  /* [2139] */
    (xdc_Char)0x20,  /* [2140] */
    (xdc_Char)0x65,  /* [2141] */
    (xdc_Char)0x6e,  /* [2142] */
    (xdc_Char)0x74,  /* [2143] */
    (xdc_Char)0x65,  /* [2144] */
    (xdc_Char)0x72,  /* [2145] */
    (xdc_Char)0x65,  /* [2146] */
    (xdc_Char)0x64,  /* [2147] */
    (xdc_Char)0x20,  /* [2148] */
    (xdc_Char)0x66,  /* [2149] */
    (xdc_Char)0x72,  /* [2150] */
    (xdc_Char)0x6f,  /* [2151] */
    (xdc_Char)0x6d,  /* [2152] */
    (xdc_Char)0x20,  /* [2153] */
    (xdc_Char)0x61,  /* [2154] */
    (xdc_Char)0x20,  /* [2155] */
    (xdc_Char)0x68,  /* [2156] */
    (xdc_Char)0x61,  /* [2157] */
    (xdc_Char)0x72,  /* [2158] */
    (xdc_Char)0x64,  /* [2159] */
    (xdc_Char)0x77,  /* [2160] */
    (xdc_Char)0x61,  /* [2161] */
    (xdc_Char)0x72,  /* [2162] */
    (xdc_Char)0x65,  /* [2163] */
    (xdc_Char)0x20,  /* [2164] */
    (xdc_Char)0x69,  /* [2165] */
    (xdc_Char)0x6e,  /* [2166] */
    (xdc_Char)0x74,  /* [2167] */
    (xdc_Char)0x65,  /* [2168] */
    (xdc_Char)0x72,  /* [2169] */
    (xdc_Char)0x72,  /* [2170] */
    (xdc_Char)0x75,  /* [2171] */
    (xdc_Char)0x70,  /* [2172] */
    (xdc_Char)0x74,  /* [2173] */
    (xdc_Char)0x20,  /* [2174] */
    (xdc_Char)0x74,  /* [2175] */
    (xdc_Char)0x68,  /* [2176] */
    (xdc_Char)0x72,  /* [2177] */
    (xdc_Char)0x65,  /* [2178] */
    (xdc_Char)0x61,  /* [2179] */
    (xdc_Char)0x64,  /* [2180] */
    (xdc_Char)0x2e,  /* [2181] */
    (xdc_Char)0x0,  /* [2182] */
    (xdc_Char)0x41,  /* [2183] */
    (xdc_Char)0x5f,  /* [2184] */
    (xdc_Char)0x62,  /* [2185] */
    (xdc_Char)0x61,  /* [2186] */
    (xdc_Char)0x64,  /* [2187] */
    (xdc_Char)0x43,  /* [2188] */
    (xdc_Char)0x6f,  /* [2189] */
    (xdc_Char)0x6e,  /* [2190] */
    (xdc_Char)0x74,  /* [2191] */
    (xdc_Char)0x65,  /* [2192] */
    (xdc_Char)0x78,  /* [2193] */
    (xdc_Char)0x74,  /* [2194] */
    (xdc_Char)0x3a,  /* [2195] */
    (xdc_Char)0x20,  /* [2196] */
    (xdc_Char)0x62,  /* [2197] */
    (xdc_Char)0x61,  /* [2198] */
    (xdc_Char)0x64,  /* [2199] */
    (xdc_Char)0x20,  /* [2200] */
    (xdc_Char)0x63,  /* [2201] */
    (xdc_Char)0x61,  /* [2202] */
    (xdc_Char)0x6c,  /* [2203] */
    (xdc_Char)0x6c,  /* [2204] */
    (xdc_Char)0x69,  /* [2205] */
    (xdc_Char)0x6e,  /* [2206] */
    (xdc_Char)0x67,  /* [2207] */
    (xdc_Char)0x20,  /* [2208] */
    (xdc_Char)0x63,  /* [2209] */
    (xdc_Char)0x6f,  /* [2210] */
    (xdc_Char)0x6e,  /* [2211] */
    (xdc_Char)0x74,  /* [2212] */
    (xdc_Char)0x65,  /* [2213] */
    (xdc_Char)0x78,  /* [2214] */
    (xdc_Char)0x74,  /* [2215] */
    (xdc_Char)0x2e,  /* [2216] */
    (xdc_Char)0x20,  /* [2217] */
    (xdc_Char)0x4d,  /* [2218] */
    (xdc_Char)0x61,  /* [2219] */
    (xdc_Char)0x79,  /* [2220] */
    (xdc_Char)0x20,  /* [2221] */
    (xdc_Char)0x6e,  /* [2222] */
    (xdc_Char)0x6f,  /* [2223] */
    (xdc_Char)0x74,  /* [2224] */
    (xdc_Char)0x20,  /* [2225] */
    (xdc_Char)0x62,  /* [2226] */
    (xdc_Char)0x65,  /* [2227] */
    (xdc_Char)0x20,  /* [2228] */
    (xdc_Char)0x65,  /* [2229] */
    (xdc_Char)0x6e,  /* [2230] */
    (xdc_Char)0x74,  /* [2231] */
    (xdc_Char)0x65,  /* [2232] */
    (xdc_Char)0x72,  /* [2233] */
    (xdc_Char)0x65,  /* [2234] */
    (xdc_Char)0x64,  /* [2235] */
    (xdc_Char)0x20,  /* [2236] */
    (xdc_Char)0x66,  /* [2237] */
    (xdc_Char)0x72,  /* [2238] */
    (xdc_Char)0x6f,  /* [2239] */
    (xdc_Char)0x6d,  /* [2240] */
    (xdc_Char)0x20,  /* [2241] */
    (xdc_Char)0x61,  /* [2242] */
    (xdc_Char)0x20,  /* [2243] */
    (xdc_Char)0x73,  /* [2244] */
    (xdc_Char)0x6f,  /* [2245] */
    (xdc_Char)0x66,  /* [2246] */
    (xdc_Char)0x74,  /* [2247] */
    (xdc_Char)0x77,  /* [2248] */
    (xdc_Char)0x61,  /* [2249] */
    (xdc_Char)0x72,  /* [2250] */
    (xdc_Char)0x65,  /* [2251] */
    (xdc_Char)0x20,  /* [2252] */
    (xdc_Char)0x6f,  /* [2253] */
    (xdc_Char)0x72,  /* [2254] */
    (xdc_Char)0x20,  /* [2255] */
    (xdc_Char)0x68,  /* [2256] */
    (xdc_Char)0x61,  /* [2257] */
    (xdc_Char)0x72,  /* [2258] */
    (xdc_Char)0x64,  /* [2259] */
    (xdc_Char)0x77,  /* [2260] */
    (xdc_Char)0x61,  /* [2261] */
    (xdc_Char)0x72,  /* [2262] */
    (xdc_Char)0x65,  /* [2263] */
    (xdc_Char)0x20,  /* [2264] */
    (xdc_Char)0x69,  /* [2265] */
    (xdc_Char)0x6e,  /* [2266] */
    (xdc_Char)0x74,  /* [2267] */
    (xdc_Char)0x65,  /* [2268] */
    (xdc_Char)0x72,  /* [2269] */
    (xdc_Char)0x72,  /* [2270] */
    (xdc_Char)0x75,  /* [2271] */
    (xdc_Char)0x70,  /* [2272] */
    (xdc_Char)0x74,  /* [2273] */
    (xdc_Char)0x20,  /* [2274] */
    (xdc_Char)0x74,  /* [2275] */
    (xdc_Char)0x68,  /* [2276] */
    (xdc_Char)0x72,  /* [2277] */
    (xdc_Char)0x65,  /* [2278] */
    (xdc_Char)0x61,  /* [2279] */
    (xdc_Char)0x64,  /* [2280] */
    (xdc_Char)0x2e,  /* [2281] */
    (xdc_Char)0x0,  /* [2282] */
    (xdc_Char)0x41,  /* [2283] */
    (xdc_Char)0x5f,  /* [2284] */
    (xdc_Char)0x62,  /* [2285] */
    (xdc_Char)0x61,  /* [2286] */
    (xdc_Char)0x64,  /* [2287] */
    (xdc_Char)0x43,  /* [2288] */
    (xdc_Char)0x6f,  /* [2289] */
    (xdc_Char)0x6e,  /* [2290] */
    (xdc_Char)0x74,  /* [2291] */
    (xdc_Char)0x65,  /* [2292] */
    (xdc_Char)0x78,  /* [2293] */
    (xdc_Char)0x74,  /* [2294] */
    (xdc_Char)0x3a,  /* [2295] */
    (xdc_Char)0x20,  /* [2296] */
    (xdc_Char)0x62,  /* [2297] */
    (xdc_Char)0x61,  /* [2298] */
    (xdc_Char)0x64,  /* [2299] */
    (xdc_Char)0x20,  /* [2300] */
    (xdc_Char)0x63,  /* [2301] */
    (xdc_Char)0x61,  /* [2302] */
    (xdc_Char)0x6c,  /* [2303] */
    (xdc_Char)0x6c,  /* [2304] */
    (xdc_Char)0x69,  /* [2305] */
    (xdc_Char)0x6e,  /* [2306] */
    (xdc_Char)0x67,  /* [2307] */
    (xdc_Char)0x20,  /* [2308] */
    (xdc_Char)0x63,  /* [2309] */
    (xdc_Char)0x6f,  /* [2310] */
    (xdc_Char)0x6e,  /* [2311] */
    (xdc_Char)0x74,  /* [2312] */
    (xdc_Char)0x65,  /* [2313] */
    (xdc_Char)0x78,  /* [2314] */
    (xdc_Char)0x74,  /* [2315] */
    (xdc_Char)0x2e,  /* [2316] */
    (xdc_Char)0x20,  /* [2317] */
    (xdc_Char)0x53,  /* [2318] */
    (xdc_Char)0x65,  /* [2319] */
    (xdc_Char)0x65,  /* [2320] */
    (xdc_Char)0x20,  /* [2321] */
    (xdc_Char)0x47,  /* [2322] */
    (xdc_Char)0x61,  /* [2323] */
    (xdc_Char)0x74,  /* [2324] */
    (xdc_Char)0x65,  /* [2325] */
    (xdc_Char)0x4d,  /* [2326] */
    (xdc_Char)0x75,  /* [2327] */
    (xdc_Char)0x74,  /* [2328] */
    (xdc_Char)0x65,  /* [2329] */
    (xdc_Char)0x78,  /* [2330] */
    (xdc_Char)0x50,  /* [2331] */
    (xdc_Char)0x72,  /* [2332] */
    (xdc_Char)0x69,  /* [2333] */
    (xdc_Char)0x20,  /* [2334] */
    (xdc_Char)0x41,  /* [2335] */
    (xdc_Char)0x50,  /* [2336] */
    (xdc_Char)0x49,  /* [2337] */
    (xdc_Char)0x20,  /* [2338] */
    (xdc_Char)0x64,  /* [2339] */
    (xdc_Char)0x6f,  /* [2340] */
    (xdc_Char)0x63,  /* [2341] */
    (xdc_Char)0x20,  /* [2342] */
    (xdc_Char)0x66,  /* [2343] */
    (xdc_Char)0x6f,  /* [2344] */
    (xdc_Char)0x72,  /* [2345] */
    (xdc_Char)0x20,  /* [2346] */
    (xdc_Char)0x64,  /* [2347] */
    (xdc_Char)0x65,  /* [2348] */
    (xdc_Char)0x74,  /* [2349] */
    (xdc_Char)0x61,  /* [2350] */
    (xdc_Char)0x69,  /* [2351] */
    (xdc_Char)0x6c,  /* [2352] */
    (xdc_Char)0x73,  /* [2353] */
    (xdc_Char)0x2e,  /* [2354] */
    (xdc_Char)0x0,  /* [2355] */
    (xdc_Char)0x41,  /* [2356] */
    (xdc_Char)0x5f,  /* [2357] */
    (xdc_Char)0x65,  /* [2358] */
    (xdc_Char)0x6e,  /* [2359] */
    (xdc_Char)0x74,  /* [2360] */
    (xdc_Char)0x65,  /* [2361] */
    (xdc_Char)0x72,  /* [2362] */
    (xdc_Char)0x54,  /* [2363] */
    (xdc_Char)0x61,  /* [2364] */
    (xdc_Char)0x73,  /* [2365] */
    (xdc_Char)0x6b,  /* [2366] */
    (xdc_Char)0x44,  /* [2367] */
    (xdc_Char)0x69,  /* [2368] */
    (xdc_Char)0x73,  /* [2369] */
    (xdc_Char)0x61,  /* [2370] */
    (xdc_Char)0x62,  /* [2371] */
    (xdc_Char)0x6c,  /* [2372] */
    (xdc_Char)0x65,  /* [2373] */
    (xdc_Char)0x64,  /* [2374] */
    (xdc_Char)0x3a,  /* [2375] */
    (xdc_Char)0x20,  /* [2376] */
    (xdc_Char)0x43,  /* [2377] */
    (xdc_Char)0x61,  /* [2378] */
    (xdc_Char)0x6e,  /* [2379] */
    (xdc_Char)0x6e,  /* [2380] */
    (xdc_Char)0x6f,  /* [2381] */
    (xdc_Char)0x74,  /* [2382] */
    (xdc_Char)0x20,  /* [2383] */
    (xdc_Char)0x63,  /* [2384] */
    (xdc_Char)0x61,  /* [2385] */
    (xdc_Char)0x6c,  /* [2386] */
    (xdc_Char)0x6c,  /* [2387] */
    (xdc_Char)0x20,  /* [2388] */
    (xdc_Char)0x47,  /* [2389] */
    (xdc_Char)0x61,  /* [2390] */
    (xdc_Char)0x74,  /* [2391] */
    (xdc_Char)0x65,  /* [2392] */
    (xdc_Char)0x4d,  /* [2393] */
    (xdc_Char)0x75,  /* [2394] */
    (xdc_Char)0x74,  /* [2395] */
    (xdc_Char)0x65,  /* [2396] */
    (xdc_Char)0x78,  /* [2397] */
    (xdc_Char)0x50,  /* [2398] */
    (xdc_Char)0x72,  /* [2399] */
    (xdc_Char)0x69,  /* [2400] */
    (xdc_Char)0x5f,  /* [2401] */
    (xdc_Char)0x65,  /* [2402] */
    (xdc_Char)0x6e,  /* [2403] */
    (xdc_Char)0x74,  /* [2404] */
    (xdc_Char)0x65,  /* [2405] */
    (xdc_Char)0x72,  /* [2406] */
    (xdc_Char)0x28,  /* [2407] */
    (xdc_Char)0x29,  /* [2408] */
    (xdc_Char)0x20,  /* [2409] */
    (xdc_Char)0x77,  /* [2410] */
    (xdc_Char)0x68,  /* [2411] */
    (xdc_Char)0x69,  /* [2412] */
    (xdc_Char)0x6c,  /* [2413] */
    (xdc_Char)0x65,  /* [2414] */
    (xdc_Char)0x20,  /* [2415] */
    (xdc_Char)0x74,  /* [2416] */
    (xdc_Char)0x68,  /* [2417] */
    (xdc_Char)0x65,  /* [2418] */
    (xdc_Char)0x20,  /* [2419] */
    (xdc_Char)0x54,  /* [2420] */
    (xdc_Char)0x61,  /* [2421] */
    (xdc_Char)0x73,  /* [2422] */
    (xdc_Char)0x6b,  /* [2423] */
    (xdc_Char)0x20,  /* [2424] */
    (xdc_Char)0x6f,  /* [2425] */
    (xdc_Char)0x72,  /* [2426] */
    (xdc_Char)0x20,  /* [2427] */
    (xdc_Char)0x53,  /* [2428] */
    (xdc_Char)0x77,  /* [2429] */
    (xdc_Char)0x69,  /* [2430] */
    (xdc_Char)0x20,  /* [2431] */
    (xdc_Char)0x73,  /* [2432] */
    (xdc_Char)0x63,  /* [2433] */
    (xdc_Char)0x68,  /* [2434] */
    (xdc_Char)0x65,  /* [2435] */
    (xdc_Char)0x64,  /* [2436] */
    (xdc_Char)0x75,  /* [2437] */
    (xdc_Char)0x6c,  /* [2438] */
    (xdc_Char)0x65,  /* [2439] */
    (xdc_Char)0x72,  /* [2440] */
    (xdc_Char)0x20,  /* [2441] */
    (xdc_Char)0x69,  /* [2442] */
    (xdc_Char)0x73,  /* [2443] */
    (xdc_Char)0x20,  /* [2444] */
    (xdc_Char)0x64,  /* [2445] */
    (xdc_Char)0x69,  /* [2446] */
    (xdc_Char)0x73,  /* [2447] */
    (xdc_Char)0x61,  /* [2448] */
    (xdc_Char)0x62,  /* [2449] */
    (xdc_Char)0x6c,  /* [2450] */
    (xdc_Char)0x65,  /* [2451] */
    (xdc_Char)0x64,  /* [2452] */
    (xdc_Char)0x2e,  /* [2453] */
    (xdc_Char)0x0,  /* [2454] */
    (xdc_Char)0x41,  /* [2455] */
    (xdc_Char)0x5f,  /* [2456] */
    (xdc_Char)0x62,  /* [2457] */
    (xdc_Char)0x61,  /* [2458] */
    (xdc_Char)0x64,  /* [2459] */
    (xdc_Char)0x43,  /* [2460] */
    (xdc_Char)0x6f,  /* [2461] */
    (xdc_Char)0x6e,  /* [2462] */
    (xdc_Char)0x74,  /* [2463] */
    (xdc_Char)0x65,  /* [2464] */
    (xdc_Char)0x78,  /* [2465] */
    (xdc_Char)0x74,  /* [2466] */
    (xdc_Char)0x3a,  /* [2467] */
    (xdc_Char)0x20,  /* [2468] */
    (xdc_Char)0x62,  /* [2469] */
    (xdc_Char)0x61,  /* [2470] */
    (xdc_Char)0x64,  /* [2471] */
    (xdc_Char)0x20,  /* [2472] */
    (xdc_Char)0x63,  /* [2473] */
    (xdc_Char)0x61,  /* [2474] */
    (xdc_Char)0x6c,  /* [2475] */
    (xdc_Char)0x6c,  /* [2476] */
    (xdc_Char)0x69,  /* [2477] */
    (xdc_Char)0x6e,  /* [2478] */
    (xdc_Char)0x67,  /* [2479] */
    (xdc_Char)0x20,  /* [2480] */
    (xdc_Char)0x63,  /* [2481] */
    (xdc_Char)0x6f,  /* [2482] */
    (xdc_Char)0x6e,  /* [2483] */
    (xdc_Char)0x74,  /* [2484] */
    (xdc_Char)0x65,  /* [2485] */
    (xdc_Char)0x78,  /* [2486] */
    (xdc_Char)0x74,  /* [2487] */
    (xdc_Char)0x2e,  /* [2488] */
    (xdc_Char)0x20,  /* [2489] */
    (xdc_Char)0x53,  /* [2490] */
    (xdc_Char)0x65,  /* [2491] */
    (xdc_Char)0x65,  /* [2492] */
    (xdc_Char)0x20,  /* [2493] */
    (xdc_Char)0x47,  /* [2494] */
    (xdc_Char)0x61,  /* [2495] */
    (xdc_Char)0x74,  /* [2496] */
    (xdc_Char)0x65,  /* [2497] */
    (xdc_Char)0x4d,  /* [2498] */
    (xdc_Char)0x75,  /* [2499] */
    (xdc_Char)0x74,  /* [2500] */
    (xdc_Char)0x65,  /* [2501] */
    (xdc_Char)0x78,  /* [2502] */
    (xdc_Char)0x20,  /* [2503] */
    (xdc_Char)0x41,  /* [2504] */
    (xdc_Char)0x50,  /* [2505] */
    (xdc_Char)0x49,  /* [2506] */
    (xdc_Char)0x20,  /* [2507] */
    (xdc_Char)0x64,  /* [2508] */
    (xdc_Char)0x6f,  /* [2509] */
    (xdc_Char)0x63,  /* [2510] */
    (xdc_Char)0x20,  /* [2511] */
    (xdc_Char)0x66,  /* [2512] */
    (xdc_Char)0x6f,  /* [2513] */
    (xdc_Char)0x72,  /* [2514] */
    (xdc_Char)0x20,  /* [2515] */
    (xdc_Char)0x64,  /* [2516] */
    (xdc_Char)0x65,  /* [2517] */
    (xdc_Char)0x74,  /* [2518] */
    (xdc_Char)0x61,  /* [2519] */
    (xdc_Char)0x69,  /* [2520] */
    (xdc_Char)0x6c,  /* [2521] */
    (xdc_Char)0x73,  /* [2522] */
    (xdc_Char)0x2e,  /* [2523] */
    (xdc_Char)0x0,  /* [2524] */
    (xdc_Char)0x41,  /* [2525] */
    (xdc_Char)0x5f,  /* [2526] */
    (xdc_Char)0x62,  /* [2527] */
    (xdc_Char)0x61,  /* [2528] */
    (xdc_Char)0x64,  /* [2529] */
    (xdc_Char)0x43,  /* [2530] */
    (xdc_Char)0x6f,  /* [2531] */
    (xdc_Char)0x6e,  /* [2532] */
    (xdc_Char)0x74,  /* [2533] */
    (xdc_Char)0x65,  /* [2534] */
    (xdc_Char)0x78,  /* [2535] */
    (xdc_Char)0x74,  /* [2536] */
    (xdc_Char)0x3a,  /* [2537] */
    (xdc_Char)0x20,  /* [2538] */
    (xdc_Char)0x62,  /* [2539] */
    (xdc_Char)0x61,  /* [2540] */
    (xdc_Char)0x64,  /* [2541] */
    (xdc_Char)0x20,  /* [2542] */
    (xdc_Char)0x63,  /* [2543] */
    (xdc_Char)0x61,  /* [2544] */
    (xdc_Char)0x6c,  /* [2545] */
    (xdc_Char)0x6c,  /* [2546] */
    (xdc_Char)0x69,  /* [2547] */
    (xdc_Char)0x6e,  /* [2548] */
    (xdc_Char)0x67,  /* [2549] */
    (xdc_Char)0x20,  /* [2550] */
    (xdc_Char)0x63,  /* [2551] */
    (xdc_Char)0x6f,  /* [2552] */
    (xdc_Char)0x6e,  /* [2553] */
    (xdc_Char)0x74,  /* [2554] */
    (xdc_Char)0x65,  /* [2555] */
    (xdc_Char)0x78,  /* [2556] */
    (xdc_Char)0x74,  /* [2557] */
    (xdc_Char)0x2e,  /* [2558] */
    (xdc_Char)0x20,  /* [2559] */
    (xdc_Char)0x53,  /* [2560] */
    (xdc_Char)0x65,  /* [2561] */
    (xdc_Char)0x65,  /* [2562] */
    (xdc_Char)0x20,  /* [2563] */
    (xdc_Char)0x47,  /* [2564] */
    (xdc_Char)0x61,  /* [2565] */
    (xdc_Char)0x74,  /* [2566] */
    (xdc_Char)0x65,  /* [2567] */
    (xdc_Char)0x53,  /* [2568] */
    (xdc_Char)0x70,  /* [2569] */
    (xdc_Char)0x69,  /* [2570] */
    (xdc_Char)0x6e,  /* [2571] */
    (xdc_Char)0x6c,  /* [2572] */
    (xdc_Char)0x6f,  /* [2573] */
    (xdc_Char)0x63,  /* [2574] */
    (xdc_Char)0x6b,  /* [2575] */
    (xdc_Char)0x20,  /* [2576] */
    (xdc_Char)0x41,  /* [2577] */
    (xdc_Char)0x50,  /* [2578] */
    (xdc_Char)0x49,  /* [2579] */
    (xdc_Char)0x20,  /* [2580] */
    (xdc_Char)0x64,  /* [2581] */
    (xdc_Char)0x6f,  /* [2582] */
    (xdc_Char)0x63,  /* [2583] */
    (xdc_Char)0x20,  /* [2584] */
    (xdc_Char)0x66,  /* [2585] */
    (xdc_Char)0x6f,  /* [2586] */
    (xdc_Char)0x72,  /* [2587] */
    (xdc_Char)0x20,  /* [2588] */
    (xdc_Char)0x64,  /* [2589] */
    (xdc_Char)0x65,  /* [2590] */
    (xdc_Char)0x74,  /* [2591] */
    (xdc_Char)0x61,  /* [2592] */
    (xdc_Char)0x69,  /* [2593] */
    (xdc_Char)0x6c,  /* [2594] */
    (xdc_Char)0x73,  /* [2595] */
    (xdc_Char)0x2e,  /* [2596] */
    (xdc_Char)0x0,  /* [2597] */
    (xdc_Char)0x41,  /* [2598] */
    (xdc_Char)0x5f,  /* [2599] */
    (xdc_Char)0x69,  /* [2600] */
    (xdc_Char)0x6e,  /* [2601] */
    (xdc_Char)0x76,  /* [2602] */
    (xdc_Char)0x61,  /* [2603] */
    (xdc_Char)0x6c,  /* [2604] */
    (xdc_Char)0x69,  /* [2605] */
    (xdc_Char)0x64,  /* [2606] */
    (xdc_Char)0x51,  /* [2607] */
    (xdc_Char)0x75,  /* [2608] */
    (xdc_Char)0x61,  /* [2609] */
    (xdc_Char)0x6c,  /* [2610] */
    (xdc_Char)0x69,  /* [2611] */
    (xdc_Char)0x74,  /* [2612] */
    (xdc_Char)0x79,  /* [2613] */
    (xdc_Char)0x3a,  /* [2614] */
    (xdc_Char)0x20,  /* [2615] */
    (xdc_Char)0x53,  /* [2616] */
    (xdc_Char)0x65,  /* [2617] */
    (xdc_Char)0x65,  /* [2618] */
    (xdc_Char)0x20,  /* [2619] */
    (xdc_Char)0x47,  /* [2620] */
    (xdc_Char)0x61,  /* [2621] */
    (xdc_Char)0x74,  /* [2622] */
    (xdc_Char)0x65,  /* [2623] */
    (xdc_Char)0x53,  /* [2624] */
    (xdc_Char)0x70,  /* [2625] */
    (xdc_Char)0x69,  /* [2626] */
    (xdc_Char)0x6e,  /* [2627] */
    (xdc_Char)0x6c,  /* [2628] */
    (xdc_Char)0x6f,  /* [2629] */
    (xdc_Char)0x63,  /* [2630] */
    (xdc_Char)0x6b,  /* [2631] */
    (xdc_Char)0x20,  /* [2632] */
    (xdc_Char)0x41,  /* [2633] */
    (xdc_Char)0x50,  /* [2634] */
    (xdc_Char)0x49,  /* [2635] */
    (xdc_Char)0x20,  /* [2636] */
    (xdc_Char)0x64,  /* [2637] */
    (xdc_Char)0x6f,  /* [2638] */
    (xdc_Char)0x63,  /* [2639] */
    (xdc_Char)0x20,  /* [2640] */
    (xdc_Char)0x66,  /* [2641] */
    (xdc_Char)0x6f,  /* [2642] */
    (xdc_Char)0x72,  /* [2643] */
    (xdc_Char)0x20,  /* [2644] */
    (xdc_Char)0x64,  /* [2645] */
    (xdc_Char)0x65,  /* [2646] */
    (xdc_Char)0x74,  /* [2647] */
    (xdc_Char)0x61,  /* [2648] */
    (xdc_Char)0x69,  /* [2649] */
    (xdc_Char)0x6c,  /* [2650] */
    (xdc_Char)0x73,  /* [2651] */
    (xdc_Char)0x2e,  /* [2652] */
    (xdc_Char)0x0,  /* [2653] */
    (xdc_Char)0x41,  /* [2654] */
    (xdc_Char)0x5f,  /* [2655] */
    (xdc_Char)0x75,  /* [2656] */
    (xdc_Char)0x6e,  /* [2657] */
    (xdc_Char)0x73,  /* [2658] */
    (xdc_Char)0x75,  /* [2659] */
    (xdc_Char)0x70,  /* [2660] */
    (xdc_Char)0x70,  /* [2661] */
    (xdc_Char)0x6f,  /* [2662] */
    (xdc_Char)0x72,  /* [2663] */
    (xdc_Char)0x74,  /* [2664] */
    (xdc_Char)0x65,  /* [2665] */
    (xdc_Char)0x64,  /* [2666] */
    (xdc_Char)0x4d,  /* [2667] */
    (xdc_Char)0x61,  /* [2668] */
    (xdc_Char)0x73,  /* [2669] */
    (xdc_Char)0x6b,  /* [2670] */
    (xdc_Char)0x69,  /* [2671] */
    (xdc_Char)0x6e,  /* [2672] */
    (xdc_Char)0x67,  /* [2673] */
    (xdc_Char)0x4f,  /* [2674] */
    (xdc_Char)0x70,  /* [2675] */
    (xdc_Char)0x74,  /* [2676] */
    (xdc_Char)0x69,  /* [2677] */
    (xdc_Char)0x6f,  /* [2678] */
    (xdc_Char)0x6e,  /* [2679] */
    (xdc_Char)0x3a,  /* [2680] */
    (xdc_Char)0x20,  /* [2681] */
    (xdc_Char)0x75,  /* [2682] */
    (xdc_Char)0x6e,  /* [2683] */
    (xdc_Char)0x73,  /* [2684] */
    (xdc_Char)0x75,  /* [2685] */
    (xdc_Char)0x70,  /* [2686] */
    (xdc_Char)0x70,  /* [2687] */
    (xdc_Char)0x6f,  /* [2688] */
    (xdc_Char)0x72,  /* [2689] */
    (xdc_Char)0x74,  /* [2690] */
    (xdc_Char)0x65,  /* [2691] */
    (xdc_Char)0x64,  /* [2692] */
    (xdc_Char)0x20,  /* [2693] */
    (xdc_Char)0x6d,  /* [2694] */
    (xdc_Char)0x61,  /* [2695] */
    (xdc_Char)0x73,  /* [2696] */
    (xdc_Char)0x6b,  /* [2697] */
    (xdc_Char)0x53,  /* [2698] */
    (xdc_Char)0x65,  /* [2699] */
    (xdc_Char)0x74,  /* [2700] */
    (xdc_Char)0x74,  /* [2701] */
    (xdc_Char)0x69,  /* [2702] */
    (xdc_Char)0x6e,  /* [2703] */
    (xdc_Char)0x67,  /* [2704] */
    (xdc_Char)0x2e,  /* [2705] */
    (xdc_Char)0x0,  /* [2706] */
    (xdc_Char)0x62,  /* [2707] */
    (xdc_Char)0x75,  /* [2708] */
    (xdc_Char)0x66,  /* [2709] */
    (xdc_Char)0x20,  /* [2710] */
    (xdc_Char)0x70,  /* [2711] */
    (xdc_Char)0x61,  /* [2712] */
    (xdc_Char)0x72,  /* [2713] */
    (xdc_Char)0x61,  /* [2714] */
    (xdc_Char)0x6d,  /* [2715] */
    (xdc_Char)0x65,  /* [2716] */
    (xdc_Char)0x74,  /* [2717] */
    (xdc_Char)0x65,  /* [2718] */
    (xdc_Char)0x72,  /* [2719] */
    (xdc_Char)0x20,  /* [2720] */
    (xdc_Char)0x63,  /* [2721] */
    (xdc_Char)0x61,  /* [2722] */
    (xdc_Char)0x6e,  /* [2723] */
    (xdc_Char)0x6e,  /* [2724] */
    (xdc_Char)0x6f,  /* [2725] */
    (xdc_Char)0x74,  /* [2726] */
    (xdc_Char)0x20,  /* [2727] */
    (xdc_Char)0x62,  /* [2728] */
    (xdc_Char)0x65,  /* [2729] */
    (xdc_Char)0x20,  /* [2730] */
    (xdc_Char)0x6e,  /* [2731] */
    (xdc_Char)0x75,  /* [2732] */
    (xdc_Char)0x6c,  /* [2733] */
    (xdc_Char)0x6c,  /* [2734] */
    (xdc_Char)0x0,  /* [2735] */
    (xdc_Char)0x62,  /* [2736] */
    (xdc_Char)0x75,  /* [2737] */
    (xdc_Char)0x66,  /* [2738] */
    (xdc_Char)0x20,  /* [2739] */
    (xdc_Char)0x6e,  /* [2740] */
    (xdc_Char)0x6f,  /* [2741] */
    (xdc_Char)0x74,  /* [2742] */
    (xdc_Char)0x20,  /* [2743] */
    (xdc_Char)0x70,  /* [2744] */
    (xdc_Char)0x72,  /* [2745] */
    (xdc_Char)0x6f,  /* [2746] */
    (xdc_Char)0x70,  /* [2747] */
    (xdc_Char)0x65,  /* [2748] */
    (xdc_Char)0x72,  /* [2749] */
    (xdc_Char)0x6c,  /* [2750] */
    (xdc_Char)0x79,  /* [2751] */
    (xdc_Char)0x20,  /* [2752] */
    (xdc_Char)0x61,  /* [2753] */
    (xdc_Char)0x6c,  /* [2754] */
    (xdc_Char)0x69,  /* [2755] */
    (xdc_Char)0x67,  /* [2756] */
    (xdc_Char)0x6e,  /* [2757] */
    (xdc_Char)0x65,  /* [2758] */
    (xdc_Char)0x64,  /* [2759] */
    (xdc_Char)0x0,  /* [2760] */
    (xdc_Char)0x61,  /* [2761] */
    (xdc_Char)0x6c,  /* [2762] */
    (xdc_Char)0x69,  /* [2763] */
    (xdc_Char)0x67,  /* [2764] */
    (xdc_Char)0x6e,  /* [2765] */
    (xdc_Char)0x20,  /* [2766] */
    (xdc_Char)0x70,  /* [2767] */
    (xdc_Char)0x61,  /* [2768] */
    (xdc_Char)0x72,  /* [2769] */
    (xdc_Char)0x61,  /* [2770] */
    (xdc_Char)0x6d,  /* [2771] */
    (xdc_Char)0x65,  /* [2772] */
    (xdc_Char)0x74,  /* [2773] */
    (xdc_Char)0x65,  /* [2774] */
    (xdc_Char)0x72,  /* [2775] */
    (xdc_Char)0x20,  /* [2776] */
    (xdc_Char)0x6d,  /* [2777] */
    (xdc_Char)0x75,  /* [2778] */
    (xdc_Char)0x73,  /* [2779] */
    (xdc_Char)0x74,  /* [2780] */
    (xdc_Char)0x20,  /* [2781] */
    (xdc_Char)0x62,  /* [2782] */
    (xdc_Char)0x65,  /* [2783] */
    (xdc_Char)0x20,  /* [2784] */
    (xdc_Char)0x30,  /* [2785] */
    (xdc_Char)0x20,  /* [2786] */
    (xdc_Char)0x6f,  /* [2787] */
    (xdc_Char)0x72,  /* [2788] */
    (xdc_Char)0x20,  /* [2789] */
    (xdc_Char)0x61,  /* [2790] */
    (xdc_Char)0x20,  /* [2791] */
    (xdc_Char)0x70,  /* [2792] */
    (xdc_Char)0x6f,  /* [2793] */
    (xdc_Char)0x77,  /* [2794] */
    (xdc_Char)0x65,  /* [2795] */
    (xdc_Char)0x72,  /* [2796] */
    (xdc_Char)0x20,  /* [2797] */
    (xdc_Char)0x6f,  /* [2798] */
    (xdc_Char)0x66,  /* [2799] */
    (xdc_Char)0x20,  /* [2800] */
    (xdc_Char)0x32,  /* [2801] */
    (xdc_Char)0x20,  /* [2802] */
    (xdc_Char)0x3e,  /* [2803] */
    (xdc_Char)0x3d,  /* [2804] */
    (xdc_Char)0x20,  /* [2805] */
    (xdc_Char)0x74,  /* [2806] */
    (xdc_Char)0x68,  /* [2807] */
    (xdc_Char)0x65,  /* [2808] */
    (xdc_Char)0x20,  /* [2809] */
    (xdc_Char)0x76,  /* [2810] */
    (xdc_Char)0x61,  /* [2811] */
    (xdc_Char)0x6c,  /* [2812] */
    (xdc_Char)0x75,  /* [2813] */
    (xdc_Char)0x65,  /* [2814] */
    (xdc_Char)0x20,  /* [2815] */
    (xdc_Char)0x6f,  /* [2816] */
    (xdc_Char)0x66,  /* [2817] */
    (xdc_Char)0x20,  /* [2818] */
    (xdc_Char)0x4d,  /* [2819] */
    (xdc_Char)0x65,  /* [2820] */
    (xdc_Char)0x6d,  /* [2821] */
    (xdc_Char)0x6f,  /* [2822] */
    (xdc_Char)0x72,  /* [2823] */
    (xdc_Char)0x79,  /* [2824] */
    (xdc_Char)0x5f,  /* [2825] */
    (xdc_Char)0x67,  /* [2826] */
    (xdc_Char)0x65,  /* [2827] */
    (xdc_Char)0x74,  /* [2828] */
    (xdc_Char)0x4d,  /* [2829] */
    (xdc_Char)0x61,  /* [2830] */
    (xdc_Char)0x78,  /* [2831] */
    (xdc_Char)0x44,  /* [2832] */
    (xdc_Char)0x65,  /* [2833] */
    (xdc_Char)0x66,  /* [2834] */
    (xdc_Char)0x61,  /* [2835] */
    (xdc_Char)0x75,  /* [2836] */
    (xdc_Char)0x6c,  /* [2837] */
    (xdc_Char)0x74,  /* [2838] */
    (xdc_Char)0x54,  /* [2839] */
    (xdc_Char)0x79,  /* [2840] */
    (xdc_Char)0x70,  /* [2841] */
    (xdc_Char)0x65,  /* [2842] */
    (xdc_Char)0x41,  /* [2843] */
    (xdc_Char)0x6c,  /* [2844] */
    (xdc_Char)0x69,  /* [2845] */
    (xdc_Char)0x67,  /* [2846] */
    (xdc_Char)0x6e,  /* [2847] */
    (xdc_Char)0x28,  /* [2848] */
    (xdc_Char)0x29,  /* [2849] */
    (xdc_Char)0x0,  /* [2850] */
    (xdc_Char)0x61,  /* [2851] */
    (xdc_Char)0x6c,  /* [2852] */
    (xdc_Char)0x69,  /* [2853] */
    (xdc_Char)0x67,  /* [2854] */
    (xdc_Char)0x6e,  /* [2855] */
    (xdc_Char)0x20,  /* [2856] */
    (xdc_Char)0x70,  /* [2857] */
    (xdc_Char)0x61,  /* [2858] */
    (xdc_Char)0x72,  /* [2859] */
    (xdc_Char)0x61,  /* [2860] */
    (xdc_Char)0x6d,  /* [2861] */
    (xdc_Char)0x65,  /* [2862] */
    (xdc_Char)0x74,  /* [2863] */
    (xdc_Char)0x65,  /* [2864] */
    (xdc_Char)0x72,  /* [2865] */
    (xdc_Char)0x20,  /* [2866] */
    (xdc_Char)0x31,  /* [2867] */
    (xdc_Char)0x29,  /* [2868] */
    (xdc_Char)0x20,  /* [2869] */
    (xdc_Char)0x6d,  /* [2870] */
    (xdc_Char)0x75,  /* [2871] */
    (xdc_Char)0x73,  /* [2872] */
    (xdc_Char)0x74,  /* [2873] */
    (xdc_Char)0x20,  /* [2874] */
    (xdc_Char)0x62,  /* [2875] */
    (xdc_Char)0x65,  /* [2876] */
    (xdc_Char)0x20,  /* [2877] */
    (xdc_Char)0x30,  /* [2878] */
    (xdc_Char)0x20,  /* [2879] */
    (xdc_Char)0x6f,  /* [2880] */
    (xdc_Char)0x72,  /* [2881] */
    (xdc_Char)0x20,  /* [2882] */
    (xdc_Char)0x61,  /* [2883] */
    (xdc_Char)0x20,  /* [2884] */
    (xdc_Char)0x70,  /* [2885] */
    (xdc_Char)0x6f,  /* [2886] */
    (xdc_Char)0x77,  /* [2887] */
    (xdc_Char)0x65,  /* [2888] */
    (xdc_Char)0x72,  /* [2889] */
    (xdc_Char)0x20,  /* [2890] */
    (xdc_Char)0x6f,  /* [2891] */
    (xdc_Char)0x66,  /* [2892] */
    (xdc_Char)0x20,  /* [2893] */
    (xdc_Char)0x32,  /* [2894] */
    (xdc_Char)0x20,  /* [2895] */
    (xdc_Char)0x61,  /* [2896] */
    (xdc_Char)0x6e,  /* [2897] */
    (xdc_Char)0x64,  /* [2898] */
    (xdc_Char)0x20,  /* [2899] */
    (xdc_Char)0x32,  /* [2900] */
    (xdc_Char)0x29,  /* [2901] */
    (xdc_Char)0x20,  /* [2902] */
    (xdc_Char)0x6e,  /* [2903] */
    (xdc_Char)0x6f,  /* [2904] */
    (xdc_Char)0x74,  /* [2905] */
    (xdc_Char)0x20,  /* [2906] */
    (xdc_Char)0x67,  /* [2907] */
    (xdc_Char)0x72,  /* [2908] */
    (xdc_Char)0x65,  /* [2909] */
    (xdc_Char)0x61,  /* [2910] */
    (xdc_Char)0x74,  /* [2911] */
    (xdc_Char)0x65,  /* [2912] */
    (xdc_Char)0x72,  /* [2913] */
    (xdc_Char)0x20,  /* [2914] */
    (xdc_Char)0x74,  /* [2915] */
    (xdc_Char)0x68,  /* [2916] */
    (xdc_Char)0x61,  /* [2917] */
    (xdc_Char)0x6e,  /* [2918] */
    (xdc_Char)0x20,  /* [2919] */
    (xdc_Char)0x74,  /* [2920] */
    (xdc_Char)0x68,  /* [2921] */
    (xdc_Char)0x65,  /* [2922] */
    (xdc_Char)0x20,  /* [2923] */
    (xdc_Char)0x68,  /* [2924] */
    (xdc_Char)0x65,  /* [2925] */
    (xdc_Char)0x61,  /* [2926] */
    (xdc_Char)0x70,  /* [2927] */
    (xdc_Char)0x73,  /* [2928] */
    (xdc_Char)0x20,  /* [2929] */
    (xdc_Char)0x61,  /* [2930] */
    (xdc_Char)0x6c,  /* [2931] */
    (xdc_Char)0x69,  /* [2932] */
    (xdc_Char)0x67,  /* [2933] */
    (xdc_Char)0x6e,  /* [2934] */
    (xdc_Char)0x6d,  /* [2935] */
    (xdc_Char)0x65,  /* [2936] */
    (xdc_Char)0x6e,  /* [2937] */
    (xdc_Char)0x74,  /* [2938] */
    (xdc_Char)0x0,  /* [2939] */
    (xdc_Char)0x62,  /* [2940] */
    (xdc_Char)0x6c,  /* [2941] */
    (xdc_Char)0x6f,  /* [2942] */
    (xdc_Char)0x63,  /* [2943] */
    (xdc_Char)0x6b,  /* [2944] */
    (xdc_Char)0x53,  /* [2945] */
    (xdc_Char)0x69,  /* [2946] */
    (xdc_Char)0x7a,  /* [2947] */
    (xdc_Char)0x65,  /* [2948] */
    (xdc_Char)0x20,  /* [2949] */
    (xdc_Char)0x6d,  /* [2950] */
    (xdc_Char)0x75,  /* [2951] */
    (xdc_Char)0x73,  /* [2952] */
    (xdc_Char)0x74,  /* [2953] */
    (xdc_Char)0x20,  /* [2954] */
    (xdc_Char)0x62,  /* [2955] */
    (xdc_Char)0x65,  /* [2956] */
    (xdc_Char)0x20,  /* [2957] */
    (xdc_Char)0x6c,  /* [2958] */
    (xdc_Char)0x61,  /* [2959] */
    (xdc_Char)0x72,  /* [2960] */
    (xdc_Char)0x67,  /* [2961] */
    (xdc_Char)0x65,  /* [2962] */
    (xdc_Char)0x20,  /* [2963] */
    (xdc_Char)0x65,  /* [2964] */
    (xdc_Char)0x6e,  /* [2965] */
    (xdc_Char)0x6f,  /* [2966] */
    (xdc_Char)0x75,  /* [2967] */
    (xdc_Char)0x67,  /* [2968] */
    (xdc_Char)0x68,  /* [2969] */
    (xdc_Char)0x20,  /* [2970] */
    (xdc_Char)0x74,  /* [2971] */
    (xdc_Char)0x6f,  /* [2972] */
    (xdc_Char)0x20,  /* [2973] */
    (xdc_Char)0x68,  /* [2974] */
    (xdc_Char)0x6f,  /* [2975] */
    (xdc_Char)0x6c,  /* [2976] */
    (xdc_Char)0x64,  /* [2977] */
    (xdc_Char)0x20,  /* [2978] */
    (xdc_Char)0x61,  /* [2979] */
    (xdc_Char)0x74,  /* [2980] */
    (xdc_Char)0x6c,  /* [2981] */
    (xdc_Char)0x65,  /* [2982] */
    (xdc_Char)0x61,  /* [2983] */
    (xdc_Char)0x73,  /* [2984] */
    (xdc_Char)0x74,  /* [2985] */
    (xdc_Char)0x20,  /* [2986] */
    (xdc_Char)0x74,  /* [2987] */
    (xdc_Char)0x77,  /* [2988] */
    (xdc_Char)0x6f,  /* [2989] */
    (xdc_Char)0x20,  /* [2990] */
    (xdc_Char)0x70,  /* [2991] */
    (xdc_Char)0x6f,  /* [2992] */
    (xdc_Char)0x69,  /* [2993] */
    (xdc_Char)0x6e,  /* [2994] */
    (xdc_Char)0x74,  /* [2995] */
    (xdc_Char)0x65,  /* [2996] */
    (xdc_Char)0x72,  /* [2997] */
    (xdc_Char)0x73,  /* [2998] */
    (xdc_Char)0x0,  /* [2999] */
    (xdc_Char)0x6e,  /* [3000] */
    (xdc_Char)0x75,  /* [3001] */
    (xdc_Char)0x6d,  /* [3002] */
    (xdc_Char)0x42,  /* [3003] */
    (xdc_Char)0x6c,  /* [3004] */
    (xdc_Char)0x6f,  /* [3005] */
    (xdc_Char)0x63,  /* [3006] */
    (xdc_Char)0x6b,  /* [3007] */
    (xdc_Char)0x73,  /* [3008] */
    (xdc_Char)0x20,  /* [3009] */
    (xdc_Char)0x63,  /* [3010] */
    (xdc_Char)0x61,  /* [3011] */
    (xdc_Char)0x6e,  /* [3012] */
    (xdc_Char)0x6e,  /* [3013] */
    (xdc_Char)0x6f,  /* [3014] */
    (xdc_Char)0x74,  /* [3015] */
    (xdc_Char)0x20,  /* [3016] */
    (xdc_Char)0x62,  /* [3017] */
    (xdc_Char)0x65,  /* [3018] */
    (xdc_Char)0x20,  /* [3019] */
    (xdc_Char)0x7a,  /* [3020] */
    (xdc_Char)0x65,  /* [3021] */
    (xdc_Char)0x72,  /* [3022] */
    (xdc_Char)0x6f,  /* [3023] */
    (xdc_Char)0x0,  /* [3024] */
    (xdc_Char)0x62,  /* [3025] */
    (xdc_Char)0x75,  /* [3026] */
    (xdc_Char)0x66,  /* [3027] */
    (xdc_Char)0x53,  /* [3028] */
    (xdc_Char)0x69,  /* [3029] */
    (xdc_Char)0x7a,  /* [3030] */
    (xdc_Char)0x65,  /* [3031] */
    (xdc_Char)0x20,  /* [3032] */
    (xdc_Char)0x63,  /* [3033] */
    (xdc_Char)0x61,  /* [3034] */
    (xdc_Char)0x6e,  /* [3035] */
    (xdc_Char)0x6e,  /* [3036] */
    (xdc_Char)0x6f,  /* [3037] */
    (xdc_Char)0x74,  /* [3038] */
    (xdc_Char)0x20,  /* [3039] */
    (xdc_Char)0x62,  /* [3040] */
    (xdc_Char)0x65,  /* [3041] */
    (xdc_Char)0x20,  /* [3042] */
    (xdc_Char)0x7a,  /* [3043] */
    (xdc_Char)0x65,  /* [3044] */
    (xdc_Char)0x72,  /* [3045] */
    (xdc_Char)0x6f,  /* [3046] */
    (xdc_Char)0x0,  /* [3047] */
    (xdc_Char)0x48,  /* [3048] */
    (xdc_Char)0x65,  /* [3049] */
    (xdc_Char)0x61,  /* [3050] */
    (xdc_Char)0x70,  /* [3051] */
    (xdc_Char)0x42,  /* [3052] */
    (xdc_Char)0x75,  /* [3053] */
    (xdc_Char)0x66,  /* [3054] */
    (xdc_Char)0x5f,  /* [3055] */
    (xdc_Char)0x63,  /* [3056] */
    (xdc_Char)0x72,  /* [3057] */
    (xdc_Char)0x65,  /* [3058] */
    (xdc_Char)0x61,  /* [3059] */
    (xdc_Char)0x74,  /* [3060] */
    (xdc_Char)0x65,  /* [3061] */
    (xdc_Char)0x27,  /* [3062] */
    (xdc_Char)0x73,  /* [3063] */
    (xdc_Char)0x20,  /* [3064] */
    (xdc_Char)0x62,  /* [3065] */
    (xdc_Char)0x75,  /* [3066] */
    (xdc_Char)0x66,  /* [3067] */
    (xdc_Char)0x53,  /* [3068] */
    (xdc_Char)0x69,  /* [3069] */
    (xdc_Char)0x7a,  /* [3070] */
    (xdc_Char)0x65,  /* [3071] */
    (xdc_Char)0x20,  /* [3072] */
    (xdc_Char)0x70,  /* [3073] */
    (xdc_Char)0x61,  /* [3074] */
    (xdc_Char)0x72,  /* [3075] */
    (xdc_Char)0x61,  /* [3076] */
    (xdc_Char)0x6d,  /* [3077] */
    (xdc_Char)0x65,  /* [3078] */
    (xdc_Char)0x74,  /* [3079] */
    (xdc_Char)0x65,  /* [3080] */
    (xdc_Char)0x72,  /* [3081] */
    (xdc_Char)0x20,  /* [3082] */
    (xdc_Char)0x69,  /* [3083] */
    (xdc_Char)0x73,  /* [3084] */
    (xdc_Char)0x20,  /* [3085] */
    (xdc_Char)0x69,  /* [3086] */
    (xdc_Char)0x6e,  /* [3087] */
    (xdc_Char)0x76,  /* [3088] */
    (xdc_Char)0x61,  /* [3089] */
    (xdc_Char)0x6c,  /* [3090] */
    (xdc_Char)0x69,  /* [3091] */
    (xdc_Char)0x64,  /* [3092] */
    (xdc_Char)0x20,  /* [3093] */
    (xdc_Char)0x28,  /* [3094] */
    (xdc_Char)0x74,  /* [3095] */
    (xdc_Char)0x6f,  /* [3096] */
    (xdc_Char)0x6f,  /* [3097] */
    (xdc_Char)0x20,  /* [3098] */
    (xdc_Char)0x73,  /* [3099] */
    (xdc_Char)0x6d,  /* [3100] */
    (xdc_Char)0x61,  /* [3101] */
    (xdc_Char)0x6c,  /* [3102] */
    (xdc_Char)0x6c,  /* [3103] */
    (xdc_Char)0x29,  /* [3104] */
    (xdc_Char)0x0,  /* [3105] */
    (xdc_Char)0x43,  /* [3106] */
    (xdc_Char)0x61,  /* [3107] */
    (xdc_Char)0x6e,  /* [3108] */
    (xdc_Char)0x6e,  /* [3109] */
    (xdc_Char)0x6f,  /* [3110] */
    (xdc_Char)0x74,  /* [3111] */
    (xdc_Char)0x20,  /* [3112] */
    (xdc_Char)0x63,  /* [3113] */
    (xdc_Char)0x61,  /* [3114] */
    (xdc_Char)0x6c,  /* [3115] */
    (xdc_Char)0x6c,  /* [3116] */
    (xdc_Char)0x20,  /* [3117] */
    (xdc_Char)0x48,  /* [3118] */
    (xdc_Char)0x65,  /* [3119] */
    (xdc_Char)0x61,  /* [3120] */
    (xdc_Char)0x70,  /* [3121] */
    (xdc_Char)0x42,  /* [3122] */
    (xdc_Char)0x75,  /* [3123] */
    (xdc_Char)0x66,  /* [3124] */
    (xdc_Char)0x5f,  /* [3125] */
    (xdc_Char)0x66,  /* [3126] */
    (xdc_Char)0x72,  /* [3127] */
    (xdc_Char)0x65,  /* [3128] */
    (xdc_Char)0x65,  /* [3129] */
    (xdc_Char)0x20,  /* [3130] */
    (xdc_Char)0x77,  /* [3131] */
    (xdc_Char)0x68,  /* [3132] */
    (xdc_Char)0x65,  /* [3133] */
    (xdc_Char)0x6e,  /* [3134] */
    (xdc_Char)0x20,  /* [3135] */
    (xdc_Char)0x6e,  /* [3136] */
    (xdc_Char)0x6f,  /* [3137] */
    (xdc_Char)0x20,  /* [3138] */
    (xdc_Char)0x62,  /* [3139] */
    (xdc_Char)0x6c,  /* [3140] */
    (xdc_Char)0x6f,  /* [3141] */
    (xdc_Char)0x63,  /* [3142] */
    (xdc_Char)0x6b,  /* [3143] */
    (xdc_Char)0x73,  /* [3144] */
    (xdc_Char)0x20,  /* [3145] */
    (xdc_Char)0x68,  /* [3146] */
    (xdc_Char)0x61,  /* [3147] */
    (xdc_Char)0x76,  /* [3148] */
    (xdc_Char)0x65,  /* [3149] */
    (xdc_Char)0x20,  /* [3150] */
    (xdc_Char)0x62,  /* [3151] */
    (xdc_Char)0x65,  /* [3152] */
    (xdc_Char)0x65,  /* [3153] */
    (xdc_Char)0x6e,  /* [3154] */
    (xdc_Char)0x20,  /* [3155] */
    (xdc_Char)0x61,  /* [3156] */
    (xdc_Char)0x6c,  /* [3157] */
    (xdc_Char)0x6c,  /* [3158] */
    (xdc_Char)0x6f,  /* [3159] */
    (xdc_Char)0x63,  /* [3160] */
    (xdc_Char)0x61,  /* [3161] */
    (xdc_Char)0x74,  /* [3162] */
    (xdc_Char)0x65,  /* [3163] */
    (xdc_Char)0x64,  /* [3164] */
    (xdc_Char)0x0,  /* [3165] */
    (xdc_Char)0x41,  /* [3166] */
    (xdc_Char)0x5f,  /* [3167] */
    (xdc_Char)0x69,  /* [3168] */
    (xdc_Char)0x6e,  /* [3169] */
    (xdc_Char)0x76,  /* [3170] */
    (xdc_Char)0x61,  /* [3171] */
    (xdc_Char)0x6c,  /* [3172] */
    (xdc_Char)0x69,  /* [3173] */
    (xdc_Char)0x64,  /* [3174] */
    (xdc_Char)0x46,  /* [3175] */
    (xdc_Char)0x72,  /* [3176] */
    (xdc_Char)0x65,  /* [3177] */
    (xdc_Char)0x65,  /* [3178] */
    (xdc_Char)0x3a,  /* [3179] */
    (xdc_Char)0x20,  /* [3180] */
    (xdc_Char)0x49,  /* [3181] */
    (xdc_Char)0x6e,  /* [3182] */
    (xdc_Char)0x76,  /* [3183] */
    (xdc_Char)0x61,  /* [3184] */
    (xdc_Char)0x6c,  /* [3185] */
    (xdc_Char)0x69,  /* [3186] */
    (xdc_Char)0x64,  /* [3187] */
    (xdc_Char)0x20,  /* [3188] */
    (xdc_Char)0x66,  /* [3189] */
    (xdc_Char)0x72,  /* [3190] */
    (xdc_Char)0x65,  /* [3191] */
    (xdc_Char)0x65,  /* [3192] */
    (xdc_Char)0x0,  /* [3193] */
    (xdc_Char)0x41,  /* [3194] */
    (xdc_Char)0x5f,  /* [3195] */
    (xdc_Char)0x7a,  /* [3196] */
    (xdc_Char)0x65,  /* [3197] */
    (xdc_Char)0x72,  /* [3198] */
    (xdc_Char)0x6f,  /* [3199] */
    (xdc_Char)0x42,  /* [3200] */
    (xdc_Char)0x6c,  /* [3201] */
    (xdc_Char)0x6f,  /* [3202] */
    (xdc_Char)0x63,  /* [3203] */
    (xdc_Char)0x6b,  /* [3204] */
    (xdc_Char)0x3a,  /* [3205] */
    (xdc_Char)0x20,  /* [3206] */
    (xdc_Char)0x43,  /* [3207] */
    (xdc_Char)0x61,  /* [3208] */
    (xdc_Char)0x6e,  /* [3209] */
    (xdc_Char)0x6e,  /* [3210] */
    (xdc_Char)0x6f,  /* [3211] */
    (xdc_Char)0x74,  /* [3212] */
    (xdc_Char)0x20,  /* [3213] */
    (xdc_Char)0x61,  /* [3214] */
    (xdc_Char)0x6c,  /* [3215] */
    (xdc_Char)0x6c,  /* [3216] */
    (xdc_Char)0x6f,  /* [3217] */
    (xdc_Char)0x63,  /* [3218] */
    (xdc_Char)0x61,  /* [3219] */
    (xdc_Char)0x74,  /* [3220] */
    (xdc_Char)0x65,  /* [3221] */
    (xdc_Char)0x20,  /* [3222] */
    (xdc_Char)0x73,  /* [3223] */
    (xdc_Char)0x69,  /* [3224] */
    (xdc_Char)0x7a,  /* [3225] */
    (xdc_Char)0x65,  /* [3226] */
    (xdc_Char)0x20,  /* [3227] */
    (xdc_Char)0x30,  /* [3228] */
    (xdc_Char)0x0,  /* [3229] */
    (xdc_Char)0x41,  /* [3230] */
    (xdc_Char)0x5f,  /* [3231] */
    (xdc_Char)0x68,  /* [3232] */
    (xdc_Char)0x65,  /* [3233] */
    (xdc_Char)0x61,  /* [3234] */
    (xdc_Char)0x70,  /* [3235] */
    (xdc_Char)0x53,  /* [3236] */
    (xdc_Char)0x69,  /* [3237] */
    (xdc_Char)0x7a,  /* [3238] */
    (xdc_Char)0x65,  /* [3239] */
    (xdc_Char)0x3a,  /* [3240] */
    (xdc_Char)0x20,  /* [3241] */
    (xdc_Char)0x52,  /* [3242] */
    (xdc_Char)0x65,  /* [3243] */
    (xdc_Char)0x71,  /* [3244] */
    (xdc_Char)0x75,  /* [3245] */
    (xdc_Char)0x65,  /* [3246] */
    (xdc_Char)0x73,  /* [3247] */
    (xdc_Char)0x74,  /* [3248] */
    (xdc_Char)0x65,  /* [3249] */
    (xdc_Char)0x64,  /* [3250] */
    (xdc_Char)0x20,  /* [3251] */
    (xdc_Char)0x68,  /* [3252] */
    (xdc_Char)0x65,  /* [3253] */
    (xdc_Char)0x61,  /* [3254] */
    (xdc_Char)0x70,  /* [3255] */
    (xdc_Char)0x20,  /* [3256] */
    (xdc_Char)0x73,  /* [3257] */
    (xdc_Char)0x69,  /* [3258] */
    (xdc_Char)0x7a,  /* [3259] */
    (xdc_Char)0x65,  /* [3260] */
    (xdc_Char)0x20,  /* [3261] */
    (xdc_Char)0x69,  /* [3262] */
    (xdc_Char)0x73,  /* [3263] */
    (xdc_Char)0x20,  /* [3264] */
    (xdc_Char)0x74,  /* [3265] */
    (xdc_Char)0x6f,  /* [3266] */
    (xdc_Char)0x6f,  /* [3267] */
    (xdc_Char)0x20,  /* [3268] */
    (xdc_Char)0x73,  /* [3269] */
    (xdc_Char)0x6d,  /* [3270] */
    (xdc_Char)0x61,  /* [3271] */
    (xdc_Char)0x6c,  /* [3272] */
    (xdc_Char)0x6c,  /* [3273] */
    (xdc_Char)0x0,  /* [3274] */
    (xdc_Char)0x41,  /* [3275] */
    (xdc_Char)0x5f,  /* [3276] */
    (xdc_Char)0x61,  /* [3277] */
    (xdc_Char)0x6c,  /* [3278] */
    (xdc_Char)0x69,  /* [3279] */
    (xdc_Char)0x67,  /* [3280] */
    (xdc_Char)0x6e,  /* [3281] */
    (xdc_Char)0x3a,  /* [3282] */
    (xdc_Char)0x20,  /* [3283] */
    (xdc_Char)0x52,  /* [3284] */
    (xdc_Char)0x65,  /* [3285] */
    (xdc_Char)0x71,  /* [3286] */
    (xdc_Char)0x75,  /* [3287] */
    (xdc_Char)0x65,  /* [3288] */
    (xdc_Char)0x73,  /* [3289] */
    (xdc_Char)0x74,  /* [3290] */
    (xdc_Char)0x65,  /* [3291] */
    (xdc_Char)0x64,  /* [3292] */
    (xdc_Char)0x20,  /* [3293] */
    (xdc_Char)0x61,  /* [3294] */
    (xdc_Char)0x6c,  /* [3295] */
    (xdc_Char)0x69,  /* [3296] */
    (xdc_Char)0x67,  /* [3297] */
    (xdc_Char)0x6e,  /* [3298] */
    (xdc_Char)0x20,  /* [3299] */
    (xdc_Char)0x69,  /* [3300] */
    (xdc_Char)0x73,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x6e,  /* [3303] */
    (xdc_Char)0x6f,  /* [3304] */
    (xdc_Char)0x74,  /* [3305] */
    (xdc_Char)0x20,  /* [3306] */
    (xdc_Char)0x61,  /* [3307] */
    (xdc_Char)0x20,  /* [3308] */
    (xdc_Char)0x70,  /* [3309] */
    (xdc_Char)0x6f,  /* [3310] */
    (xdc_Char)0x77,  /* [3311] */
    (xdc_Char)0x65,  /* [3312] */
    (xdc_Char)0x72,  /* [3313] */
    (xdc_Char)0x20,  /* [3314] */
    (xdc_Char)0x6f,  /* [3315] */
    (xdc_Char)0x66,  /* [3316] */
    (xdc_Char)0x20,  /* [3317] */
    (xdc_Char)0x32,  /* [3318] */
    (xdc_Char)0x0,  /* [3319] */
    (xdc_Char)0x49,  /* [3320] */
    (xdc_Char)0x6e,  /* [3321] */
    (xdc_Char)0x76,  /* [3322] */
    (xdc_Char)0x61,  /* [3323] */
    (xdc_Char)0x6c,  /* [3324] */
    (xdc_Char)0x69,  /* [3325] */
    (xdc_Char)0x64,  /* [3326] */
    (xdc_Char)0x20,  /* [3327] */
    (xdc_Char)0x62,  /* [3328] */
    (xdc_Char)0x6c,  /* [3329] */
    (xdc_Char)0x6f,  /* [3330] */
    (xdc_Char)0x63,  /* [3331] */
    (xdc_Char)0x6b,  /* [3332] */
    (xdc_Char)0x20,  /* [3333] */
    (xdc_Char)0x61,  /* [3334] */
    (xdc_Char)0x64,  /* [3335] */
    (xdc_Char)0x64,  /* [3336] */
    (xdc_Char)0x72,  /* [3337] */
    (xdc_Char)0x65,  /* [3338] */
    (xdc_Char)0x73,  /* [3339] */
    (xdc_Char)0x73,  /* [3340] */
    (xdc_Char)0x20,  /* [3341] */
    (xdc_Char)0x6f,  /* [3342] */
    (xdc_Char)0x6e,  /* [3343] */
    (xdc_Char)0x20,  /* [3344] */
    (xdc_Char)0x74,  /* [3345] */
    (xdc_Char)0x68,  /* [3346] */
    (xdc_Char)0x65,  /* [3347] */
    (xdc_Char)0x20,  /* [3348] */
    (xdc_Char)0x66,  /* [3349] */
    (xdc_Char)0x72,  /* [3350] */
    (xdc_Char)0x65,  /* [3351] */
    (xdc_Char)0x65,  /* [3352] */
    (xdc_Char)0x2e,  /* [3353] */
    (xdc_Char)0x20,  /* [3354] */
    (xdc_Char)0x46,  /* [3355] */
    (xdc_Char)0x61,  /* [3356] */
    (xdc_Char)0x69,  /* [3357] */
    (xdc_Char)0x6c,  /* [3358] */
    (xdc_Char)0x65,  /* [3359] */
    (xdc_Char)0x64,  /* [3360] */
    (xdc_Char)0x20,  /* [3361] */
    (xdc_Char)0x74,  /* [3362] */
    (xdc_Char)0x6f,  /* [3363] */
    (xdc_Char)0x20,  /* [3364] */
    (xdc_Char)0x66,  /* [3365] */
    (xdc_Char)0x72,  /* [3366] */
    (xdc_Char)0x65,  /* [3367] */
    (xdc_Char)0x65,  /* [3368] */
    (xdc_Char)0x20,  /* [3369] */
    (xdc_Char)0x62,  /* [3370] */
    (xdc_Char)0x6c,  /* [3371] */
    (xdc_Char)0x6f,  /* [3372] */
    (xdc_Char)0x63,  /* [3373] */
    (xdc_Char)0x6b,  /* [3374] */
    (xdc_Char)0x20,  /* [3375] */
    (xdc_Char)0x62,  /* [3376] */
    (xdc_Char)0x61,  /* [3377] */
    (xdc_Char)0x63,  /* [3378] */
    (xdc_Char)0x6b,  /* [3379] */
    (xdc_Char)0x20,  /* [3380] */
    (xdc_Char)0x74,  /* [3381] */
    (xdc_Char)0x6f,  /* [3382] */
    (xdc_Char)0x20,  /* [3383] */
    (xdc_Char)0x68,  /* [3384] */
    (xdc_Char)0x65,  /* [3385] */
    (xdc_Char)0x61,  /* [3386] */
    (xdc_Char)0x70,  /* [3387] */
    (xdc_Char)0x2e,  /* [3388] */
    (xdc_Char)0x0,  /* [3389] */
    (xdc_Char)0x41,  /* [3390] */
    (xdc_Char)0x5f,  /* [3391] */
    (xdc_Char)0x64,  /* [3392] */
    (xdc_Char)0x6f,  /* [3393] */
    (xdc_Char)0x75,  /* [3394] */
    (xdc_Char)0x62,  /* [3395] */
    (xdc_Char)0x6c,  /* [3396] */
    (xdc_Char)0x65,  /* [3397] */
    (xdc_Char)0x46,  /* [3398] */
    (xdc_Char)0x72,  /* [3399] */
    (xdc_Char)0x65,  /* [3400] */
    (xdc_Char)0x65,  /* [3401] */
    (xdc_Char)0x3a,  /* [3402] */
    (xdc_Char)0x20,  /* [3403] */
    (xdc_Char)0x42,  /* [3404] */
    (xdc_Char)0x75,  /* [3405] */
    (xdc_Char)0x66,  /* [3406] */
    (xdc_Char)0x66,  /* [3407] */
    (xdc_Char)0x65,  /* [3408] */
    (xdc_Char)0x72,  /* [3409] */
    (xdc_Char)0x20,  /* [3410] */
    (xdc_Char)0x61,  /* [3411] */
    (xdc_Char)0x6c,  /* [3412] */
    (xdc_Char)0x72,  /* [3413] */
    (xdc_Char)0x65,  /* [3414] */
    (xdc_Char)0x61,  /* [3415] */
    (xdc_Char)0x64,  /* [3416] */
    (xdc_Char)0x79,  /* [3417] */
    (xdc_Char)0x20,  /* [3418] */
    (xdc_Char)0x66,  /* [3419] */
    (xdc_Char)0x72,  /* [3420] */
    (xdc_Char)0x65,  /* [3421] */
    (xdc_Char)0x65,  /* [3422] */
    (xdc_Char)0x0,  /* [3423] */
    (xdc_Char)0x41,  /* [3424] */
    (xdc_Char)0x5f,  /* [3425] */
    (xdc_Char)0x62,  /* [3426] */
    (xdc_Char)0x75,  /* [3427] */
    (xdc_Char)0x66,  /* [3428] */
    (xdc_Char)0x4f,  /* [3429] */
    (xdc_Char)0x76,  /* [3430] */
    (xdc_Char)0x65,  /* [3431] */
    (xdc_Char)0x72,  /* [3432] */
    (xdc_Char)0x66,  /* [3433] */
    (xdc_Char)0x6c,  /* [3434] */
    (xdc_Char)0x6f,  /* [3435] */
    (xdc_Char)0x77,  /* [3436] */
    (xdc_Char)0x3a,  /* [3437] */
    (xdc_Char)0x20,  /* [3438] */
    (xdc_Char)0x42,  /* [3439] */
    (xdc_Char)0x75,  /* [3440] */
    (xdc_Char)0x66,  /* [3441] */
    (xdc_Char)0x66,  /* [3442] */
    (xdc_Char)0x65,  /* [3443] */
    (xdc_Char)0x72,  /* [3444] */
    (xdc_Char)0x20,  /* [3445] */
    (xdc_Char)0x6f,  /* [3446] */
    (xdc_Char)0x76,  /* [3447] */
    (xdc_Char)0x65,  /* [3448] */
    (xdc_Char)0x72,  /* [3449] */
    (xdc_Char)0x66,  /* [3450] */
    (xdc_Char)0x6c,  /* [3451] */
    (xdc_Char)0x6f,  /* [3452] */
    (xdc_Char)0x77,  /* [3453] */
    (xdc_Char)0x0,  /* [3454] */
    (xdc_Char)0x41,  /* [3455] */
    (xdc_Char)0x5f,  /* [3456] */
    (xdc_Char)0x6e,  /* [3457] */
    (xdc_Char)0x6f,  /* [3458] */
    (xdc_Char)0x74,  /* [3459] */
    (xdc_Char)0x45,  /* [3460] */
    (xdc_Char)0x6d,  /* [3461] */
    (xdc_Char)0x70,  /* [3462] */
    (xdc_Char)0x74,  /* [3463] */
    (xdc_Char)0x79,  /* [3464] */
    (xdc_Char)0x3a,  /* [3465] */
    (xdc_Char)0x20,  /* [3466] */
    (xdc_Char)0x48,  /* [3467] */
    (xdc_Char)0x65,  /* [3468] */
    (xdc_Char)0x61,  /* [3469] */
    (xdc_Char)0x70,  /* [3470] */
    (xdc_Char)0x20,  /* [3471] */
    (xdc_Char)0x6e,  /* [3472] */
    (xdc_Char)0x6f,  /* [3473] */
    (xdc_Char)0x74,  /* [3474] */
    (xdc_Char)0x20,  /* [3475] */
    (xdc_Char)0x65,  /* [3476] */
    (xdc_Char)0x6d,  /* [3477] */
    (xdc_Char)0x70,  /* [3478] */
    (xdc_Char)0x74,  /* [3479] */
    (xdc_Char)0x79,  /* [3480] */
    (xdc_Char)0x0,  /* [3481] */
    (xdc_Char)0x41,  /* [3482] */
    (xdc_Char)0x5f,  /* [3483] */
    (xdc_Char)0x6e,  /* [3484] */
    (xdc_Char)0x75,  /* [3485] */
    (xdc_Char)0x6c,  /* [3486] */
    (xdc_Char)0x6c,  /* [3487] */
    (xdc_Char)0x4f,  /* [3488] */
    (xdc_Char)0x62,  /* [3489] */
    (xdc_Char)0x6a,  /* [3490] */
    (xdc_Char)0x65,  /* [3491] */
    (xdc_Char)0x63,  /* [3492] */
    (xdc_Char)0x74,  /* [3493] */
    (xdc_Char)0x3a,  /* [3494] */
    (xdc_Char)0x20,  /* [3495] */
    (xdc_Char)0x48,  /* [3496] */
    (xdc_Char)0x65,  /* [3497] */
    (xdc_Char)0x61,  /* [3498] */
    (xdc_Char)0x70,  /* [3499] */
    (xdc_Char)0x54,  /* [3500] */
    (xdc_Char)0x72,  /* [3501] */
    (xdc_Char)0x61,  /* [3502] */
    (xdc_Char)0x63,  /* [3503] */
    (xdc_Char)0x6b,  /* [3504] */
    (xdc_Char)0x5f,  /* [3505] */
    (xdc_Char)0x70,  /* [3506] */
    (xdc_Char)0x72,  /* [3507] */
    (xdc_Char)0x69,  /* [3508] */
    (xdc_Char)0x6e,  /* [3509] */
    (xdc_Char)0x74,  /* [3510] */
    (xdc_Char)0x48,  /* [3511] */
    (xdc_Char)0x65,  /* [3512] */
    (xdc_Char)0x61,  /* [3513] */
    (xdc_Char)0x70,  /* [3514] */
    (xdc_Char)0x20,  /* [3515] */
    (xdc_Char)0x63,  /* [3516] */
    (xdc_Char)0x61,  /* [3517] */
    (xdc_Char)0x6c,  /* [3518] */
    (xdc_Char)0x6c,  /* [3519] */
    (xdc_Char)0x65,  /* [3520] */
    (xdc_Char)0x64,  /* [3521] */
    (xdc_Char)0x20,  /* [3522] */
    (xdc_Char)0x77,  /* [3523] */
    (xdc_Char)0x69,  /* [3524] */
    (xdc_Char)0x74,  /* [3525] */
    (xdc_Char)0x68,  /* [3526] */
    (xdc_Char)0x20,  /* [3527] */
    (xdc_Char)0x6e,  /* [3528] */
    (xdc_Char)0x75,  /* [3529] */
    (xdc_Char)0x6c,  /* [3530] */
    (xdc_Char)0x6c,  /* [3531] */
    (xdc_Char)0x20,  /* [3532] */
    (xdc_Char)0x6f,  /* [3533] */
    (xdc_Char)0x62,  /* [3534] */
    (xdc_Char)0x6a,  /* [3535] */
    (xdc_Char)0x0,  /* [3536] */
    (xdc_Char)0x61,  /* [3537] */
    (xdc_Char)0x73,  /* [3538] */
    (xdc_Char)0x73,  /* [3539] */
    (xdc_Char)0x65,  /* [3540] */
    (xdc_Char)0x72,  /* [3541] */
    (xdc_Char)0x74,  /* [3542] */
    (xdc_Char)0x69,  /* [3543] */
    (xdc_Char)0x6f,  /* [3544] */
    (xdc_Char)0x6e,  /* [3545] */
    (xdc_Char)0x20,  /* [3546] */
    (xdc_Char)0x66,  /* [3547] */
    (xdc_Char)0x61,  /* [3548] */
    (xdc_Char)0x69,  /* [3549] */
    (xdc_Char)0x6c,  /* [3550] */
    (xdc_Char)0x75,  /* [3551] */
    (xdc_Char)0x72,  /* [3552] */
    (xdc_Char)0x65,  /* [3553] */
    (xdc_Char)0x25,  /* [3554] */
    (xdc_Char)0x73,  /* [3555] */
    (xdc_Char)0x25,  /* [3556] */
    (xdc_Char)0x73,  /* [3557] */
    (xdc_Char)0x0,  /* [3558] */
    (xdc_Char)0x25,  /* [3559] */
    (xdc_Char)0x24,  /* [3560] */
    (xdc_Char)0x53,  /* [3561] */
    (xdc_Char)0x0,  /* [3562] */
    (xdc_Char)0x6f,  /* [3563] */
    (xdc_Char)0x75,  /* [3564] */
    (xdc_Char)0x74,  /* [3565] */
    (xdc_Char)0x20,  /* [3566] */
    (xdc_Char)0x6f,  /* [3567] */
    (xdc_Char)0x66,  /* [3568] */
    (xdc_Char)0x20,  /* [3569] */
    (xdc_Char)0x6d,  /* [3570] */
    (xdc_Char)0x65,  /* [3571] */
    (xdc_Char)0x6d,  /* [3572] */
    (xdc_Char)0x6f,  /* [3573] */
    (xdc_Char)0x72,  /* [3574] */
    (xdc_Char)0x79,  /* [3575] */
    (xdc_Char)0x3a,  /* [3576] */
    (xdc_Char)0x20,  /* [3577] */
    (xdc_Char)0x68,  /* [3578] */
    (xdc_Char)0x65,  /* [3579] */
    (xdc_Char)0x61,  /* [3580] */
    (xdc_Char)0x70,  /* [3581] */
    (xdc_Char)0x3d,  /* [3582] */
    (xdc_Char)0x30,  /* [3583] */
    (xdc_Char)0x78,  /* [3584] */
    (xdc_Char)0x25,  /* [3585] */
    (xdc_Char)0x78,  /* [3586] */
    (xdc_Char)0x2c,  /* [3587] */
    (xdc_Char)0x20,  /* [3588] */
    (xdc_Char)0x73,  /* [3589] */
    (xdc_Char)0x69,  /* [3590] */
    (xdc_Char)0x7a,  /* [3591] */
    (xdc_Char)0x65,  /* [3592] */
    (xdc_Char)0x3d,  /* [3593] */
    (xdc_Char)0x25,  /* [3594] */
    (xdc_Char)0x75,  /* [3595] */
    (xdc_Char)0x0,  /* [3596] */
    (xdc_Char)0x25,  /* [3597] */
    (xdc_Char)0x73,  /* [3598] */
    (xdc_Char)0x20,  /* [3599] */
    (xdc_Char)0x30,  /* [3600] */
    (xdc_Char)0x78,  /* [3601] */
    (xdc_Char)0x25,  /* [3602] */
    (xdc_Char)0x78,  /* [3603] */
    (xdc_Char)0x0,  /* [3604] */
    (xdc_Char)0x45,  /* [3605] */
    (xdc_Char)0x5f,  /* [3606] */
    (xdc_Char)0x62,  /* [3607] */
    (xdc_Char)0x61,  /* [3608] */
    (xdc_Char)0x64,  /* [3609] */
    (xdc_Char)0x4c,  /* [3610] */
    (xdc_Char)0x65,  /* [3611] */
    (xdc_Char)0x76,  /* [3612] */
    (xdc_Char)0x65,  /* [3613] */
    (xdc_Char)0x6c,  /* [3614] */
    (xdc_Char)0x3a,  /* [3615] */
    (xdc_Char)0x20,  /* [3616] */
    (xdc_Char)0x42,  /* [3617] */
    (xdc_Char)0x61,  /* [3618] */
    (xdc_Char)0x64,  /* [3619] */
    (xdc_Char)0x20,  /* [3620] */
    (xdc_Char)0x66,  /* [3621] */
    (xdc_Char)0x69,  /* [3622] */
    (xdc_Char)0x6c,  /* [3623] */
    (xdc_Char)0x74,  /* [3624] */
    (xdc_Char)0x65,  /* [3625] */
    (xdc_Char)0x72,  /* [3626] */
    (xdc_Char)0x20,  /* [3627] */
    (xdc_Char)0x6c,  /* [3628] */
    (xdc_Char)0x65,  /* [3629] */
    (xdc_Char)0x76,  /* [3630] */
    (xdc_Char)0x65,  /* [3631] */
    (xdc_Char)0x6c,  /* [3632] */
    (xdc_Char)0x20,  /* [3633] */
    (xdc_Char)0x76,  /* [3634] */
    (xdc_Char)0x61,  /* [3635] */
    (xdc_Char)0x6c,  /* [3636] */
    (xdc_Char)0x75,  /* [3637] */
    (xdc_Char)0x65,  /* [3638] */
    (xdc_Char)0x3a,  /* [3639] */
    (xdc_Char)0x20,  /* [3640] */
    (xdc_Char)0x25,  /* [3641] */
    (xdc_Char)0x64,  /* [3642] */
    (xdc_Char)0x0,  /* [3643] */
    (xdc_Char)0x66,  /* [3644] */
    (xdc_Char)0x72,  /* [3645] */
    (xdc_Char)0x65,  /* [3646] */
    (xdc_Char)0x65,  /* [3647] */
    (xdc_Char)0x28,  /* [3648] */
    (xdc_Char)0x29,  /* [3649] */
    (xdc_Char)0x20,  /* [3650] */
    (xdc_Char)0x69,  /* [3651] */
    (xdc_Char)0x6e,  /* [3652] */
    (xdc_Char)0x76,  /* [3653] */
    (xdc_Char)0x61,  /* [3654] */
    (xdc_Char)0x6c,  /* [3655] */
    (xdc_Char)0x69,  /* [3656] */
    (xdc_Char)0x64,  /* [3657] */
    (xdc_Char)0x20,  /* [3658] */
    (xdc_Char)0x69,  /* [3659] */
    (xdc_Char)0x6e,  /* [3660] */
    (xdc_Char)0x20,  /* [3661] */
    (xdc_Char)0x67,  /* [3662] */
    (xdc_Char)0x72,  /* [3663] */
    (xdc_Char)0x6f,  /* [3664] */
    (xdc_Char)0x77,  /* [3665] */
    (xdc_Char)0x74,  /* [3666] */
    (xdc_Char)0x68,  /* [3667] */
    (xdc_Char)0x2d,  /* [3668] */
    (xdc_Char)0x6f,  /* [3669] */
    (xdc_Char)0x6e,  /* [3670] */
    (xdc_Char)0x6c,  /* [3671] */
    (xdc_Char)0x79,  /* [3672] */
    (xdc_Char)0x20,  /* [3673] */
    (xdc_Char)0x48,  /* [3674] */
    (xdc_Char)0x65,  /* [3675] */
    (xdc_Char)0x61,  /* [3676] */
    (xdc_Char)0x70,  /* [3677] */
    (xdc_Char)0x4d,  /* [3678] */
    (xdc_Char)0x69,  /* [3679] */
    (xdc_Char)0x6e,  /* [3680] */
    (xdc_Char)0x0,  /* [3681] */
    (xdc_Char)0x54,  /* [3682] */
    (xdc_Char)0x68,  /* [3683] */
    (xdc_Char)0x65,  /* [3684] */
    (xdc_Char)0x20,  /* [3685] */
    (xdc_Char)0x52,  /* [3686] */
    (xdc_Char)0x54,  /* [3687] */
    (xdc_Char)0x53,  /* [3688] */
    (xdc_Char)0x20,  /* [3689] */
    (xdc_Char)0x68,  /* [3690] */
    (xdc_Char)0x65,  /* [3691] */
    (xdc_Char)0x61,  /* [3692] */
    (xdc_Char)0x70,  /* [3693] */
    (xdc_Char)0x20,  /* [3694] */
    (xdc_Char)0x69,  /* [3695] */
    (xdc_Char)0x73,  /* [3696] */
    (xdc_Char)0x20,  /* [3697] */
    (xdc_Char)0x75,  /* [3698] */
    (xdc_Char)0x73,  /* [3699] */
    (xdc_Char)0x65,  /* [3700] */
    (xdc_Char)0x64,  /* [3701] */
    (xdc_Char)0x20,  /* [3702] */
    (xdc_Char)0x75,  /* [3703] */
    (xdc_Char)0x70,  /* [3704] */
    (xdc_Char)0x2e,  /* [3705] */
    (xdc_Char)0x20,  /* [3706] */
    (xdc_Char)0x45,  /* [3707] */
    (xdc_Char)0x78,  /* [3708] */
    (xdc_Char)0x61,  /* [3709] */
    (xdc_Char)0x6d,  /* [3710] */
    (xdc_Char)0x69,  /* [3711] */
    (xdc_Char)0x6e,  /* [3712] */
    (xdc_Char)0x65,  /* [3713] */
    (xdc_Char)0x20,  /* [3714] */
    (xdc_Char)0x50,  /* [3715] */
    (xdc_Char)0x72,  /* [3716] */
    (xdc_Char)0x6f,  /* [3717] */
    (xdc_Char)0x67,  /* [3718] */
    (xdc_Char)0x72,  /* [3719] */
    (xdc_Char)0x61,  /* [3720] */
    (xdc_Char)0x6d,  /* [3721] */
    (xdc_Char)0x2e,  /* [3722] */
    (xdc_Char)0x68,  /* [3723] */
    (xdc_Char)0x65,  /* [3724] */
    (xdc_Char)0x61,  /* [3725] */
    (xdc_Char)0x70,  /* [3726] */
    (xdc_Char)0x2e,  /* [3727] */
    (xdc_Char)0x0,  /* [3728] */
    (xdc_Char)0x45,  /* [3729] */
    (xdc_Char)0x5f,  /* [3730] */
    (xdc_Char)0x62,  /* [3731] */
    (xdc_Char)0x61,  /* [3732] */
    (xdc_Char)0x64,  /* [3733] */
    (xdc_Char)0x43,  /* [3734] */
    (xdc_Char)0x6f,  /* [3735] */
    (xdc_Char)0x6d,  /* [3736] */
    (xdc_Char)0x6d,  /* [3737] */
    (xdc_Char)0x61,  /* [3738] */
    (xdc_Char)0x6e,  /* [3739] */
    (xdc_Char)0x64,  /* [3740] */
    (xdc_Char)0x3a,  /* [3741] */
    (xdc_Char)0x20,  /* [3742] */
    (xdc_Char)0x52,  /* [3743] */
    (xdc_Char)0x65,  /* [3744] */
    (xdc_Char)0x63,  /* [3745] */
    (xdc_Char)0x65,  /* [3746] */
    (xdc_Char)0x69,  /* [3747] */
    (xdc_Char)0x76,  /* [3748] */
    (xdc_Char)0x65,  /* [3749] */
    (xdc_Char)0x64,  /* [3750] */
    (xdc_Char)0x20,  /* [3751] */
    (xdc_Char)0x69,  /* [3752] */
    (xdc_Char)0x6e,  /* [3753] */
    (xdc_Char)0x76,  /* [3754] */
    (xdc_Char)0x61,  /* [3755] */
    (xdc_Char)0x6c,  /* [3756] */
    (xdc_Char)0x69,  /* [3757] */
    (xdc_Char)0x64,  /* [3758] */
    (xdc_Char)0x20,  /* [3759] */
    (xdc_Char)0x63,  /* [3760] */
    (xdc_Char)0x6f,  /* [3761] */
    (xdc_Char)0x6d,  /* [3762] */
    (xdc_Char)0x6d,  /* [3763] */
    (xdc_Char)0x61,  /* [3764] */
    (xdc_Char)0x6e,  /* [3765] */
    (xdc_Char)0x64,  /* [3766] */
    (xdc_Char)0x2c,  /* [3767] */
    (xdc_Char)0x20,  /* [3768] */
    (xdc_Char)0x69,  /* [3769] */
    (xdc_Char)0x64,  /* [3770] */
    (xdc_Char)0x3a,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x25,  /* [3773] */
    (xdc_Char)0x64,  /* [3774] */
    (xdc_Char)0x2e,  /* [3775] */
    (xdc_Char)0x0,  /* [3776] */
    (xdc_Char)0x45,  /* [3777] */
    (xdc_Char)0x5f,  /* [3778] */
    (xdc_Char)0x73,  /* [3779] */
    (xdc_Char)0x74,  /* [3780] */
    (xdc_Char)0x61,  /* [3781] */
    (xdc_Char)0x63,  /* [3782] */
    (xdc_Char)0x6b,  /* [3783] */
    (xdc_Char)0x4f,  /* [3784] */
    (xdc_Char)0x76,  /* [3785] */
    (xdc_Char)0x65,  /* [3786] */
    (xdc_Char)0x72,  /* [3787] */
    (xdc_Char)0x66,  /* [3788] */
    (xdc_Char)0x6c,  /* [3789] */
    (xdc_Char)0x6f,  /* [3790] */
    (xdc_Char)0x77,  /* [3791] */
    (xdc_Char)0x3a,  /* [3792] */
    (xdc_Char)0x20,  /* [3793] */
    (xdc_Char)0x54,  /* [3794] */
    (xdc_Char)0x61,  /* [3795] */
    (xdc_Char)0x73,  /* [3796] */
    (xdc_Char)0x6b,  /* [3797] */
    (xdc_Char)0x20,  /* [3798] */
    (xdc_Char)0x30,  /* [3799] */
    (xdc_Char)0x78,  /* [3800] */
    (xdc_Char)0x25,  /* [3801] */
    (xdc_Char)0x78,  /* [3802] */
    (xdc_Char)0x20,  /* [3803] */
    (xdc_Char)0x73,  /* [3804] */
    (xdc_Char)0x74,  /* [3805] */
    (xdc_Char)0x61,  /* [3806] */
    (xdc_Char)0x63,  /* [3807] */
    (xdc_Char)0x6b,  /* [3808] */
    (xdc_Char)0x20,  /* [3809] */
    (xdc_Char)0x6f,  /* [3810] */
    (xdc_Char)0x76,  /* [3811] */
    (xdc_Char)0x65,  /* [3812] */
    (xdc_Char)0x72,  /* [3813] */
    (xdc_Char)0x66,  /* [3814] */
    (xdc_Char)0x6c,  /* [3815] */
    (xdc_Char)0x6f,  /* [3816] */
    (xdc_Char)0x77,  /* [3817] */
    (xdc_Char)0x2e,  /* [3818] */
    (xdc_Char)0x0,  /* [3819] */
    (xdc_Char)0x45,  /* [3820] */
    (xdc_Char)0x5f,  /* [3821] */
    (xdc_Char)0x73,  /* [3822] */
    (xdc_Char)0x70,  /* [3823] */
    (xdc_Char)0x4f,  /* [3824] */
    (xdc_Char)0x75,  /* [3825] */
    (xdc_Char)0x74,  /* [3826] */
    (xdc_Char)0x4f,  /* [3827] */
    (xdc_Char)0x66,  /* [3828] */
    (xdc_Char)0x42,  /* [3829] */
    (xdc_Char)0x6f,  /* [3830] */
    (xdc_Char)0x75,  /* [3831] */
    (xdc_Char)0x6e,  /* [3832] */
    (xdc_Char)0x64,  /* [3833] */
    (xdc_Char)0x73,  /* [3834] */
    (xdc_Char)0x3a,  /* [3835] */
    (xdc_Char)0x20,  /* [3836] */
    (xdc_Char)0x54,  /* [3837] */
    (xdc_Char)0x61,  /* [3838] */
    (xdc_Char)0x73,  /* [3839] */
    (xdc_Char)0x6b,  /* [3840] */
    (xdc_Char)0x20,  /* [3841] */
    (xdc_Char)0x30,  /* [3842] */
    (xdc_Char)0x78,  /* [3843] */
    (xdc_Char)0x25,  /* [3844] */
    (xdc_Char)0x78,  /* [3845] */
    (xdc_Char)0x20,  /* [3846] */
    (xdc_Char)0x73,  /* [3847] */
    (xdc_Char)0x74,  /* [3848] */
    (xdc_Char)0x61,  /* [3849] */
    (xdc_Char)0x63,  /* [3850] */
    (xdc_Char)0x6b,  /* [3851] */
    (xdc_Char)0x20,  /* [3852] */
    (xdc_Char)0x65,  /* [3853] */
    (xdc_Char)0x72,  /* [3854] */
    (xdc_Char)0x72,  /* [3855] */
    (xdc_Char)0x6f,  /* [3856] */
    (xdc_Char)0x72,  /* [3857] */
    (xdc_Char)0x2c,  /* [3858] */
    (xdc_Char)0x20,  /* [3859] */
    (xdc_Char)0x53,  /* [3860] */
    (xdc_Char)0x50,  /* [3861] */
    (xdc_Char)0x20,  /* [3862] */
    (xdc_Char)0x3d,  /* [3863] */
    (xdc_Char)0x20,  /* [3864] */
    (xdc_Char)0x30,  /* [3865] */
    (xdc_Char)0x78,  /* [3866] */
    (xdc_Char)0x25,  /* [3867] */
    (xdc_Char)0x78,  /* [3868] */
    (xdc_Char)0x2e,  /* [3869] */
    (xdc_Char)0x0,  /* [3870] */
    (xdc_Char)0x45,  /* [3871] */
    (xdc_Char)0x5f,  /* [3872] */
    (xdc_Char)0x64,  /* [3873] */
    (xdc_Char)0x65,  /* [3874] */
    (xdc_Char)0x6c,  /* [3875] */
    (xdc_Char)0x65,  /* [3876] */
    (xdc_Char)0x74,  /* [3877] */
    (xdc_Char)0x65,  /* [3878] */
    (xdc_Char)0x4e,  /* [3879] */
    (xdc_Char)0x6f,  /* [3880] */
    (xdc_Char)0x74,  /* [3881] */
    (xdc_Char)0x41,  /* [3882] */
    (xdc_Char)0x6c,  /* [3883] */
    (xdc_Char)0x6c,  /* [3884] */
    (xdc_Char)0x6f,  /* [3885] */
    (xdc_Char)0x77,  /* [3886] */
    (xdc_Char)0x65,  /* [3887] */
    (xdc_Char)0x64,  /* [3888] */
    (xdc_Char)0x3a,  /* [3889] */
    (xdc_Char)0x20,  /* [3890] */
    (xdc_Char)0x54,  /* [3891] */
    (xdc_Char)0x61,  /* [3892] */
    (xdc_Char)0x73,  /* [3893] */
    (xdc_Char)0x6b,  /* [3894] */
    (xdc_Char)0x20,  /* [3895] */
    (xdc_Char)0x30,  /* [3896] */
    (xdc_Char)0x78,  /* [3897] */
    (xdc_Char)0x25,  /* [3898] */
    (xdc_Char)0x78,  /* [3899] */
    (xdc_Char)0x2e,  /* [3900] */
    (xdc_Char)0x0,  /* [3901] */
    (xdc_Char)0x45,  /* [3902] */
    (xdc_Char)0x5f,  /* [3903] */
    (xdc_Char)0x6d,  /* [3904] */
    (xdc_Char)0x6f,  /* [3905] */
    (xdc_Char)0x64,  /* [3906] */
    (xdc_Char)0x75,  /* [3907] */
    (xdc_Char)0x6c,  /* [3908] */
    (xdc_Char)0x65,  /* [3909] */
    (xdc_Char)0x53,  /* [3910] */
    (xdc_Char)0x74,  /* [3911] */
    (xdc_Char)0x61,  /* [3912] */
    (xdc_Char)0x74,  /* [3913] */
    (xdc_Char)0x65,  /* [3914] */
    (xdc_Char)0x43,  /* [3915] */
    (xdc_Char)0x68,  /* [3916] */
    (xdc_Char)0x65,  /* [3917] */
    (xdc_Char)0x63,  /* [3918] */
    (xdc_Char)0x6b,  /* [3919] */
    (xdc_Char)0x46,  /* [3920] */
    (xdc_Char)0x61,  /* [3921] */
    (xdc_Char)0x69,  /* [3922] */
    (xdc_Char)0x6c,  /* [3923] */
    (xdc_Char)0x65,  /* [3924] */
    (xdc_Char)0x64,  /* [3925] */
    (xdc_Char)0x3a,  /* [3926] */
    (xdc_Char)0x20,  /* [3927] */
    (xdc_Char)0x54,  /* [3928] */
    (xdc_Char)0x61,  /* [3929] */
    (xdc_Char)0x73,  /* [3930] */
    (xdc_Char)0x6b,  /* [3931] */
    (xdc_Char)0x20,  /* [3932] */
    (xdc_Char)0x6d,  /* [3933] */
    (xdc_Char)0x6f,  /* [3934] */
    (xdc_Char)0x64,  /* [3935] */
    (xdc_Char)0x75,  /* [3936] */
    (xdc_Char)0x6c,  /* [3937] */
    (xdc_Char)0x65,  /* [3938] */
    (xdc_Char)0x20,  /* [3939] */
    (xdc_Char)0x73,  /* [3940] */
    (xdc_Char)0x74,  /* [3941] */
    (xdc_Char)0x61,  /* [3942] */
    (xdc_Char)0x74,  /* [3943] */
    (xdc_Char)0x65,  /* [3944] */
    (xdc_Char)0x20,  /* [3945] */
    (xdc_Char)0x64,  /* [3946] */
    (xdc_Char)0x61,  /* [3947] */
    (xdc_Char)0x74,  /* [3948] */
    (xdc_Char)0x61,  /* [3949] */
    (xdc_Char)0x20,  /* [3950] */
    (xdc_Char)0x69,  /* [3951] */
    (xdc_Char)0x6e,  /* [3952] */
    (xdc_Char)0x74,  /* [3953] */
    (xdc_Char)0x65,  /* [3954] */
    (xdc_Char)0x67,  /* [3955] */
    (xdc_Char)0x72,  /* [3956] */
    (xdc_Char)0x69,  /* [3957] */
    (xdc_Char)0x74,  /* [3958] */
    (xdc_Char)0x79,  /* [3959] */
    (xdc_Char)0x20,  /* [3960] */
    (xdc_Char)0x63,  /* [3961] */
    (xdc_Char)0x68,  /* [3962] */
    (xdc_Char)0x65,  /* [3963] */
    (xdc_Char)0x63,  /* [3964] */
    (xdc_Char)0x6b,  /* [3965] */
    (xdc_Char)0x20,  /* [3966] */
    (xdc_Char)0x66,  /* [3967] */
    (xdc_Char)0x61,  /* [3968] */
    (xdc_Char)0x69,  /* [3969] */
    (xdc_Char)0x6c,  /* [3970] */
    (xdc_Char)0x65,  /* [3971] */
    (xdc_Char)0x64,  /* [3972] */
    (xdc_Char)0x2e,  /* [3973] */
    (xdc_Char)0x0,  /* [3974] */
    (xdc_Char)0x45,  /* [3975] */
    (xdc_Char)0x5f,  /* [3976] */
    (xdc_Char)0x6f,  /* [3977] */
    (xdc_Char)0x62,  /* [3978] */
    (xdc_Char)0x6a,  /* [3979] */
    (xdc_Char)0x65,  /* [3980] */
    (xdc_Char)0x63,  /* [3981] */
    (xdc_Char)0x74,  /* [3982] */
    (xdc_Char)0x43,  /* [3983] */
    (xdc_Char)0x68,  /* [3984] */
    (xdc_Char)0x65,  /* [3985] */
    (xdc_Char)0x63,  /* [3986] */
    (xdc_Char)0x6b,  /* [3987] */
    (xdc_Char)0x46,  /* [3988] */
    (xdc_Char)0x61,  /* [3989] */
    (xdc_Char)0x69,  /* [3990] */
    (xdc_Char)0x6c,  /* [3991] */
    (xdc_Char)0x65,  /* [3992] */
    (xdc_Char)0x64,  /* [3993] */
    (xdc_Char)0x3a,  /* [3994] */
    (xdc_Char)0x20,  /* [3995] */
    (xdc_Char)0x54,  /* [3996] */
    (xdc_Char)0x61,  /* [3997] */
    (xdc_Char)0x73,  /* [3998] */
    (xdc_Char)0x6b,  /* [3999] */
    (xdc_Char)0x20,  /* [4000] */
    (xdc_Char)0x30,  /* [4001] */
    (xdc_Char)0x78,  /* [4002] */
    (xdc_Char)0x25,  /* [4003] */
    (xdc_Char)0x78,  /* [4004] */
    (xdc_Char)0x20,  /* [4005] */
    (xdc_Char)0x6f,  /* [4006] */
    (xdc_Char)0x62,  /* [4007] */
    (xdc_Char)0x6a,  /* [4008] */
    (xdc_Char)0x65,  /* [4009] */
    (xdc_Char)0x63,  /* [4010] */
    (xdc_Char)0x74,  /* [4011] */
    (xdc_Char)0x20,  /* [4012] */
    (xdc_Char)0x64,  /* [4013] */
    (xdc_Char)0x61,  /* [4014] */
    (xdc_Char)0x74,  /* [4015] */
    (xdc_Char)0x61,  /* [4016] */
    (xdc_Char)0x20,  /* [4017] */
    (xdc_Char)0x69,  /* [4018] */
    (xdc_Char)0x6e,  /* [4019] */
    (xdc_Char)0x74,  /* [4020] */
    (xdc_Char)0x65,  /* [4021] */
    (xdc_Char)0x67,  /* [4022] */
    (xdc_Char)0x72,  /* [4023] */
    (xdc_Char)0x69,  /* [4024] */
    (xdc_Char)0x74,  /* [4025] */
    (xdc_Char)0x79,  /* [4026] */
    (xdc_Char)0x20,  /* [4027] */
    (xdc_Char)0x63,  /* [4028] */
    (xdc_Char)0x68,  /* [4029] */
    (xdc_Char)0x65,  /* [4030] */
    (xdc_Char)0x63,  /* [4031] */
    (xdc_Char)0x6b,  /* [4032] */
    (xdc_Char)0x20,  /* [4033] */
    (xdc_Char)0x66,  /* [4034] */
    (xdc_Char)0x61,  /* [4035] */
    (xdc_Char)0x69,  /* [4036] */
    (xdc_Char)0x6c,  /* [4037] */
    (xdc_Char)0x65,  /* [4038] */
    (xdc_Char)0x64,  /* [4039] */
    (xdc_Char)0x2e,  /* [4040] */
    (xdc_Char)0x0,  /* [4041] */
    (xdc_Char)0x45,  /* [4042] */
    (xdc_Char)0x5f,  /* [4043] */
    (xdc_Char)0x73,  /* [4044] */
    (xdc_Char)0x74,  /* [4045] */
    (xdc_Char)0x61,  /* [4046] */
    (xdc_Char)0x63,  /* [4047] */
    (xdc_Char)0x6b,  /* [4048] */
    (xdc_Char)0x4f,  /* [4049] */
    (xdc_Char)0x76,  /* [4050] */
    (xdc_Char)0x65,  /* [4051] */
    (xdc_Char)0x72,  /* [4052] */
    (xdc_Char)0x66,  /* [4053] */
    (xdc_Char)0x6c,  /* [4054] */
    (xdc_Char)0x6f,  /* [4055] */
    (xdc_Char)0x77,  /* [4056] */
    (xdc_Char)0x3a,  /* [4057] */
    (xdc_Char)0x20,  /* [4058] */
    (xdc_Char)0x49,  /* [4059] */
    (xdc_Char)0x53,  /* [4060] */
    (xdc_Char)0x52,  /* [4061] */
    (xdc_Char)0x20,  /* [4062] */
    (xdc_Char)0x73,  /* [4063] */
    (xdc_Char)0x74,  /* [4064] */
    (xdc_Char)0x61,  /* [4065] */
    (xdc_Char)0x63,  /* [4066] */
    (xdc_Char)0x6b,  /* [4067] */
    (xdc_Char)0x20,  /* [4068] */
    (xdc_Char)0x6f,  /* [4069] */
    (xdc_Char)0x76,  /* [4070] */
    (xdc_Char)0x65,  /* [4071] */
    (xdc_Char)0x72,  /* [4072] */
    (xdc_Char)0x66,  /* [4073] */
    (xdc_Char)0x6c,  /* [4074] */
    (xdc_Char)0x6f,  /* [4075] */
    (xdc_Char)0x77,  /* [4076] */
    (xdc_Char)0x2e,  /* [4077] */
    (xdc_Char)0x0,  /* [4078] */
    (xdc_Char)0x45,  /* [4079] */
    (xdc_Char)0x5f,  /* [4080] */
    (xdc_Char)0x70,  /* [4081] */
    (xdc_Char)0x72,  /* [4082] */
    (xdc_Char)0x69,  /* [4083] */
    (xdc_Char)0x6f,  /* [4084] */
    (xdc_Char)0x72,  /* [4085] */
    (xdc_Char)0x69,  /* [4086] */
    (xdc_Char)0x74,  /* [4087] */
    (xdc_Char)0x79,  /* [4088] */
    (xdc_Char)0x3a,  /* [4089] */
    (xdc_Char)0x20,  /* [4090] */
    (xdc_Char)0x54,  /* [4091] */
    (xdc_Char)0x68,  /* [4092] */
    (xdc_Char)0x72,  /* [4093] */
    (xdc_Char)0x65,  /* [4094] */
    (xdc_Char)0x61,  /* [4095] */
    (xdc_Char)0x64,  /* [4096] */
    (xdc_Char)0x20,  /* [4097] */
    (xdc_Char)0x70,  /* [4098] */
    (xdc_Char)0x72,  /* [4099] */
    (xdc_Char)0x69,  /* [4100] */
    (xdc_Char)0x6f,  /* [4101] */
    (xdc_Char)0x72,  /* [4102] */
    (xdc_Char)0x69,  /* [4103] */
    (xdc_Char)0x74,  /* [4104] */
    (xdc_Char)0x79,  /* [4105] */
    (xdc_Char)0x20,  /* [4106] */
    (xdc_Char)0x69,  /* [4107] */
    (xdc_Char)0x73,  /* [4108] */
    (xdc_Char)0x20,  /* [4109] */
    (xdc_Char)0x69,  /* [4110] */
    (xdc_Char)0x6e,  /* [4111] */
    (xdc_Char)0x76,  /* [4112] */
    (xdc_Char)0x61,  /* [4113] */
    (xdc_Char)0x6c,  /* [4114] */
    (xdc_Char)0x69,  /* [4115] */
    (xdc_Char)0x64,  /* [4116] */
    (xdc_Char)0x20,  /* [4117] */
    (xdc_Char)0x25,  /* [4118] */
    (xdc_Char)0x64,  /* [4119] */
    (xdc_Char)0x0,  /* [4120] */
    (xdc_Char)0x45,  /* [4121] */
    (xdc_Char)0x5f,  /* [4122] */
    (xdc_Char)0x62,  /* [4123] */
    (xdc_Char)0x61,  /* [4124] */
    (xdc_Char)0x64,  /* [4125] */
    (xdc_Char)0x49,  /* [4126] */
    (xdc_Char)0x6e,  /* [4127] */
    (xdc_Char)0x74,  /* [4128] */
    (xdc_Char)0x4e,  /* [4129] */
    (xdc_Char)0x75,  /* [4130] */
    (xdc_Char)0x6d,  /* [4131] */
    (xdc_Char)0x2c,  /* [4132] */
    (xdc_Char)0x20,  /* [4133] */
    (xdc_Char)0x69,  /* [4134] */
    (xdc_Char)0x6e,  /* [4135] */
    (xdc_Char)0x74,  /* [4136] */
    (xdc_Char)0x6e,  /* [4137] */
    (xdc_Char)0x75,  /* [4138] */
    (xdc_Char)0x6d,  /* [4139] */
    (xdc_Char)0x3a,  /* [4140] */
    (xdc_Char)0x20,  /* [4141] */
    (xdc_Char)0x25,  /* [4142] */
    (xdc_Char)0x64,  /* [4143] */
    (xdc_Char)0x20,  /* [4144] */
    (xdc_Char)0x69,  /* [4145] */
    (xdc_Char)0x73,  /* [4146] */
    (xdc_Char)0x20,  /* [4147] */
    (xdc_Char)0x6f,  /* [4148] */
    (xdc_Char)0x75,  /* [4149] */
    (xdc_Char)0x74,  /* [4150] */
    (xdc_Char)0x20,  /* [4151] */
    (xdc_Char)0x6f,  /* [4152] */
    (xdc_Char)0x66,  /* [4153] */
    (xdc_Char)0x20,  /* [4154] */
    (xdc_Char)0x72,  /* [4155] */
    (xdc_Char)0x61,  /* [4156] */
    (xdc_Char)0x6e,  /* [4157] */
    (xdc_Char)0x67,  /* [4158] */
    (xdc_Char)0x65,  /* [4159] */
    (xdc_Char)0x0,  /* [4160] */
    (xdc_Char)0x45,  /* [4161] */
    (xdc_Char)0x5f,  /* [4162] */
    (xdc_Char)0x61,  /* [4163] */
    (xdc_Char)0x6c,  /* [4164] */
    (xdc_Char)0x72,  /* [4165] */
    (xdc_Char)0x65,  /* [4166] */
    (xdc_Char)0x61,  /* [4167] */
    (xdc_Char)0x64,  /* [4168] */
    (xdc_Char)0x79,  /* [4169] */
    (xdc_Char)0x44,  /* [4170] */
    (xdc_Char)0x65,  /* [4171] */
    (xdc_Char)0x66,  /* [4172] */
    (xdc_Char)0x69,  /* [4173] */
    (xdc_Char)0x6e,  /* [4174] */
    (xdc_Char)0x65,  /* [4175] */
    (xdc_Char)0x64,  /* [4176] */
    (xdc_Char)0x3a,  /* [4177] */
    (xdc_Char)0x20,  /* [4178] */
    (xdc_Char)0x48,  /* [4179] */
    (xdc_Char)0x77,  /* [4180] */
    (xdc_Char)0x69,  /* [4181] */
    (xdc_Char)0x20,  /* [4182] */
    (xdc_Char)0x61,  /* [4183] */
    (xdc_Char)0x6c,  /* [4184] */
    (xdc_Char)0x72,  /* [4185] */
    (xdc_Char)0x65,  /* [4186] */
    (xdc_Char)0x61,  /* [4187] */
    (xdc_Char)0x64,  /* [4188] */
    (xdc_Char)0x79,  /* [4189] */
    (xdc_Char)0x20,  /* [4190] */
    (xdc_Char)0x64,  /* [4191] */
    (xdc_Char)0x65,  /* [4192] */
    (xdc_Char)0x66,  /* [4193] */
    (xdc_Char)0x69,  /* [4194] */
    (xdc_Char)0x6e,  /* [4195] */
    (xdc_Char)0x65,  /* [4196] */
    (xdc_Char)0x64,  /* [4197] */
    (xdc_Char)0x3a,  /* [4198] */
    (xdc_Char)0x20,  /* [4199] */
    (xdc_Char)0x69,  /* [4200] */
    (xdc_Char)0x6e,  /* [4201] */
    (xdc_Char)0x74,  /* [4202] */
    (xdc_Char)0x72,  /* [4203] */
    (xdc_Char)0x23,  /* [4204] */
    (xdc_Char)0x20,  /* [4205] */
    (xdc_Char)0x25,  /* [4206] */
    (xdc_Char)0x64,  /* [4207] */
    (xdc_Char)0x0,  /* [4208] */
    (xdc_Char)0x45,  /* [4209] */
    (xdc_Char)0x5f,  /* [4210] */
    (xdc_Char)0x68,  /* [4211] */
    (xdc_Char)0x77,  /* [4212] */
    (xdc_Char)0x69,  /* [4213] */
    (xdc_Char)0x4c,  /* [4214] */
    (xdc_Char)0x69,  /* [4215] */
    (xdc_Char)0x6d,  /* [4216] */
    (xdc_Char)0x69,  /* [4217] */
    (xdc_Char)0x74,  /* [4218] */
    (xdc_Char)0x45,  /* [4219] */
    (xdc_Char)0x78,  /* [4220] */
    (xdc_Char)0x63,  /* [4221] */
    (xdc_Char)0x65,  /* [4222] */
    (xdc_Char)0x65,  /* [4223] */
    (xdc_Char)0x64,  /* [4224] */
    (xdc_Char)0x65,  /* [4225] */
    (xdc_Char)0x64,  /* [4226] */
    (xdc_Char)0x3a,  /* [4227] */
    (xdc_Char)0x20,  /* [4228] */
    (xdc_Char)0x54,  /* [4229] */
    (xdc_Char)0x6f,  /* [4230] */
    (xdc_Char)0x6f,  /* [4231] */
    (xdc_Char)0x20,  /* [4232] */
    (xdc_Char)0x6d,  /* [4233] */
    (xdc_Char)0x61,  /* [4234] */
    (xdc_Char)0x6e,  /* [4235] */
    (xdc_Char)0x79,  /* [4236] */
    (xdc_Char)0x20,  /* [4237] */
    (xdc_Char)0x69,  /* [4238] */
    (xdc_Char)0x6e,  /* [4239] */
    (xdc_Char)0x74,  /* [4240] */
    (xdc_Char)0x65,  /* [4241] */
    (xdc_Char)0x72,  /* [4242] */
    (xdc_Char)0x72,  /* [4243] */
    (xdc_Char)0x75,  /* [4244] */
    (xdc_Char)0x70,  /* [4245] */
    (xdc_Char)0x74,  /* [4246] */
    (xdc_Char)0x73,  /* [4247] */
    (xdc_Char)0x20,  /* [4248] */
    (xdc_Char)0x64,  /* [4249] */
    (xdc_Char)0x65,  /* [4250] */
    (xdc_Char)0x66,  /* [4251] */
    (xdc_Char)0x69,  /* [4252] */
    (xdc_Char)0x6e,  /* [4253] */
    (xdc_Char)0x65,  /* [4254] */
    (xdc_Char)0x64,  /* [4255] */
    (xdc_Char)0x0,  /* [4256] */
    (xdc_Char)0x45,  /* [4257] */
    (xdc_Char)0x5f,  /* [4258] */
    (xdc_Char)0x65,  /* [4259] */
    (xdc_Char)0x78,  /* [4260] */
    (xdc_Char)0x63,  /* [4261] */
    (xdc_Char)0x65,  /* [4262] */
    (xdc_Char)0x70,  /* [4263] */
    (xdc_Char)0x74,  /* [4264] */
    (xdc_Char)0x69,  /* [4265] */
    (xdc_Char)0x6f,  /* [4266] */
    (xdc_Char)0x6e,  /* [4267] */
    (xdc_Char)0x3a,  /* [4268] */
    (xdc_Char)0x20,  /* [4269] */
    (xdc_Char)0x69,  /* [4270] */
    (xdc_Char)0x64,  /* [4271] */
    (xdc_Char)0x20,  /* [4272] */
    (xdc_Char)0x3d,  /* [4273] */
    (xdc_Char)0x20,  /* [4274] */
    (xdc_Char)0x25,  /* [4275] */
    (xdc_Char)0x64,  /* [4276] */
    (xdc_Char)0x2c,  /* [4277] */
    (xdc_Char)0x20,  /* [4278] */
    (xdc_Char)0x70,  /* [4279] */
    (xdc_Char)0x63,  /* [4280] */
    (xdc_Char)0x20,  /* [4281] */
    (xdc_Char)0x3d,  /* [4282] */
    (xdc_Char)0x20,  /* [4283] */
    (xdc_Char)0x25,  /* [4284] */
    (xdc_Char)0x30,  /* [4285] */
    (xdc_Char)0x38,  /* [4286] */
    (xdc_Char)0x78,  /* [4287] */
    (xdc_Char)0x2e,  /* [4288] */
    (xdc_Char)0xa,  /* [4289] */
    (xdc_Char)0x54,  /* [4290] */
    (xdc_Char)0x6f,  /* [4291] */
    (xdc_Char)0x20,  /* [4292] */
    (xdc_Char)0x73,  /* [4293] */
    (xdc_Char)0x65,  /* [4294] */
    (xdc_Char)0x65,  /* [4295] */
    (xdc_Char)0x20,  /* [4296] */
    (xdc_Char)0x6d,  /* [4297] */
    (xdc_Char)0x6f,  /* [4298] */
    (xdc_Char)0x72,  /* [4299] */
    (xdc_Char)0x65,  /* [4300] */
    (xdc_Char)0x20,  /* [4301] */
    (xdc_Char)0x65,  /* [4302] */
    (xdc_Char)0x78,  /* [4303] */
    (xdc_Char)0x63,  /* [4304] */
    (xdc_Char)0x65,  /* [4305] */
    (xdc_Char)0x70,  /* [4306] */
    (xdc_Char)0x74,  /* [4307] */
    (xdc_Char)0x69,  /* [4308] */
    (xdc_Char)0x6f,  /* [4309] */
    (xdc_Char)0x6e,  /* [4310] */
    (xdc_Char)0x20,  /* [4311] */
    (xdc_Char)0x64,  /* [4312] */
    (xdc_Char)0x65,  /* [4313] */
    (xdc_Char)0x74,  /* [4314] */
    (xdc_Char)0x61,  /* [4315] */
    (xdc_Char)0x69,  /* [4316] */
    (xdc_Char)0x6c,  /* [4317] */
    (xdc_Char)0x2c,  /* [4318] */
    (xdc_Char)0x20,  /* [4319] */
    (xdc_Char)0x73,  /* [4320] */
    (xdc_Char)0x65,  /* [4321] */
    (xdc_Char)0x74,  /* [4322] */
    (xdc_Char)0x20,  /* [4323] */
    (xdc_Char)0x74,  /* [4324] */
    (xdc_Char)0x69,  /* [4325] */
    (xdc_Char)0x2e,  /* [4326] */
    (xdc_Char)0x73,  /* [4327] */
    (xdc_Char)0x79,  /* [4328] */
    (xdc_Char)0x73,  /* [4329] */
    (xdc_Char)0x62,  /* [4330] */
    (xdc_Char)0x69,  /* [4331] */
    (xdc_Char)0x6f,  /* [4332] */
    (xdc_Char)0x73,  /* [4333] */
    (xdc_Char)0x2e,  /* [4334] */
    (xdc_Char)0x66,  /* [4335] */
    (xdc_Char)0x61,  /* [4336] */
    (xdc_Char)0x6d,  /* [4337] */
    (xdc_Char)0x69,  /* [4338] */
    (xdc_Char)0x6c,  /* [4339] */
    (xdc_Char)0x79,  /* [4340] */
    (xdc_Char)0x2e,  /* [4341] */
    (xdc_Char)0x61,  /* [4342] */
    (xdc_Char)0x72,  /* [4343] */
    (xdc_Char)0x6d,  /* [4344] */
    (xdc_Char)0x2e,  /* [4345] */
    (xdc_Char)0x6d,  /* [4346] */
    (xdc_Char)0x33,  /* [4347] */
    (xdc_Char)0x2e,  /* [4348] */
    (xdc_Char)0x48,  /* [4349] */
    (xdc_Char)0x77,  /* [4350] */
    (xdc_Char)0x69,  /* [4351] */
    (xdc_Char)0x2e,  /* [4352] */
    (xdc_Char)0x65,  /* [4353] */
    (xdc_Char)0x6e,  /* [4354] */
    (xdc_Char)0x61,  /* [4355] */
    (xdc_Char)0x62,  /* [4356] */
    (xdc_Char)0x6c,  /* [4357] */
    (xdc_Char)0x65,  /* [4358] */
    (xdc_Char)0x45,  /* [4359] */
    (xdc_Char)0x78,  /* [4360] */
    (xdc_Char)0x63,  /* [4361] */
    (xdc_Char)0x65,  /* [4362] */
    (xdc_Char)0x70,  /* [4363] */
    (xdc_Char)0x74,  /* [4364] */
    (xdc_Char)0x69,  /* [4365] */
    (xdc_Char)0x6f,  /* [4366] */
    (xdc_Char)0x6e,  /* [4367] */
    (xdc_Char)0x20,  /* [4368] */
    (xdc_Char)0x3d,  /* [4369] */
    (xdc_Char)0x20,  /* [4370] */
    (xdc_Char)0x74,  /* [4371] */
    (xdc_Char)0x72,  /* [4372] */
    (xdc_Char)0x75,  /* [4373] */
    (xdc_Char)0x65,  /* [4374] */
    (xdc_Char)0x20,  /* [4375] */
    (xdc_Char)0x6f,  /* [4376] */
    (xdc_Char)0x72,  /* [4377] */
    (xdc_Char)0x2c,  /* [4378] */
    (xdc_Char)0xa,  /* [4379] */
    (xdc_Char)0x65,  /* [4380] */
    (xdc_Char)0x78,  /* [4381] */
    (xdc_Char)0x61,  /* [4382] */
    (xdc_Char)0x6d,  /* [4383] */
    (xdc_Char)0x69,  /* [4384] */
    (xdc_Char)0x6e,  /* [4385] */
    (xdc_Char)0x65,  /* [4386] */
    (xdc_Char)0x20,  /* [4387] */
    (xdc_Char)0x74,  /* [4388] */
    (xdc_Char)0x68,  /* [4389] */
    (xdc_Char)0x65,  /* [4390] */
    (xdc_Char)0x20,  /* [4391] */
    (xdc_Char)0x45,  /* [4392] */
    (xdc_Char)0x78,  /* [4393] */
    (xdc_Char)0x63,  /* [4394] */
    (xdc_Char)0x65,  /* [4395] */
    (xdc_Char)0x70,  /* [4396] */
    (xdc_Char)0x74,  /* [4397] */
    (xdc_Char)0x69,  /* [4398] */
    (xdc_Char)0x6f,  /* [4399] */
    (xdc_Char)0x6e,  /* [4400] */
    (xdc_Char)0x20,  /* [4401] */
    (xdc_Char)0x76,  /* [4402] */
    (xdc_Char)0x69,  /* [4403] */
    (xdc_Char)0x65,  /* [4404] */
    (xdc_Char)0x77,  /* [4405] */
    (xdc_Char)0x20,  /* [4406] */
    (xdc_Char)0x66,  /* [4407] */
    (xdc_Char)0x6f,  /* [4408] */
    (xdc_Char)0x72,  /* [4409] */
    (xdc_Char)0x20,  /* [4410] */
    (xdc_Char)0x74,  /* [4411] */
    (xdc_Char)0x68,  /* [4412] */
    (xdc_Char)0x65,  /* [4413] */
    (xdc_Char)0x20,  /* [4414] */
    (xdc_Char)0x74,  /* [4415] */
    (xdc_Char)0x69,  /* [4416] */
    (xdc_Char)0x2e,  /* [4417] */
    (xdc_Char)0x73,  /* [4418] */
    (xdc_Char)0x79,  /* [4419] */
    (xdc_Char)0x73,  /* [4420] */
    (xdc_Char)0x62,  /* [4421] */
    (xdc_Char)0x69,  /* [4422] */
    (xdc_Char)0x6f,  /* [4423] */
    (xdc_Char)0x73,  /* [4424] */
    (xdc_Char)0x2e,  /* [4425] */
    (xdc_Char)0x66,  /* [4426] */
    (xdc_Char)0x61,  /* [4427] */
    (xdc_Char)0x6d,  /* [4428] */
    (xdc_Char)0x69,  /* [4429] */
    (xdc_Char)0x6c,  /* [4430] */
    (xdc_Char)0x79,  /* [4431] */
    (xdc_Char)0x2e,  /* [4432] */
    (xdc_Char)0x61,  /* [4433] */
    (xdc_Char)0x72,  /* [4434] */
    (xdc_Char)0x6d,  /* [4435] */
    (xdc_Char)0x2e,  /* [4436] */
    (xdc_Char)0x6d,  /* [4437] */
    (xdc_Char)0x33,  /* [4438] */
    (xdc_Char)0x2e,  /* [4439] */
    (xdc_Char)0x48,  /* [4440] */
    (xdc_Char)0x77,  /* [4441] */
    (xdc_Char)0x69,  /* [4442] */
    (xdc_Char)0x20,  /* [4443] */
    (xdc_Char)0x6d,  /* [4444] */
    (xdc_Char)0x6f,  /* [4445] */
    (xdc_Char)0x64,  /* [4446] */
    (xdc_Char)0x75,  /* [4447] */
    (xdc_Char)0x6c,  /* [4448] */
    (xdc_Char)0x65,  /* [4449] */
    (xdc_Char)0x20,  /* [4450] */
    (xdc_Char)0x75,  /* [4451] */
    (xdc_Char)0x73,  /* [4452] */
    (xdc_Char)0x69,  /* [4453] */
    (xdc_Char)0x6e,  /* [4454] */
    (xdc_Char)0x67,  /* [4455] */
    (xdc_Char)0x20,  /* [4456] */
    (xdc_Char)0x52,  /* [4457] */
    (xdc_Char)0x4f,  /* [4458] */
    (xdc_Char)0x56,  /* [4459] */
    (xdc_Char)0x2e,  /* [4460] */
    (xdc_Char)0x0,  /* [4461] */
    (xdc_Char)0x45,  /* [4462] */
    (xdc_Char)0x5f,  /* [4463] */
    (xdc_Char)0x6e,  /* [4464] */
    (xdc_Char)0x6f,  /* [4465] */
    (xdc_Char)0x49,  /* [4466] */
    (xdc_Char)0x73,  /* [4467] */
    (xdc_Char)0x72,  /* [4468] */
    (xdc_Char)0x3a,  /* [4469] */
    (xdc_Char)0x20,  /* [4470] */
    (xdc_Char)0x69,  /* [4471] */
    (xdc_Char)0x64,  /* [4472] */
    (xdc_Char)0x20,  /* [4473] */
    (xdc_Char)0x3d,  /* [4474] */
    (xdc_Char)0x20,  /* [4475] */
    (xdc_Char)0x25,  /* [4476] */
    (xdc_Char)0x64,  /* [4477] */
    (xdc_Char)0x2c,  /* [4478] */
    (xdc_Char)0x20,  /* [4479] */
    (xdc_Char)0x70,  /* [4480] */
    (xdc_Char)0x63,  /* [4481] */
    (xdc_Char)0x20,  /* [4482] */
    (xdc_Char)0x3d,  /* [4483] */
    (xdc_Char)0x20,  /* [4484] */
    (xdc_Char)0x25,  /* [4485] */
    (xdc_Char)0x30,  /* [4486] */
    (xdc_Char)0x38,  /* [4487] */
    (xdc_Char)0x78,  /* [4488] */
    (xdc_Char)0x0,  /* [4489] */
    (xdc_Char)0x45,  /* [4490] */
    (xdc_Char)0x5f,  /* [4491] */
    (xdc_Char)0x4e,  /* [4492] */
    (xdc_Char)0x4d,  /* [4493] */
    (xdc_Char)0x49,  /* [4494] */
    (xdc_Char)0x3a,  /* [4495] */
    (xdc_Char)0x20,  /* [4496] */
    (xdc_Char)0x25,  /* [4497] */
    (xdc_Char)0x73,  /* [4498] */
    (xdc_Char)0x0,  /* [4499] */
    (xdc_Char)0x45,  /* [4500] */
    (xdc_Char)0x5f,  /* [4501] */
    (xdc_Char)0x68,  /* [4502] */
    (xdc_Char)0x61,  /* [4503] */
    (xdc_Char)0x72,  /* [4504] */
    (xdc_Char)0x64,  /* [4505] */
    (xdc_Char)0x46,  /* [4506] */
    (xdc_Char)0x61,  /* [4507] */
    (xdc_Char)0x75,  /* [4508] */
    (xdc_Char)0x6c,  /* [4509] */
    (xdc_Char)0x74,  /* [4510] */
    (xdc_Char)0x3a,  /* [4511] */
    (xdc_Char)0x20,  /* [4512] */
    (xdc_Char)0x25,  /* [4513] */
    (xdc_Char)0x73,  /* [4514] */
    (xdc_Char)0x0,  /* [4515] */
    (xdc_Char)0x45,  /* [4516] */
    (xdc_Char)0x5f,  /* [4517] */
    (xdc_Char)0x6d,  /* [4518] */
    (xdc_Char)0x65,  /* [4519] */
    (xdc_Char)0x6d,  /* [4520] */
    (xdc_Char)0x46,  /* [4521] */
    (xdc_Char)0x61,  /* [4522] */
    (xdc_Char)0x75,  /* [4523] */
    (xdc_Char)0x6c,  /* [4524] */
    (xdc_Char)0x74,  /* [4525] */
    (xdc_Char)0x3a,  /* [4526] */
    (xdc_Char)0x20,  /* [4527] */
    (xdc_Char)0x25,  /* [4528] */
    (xdc_Char)0x73,  /* [4529] */
    (xdc_Char)0x2c,  /* [4530] */
    (xdc_Char)0x20,  /* [4531] */
    (xdc_Char)0x61,  /* [4532] */
    (xdc_Char)0x64,  /* [4533] */
    (xdc_Char)0x64,  /* [4534] */
    (xdc_Char)0x72,  /* [4535] */
    (xdc_Char)0x65,  /* [4536] */
    (xdc_Char)0x73,  /* [4537] */
    (xdc_Char)0x73,  /* [4538] */
    (xdc_Char)0x3a,  /* [4539] */
    (xdc_Char)0x20,  /* [4540] */
    (xdc_Char)0x25,  /* [4541] */
    (xdc_Char)0x30,  /* [4542] */
    (xdc_Char)0x38,  /* [4543] */
    (xdc_Char)0x78,  /* [4544] */
    (xdc_Char)0x0,  /* [4545] */
    (xdc_Char)0x45,  /* [4546] */
    (xdc_Char)0x5f,  /* [4547] */
    (xdc_Char)0x62,  /* [4548] */
    (xdc_Char)0x75,  /* [4549] */
    (xdc_Char)0x73,  /* [4550] */
    (xdc_Char)0x46,  /* [4551] */
    (xdc_Char)0x61,  /* [4552] */
    (xdc_Char)0x75,  /* [4553] */
    (xdc_Char)0x6c,  /* [4554] */
    (xdc_Char)0x74,  /* [4555] */
    (xdc_Char)0x3a,  /* [4556] */
    (xdc_Char)0x20,  /* [4557] */
    (xdc_Char)0x25,  /* [4558] */
    (xdc_Char)0x73,  /* [4559] */
    (xdc_Char)0x2c,  /* [4560] */
    (xdc_Char)0x20,  /* [4561] */
    (xdc_Char)0x61,  /* [4562] */
    (xdc_Char)0x64,  /* [4563] */
    (xdc_Char)0x64,  /* [4564] */
    (xdc_Char)0x72,  /* [4565] */
    (xdc_Char)0x65,  /* [4566] */
    (xdc_Char)0x73,  /* [4567] */
    (xdc_Char)0x73,  /* [4568] */
    (xdc_Char)0x3a,  /* [4569] */
    (xdc_Char)0x20,  /* [4570] */
    (xdc_Char)0x25,  /* [4571] */
    (xdc_Char)0x30,  /* [4572] */
    (xdc_Char)0x38,  /* [4573] */
    (xdc_Char)0x78,  /* [4574] */
    (xdc_Char)0x0,  /* [4575] */
    (xdc_Char)0x45,  /* [4576] */
    (xdc_Char)0x5f,  /* [4577] */
    (xdc_Char)0x75,  /* [4578] */
    (xdc_Char)0x73,  /* [4579] */
    (xdc_Char)0x61,  /* [4580] */
    (xdc_Char)0x67,  /* [4581] */
    (xdc_Char)0x65,  /* [4582] */
    (xdc_Char)0x46,  /* [4583] */
    (xdc_Char)0x61,  /* [4584] */
    (xdc_Char)0x75,  /* [4585] */
    (xdc_Char)0x6c,  /* [4586] */
    (xdc_Char)0x74,  /* [4587] */
    (xdc_Char)0x3a,  /* [4588] */
    (xdc_Char)0x20,  /* [4589] */
    (xdc_Char)0x25,  /* [4590] */
    (xdc_Char)0x73,  /* [4591] */
    (xdc_Char)0x0,  /* [4592] */
    (xdc_Char)0x45,  /* [4593] */
    (xdc_Char)0x5f,  /* [4594] */
    (xdc_Char)0x73,  /* [4595] */
    (xdc_Char)0x76,  /* [4596] */
    (xdc_Char)0x43,  /* [4597] */
    (xdc_Char)0x61,  /* [4598] */
    (xdc_Char)0x6c,  /* [4599] */
    (xdc_Char)0x6c,  /* [4600] */
    (xdc_Char)0x3a,  /* [4601] */
    (xdc_Char)0x20,  /* [4602] */
    (xdc_Char)0x73,  /* [4603] */
    (xdc_Char)0x76,  /* [4604] */
    (xdc_Char)0x4e,  /* [4605] */
    (xdc_Char)0x75,  /* [4606] */
    (xdc_Char)0x6d,  /* [4607] */
    (xdc_Char)0x20,  /* [4608] */
    (xdc_Char)0x3d,  /* [4609] */
    (xdc_Char)0x20,  /* [4610] */
    (xdc_Char)0x25,  /* [4611] */
    (xdc_Char)0x64,  /* [4612] */
    (xdc_Char)0x0,  /* [4613] */
    (xdc_Char)0x45,  /* [4614] */
    (xdc_Char)0x5f,  /* [4615] */
    (xdc_Char)0x64,  /* [4616] */
    (xdc_Char)0x65,  /* [4617] */
    (xdc_Char)0x62,  /* [4618] */
    (xdc_Char)0x75,  /* [4619] */
    (xdc_Char)0x67,  /* [4620] */
    (xdc_Char)0x4d,  /* [4621] */
    (xdc_Char)0x6f,  /* [4622] */
    (xdc_Char)0x6e,  /* [4623] */
    (xdc_Char)0x3a,  /* [4624] */
    (xdc_Char)0x20,  /* [4625] */
    (xdc_Char)0x25,  /* [4626] */
    (xdc_Char)0x73,  /* [4627] */
    (xdc_Char)0x0,  /* [4628] */
    (xdc_Char)0x45,  /* [4629] */
    (xdc_Char)0x5f,  /* [4630] */
    (xdc_Char)0x72,  /* [4631] */
    (xdc_Char)0x65,  /* [4632] */
    (xdc_Char)0x73,  /* [4633] */
    (xdc_Char)0x65,  /* [4634] */
    (xdc_Char)0x72,  /* [4635] */
    (xdc_Char)0x76,  /* [4636] */
    (xdc_Char)0x65,  /* [4637] */
    (xdc_Char)0x64,  /* [4638] */
    (xdc_Char)0x3a,  /* [4639] */
    (xdc_Char)0x20,  /* [4640] */
    (xdc_Char)0x25,  /* [4641] */
    (xdc_Char)0x73,  /* [4642] */
    (xdc_Char)0x20,  /* [4643] */
    (xdc_Char)0x25,  /* [4644] */
    (xdc_Char)0x64,  /* [4645] */
    (xdc_Char)0x0,  /* [4646] */
    (xdc_Char)0x45,  /* [4647] */
    (xdc_Char)0x5f,  /* [4648] */
    (xdc_Char)0x69,  /* [4649] */
    (xdc_Char)0x6e,  /* [4650] */
    (xdc_Char)0x76,  /* [4651] */
    (xdc_Char)0x61,  /* [4652] */
    (xdc_Char)0x6c,  /* [4653] */
    (xdc_Char)0x69,  /* [4654] */
    (xdc_Char)0x64,  /* [4655] */
    (xdc_Char)0x54,  /* [4656] */
    (xdc_Char)0x69,  /* [4657] */
    (xdc_Char)0x6d,  /* [4658] */
    (xdc_Char)0x65,  /* [4659] */
    (xdc_Char)0x72,  /* [4660] */
    (xdc_Char)0x3a,  /* [4661] */
    (xdc_Char)0x20,  /* [4662] */
    (xdc_Char)0x49,  /* [4663] */
    (xdc_Char)0x6e,  /* [4664] */
    (xdc_Char)0x76,  /* [4665] */
    (xdc_Char)0x61,  /* [4666] */
    (xdc_Char)0x6c,  /* [4667] */
    (xdc_Char)0x69,  /* [4668] */
    (xdc_Char)0x64,  /* [4669] */
    (xdc_Char)0x20,  /* [4670] */
    (xdc_Char)0x54,  /* [4671] */
    (xdc_Char)0x69,  /* [4672] */
    (xdc_Char)0x6d,  /* [4673] */
    (xdc_Char)0x65,  /* [4674] */
    (xdc_Char)0x72,  /* [4675] */
    (xdc_Char)0x20,  /* [4676] */
    (xdc_Char)0x49,  /* [4677] */
    (xdc_Char)0x64,  /* [4678] */
    (xdc_Char)0x20,  /* [4679] */
    (xdc_Char)0x25,  /* [4680] */
    (xdc_Char)0x64,  /* [4681] */
    (xdc_Char)0x0,  /* [4682] */
    (xdc_Char)0x45,  /* [4683] */
    (xdc_Char)0x5f,  /* [4684] */
    (xdc_Char)0x6e,  /* [4685] */
    (xdc_Char)0x6f,  /* [4686] */
    (xdc_Char)0x74,  /* [4687] */
    (xdc_Char)0x41,  /* [4688] */
    (xdc_Char)0x76,  /* [4689] */
    (xdc_Char)0x61,  /* [4690] */
    (xdc_Char)0x69,  /* [4691] */
    (xdc_Char)0x6c,  /* [4692] */
    (xdc_Char)0x61,  /* [4693] */
    (xdc_Char)0x62,  /* [4694] */
    (xdc_Char)0x6c,  /* [4695] */
    (xdc_Char)0x65,  /* [4696] */
    (xdc_Char)0x3a,  /* [4697] */
    (xdc_Char)0x20,  /* [4698] */
    (xdc_Char)0x54,  /* [4699] */
    (xdc_Char)0x69,  /* [4700] */
    (xdc_Char)0x6d,  /* [4701] */
    (xdc_Char)0x65,  /* [4702] */
    (xdc_Char)0x72,  /* [4703] */
    (xdc_Char)0x20,  /* [4704] */
    (xdc_Char)0x6e,  /* [4705] */
    (xdc_Char)0x6f,  /* [4706] */
    (xdc_Char)0x74,  /* [4707] */
    (xdc_Char)0x20,  /* [4708] */
    (xdc_Char)0x61,  /* [4709] */
    (xdc_Char)0x76,  /* [4710] */
    (xdc_Char)0x61,  /* [4711] */
    (xdc_Char)0x69,  /* [4712] */
    (xdc_Char)0x6c,  /* [4713] */
    (xdc_Char)0x61,  /* [4714] */
    (xdc_Char)0x62,  /* [4715] */
    (xdc_Char)0x6c,  /* [4716] */
    (xdc_Char)0x65,  /* [4717] */
    (xdc_Char)0x20,  /* [4718] */
    (xdc_Char)0x25,  /* [4719] */
    (xdc_Char)0x64,  /* [4720] */
    (xdc_Char)0x0,  /* [4721] */
    (xdc_Char)0x45,  /* [4722] */
    (xdc_Char)0x5f,  /* [4723] */
    (xdc_Char)0x63,  /* [4724] */
    (xdc_Char)0x61,  /* [4725] */
    (xdc_Char)0x6e,  /* [4726] */
    (xdc_Char)0x6e,  /* [4727] */
    (xdc_Char)0x6f,  /* [4728] */
    (xdc_Char)0x74,  /* [4729] */
    (xdc_Char)0x53,  /* [4730] */
    (xdc_Char)0x75,  /* [4731] */
    (xdc_Char)0x70,  /* [4732] */
    (xdc_Char)0x70,  /* [4733] */
    (xdc_Char)0x6f,  /* [4734] */
    (xdc_Char)0x72,  /* [4735] */
    (xdc_Char)0x74,  /* [4736] */
    (xdc_Char)0x3a,  /* [4737] */
    (xdc_Char)0x20,  /* [4738] */
    (xdc_Char)0x54,  /* [4739] */
    (xdc_Char)0x69,  /* [4740] */
    (xdc_Char)0x6d,  /* [4741] */
    (xdc_Char)0x65,  /* [4742] */
    (xdc_Char)0x72,  /* [4743] */
    (xdc_Char)0x20,  /* [4744] */
    (xdc_Char)0x63,  /* [4745] */
    (xdc_Char)0x61,  /* [4746] */
    (xdc_Char)0x6e,  /* [4747] */
    (xdc_Char)0x6e,  /* [4748] */
    (xdc_Char)0x6f,  /* [4749] */
    (xdc_Char)0x74,  /* [4750] */
    (xdc_Char)0x20,  /* [4751] */
    (xdc_Char)0x73,  /* [4752] */
    (xdc_Char)0x75,  /* [4753] */
    (xdc_Char)0x70,  /* [4754] */
    (xdc_Char)0x70,  /* [4755] */
    (xdc_Char)0x6f,  /* [4756] */
    (xdc_Char)0x72,  /* [4757] */
    (xdc_Char)0x74,  /* [4758] */
    (xdc_Char)0x20,  /* [4759] */
    (xdc_Char)0x72,  /* [4760] */
    (xdc_Char)0x65,  /* [4761] */
    (xdc_Char)0x71,  /* [4762] */
    (xdc_Char)0x75,  /* [4763] */
    (xdc_Char)0x65,  /* [4764] */
    (xdc_Char)0x73,  /* [4765] */
    (xdc_Char)0x74,  /* [4766] */
    (xdc_Char)0x65,  /* [4767] */
    (xdc_Char)0x64,  /* [4768] */
    (xdc_Char)0x20,  /* [4769] */
    (xdc_Char)0x70,  /* [4770] */
    (xdc_Char)0x65,  /* [4771] */
    (xdc_Char)0x72,  /* [4772] */
    (xdc_Char)0x69,  /* [4773] */
    (xdc_Char)0x6f,  /* [4774] */
    (xdc_Char)0x64,  /* [4775] */
    (xdc_Char)0x20,  /* [4776] */
    (xdc_Char)0x25,  /* [4777] */
    (xdc_Char)0x64,  /* [4778] */
    (xdc_Char)0x0,  /* [4779] */
    (xdc_Char)0x72,  /* [4780] */
    (xdc_Char)0x65,  /* [4781] */
    (xdc_Char)0x71,  /* [4782] */
    (xdc_Char)0x75,  /* [4783] */
    (xdc_Char)0x65,  /* [4784] */
    (xdc_Char)0x73,  /* [4785] */
    (xdc_Char)0x74,  /* [4786] */
    (xdc_Char)0x65,  /* [4787] */
    (xdc_Char)0x64,  /* [4788] */
    (xdc_Char)0x20,  /* [4789] */
    (xdc_Char)0x73,  /* [4790] */
    (xdc_Char)0x69,  /* [4791] */
    (xdc_Char)0x7a,  /* [4792] */
    (xdc_Char)0x65,  /* [4793] */
    (xdc_Char)0x20,  /* [4794] */
    (xdc_Char)0x69,  /* [4795] */
    (xdc_Char)0x73,  /* [4796] */
    (xdc_Char)0x20,  /* [4797] */
    (xdc_Char)0x74,  /* [4798] */
    (xdc_Char)0x6f,  /* [4799] */
    (xdc_Char)0x6f,  /* [4800] */
    (xdc_Char)0x20,  /* [4801] */
    (xdc_Char)0x62,  /* [4802] */
    (xdc_Char)0x69,  /* [4803] */
    (xdc_Char)0x67,  /* [4804] */
    (xdc_Char)0x3a,  /* [4805] */
    (xdc_Char)0x20,  /* [4806] */
    (xdc_Char)0x68,  /* [4807] */
    (xdc_Char)0x61,  /* [4808] */
    (xdc_Char)0x6e,  /* [4809] */
    (xdc_Char)0x64,  /* [4810] */
    (xdc_Char)0x6c,  /* [4811] */
    (xdc_Char)0x65,  /* [4812] */
    (xdc_Char)0x3d,  /* [4813] */
    (xdc_Char)0x30,  /* [4814] */
    (xdc_Char)0x78,  /* [4815] */
    (xdc_Char)0x25,  /* [4816] */
    (xdc_Char)0x78,  /* [4817] */
    (xdc_Char)0x2c,  /* [4818] */
    (xdc_Char)0x20,  /* [4819] */
    (xdc_Char)0x73,  /* [4820] */
    (xdc_Char)0x69,  /* [4821] */
    (xdc_Char)0x7a,  /* [4822] */
    (xdc_Char)0x65,  /* [4823] */
    (xdc_Char)0x3d,  /* [4824] */
    (xdc_Char)0x25,  /* [4825] */
    (xdc_Char)0x75,  /* [4826] */
    (xdc_Char)0x0,  /* [4827] */
    (xdc_Char)0x6f,  /* [4828] */
    (xdc_Char)0x75,  /* [4829] */
    (xdc_Char)0x74,  /* [4830] */
    (xdc_Char)0x20,  /* [4831] */
    (xdc_Char)0x6f,  /* [4832] */
    (xdc_Char)0x66,  /* [4833] */
    (xdc_Char)0x20,  /* [4834] */
    (xdc_Char)0x6d,  /* [4835] */
    (xdc_Char)0x65,  /* [4836] */
    (xdc_Char)0x6d,  /* [4837] */
    (xdc_Char)0x6f,  /* [4838] */
    (xdc_Char)0x72,  /* [4839] */
    (xdc_Char)0x79,  /* [4840] */
    (xdc_Char)0x3a,  /* [4841] */
    (xdc_Char)0x20,  /* [4842] */
    (xdc_Char)0x68,  /* [4843] */
    (xdc_Char)0x61,  /* [4844] */
    (xdc_Char)0x6e,  /* [4845] */
    (xdc_Char)0x64,  /* [4846] */
    (xdc_Char)0x6c,  /* [4847] */
    (xdc_Char)0x65,  /* [4848] */
    (xdc_Char)0x3d,  /* [4849] */
    (xdc_Char)0x30,  /* [4850] */
    (xdc_Char)0x78,  /* [4851] */
    (xdc_Char)0x25,  /* [4852] */
    (xdc_Char)0x78,  /* [4853] */
    (xdc_Char)0x2c,  /* [4854] */
    (xdc_Char)0x20,  /* [4855] */
    (xdc_Char)0x73,  /* [4856] */
    (xdc_Char)0x69,  /* [4857] */
    (xdc_Char)0x7a,  /* [4858] */
    (xdc_Char)0x65,  /* [4859] */
    (xdc_Char)0x3d,  /* [4860] */
    (xdc_Char)0x25,  /* [4861] */
    (xdc_Char)0x75,  /* [4862] */
    (xdc_Char)0x0,  /* [4863] */
    (xdc_Char)0x3c,  /* [4864] */
    (xdc_Char)0x2d,  /* [4865] */
    (xdc_Char)0x2d,  /* [4866] */
    (xdc_Char)0x20,  /* [4867] */
    (xdc_Char)0x63,  /* [4868] */
    (xdc_Char)0x6f,  /* [4869] */
    (xdc_Char)0x6e,  /* [4870] */
    (xdc_Char)0x73,  /* [4871] */
    (xdc_Char)0x74,  /* [4872] */
    (xdc_Char)0x72,  /* [4873] */
    (xdc_Char)0x75,  /* [4874] */
    (xdc_Char)0x63,  /* [4875] */
    (xdc_Char)0x74,  /* [4876] */
    (xdc_Char)0x3a,  /* [4877] */
    (xdc_Char)0x20,  /* [4878] */
    (xdc_Char)0x25,  /* [4879] */
    (xdc_Char)0x70,  /* [4880] */
    (xdc_Char)0x28,  /* [4881] */
    (xdc_Char)0x27,  /* [4882] */
    (xdc_Char)0x25,  /* [4883] */
    (xdc_Char)0x73,  /* [4884] */
    (xdc_Char)0x27,  /* [4885] */
    (xdc_Char)0x29,  /* [4886] */
    (xdc_Char)0x0,  /* [4887] */
    (xdc_Char)0x3c,  /* [4888] */
    (xdc_Char)0x2d,  /* [4889] */
    (xdc_Char)0x2d,  /* [4890] */
    (xdc_Char)0x20,  /* [4891] */
    (xdc_Char)0x63,  /* [4892] */
    (xdc_Char)0x72,  /* [4893] */
    (xdc_Char)0x65,  /* [4894] */
    (xdc_Char)0x61,  /* [4895] */
    (xdc_Char)0x74,  /* [4896] */
    (xdc_Char)0x65,  /* [4897] */
    (xdc_Char)0x3a,  /* [4898] */
    (xdc_Char)0x20,  /* [4899] */
    (xdc_Char)0x25,  /* [4900] */
    (xdc_Char)0x70,  /* [4901] */
    (xdc_Char)0x28,  /* [4902] */
    (xdc_Char)0x27,  /* [4903] */
    (xdc_Char)0x25,  /* [4904] */
    (xdc_Char)0x73,  /* [4905] */
    (xdc_Char)0x27,  /* [4906] */
    (xdc_Char)0x29,  /* [4907] */
    (xdc_Char)0x0,  /* [4908] */
    (xdc_Char)0x2d,  /* [4909] */
    (xdc_Char)0x2d,  /* [4910] */
    (xdc_Char)0x3e,  /* [4911] */
    (xdc_Char)0x20,  /* [4912] */
    (xdc_Char)0x64,  /* [4913] */
    (xdc_Char)0x65,  /* [4914] */
    (xdc_Char)0x73,  /* [4915] */
    (xdc_Char)0x74,  /* [4916] */
    (xdc_Char)0x72,  /* [4917] */
    (xdc_Char)0x75,  /* [4918] */
    (xdc_Char)0x63,  /* [4919] */
    (xdc_Char)0x74,  /* [4920] */
    (xdc_Char)0x3a,  /* [4921] */
    (xdc_Char)0x20,  /* [4922] */
    (xdc_Char)0x28,  /* [4923] */
    (xdc_Char)0x25,  /* [4924] */
    (xdc_Char)0x70,  /* [4925] */
    (xdc_Char)0x29,  /* [4926] */
    (xdc_Char)0x0,  /* [4927] */
    (xdc_Char)0x2d,  /* [4928] */
    (xdc_Char)0x2d,  /* [4929] */
    (xdc_Char)0x3e,  /* [4930] */
    (xdc_Char)0x20,  /* [4931] */
    (xdc_Char)0x64,  /* [4932] */
    (xdc_Char)0x65,  /* [4933] */
    (xdc_Char)0x6c,  /* [4934] */
    (xdc_Char)0x65,  /* [4935] */
    (xdc_Char)0x74,  /* [4936] */
    (xdc_Char)0x65,  /* [4937] */
    (xdc_Char)0x3a,  /* [4938] */
    (xdc_Char)0x20,  /* [4939] */
    (xdc_Char)0x28,  /* [4940] */
    (xdc_Char)0x25,  /* [4941] */
    (xdc_Char)0x70,  /* [4942] */
    (xdc_Char)0x29,  /* [4943] */
    (xdc_Char)0x0,  /* [4944] */
    (xdc_Char)0x45,  /* [4945] */
    (xdc_Char)0x52,  /* [4946] */
    (xdc_Char)0x52,  /* [4947] */
    (xdc_Char)0x4f,  /* [4948] */
    (xdc_Char)0x52,  /* [4949] */
    (xdc_Char)0x3a,  /* [4950] */
    (xdc_Char)0x20,  /* [4951] */
    (xdc_Char)0x25,  /* [4952] */
    (xdc_Char)0x24,  /* [4953] */
    (xdc_Char)0x46,  /* [4954] */
    (xdc_Char)0x25,  /* [4955] */
    (xdc_Char)0x24,  /* [4956] */
    (xdc_Char)0x53,  /* [4957] */
    (xdc_Char)0x0,  /* [4958] */
    (xdc_Char)0x57,  /* [4959] */
    (xdc_Char)0x41,  /* [4960] */
    (xdc_Char)0x52,  /* [4961] */
    (xdc_Char)0x4e,  /* [4962] */
    (xdc_Char)0x49,  /* [4963] */
    (xdc_Char)0x4e,  /* [4964] */
    (xdc_Char)0x47,  /* [4965] */
    (xdc_Char)0x3a,  /* [4966] */
    (xdc_Char)0x20,  /* [4967] */
    (xdc_Char)0x25,  /* [4968] */
    (xdc_Char)0x24,  /* [4969] */
    (xdc_Char)0x46,  /* [4970] */
    (xdc_Char)0x25,  /* [4971] */
    (xdc_Char)0x24,  /* [4972] */
    (xdc_Char)0x53,  /* [4973] */
    (xdc_Char)0x0,  /* [4974] */
    (xdc_Char)0x25,  /* [4975] */
    (xdc_Char)0x24,  /* [4976] */
    (xdc_Char)0x46,  /* [4977] */
    (xdc_Char)0x25,  /* [4978] */
    (xdc_Char)0x24,  /* [4979] */
    (xdc_Char)0x53,  /* [4980] */
    (xdc_Char)0x0,  /* [4981] */
    (xdc_Char)0x53,  /* [4982] */
    (xdc_Char)0x74,  /* [4983] */
    (xdc_Char)0x61,  /* [4984] */
    (xdc_Char)0x72,  /* [4985] */
    (xdc_Char)0x74,  /* [4986] */
    (xdc_Char)0x3a,  /* [4987] */
    (xdc_Char)0x20,  /* [4988] */
    (xdc_Char)0x25,  /* [4989] */
    (xdc_Char)0x24,  /* [4990] */
    (xdc_Char)0x53,  /* [4991] */
    (xdc_Char)0x0,  /* [4992] */
    (xdc_Char)0x53,  /* [4993] */
    (xdc_Char)0x74,  /* [4994] */
    (xdc_Char)0x6f,  /* [4995] */
    (xdc_Char)0x70,  /* [4996] */
    (xdc_Char)0x3a,  /* [4997] */
    (xdc_Char)0x20,  /* [4998] */
    (xdc_Char)0x25,  /* [4999] */
    (xdc_Char)0x24,  /* [5000] */
    (xdc_Char)0x53,  /* [5001] */
    (xdc_Char)0x0,  /* [5002] */
    (xdc_Char)0x53,  /* [5003] */
    (xdc_Char)0x74,  /* [5004] */
    (xdc_Char)0x61,  /* [5005] */
    (xdc_Char)0x72,  /* [5006] */
    (xdc_Char)0x74,  /* [5007] */
    (xdc_Char)0x49,  /* [5008] */
    (xdc_Char)0x6e,  /* [5009] */
    (xdc_Char)0x73,  /* [5010] */
    (xdc_Char)0x74,  /* [5011] */
    (xdc_Char)0x61,  /* [5012] */
    (xdc_Char)0x6e,  /* [5013] */
    (xdc_Char)0x63,  /* [5014] */
    (xdc_Char)0x65,  /* [5015] */
    (xdc_Char)0x3a,  /* [5016] */
    (xdc_Char)0x20,  /* [5017] */
    (xdc_Char)0x25,  /* [5018] */
    (xdc_Char)0x24,  /* [5019] */
    (xdc_Char)0x53,  /* [5020] */
    (xdc_Char)0x0,  /* [5021] */
    (xdc_Char)0x53,  /* [5022] */
    (xdc_Char)0x74,  /* [5023] */
    (xdc_Char)0x6f,  /* [5024] */
    (xdc_Char)0x70,  /* [5025] */
    (xdc_Char)0x49,  /* [5026] */
    (xdc_Char)0x6e,  /* [5027] */
    (xdc_Char)0x73,  /* [5028] */
    (xdc_Char)0x74,  /* [5029] */
    (xdc_Char)0x61,  /* [5030] */
    (xdc_Char)0x6e,  /* [5031] */
    (xdc_Char)0x63,  /* [5032] */
    (xdc_Char)0x65,  /* [5033] */
    (xdc_Char)0x3a,  /* [5034] */
    (xdc_Char)0x20,  /* [5035] */
    (xdc_Char)0x25,  /* [5036] */
    (xdc_Char)0x24,  /* [5037] */
    (xdc_Char)0x53,  /* [5038] */
    (xdc_Char)0x0,  /* [5039] */
    (xdc_Char)0x4c,  /* [5040] */
    (xdc_Char)0x57,  /* [5041] */
    (xdc_Char)0x5f,  /* [5042] */
    (xdc_Char)0x64,  /* [5043] */
    (xdc_Char)0x65,  /* [5044] */
    (xdc_Char)0x6c,  /* [5045] */
    (xdc_Char)0x61,  /* [5046] */
    (xdc_Char)0x79,  /* [5047] */
    (xdc_Char)0x65,  /* [5048] */
    (xdc_Char)0x64,  /* [5049] */
    (xdc_Char)0x3a,  /* [5050] */
    (xdc_Char)0x20,  /* [5051] */
    (xdc_Char)0x64,  /* [5052] */
    (xdc_Char)0x65,  /* [5053] */
    (xdc_Char)0x6c,  /* [5054] */
    (xdc_Char)0x61,  /* [5055] */
    (xdc_Char)0x79,  /* [5056] */
    (xdc_Char)0x3a,  /* [5057] */
    (xdc_Char)0x20,  /* [5058] */
    (xdc_Char)0x25,  /* [5059] */
    (xdc_Char)0x64,  /* [5060] */
    (xdc_Char)0x0,  /* [5061] */
    (xdc_Char)0x4c,  /* [5062] */
    (xdc_Char)0x4d,  /* [5063] */
    (xdc_Char)0x5f,  /* [5064] */
    (xdc_Char)0x74,  /* [5065] */
    (xdc_Char)0x69,  /* [5066] */
    (xdc_Char)0x63,  /* [5067] */
    (xdc_Char)0x6b,  /* [5068] */
    (xdc_Char)0x3a,  /* [5069] */
    (xdc_Char)0x20,  /* [5070] */
    (xdc_Char)0x74,  /* [5071] */
    (xdc_Char)0x69,  /* [5072] */
    (xdc_Char)0x63,  /* [5073] */
    (xdc_Char)0x6b,  /* [5074] */
    (xdc_Char)0x3a,  /* [5075] */
    (xdc_Char)0x20,  /* [5076] */
    (xdc_Char)0x25,  /* [5077] */
    (xdc_Char)0x64,  /* [5078] */
    (xdc_Char)0x0,  /* [5079] */
    (xdc_Char)0x4c,  /* [5080] */
    (xdc_Char)0x4d,  /* [5081] */
    (xdc_Char)0x5f,  /* [5082] */
    (xdc_Char)0x62,  /* [5083] */
    (xdc_Char)0x65,  /* [5084] */
    (xdc_Char)0x67,  /* [5085] */
    (xdc_Char)0x69,  /* [5086] */
    (xdc_Char)0x6e,  /* [5087] */
    (xdc_Char)0x3a,  /* [5088] */
    (xdc_Char)0x20,  /* [5089] */
    (xdc_Char)0x63,  /* [5090] */
    (xdc_Char)0x6c,  /* [5091] */
    (xdc_Char)0x6b,  /* [5092] */
    (xdc_Char)0x3a,  /* [5093] */
    (xdc_Char)0x20,  /* [5094] */
    (xdc_Char)0x30,  /* [5095] */
    (xdc_Char)0x78,  /* [5096] */
    (xdc_Char)0x25,  /* [5097] */
    (xdc_Char)0x78,  /* [5098] */
    (xdc_Char)0x2c,  /* [5099] */
    (xdc_Char)0x20,  /* [5100] */
    (xdc_Char)0x66,  /* [5101] */
    (xdc_Char)0x75,  /* [5102] */
    (xdc_Char)0x6e,  /* [5103] */
    (xdc_Char)0x63,  /* [5104] */
    (xdc_Char)0x3a,  /* [5105] */
    (xdc_Char)0x20,  /* [5106] */
    (xdc_Char)0x30,  /* [5107] */
    (xdc_Char)0x78,  /* [5108] */
    (xdc_Char)0x25,  /* [5109] */
    (xdc_Char)0x78,  /* [5110] */
    (xdc_Char)0x0,  /* [5111] */
    (xdc_Char)0x4c,  /* [5112] */
    (xdc_Char)0x4d,  /* [5113] */
    (xdc_Char)0x5f,  /* [5114] */
    (xdc_Char)0x70,  /* [5115] */
    (xdc_Char)0x6f,  /* [5116] */
    (xdc_Char)0x73,  /* [5117] */
    (xdc_Char)0x74,  /* [5118] */
    (xdc_Char)0x3a,  /* [5119] */
    (xdc_Char)0x20,  /* [5120] */
    (xdc_Char)0x65,  /* [5121] */
    (xdc_Char)0x76,  /* [5122] */
    (xdc_Char)0x65,  /* [5123] */
    (xdc_Char)0x6e,  /* [5124] */
    (xdc_Char)0x74,  /* [5125] */
    (xdc_Char)0x3a,  /* [5126] */
    (xdc_Char)0x20,  /* [5127] */
    (xdc_Char)0x30,  /* [5128] */
    (xdc_Char)0x78,  /* [5129] */
    (xdc_Char)0x25,  /* [5130] */
    (xdc_Char)0x78,  /* [5131] */
    (xdc_Char)0x2c,  /* [5132] */
    (xdc_Char)0x20,  /* [5133] */
    (xdc_Char)0x63,  /* [5134] */
    (xdc_Char)0x75,  /* [5135] */
    (xdc_Char)0x72,  /* [5136] */
    (xdc_Char)0x72,  /* [5137] */
    (xdc_Char)0x45,  /* [5138] */
    (xdc_Char)0x76,  /* [5139] */
    (xdc_Char)0x65,  /* [5140] */
    (xdc_Char)0x6e,  /* [5141] */
    (xdc_Char)0x74,  /* [5142] */
    (xdc_Char)0x73,  /* [5143] */
    (xdc_Char)0x3a,  /* [5144] */
    (xdc_Char)0x20,  /* [5145] */
    (xdc_Char)0x30,  /* [5146] */
    (xdc_Char)0x78,  /* [5147] */
    (xdc_Char)0x25,  /* [5148] */
    (xdc_Char)0x78,  /* [5149] */
    (xdc_Char)0x2c,  /* [5150] */
    (xdc_Char)0x20,  /* [5151] */
    (xdc_Char)0x65,  /* [5152] */
    (xdc_Char)0x76,  /* [5153] */
    (xdc_Char)0x65,  /* [5154] */
    (xdc_Char)0x6e,  /* [5155] */
    (xdc_Char)0x74,  /* [5156] */
    (xdc_Char)0x49,  /* [5157] */
    (xdc_Char)0x64,  /* [5158] */
    (xdc_Char)0x3a,  /* [5159] */
    (xdc_Char)0x20,  /* [5160] */
    (xdc_Char)0x30,  /* [5161] */
    (xdc_Char)0x78,  /* [5162] */
    (xdc_Char)0x25,  /* [5163] */
    (xdc_Char)0x78,  /* [5164] */
    (xdc_Char)0x0,  /* [5165] */
    (xdc_Char)0x4c,  /* [5166] */
    (xdc_Char)0x4d,  /* [5167] */
    (xdc_Char)0x5f,  /* [5168] */
    (xdc_Char)0x70,  /* [5169] */
    (xdc_Char)0x65,  /* [5170] */
    (xdc_Char)0x6e,  /* [5171] */
    (xdc_Char)0x64,  /* [5172] */
    (xdc_Char)0x3a,  /* [5173] */
    (xdc_Char)0x20,  /* [5174] */
    (xdc_Char)0x65,  /* [5175] */
    (xdc_Char)0x76,  /* [5176] */
    (xdc_Char)0x65,  /* [5177] */
    (xdc_Char)0x6e,  /* [5178] */
    (xdc_Char)0x74,  /* [5179] */
    (xdc_Char)0x3a,  /* [5180] */
    (xdc_Char)0x20,  /* [5181] */
    (xdc_Char)0x30,  /* [5182] */
    (xdc_Char)0x78,  /* [5183] */
    (xdc_Char)0x25,  /* [5184] */
    (xdc_Char)0x78,  /* [5185] */
    (xdc_Char)0x2c,  /* [5186] */
    (xdc_Char)0x20,  /* [5187] */
    (xdc_Char)0x63,  /* [5188] */
    (xdc_Char)0x75,  /* [5189] */
    (xdc_Char)0x72,  /* [5190] */
    (xdc_Char)0x72,  /* [5191] */
    (xdc_Char)0x45,  /* [5192] */
    (xdc_Char)0x76,  /* [5193] */
    (xdc_Char)0x65,  /* [5194] */
    (xdc_Char)0x6e,  /* [5195] */
    (xdc_Char)0x74,  /* [5196] */
    (xdc_Char)0x73,  /* [5197] */
    (xdc_Char)0x3a,  /* [5198] */
    (xdc_Char)0x20,  /* [5199] */
    (xdc_Char)0x30,  /* [5200] */
    (xdc_Char)0x78,  /* [5201] */
    (xdc_Char)0x25,  /* [5202] */
    (xdc_Char)0x78,  /* [5203] */
    (xdc_Char)0x2c,  /* [5204] */
    (xdc_Char)0x20,  /* [5205] */
    (xdc_Char)0x61,  /* [5206] */
    (xdc_Char)0x6e,  /* [5207] */
    (xdc_Char)0x64,  /* [5208] */
    (xdc_Char)0x4d,  /* [5209] */
    (xdc_Char)0x61,  /* [5210] */
    (xdc_Char)0x73,  /* [5211] */
    (xdc_Char)0x6b,  /* [5212] */
    (xdc_Char)0x3a,  /* [5213] */
    (xdc_Char)0x20,  /* [5214] */
    (xdc_Char)0x30,  /* [5215] */
    (xdc_Char)0x78,  /* [5216] */
    (xdc_Char)0x25,  /* [5217] */
    (xdc_Char)0x78,  /* [5218] */
    (xdc_Char)0x2c,  /* [5219] */
    (xdc_Char)0x20,  /* [5220] */
    (xdc_Char)0x6f,  /* [5221] */
    (xdc_Char)0x72,  /* [5222] */
    (xdc_Char)0x4d,  /* [5223] */
    (xdc_Char)0x61,  /* [5224] */
    (xdc_Char)0x73,  /* [5225] */
    (xdc_Char)0x6b,  /* [5226] */
    (xdc_Char)0x3a,  /* [5227] */
    (xdc_Char)0x20,  /* [5228] */
    (xdc_Char)0x30,  /* [5229] */
    (xdc_Char)0x78,  /* [5230] */
    (xdc_Char)0x25,  /* [5231] */
    (xdc_Char)0x78,  /* [5232] */
    (xdc_Char)0x2c,  /* [5233] */
    (xdc_Char)0x20,  /* [5234] */
    (xdc_Char)0x74,  /* [5235] */
    (xdc_Char)0x69,  /* [5236] */
    (xdc_Char)0x6d,  /* [5237] */
    (xdc_Char)0x65,  /* [5238] */
    (xdc_Char)0x6f,  /* [5239] */
    (xdc_Char)0x75,  /* [5240] */
    (xdc_Char)0x74,  /* [5241] */
    (xdc_Char)0x3a,  /* [5242] */
    (xdc_Char)0x20,  /* [5243] */
    (xdc_Char)0x25,  /* [5244] */
    (xdc_Char)0x64,  /* [5245] */
    (xdc_Char)0x0,  /* [5246] */
    (xdc_Char)0x4c,  /* [5247] */
    (xdc_Char)0x4d,  /* [5248] */
    (xdc_Char)0x5f,  /* [5249] */
    (xdc_Char)0x70,  /* [5250] */
    (xdc_Char)0x6f,  /* [5251] */
    (xdc_Char)0x73,  /* [5252] */
    (xdc_Char)0x74,  /* [5253] */
    (xdc_Char)0x3a,  /* [5254] */
    (xdc_Char)0x20,  /* [5255] */
    (xdc_Char)0x73,  /* [5256] */
    (xdc_Char)0x65,  /* [5257] */
    (xdc_Char)0x6d,  /* [5258] */
    (xdc_Char)0x3a,  /* [5259] */
    (xdc_Char)0x20,  /* [5260] */
    (xdc_Char)0x30,  /* [5261] */
    (xdc_Char)0x78,  /* [5262] */
    (xdc_Char)0x25,  /* [5263] */
    (xdc_Char)0x78,  /* [5264] */
    (xdc_Char)0x2c,  /* [5265] */
    (xdc_Char)0x20,  /* [5266] */
    (xdc_Char)0x63,  /* [5267] */
    (xdc_Char)0x6f,  /* [5268] */
    (xdc_Char)0x75,  /* [5269] */
    (xdc_Char)0x6e,  /* [5270] */
    (xdc_Char)0x74,  /* [5271] */
    (xdc_Char)0x3a,  /* [5272] */
    (xdc_Char)0x20,  /* [5273] */
    (xdc_Char)0x25,  /* [5274] */
    (xdc_Char)0x64,  /* [5275] */
    (xdc_Char)0x0,  /* [5276] */
    (xdc_Char)0x4c,  /* [5277] */
    (xdc_Char)0x4d,  /* [5278] */
    (xdc_Char)0x5f,  /* [5279] */
    (xdc_Char)0x70,  /* [5280] */
    (xdc_Char)0x65,  /* [5281] */
    (xdc_Char)0x6e,  /* [5282] */
    (xdc_Char)0x64,  /* [5283] */
    (xdc_Char)0x3a,  /* [5284] */
    (xdc_Char)0x20,  /* [5285] */
    (xdc_Char)0x73,  /* [5286] */
    (xdc_Char)0x65,  /* [5287] */
    (xdc_Char)0x6d,  /* [5288] */
    (xdc_Char)0x3a,  /* [5289] */
    (xdc_Char)0x20,  /* [5290] */
    (xdc_Char)0x30,  /* [5291] */
    (xdc_Char)0x78,  /* [5292] */
    (xdc_Char)0x25,  /* [5293] */
    (xdc_Char)0x78,  /* [5294] */
    (xdc_Char)0x2c,  /* [5295] */
    (xdc_Char)0x20,  /* [5296] */
    (xdc_Char)0x63,  /* [5297] */
    (xdc_Char)0x6f,  /* [5298] */
    (xdc_Char)0x75,  /* [5299] */
    (xdc_Char)0x6e,  /* [5300] */
    (xdc_Char)0x74,  /* [5301] */
    (xdc_Char)0x3a,  /* [5302] */
    (xdc_Char)0x20,  /* [5303] */
    (xdc_Char)0x25,  /* [5304] */
    (xdc_Char)0x64,  /* [5305] */
    (xdc_Char)0x2c,  /* [5306] */
    (xdc_Char)0x20,  /* [5307] */
    (xdc_Char)0x74,  /* [5308] */
    (xdc_Char)0x69,  /* [5309] */
    (xdc_Char)0x6d,  /* [5310] */
    (xdc_Char)0x65,  /* [5311] */
    (xdc_Char)0x6f,  /* [5312] */
    (xdc_Char)0x75,  /* [5313] */
    (xdc_Char)0x74,  /* [5314] */
    (xdc_Char)0x3a,  /* [5315] */
    (xdc_Char)0x20,  /* [5316] */
    (xdc_Char)0x25,  /* [5317] */
    (xdc_Char)0x64,  /* [5318] */
    (xdc_Char)0x0,  /* [5319] */
    (xdc_Char)0x4c,  /* [5320] */
    (xdc_Char)0x4d,  /* [5321] */
    (xdc_Char)0x5f,  /* [5322] */
    (xdc_Char)0x62,  /* [5323] */
    (xdc_Char)0x65,  /* [5324] */
    (xdc_Char)0x67,  /* [5325] */
    (xdc_Char)0x69,  /* [5326] */
    (xdc_Char)0x6e,  /* [5327] */
    (xdc_Char)0x3a,  /* [5328] */
    (xdc_Char)0x20,  /* [5329] */
    (xdc_Char)0x73,  /* [5330] */
    (xdc_Char)0x77,  /* [5331] */
    (xdc_Char)0x69,  /* [5332] */
    (xdc_Char)0x3a,  /* [5333] */
    (xdc_Char)0x20,  /* [5334] */
    (xdc_Char)0x30,  /* [5335] */
    (xdc_Char)0x78,  /* [5336] */
    (xdc_Char)0x25,  /* [5337] */
    (xdc_Char)0x78,  /* [5338] */
    (xdc_Char)0x2c,  /* [5339] */
    (xdc_Char)0x20,  /* [5340] */
    (xdc_Char)0x66,  /* [5341] */
    (xdc_Char)0x75,  /* [5342] */
    (xdc_Char)0x6e,  /* [5343] */
    (xdc_Char)0x63,  /* [5344] */
    (xdc_Char)0x3a,  /* [5345] */
    (xdc_Char)0x20,  /* [5346] */
    (xdc_Char)0x30,  /* [5347] */
    (xdc_Char)0x78,  /* [5348] */
    (xdc_Char)0x25,  /* [5349] */
    (xdc_Char)0x78,  /* [5350] */
    (xdc_Char)0x2c,  /* [5351] */
    (xdc_Char)0x20,  /* [5352] */
    (xdc_Char)0x70,  /* [5353] */
    (xdc_Char)0x72,  /* [5354] */
    (xdc_Char)0x65,  /* [5355] */
    (xdc_Char)0x54,  /* [5356] */
    (xdc_Char)0x68,  /* [5357] */
    (xdc_Char)0x72,  /* [5358] */
    (xdc_Char)0x65,  /* [5359] */
    (xdc_Char)0x61,  /* [5360] */
    (xdc_Char)0x64,  /* [5361] */
    (xdc_Char)0x3a,  /* [5362] */
    (xdc_Char)0x20,  /* [5363] */
    (xdc_Char)0x25,  /* [5364] */
    (xdc_Char)0x64,  /* [5365] */
    (xdc_Char)0x0,  /* [5366] */
    (xdc_Char)0x4c,  /* [5367] */
    (xdc_Char)0x44,  /* [5368] */
    (xdc_Char)0x5f,  /* [5369] */
    (xdc_Char)0x65,  /* [5370] */
    (xdc_Char)0x6e,  /* [5371] */
    (xdc_Char)0x64,  /* [5372] */
    (xdc_Char)0x3a,  /* [5373] */
    (xdc_Char)0x20,  /* [5374] */
    (xdc_Char)0x73,  /* [5375] */
    (xdc_Char)0x77,  /* [5376] */
    (xdc_Char)0x69,  /* [5377] */
    (xdc_Char)0x3a,  /* [5378] */
    (xdc_Char)0x20,  /* [5379] */
    (xdc_Char)0x30,  /* [5380] */
    (xdc_Char)0x78,  /* [5381] */
    (xdc_Char)0x25,  /* [5382] */
    (xdc_Char)0x78,  /* [5383] */
    (xdc_Char)0x0,  /* [5384] */
    (xdc_Char)0x4c,  /* [5385] */
    (xdc_Char)0x4d,  /* [5386] */
    (xdc_Char)0x5f,  /* [5387] */
    (xdc_Char)0x70,  /* [5388] */
    (xdc_Char)0x6f,  /* [5389] */
    (xdc_Char)0x73,  /* [5390] */
    (xdc_Char)0x74,  /* [5391] */
    (xdc_Char)0x3a,  /* [5392] */
    (xdc_Char)0x20,  /* [5393] */
    (xdc_Char)0x73,  /* [5394] */
    (xdc_Char)0x77,  /* [5395] */
    (xdc_Char)0x69,  /* [5396] */
    (xdc_Char)0x3a,  /* [5397] */
    (xdc_Char)0x20,  /* [5398] */
    (xdc_Char)0x30,  /* [5399] */
    (xdc_Char)0x78,  /* [5400] */
    (xdc_Char)0x25,  /* [5401] */
    (xdc_Char)0x78,  /* [5402] */
    (xdc_Char)0x2c,  /* [5403] */
    (xdc_Char)0x20,  /* [5404] */
    (xdc_Char)0x66,  /* [5405] */
    (xdc_Char)0x75,  /* [5406] */
    (xdc_Char)0x6e,  /* [5407] */
    (xdc_Char)0x63,  /* [5408] */
    (xdc_Char)0x3a,  /* [5409] */
    (xdc_Char)0x20,  /* [5410] */
    (xdc_Char)0x30,  /* [5411] */
    (xdc_Char)0x78,  /* [5412] */
    (xdc_Char)0x25,  /* [5413] */
    (xdc_Char)0x78,  /* [5414] */
    (xdc_Char)0x2c,  /* [5415] */
    (xdc_Char)0x20,  /* [5416] */
    (xdc_Char)0x70,  /* [5417] */
    (xdc_Char)0x72,  /* [5418] */
    (xdc_Char)0x69,  /* [5419] */
    (xdc_Char)0x3a,  /* [5420] */
    (xdc_Char)0x20,  /* [5421] */
    (xdc_Char)0x25,  /* [5422] */
    (xdc_Char)0x64,  /* [5423] */
    (xdc_Char)0x0,  /* [5424] */
    (xdc_Char)0x4c,  /* [5425] */
    (xdc_Char)0x4d,  /* [5426] */
    (xdc_Char)0x5f,  /* [5427] */
    (xdc_Char)0x73,  /* [5428] */
    (xdc_Char)0x77,  /* [5429] */
    (xdc_Char)0x69,  /* [5430] */
    (xdc_Char)0x74,  /* [5431] */
    (xdc_Char)0x63,  /* [5432] */
    (xdc_Char)0x68,  /* [5433] */
    (xdc_Char)0x3a,  /* [5434] */
    (xdc_Char)0x20,  /* [5435] */
    (xdc_Char)0x6f,  /* [5436] */
    (xdc_Char)0x6c,  /* [5437] */
    (xdc_Char)0x64,  /* [5438] */
    (xdc_Char)0x74,  /* [5439] */
    (xdc_Char)0x73,  /* [5440] */
    (xdc_Char)0x6b,  /* [5441] */
    (xdc_Char)0x3a,  /* [5442] */
    (xdc_Char)0x20,  /* [5443] */
    (xdc_Char)0x30,  /* [5444] */
    (xdc_Char)0x78,  /* [5445] */
    (xdc_Char)0x25,  /* [5446] */
    (xdc_Char)0x78,  /* [5447] */
    (xdc_Char)0x2c,  /* [5448] */
    (xdc_Char)0x20,  /* [5449] */
    (xdc_Char)0x6f,  /* [5450] */
    (xdc_Char)0x6c,  /* [5451] */
    (xdc_Char)0x64,  /* [5452] */
    (xdc_Char)0x66,  /* [5453] */
    (xdc_Char)0x75,  /* [5454] */
    (xdc_Char)0x6e,  /* [5455] */
    (xdc_Char)0x63,  /* [5456] */
    (xdc_Char)0x3a,  /* [5457] */
    (xdc_Char)0x20,  /* [5458] */
    (xdc_Char)0x30,  /* [5459] */
    (xdc_Char)0x78,  /* [5460] */
    (xdc_Char)0x25,  /* [5461] */
    (xdc_Char)0x78,  /* [5462] */
    (xdc_Char)0x2c,  /* [5463] */
    (xdc_Char)0x20,  /* [5464] */
    (xdc_Char)0x6e,  /* [5465] */
    (xdc_Char)0x65,  /* [5466] */
    (xdc_Char)0x77,  /* [5467] */
    (xdc_Char)0x74,  /* [5468] */
    (xdc_Char)0x73,  /* [5469] */
    (xdc_Char)0x6b,  /* [5470] */
    (xdc_Char)0x3a,  /* [5471] */
    (xdc_Char)0x20,  /* [5472] */
    (xdc_Char)0x30,  /* [5473] */
    (xdc_Char)0x78,  /* [5474] */
    (xdc_Char)0x25,  /* [5475] */
    (xdc_Char)0x78,  /* [5476] */
    (xdc_Char)0x2c,  /* [5477] */
    (xdc_Char)0x20,  /* [5478] */
    (xdc_Char)0x6e,  /* [5479] */
    (xdc_Char)0x65,  /* [5480] */
    (xdc_Char)0x77,  /* [5481] */
    (xdc_Char)0x66,  /* [5482] */
    (xdc_Char)0x75,  /* [5483] */
    (xdc_Char)0x6e,  /* [5484] */
    (xdc_Char)0x63,  /* [5485] */
    (xdc_Char)0x3a,  /* [5486] */
    (xdc_Char)0x20,  /* [5487] */
    (xdc_Char)0x30,  /* [5488] */
    (xdc_Char)0x78,  /* [5489] */
    (xdc_Char)0x25,  /* [5490] */
    (xdc_Char)0x78,  /* [5491] */
    (xdc_Char)0x0,  /* [5492] */
    (xdc_Char)0x4c,  /* [5493] */
    (xdc_Char)0x4d,  /* [5494] */
    (xdc_Char)0x5f,  /* [5495] */
    (xdc_Char)0x73,  /* [5496] */
    (xdc_Char)0x6c,  /* [5497] */
    (xdc_Char)0x65,  /* [5498] */
    (xdc_Char)0x65,  /* [5499] */
    (xdc_Char)0x70,  /* [5500] */
    (xdc_Char)0x3a,  /* [5501] */
    (xdc_Char)0x20,  /* [5502] */
    (xdc_Char)0x74,  /* [5503] */
    (xdc_Char)0x73,  /* [5504] */
    (xdc_Char)0x6b,  /* [5505] */
    (xdc_Char)0x3a,  /* [5506] */
    (xdc_Char)0x20,  /* [5507] */
    (xdc_Char)0x30,  /* [5508] */
    (xdc_Char)0x78,  /* [5509] */
    (xdc_Char)0x25,  /* [5510] */
    (xdc_Char)0x78,  /* [5511] */
    (xdc_Char)0x2c,  /* [5512] */
    (xdc_Char)0x20,  /* [5513] */
    (xdc_Char)0x66,  /* [5514] */
    (xdc_Char)0x75,  /* [5515] */
    (xdc_Char)0x6e,  /* [5516] */
    (xdc_Char)0x63,  /* [5517] */
    (xdc_Char)0x3a,  /* [5518] */
    (xdc_Char)0x20,  /* [5519] */
    (xdc_Char)0x30,  /* [5520] */
    (xdc_Char)0x78,  /* [5521] */
    (xdc_Char)0x25,  /* [5522] */
    (xdc_Char)0x78,  /* [5523] */
    (xdc_Char)0x2c,  /* [5524] */
    (xdc_Char)0x20,  /* [5525] */
    (xdc_Char)0x74,  /* [5526] */
    (xdc_Char)0x69,  /* [5527] */
    (xdc_Char)0x6d,  /* [5528] */
    (xdc_Char)0x65,  /* [5529] */
    (xdc_Char)0x6f,  /* [5530] */
    (xdc_Char)0x75,  /* [5531] */
    (xdc_Char)0x74,  /* [5532] */
    (xdc_Char)0x3a,  /* [5533] */
    (xdc_Char)0x20,  /* [5534] */
    (xdc_Char)0x25,  /* [5535] */
    (xdc_Char)0x64,  /* [5536] */
    (xdc_Char)0x0,  /* [5537] */
    (xdc_Char)0x4c,  /* [5538] */
    (xdc_Char)0x44,  /* [5539] */
    (xdc_Char)0x5f,  /* [5540] */
    (xdc_Char)0x72,  /* [5541] */
    (xdc_Char)0x65,  /* [5542] */
    (xdc_Char)0x61,  /* [5543] */
    (xdc_Char)0x64,  /* [5544] */
    (xdc_Char)0x79,  /* [5545] */
    (xdc_Char)0x3a,  /* [5546] */
    (xdc_Char)0x20,  /* [5547] */
    (xdc_Char)0x74,  /* [5548] */
    (xdc_Char)0x73,  /* [5549] */
    (xdc_Char)0x6b,  /* [5550] */
    (xdc_Char)0x3a,  /* [5551] */
    (xdc_Char)0x20,  /* [5552] */
    (xdc_Char)0x30,  /* [5553] */
    (xdc_Char)0x78,  /* [5554] */
    (xdc_Char)0x25,  /* [5555] */
    (xdc_Char)0x78,  /* [5556] */
    (xdc_Char)0x2c,  /* [5557] */
    (xdc_Char)0x20,  /* [5558] */
    (xdc_Char)0x66,  /* [5559] */
    (xdc_Char)0x75,  /* [5560] */
    (xdc_Char)0x6e,  /* [5561] */
    (xdc_Char)0x63,  /* [5562] */
    (xdc_Char)0x3a,  /* [5563] */
    (xdc_Char)0x20,  /* [5564] */
    (xdc_Char)0x30,  /* [5565] */
    (xdc_Char)0x78,  /* [5566] */
    (xdc_Char)0x25,  /* [5567] */
    (xdc_Char)0x78,  /* [5568] */
    (xdc_Char)0x2c,  /* [5569] */
    (xdc_Char)0x20,  /* [5570] */
    (xdc_Char)0x70,  /* [5571] */
    (xdc_Char)0x72,  /* [5572] */
    (xdc_Char)0x69,  /* [5573] */
    (xdc_Char)0x3a,  /* [5574] */
    (xdc_Char)0x20,  /* [5575] */
    (xdc_Char)0x25,  /* [5576] */
    (xdc_Char)0x64,  /* [5577] */
    (xdc_Char)0x0,  /* [5578] */
    (xdc_Char)0x4c,  /* [5579] */
    (xdc_Char)0x44,  /* [5580] */
    (xdc_Char)0x5f,  /* [5581] */
    (xdc_Char)0x62,  /* [5582] */
    (xdc_Char)0x6c,  /* [5583] */
    (xdc_Char)0x6f,  /* [5584] */
    (xdc_Char)0x63,  /* [5585] */
    (xdc_Char)0x6b,  /* [5586] */
    (xdc_Char)0x3a,  /* [5587] */
    (xdc_Char)0x20,  /* [5588] */
    (xdc_Char)0x74,  /* [5589] */
    (xdc_Char)0x73,  /* [5590] */
    (xdc_Char)0x6b,  /* [5591] */
    (xdc_Char)0x3a,  /* [5592] */
    (xdc_Char)0x20,  /* [5593] */
    (xdc_Char)0x30,  /* [5594] */
    (xdc_Char)0x78,  /* [5595] */
    (xdc_Char)0x25,  /* [5596] */
    (xdc_Char)0x78,  /* [5597] */
    (xdc_Char)0x2c,  /* [5598] */
    (xdc_Char)0x20,  /* [5599] */
    (xdc_Char)0x66,  /* [5600] */
    (xdc_Char)0x75,  /* [5601] */
    (xdc_Char)0x6e,  /* [5602] */
    (xdc_Char)0x63,  /* [5603] */
    (xdc_Char)0x3a,  /* [5604] */
    (xdc_Char)0x20,  /* [5605] */
    (xdc_Char)0x30,  /* [5606] */
    (xdc_Char)0x78,  /* [5607] */
    (xdc_Char)0x25,  /* [5608] */
    (xdc_Char)0x78,  /* [5609] */
    (xdc_Char)0x0,  /* [5610] */
    (xdc_Char)0x4c,  /* [5611] */
    (xdc_Char)0x4d,  /* [5612] */
    (xdc_Char)0x5f,  /* [5613] */
    (xdc_Char)0x79,  /* [5614] */
    (xdc_Char)0x69,  /* [5615] */
    (xdc_Char)0x65,  /* [5616] */
    (xdc_Char)0x6c,  /* [5617] */
    (xdc_Char)0x64,  /* [5618] */
    (xdc_Char)0x3a,  /* [5619] */
    (xdc_Char)0x20,  /* [5620] */
    (xdc_Char)0x74,  /* [5621] */
    (xdc_Char)0x73,  /* [5622] */
    (xdc_Char)0x6b,  /* [5623] */
    (xdc_Char)0x3a,  /* [5624] */
    (xdc_Char)0x20,  /* [5625] */
    (xdc_Char)0x30,  /* [5626] */
    (xdc_Char)0x78,  /* [5627] */
    (xdc_Char)0x25,  /* [5628] */
    (xdc_Char)0x78,  /* [5629] */
    (xdc_Char)0x2c,  /* [5630] */
    (xdc_Char)0x20,  /* [5631] */
    (xdc_Char)0x66,  /* [5632] */
    (xdc_Char)0x75,  /* [5633] */
    (xdc_Char)0x6e,  /* [5634] */
    (xdc_Char)0x63,  /* [5635] */
    (xdc_Char)0x3a,  /* [5636] */
    (xdc_Char)0x20,  /* [5637] */
    (xdc_Char)0x30,  /* [5638] */
    (xdc_Char)0x78,  /* [5639] */
    (xdc_Char)0x25,  /* [5640] */
    (xdc_Char)0x78,  /* [5641] */
    (xdc_Char)0x2c,  /* [5642] */
    (xdc_Char)0x20,  /* [5643] */
    (xdc_Char)0x63,  /* [5644] */
    (xdc_Char)0x75,  /* [5645] */
    (xdc_Char)0x72,  /* [5646] */
    (xdc_Char)0x72,  /* [5647] */
    (xdc_Char)0x54,  /* [5648] */
    (xdc_Char)0x68,  /* [5649] */
    (xdc_Char)0x72,  /* [5650] */
    (xdc_Char)0x65,  /* [5651] */
    (xdc_Char)0x61,  /* [5652] */
    (xdc_Char)0x64,  /* [5653] */
    (xdc_Char)0x3a,  /* [5654] */
    (xdc_Char)0x20,  /* [5655] */
    (xdc_Char)0x25,  /* [5656] */
    (xdc_Char)0x64,  /* [5657] */
    (xdc_Char)0x0,  /* [5658] */
    (xdc_Char)0x4c,  /* [5659] */
    (xdc_Char)0x4d,  /* [5660] */
    (xdc_Char)0x5f,  /* [5661] */
    (xdc_Char)0x73,  /* [5662] */
    (xdc_Char)0x65,  /* [5663] */
    (xdc_Char)0x74,  /* [5664] */
    (xdc_Char)0x50,  /* [5665] */
    (xdc_Char)0x72,  /* [5666] */
    (xdc_Char)0x69,  /* [5667] */
    (xdc_Char)0x3a,  /* [5668] */
    (xdc_Char)0x20,  /* [5669] */
    (xdc_Char)0x74,  /* [5670] */
    (xdc_Char)0x73,  /* [5671] */
    (xdc_Char)0x6b,  /* [5672] */
    (xdc_Char)0x3a,  /* [5673] */
    (xdc_Char)0x20,  /* [5674] */
    (xdc_Char)0x30,  /* [5675] */
    (xdc_Char)0x78,  /* [5676] */
    (xdc_Char)0x25,  /* [5677] */
    (xdc_Char)0x78,  /* [5678] */
    (xdc_Char)0x2c,  /* [5679] */
    (xdc_Char)0x20,  /* [5680] */
    (xdc_Char)0x66,  /* [5681] */
    (xdc_Char)0x75,  /* [5682] */
    (xdc_Char)0x6e,  /* [5683] */
    (xdc_Char)0x63,  /* [5684] */
    (xdc_Char)0x3a,  /* [5685] */
    (xdc_Char)0x20,  /* [5686] */
    (xdc_Char)0x30,  /* [5687] */
    (xdc_Char)0x78,  /* [5688] */
    (xdc_Char)0x25,  /* [5689] */
    (xdc_Char)0x78,  /* [5690] */
    (xdc_Char)0x2c,  /* [5691] */
    (xdc_Char)0x20,  /* [5692] */
    (xdc_Char)0x6f,  /* [5693] */
    (xdc_Char)0x6c,  /* [5694] */
    (xdc_Char)0x64,  /* [5695] */
    (xdc_Char)0x50,  /* [5696] */
    (xdc_Char)0x72,  /* [5697] */
    (xdc_Char)0x69,  /* [5698] */
    (xdc_Char)0x3a,  /* [5699] */
    (xdc_Char)0x20,  /* [5700] */
    (xdc_Char)0x25,  /* [5701] */
    (xdc_Char)0x64,  /* [5702] */
    (xdc_Char)0x2c,  /* [5703] */
    (xdc_Char)0x20,  /* [5704] */
    (xdc_Char)0x6e,  /* [5705] */
    (xdc_Char)0x65,  /* [5706] */
    (xdc_Char)0x77,  /* [5707] */
    (xdc_Char)0x50,  /* [5708] */
    (xdc_Char)0x72,  /* [5709] */
    (xdc_Char)0x69,  /* [5710] */
    (xdc_Char)0x20,  /* [5711] */
    (xdc_Char)0x25,  /* [5712] */
    (xdc_Char)0x64,  /* [5713] */
    (xdc_Char)0x0,  /* [5714] */
    (xdc_Char)0x4c,  /* [5715] */
    (xdc_Char)0x44,  /* [5716] */
    (xdc_Char)0x5f,  /* [5717] */
    (xdc_Char)0x65,  /* [5718] */
    (xdc_Char)0x78,  /* [5719] */
    (xdc_Char)0x69,  /* [5720] */
    (xdc_Char)0x74,  /* [5721] */
    (xdc_Char)0x3a,  /* [5722] */
    (xdc_Char)0x20,  /* [5723] */
    (xdc_Char)0x74,  /* [5724] */
    (xdc_Char)0x73,  /* [5725] */
    (xdc_Char)0x6b,  /* [5726] */
    (xdc_Char)0x3a,  /* [5727] */
    (xdc_Char)0x20,  /* [5728] */
    (xdc_Char)0x30,  /* [5729] */
    (xdc_Char)0x78,  /* [5730] */
    (xdc_Char)0x25,  /* [5731] */
    (xdc_Char)0x78,  /* [5732] */
    (xdc_Char)0x2c,  /* [5733] */
    (xdc_Char)0x20,  /* [5734] */
    (xdc_Char)0x66,  /* [5735] */
    (xdc_Char)0x75,  /* [5736] */
    (xdc_Char)0x6e,  /* [5737] */
    (xdc_Char)0x63,  /* [5738] */
    (xdc_Char)0x3a,  /* [5739] */
    (xdc_Char)0x20,  /* [5740] */
    (xdc_Char)0x30,  /* [5741] */
    (xdc_Char)0x78,  /* [5742] */
    (xdc_Char)0x25,  /* [5743] */
    (xdc_Char)0x78,  /* [5744] */
    (xdc_Char)0x0,  /* [5745] */
    (xdc_Char)0x4c,  /* [5746] */
    (xdc_Char)0x4d,  /* [5747] */
    (xdc_Char)0x5f,  /* [5748] */
    (xdc_Char)0x73,  /* [5749] */
    (xdc_Char)0x65,  /* [5750] */
    (xdc_Char)0x74,  /* [5751] */
    (xdc_Char)0x41,  /* [5752] */
    (xdc_Char)0x66,  /* [5753] */
    (xdc_Char)0x66,  /* [5754] */
    (xdc_Char)0x69,  /* [5755] */
    (xdc_Char)0x6e,  /* [5756] */
    (xdc_Char)0x69,  /* [5757] */
    (xdc_Char)0x74,  /* [5758] */
    (xdc_Char)0x79,  /* [5759] */
    (xdc_Char)0x3a,  /* [5760] */
    (xdc_Char)0x20,  /* [5761] */
    (xdc_Char)0x74,  /* [5762] */
    (xdc_Char)0x73,  /* [5763] */
    (xdc_Char)0x6b,  /* [5764] */
    (xdc_Char)0x3a,  /* [5765] */
    (xdc_Char)0x20,  /* [5766] */
    (xdc_Char)0x30,  /* [5767] */
    (xdc_Char)0x78,  /* [5768] */
    (xdc_Char)0x25,  /* [5769] */
    (xdc_Char)0x78,  /* [5770] */
    (xdc_Char)0x2c,  /* [5771] */
    (xdc_Char)0x20,  /* [5772] */
    (xdc_Char)0x66,  /* [5773] */
    (xdc_Char)0x75,  /* [5774] */
    (xdc_Char)0x6e,  /* [5775] */
    (xdc_Char)0x63,  /* [5776] */
    (xdc_Char)0x3a,  /* [5777] */
    (xdc_Char)0x20,  /* [5778] */
    (xdc_Char)0x30,  /* [5779] */
    (xdc_Char)0x78,  /* [5780] */
    (xdc_Char)0x25,  /* [5781] */
    (xdc_Char)0x78,  /* [5782] */
    (xdc_Char)0x2c,  /* [5783] */
    (xdc_Char)0x20,  /* [5784] */
    (xdc_Char)0x6f,  /* [5785] */
    (xdc_Char)0x6c,  /* [5786] */
    (xdc_Char)0x64,  /* [5787] */
    (xdc_Char)0x43,  /* [5788] */
    (xdc_Char)0x6f,  /* [5789] */
    (xdc_Char)0x72,  /* [5790] */
    (xdc_Char)0x65,  /* [5791] */
    (xdc_Char)0x3a,  /* [5792] */
    (xdc_Char)0x20,  /* [5793] */
    (xdc_Char)0x25,  /* [5794] */
    (xdc_Char)0x64,  /* [5795] */
    (xdc_Char)0x2c,  /* [5796] */
    (xdc_Char)0x20,  /* [5797] */
    (xdc_Char)0x6f,  /* [5798] */
    (xdc_Char)0x6c,  /* [5799] */
    (xdc_Char)0x64,  /* [5800] */
    (xdc_Char)0x41,  /* [5801] */
    (xdc_Char)0x66,  /* [5802] */
    (xdc_Char)0x66,  /* [5803] */
    (xdc_Char)0x69,  /* [5804] */
    (xdc_Char)0x6e,  /* [5805] */
    (xdc_Char)0x69,  /* [5806] */
    (xdc_Char)0x74,  /* [5807] */
    (xdc_Char)0x79,  /* [5808] */
    (xdc_Char)0x20,  /* [5809] */
    (xdc_Char)0x25,  /* [5810] */
    (xdc_Char)0x64,  /* [5811] */
    (xdc_Char)0x2c,  /* [5812] */
    (xdc_Char)0x20,  /* [5813] */
    (xdc_Char)0x6e,  /* [5814] */
    (xdc_Char)0x65,  /* [5815] */
    (xdc_Char)0x77,  /* [5816] */
    (xdc_Char)0x41,  /* [5817] */
    (xdc_Char)0x66,  /* [5818] */
    (xdc_Char)0x66,  /* [5819] */
    (xdc_Char)0x69,  /* [5820] */
    (xdc_Char)0x6e,  /* [5821] */
    (xdc_Char)0x69,  /* [5822] */
    (xdc_Char)0x74,  /* [5823] */
    (xdc_Char)0x79,  /* [5824] */
    (xdc_Char)0x20,  /* [5825] */
    (xdc_Char)0x25,  /* [5826] */
    (xdc_Char)0x64,  /* [5827] */
    (xdc_Char)0x0,  /* [5828] */
    (xdc_Char)0x4c,  /* [5829] */
    (xdc_Char)0x44,  /* [5830] */
    (xdc_Char)0x5f,  /* [5831] */
    (xdc_Char)0x73,  /* [5832] */
    (xdc_Char)0x63,  /* [5833] */
    (xdc_Char)0x68,  /* [5834] */
    (xdc_Char)0x65,  /* [5835] */
    (xdc_Char)0x64,  /* [5836] */
    (xdc_Char)0x75,  /* [5837] */
    (xdc_Char)0x6c,  /* [5838] */
    (xdc_Char)0x65,  /* [5839] */
    (xdc_Char)0x3a,  /* [5840] */
    (xdc_Char)0x20,  /* [5841] */
    (xdc_Char)0x63,  /* [5842] */
    (xdc_Char)0x6f,  /* [5843] */
    (xdc_Char)0x72,  /* [5844] */
    (xdc_Char)0x65,  /* [5845] */
    (xdc_Char)0x49,  /* [5846] */
    (xdc_Char)0x64,  /* [5847] */
    (xdc_Char)0x3a,  /* [5848] */
    (xdc_Char)0x20,  /* [5849] */
    (xdc_Char)0x25,  /* [5850] */
    (xdc_Char)0x64,  /* [5851] */
    (xdc_Char)0x2c,  /* [5852] */
    (xdc_Char)0x20,  /* [5853] */
    (xdc_Char)0x77,  /* [5854] */
    (xdc_Char)0x6f,  /* [5855] */
    (xdc_Char)0x72,  /* [5856] */
    (xdc_Char)0x6b,  /* [5857] */
    (xdc_Char)0x46,  /* [5858] */
    (xdc_Char)0x6c,  /* [5859] */
    (xdc_Char)0x61,  /* [5860] */
    (xdc_Char)0x67,  /* [5861] */
    (xdc_Char)0x3a,  /* [5862] */
    (xdc_Char)0x20,  /* [5863] */
    (xdc_Char)0x25,  /* [5864] */
    (xdc_Char)0x64,  /* [5865] */
    (xdc_Char)0x2c,  /* [5866] */
    (xdc_Char)0x20,  /* [5867] */
    (xdc_Char)0x63,  /* [5868] */
    (xdc_Char)0x75,  /* [5869] */
    (xdc_Char)0x72,  /* [5870] */
    (xdc_Char)0x53,  /* [5871] */
    (xdc_Char)0x65,  /* [5872] */
    (xdc_Char)0x74,  /* [5873] */
    (xdc_Char)0x4c,  /* [5874] */
    (xdc_Char)0x6f,  /* [5875] */
    (xdc_Char)0x63,  /* [5876] */
    (xdc_Char)0x61,  /* [5877] */
    (xdc_Char)0x6c,  /* [5878] */
    (xdc_Char)0x3a,  /* [5879] */
    (xdc_Char)0x20,  /* [5880] */
    (xdc_Char)0x25,  /* [5881] */
    (xdc_Char)0x64,  /* [5882] */
    (xdc_Char)0x2c,  /* [5883] */
    (xdc_Char)0x20,  /* [5884] */
    (xdc_Char)0x63,  /* [5885] */
    (xdc_Char)0x75,  /* [5886] */
    (xdc_Char)0x72,  /* [5887] */
    (xdc_Char)0x53,  /* [5888] */
    (xdc_Char)0x65,  /* [5889] */
    (xdc_Char)0x74,  /* [5890] */
    (xdc_Char)0x58,  /* [5891] */
    (xdc_Char)0x3a,  /* [5892] */
    (xdc_Char)0x20,  /* [5893] */
    (xdc_Char)0x25,  /* [5894] */
    (xdc_Char)0x64,  /* [5895] */
    (xdc_Char)0x2c,  /* [5896] */
    (xdc_Char)0x20,  /* [5897] */
    (xdc_Char)0x63,  /* [5898] */
    (xdc_Char)0x75,  /* [5899] */
    (xdc_Char)0x72,  /* [5900] */
    (xdc_Char)0x4d,  /* [5901] */
    (xdc_Char)0x61,  /* [5902] */
    (xdc_Char)0x73,  /* [5903] */
    (xdc_Char)0x6b,  /* [5904] */
    (xdc_Char)0x4c,  /* [5905] */
    (xdc_Char)0x6f,  /* [5906] */
    (xdc_Char)0x63,  /* [5907] */
    (xdc_Char)0x61,  /* [5908] */
    (xdc_Char)0x6c,  /* [5909] */
    (xdc_Char)0x3a,  /* [5910] */
    (xdc_Char)0x20,  /* [5911] */
    (xdc_Char)0x25,  /* [5912] */
    (xdc_Char)0x64,  /* [5913] */
    (xdc_Char)0x0,  /* [5914] */
    (xdc_Char)0x4c,  /* [5915] */
    (xdc_Char)0x44,  /* [5916] */
    (xdc_Char)0x5f,  /* [5917] */
    (xdc_Char)0x6e,  /* [5918] */
    (xdc_Char)0x6f,  /* [5919] */
    (xdc_Char)0x57,  /* [5920] */
    (xdc_Char)0x6f,  /* [5921] */
    (xdc_Char)0x72,  /* [5922] */
    (xdc_Char)0x6b,  /* [5923] */
    (xdc_Char)0x3a,  /* [5924] */
    (xdc_Char)0x20,  /* [5925] */
    (xdc_Char)0x63,  /* [5926] */
    (xdc_Char)0x6f,  /* [5927] */
    (xdc_Char)0x72,  /* [5928] */
    (xdc_Char)0x65,  /* [5929] */
    (xdc_Char)0x49,  /* [5930] */
    (xdc_Char)0x64,  /* [5931] */
    (xdc_Char)0x3a,  /* [5932] */
    (xdc_Char)0x20,  /* [5933] */
    (xdc_Char)0x25,  /* [5934] */
    (xdc_Char)0x64,  /* [5935] */
    (xdc_Char)0x2c,  /* [5936] */
    (xdc_Char)0x20,  /* [5937] */
    (xdc_Char)0x63,  /* [5938] */
    (xdc_Char)0x75,  /* [5939] */
    (xdc_Char)0x72,  /* [5940] */
    (xdc_Char)0x53,  /* [5941] */
    (xdc_Char)0x65,  /* [5942] */
    (xdc_Char)0x74,  /* [5943] */
    (xdc_Char)0x4c,  /* [5944] */
    (xdc_Char)0x6f,  /* [5945] */
    (xdc_Char)0x63,  /* [5946] */
    (xdc_Char)0x61,  /* [5947] */
    (xdc_Char)0x6c,  /* [5948] */
    (xdc_Char)0x3a,  /* [5949] */
    (xdc_Char)0x20,  /* [5950] */
    (xdc_Char)0x25,  /* [5951] */
    (xdc_Char)0x64,  /* [5952] */
    (xdc_Char)0x2c,  /* [5953] */
    (xdc_Char)0x20,  /* [5954] */
    (xdc_Char)0x63,  /* [5955] */
    (xdc_Char)0x75,  /* [5956] */
    (xdc_Char)0x72,  /* [5957] */
    (xdc_Char)0x53,  /* [5958] */
    (xdc_Char)0x65,  /* [5959] */
    (xdc_Char)0x74,  /* [5960] */
    (xdc_Char)0x58,  /* [5961] */
    (xdc_Char)0x3a,  /* [5962] */
    (xdc_Char)0x20,  /* [5963] */
    (xdc_Char)0x25,  /* [5964] */
    (xdc_Char)0x64,  /* [5965] */
    (xdc_Char)0x2c,  /* [5966] */
    (xdc_Char)0x20,  /* [5967] */
    (xdc_Char)0x63,  /* [5968] */
    (xdc_Char)0x75,  /* [5969] */
    (xdc_Char)0x72,  /* [5970] */
    (xdc_Char)0x4d,  /* [5971] */
    (xdc_Char)0x61,  /* [5972] */
    (xdc_Char)0x73,  /* [5973] */
    (xdc_Char)0x6b,  /* [5974] */
    (xdc_Char)0x4c,  /* [5975] */
    (xdc_Char)0x6f,  /* [5976] */
    (xdc_Char)0x63,  /* [5977] */
    (xdc_Char)0x61,  /* [5978] */
    (xdc_Char)0x6c,  /* [5979] */
    (xdc_Char)0x3a,  /* [5980] */
    (xdc_Char)0x20,  /* [5981] */
    (xdc_Char)0x25,  /* [5982] */
    (xdc_Char)0x64,  /* [5983] */
    (xdc_Char)0x0,  /* [5984] */
    (xdc_Char)0x4c,  /* [5985] */
    (xdc_Char)0x4d,  /* [5986] */
    (xdc_Char)0x5f,  /* [5987] */
    (xdc_Char)0x62,  /* [5988] */
    (xdc_Char)0x65,  /* [5989] */
    (xdc_Char)0x67,  /* [5990] */
    (xdc_Char)0x69,  /* [5991] */
    (xdc_Char)0x6e,  /* [5992] */
    (xdc_Char)0x3a,  /* [5993] */
    (xdc_Char)0x20,  /* [5994] */
    (xdc_Char)0x68,  /* [5995] */
    (xdc_Char)0x77,  /* [5996] */
    (xdc_Char)0x69,  /* [5997] */
    (xdc_Char)0x3a,  /* [5998] */
    (xdc_Char)0x20,  /* [5999] */
    (xdc_Char)0x30,  /* [6000] */
    (xdc_Char)0x78,  /* [6001] */
    (xdc_Char)0x25,  /* [6002] */
    (xdc_Char)0x78,  /* [6003] */
    (xdc_Char)0x2c,  /* [6004] */
    (xdc_Char)0x20,  /* [6005] */
    (xdc_Char)0x66,  /* [6006] */
    (xdc_Char)0x75,  /* [6007] */
    (xdc_Char)0x6e,  /* [6008] */
    (xdc_Char)0x63,  /* [6009] */
    (xdc_Char)0x3a,  /* [6010] */
    (xdc_Char)0x20,  /* [6011] */
    (xdc_Char)0x30,  /* [6012] */
    (xdc_Char)0x78,  /* [6013] */
    (xdc_Char)0x25,  /* [6014] */
    (xdc_Char)0x78,  /* [6015] */
    (xdc_Char)0x2c,  /* [6016] */
    (xdc_Char)0x20,  /* [6017] */
    (xdc_Char)0x70,  /* [6018] */
    (xdc_Char)0x72,  /* [6019] */
    (xdc_Char)0x65,  /* [6020] */
    (xdc_Char)0x54,  /* [6021] */
    (xdc_Char)0x68,  /* [6022] */
    (xdc_Char)0x72,  /* [6023] */
    (xdc_Char)0x65,  /* [6024] */
    (xdc_Char)0x61,  /* [6025] */
    (xdc_Char)0x64,  /* [6026] */
    (xdc_Char)0x3a,  /* [6027] */
    (xdc_Char)0x20,  /* [6028] */
    (xdc_Char)0x25,  /* [6029] */
    (xdc_Char)0x64,  /* [6030] */
    (xdc_Char)0x2c,  /* [6031] */
    (xdc_Char)0x20,  /* [6032] */
    (xdc_Char)0x69,  /* [6033] */
    (xdc_Char)0x6e,  /* [6034] */
    (xdc_Char)0x74,  /* [6035] */
    (xdc_Char)0x4e,  /* [6036] */
    (xdc_Char)0x75,  /* [6037] */
    (xdc_Char)0x6d,  /* [6038] */
    (xdc_Char)0x3a,  /* [6039] */
    (xdc_Char)0x20,  /* [6040] */
    (xdc_Char)0x25,  /* [6041] */
    (xdc_Char)0x64,  /* [6042] */
    (xdc_Char)0x2c,  /* [6043] */
    (xdc_Char)0x20,  /* [6044] */
    (xdc_Char)0x69,  /* [6045] */
    (xdc_Char)0x72,  /* [6046] */
    (xdc_Char)0x70,  /* [6047] */
    (xdc_Char)0x3a,  /* [6048] */
    (xdc_Char)0x20,  /* [6049] */
    (xdc_Char)0x30,  /* [6050] */
    (xdc_Char)0x78,  /* [6051] */
    (xdc_Char)0x25,  /* [6052] */
    (xdc_Char)0x78,  /* [6053] */
    (xdc_Char)0x0,  /* [6054] */
    (xdc_Char)0x4c,  /* [6055] */
    (xdc_Char)0x44,  /* [6056] */
    (xdc_Char)0x5f,  /* [6057] */
    (xdc_Char)0x65,  /* [6058] */
    (xdc_Char)0x6e,  /* [6059] */
    (xdc_Char)0x64,  /* [6060] */
    (xdc_Char)0x3a,  /* [6061] */
    (xdc_Char)0x20,  /* [6062] */
    (xdc_Char)0x68,  /* [6063] */
    (xdc_Char)0x77,  /* [6064] */
    (xdc_Char)0x69,  /* [6065] */
    (xdc_Char)0x3a,  /* [6066] */
    (xdc_Char)0x20,  /* [6067] */
    (xdc_Char)0x30,  /* [6068] */
    (xdc_Char)0x78,  /* [6069] */
    (xdc_Char)0x25,  /* [6070] */
    (xdc_Char)0x78,  /* [6071] */
    (xdc_Char)0x0,  /* [6072] */
    (xdc_Char)0x78,  /* [6073] */
    (xdc_Char)0x64,  /* [6074] */
    (xdc_Char)0x63,  /* [6075] */
    (xdc_Char)0x2e,  /* [6076] */
    (xdc_Char)0x0,  /* [6077] */
    (xdc_Char)0x72,  /* [6078] */
    (xdc_Char)0x75,  /* [6079] */
    (xdc_Char)0x6e,  /* [6080] */
    (xdc_Char)0x74,  /* [6081] */
    (xdc_Char)0x69,  /* [6082] */
    (xdc_Char)0x6d,  /* [6083] */
    (xdc_Char)0x65,  /* [6084] */
    (xdc_Char)0x2e,  /* [6085] */
    (xdc_Char)0x0,  /* [6086] */
    (xdc_Char)0x41,  /* [6087] */
    (xdc_Char)0x73,  /* [6088] */
    (xdc_Char)0x73,  /* [6089] */
    (xdc_Char)0x65,  /* [6090] */
    (xdc_Char)0x72,  /* [6091] */
    (xdc_Char)0x74,  /* [6092] */
    (xdc_Char)0x0,  /* [6093] */
    (xdc_Char)0x43,  /* [6094] */
    (xdc_Char)0x6f,  /* [6095] */
    (xdc_Char)0x72,  /* [6096] */
    (xdc_Char)0x65,  /* [6097] */
    (xdc_Char)0x0,  /* [6098] */
    (xdc_Char)0x44,  /* [6099] */
    (xdc_Char)0x65,  /* [6100] */
    (xdc_Char)0x66,  /* [6101] */
    (xdc_Char)0x61,  /* [6102] */
    (xdc_Char)0x75,  /* [6103] */
    (xdc_Char)0x6c,  /* [6104] */
    (xdc_Char)0x74,  /* [6105] */
    (xdc_Char)0x73,  /* [6106] */
    (xdc_Char)0x0,  /* [6107] */
    (xdc_Char)0x44,  /* [6108] */
    (xdc_Char)0x69,  /* [6109] */
    (xdc_Char)0x61,  /* [6110] */
    (xdc_Char)0x67,  /* [6111] */
    (xdc_Char)0x73,  /* [6112] */
    (xdc_Char)0x0,  /* [6113] */
    (xdc_Char)0x45,  /* [6114] */
    (xdc_Char)0x72,  /* [6115] */
    (xdc_Char)0x72,  /* [6116] */
    (xdc_Char)0x6f,  /* [6117] */
    (xdc_Char)0x72,  /* [6118] */
    (xdc_Char)0x0,  /* [6119] */
    (xdc_Char)0x47,  /* [6120] */
    (xdc_Char)0x61,  /* [6121] */
    (xdc_Char)0x74,  /* [6122] */
    (xdc_Char)0x65,  /* [6123] */
    (xdc_Char)0x0,  /* [6124] */
    (xdc_Char)0x4c,  /* [6125] */
    (xdc_Char)0x6f,  /* [6126] */
    (xdc_Char)0x67,  /* [6127] */
    (xdc_Char)0x0,  /* [6128] */
    (xdc_Char)0x4d,  /* [6129] */
    (xdc_Char)0x61,  /* [6130] */
    (xdc_Char)0x69,  /* [6131] */
    (xdc_Char)0x6e,  /* [6132] */
    (xdc_Char)0x0,  /* [6133] */
    (xdc_Char)0x4d,  /* [6134] */
    (xdc_Char)0x65,  /* [6135] */
    (xdc_Char)0x6d,  /* [6136] */
    (xdc_Char)0x6f,  /* [6137] */
    (xdc_Char)0x72,  /* [6138] */
    (xdc_Char)0x79,  /* [6139] */
    (xdc_Char)0x0,  /* [6140] */
    (xdc_Char)0x52,  /* [6141] */
    (xdc_Char)0x65,  /* [6142] */
    (xdc_Char)0x67,  /* [6143] */
    (xdc_Char)0x69,  /* [6144] */
    (xdc_Char)0x73,  /* [6145] */
    (xdc_Char)0x74,  /* [6146] */
    (xdc_Char)0x72,  /* [6147] */
    (xdc_Char)0x79,  /* [6148] */
    (xdc_Char)0x0,  /* [6149] */
    (xdc_Char)0x53,  /* [6150] */
    (xdc_Char)0x74,  /* [6151] */
    (xdc_Char)0x61,  /* [6152] */
    (xdc_Char)0x72,  /* [6153] */
    (xdc_Char)0x74,  /* [6154] */
    (xdc_Char)0x75,  /* [6155] */
    (xdc_Char)0x70,  /* [6156] */
    (xdc_Char)0x0,  /* [6157] */
    (xdc_Char)0x53,  /* [6158] */
    (xdc_Char)0x79,  /* [6159] */
    (xdc_Char)0x73,  /* [6160] */
    (xdc_Char)0x74,  /* [6161] */
    (xdc_Char)0x65,  /* [6162] */
    (xdc_Char)0x6d,  /* [6163] */
    (xdc_Char)0x0,  /* [6164] */
    (xdc_Char)0x53,  /* [6165] */
    (xdc_Char)0x79,  /* [6166] */
    (xdc_Char)0x73,  /* [6167] */
    (xdc_Char)0x4d,  /* [6168] */
    (xdc_Char)0x69,  /* [6169] */
    (xdc_Char)0x6e,  /* [6170] */
    (xdc_Char)0x0,  /* [6171] */
    (xdc_Char)0x54,  /* [6172] */
    (xdc_Char)0x65,  /* [6173] */
    (xdc_Char)0x78,  /* [6174] */
    (xdc_Char)0x74,  /* [6175] */
    (xdc_Char)0x0,  /* [6176] */
    (xdc_Char)0x54,  /* [6177] */
    (xdc_Char)0x79,  /* [6178] */
    (xdc_Char)0x70,  /* [6179] */
    (xdc_Char)0x65,  /* [6180] */
    (xdc_Char)0x73,  /* [6181] */
    (xdc_Char)0x0,  /* [6182] */
    (xdc_Char)0x74,  /* [6183] */
    (xdc_Char)0x69,  /* [6184] */
    (xdc_Char)0x2e,  /* [6185] */
    (xdc_Char)0x0,  /* [6186] */
    (xdc_Char)0x73,  /* [6187] */
    (xdc_Char)0x79,  /* [6188] */
    (xdc_Char)0x73,  /* [6189] */
    (xdc_Char)0x62,  /* [6190] */
    (xdc_Char)0x69,  /* [6191] */
    (xdc_Char)0x6f,  /* [6192] */
    (xdc_Char)0x73,  /* [6193] */
    (xdc_Char)0x2e,  /* [6194] */
    (xdc_Char)0x0,  /* [6195] */
    (xdc_Char)0x6b,  /* [6196] */
    (xdc_Char)0x6e,  /* [6197] */
    (xdc_Char)0x6c,  /* [6198] */
    (xdc_Char)0x2e,  /* [6199] */
    (xdc_Char)0x0,  /* [6200] */
    (xdc_Char)0x43,  /* [6201] */
    (xdc_Char)0x6c,  /* [6202] */
    (xdc_Char)0x6f,  /* [6203] */
    (xdc_Char)0x63,  /* [6204] */
    (xdc_Char)0x6b,  /* [6205] */
    (xdc_Char)0x0,  /* [6206] */
    (xdc_Char)0x49,  /* [6207] */
    (xdc_Char)0x64,  /* [6208] */
    (xdc_Char)0x6c,  /* [6209] */
    (xdc_Char)0x65,  /* [6210] */
    (xdc_Char)0x0,  /* [6211] */
    (xdc_Char)0x49,  /* [6212] */
    (xdc_Char)0x6e,  /* [6213] */
    (xdc_Char)0x74,  /* [6214] */
    (xdc_Char)0x72,  /* [6215] */
    (xdc_Char)0x69,  /* [6216] */
    (xdc_Char)0x6e,  /* [6217] */
    (xdc_Char)0x73,  /* [6218] */
    (xdc_Char)0x69,  /* [6219] */
    (xdc_Char)0x63,  /* [6220] */
    (xdc_Char)0x73,  /* [6221] */
    (xdc_Char)0x0,  /* [6222] */
    (xdc_Char)0x45,  /* [6223] */
    (xdc_Char)0x76,  /* [6224] */
    (xdc_Char)0x65,  /* [6225] */
    (xdc_Char)0x6e,  /* [6226] */
    (xdc_Char)0x74,  /* [6227] */
    (xdc_Char)0x0,  /* [6228] */
    (xdc_Char)0x51,  /* [6229] */
    (xdc_Char)0x75,  /* [6230] */
    (xdc_Char)0x65,  /* [6231] */
    (xdc_Char)0x75,  /* [6232] */
    (xdc_Char)0x65,  /* [6233] */
    (xdc_Char)0x0,  /* [6234] */
    (xdc_Char)0x53,  /* [6235] */
    (xdc_Char)0x65,  /* [6236] */
    (xdc_Char)0x6d,  /* [6237] */
    (xdc_Char)0x61,  /* [6238] */
    (xdc_Char)0x70,  /* [6239] */
    (xdc_Char)0x68,  /* [6240] */
    (xdc_Char)0x6f,  /* [6241] */
    (xdc_Char)0x72,  /* [6242] */
    (xdc_Char)0x65,  /* [6243] */
    (xdc_Char)0x0,  /* [6244] */
    (xdc_Char)0x53,  /* [6245] */
    (xdc_Char)0x77,  /* [6246] */
    (xdc_Char)0x69,  /* [6247] */
    (xdc_Char)0x0,  /* [6248] */
    (xdc_Char)0x54,  /* [6249] */
    (xdc_Char)0x61,  /* [6250] */
    (xdc_Char)0x73,  /* [6251] */
    (xdc_Char)0x6b,  /* [6252] */
    (xdc_Char)0x0,  /* [6253] */
    (xdc_Char)0x42,  /* [6254] */
    (xdc_Char)0x49,  /* [6255] */
    (xdc_Char)0x4f,  /* [6256] */
    (xdc_Char)0x53,  /* [6257] */
    (xdc_Char)0x0,  /* [6258] */
    (xdc_Char)0x68,  /* [6259] */
    (xdc_Char)0x61,  /* [6260] */
    (xdc_Char)0x6c,  /* [6261] */
    (xdc_Char)0x2e,  /* [6262] */
    (xdc_Char)0x0,  /* [6263] */
    (xdc_Char)0x43,  /* [6264] */
    (xdc_Char)0x6f,  /* [6265] */
    (xdc_Char)0x72,  /* [6266] */
    (xdc_Char)0x65,  /* [6267] */
    (xdc_Char)0x4e,  /* [6268] */
    (xdc_Char)0x75,  /* [6269] */
    (xdc_Char)0x6c,  /* [6270] */
    (xdc_Char)0x6c,  /* [6271] */
    (xdc_Char)0x0,  /* [6272] */
    (xdc_Char)0x48,  /* [6273] */
    (xdc_Char)0x77,  /* [6274] */
    (xdc_Char)0x69,  /* [6275] */
    (xdc_Char)0x0,  /* [6276] */
    (xdc_Char)0x67,  /* [6277] */
    (xdc_Char)0x61,  /* [6278] */
    (xdc_Char)0x74,  /* [6279] */
    (xdc_Char)0x65,  /* [6280] */
    (xdc_Char)0x73,  /* [6281] */
    (xdc_Char)0x2e,  /* [6282] */
    (xdc_Char)0x0,  /* [6283] */
    (xdc_Char)0x47,  /* [6284] */
    (xdc_Char)0x61,  /* [6285] */
    (xdc_Char)0x74,  /* [6286] */
    (xdc_Char)0x65,  /* [6287] */
    (xdc_Char)0x48,  /* [6288] */
    (xdc_Char)0x77,  /* [6289] */
    (xdc_Char)0x69,  /* [6290] */
    (xdc_Char)0x0,  /* [6291] */
    (xdc_Char)0x47,  /* [6292] */
    (xdc_Char)0x61,  /* [6293] */
    (xdc_Char)0x74,  /* [6294] */
    (xdc_Char)0x65,  /* [6295] */
    (xdc_Char)0x4d,  /* [6296] */
    (xdc_Char)0x75,  /* [6297] */
    (xdc_Char)0x74,  /* [6298] */
    (xdc_Char)0x65,  /* [6299] */
    (xdc_Char)0x78,  /* [6300] */
    (xdc_Char)0x0,  /* [6301] */
    (xdc_Char)0x66,  /* [6302] */
    (xdc_Char)0x61,  /* [6303] */
    (xdc_Char)0x6d,  /* [6304] */
    (xdc_Char)0x69,  /* [6305] */
    (xdc_Char)0x6c,  /* [6306] */
    (xdc_Char)0x79,  /* [6307] */
    (xdc_Char)0x2e,  /* [6308] */
    (xdc_Char)0x0,  /* [6309] */
    (xdc_Char)0x61,  /* [6310] */
    (xdc_Char)0x72,  /* [6311] */
    (xdc_Char)0x6d,  /* [6312] */
    (xdc_Char)0x2e,  /* [6313] */
    (xdc_Char)0x0,  /* [6314] */
    (xdc_Char)0x6d,  /* [6315] */
    (xdc_Char)0x33,  /* [6316] */
    (xdc_Char)0x2e,  /* [6317] */
    (xdc_Char)0x0,  /* [6318] */
    (xdc_Char)0x49,  /* [6319] */
    (xdc_Char)0x6e,  /* [6320] */
    (xdc_Char)0x74,  /* [6321] */
    (xdc_Char)0x72,  /* [6322] */
    (xdc_Char)0x69,  /* [6323] */
    (xdc_Char)0x6e,  /* [6324] */
    (xdc_Char)0x73,  /* [6325] */
    (xdc_Char)0x69,  /* [6326] */
    (xdc_Char)0x63,  /* [6327] */
    (xdc_Char)0x73,  /* [6328] */
    (xdc_Char)0x53,  /* [6329] */
    (xdc_Char)0x75,  /* [6330] */
    (xdc_Char)0x70,  /* [6331] */
    (xdc_Char)0x70,  /* [6332] */
    (xdc_Char)0x6f,  /* [6333] */
    (xdc_Char)0x72,  /* [6334] */
    (xdc_Char)0x74,  /* [6335] */
    (xdc_Char)0x0,  /* [6336] */
    (xdc_Char)0x54,  /* [6337] */
    (xdc_Char)0x61,  /* [6338] */
    (xdc_Char)0x73,  /* [6339] */
    (xdc_Char)0x6b,  /* [6340] */
    (xdc_Char)0x53,  /* [6341] */
    (xdc_Char)0x75,  /* [6342] */
    (xdc_Char)0x70,  /* [6343] */
    (xdc_Char)0x70,  /* [6344] */
    (xdc_Char)0x6f,  /* [6345] */
    (xdc_Char)0x72,  /* [6346] */
    (xdc_Char)0x74,  /* [6347] */
    (xdc_Char)0x0,  /* [6348] */
    (xdc_Char)0x54,  /* [6349] */
    (xdc_Char)0x69,  /* [6350] */
    (xdc_Char)0x6d,  /* [6351] */
    (xdc_Char)0x65,  /* [6352] */
    (xdc_Char)0x72,  /* [6353] */
    (xdc_Char)0x0,  /* [6354] */
    (xdc_Char)0x68,  /* [6355] */
    (xdc_Char)0x65,  /* [6356] */
    (xdc_Char)0x61,  /* [6357] */
    (xdc_Char)0x70,  /* [6358] */
    (xdc_Char)0x73,  /* [6359] */
    (xdc_Char)0x2e,  /* [6360] */
    (xdc_Char)0x0,  /* [6361] */
    (xdc_Char)0x48,  /* [6362] */
    (xdc_Char)0x65,  /* [6363] */
    (xdc_Char)0x61,  /* [6364] */
    (xdc_Char)0x70,  /* [6365] */
    (xdc_Char)0x4d,  /* [6366] */
    (xdc_Char)0x65,  /* [6367] */
    (xdc_Char)0x6d,  /* [6368] */
    (xdc_Char)0x0,  /* [6369] */
    (xdc_Char)0x48,  /* [6370] */
    (xdc_Char)0x65,  /* [6371] */
    (xdc_Char)0x61,  /* [6372] */
    (xdc_Char)0x70,  /* [6373] */
    (xdc_Char)0x54,  /* [6374] */
    (xdc_Char)0x72,  /* [6375] */
    (xdc_Char)0x61,  /* [6376] */
    (xdc_Char)0x63,  /* [6377] */
    (xdc_Char)0x6b,  /* [6378] */
    (xdc_Char)0x0,  /* [6379] */
    (xdc_Char)0x50,  /* [6380] */
    (xdc_Char)0x72,  /* [6381] */
    (xdc_Char)0x6f,  /* [6382] */
    (xdc_Char)0x62,  /* [6383] */
    (xdc_Char)0x65,  /* [6384] */
    (xdc_Char)0x52,  /* [6385] */
    (xdc_Char)0x65,  /* [6386] */
    (xdc_Char)0x61,  /* [6387] */
    (xdc_Char)0x64,  /* [6388] */
    (xdc_Char)0x69,  /* [6389] */
    (xdc_Char)0x6e,  /* [6390] */
    (xdc_Char)0x67,  /* [6391] */
    (xdc_Char)0x52,  /* [6392] */
    (xdc_Char)0x65,  /* [6393] */
    (xdc_Char)0x61,  /* [6394] */
    (xdc_Char)0x64,  /* [6395] */
    (xdc_Char)0x79,  /* [6396] */
    (xdc_Char)0x0,  /* [6397] */
    (xdc_Char)0x49,  /* [6398] */
    (xdc_Char)0x32,  /* [6399] */
    (xdc_Char)0x43,  /* [6400] */
    (xdc_Char)0x5f,  /* [6401] */
    (xdc_Char)0x73,  /* [6402] */
    (xdc_Char)0x65,  /* [6403] */
    (xdc_Char)0x6d,  /* [6404] */
    (xdc_Char)0x0,  /* [6405] */
    (xdc_Char)0x55,  /* [6406] */
    (xdc_Char)0x61,  /* [6407] */
    (xdc_Char)0x72,  /* [6408] */
    (xdc_Char)0x74,  /* [6409] */
    (xdc_Char)0x54,  /* [6410] */
    (xdc_Char)0x61,  /* [6411] */
    (xdc_Char)0x73,  /* [6412] */
    (xdc_Char)0x6b,  /* [6413] */
    (xdc_Char)0x0,  /* [6414] */
    (xdc_Char)0x50,  /* [6415] */
    (xdc_Char)0x68,  /* [6416] */
    (xdc_Char)0x54,  /* [6417] */
    (xdc_Char)0x61,  /* [6418] */
    (xdc_Char)0x73,  /* [6419] */
    (xdc_Char)0x6b,  /* [6420] */
    (xdc_Char)0x0,  /* [6421] */
    (xdc_Char)0x54,  /* [6422] */
    (xdc_Char)0x65,  /* [6423] */
    (xdc_Char)0x6d,  /* [6424] */
    (xdc_Char)0x70,  /* [6425] */
    (xdc_Char)0x65,  /* [6426] */
    (xdc_Char)0x72,  /* [6427] */
    (xdc_Char)0x61,  /* [6428] */
    (xdc_Char)0x74,  /* [6429] */
    (xdc_Char)0x75,  /* [6430] */
    (xdc_Char)0x72,  /* [6431] */
    (xdc_Char)0x65,  /* [6432] */
    (xdc_Char)0x54,  /* [6433] */
    (xdc_Char)0x61,  /* [6434] */
    (xdc_Char)0x73,  /* [6435] */
    (xdc_Char)0x6b,  /* [6436] */
    (xdc_Char)0x0,  /* [6437] */
    (xdc_Char)0x74,  /* [6438] */
    (xdc_Char)0x69,  /* [6439] */
    (xdc_Char)0x2e,  /* [6440] */
    (xdc_Char)0x73,  /* [6441] */
    (xdc_Char)0x79,  /* [6442] */
    (xdc_Char)0x73,  /* [6443] */
    (xdc_Char)0x62,  /* [6444] */
    (xdc_Char)0x69,  /* [6445] */
    (xdc_Char)0x6f,  /* [6446] */
    (xdc_Char)0x73,  /* [6447] */
    (xdc_Char)0x2e,  /* [6448] */
    (xdc_Char)0x6b,  /* [6449] */
    (xdc_Char)0x6e,  /* [6450] */
    (xdc_Char)0x6c,  /* [6451] */
    (xdc_Char)0x2e,  /* [6452] */
    (xdc_Char)0x54,  /* [6453] */
    (xdc_Char)0x61,  /* [6454] */
    (xdc_Char)0x73,  /* [6455] */
    (xdc_Char)0x6b,  /* [6456] */
    (xdc_Char)0x2e,  /* [6457] */
    (xdc_Char)0x49,  /* [6458] */
    (xdc_Char)0x64,  /* [6459] */
    (xdc_Char)0x6c,  /* [6460] */
    (xdc_Char)0x65,  /* [6461] */
    (xdc_Char)0x54,  /* [6462] */
    (xdc_Char)0x61,  /* [6463] */
    (xdc_Char)0x73,  /* [6464] */
    (xdc_Char)0x6b,  /* [6465] */
    (xdc_Char)0x0,  /* [6466] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[45] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x17b9,  /* left */
        (xdc_Bits16)0x17be,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17c7,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17ce,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17d3,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17dc,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17e2,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17e8,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17ed,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17f1,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17f6,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17fd,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1806,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x180e,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1815,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x181c,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1821,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x1827,  /* left */
        (xdc_Bits16)0x182b,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1834,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1839,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x183f,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1844,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x184f,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1855,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x185b,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1865,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1869,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x186e,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1873,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x17ce,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1878,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1881,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1885,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x188c,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x1894,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x189e,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x18a6,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x18ab,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x1881,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x18af,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x18c1,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x18cd,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x18d3,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x18da,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x18e2,  /* right */
    },  /* [44] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((const CT__xdc_runtime_Text_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((const CT__xdc_runtime_Text_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((const CT__xdc_runtime_Text_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((const CT__xdc_runtime_Text_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((const CT__xdc_runtime_Text_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((const CT__xdc_runtime_Text_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((const CT__xdc_runtime_Text_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((const CT__xdc_runtime_Text_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((const CT__xdc_runtime_Text_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = NULL;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((const CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((const CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1943;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x2d;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((const CT__xdc_runtime_Text_visitRopeFxn)(xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((const CT__xdc_runtime_Text_visitRopeFxn2)(xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((const CT__xdc_runtime_Types_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((const CT__xdc_runtime_Types_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((const CT__xdc_runtime_Types_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((const CT__xdc_runtime_Types_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((const CT__xdc_runtime_Types_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((const CT__xdc_runtime_Types_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((const CT__xdc_runtime_Types_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((const CT__xdc_runtime_Types_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((const CT__xdc_runtime_Types_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = NULL;


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_printf_va__F(fmt, arg__va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_printf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_aprintf_va__F(fmt, arg__va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_aprintf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);

    va_end(arg__va);
    return retval;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.hal.Core_CoreProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.hal.CoreNull */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Core_CoreProxy_Module__startupDone__S(void)
{
    return ti_sysbios_hal_CoreNull_Module__startupDone__S();
}

/* getId__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_getId__E( void )
{
    return ti_sysbios_hal_CoreNull_getId();
}

/* interruptCore__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_interruptCore__E( xdc_UInt coreId )
{
    ti_sysbios_hal_CoreNull_interruptCore(coreId);
}

/* lock__E */
xdc_IArg ti_sysbios_hal_Core_CoreProxy_lock__E( void )
{
    return ti_sysbios_hal_CoreNull_lock();
}

/* unlock__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_unlock__E( void )
{
    ti_sysbios_hal_CoreNull_unlock();
}

/* hwiDisable__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_hwiDisable__E( void )
{
    return ti_sysbios_hal_CoreNull_hwiDisable();
}

/* hwiEnable__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_hwiEnable__E( void )
{
    return ti_sysbios_hal_CoreNull_hwiEnable();
}

/* hwiRestore__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_hwiRestore__E( xdc_UInt key )
{
    ti_sysbios_hal_CoreNull_hwiRestore(key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_arm_m3_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_arm_m3_Hwi_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_m3_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_family_arm_m3_Timer_create(id, tickFxn, (const ti_sysbios_family_arm_m3_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_family_arm_m3_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_m3_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_m3_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_m3_Timer_getMaxTicks((ti_sysbios_family_arm_m3_Timer_Handle)inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_m3_Timer_setNextTick((ti_sysbios_family_arm_m3_Timer_Handle)inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_arm_m3_Timer_start((ti_sysbios_family_arm_m3_Timer_Handle)inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_arm_m3_Timer_stop((ti_sysbios_family_arm_m3_Timer_Handle)inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_m3_Timer_setPeriod((ti_sysbios_family_arm_m3_Timer_Handle)inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_m3_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_m3_Timer_Handle)inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_m3_Timer_getPeriod((ti_sysbios_family_arm_m3_Timer_Handle)inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_m3_Timer_getCount((ti_sysbios_family_arm_m3_Timer_Handle)inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_m3_Timer_getFreq((ti_sysbios_family_arm_m3_Timer_Handle)inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Timer_getFunc((ti_sysbios_family_arm_m3_Timer_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Timer_setFunc((ti_sysbios_family_arm_m3_Timer_Handle)inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_m3_Timer_trigger((ti_sysbios_family_arm_m3_Timer_Handle)inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_m3_Timer_getExpiredCounts((ti_sysbios_family_arm_m3_Timer_Handle)inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_m3_Timer_getExpiredTicks((ti_sysbios_family_arm_m3_Timer_Handle)inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_m3_Timer_getCurrentTick((ti_sysbios_family_arm_m3_Timer_Handle)inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}

/* getCheckValueAddr__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_getCheckValueAddr__E( xdc_Ptr curTask )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getCheckValueAddr(curTask);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapTrack */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S(void)
{
    return ti_sysbios_heaps_HeapTrack_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)ti_sysbios_heaps_HeapTrack_create((const ti_sysbios_heaps_HeapTrack_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapTrack_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapTrack_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapTrack_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S(void)
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Timer_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_m3_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Timer___S1) - sizeof(ti_sysbios_family_arm_m3_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapTrack OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapTrack_Object2__ s0; char c; } ti_sysbios_heaps_HeapTrack___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__DESC__C, ".const:ti_sysbios_heaps_HeapTrack_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapTrack_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapTrack_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapTrack_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapTrack___S1) - sizeof(ti_sysbios_heaps_HeapTrack_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapTrack_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapTrack_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapTrack_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32806;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_m3_Hwi_Object__ * const)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_m3_Hwi_Args__create *__args = req_args;
    ti_sysbios_family_arm_m3_Hwi_Params instPrms;
    ti_sysbios_family_arm_m3_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_m3_Hwi_Params prms;
    ti_sysbios_family_arm_m3_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_m3_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Timer_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Timer_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32809;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_arm_m3_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_m3_Timer_Object__ * const)ti_sysbios_family_arm_m3_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_m3_Timer_Args__create *__args = req_args;
    ti_sysbios_family_arm_m3_Timer_Params instPrms;
    ti_sysbios_family_arm_m3_Timer_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E(objp, __args->id, __args->tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_arm_m3_Timer_Handle ti_sysbios_family_arm_m3_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_m3_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_m3_Timer_Params prms;
    ti_sysbios_family_arm_m3_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_m3_Timer_construct(ti_sysbios_family_arm_m3_Timer_Struct *objp, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_m3_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_m3_Timer_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E((xdc_Ptr)objp, id, tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_m3_Timer_destruct(ti_sysbios_family_arm_m3_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, *((ti_sysbios_family_arm_m3_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Timer_delete(ti_sysbios_family_arm_m3_Timer_Handle *instp)
{
    ti_sysbios_family_arm_m3_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params instPrms;
    ti_sysbios_gates_GateHwi_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *objp, const ti_sysbios_gates_GateHwi_Params *paramsPtr)
{
    ti_sysbios_gates_GateHwi_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params instPrms;
    ti_sysbios_gates_GateMutex_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *objp, const ti_sysbios_gates_GateMutex_Params *paramsPtr)
{
    ti_sysbios_gates_GateMutex_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.CoreNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_CoreNull_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.Core_CoreProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_hal_Core_CoreProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Core_CoreProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_hal_CoreNull_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = req_args;
    ti_sysbios_hal_Hwi_Params instPrms;
    ti_sysbios_hal_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32811;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapMem_Object__ * const)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;
    ti_sysbios_heaps_HeapMem_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *objp, const ti_sysbios_heaps_HeapMem_Params *paramsPtr)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.heaps.HeapTrack SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapTrack_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapTrack_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapTrack_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapTrack_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapTrack_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapTrack_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapTrack_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapTrack_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapTrack_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapTrack_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapTrack_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapTrack_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32812;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapTrack_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapTrack_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_heaps_HeapTrack_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapTrack_Object__ * const)ti_sysbios_heaps_HeapTrack_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapTrack_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapTrack_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapTrack_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapTrack_Params instPrms;
    ti_sysbios_heaps_HeapTrack_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapTrack_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapTrack_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_create( const ti_sysbios_heaps_HeapTrack_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapTrack_Params prms;
    ti_sysbios_heaps_HeapTrack_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapTrack_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapTrack_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapTrack_construct(ti_sysbios_heaps_HeapTrack_Struct *objp, const ti_sysbios_heaps_HeapTrack_Params *paramsPtr)
{
    ti_sysbios_heaps_HeapTrack_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapTrack_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapTrack_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_heaps_HeapTrack_destruct(ti_sysbios_heaps_HeapTrack_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapTrack_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_heaps_HeapTrack_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapTrack_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapTrack_Object__DESC__C, *((ti_sysbios_heaps_HeapTrack_Object**)instp), (xdc_Fxn)ti_sysbios_heaps_HeapTrack_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_heaps_HeapTrack_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapTrack_delete(ti_sysbios_heaps_HeapTrack_Handle *instp)
{
    ti_sysbios_heaps_HeapTrack_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32787;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = req_args;
    ti_sysbios_knl_Clock_Params instPrms;
    ti_sysbios_knl_Clock_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(objp, __args->clockFxn, __args->timeout, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(obj, clockFxn, timeout, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *objp, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr)
{
    ti_sysbios_knl_Clock_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)objp, clockFxn, timeout, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32790;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Event_Object__ * const)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params instPrms;
    ti_sysbios_knl_Event_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params prms;
    ti_sysbios_knl_Event_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *objp, const ti_sysbios_knl_Event_Params *paramsPtr)
{
    ti_sysbios_knl_Event_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32791;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params instPrms;
    ti_sysbios_knl_Queue_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *objp, const ti_sysbios_knl_Queue_Params *paramsPtr)
{
    ti_sysbios_knl_Queue_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32792;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Semaphore_Object__ * const)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = req_args;
    ti_sysbios_knl_Semaphore_Params instPrms;
    ti_sysbios_knl_Semaphore_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(objp, __args->count, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(obj, count, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *objp, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr)
{
    ti_sysbios_knl_Semaphore_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)objp, count, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32793;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = req_args;
    ti_sysbios_knl_Swi_Params instPrms;
    ti_sysbios_knl_Swi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(objp, __args->swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(obj, swiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *objp, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)objp, swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32794;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Task_Object__ * const)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = req_args;
    ti_sysbios_knl_Task_Params instPrms;
    ti_sysbios_knl_Task_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(objp, __args->fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(obj, fxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *objp, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)objp, fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S(void)
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_heaps_HeapTrack_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

#include <stdint.h>
extern int_least32_t __xdc__init(void);
#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __ti__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
__FAR__ int_least32_t (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __ti__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
const ti_sysbios_knl_Task_Handle UartTask = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);

#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __ti__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
const ti_sysbios_knl_Task_Handle PhTask = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1]);

#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __ti__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
const ti_sysbios_knl_Task_Handle TemperatureTask = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[2]);

#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __ti__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle I2C_sem = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[0]);

#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __ti__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
const ti_sysbios_knl_Event_Handle ProbeReadingReady = (ti_sysbios_knl_Event_Handle)((ti_sysbios_knl_Event_Handle)&ti_sysbios_knl_Event_Object__table__V[0]);

