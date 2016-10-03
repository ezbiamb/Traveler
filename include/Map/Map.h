/*
 * Map.h
 *
 *  Created on: 29 wrz 2016
 *      Author: zybdzghfryd
 */

#ifndef INCLUDE_MAP_MAP_H_
#define INCLUDE_MAP_MAP_H_

#include "Connection.h"
#include "Place.h"
#include "Travel.h"

#include <map>
#include <ctime>

using namespace std;

class Map {
public:
	Map();
	virtual ~Map();
	Travel FindOptimalTravel(Place origin, Place destination,
								float budget,
								time_t start_date, time_t end_date); // add parameter what to minimize
	//FindOptimalConnection could be done in reverse manner to find how to get back
	vector<Travel> FindOptimalVacation(vector<Place> places,float budget, time_t start_date, time_t end_date);
private:
	map<Place,vector<Section> > graph;
};

#endif /* INCLUDE_MAP_MAP_H_ */
