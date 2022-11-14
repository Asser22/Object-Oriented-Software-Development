//Asser Moustafa
#include "Address.h"
#include <string>

using namespace std;

Address::Address() {
	streetAddress1 = "242222 Champion Dr.";
	city = "Naperville";
	state = "IL";
	zipCode = "60540";
}

string Address::getCity()
{
	return city;
}



void Address::setAddress(string streetAddress1, string city, string state, string zipCode){
	streetAddress1 = streetAddress1;
	city = city;
	state = state;
	zipCode = zipCode;
}