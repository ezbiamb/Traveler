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
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using namespace std;

class Map {
public:
	Map();
	virtual ~Map();
	void AddPlace(PlaceId);
	void AddPlace(Place);
	void AddSection(Section);
	void LoadPlaces(string filePath);
	size_t GetNumberOfPlaces();
	Travel FindOptimalTravel(string origin, string destination,
								float budget,
								time_t start_date, time_t end_date); // add parameter what to minimize
	//FindOptimalConnection could be done in reverse manner to find how to get back
	vector<Travel> FindOptimalVacation(vector<Place> places,float budget, time_t start_date, time_t end_date);
private:
	map<PlaceId,pair<Place,vector<Section> > > graph;
};

#endif /* INCLUDE_MAP_MAP_H_ */
