/* ###################################################################
**     Filename    : main.c
**     Project     : teste04
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-09-18, 11:49, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
void delay (unsigned short int atraso);
void delay (unsigned short int atraso)
{
	unsigned short int contador = 0;
	for (contador=0;contador<atraso;contador++);
}
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
	SIM_SCGC5 |= SIM_SCGC5_PORTB_MASK;
	SIM_SCGC5 |= SIM_SCGC5_PORTD_MASK;


	//Data Direction para os LEDs
	GPIOB_PDDR |= (1<<18);	// Configura o bit 18 como output (1) Vermelho
	GPIOB_PDDR |= (1<<19);	// Configura o bit 19 como output (1) Verde
	GPIOD_PDDR |= (1<<1);	// Configura o bit 1 como output (1)  Azul
  /* For example: for(;;) { } */
    for (;;) {
        GPIOB_PCOR = (1<<18);	// liga (PSOR) vermelho
        GPIOB_PSOR = (1<<19);	// desliga (PTOR) Verde
        GPIOD_PSOR = (1<<1);	// desliga (PTOR) Azul
        delay (1000);

        GPIOB_PSOR = (1<<18);	// desliga (PSOR) vermelho
        GPIOB_PCOR = (1<<19);	// liga (PTOR) Verde
        GPIOD_PSOR = (1<<1);	// desliga (PTOR) Azul
        delay (1000);

        GPIOB_PSOR = (1<<18);	// desliga (PSOR) vermelho
        GPIOB_PSOR = (1<<19);	// desliga (PTOR) Verde
        GPIOD_PCOR = (1<<1);	// liga (PTOR) Azul
        delay (1000);

        GPIOB_PTOR = (1<<18);
        GPIOB_PTOR = (1<<19);
        GPIOD_PTOR = (1<<1);
        delay (1000000);

        GPIOB_PTOR = (1<<18);
        GPIOB_PTOR = (1<<19);
        GPIOD_PTOR = (1<<1);
        delay (1000000);
    }


  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
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
