/*
 * software_timer.h
 *
 *  Created on: Nov 14, 2023
 *      Author: HOANG DUNG
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define NO_TIMERS 3

extern int timer_flag[NO_TIMERS + 1];

void setTimer(int, int);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
