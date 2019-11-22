#pragma once
#include <iostream>
class QuackBehavior
{
public:
    QuackBehavior();
    ~QuackBehavior();

    virtual void quack() = 0;
};

