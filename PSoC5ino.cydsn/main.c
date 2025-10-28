/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    USBUART_1_Start(0u, USBUART_1_DWR_VDDD_OPERATION);

    PGA_1_Start();
    UART_1_Start();
    UART_1_PutString(__DATE__ " " __TIME__ "\r\n");
    for(;;)
    {
        /* Place your application code here. */
        LED_1_Write(!LED_1_Read());
        CyDelay(200);
    }
}

/* [] END OF FILE */
