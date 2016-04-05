/*
 * main.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: Eduardo
 */

#include <iostream>
#include <string>
using namespace std;


int main(){

	// ch. 2.3 exercise #15
	int x = 6;
	int y = 6;
	int z = 6;

	cout << (3*x) << endl;
	cout << (3*x)+y << endl;
	cout << (x+y)/7 << endl;
	cout << (3*x + y)/(z+2) << endl;

	// ch. 2.3 exercise #17
	int number = (1/3) * 3;
	cout << "(1/3) * 3 is equal to " << number << endl;

	// ch. 2.3 exercise #19
	double c = 20;
	double f;
	f = (9/5) * c + 32.0;
	cout << "This is the fahrenheit using integer division: " << f << endl;

	f = (9.0/5) * c + 32.0;
	cout << "This is the fahrenheit using floating point division: " << f << endl;

	// ch. 2.3 exercise #20
	string month, day, year, date;
	month = "03";
	day = "04";
	year = "06";
	date = month + day + year;
	cout << date << endl;

	return 0;
}


