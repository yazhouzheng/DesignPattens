#pragma once
#include "Subject.h"
#include <vector>

class WeatherData : public Subject
{
public:
    WeatherData();
    ~WeatherData();

    void registerObserver(Observer* o);
    void removeObserver(Observer* o);
    void notifyObservers();

    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);

private:
    std::vector<Observer*> m_Observers;
    float m_Temperature;
    float m_Humidity;
    float m_Pressure;
};

