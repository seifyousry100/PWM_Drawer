/*
 * PWM_Lconfig.c
 *
 * Created: 11/25/2024 11:30:14 AM
 *  Author: saif_yousry
 */ 

#include "PWM.h"

const PWM_ConfigurationType gaStrPWM_Config[NUM_OPERATING_PWM_CHANNELS] = 
{
	{
		PWM_TIMER_0_CHANNEL,
		PWM_FAST,
		PWM_PRESCALE_8,
		PWM_INVERTED,
		256U,
		4U,
		20U
	}
};