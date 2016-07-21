/*
 * main.cpp
 *
 *  Created on: 8 cze 2016
 *      Author: zybdzghfryd
 */

#include <iostream>

#include "Echo.hpp"

using namespace std;

int main() {
    cout << "Hello world and other worlds!" << endl;
    cout << "Kocham mojom Merdziem!!!!!" << endl;
    Echo A(1);
    cout << A.echo() << endl;
    return 0;
}
