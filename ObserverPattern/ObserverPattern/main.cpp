#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

int main(int argc, char** argv)
{
    WeatherData* weatherData = new WeatherData();
    CurrentConditionsDisplay currentDisplay(weatherData);

    weatherData->setMeasurements(80, 65, 30.4f);
    weatherData->setMeasurements(70, 57, 32.4f);

    weatherData->~WeatherData();
}