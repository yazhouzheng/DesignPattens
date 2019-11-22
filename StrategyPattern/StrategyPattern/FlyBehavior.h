#pragma once
#include <iostream>
class FlyBehavior
{
public:
    FlyBehavior();
    ~FlyBehavior();

    virtual void fly() = 0;
};

