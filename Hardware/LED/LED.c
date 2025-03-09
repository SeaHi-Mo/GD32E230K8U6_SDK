
#include "systick.h"
#include <stdio.h>
#include "LED.h"


void ledInit(void)
{
		rcu_periph_clock_enable(LED_RCU);
	  gpio_mode_set(LED_GPIO, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, LED_PIN);
		gpio_output_options_set(LED_GPIO, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, LED_PIN);
	  gpio_bit_reset(LED_GPIO,LED_PIN);
}

void ledSet(int status)
{
		gpio_bit_write(LED_GPIO,LED_PIN,status);
}

void ledBlink(void)
{
		gpio_bit_write(GPIOB,GPIO_PIN_8,1);
					
		#ifdef GD32E23x_NONE
			delay_1ms(500);
		#elif defined(GD32E23x_FreeRTOS)
			delay_1ms(1000);
		#endif
					
		gpio_bit_write(GPIOB,GPIO_PIN_8,0);
					
		#ifdef GD32E23x_NONE
			delay_1ms(500);
		#elif defined(GD32E23x_FreeRTOS)
			delay_1ms(1000);
		#endif
}