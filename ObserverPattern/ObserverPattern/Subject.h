#pragma once
#include "Observer.h"

class Subject
{
public:
    Subject();
    ~Subject();

    virtual void registerObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
    virtual void notifyObservers() = 0;
};

