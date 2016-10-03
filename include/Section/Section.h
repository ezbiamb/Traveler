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

class Section {
public:
	Section();
	virtual ~Section();
private:
	float distance;
};

#endif /* INCLUDE_SECTION_SECTION_H_ */
