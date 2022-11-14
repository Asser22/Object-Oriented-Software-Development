//Asser Moustafa
// AccountMain.cpp
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Account.h"
#include "Address.h"

using namespace std;

void transaction_menu() {
    cout << "\n------------------- Welcome ----------------" << endl;
    cout << "Please select from the following menu options:" << endl;
    cout << "\t\t0. Select Account (to Do the Transactions Against)" << endl;
    cout << "\t\t1. Deposit" << endl;
    cout << "\t\t2. Withdraw" << endl;
    cout << "\t\t3. Balance Inquiery" << endl;
    cout << "\t\t4. What is my Monthly Rate?" << endl;
    cout << "\t\t5. Show Customer Address" << endl;
    cout << "\t\t6. Change my Phone Number" << endl;
    cout << "\t\t7. Print Log " << endl;
    cout << "\t\t8. Exist Program" << endl;

    cout << "\nEnter your selection (0 - 8): ";
    
}
int getChoice() {
    int choice;
    transaction_menu();
    cin >> choice;
    return choice;
}
string quit(){
    cout << endl;
    return "Thank you for choosing our bank!\n";
}

void accountSelector(Account acc1, Account acc2, Account acc){
    cout<<"Enter which account you will do the transaction against: "<<endl;
    int temp;
    cin>>temp;
    if(temp==1){
        cout<<"You selected the first account"<<endl;
        acc=acc1;
    }
    else if (temp==2){
        cout<<"You selected the second account"<<endl;
        acc=acc2;
    }

}

void initializeAccount(Account acc, int id, double balance, string name,double rate){
    acc.setID(id);
    acc.setBalance(balance);
    acc.setName(name);
    acc.setAnnualInterestRate(rate);
}

int main() {
    Account acc1{};
    int myID=2345;
    double myBalance=200;
    string myName="John";
    double myRate=0.12;
    initializeAccount(acc1,myID,myBalance,myName,myRate);
    Account acc2{};
    initializeAccount(acc2,myID,myBalance,myName,myRate);
    Account acc{};
    
    int choice = getChoice();

    switch(choice) {
        case 0:{
            accountSelector(acc1,acc2,acc);
        }
        case 1:{
            cout<<"Enter the amount you want to deposit: ";
            int amount;
            cin>>amount;
            acc.getBalance()+=amount;
            cout<<"You succesfully deposited the amount!";
        }
        case 3:{
            cout<<"Your balance is: "<<acc.getBalance()<<endl;
        }
        case 4:{
            cout<<"Your monthly interest rate is: "<<acc.getMonthlyInterest()<<endl;
        }
        case 5:{
            Address addr=acc.getAddress();
            cout<<"streetAddress1: "<<addr.streetAddress1<<endl;
	        cout<<"city:" << addr.city<<endl;
	        cout<<"state:" << addr.state<<endl;
	        cout<<"zipCode:"<<addr.zipCode<<endl;
        }
        case 6:{
            cout<<"Enter your new phone number: ";
            string phoneNumber;
            cin>>phoneNumber;
            acc.setCellNumber(phoneNumber);
        }
         case 8:{
             string s = quit();
             cout<<s<< endl;
             break;
         }
         default:
             cout << "Not a Valid Choice. \n"
                  << "Choose again.\n";
                 main();
             break;
	}
    
    Address address1;
    address1.setAddress("ahmed", "ebaid", "1234", "");
	Account acc1("Asser", 1, address1, "413313","465279"); // instantiate OBJECT of class Account
	acc1.setBalance(55000);
	
	
	std::cout << "\nAddress: " << acc1.get_customer_city() << endl;
	std::cout << "Balance " << acc1.getBalance();



	return 0;
}