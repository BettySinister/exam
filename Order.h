#include <string>
using namespace std;

class Order {
private:
	unsigned int id;
	unsigned int amount;
	string address;
	string manufacturer;
	string timeAndDate;
	string driver;
	string licensePlate;
	bool paid;

public:
	void set_id(unsigned int id);
	void set_amount(unsigned int amount);
	void set_address(string address);
	void set_manufacturer(string manufacturer);
	void set_timeAndDate(string timeAndDate);
	void set_driver(string driver);
	void set_licensePlate(string licensePlate);
	void set_paid(bool paid);

	unsigned int get_id();
	unsigned int get_amount();
	string get_address();
	string get_manufacturer();
	string get_timeAndDate();
	string get_driver();
	string get_licensePlate();
	bool get_paid();
};