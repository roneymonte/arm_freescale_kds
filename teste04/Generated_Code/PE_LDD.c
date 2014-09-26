/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : PE_LDD.c
**     Project     : teste04
**     Processor   : MKL25Z128VLK4
**     Version     : Component 01.025, Driver 01.04, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-09-20, 21:47, # CodeGen: 4
**     Abstract    :
**
**     Settings    :
**
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file PE_LDD.c                                                  
** @version 01.04
** @brief
**
*/         
/*!
**  @addtogroup PE_LDD_module PE_LDD module documentation
**  @{
*/         

/* MODULE PE_LDD. */

/* {Bareboard RTOS Adapter} No RTOS includes */
/* {Bareboard RTOS Adapter} No RTOS driver includes */

#include "PE_LDD.h"
#include "Cpu.h"

/*lint -esym(765,PE_PeripheralUsed,LDD_SetClockConfiguration,PE_CpuClockConfigurations,PE_FillMemory) Disable MISRA rule (8.10) checking for symbols (PE_PeripheralUsed,LDD_SetClockConfiguration,PE_CpuClockConfigurations,PE_FillMemory). */

/*
** ===========================================================================
** Array of initialized device structures of LDD components.
** ===========================================================================
*/
LDD_TDeviceData *PE_LDD_DeviceDataList[3] = {
    NULL,
    NULL,
    NULL
  };

/*
** ===========================================================================
** The array of clock frequencies in configured clock configurations.
** ===========================================================================
*/
/*! The array of clock configurations (frequencies) configured in configured clock configurations of the CPU component. */
const TCpuClockConfiguration PE_CpuClockConfigurations[CPU_CLOCK_CONFIG_NUMBER] = {
  /* Clock configuration 0 */
  {
    CPU_CORE_CLK_HZ_CONFIG_0,          /*!< Core clock frequency in clock configuration 0 */
    CPU_BUS_CLK_HZ_CONFIG_0,           /*!< Bus clock frequency in clock configuration 0 */
    CPU_FLEXBUS_CLK_HZ_CONFIG_0,       /*!< Flexbus clock frequency in clock configuration 0 */
    CPU_FLASH_CLK_HZ_CONFIG_0,         /*!< FLASH clock frequency in clock configuration 0 */
    CPU_USB_CLK_HZ_CONFIG_0,           /*!< USB clock frequency in clock configuration 0 */
    CPU_PLL_FLL_CLK_HZ_CONFIG_0,       /*!< PLL/FLL clock frequency in clock configuration 0 */
    CPU_MCGIR_CLK_HZ_CONFIG_0,         /*!< MCG internal reference clock frequency in clock configuration 0 */
    CPU_OSCER_CLK_HZ_CONFIG_0,         /*!< System OSC external reference clock frequency in clock configuration 0 */
    CPU_ERCLK32K_CLK_HZ_CONFIG_0,      /*!< External reference clock 32k frequency in clock configuration 0 */
    CPU_MCGFF_CLK_HZ_CONFIG_0          /*!< MCG fixed frequency clock */
  }
};

/*
** ===================================================================
**     Method      :  Cpu_PE_FillMemory (component MKL25Z128LK4)
*/
/*!
**     @brief
**         Fills a memory area block by a specified value.
**     @param
**       SourceAddressPtr - Source address pointer.
**     @param
**       c - A value used to fill a memory block.
**     @param
**       len - Length of a memory block to fill.
*/
/* ===================================================================*/
void PE_FillMemory(register void* SourceAddressPtr, register uint8_t c, register uint32_t len)
{
  register uint8_t *ptr = (uint8_t*)SourceAddressPtr;

  if (len > 0U) {
    while (len--) {
      *ptr++ = c;
    }
  }
}

/*
** ===================================================================
**     Method      :  Cpu_PE_PeripheralUsed (component MKL25Z128LK4)
*/
/*!
**     @brief
**         Returns information whether a peripheral is allocated by PEx 
**         or not.
**     @param
**       PrphBaseAddress - Base address of a peripheral.
**     @return
**       TRUE if a peripheral is used by PEx or FALSE if it isn't used.
*/
/* ===================================================================*/
bool PE_PeripheralUsed(uint32_t PrphBaseAddress)
{
  bool result = FALSE;

  switch (PrphBaseAddress) {
    /* Base address allocated by peripheral(s) PTD */
    case 0x400FF0C0UL:
    /* Base address allocated by peripheral(s) PTB */
    case 0x400FF040UL:
      result = TRUE;
      break;
    default:
      break;
  }
  return result;
}

/*
** ===================================================================
**     Method      :  Cpu_LDD_SetClockConfiguration (component MKL25Z128LK4)
*/
/*!
**     @brief
**         Changes the clock configuration of all LDD components in a 
**         project.
**     @param
**       ClockConfiguration - New CPU clock configuration changed by CPU SetClockConfiguration method.
*/
/* ===================================================================*/
void LDD_SetClockConfiguration(LDD_TClockConfiguration ClockConfiguration)
{
  (void)ClockConfiguration;            /*!< Parameter is not used, suppress unused argument warning */
  /* Just one clock configuration defined in CPU component. */
}

/* END PE_LDD. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.10]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
