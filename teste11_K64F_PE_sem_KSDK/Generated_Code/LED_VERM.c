/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : LED_VERM.c
**     Project     : teste11_K64F_PE_sem_KSDK
**     Processor   : MK64FN1M0VLL12
**     Component   : LED
**     Version     : Component 01.062, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-09-26, 19:45, # CodeGen: 2
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : LED_VERM
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            On/Off                                       : Enabled
**              Pin                                        : LEDpin
**            PWM                                          : Disabled
**            High Value means ON                          : no
**          Shell                                          : Disabled
**     Contents    :
**         Init       - void LED_VERM_Init(void);
**         Deinit     - void LED_VERM_Deinit(void);
**         On         - void LED_VERM_On(void);
**         Off        - void LED_VERM_Off(void);
**         Neg        - void LED_VERM_Neg(void);
**         Get        - byte LED_VERM_Get(void);
**         Put        - void LED_VERM_Put(byte val);
**         SetRatio16 - void LED_VERM_SetRatio16(word ratio);
**
**     License   : Open Source (LGPL)
**     Copyright : Erich Styger, 2013, all rights reserved.
**     Web       : www.mcuoneclipse.com
**     This an open source software implementing a driver using Processor Expert.
**     This is a free software and is opened for education, research and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file LED_VERM.c
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup LED_VERM_module LED_VERM module documentation
**  @{
*/         

/* MODULE LED_VERM. */

#include "LED_VERM.h"

/*
** ===================================================================
**     Method      :  LED_VERM_On (component LED)
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
** ===================================================================
**     Method      :  LED_VERM_Off (component LED)
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_VERM_Off(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  LED_VERM_Neg (component LED)
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_VERM_Neg(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  LED_VERM_Get (component LED)
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/
/*
byte LED_VERM_Get(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  LED_VERM_Init (component LED)
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_VERM_Init(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  LED_VERM_Put (component LED)
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_VERM_Put(byte val)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  LED_VERM_Deinit (component LED)
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void LED_VERM_Deinit(void)
{
}

/*
** ===================================================================
**     Method      :  LED_VERM_SetRatio16 (component LED)
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/
void LED_VERM_SetRatio16(word ratio)
{
  /* on/off LED: binary on or off */
  if (ratio<(0xffff/2)) {
    LED_VERM_Off();
  } else {
    LED_VERM_On();
  }
}

/* END LED_VERM. */

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
