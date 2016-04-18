//============================================================================
// Name        : 4-Simple.cpp
// Author      : Eduardo Espericueta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void exercises();
void tonsOCereal();
void sweetener();
void ch2Project3();
void ch2Project4();
void ch2Project5();
void ch2Project6();
void ch2Project7();
void ch2Project8();
void ch2Project9();
void ch2Project10();
void ch2Project13();
void ch2Project14();
void ch2Project15();
void ch2Project16();
void ch2Project17();


int main() {

	//exercises();
	//tonsOCereal();
	//sweetener(); //ch2 project 2
	//ch2Project3();
	//ch2Project4();
	//ch2Project5();
	//ch2Project6();
	//ch2Project7();
	//ch2Project8();
	//ch2Project9();
	//ch2Project10();
	//ch2Project13();
	//ch2Project14();
	//ch2Project15();
	//ch2Project16();
	//ch2Project17();





	return 0;
}

void ch2Project16(){
	double radius, vm;
	const double pi = 3.1415, const1 = 4.0/3.0;

	cout << "Enter radius of a sphere.\n";
	cin >> radius;

	vm = const1 * pi * radius * radius * radius;

	cout << "The volume is " << vm << endl;
}

void ch2Project15(){
	double startingTemp, endTemp, rangeTemp, velocitySound, k;
	const double const1 = 331.3, const2 = .61;

	cout << "Enter the starting temperature in celcius:\n";
	cin >> startingTemp;

	cout << "Enter the ending temperature in celcius:\n";
	cin >> endTemp;

	if(startingTemp < endTemp){
		k = startingTemp;

		if(startingTemp == 0){
			rangeTemp = (endTemp - startingTemp);
		}
		else{
			rangeTemp = (endTemp - startingTemp) + 1; // add 1 to make range inclusive
		}

		while(k <= rangeTemp){
			velocitySound = const1 + ( const2 * k );
			cout << "At " << k << " degrees Celcius the velocity of sound is " << velocitySound << " m/s\n";
			k++;
		}
	}
	else{ // startingTemp > endTemp : count down
		k = startingTemp;

		if(startingTemp == 0){
			rangeTemp = (endTemp - startingTemp);
		}
		else{
			rangeTemp = (endTemp - startingTemp) - 1; // add 1 to make range inclusive
		}

		while( k >= rangeTemp ){
			velocitySound = const1 + ( const2 * k );
			cout << "At " << k << " degrees Celcius the velocity of sound is " << velocitySound << " m/s\n";
			k--;
		}
	}
}

void ch2Project14(){
	string instructorName, yourName, food, number, adjective, color, animal;

	cout << "Enter first or last name of your favorite instructor:\n";
	cin >> instructorName;

	cout << "Enter your name:\n";
	cin >> yourName;

	cout << "Enter your favorite food:\n";
	cin >> food;

	cout << "Enter a number between 100 and 120:\n";
	cin >> number;

	cout << "Enter an adjective:\n";
	cin >> adjective;

	cout << "Enter a color:\n";
	cin >> color;

	cout << "Enter an animal:\n";
	cin >> animal;

	cout << "Dear Instructor " << instructorName << ",\n\n" << "I am sorry that I am unable to turn in my homework at this time."
		 << "First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill. I came down with a fever of "
		 << number << ". Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food
		 << " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late."
		 << endl << endl << "Sincerely,\n" << yourName;
}

void ch2Project13(){
	double milesPerHour, minutesPerMile, secondsPerMile;
	int minutes, seconds;

	cout << "Enter miles per hour:\n";
	cin >> milesPerHour;

	minutesPerMile = 60/milesPerHour;
	minutes = static_cast<int>(minutesPerMile);

	secondsPerMile = minutesPerMile - minutes;
	seconds = secondsPerMile * 60;

	cout << "Minutes per mile: " << minutes << endl;
	cout << "Seconds per mile: " << seconds << endl;
}

void ch2Project10(){
	int k, number, count = 10, posSum = 0, negSum = 0, total = 0;

	for(k = 0; k < count; k++){
		cout << "Enter a number: \n";
		cin >> number;

		if(number > 0){
			posSum += number;
		}
		else{
			negSum += number;
		}

		total += number;
	}

	cout << "Sum of positive numbers: " << posSum << endl;
	cout << "Sum of negative numbers: " << negSum << endl;
	cout << "Sum of all numbers: " << total << endl;
}

void ch2Project9(){
	double stereoCost = 1000, monthlyInterestRate = .015, monthlyPayment = 50;
	double interestAccrued = 0, interest = 0;
	int months = 0;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Calculating how many month's it will take to pay off your $1000 radio purchase...\n";

	while(stereoCost > 0){
		interest = (stereoCost * monthlyInterestRate);
		interestAccrued += interest;
		stereoCost = stereoCost - (monthlyPayment - interest);

		months++;

		if(stereoCost < 0){
			cout << "You have overpaid for this month, and the following amount is being returned: $" << abs(stereoCost) << endl;
			cout << "It has taken " << months << " months to pay off your stereo!\n";
			cout << "Interest paid: $" << interestAccrued << endl;
		}
		else if(stereoCost == 0){
			cout << "It has taken " << months << " to pay off your stereo!\n";
			cout << "Interest paid: $" << interestAccrued << endl;
		}
	}
}


void ch2Project8(){
	double itemCost, inflationRate;
	int years, k = 0;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Enter the item cost:\n";
	cin >> itemCost;

	cout << "Enter the years from today purchase will occur:\n";
	cin >> years;

	cout << "Enter the expected inflation rate:\n";
	cin >> inflationRate;
	inflationRate = inflationRate/100;

	while( k < years){
		itemCost *= (1 + inflationRate);
		k++;
	}

	cout << "Expected price: $" << itemCost << endl;
}

void ch2Project7(){
	int weeklyHours, answer, numberDependent, extraDependentFee = 0;
	double grossPay, netPay, socialWithheld, fedWithheld, stateWithheld;
	const double social = .06, fedTax = .14, stateTax = .05, unionFees = 10, hourlyRate = 16.75, fortyHourPay=40*hourlyRate,
	overtimeRate = hourlyRate * 1.5;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	do{
		cout << "Enter hours worked this week:\n";
		cin >> weeklyHours;

		cout << "Enter number of dependents:\n";
		cin >> numberDependent;

		if( weeklyHours <= 40 && weeklyHours > 0 && weeklyHours < 168 && numberDependent >= 0){
			cout << "Gross pay: $" << (grossPay = weeklyHours * hourlyRate) << endl;
			cout << "Social Security withheld: $" << (socialWithheld = grossPay * social) << endl;
			cout << "Federal income tax withheld: $" << (fedWithheld = grossPay * fedTax) << endl;
			cout << "State income tax withheld: $" << (stateWithheld = grossPay * stateTax) << endl;
			cout << "Union fee's: $" << unionFees << endl;
			if( numberDependent < 3){
				cout << "Extra dependent fee: $" << extraDependentFee << endl;
				cout << "Net pay: $" << (netPay = grossPay * (1 - (social + fedTax + stateTax)) - extraDependentFee ) << endl;
			}
			else{
				cout << "Extra dependent fee: $" << (extraDependentFee = 35) << endl;
				cout << "Net pay: $" << (netPay = grossPay * (1 - (social + fedTax + stateTax)) - extraDependentFee ) << endl;
			}
		}
		else if(weeklyHours > 40 && weeklyHours > 0 && weeklyHours < 168 && numberDependent >= 0){
			cout << "Gross pay: $" << (grossPay = fortyHourPay + ( (weeklyHours - 40) * overtimeRate)) << endl;
			cout << "Social Security withheld: $" << (socialWithheld = grossPay * social) << endl;
			cout << "Federal income tax withheld: $" << (fedWithheld = grossPay * fedTax) << endl;
			cout << "State income tax withheld: $" << (stateWithheld = grossPay * stateTax) << endl;
			cout << "Union fee's: $" << unionFees << endl;
			if( numberDependent < 3){
				cout << "Extra dependent fee: $" << extraDependentFee << endl;
				cout << "Net pay: $" << (netPay = grossPay * (1 - (social + fedTax + stateTax)) - extraDependentFee ) << endl;
			}
			else{
				cout << "Extra dependent fee: $" << (extraDependentFee = 35);
				cout << "Net pay: $" << (netPay = grossPay * (1 - (social + fedTax + stateTax)) - extraDependentFee ) << endl;
			}
		}

		extraDependentFee = 0;

		cout << "\n\nWould you like to recalculate: 0-no, 1-yes\n";

		while(!(cin >> answer)){
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Invalid input. Try again: 0-no, 1-yes\n";
		}
	}while(1 == answer);
}

void ch2Project6(){
	int maxCapacity, peopleInvited, answer;

	do{
		cout << "Enter the maximum room capacity:\n";
		cin >> maxCapacity;

		cout << "Enter number of meeting attendee's:\n";
		cin >> peopleInvited;

		if( peopleInvited <= maxCapacity){
			cout << "You have not exceeded the maximum room capacity!\n";
			cout << "You may invite " << maxCapacity - peopleInvited << " more guests!\n";
		}
		else{
			cout << "You have exceeded the maximum room capacity!\n";
			cout << "You reduce attendee list by " << peopleInvited - maxCapacity<< " to meet regulation standards!\n";
		}

		cout << "Would you like to recalculate: 0-no, 1-yes\n";

		while(!(cin >> answer)){
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Invalid input. Try again: 0-no, 1-yes\n";
		}
	}while(1 == answer);
}

void ch2Project5(){

	double moneyNeed, loanAmount, interestRate, monthlyPayment, duration;
	int answer;

	do{
		cout << "Enter the amount of money you need:\n";
		cin >> moneyNeed;

		cout << "Enter the interest rate:\n";
		cin >> interestRate; interestRate = interestRate/100;
		cout << "Interest rate entered: " << interestRate << endl;


		cout << "Enter the duration of the loan in months:\n";
		cin >> duration;

		loanAmount = moneyNeed/(1-(interestRate)*(duration/12));
		cout << "Your loan amount is: " << loanAmount << endl;

		monthlyPayment = loanAmount/duration;
		cout << "Your monthly payment is: " << monthlyPayment << endl;

		cout << "Would you like to recalculate: 0-no, 1-yes\n";

		while(!(cin >> answer)){
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Invalid input. Try again: 0-no, 1-yes\n";
		}
	}while(1 == answer);
}

void ch2Project4(){
	double oldSalary, monthsOfBackpay, backpay, newSalary, newMonthlySalary;
	const double payIncrease = .076; // 7.6%
	int answer;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	do{
		cout << "Enter salary before 7.6% increase:\n";
		cin >> oldSalary;

		cout << "Enter number of months of backpay: \n";
		cin >> monthsOfBackpay;

		backpay = ((monthsOfBackpay/12)*oldSalary)*payIncrease;
		cout << "Your backpay is: " << backpay << endl;

		newSalary = (oldSalary * payIncrease) + oldSalary;
		cout << "Your new salary is: " << newSalary << endl;

		newMonthlySalary = newSalary/12;
		cout << "Your monthly salary: " << newMonthlySalary << endl;

		cout << "Would you like to recalculate: 0-no, 1-yes\n";

		while(!(cin >> answer)){
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Invalid input. Try again:\n";
		}
	}while(1 == answer);

}

void ch2Project3(){
	double oldSalary, sixMonthSalary, backpay, newSalary, newMonthlySalary;
	const double payIncrease = .076; // 7.6%
	int answer;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	do{
		cout << "Enter salary before 7.6% increase:\n";
		cin >> oldSalary;

		sixMonthSalary = (oldSalary/2);
		backpay = sixMonthSalary*payIncrease;
		cout << "Your backpay is: " << backpay << endl;

		newSalary = (oldSalary * payIncrease) + oldSalary;
		cout << "Your new salary is: " << newSalary << endl;

		newMonthlySalary = newSalary/12;
		cout << "Your monthly salary: " << newMonthlySalary << endl;

		cout << "Would you like to recalculate: 0-no, 1-yes\n";

		while(!(cin >> answer)){
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Invalid input. Try again:\n";
		}
	}while(1 == answer);

}

void sweetener(){

	double sweetenerDatKillsRatInOunces, parts;
	int mouseWeight, dieterWeight, weightRatio, answer, sodaQuantityDatKills;
	const double sweetenerInSoda = (.001)*(1/10);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(10);

	do{
		cout << "How much artificial sweetener kills the mouse (in ounces):\n";
		cin >> sweetenerDatKillsRatInOunces; // 1 ounce
		cout << "Enter the mouse weight:\n";
		cin >> mouseWeight; // 2 lbs
		cout << "Enter dieter weight goal:\n";
		cin >> dieterWeight; // 120 lbs

		weightRatio = dieterWeight/mouseWeight;
		cout << "Weight ratio: " << weightRatio << endl;
		parts = sweetenerInSoda/sweetenerDatKillsRatInOunces;
		cout << "Parts that kill: " << parts << endl;
		sodaQuantityDatKills = weightRatio/parts;
		cout << "Number of sodas until death: " << sodaQuantityDatKills << endl;

		cout << "You can drink this many sodas before death: " << sodaQuantityDatKills << endl;
		cout << "Would you like to recalculate: 0-no, 1-yes\n";

		while(!(cin >> answer)){
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Invalid input. Try again:\n";
		}
	}while(1 == answer);
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




