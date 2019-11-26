#include "WeatherData.h"

WeatherData::WeatherData():
    m_Temperature(0),
    m_Humidity(0),
    m_Pressure(0)
{
    m_Observers.clear();
}

WeatherData::~WeatherData()
{
}

void WeatherData::registerObserver(Observer* o)
{
    m_Observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o)
{
    for (std::vector<Observer*>::iterator it = m_Observers.begin(); it != m_Observers.end(); ++it)
    {
        if (*it == o)
            m_Observers.erase(it);
    }
}

void WeatherData::notifyObservers()
{
    for (std::vector<Observer*>::iterator it = m_Observers.begin(); it != m_Observers.end(); ++it)
    {
        (*it)->update(m_Temperature, m_Humidity, m_Pressure);
    }
}

void  WeatherData::measurementsChanged()
{
    notifyObservers();
}

void  WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    m_Temperature = temperature;
    m_Humidity = humidity;
    m_Pressure = pressure;
    measurementsChanged();
}

