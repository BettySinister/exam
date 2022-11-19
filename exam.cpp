#include <iostream>
#include <string>
#include "Order.h"

using namespace std;

/*unsigned int id;
unsigned int amount;
string address;
string manufacturer;
string timeAndDate;
string driver;
string licensePlate;
bool paid;*/

int main() {
	int inputInt;
	string inputString;
	Order o1;
	cout << "Enter the description of the new order:\n";

	cout << "Number of the order: ";
	cin >> inputInt;
	o1.set_id(inputInt);

	cout << "Amount of bottles: ";
	cin >> inputInt;
	o1.set_amount(inputInt);

	cout << "Address (use underscores instead of spaces): ";
	cin >> inputString;
	o1.set_address(inputString);

	cout << "Manufacturer: ";
	cin >> inputString;
	o1.set_manufacturer(inputString);

	cout << "Date and time (year.month.day_hours.minutes): ";
	cin >> inputString;
	o1.set_timeAndDate(inputString);

	cout << "Driver: ";
	cin >> inputString;
	o1.set_driver(inputString);

	cout << "License plate of the car: ";
	cin >> inputString;
	o1.set_licensePlate(inputString);

	cout << "Is order paid (y/n)? ";
	cin >> inputString;
	(inputString == "y") ? o1.set_paid(true) : o1.set_paid(false);


	cout << endl << "New order was created." << endl;


	cout << "Number of the order: " << o1.get_id() << endl;
	cout << "Amount of bottles: " << o1.get_amount() << endl;
	cout << "Address: " << o1.get_address() << endl;
	cout << "Manufacturer: " << o1.get_manufacturer() << endl;
	cout << "Date and time: " << o1.get_timeAndDate() << endl;
	cout << "Driver: " << o1.get_driver() << endl;
	cout << "License plate of the car: " << o1.get_licensePlate() << endl;
	cout << "Paid: ";
	(o1.get_paid() == true) ? cout << "yes" : cout << "no" << endl;
}