/*
 * Section.cpp
 *
 *  Created on: 29 wrz 2016
 *      Author: zybdzghfryd
 */

#include "Section.h"

Section::Section(PlaceId ends[2],
				int distance,
				bool bidirectional) : _ends {ends[0], ends[1]},
									 	 	 _distance(distance),
											 _bidirectional(bidirectional) {
	// TODO Auto-generated constructor stub

}

Section::~Section() {
	// TODO Auto-generated destructor stub
}

