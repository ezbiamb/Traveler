/*
 * Map.cpp
 *
 *  Created on: 29 wrz 2016
 *      Author: zybdzghfryd
 */

#include "Map.h"

Map::Map() {
	// TODO Auto-generated constructor stub

}

Map::~Map() {
	// TODO Auto-generated destructor stub
}

/*void Map::AddPlace(string name){
	graph.insert(pair<Place,vector<Section>>(Place(name),vector<Section>(0)));
}*/

Travel Map::FindOptimalTravel(string origin, string destination,
								float budget,
								time_t start_date, time_t end_date){
	return Travel();
}

class myexception : public exception{
public:
	virtual const char* what() const throw(){
		return _content;
	}
	myexception(const char* content) : _content(content){}
private:
	const char* _content;

};

void Map::LoadPlaces(string filePath){
	boost::property_tree::ptree pt;
	boost::property_tree::read_json(filePath,pt);
	boost::property_tree::ptree places = pt.get_child("Places");
	for(boost::property_tree::ptree::const_iterator it = places.begin(); it != places.end(); ++it){
		Place p(it->first,it->second.get<float>("latitude"),it->second.get<float>("longitude"));
		vector<Section> empty;
		graph.insert(pair<PlaceId,pair<Place,vector<Section> > >(p,make_pair(p,empty)));
	}

}

size_t Map::GetNumberOfPlaces(){
	return graph.size();
}
