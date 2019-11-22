#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
    Duck();
    ~Duck();

    virtual void display() = 0;
    void performFly();
    void performQuack();
    void swim();

    void setFlyBehavior(FlyBehavior* fb);
    void setQuackBehavior(QuackBehavior* qb);

protected :
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
};

