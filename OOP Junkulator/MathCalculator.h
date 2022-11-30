#ifndef MATHCALCULATOR_H
#define MATHCALCULATOR_H

#include <string>
#include <iostream>
using namespace std;

class MathCalculator
{
private:
    int operand1;
    int operand2;
    string operation;

public:
    MathCalculator() = default;
    int mathCalculator();
    double validationOnNumbers(double number);
};

#endif