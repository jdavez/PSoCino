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
#include <project.h>

int main()
{
    CyGlobalIntEnable;      /* Enable global interrupts */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_Start();
    UART_UartPutString(__DATE__ " " __TIME__ "\r\n");
    
    for(;;)
    {
        /* Place your application code here */
        LED_Write(!LED_Read());
        CyDelay(200);
 }
}
