#include <iostream>
#include "leap.cpp"
using namespace std;


int main() {
	LeapYear okay;
	// ask user for year
	std::cout << okay.year() << "  ";
	// prints the year 
	std::cout << okay.get_year();
	// runs a conditional statement to see if the year is a leap year.
	std::cout << okay.leap_year();
}