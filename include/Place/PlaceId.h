/*
 * PlaceId.h
 *
 *  Created on: 5 paź 2016
 *      Author: zybdzghfryd
 */

#ifndef INCLUDE_PLACE_PLACEID_H_
#define INCLUDE_PLACE_PLACEID_H_

#include <string>

using namespace std;

class PlaceId {
public:
	PlaceId(string name);
	virtual ~PlaceId();
	bool operator<(const PlaceId& ) const;
protected:
	string _name;
};

#endif /* INCLUDE_PLACE_PLACEID_H_ */
