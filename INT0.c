/*
 * INT0.C
 *
 *  Created on: Oct 23, 2018
 *      Author: Mahmoud Mohamed Younis
 */

#include "INT0.h"

#if MODE == 1

void INT0_INIT (void)
{
	// Enable General interrupts.
	sei();
	// Enable External interrupt #0.
	GICR  |= (1<<INT0);
	// Select Mode
	// ISC01 & ISC00 are initially zeros.
}

#endif

#if MODE == 2

void INT0_INIT (void)
{
	// Enable General interrupts.
	sei();
	// Enable External interrupt #0.
	GICR  |= (1<<INT0);
	// Select Mode
	MCUCR |= (1<<ISC00); // ISC01 initiallly zero
}

#endif

#if MODE == 3

void INT0_INIT (void)
{
	// Enable General interrupts.
	sei();
	// Enable External interrupt #0.
	GICR  |= (1<<INT0);
	// Select Mode
	MCUCR |= (1<<ISC01); // ISC00 initiallly zero
}

#endif

#if MODE == 4

void INT0_INIT (void)
{
	// Enable General interrupts.
	sei();
	// Enable External interrupt #0.
	GICR  |= (1<<INT0);
	// Select Mode
	MCUCR |= (1<<ISC00) | (1<<ISC01);
}

#endif
