#include <iostream>
#include <string>
#include "Order.h"

using namespace std;

void Order::set_id(unsigned int id) {
	this->id = id;
}
void Order::set_amount(unsigned int amount) {
	this->amount = amount;
}
void Order::set_address(string address) {
	this->address = address;
}
void Order::set_manufacturer(string manufacturer) {
	this->manufacturer = manufacturer;
}
void Order::set_timeAndDate(string timeAndDate) {
	this->timeAndDate = timeAndDate;
}
void Order::set_driver(string driver) {
	this->driver = driver;
}
void Order::set_licensePlate(string licensePlate) {
	this->licensePlate = licensePlate;
}
void Order::set_paid(bool paid) {
	this->paid = paid;
}

unsigned int Order::get_id() {
	return this->id;
}
unsigned int Order::get_amount() {
	return this->amount;
}
string Order::get_address() {
	return this->address;
}
string Order::get_manufacturer() {
	return this->manufacturer;
}
string Order::get_timeAndDate() {
	return this->timeAndDate;
}
string Order::get_driver() {
	return this->driver;
}
string Order::get_licensePlate() {
	return this->licensePlate;
}
bool Order::get_paid() {
	return this->paid;
}