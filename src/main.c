/********************************************************************
 * Ngo Hung Cuong
 * CH32V003F4P6 Example
 * VSCode
 * Makefile
********************************************************************/

#include "debug.h"

int main(void)
{
	GPIO_InitTypeDef gpioInit;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

	gpioInit.GPIO_Mode = GPIO_Mode_Out_PP;
	gpioInit.GPIO_Pin = GPIO_Pin_0;
	gpioInit.GPIO_Speed = GPIO_Speed_50MHz;

	GPIO_Init(GPIOC, &gpioInit);

	Delay_Init();

    while(1)
    {
    	GPIO_SetBits(GPIOC, GPIO_Pin_0);
    	Delay_Ms(50);
    	GPIO_ResetBits(GPIOC, GPIO_Pin_0);
    	Delay_Ms(50);
    }
}
