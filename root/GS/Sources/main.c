/* ###################################################################
**     Filename    : main.c
**     Project     : GS
**     Processor   : MK20DX256VLH7
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-11-08, 15:57, # CodeGen: 0
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
#include "mqx_tasks.h"
#include "PTA.h"
#include "ADC0.h"
#include "UART0.h"
#include "FC1.h"
#include "FreeCntrLdd1.h"
#include "TU1.h"
#include "VREF.h"
#include "FLTSD1.h"
#include "HIN1.h"
#include "LIN1.h"
#include "FLTCLR1.h"
#include "CLUTCH_SW.h"
#include "FLTSD2.h"
#include "HIN2.h"
#include "LIN2.h"
#include "FLTCLR2.h"
#include "SH_UP.h"
#include "SH_DN.h"
#include "LED.h"
#include "MOTEC_GEAR_SIG.h"
#include "SHIFT_LEV_ANGLE.h"
#include "TEMP1.h"
#include "NEUT_SW.h"
#include "TEMP2.h"
#include "ROT_SW_P1.h"
#include "ROT_SW_P2.h"
#include "ROT_SW_P3.h"
#include "MODE_ENG.h"
#include "AD1.h"
#include "AS1.h"
#include "MQX1.h"
#include "SystemTimer1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
int initial_gear = 0; // 0 - Neutral, 1 - first ... etc
int current_gear = 0;

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */

  //FRANKS CODE HERE
//PTA_Init();

// HANDSHAKE WITH THE ETC MODULE


// RECIEVE THE GEAR UPDATE FROM THE ETC MODULE

// INITIALISE THE GEAR SHIFT ELECTRONICS - SEND THEM LIVE

// SEND INIT MESSAGE TO THE LCD




// DETERMINE THE CURRENT GEAR

//



  /* For example: for(;;) { } */

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
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
