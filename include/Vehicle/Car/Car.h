/*
 * Car.h
 *
 *  Created on: 29 wrz 2016
 *      Author: zybdzghfryd
 */

#ifndef INCLUDE_VEHICLE_CAR_CAR_H_
#define INCLUDE_VEHICLE_CAR_CAR_H_

#include "Vehicle.h"

class Car : public Vehicle{
public:
	Car();
	virtual ~Car();
private:
	float speed;
	float cost_per_kilometer;
	float cost_per_day; //0 for private car
};

#endif /* INCLUDE_VEHICLE_CAR_CAR_H_ */
