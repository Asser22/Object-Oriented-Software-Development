//Assignment #1
//Name: Asser Moustafa
/*The purpose of the program is to implement a general-purpose calculator
  called Junckulator which solves different types of problems.
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>      // std::setprecision
#include <sstream>

using namespace std;

string getName();
char getChoice();
void printMenu();
int mathCalculator();
string gradesCalculator();
float metricConversion();
string stringTokenizer();
string help();
string quit();
string askString();
int numberofWords();
int getNumOfLetters(string text);
int getNumberOfWords(string text);
string getReversedText(string text);
void printCapitalWord(int size, string text);
void findWord(string text, int size);
string inputText();

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
            break;
    }
}

string getName(){
    string firstName;
    string lastName;
    cout << "Please enter your full name: ";
    getline (cin,  firstName);
    cout << "Thank you "<< firstName<<" Welcome to our JunkuLator Adventures!!!"<< endl;

    return firstName;



//    string name;
//    cout << "Please enter your full name: ";
//    cin >> name;
//    cout << "Thank you "<< name<<" Welcome to our JunkuLator Adventures!!!"<< endl;
//    return firstName;

}

char getChoice(){
    char choice;
    printMenu();
    cin >> choice;
    return choice;


//    if(choice=="Help"){
//        choice="H";
//    }

//    choice=choice.c_str();
//    return choice;
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
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        result = firstOperand + secondOperand;
        cout << firstOperand << " " << "+" << " " << secondOperand  << " " << "="   << " "<< result;
        return result;

    } else if (choice == "-") {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        result = firstOperand - secondOperand;
        cout << firstOperand << " " << "-" << " " << secondOperand  << " " << "="   << " "<< result;
        return result;

    } else if (choice == "*") {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        result = firstOperand * secondOperand;
        cout << firstOperand << " " << "*" << " " << secondOperand  << " " << "="   << " "<< result;
        return result;

    } else if (choice == "/") {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        result = firstOperand / secondOperand;
        cout << firstOperand << " " << "/" << " " << secondOperand  << " " << "="   << " "<< result;
        return result;

    } else if (choice == "%") {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        result = firstOperand % secondOperand;
        cout << firstOperand % 10 << " " << "%" << " " << secondOperand  << " " << "="   << " "<< result;
        return result;

    } else if (choice == "log2") {
        cout << "Enter your first Operand: ";
        float firstOperand;
        cin >> firstOperand;
        result = log2(firstOperand);
        cout << "log2(" << firstOperand << ") = " << result << endl;


    } else if (choice == "Help") {
        cout << "You should one of these operand (+, - , *, /, %, Log2(n)) ";
        mathCalculator();

    } else {
        cout << "ERROR! Try another operand!\n";
        mathCalculator();
    }
}
int getOperands();

float fromCentimetresToInches();
float fromInchesToCentimetres();
float fromPoundsToKilograms();
float fromKilogramsToPounds();
int getChoiceForMetricConversion();
float fromKilometersToMiles();
float fromMilesToKilometers();
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
            break;
    }

}
string inputText(){
    string textEntered;
    cout << "Enter a text: ";
    cin >> textEntered;
    return textEntered;
}
int getNumOfLetters(string text){


    //count the number of letters of parameter and return int counter = 0;
    int counter = 0;

    //count the number of space
    for (int i =0; i<text.length(); i++){
        if (text.at(i) == ' '){
            counter++;
        }
    }

    return text.length() - counter;
}

int getNumberOfWords(string text){
    int counter = 0;
    for (int i=0; i<text.length(); i++){
        if (text.at(i) == ' '){
            counter++;
        }
    }

    return ++counter;
}

string getReversedText(string text){
    //reverse parameter text and return

    string reversed = text;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

void printCapitalWord(int size,  string text){
    string textArray[size];
    string temp;
    int index = 0;

    //convert each word to array
    stringstream ssin(text);
    while(ssin.good() && index < size){
        ssin >> textArray[index];
        ++index;
    }

    cout << "All the words starting with capital letter is: " << endl;

    //check each word if starting with capital letter and print and count the number of it
    int counter = 0;
    for (int i=0; i<size; i++){
        if (textArray[i].at(0) >= 65 && textArray[i].at(0) <= 90){
            cout << textArray[i] << endl;
            ++counter;
        }
    }

    //if count of words starting with capital letter is 0, print not found
    if (counter == 0){
        cout << "not found" << endl;
    }
}



void findWord(string text, int size){
    //look for word user wants to check and tell the result

    string textArray [size];
    string temp;
    int index=0;

    //convert text to array having each word as an element
    stringstream ssin(text);
    while (ssin.good() && index<size) {
        ssin >> textArray[index];
        ++index;
    }

    //ask a word user looks for
    string wordInput;
    bool found=false;
    cout << "Enter the word you want to find: ";
    cin >> wordInput;

    //see each element if matches the word user entered
    for (int i=0; i<sizeof(textArray); i++){
        if (textArray[i] == wordInput) {
            found = true;
        }

    }

    //print the result
    if (found == true){
        cout << "The word you are looking for is found." << endl;
    }
    else {
        cout << "The word you are looking for is NOT found." << endl;
    }

}


string help(){

    cout << "You have to chose any option from 1-6\n";
    cout << "The first option is a math calculator\n";
    cout << "The second option is a metric conversion\n";
    cout << "The third option is a grade calculator\n";
    cout << "The fourth option is a string tokenizer\n";
    cout << "The sixth option is to quit the program\n";
    main();
}
string quit(){
    cout << "Thank you for using the JunuLator!\n";
    cout << "This is the end of the program.\n";
}







void printMenuForMetricConversion();
int getChoiceForMetricConversion(){
    int choice;
    printMenuForMetricConversion();
    cin >> choice;
    return choice;
}

float fromMilesToKilometers() {
    //Miles to KM
    float miles;
    cout << "Please enter your miles value: ";
    cin >> miles;
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
    float kilogram  = pounds / 2.20462;
    cout <<"Your answer is " << std::setprecision(4) << kilogram << " kilogram";
    return kilogram;
}

float fromInchesToCentimetres(){
    //inches to cm
    float inches;
    cout << "\n";
    cout << "Please enter your inches value: ";
    cin >> inches;
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



    // used to vary the allowed amount of students based on user needs.
    while (n < Students) {

        StudentNumber = n + 1; // Calculate current Student number position.

        cout << "Please enter three numeric grades for student number " << StudentNumber << ". \n"; // requesting grades imput from user.
        cout << "Please enter their first grade: ";
        cin >> Grade1; // Placing users first grade value to Grade1.
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

}

string stringTokenizer() {
    //operate functions to handle a to f

    //get text from user
    string textEntered = askString();

    //pass text user entered and get calculated the number of letters of the text and print
    int numberOfLetters = getNumOfLetters(textEntered);
    cout << "The total number of letters in the line is: " << numberOfLetters << endl;

    //pass text user entered and calculate the number of words of the text and print
    int numberOfWords = getNumberOfWords (textEntered);
    cout << "The total number of words in the line is: " << numberOfWords << endl;

    //pass text user entered and make it reversed and print
    string reversedText = getReversedText (textEntered);
    cout << "This is what you entered backwards: " << endl;
    cout << reversedText << endl << endl;

    //pass the number of words in the text and the text and find words starting with capital letter and print
    printCapitalWord(numberofWords(), textEntered);

    //pass the number of words in the text and text and find words that user is looking for and print findword(textentered, numberofWords) ;
    findWord(textEntered, numberofWords()) ;
}
