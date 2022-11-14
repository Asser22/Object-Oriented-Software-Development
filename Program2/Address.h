//Asser Moustafa
#pragma once
#include <string>

using namespace std;

class Address
{
public:
	string streetAddress1;
	string city;
	string state;
	string zipCode;

public:
	Address(); 
	string getCity();
	void setAddress(string streetAddress1, string city, string state, string zipCode);
};
