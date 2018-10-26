/*
 * INT0.h
 *
 *  Created on: Oct 24, 2018
 *      Author: Mahmoud Mohamed Younis
 */

#ifndef INT0_H_
#define INT0_H_

#include <avr/io.h>

/*
            ISC01   ISC00   Description
-------------------------------------------------------------------
* MODE #1:   0       0      The low level of INT1 generates an interrupt request.
* MODE #2:   0       1      Any logical change on INT1 generates an interrupt request.
* MODE #3:   1       0      The falling edge of INT1 generates an interrupt request.
* MODE #4:   1       1      The rising edge of INT1 generates an interrupt request.
*/
// Link :

// Select Mode of operation
#define MODE 1

void INT0_INIT (void);


#endif /* INT0_H_ */
