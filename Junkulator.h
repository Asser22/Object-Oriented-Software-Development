#ifndef JUNKULATOR_H
#define JUNKULATOR_H

#include "MathCalculator.h"
#include "StringTokenizer.h"
#include "MetricConversion.h"

class Junkulator{
private:
  MathCalculator m();
  StringTokenizer s();
  MetricConversion mc();

public:
  void printMenu();
  bool isLetter(string name);
  double validationOnNumbers(double number);
  string getName();
  char getChoice();
  double validateUserInput(double num);
  string help();
  string quit();
  string gradesCalculator();
  

};



#endif
