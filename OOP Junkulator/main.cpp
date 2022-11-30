#include <iostream>
#include <string>
#include "Junkulator.h"
using namespace std;


int main(){
    Junkulator j();
//   j.printMenu();
//   //j.quit();
//   j.JunkuLator();


  string name = j.getName();

  char choice = j.getChoice();

  switch (choice)
  {
  case '1':
      j.getMathCalculator().mathCalculator();
      break;
  case '2':
      j.getMetricConversion().metricConversion();
      break;
  case '3':
      j.getMetricConversion().gradesCalculator();
      break;
  case '4':
      j.getStringTokenizer().stringTokenizer();
      break;
  case '5':
      j.help();
      break;
  case '6':
      j.quit();
      break;
  case 'q':
      j.quit();
      break;
  case 'Q':
      j.quit();
      break;
  case 'h':
      j.help();
      break;
  case 'H':
      j.help();
      break;
  default:
      cout << "Not a Valid Choice. \n"
           << "Choose again.\n";
      break;









  return 0;

}
