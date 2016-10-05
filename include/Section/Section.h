/*
 * Section.h
 *
 *  Created on: 29 wrz 2016
 *      Author: zybdzghfryd
 *
 *  Section is a possible connection between places.
 *  It is an abstract class. It can be road, air connection, etc.
 *  It always connects to places. In order to travel a section, a vehicle is needed.
 */

#ifndef INCLUDE_SECTION_SECTION_H_
#define INCLUDE_SECTION_SECTION_H_

#include "PlaceId.h"

class Section {
public:
	Section(PlaceId ends[2], int distance, bool bidirectional = true);
	virtual ~Section();
private:
	float _distance;
	bool _bidirectional;
	PlaceId _ends[2];
};

#endif /* INCLUDE_SECTION_SECTION_H_ */
