/*
 * SillyAppController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: jand6944
 */

#include "SillyAppController.h"
#include <iostream>

using namespace std;

SillyAppController :: SillyAppController()
{
	this->count = 99;
}
void SillyAppController :: setCount(int count)
{
	this->count = count;
}
void SillyAppController :: start()
{
	cout << "Program GBA games today"<< endl;
	cout << getCount() << "is the current count" << endl;
	cout << "type in a new value for count" << endl;
	int tempCount;
	cin >> tempCount;
	setCount(tempCount);
	cout << getCount() << " is the updated count" << endl;
}


