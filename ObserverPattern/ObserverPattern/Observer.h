#pragma once
class Observer
{
public:
    Observer();
    ~Observer();

    virtual void update(float temp, float humidity, float pressure) = 0;
};

