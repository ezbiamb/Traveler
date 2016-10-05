/*
 * Place.cpp
 *
 *  Created on: 29 wrz 2016
 *      Author: zybdzghfryd
 */

#include "Place.h"

Place::Place(string name) : PlaceId(name) {
	// TODO Auto-generated constructor stub

}

Place::Place(string name, float latitude, float longitude) : PlaceId(name), _coordinates {latitude, longitude} {
	// TODO Auto-generated constructor stub

}

Place::~Place() {
	// TODO Auto-generated destructor stub
}

