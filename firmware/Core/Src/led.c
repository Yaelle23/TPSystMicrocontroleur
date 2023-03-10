/*
 * led.c
 *
 *  Created on: Mar 10, 2023
 *      Author: farimathomas
 */

#include "tim.h"
#include "Led.h"


// Démarre le timer
void LedStart(void){
	LL_TIM_EnableCounter(TIM2);
	LL_TIM_CC_EnableChannel(TIM2, LL_TIM_CHANNEL_CH1);
}



// Configure le rapport cyclique de la PWM entre 0 et 255
void LedSetValue(uint8_t val){


	LL_TIM_OC_SetCompareCH1(TIM2,val);
}



// À chaque appel, cette fonction incrémente la luminosité de la LED
// Arrivé à la valeur maximale, chaque appel décrémente la LED
void LedPulse(void){
	int max=255;
	static int val=0;

	static int sens = 0;
	if (sens == 0){
		val++;
		LedSetValue(val);
		if (val == max)
		{
			sens = 1;
		}
	}
	else{
		val--;
		LedSetValue(val);
		if (val == 0)
		{
			sens = 0;
		}
	}
}

