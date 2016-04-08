//============================================================================
// Name        : 4-Simple.cpp
// Author      : Eduardo Espericueta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void exercises();

void tonsOCereal();

int main() {

	//exercises();

	//tonsOCereal();

	return 0;
}

void tonsOCereal(){
	//ch2 programming project 1
	const double metricTonInOunces = 35273.92;
	int cerealOunces;


	cout << "Enter weight of cereal box in ounces:\n";
	cin >> cerealOunces;

	cout << "Weight of cereal box in metric tons is: " << cerealOunces/metricTonInOunces << endl;
    cout << "Number of cereal boxes to equal 1 metric ton: " << metricTonInOunces/cerealOunces << endl;
}

void exercises(){
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

	// ch 2.4 exercise #28
	x = 10;
	while(x > 0){
		cout << x << endl;
		x = x - 3;
	}

	// ch 2.4 exercise #29
	x = 10;
	while(x < 0){
		cout << x << endl;
		x = x - 3;
	}

	// ch 2.4 exercise #30
	x = 10;
	do{
		cout << x << endl;
		x -= 3;
	}
	while(x > 0);

	// ch 2.4 exercise #30
	x = -42;
	do{
		cout << x << endl;
		x -= 3;
	}
	while(x > 0);

	// ch 2.4 exercise #31: What is the most important difference between a while statement and a do-while
	// statement? A: a while statement must evaluate to true, before the body is run. A do-while statement
	// will execute the body at the very least one time, and every subsequent execution of the body is
	// dictated by the boolean evaluation

	// ch 2.3 exercise #32
	/*x = 10;
	do{
		cout << x << endl;
		x += 3;
	}
	while(x > 0);
	*///The above is an infinite while loop

	// ch 2.4 exercise #32
	x = 0;
	while( x < 21){
		cout << x << endl;
		x += 1;
	}

	// ch2.5 exercise #35
	if(x<0){
		x=7;
		cout << "x is now positive.";
	}
	else{
		x=-7;
		cout << "x is now negative.";
	}

	// ch2.5 exercise #37
	const double litersInGallon = 3.78533;
	int gallons;
	cout << "Enter your number of gallons:\n";
	cin >> gallons;
	cout << "You have " << (gallons * litersInGallon) << " liters!\n";
}




