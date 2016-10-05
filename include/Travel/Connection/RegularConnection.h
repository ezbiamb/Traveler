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
	RegularConnection(Section section);
	virtual ~RegularConnection();
	Connection FindNextConnection(time_t,const Person&);
private:
	Section _section;
	Vehicle _vehicle;
	float _cost;
};

#endif /* INCLUDE_TRAVEL_CONNECTION_REGULARCONNECTION_H_ */
