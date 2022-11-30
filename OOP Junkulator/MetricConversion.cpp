#include "MetricConversion.h"
#include <cmath>

//*********************Metric Conversion*********************//
void MetricConversion::printMenuForMetricConversion();
int MetricConversion::getChoiceForMetricConversion()
{
    int choice;
    printMenuForMetricConversion();
    cin >> choice;
    choice = validationOnNumbers(choice);
    return choice;
}

float MetricConversion::fromMilesToKilometers()
{
    // Miles to KM
    float miles;
    cout << "Please enter your miles value: ";
    cin >> miles;
    miles = validationOnNumbers(miles);
    float kilometers = miles * 1.60934;
    cout << "Your answer is " << std::setprecision(4) << kilometers << " Kilometers";
    return kilometers;
}

float MetricConversion::fromKilometersToMiles()
{
    // KM to Miles
    float kilometers;
    cout << "\n";
    cout << "Please enter your kilometers value: ";
    cin >> kilometers;
    kilometers = validationOnNumbers(kilometers);
    float miles = kilometers * 0.62137;
    cout << "Your answer is " << std::setprecision(4) << miles << " miles";
    return miles;
}

float MetricConversion::fromKilogramsToPounds()
{
    // Kg to pounds
    float kilogram;
    cout << "\n";
    cout << "Please enter your kilograms value: ";
    cin >> kilogram;
    kilogram = validationOnNumbers(kilogram);
    float pounds = kilogram * 2.20462;
    cout << "Your answer is " << std::setprecision(4) << pounds << " pounds";
    return pounds;
}

float MetricConversion::fromPoundsToKilograms()
{
    // pounds to kg
    float pounds;
    cout << "\n";
    cout << "Please enter your pounds value: ";
    cin >> pounds;
    pounds = validationOnNumbers(pounds);
    float kilogram = pounds * 0.45359237;
    cout << "Your answer is " << std::setprecision(4) << kilogram << " kilogram";
    return kilogram;
}

float MetricConversion::fromInchesToCentimetres()
{
    // inches to cm
    float inches;
    cout << "\n";
    cout << "Please enter your inches value: ";
    cin >> inches;
    inches = validationOnNumbers(inches);
    float centimetres = inches * 2.54;
    cout << "Your answer is " << std::setprecision(4) << centimetres << " centimetres";
    return centimetres;
}

float MetricConversion::fromCentimetresToInches()
{
    // cm to inches
    float centimetres;
    cout << "\n";
    cout << "Please enter your centimetres value: ";
    cin >> centimetres;
    centimetres = validationOnNumbers(centimetres);
    float inches = centimetres / 2.54;
    cout << "Your answer is " << std::setprecision(4) << inches << " inches";
    return inches;
}

void MetricConversion::printMenuForMetricConversion()
{
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

float MetricConversion::metricConversion()
{
    int choice = getChoiceForMetricConversion();
    switch (choice)
    {
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
