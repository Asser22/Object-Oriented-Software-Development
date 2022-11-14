//Asser Moustafa
// Account.h 
// Source code (Definition) for the account class

#include <stdexcept>
#include <string>
#include <iostream>
#include "Address.h"


using namespace std;

class Account
{
private:
	int id;
	double balance;
	double annualInterestRate;
	string cust_name;
	//OOD choices
	string cellNumber;
	string homeNumber;
	Address customer_address;


public:
		Account(string name, int  ID, Address  address, string  cellNumber, string  homeNumber);
		//Account();
		//Getters
		unsigned int getID() const;
		string getCust_name();
		Address getAddress();
		string getCellNumber();
		string getHomeNumber();

		double getBalance() const;

		double getAnnualInterestRate() const;
		double getMonthlyInterestRate() const;
		double getMonthlyInterest() const;

		string  get_customer_city();	//get address prototype
		
		//Setters
		void setID(int); // set Account ID
		void setBalance(double); // set Account Balance
		void setAnnualInterestRate(double); // Set Annual Interest Rate
		
		void setAddress(Address);
		void setCellNumber(string);
		void setHomeNumber(string);
		void setName(string);

		//utility
		void withdraw(double);
		void deposit(double);
};




