#ifndef LED_H
#define LED_H
#include "gd32e23x.h"
#include "gd32e23x_gpio.h"

#define LED_RCU RCU_GPIOB
#define LED_GPIO  GPIOB
#define LED_PIN GPIO_PIN_8


void ledInit(void);
void ledSet(int status);
void ledBlink(void);
#endif