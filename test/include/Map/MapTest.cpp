/*
 * MapTest.cpp
 *
 *  Created on: 8 paź 2016
 *      Author: zybdzghfryd
 */


#include "Map.h"
#include "gtest/gtest.h"


TEST(MapTest, LoadPlaces) {
	string fileDir = "/home/zybdzghfryd/.eclipse/workspace/Traveler/test/include/Map/";
	string fileName = fileDir + "placesStub.json";
	FILE *f = fopen(fileName.c_str(),"r");
	ASSERT_TRUE(f != NULL);
	fclose(f);
	Map map;
	map.LoadPlaces(fileName);
	ASSERT_EQ(map.GetNumberOfPlaces(), 2);
}

