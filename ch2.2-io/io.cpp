/*
 * io.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: Eduardo
 */

#include <iostream>
using namespace std;

int main(){

	// ch2.2 self-test exercise #8
	cout << "The answer to the question of\n" << "Life, the Universe, and Everything is 42\n";

	// ch2.2 self-test exercise #9
	int the_number;
	cout << "Enter a whole number: ";
	cin >> the_number;
	cout << endl << "You entered " << the_number << endl;

	// ch2.2 self-test exercise #10
	double ten = 100;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	cout << ten << endl;

	// ch2.2 self-test exercise #11
	cout << "Hello World\n";

	// ch2.2 self-test exercise #12
	int a,b;
	cout << "Enter two numbers to sum:\n";
	cin >> a >> b;
	cout << "The sum is: " << (a+b) << endl;

	// ch2.2 self-test exercise #13
	cout << "\tHi\n";

	// ch2.2 self-test exercise #14
	double one=1.000, two=1.414, three=1.732, four=2.000, five=2.236;

	cout << "\tN\tSquare Root\n";
	cout << "\t1\t" << one << endl;
	cout << "\t2\t" << two << endl;
	cout << "\t3\t" << three << endl;
	cout << "\t4\t" << four << endl;
	cout << "\t5\t" << five << endl;


	return 0;
}


