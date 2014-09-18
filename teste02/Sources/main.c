/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "MKL25Z4.h"

/*
 *  PTB18 = Red Led
 *  PTB19 = Green Led
 *  PTD1  = Blue Led
 */

static int i = 0;

void delay (unsigned short int atraso);


int main(void)
{


	SIM_SCGC5 |= SIM_SCGC5_PORTB_MASK;
	SIM_SCGC5 |= SIM_SCGC5_PORTD_MASK;


	//Data Direction para os LEDs
	GPIOB_PDDR |= (1<<18);	// Configura o bit 18 como output (1) Vermelho
	GPIOB_PDDR |= (1<<19);	// Configura o bit 19 como output (1) Verde
	GPIOD_PDDR |= (1<<1);	// Configura o bit 1 como output (1)  Azul

    /* This for loop should be replaced. By default this loop allows a single stepping. */
    for (;;) {
        i++;

        GPIOB_PSOR = (1<<18);	// liga (PSOR) vermelho
        GPIOB_PTOR = (1<<19);	// desliga (PTOR) Verde
        GPIOD_PTOR = (1<<1);	// desliga (PTOR) Azul

        delay (1000000);

        GPIOB_PTOR = (1<<18);	// desliga (PSOR) vermelho
        GPIOB_PSOR = (1<<19);	// liga (PTOR) Verde
        GPIOD_PTOR = (1<<1);	// desliga (PTOR) Azul

        delay (1000000);

        GPIOB_PTOR = (1<<18);	// desliga (PSOR) vermelho
        GPIOB_PTOR = (1<<19);	// desliga (PTOR) Verde
        GPIOD_PSOR = (1<<1);	// liga (PTOR) Azul

        delay (1000000);


    }
    /* Never leave main */
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////

void delay (unsigned short int atraso)
{
	unsigned short int contador = 0;
	for (contador=0;contador<atraso;contador++);
}
