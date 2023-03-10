/*
 * led.h
 *
 *  Created on: Mar 10, 2023
 *      Author: farimathomas
 */

#ifndef INC_LED_H_
#define INC_LED_H_

/* Includes ------------------------------------------------------------------*/
#include "main.h"


// Démarre le timer
void LedStart(void);
// Configure le rapport cyclique de la PWM entre 0 et 255
void LedSetValue(uint8_t val);
// À chaque appel, cette fonction incrémente la luminosité de la LED
// Arrivé à la valeur maximale, chaque appel décrémente la LED
void LedPulse(void);

#endif /* INC_LED_H_ */


