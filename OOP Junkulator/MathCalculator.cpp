#include "MathCalculator.h"
#include <cmath>
int MathCalculator::mathCalculator()
{
    int firstOperand;
    int secondOperand;
    int result;
    cout << "\n";
    cout << "Please enter operation (+, - , *, /, %, Log2(n), Help): ";
    string choice;
    cin >> choice;

    if (choice == "+")
    {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        // firstOperand = validationOnNumbers(firstOperand);
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        secondOperand = validationOnNumbers(secondOperand);
        result = firstOperand + secondOperand;
        cout << firstOperand << " "
             << "+"
             << " " << secondOperand << " "
             << "="
             << " " << result;
        return result;
    }
    else if (choice == "-")
    {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        firstOperand = validationOnNumbers(firstOperand);
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        secondOperand = validationOnNumbers(secondOperand);
        result = firstOperand - secondOperand;
        cout << firstOperand << " "
             << "-"
             << " " << secondOperand << " "
             << "="
             << " " << result;
        return result;
    }
    else if (choice == "*")
    {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        firstOperand = validationOnNumbers(firstOperand);
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        secondOperand = validationOnNumbers(secondOperand);
        result = firstOperand * secondOperand;
        cout << firstOperand << " "
             << "*"
             << " " << secondOperand << " "
             << "="
             << " " << result;
        return result;
    }
    else if (choice == "/")
    {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        firstOperand = validationOnNumbers(firstOperand);
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        secondOperand = validationOnNumbers(secondOperand);
        result = firstOperand / secondOperand;
        cout << firstOperand << " "
             << "/"
             << " " << secondOperand << " "
             << "="
             << " " << result;
        return result;
    }
    else if (choice == "%")
    {
        cout << "Enter your first Operand: ";
        cin >> firstOperand;
        firstOperand = validationOnNumbers(firstOperand);
        cout << "Enter your second Operand: ";
        cin >> secondOperand;
        secondOperand = validationOnNumbers(secondOperand);
        result = firstOperand % secondOperand;
        cout << firstOperand % 10 << " "
             << "%"
             << " " << secondOperand << " "
             << "="
             << " " << result;
        return result;
    }
    else if (choice == "log2")
    {
        cout << "Enter your first Operand: ";
        float firstOperand;
        cin >> firstOperand;
        firstOperand = validationOnNumbers(firstOperand);
        result = log2(firstOperand);
        cout << "log2(" << firstOperand << ") = " << result << endl;
    }
    else if (choice == "Help")
    {
        cout << "You should one of these operand (+, - , *, /, %, Log2(n)) ";
        mathCalculator();
    }
    else
    {
        cout << "ERROR! Try another operand!\n";
        mathCalculator();
    }
    return result;
}
double MathCalculator::validationOnNumbers(double number)
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
