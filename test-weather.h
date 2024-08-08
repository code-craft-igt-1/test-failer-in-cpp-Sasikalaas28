#pragma once
#include "./weatherreport.h"
/// This is a stub for a weather sensor. For the sake of testing
/// we create a stub that generates weather data and allows us to
/// test the other parts of this application in isolation
/// without needing the actual Sensor during development

class SensorStub : public WeatherSpace::IWeatherSensor {
private:
    int humid, precipitation, tempInc, windSpeed;

public:
    SensorStub();
    SensorStub(int h, int p, int t, int w);
    int Humidity() const override;

    int Precipitation() const override;

    double TemperatureInC() const override;

    int WindSpeedKMPH() const override;
};
string Report(const WeatherSpace::IWeatherSensor& sensor);
void TestRainy();
void TestHighPrecipitationAndLowWindspeed();
