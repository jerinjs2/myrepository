//============================================================================
// Name        : GPIO-interrupt.cpp
// Author      : jerin jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "board.h"


/* GPIO pin for interrupt */
//#define GPIO_INTERRUPT_PIN     17	/* GPIO pin number mapped to interrupt */
//#define GPIO_INTERRUPT_PORT    GPIOINT_PORT0	/* GPIO port number mapped to interrupt */
#define GPIO_INTERRUPT_PIN_A	 6
#define GPIO_INTERRUPT_PORT_A	 GPIOINT_PORT2

#define GPIO_INTERRUPT_PIN_B	 7
#define GPIO_INTERRUPT_PORT_B	 GPIOINT_PORT2

/* On the LPC1769, the GPIO interrupts share the EINT3 vector. */
#define GPIO_IRQ_HANDLER  		EINT3_IRQHandler/* GPIO interrupt IRQ function name */
#define GPIO_INTERRUPT_NVIC_NAME    	EINT3_IRQn	/* GPIO interrupt NVIC interrupt name */

/***************************
 * Public types/enumerations/variables
 **************************/

/***************************
 * Private functions
 **************************/

/***************************
 * Public functions
 **************************/

/**
 * @brief	Handle interrupt from GPIO pin or GPIO pin mapped to PININT
 * @return	Nothing
 */
void GPIO_IRQ_HANDLER (void)
{
  /* disable interrupt, clear status */
  NVIC_DisableIRQ (GPIO_INTERRUPT_NVIC_NAME);  // prevents interrupt nesting
  Chip_GPIOINT_ClearIntStatus (LPC_GPIOINT, GPIO_INTERRUPT_PORT,
			       1 << GPIO_INTERRUPT_PIN);

  /* main ISR steps */
  Board_LED_Toggle (red);

  /* re-enable interrupt */
  NVIC_EnableIRQ (GPIO_INTERRUPT_NVIC_NAME);
}

/**
 * @brief	Main program body
 * @return	Does not return
 */
int
main (void)
{
  /* Generic Initialization */
  SystemCoreClockUpdate ();

  /* Board_Init calls Chip_GPIO_Init and enables GPIO clock if needed,
   Chip_GPIO_Init is not called again */
  Board_Init ();
  Board_LED_Set (0, false);

  /* Configure GPIO interrupt pin as input */
  Chip_GPIO_SetPinDIRInput (LPC_GPIO, GPIO_INTERRUPT_PORT, GPIO_INTERRUPT_PIN);

  /* Configure the GPIO interrupt */
  Chip_GPIOINT_SetIntFalling (LPC_GPIOINT, GPIO_INTERRUPT_PORT,
			      1 << GPIO_INTERRUPT_PIN);

  /* Enable interrupt in the NVIC */
  NVIC_ClearPendingIRQ (GPIO_INTERRUPT_NVIC_NAME);
  NVIC_EnableIRQ (GPIO_INTERRUPT_NVIC_NAME);

  /* Wait for interrupts - LED will toggle on each wakeup event */
  while (1)
    {
      __WFI ();
    }

  return 0;
}
}
