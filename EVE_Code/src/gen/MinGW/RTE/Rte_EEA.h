/** @file     Rte_EEA.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#ifndef RTE_EEA_H
#define RTE_EEA_H

#ifndef RTE_CORE
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif /* RTE_APPLICATION_HEADER_FILE */
#define RTE_APPLICATION_HEADER_FILE
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Includes
 ***
 *******************************************************/

#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_EEA_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_EEA_Receive)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/*******************************************************
 ***
 *** Constants
 ***
 *******************************************************/


/*******************************************************
 ***
 *** Public Types
 ***
 *******************************************************/

/* BEGIN: SWC types (core visible) */
struct Rte_CDS_EEA {
   uint8 _dummy;
};
typedef struct Rte_CDS_EEA Rte_CDS_EEA;

/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_EEA, RTE_CONST) Rte_Inst_EEA;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_EEA, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(Rte_SelfType_EcuAbstraction, RTE_CONST) Rte_Self_CPT_EcuAbstraction;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define EcuAbstraction_START_SEC_CODE
#include "EcuAbstraction_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, EcuAbstraction_CODE) RunnableEntity_Throttle_func(VAR(float64, AUTOMATIC) Throttle);

#define EcuAbstraction_STOP_SEC_CODE
#include "EcuAbstraction_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_VAR_64BIT
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float64, RTE_DATA) Throttle;
#define RTE_STOP_SEC_VAR_64BIT
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_EEA_Receive)
/* Inline function call optimization; Rte_Call_ThrottleToECU_RPort_ClientServerOperation_Throttle to RunnableEntity_Throttle_func */
#define Rte_Call_ThrottleToECU_RPort_ClientServerOperation_Throttle( Throttle ) ( RunnableEntity_Throttle_func(Throttle), ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )

#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_EEA_Receive)
/* Inline read optimization; Rte_Read_Throttle_RPort_Throttle to direct access */
#define Rte_Read_Throttle_RPort_Throttle( data )  ( ((*(data)) = Throttle),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define EEA_START_SEC_CODE
#include "EEA_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, EEA_CODE) RunnableEntity_EEA_Receive_func(void);
#define EEA_STOP_SEC_CODE
#include "EEA_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_EEA_H */
