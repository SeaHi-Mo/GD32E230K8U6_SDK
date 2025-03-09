
#include "gd32e23x.h"
#include "systick.h"
#include <stdio.h>
#include "main.h"
#include "LED.h"

int main(void)
{
	
	  systick_config();
    ledInit();
	
        while(1)
        {
					
					ledBlink();
        }

}
