#ifndef METRICCONVERSION_H
#define METRICCONVERSION_H

#include <string>
#include <iostream>
using namespace std;

class MetricConversion
{
private:
    double value;

public:
    MetricConversion()=default;
    MetricConversion(double input);
    void printMenuForMetricConversion();
    int getChoiceForMetricConversion();
    float fromMilesToKilometers();
    float fromKilometersToMiles();
    float fromKilogramsToPounds();
    float fromPoundsToKilograms();
    float fromInchesToCentimetres();
    float fromCentimetresToInches();
    float metricConversion();

};

#endif
