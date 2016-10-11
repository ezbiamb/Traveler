/*
 * PlaceId.cpp
 *
 *  Created on: 5 paź 2016
 *      Author: zybdzghfryd
 */

#include "PlaceId.h"

PlaceId::PlaceId(string name) : _name(name) {
}

PlaceId::~PlaceId() {
	// TODO Auto-generated destructor stub
}

bool PlaceId::operator<(const PlaceId& other) const{
	return _name < other._name;
}
