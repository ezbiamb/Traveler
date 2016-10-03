/*
 * RegularConnection.h
 *
 *  Created on: 29 wrz 2016
 *      Author: zybdzghfryd
 */

#ifndef INCLUDE_TRAVEL_CONNECTION_REGULARCONNECTION_H_
#define INCLUDE_TRAVEL_CONNECTION_REGULARCONNECTION_H_

#include "Person.h"
#include "Connection.h"

class RegularConnection {
public:
	RegularConnection();
	virtual ~RegularConnection();
	Connection FindNextConnection(time_t,const Person&);
private:
	Section section;
	Vehicle vehicle;
	float cost;
};

#endif /* INCLUDE_TRAVEL_CONNECTION_REGULARCONNECTION_H_ */
