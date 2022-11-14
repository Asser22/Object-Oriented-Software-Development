//Asser Moustafa
// Account.cpp 
// Source code (Definition) for the account class

#include <stdexcept>
#include <string>
#include <iostream>
#include<fstream>
#include "Address.h"
#include "Account.h"

using namespace std;




// Account::Account(int id, double balance) // constructor initialises each data member
// {
// 	setID(id);
// 	setBalance(balance);
// }
Account::Account(string name, int  ID, Address  address, string  cellNumber, string  homeNumber){
	cust_name = name;
	id = ID;
	customer_address = address;
	cellNumber = cellNumber;
	homeNumber = homeNumber;
}

// Account::Account(){
// 	id = 0;
// 	cellNumber = "0";
// 	homeNumber = "0";
// 	cust_name = "";
// 	customer_address = new Address();
// }

//*************************************Setters************************************************
void Account::setBalance(double newbalance)
{
	//add a validation to balance 
	if (newbalance < 0){
		cout << "Invalid balance";
	}else{
		balance = newbalance;
	}

}
void Account::setAnnualInterestRate(double newannualInterestRate)
{
	annualInterestRate = newannualInterestRate;
}

void Account::setID(int newID)
{
	if (newID < 0)
		cout << "Invalid ID";
	else
		id = newID;
}		
void Account::setAddress(Address newAddress){
	customer_address = newAddress;
}
void Account::setCellNumber(string newCellNumber){
	cellNumber = newCellNumber;
}
void Account::setHomeNumber(string newhomeNumber){
	homeNumber = newhomeNumber;
}
void Account::setName(string editName){
	cust_name = editName;
}



//*************************************Getters************************************************
unsigned int Account::getID() const
{
	return id;
}
string Account::getCust_name(){
	return cust_name;
}
Address Account::getAddress(){
	return customer_address;	
}
string Account::getCellNumber(){
	return cellNumber;
}
string Account::getHomeNumber(){
	return homeNumber;
}
string Account::get_customer_city(){
	return customer_address.getCity();
}

double Account::getBalance() const
{
	return balance;
}
double Account::getAnnualInterestRate() const
{
	return annualInterestRate;
}
double Account::getMonthlyInterestRate() const // ???
{
	return (annualInterestRate / 12);
}
double Account::getMonthlyInterest() const
{
	// getMonthlyInterest() is to return monthly interest, not the interest rate. 
	// Monthly interest is balance * monthlyInterestRate.

	return balance * (annualInterestRate / 12);
}

//***********************************Withdraw & Deposite***********************************************************
void Account::withdraw(double withdrawAmount)
{
	// withdraw() should checkavailable balance beforewithdraw. 
	// Throw an Exception if there is no sufficient balance.

	if (balance >= withdrawAmount)
	{
		balance -= withdrawAmount;

	}
	else
		throw std::invalid_argument("No sufficient balance");
}

void Account::deposit(double depositAmount)
{
	if (depositAmount < 0){
		cout << "Invalid deposite amount.";
	}else{
		balance += depositAmount;
	}
	

}
void Account::logWrite(std::string string)
{
	std::ofstream logFile("TransactionsLog.txt", std::ios::app);
	logFile << string << std::endl;
	logFile.close();
}

void Account::logRead()
{
	std::string logs;
	std::ifstream logFile("TransactionsLog.txt");
	while (std::getline(logFile, logs))
	{
		std::cout << logs << std::endl;
	}
	logFile.close();
}

void Account::clean()
{
	std::remove("TransactionsLog.txt");
}

