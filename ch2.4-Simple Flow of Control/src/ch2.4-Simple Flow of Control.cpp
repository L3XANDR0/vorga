//============================================================================
// Name        : 4-Simple.cpp
// Author      : Eduardo Espericueta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// ch 2.4 exercise #28
	int x = 10;
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

	// testing EGit

	return 0;
}







