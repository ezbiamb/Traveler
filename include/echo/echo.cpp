/*
 * Echo.cpp
 *
 *  Created on: 20 cze 2016
 *      Author: zybdzghfryd
 */

#include "echo.hpp"

Echo::Echo(int text_){
	text = text_+1;
}

int Echo::echo(){
	return text;
}
