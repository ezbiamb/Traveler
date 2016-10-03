/*
 * Travel.h
 *
 *  Created on: 29 wrz 2016
 *      Author: zybdzghfryd
 */

#ifndef INCLUDE_TRAVEL_TRAVEL_H_
#define INCLUDE_TRAVEL_TRAVEL_H_

#include "Connection.h"

using namespace std;

class Travel {
public:
	Travel();
	virtual ~Travel();
private:
	vector<Connection> connections;
	float cost;
	Person *_traveler_initial_state, *_traveler_final_state;
	time_t *_start_date, *_end_date;
};

#endif /* INCLUDE_TRAVEL_TRAVEL_H_ */
