/*
 * Scheduler.h
 *
 *  Created on: Dec 8, 2024
 *      Author: drusi
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include<stdint.h>

#define START_SCREEN (1 << 0)
#define SWITCH_TO_GAME_SCREEN (1 << 1)
#define ROTATE_BLOCK (1 << 2)

uint32_t getScheduledEvents();

void addSchedulerEvent(uint32_t eventToBeScheduled);

void removeSchedulerEvent(uint32_t eventToBeRemoved);


#endif /* INC_SCHEDULER_H_ */
