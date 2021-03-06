/** @file     OsTask_1.c
  *
  * @brief    Task OsTask_1 body
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS GmbH  RTA-RTE v5.5.0  (R4.0 backend version: v7.2.5 (Build 34089))
  *           at Mon Apr 25 15:53:17 2016
  */

#define RTE_CORE

#include "Rte_Const.h"
#if !defined(RTE_VENDOR_MODE)
#pragma message "Compiling an individual task file but RTE_VENDOR_MODE not defined. Compiling a stale file?"
#endif /* !defined(RTE_VENDOR_MODE) */
#if defined(RTE_USE_TASK_HEADER)
#include "OsTask_1.h"
#else /* defined(RTE_USE_TASK_HEADER) */
#include "Os.h"
#endif /* defined(RTE_USE_TASK_HEADER) */
#if defined(RTE_REQUIRES_IOC)
#include "Ioc.h"
#endif /* defined(RTE_REQUIRES_IOC) */
#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_Type.h"
#include "Rte_DataHandleType.h"

#define SensorSWComponent_START_SEC_CODE
#include "SensorSWComponent_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, SensorSWComponent_CODE) RunnableEntity_WheelSpeedPlausi_Receive_func(void);
#define SensorSWComponent_STOP_SEC_CODE
#include "SensorSWComponent_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_TASKBODY
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
TASK(OsTask_1)
{
   /* Box: Implicit Buffer Fill begin */
   /* Box: Implicit Buffer Fill end */
   /* Box: Implicit Buffer Initialization begin */
   /* Box: Implicit Buffer Initialization end */
   {
      /* Box: CPT_SensorSWComponent begin */
      RunnableEntity_WheelSpeedPlausi_Receive_func();
      /* Box: CPT_SensorSWComponent end */
   }
   /* Box: Implicit Buffer Flush begin */
   /* Box: Implicit Buffer Flush end */
   TerminateTask();
} /* OsTask_1 */
#define RTE_STOP_SEC_TASKBODY
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

