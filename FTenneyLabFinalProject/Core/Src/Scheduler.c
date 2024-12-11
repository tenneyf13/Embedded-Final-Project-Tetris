#include "Scheduler.h"
static uint32_t scheduledEvents;
uint32_t getScheduledEvents(){
	return scheduledEvents;
}

void addSchedulerEvent(uint32_t eventToBeScheduled){
	scheduledEvents |= eventToBeScheduled;
}

void removeSchedulerEvent(uint32_t eventToBeRemoved){
	scheduledEvents &= ~(eventToBeRemoved);
}

