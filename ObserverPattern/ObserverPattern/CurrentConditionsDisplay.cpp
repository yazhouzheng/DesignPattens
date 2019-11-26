#include "CurrentConditionsDisplay.h"
#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* weatherData)
{
    m_WeatherData = weatherData;
    m_WeatherData->registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
    if (m_WeatherData != nullptr)
    {
        delete m_WeatherData;
        m_WeatherData = nullptr;
    }
}

void CurrentConditionsDisplay::update(float temp, float humidity, float pressure)
{
    m_Temperature = temp;
    m_Humidity = humidity;
    display();
}

void CurrentConditionsDisplay::display()
{
    std::cout << "Current conditions: " << m_Temperature << "F Degrees and "
        << m_Humidity << "% humidity." << std::endl;
}
