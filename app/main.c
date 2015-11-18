
#include "../driverlib/hw_types.h"
#include "../driverlib/hw_gpio.h"
#include "../driverlib/sysctl.h"
#include "../driverlib/pin_map.h"
#include "../driverlib/gpio.h"
#include "../driverlib/rom.h"




//******************************************************************************************************
int main()
{
  ROM_FPUEnable();
  ROM_FPULazyStackingEnable();
  ROM_SysCtlClockSet(SYSCTL_SYSDIV_2_5|SYSCTL_USE_PLL|SYSCTL_OSC_MAIN|SYSCTL_XTAL_16MHZ);
  while(1);
}
