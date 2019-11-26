#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
class CurrentConditionsDisplay : public Observer, DisplayElement
{
public:
    CurrentConditionsDisplay(Subject* weatherData);
    ~CurrentConditionsDisplay();

    void update(float temp, float humidity, float pressure);
    void display();

private:
    float m_Temperature;
    float m_Humidity;
    Subject* m_WeatherData;
};

