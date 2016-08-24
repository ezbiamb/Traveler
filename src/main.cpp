/*
 * main.cpp
 *
 *  Created on: 8 cze 2016
 *      Author: zybdzghfryd
 */

#include <iostream>

#include "echo/echo.hpp"

using namespace std;

int main() {
    cout << "Hello world and other worlds!" << endl;
    cout << "Kocham mojom Merdziem!!!!!!" << endl;
    cout << "If I get it, I'm on auto testing!" << endl;
    Echo A(1);
    cout << A.echo() << endl;
    return 0;
}
