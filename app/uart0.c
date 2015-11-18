#include "../inc/uart0.h"

void initConsole(void) 
{
		//enable UART0
		ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
        //enable portA
        ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
        //configure the pin multiplexing
        ROM_GPIOPinConfigure(GPIO_PA0_U0RX);
        ROM_GPIOPinConfigure(GPIO_PA1_U0TX);
        //configure the type of the pins for uart tx/rx
        ROM_GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
        ROM_UARTConfigSetExpClk(UART0_BASE, ROM_SysCtlClockGet(), 115200,
                                (UART_CONFIG_WLEN_8 | UART_CONFIG_STOP_ONE |
                                 UART_CONFIG_PAR_NONE));

}

