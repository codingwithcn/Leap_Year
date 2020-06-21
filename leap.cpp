#include "leap.h"
#include <iostream>
#include <chrono>

int LeapYear::year() {
	int yea;
	std::cout << "What year is it?\n";
	std::cin >> yea;
	// So I will be able to access the value of yea, since at the moment it is the private scope of yea
	yes = yea;
	return 0;
}

int LeapYear::get_year() {
	// prints out the user input name
	std::cout << "It is the year ";
	return yes;
}

int LeapYear::leap_year() {
	// writes the if statement to check if it is a leap year.
	// since every four years make a leap year, it divides the amount of years by four and if there is a reminder it is not a leap year, if there isnt a reminder it is a leap year.
	std::string str = ".  And it is not a leap year.\n";
	if (yes % 4 == 0) {
		std::cout << ".  And it is a leap year.\n";
	}
	else {
		std::cout << str;
		return 0;
	}
}