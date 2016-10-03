/*
 * Connection.h
 *
 *  Created on: 29 wrz 2016
 *      Author: zybdzghfryd
 *
 *  Describes a real potential connection on one section.
 *  With dates, cost and inital and final state of the traveling person.
 */

#ifndef INCLUDE_CONNECTION_CONNECTION_H_
#define INCLUDE_CONNECTION_CONNECTION_H_

#include "Section.h"
#include "Vehicle.h"
#include "Person.h"

#include <ctime>

using namespace std;

class Connection {
public:
	Connection();
	virtual ~Connection();
private:
	Section section;
	Vehicle* vehicle; //Connection does not own a vehicle, but an existing uses one
	float cost;
	time_t _start_date, _end_date;
	Person _traveler_initial_state, _traveler_final_state; //describes state of the Person before and after using the connection
};

#endif /* INCLUDE_CONNECTION_CONNECTION_H_ */
