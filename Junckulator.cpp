//Assignment #1
//Name: Asser Moustafa
/*The purpose of the program is to implement a general-purpose calculator
  called Junckulator which solves different types of problems.
*/
#include <algorithm> 
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip> // std::setprecision
#include <sstream>
#include <string.h>


using namespace std;

string getName();
char getChoice();
void printMenu();
int mathCalculator();
string gradesCalculator();
float metricConversion();
void stringTokenizer();
string help();
string quit();


bool isLetter(string name)
{
	for(int i = 0; i < name.length(); i++)
	{
		if( name[i] >= '0' && name[i] <= '9'){ 
            cout << "Your name must be alphabetical characters only!\n";
			cout << "Program terminating please start over." << endl;
            return false;
        }
		else{
			return true;
		}

		
	}
    return false;
}

double validationOnNumbers(double number)
{
    //if the user fails to put in a number, ask the user to re-do it
    while(cin.fail()) {
        cout << "Error! Please enter a number!" << endl;
        cin.clear(); //clear the input
        cin.ignore(256, '\n');
        cout << "Please Reenter the number: ";
        cin >> number;
    }
    return number;//return the valid number
}


string getName(){
    string name;
    string last;
    cout << "Please enter your FULL name: ";
    cin>>name;
    cin.get();
    getline(cin, last);
    if (isLetter(last) && isLetter(name)){
        cout << "Thank you "<< name<<" Welcome to our JunkuLator Adventures!!!"<< endl;
    }
    else{
        getName();
    }
    
    
    return name;
}

char getChoice() {
    char choice;
    printMenu();
    cin >> choice;
    return choice;
}

//number check function to see if the user puts in the correct number
double validateUserInput(double num)
{
    cin >> num;
    //if the user fails to put in a number, reask
    while(cin.fail()) {
        //print error message
        cout << "Error! enter a number!" << endl;
        //clear the input
        cin.clear();
        //ignore the newline 
        cin.ignore(256, '\n');
        //ask to reenter
        cout << "Reenter: ";
        cin >> num;
    }
    //return the valid number
    return num;
}

void printMenu(){
    cout << "\n";
    cout << "Please select from the following menu: \n";
    cout << "   1. Math Calculator\n" ;
    cout << "   2. Metric Conversion Calculator\n";
    cout << "   3. Grades Calculator \n";
    cout << "   4. String Tokenizer\n";
    cout << "   5. Help (display help message/s)\n";
    cout << "   6. Quit (terminates the program)\n";
    cout << "Enter your choice and press return: ";
}

//*********************Math Calculator*********************//
int mathCalculator() {
    int firstOperand;
    int secondOperand;
    int result;
    cout << "\n";
    cout << "Please enter operation (+, - , *, /, %, Log2(n), Help): ";
    string choice;
    cin >> choice;

    if (choice == "+") {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        //firstOperand = validationOnNumbers(firstOperand);
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        secondOperand = validationOnNumbers(secondOperand);
        result = firstOperand + secondOperand;
        cout << firstOperand << " " << "+" << " " << secondOperand  << " " << "="   << " "<< result;
        return result;

    } else if (choice == "-") {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        firstOperand = validationOnNumbers(firstOperand);
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        secondOperand = validationOnNumbers(secondOperand);
        result = firstOperand - secondOperand;
        cout << firstOperand << " " << "-" << " " << secondOperand  << " " << "="   << " "<< result;
        return result;

    } else if (choice == "*") {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        firstOperand = validationOnNumbers(firstOperand);
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        secondOperand = validationOnNumbers(secondOperand);
        result = firstOperand * secondOperand;
        cout << firstOperand << " " << "*" << " " << secondOperand  << " " << "="   << " "<< result;
        return result;

    } else if (choice == "/") {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        firstOperand = validationOnNumbers(firstOperand);
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        secondOperand = validationOnNumbers(secondOperand);
        result = firstOperand / secondOperand;
        cout << firstOperand << " " << "/" << " " << secondOperand  << " " << "="   << " "<< result;
        return result;

    } else if (choice == "%") {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        firstOperand = validationOnNumbers(firstOperand);
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        secondOperand = validationOnNumbers(secondOperand);
        result = firstOperand % secondOperand;
        cout << firstOperand % 10 << " " << "%" << " " << secondOperand  << " " << "="   << " "<< result;
        return result;

    } else if (choice == "log2") {
        cout << "Enter your first Operand: ";
        float firstOperand;
        cin >> firstOperand;
        firstOperand = validationOnNumbers(firstOperand);
        result = log2(firstOperand);
        cout << "log2(" << firstOperand << ") = " << result << endl;


    } else if (choice == "Help") {
        cout << "You should one of these operand (+, - , *, /, %, Log2(n)) ";
        mathCalculator();

    } else {
        cout << "ERROR! Try another operand!\n";
        mathCalculator();
    }
    return result;
}



/**********************String Tokenizer*********************
Read a full line of text from the user and analyze it.
b. Print the total number of letters in the line.
c. Print the total number of words in the line.
d. Print the line backwards.
e. Print all words that starts with capital letter.
f. Search for a word in the line.
Ask user to enter a word and display Found if found and Not Found otherwise
 */

void numberOfLetter(string userInput){
    int lettersNumber = userInput.length();//using .length() to find the total number of letters
    cout << "\nThe total number of letters in the line is: " << lettersNumber << endl;
}

void numberOfWords(string userInput){
    int words = 0;
    //using for loop to go through each word and if there is a space, add 1 to the words variable to count number of words
    for (int i = 0; i < userInput.size(); i++) {
        if(userInput[i] == ' ')
            words++;
    }
    ++words;//final incrementation to count for the last word
    cout << "\nThe total number of words in this line is: " << words << endl;
}

void printReverse(string userInput){
    reverse(userInput.begin(), userInput.end());//reverse() function reverse the string
    cout << "\nThe reverse of the line is: " << userInput;
}


void printCapitalLetters(string userInput){
    int totalLetters = userInput.length();//getting total number of letters
    cout << endl;
    for (int i = 0; i < totalLetters; i++) {//go through each letters of the string
        if(isupper(userInput[i])) {//if there is a capital letter print it out
            cout << "\nThe Capital Letters Are: " << userInput[i];
        }
    }
}

bool isWordFound(string sentence, string word){
    string temp;
    stringstream string(sentence);//using stringstream to split the sentence
    while(string >> temp) {//compare the letters
        if (temp.compare(word) == 0) {//if same letters return true
            return true;
        }
    }
    return false;
}

void lookUpWord(string userInput)
{
    cout << "Enter a word you want to search for: ";
    string userWord;
    getline(cin, userWord);
    if (isWordFound(userInput, userWord))
        cout << "The word \"" << userWord << "\" is found in the sentence";
    else
        cout << "The word \"" << userWord << "\" is not found in the sentence";

}

void stringTokenizer()
{
    int userOption;
    string userInput;

    cout << "\nString Tokenizer\n"
            "   1. Read a full line of text from the user and analyze it.\n"
            "   2. Print the total number of letters in the line.\n"
            "   3. Print the total number of words in the line.\n"
            "   4. Print the line backwards.\n"
            "   5. Print all words that starts wtih capital letter.\n"
            "   6. Search for a word in line.\n";
    cout << "\nEnter your choice and press return: ";
    cin >> userOption;

    //using while loop to make sure the user puts in the correct data
    while (true) {
        if (userOption == 1) {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            numberOfLetter(userInput);
            numberOfWords(userInput);
            printReverse(userInput);
            printCapitalLetters(userInput);
            break;
        }
        else if (userOption == 2) {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            numberOfWords(userInput);
            break;
        }
        else if (userOption == 3) {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            numberOfWords(userInput);
            break;
        }
        else if (userOption == 4) {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            printReverse(userInput);
            break;
        }
        else if (userOption == 5) {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            printCapitalLetters(userInput);
            break;
        }
        else if (userOption == 6) {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            lookUpWord(userInput);
            break;
        }
        else {
            cout << "INVALID INPUT!\n";
            cout << "Please input a valid option\n"
                    "Enter your choice from (1-6) and press return: ";
            cin >> userOption;
        }
    }
}

//*********************Help*********************//
string help(){

    
    cout << "\nYou have to chose any option from 1-6\n";
    cout << "  The first option is a math calculator\n";
    cout << "  The second option is a metric conversion\n";
    cout << "  The third option is a grade calculator\n";
    cout << "  The fourth option is a string tokenizer\n";
    cout << "  The sixth option is to quit the program\n";
    char choice = getChoice();
    switch(choice) {
        case '1':
            mathCalculator();
            break;
        case '2':
            metricConversion();
            break;
        case '3':
            gradesCalculator();
            break;
        case '4':
            stringTokenizer();
            break;
        case '5':
            help();
            break;
        case '6':
            quit();
            break;
        case 'q':
            quit();
            break;
        case 'Q':
            quit();
            break;
        case 'h':
            help();
            break;
        case 'H':
            help();
            break;
        default:
            cout << "Not a Valid Choice. \n"
                 << "Choose again.\n";
                 //main();
            break;
    }
    return "Just follow the guidelines";


}
//*********************Quit*********************//
string quit(){
    cout << endl;
    
    return "Thank you for using the JunuLator!\n This is the end of the program.\n";
}

//*********************Metric Conversion*********************//
void printMenuForMetricConversion();
int getChoiceForMetricConversion(){
    int choice;
    printMenuForMetricConversion();
    cin >> choice;
    choice = validationOnNumbers(choice);
    return choice;
}

float fromMilesToKilometers() {
    //Miles to KM
    float miles;
    cout << "Please enter your miles value: ";
    cin >> miles;
    miles = validationOnNumbers(miles);
    float kilometers = miles * 1.60934;
    cout <<"Your answer is " << std::setprecision(4) << kilometers << " Kilometers";
    return kilometers;
}

float fromKilometersToMiles(){
    //KM to Miles
    float kilometers;
    cout << "\n";
    cout << "Please enter your kilometers value: ";
    cin >> kilometers;
    kilometers = validationOnNumbers(kilometers);
    float miles = kilometers * 0.62137;
    cout <<"Your answer is " << std::setprecision(4) << miles << " miles";
    return miles;
    
}

float fromKilogramsToPounds(){
    //Kg to pounds
    float kilogram;
    cout << "\n";
    cout << "Please enter your kilograms value: ";
    cin >> kilogram;
    kilogram = validationOnNumbers(kilogram);
    float pounds  = kilogram * 2.20462;
    cout <<"Your answer is " << std::setprecision(4) << pounds << " pounds";
    return pounds;
}

float fromPoundsToKilograms(){
    //pounds to kg
    float pounds;
    cout << "\n";
    cout << "Please enter your pounds value: ";
    cin >> pounds;
    pounds = validationOnNumbers(pounds);
    float kilogram  = pounds * 0.45359237;
    cout <<"Your answer is " << std::setprecision(4) << kilogram << " kilogram";
    return kilogram;
}




float fromInchesToCentimetres(){
    //inches to cm
    float inches;
    cout << "\n";
    cout << "Please enter your inches value: ";
    cin >> inches;
    inches = validationOnNumbers(inches);
    float centimetres  =  inches * 2.54;
    cout <<"Your answer is " << std::setprecision(4) <<  centimetres << " centimetres";
    return centimetres;
}

float fromCentimetresToInches(){
    //cm to inches
    float centimetres;
    cout << "\n";
    cout << "Please enter your centimetres value: ";
    cin >> centimetres;
    centimetres = validationOnNumbers(centimetres);
    float inches  =  centimetres / 2.54;
    cout <<"Your answer is " << std::setprecision(4) << inches << " inches";
    return inches;
}

void printMenuForMetricConversion(){
    cout << "\n";
    cout << "Please select from the following menu: \n";
    cout << "1. Change from Kilometers to Miles.\n";
    cout << "2. Change form Miles to Kilometers.\n";
    cout << "3. Change from Kilograms(Kg) to pounds.\n";
    cout << "4. Change from pounds to Kilograms(Kg).\n";
    cout << "5. Change from inches to cm.\n";
    cout << "6. Change from centimetres to inches.\n";
    cout << "Enter your choice and press return: ";
}

float metricConversion() {
    int choice = getChoiceForMetricConversion();
    switch(choice) {
        case 1:
            fromKilometersToMiles();
            break;
        case 2:
            fromMilesToKilometers();
            break;
        case 3:
            fromKilogramsToPounds();
            break;
        case 4:
            fromPoundsToKilograms();
            break;
        case 5:
            fromInchesToCentimetres();
            break;
        case 6:
            fromCentimetresToInches();
            break;
        default:
            cout << "Not a Valid Choice. \n"
                 << "Choose again.\n";
                 metricConversion();
            break;
    }
    return choice;
}


//*********************Grades Calculator*********************//
string gradesCalculator(){
    double Grade1;
    double Grade2;
    double Grade3;
    double AvgGrade; // average of entered grades.
    double Total = 0; // Stores Combined value of grades per loop.
    double AverageTotal = 0; // Holds running total of grades, Used for final Average.
    int Students = 0; // Stores input of amount of students, Used to stop Counter.
    int n = 0; // Used to calculate counter position.
    int StudentNumber; // Used to output which student data is being requested for.

    cout << "Enter the number of students in class : "; // Request amount of students for loop from user.
    cin >> Students; // Store user entered value of students.
    Students = validationOnNumbers(Students);



    // used to vary the allowed amount of students based on user needs.
    while (n < Students) {

        StudentNumber = n + 1; // Calculate current Student number position.

        cout << "Please enter three numeric grades for student number " << StudentNumber << ". \n"; // requesting grades imput from user.
        cout << "Please enter their first grade: ";
        cin >> Grade1; // Placing users first grade value to Grade1.
        Grade1 = validationOnNumbers(Grade1);
        if (Grade1 > 100 || Grade1 < 0){
            cout << "\n";
            cout << "Invalid number! Grade should be less than 100!\n";
            cout << "You will repeat the program again!\n";
            cout << "But make sure to enter grade value less than 100!\n";
            cout << "\n";
            gradesCalculator();
        }
        cout << "Please enter their second grade: ";
        cin >> Grade2; // Placing users second grade value to Grade2.
        Grade2 = validationOnNumbers(Grade2);
        if (Grade2 > 100 || Grade2 < 0){
            cout << "\n";
            cout << "Invalid number! Grade should be less than 100!\n";
            cout << "You will repeat the program again!\n";
            cout << "But make sure to enter grade value less than 100!\n";
            cout << "\n";
            gradesCalculator();
        }
        cout << "Please enter their third grade: ";
        cin >> Grade3; // Placing users third grade value to Grade3.
        Grade3 = validationOnNumbers(Grade3);
        if (Grade3 > 100 || Grade3 < 0){
            cout << "\n";
            cout << "Invalid number! Grade should be less than 100!\n";
            cout << "You will repeat the program again!\n";
            cout << "But make sure to enter grade value less than 100!\n";
            cout << "\n";
            gradesCalculator();
        }

        Total = (Grade1 + Grade2 + Grade3); // Calculate current grade total.
        AverageTotal = AverageTotal + Total; // Store total grade for running total.
        AvgGrade = (Total / 3); // Calculate average grade.

        cout << "Student number " << StudentNumber << " grades: " << Grade1 << " " << Grade2 << " " << Grade3 << " average: " << std::setprecision(3) <<AvgGrade << " "; // Output data to user about Grades using calculations of stored values.

        n = n + 1; // add one to counter position.

        // Selection of grade based on callculation of AvgGrade to display designated letter grade output.
        if ( AvgGrade >= 90) // Grades 90 and above as "A"
            cout << " letter grade: A!\n";
        else
        if ( AvgGrade >= 80) // Grades 80-89 as "B"
            cout << " letter grade: B.\n";
        else
        if ( AvgGrade >= 70) // Grades 70-79 as "C"
            cout << " letter: grade: C.\n";
        else
        if ( AvgGrade >= 60) // Grades 60-69 as "D"
            cout << " letter grade: D.\n";
        else // Grades 59 and less as "F"
            cout << " letter grade: F.\n";
        cout << "\n"; // Adds new line between data to improve readability of program.
    }
    
    cout << "The class average: " << AverageTotal / (StudentNumber * 3) << "\n" ; // displays total class average based on running total and about of studends.
    return "Thank you for using grades calculator";
}


//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=MAIN*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
int main() {

    getName();

    char choice = getChoice();

    switch(choice) {
        case '1':
            mathCalculator();
            break;
        case '2':
            metricConversion();
            break;
        case '3':
            gradesCalculator();
            break;
        case '4':
            stringTokenizer();
            break;
        case '5':
            help();
            break;
        case '6':
            quit();
            break;
        case 'q':
            quit();
            break;
        case 'Q':
            quit();
            break;
        case 'h':
            help();

            break;
        case 'H':
            help();
            break;
        default:
            cout << "Not a Valid Choice. \n"
                 << "Choose again.\n";
                main();
            break;
    }
}






