#include <assert.h>
#include <iostream>
#include <string>
#include "./test-weather.h"
#include "./weatherreport.h"
using std::string;

SensorStub::SensorStub() {
    humid = 72;
    precipitation = 70;
    tempInc = 26;
    windSpeed = 52;
}
SensorStub::SensorStub(int h, int p, int t, int w) {
    humid = h;
    precipitation = p;
    tempInc = t;
    windSpeed = w;
}
int SensorStub::Humidity() const {
    return humid;
}

int SensorStub::Precipitation() const {
    return precipitation;
}

double SensorStub::TemperatureInC() const {
    return tempInc;
}

int SensorStub::WindSpeedKMPH() const {
    return windSpeed;
}
// This is a function to predict the weather, based on readings
// from a sensor

string Report(const WeatherSpace::IWeatherSensor& sensor) {
    int precipitation = sensor.Precipitation();
    // precipitation < 20 is a sunny day
    string report = "Sunny day";

    if (sensor.TemperatureInC() > 25) {
        if (precipitation >= 20 && precipitation < 60)
            report = "Partly cloudy";
        else if (sensor.WindSpeedKMPH() > 50 || precipitation > 60)
            report = "Alert, Stormy with heavy rain";
    }
    return report;
}

// Test a rainy day
void TestRainy() {
    SensorStub sensor;
    string report = Report(sensor);
    std::cout << report << std::endl;
    assert(report.find("rain") != string::npos);
}

// Test another rainy day

void TestHighPrecipitationAndLowWindspeed() {
    // This instance of stub needs to be different-
    // to give high precipitation (>60) and low wind-speed (<50)
    SensorStub sensor(70, 62, 30, 48);

    // strengthen the assert to expose the bug
    // (function returns Sunny day, it should predict rain)
    string report = Report(sensor);
    std::cout << report << std::endl;
    assert(report.find("rain") != string::npos);
}

// Test Partly Cloudy
void TestPartlyCloudy() {
    // This instance of stub should have precipitation (20<=60<)
    SensorStub sensor(70, 50, 30, 48);

    // strengthen the assert to expose the bug
    // (function returns Sunny day, it should predict rain)
    string report = Report(sensor);
    std::cout << report << std::endl;
    assert(report.find("cloudy") != string::npos);
}
