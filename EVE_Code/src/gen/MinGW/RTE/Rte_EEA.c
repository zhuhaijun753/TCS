/** @file     Rte_EEA.c
  * 
  * @brief    RTE Sample SWC implementation skeleton file
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#include "Rte_EEA.h"

/* --------------------------------------------------------------------------- */
/* RTE Event: /Component/EEA/IB_EEA/TimingEvent_Receive */

FUNC(void, EEA_CODE) RunnableEntity_EEA_Receive_func(void)
{
   /* ... */
	float64 bufData=0;
	Rte_Read_Throttle_RPort_Throttle(&bufData);
	Rte_Call_ThrottleToECU_RPort_ClientServerOperation_Throttle(bufData);
}

