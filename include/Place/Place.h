/*
 * Place.h
 *
 *  Created on: 29 wrz 2016
 *      Author: zybdzghfryd
 */

#ifndef INCLUDE_PLACE_PLACE_H_
#define INCLUDE_PLACE_PLACE_H_

#include "PlaceId.h"

#include <string>


class Place : public PlaceId {
public:
	Place(string name);
	Place(string name, float latitude, float longitude);
	virtual ~Place();
private:
	float _coordinates[2]; //guarantee that there is only one class with given name
};

#endif /* INCLUDE_PLACE_PLACE_H_ */
