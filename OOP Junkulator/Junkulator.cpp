// Assignment #1
// Name: Asser Moustafa
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
#include "StringTokenizer.h"
#include "MetricConversion.h"
#include "MathCalculator.h"
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

bool JunkuLator::isLetter(string name)
{
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] >= '0' && name[i] <= '9')
        {
            cout << "Your name must be alphabetical characters only!\n";
            cout << "Program terminating please start over." << endl;
            return false;
        }
        else
        {
            return true;
        }
    }
    return false;
}

double JunkuLator::validationOnNumbers(double number)
{
    // if the user fails to put in a number, ask the user to re-do it
    while (cin.fail())
    {
        cout << "Error! Please enter a number!" << endl;
        cin.clear(); // clear the input
        cin.ignore(256, '\n');
        cout << "Please Reenter the number: ";
        cin >> number;
    }
    return number; // return the valid number
}

string JunkuLator::getName()
{
    string name;
    string last;
    cout << "Please enter your FULL name: ";
    cin >> name;
    cin.get();
    getline(cin, last);
    if (isLetter(last) && isLetter(name))
    {
        cout << "Thank you " << name << " Welcome to our JunkuLator Adventures!!!" << endl;
    }
    else
    {
        getName();
    }

    return name;
}

char JunkuLator::getChoice()
{
    char choice;
    printMenu();
    cin >> choice;
    return choice;
}

// number check function to see if the user puts in the correct number
double JunkuLator::validateUserInput(double num)
{
    cin >> num;
    // if the user fails to put in a number, reask
    while (cin.fail())
    {
        // print error message
        cout << "Error! enter a number!" << endl;
        // clear the input
        cin.clear();
        // ignore the newline
        cin.ignore(256, '\n');
        // ask to reenter
        cout << "Reenter: ";
        cin >> num;
    }
    // return the valid number
    return num;
}

void JunkuLator::printMenu()
{
    cout << "\n";
    cout << "Please select from the following menu: \n";
    cout << "   1. Math Calculator\n";
    cout << "   2. Metric Conversion Calculator\n";
    cout << "   3. Grades Calculator \n";
    cout << "   4. String Tokenizer\n";
    cout << "   5. Help (display help message/s)\n";
    cout << "   6. Quit (terminates the program)\n";
    cout << "Enter your choice and press return: ";
}



//*********************Help*********************//
string JunkuLator::help()
{

    cout << "\nYou have to chose any option from 1-6\n";
    cout << "  The first option is a math calculator\n";
    cout << "  The second option is a metric conversion\n";
    cout << "  The third option is a grade calculator\n";
    cout << "  The fourth option is a string tokenizer\n";
    cout << "  The sixth option is to quit the program\n";
    char choice = getChoice();
    switch (choice)
    {
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
        // main();
        break;
    }
    return "Just follow the guidelines";
}
//*********************Quit*********************//
string JunkuLator::quit()
{
    cout << endl;

    return "Thank you for using the JunuLator!\n This is the end of the program.\n";
}

//*********************Grades Calculator*********************//
string JunkuLator::gradesCalculator()
{
    double Grade1;
    double Grade2;
    double Grade3;
    double AvgGrade;         // average of entered grades.
    double Total = 0;        // Stores Combined value of grades per loop.
    double AverageTotal = 0; // Holds running total of grades, Used for final Average.
    int Students = 0;        // Stores input of amount of students, Used to stop Counter.
    int n = 0;               // Used to calculate counter position.
    int StudentNumber;       // Used to output which student data is being requested for.

    cout << "Enter the number of students in class : "; // Request amount of students for loop from user.
    cin >> Students;                                    // Store user entered value of students.
    Students = validationOnNumbers(Students);

    // used to vary the allowed amount of students based on user needs.
    while (n < Students)
    {

        StudentNumber = n + 1; // Calculate current Student number position.

        cout << "Please enter three numeric grades for student number " << StudentNumber << ". \n"; // requesting grades imput from user.
        cout << "Please enter their first grade: ";
        cin >> Grade1; // Placing users first grade value to Grade1.
        Grade1 = validationOnNumbers(Grade1);
        if (Grade1 > 100 || Grade1 < 0)
        {
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
        if (Grade2 > 100 || Grade2 < 0)
        {
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
        if (Grade3 > 100 || Grade3 < 0)
        {
            cout << "\n";
            cout << "Invalid number! Grade should be less than 100!\n";
            cout << "You will repeat the program again!\n";
            cout << "But make sure to enter grade value less than 100!\n";
            cout << "\n";
            gradesCalculator();
        }

        Total = (Grade1 + Grade2 + Grade3);  // Calculate current grade total.
        AverageTotal = AverageTotal + Total; // Store total grade for running total.
        AvgGrade = (Total / 3);              // Calculate average grade.

        cout << "Student number " << StudentNumber << " grades: " << Grade1 << " " << Grade2 << " " << Grade3 << " average: " << std::setprecision(3) << AvgGrade << " "; // Output data to user about Grades using calculations of stored values.

        n = n + 1; // add one to counter position.

        // Selection of grade based on callculation of AvgGrade to display designated letter grade output.
        if (AvgGrade >= 90) // Grades 90 and above as "A"
            cout << " letter grade: A!\n";
        else if (AvgGrade >= 80) // Grades 80-89 as "B"
            cout << " letter grade: B.\n";
        else if (AvgGrade >= 70) // Grades 70-79 as "C"
            cout << " letter: grade: C.\n";
        else if (AvgGrade >= 60) // Grades 60-69 as "D"
            cout << " letter grade: D.\n";
        else // Grades 59 and less as "F"
            cout << " letter grade: F.\n";
        cout << "\n"; // Adds new line between data to improve readability of program.
    }

    cout << "The class average: " << AverageTotal / (StudentNumber * 3) << "\n"; // displays total class average based on running total and about of studends.
    return "Thank you for using grades calculator";
}

MathCalculator getMathCalculator(){
    MathCalculator m();
    return m;
}

MetricConversion getMetricConversion(){
    MetricConversion mc();
    return mc;
}

StringTokenizer getStringTokenizer(){
    StringTokenizer s();
    return s;
}