/*
 * Echo.hpp
 *
 *  Created on: 20 cze 2016
 *      Author: zybdzghfryd
 */

#ifndef SRC_ECHO_HPP_
#define SRC_ECHO_HPP_

#include <string>
using namespace std;


class Echo {
	int text;
public:
	Echo(int text_);
	int echo();
};


#endif /* SRC_ECHO_HPP_ */
