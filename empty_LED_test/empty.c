#include "ti_msp_dl_config.h"

volatile unsigned int delay_times = 0;
#define LED1_PORT                                                        (GPIOA)
#define LED2_PORT                                                        (GPIOB)
#define LED3_PORT                                                        (GPIOB)
#define LED4_PORT                                                        (GPIOB)


/* Defines for PIN_0: GPIOA.0 with pinCMx 1 on package pin 33 */
#define LED1_PIN                                           (DL_GPIO_PIN_0)
#define LED2_PIN                                           (DL_GPIO_PIN_22)
#define LED3_PIN                                           (DL_GPIO_PIN_26)
#define LED4_PIN                                           (DL_GPIO_PIN_27)
//搭配滴答定时器实现的精确ms延时
void delay_ms(unsigned int ms)
{
        delay_times = ms;
        while( delay_times != 0 );
}

int main(void)
{

    SYSCFG_DL_init();

    while (1)
    {
			DL_GPIO_clearPins(GPIOA, DL_GPIO_PIN_0);
			delay_ms(1000);
			DL_GPIO_setPins(GPIOA, DL_GPIO_PIN_0);
			
			DL_GPIO_setPins(LED2_PORT, LED2_PIN);
			delay_ms(1000);
			DL_GPIO_clearPins(LED2_PORT, LED2_PIN);
			
			DL_GPIO_setPins(LED3_PORT, LED3_PIN);
			delay_ms(1000);
			DL_GPIO_clearPins(LED3_PORT, LED3_PIN);
			
			DL_GPIO_setPins(LED4_PORT, LED4_PIN);
			delay_ms(1000);
			DL_GPIO_clearPins(LED4_PORT, LED4_PIN);
    }
}

void SysTick_Handler(void)
{
        if( delay_times != 0 )
        {
                delay_times--;
        }
}